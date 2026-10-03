/* main functions 00fae7d0..00fcc8e0 (125 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00fae7d0 size=16 callers=0 calls=0
*/
void sub_fae7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae7d0ULL || rel >= 0xfae7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae7e0 size=16 callers=0 calls=0
*/
void sub_fae7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae7e0ULL || rel >= 0xfae7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae7f0 size=16 callers=0 calls=0
*/
void sub_fae7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae7f0ULL || rel >= 0xfae800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae800 size=16 callers=0 calls=0
*/
void sub_fae800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae800ULL || rel >= 0xfae810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae810 size=16 callers=0 calls=0
*/
void sub_fae810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae810ULL || rel >= 0xfae820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae820 size=16 callers=0 calls=0
*/
void sub_fae820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae820ULL || rel >= 0xfae830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae830 size=32 callers=0 calls=0
*/
void sub_fae830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae830ULL || rel >= 0xfae850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae850 size=16 callers=0 calls=0
*/
void sub_fae850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae850ULL || rel >= 0xfae860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae860 size=16 callers=0 calls=0
*/
void sub_fae860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae860ULL || rel >= 0xfae870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae870 size=16 callers=0 calls=0
*/
void sub_fae870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae870ULL || rel >= 0xfae880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae880 size=16 callers=0 calls=0
*/
void sub_fae880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae880ULL || rel >= 0xfae890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae890 size=16 callers=0 calls=0
*/
void sub_fae890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae890ULL || rel >= 0xfae8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae8a0 size=16 callers=0 calls=0
*/
void sub_fae8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae8a0ULL || rel >= 0xfae8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae8b0 size=16 callers=0 calls=0
*/
void sub_fae8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae8b0ULL || rel >= 0xfae8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae8c0 size=32 callers=0 calls=0
*/
void sub_fae8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae8c0ULL || rel >= 0xfae8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae8e0 size=16 callers=0 calls=0
*/
void sub_fae8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae8e0ULL || rel >= 0xfae8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae8f0 size=16 callers=0 calls=0
*/
void sub_fae8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae8f0ULL || rel >= 0xfae900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae900 size=16 callers=0 calls=0
*/
void sub_fae900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae900ULL || rel >= 0xfae910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae910 size=16 callers=0 calls=0
*/
void sub_fae910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae910ULL || rel >= 0xfae920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae920 size=16 callers=0 calls=0
*/
void sub_fae920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae920ULL || rel >= 0xfae930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae930 size=16 callers=0 calls=0
*/
void sub_fae930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae930ULL || rel >= 0xfae940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae940 size=16 callers=0 calls=0
*/
void sub_fae940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae940ULL || rel >= 0xfae950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae950 size=144 callers=0 calls=2
   calls: sub_f9df90, sub_fa8210
*/
void sub_fae950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae950ULL || rel >= 0xfae9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae9e0 size=16 callers=0 calls=0
*/
void sub_fae9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae9e0ULL || rel >= 0xfae9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae9f0 size=16 callers=0 calls=0
*/
void sub_fae9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae9f0ULL || rel >= 0xfaea00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faea00 size=16 callers=0 calls=0
*/
void sub_faea00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaea00ULL || rel >= 0xfaea10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faea10 size=64 callers=0 calls=1
   calls: sub_fb55c0
*/
void sub_faea10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaea10ULL || rel >= 0xfaea50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faea50 size=16 callers=0 calls=0
*/
void sub_faea50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaea50ULL || rel >= 0xfaea60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faea60 size=16 callers=0 calls=0
*/
void sub_faea60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaea60ULL || rel >= 0xfaea70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faea70 size=16 callers=0 calls=0
*/
void sub_faea70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaea70ULL || rel >= 0xfaea80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faea80 size=16 callers=0 calls=0
*/
void sub_faea80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaea80ULL || rel >= 0xfaea90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faea90 size=16 callers=0 calls=0
*/
void sub_faea90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaea90ULL || rel >= 0xfaeaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faeaa0 size=16 callers=0 calls=0
*/
void sub_faeaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaeaa0ULL || rel >= 0xfaeab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faeab0 size=16 callers=0 calls=0
*/
void sub_faeab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaeab0ULL || rel >= 0xfaeac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faeac0 size=32 callers=0 calls=0
*/
void sub_faeac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaeac0ULL || rel >= 0xfaeae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faeae0 size=16 callers=0 calls=0
*/
void sub_faeae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaeae0ULL || rel >= 0xfaeaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faeaf0 size=16 callers=0 calls=0
*/
void sub_faeaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaeaf0ULL || rel >= 0xfaeb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faeb00 size=16 callers=0 calls=0
*/
void sub_faeb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaeb00ULL || rel >= 0xfaeb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faeb10 size=64 callers=0 calls=1
   calls: sub_fb55c0
*/
void sub_faeb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaeb10ULL || rel >= 0xfaeb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faeb50 size=16 callers=0 calls=0
*/
void sub_faeb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaeb50ULL || rel >= 0xfaeb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faeb60 size=16 callers=0 calls=0
*/
void sub_faeb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaeb60ULL || rel >= 0xfaeb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faeb70 size=16 callers=0 calls=0
*/
void sub_faeb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaeb70ULL || rel >= 0xfaeb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faeb80 size=16 callers=0 calls=0
*/
void sub_faeb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaeb80ULL || rel >= 0xfaeb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faeb90 size=16 callers=0 calls=0
*/
void sub_faeb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaeb90ULL || rel >= 0xfaeba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faeba0 size=16 callers=0 calls=0
*/
void sub_faeba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaeba0ULL || rel >= 0xfaebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faebb0 size=16 callers=0 calls=0
*/
void sub_faebb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaebb0ULL || rel >= 0xfaebc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faebc0 size=144 callers=0 calls=3
   calls: sub_eb6230, sub_eb77f0, sub_f9d830
*/
void sub_faebc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaebc0ULL || rel >= 0xfaec50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faec50 size=16 callers=0 calls=0
*/
void sub_faec50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaec50ULL || rel >= 0xfaec60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faec60 size=16 callers=0 calls=0
*/
void sub_faec60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaec60ULL || rel >= 0xfaec70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faec70 size=16 callers=0 calls=0
*/
void sub_faec70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaec70ULL || rel >= 0xfaec80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faec80 size=16 callers=0 calls=0
*/
void sub_faec80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaec80ULL || rel >= 0xfaec90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faec90 size=16 callers=0 calls=0
*/
void sub_faec90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaec90ULL || rel >= 0xfaeca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faeca0 size=16 callers=0 calls=0
*/
void sub_faeca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaeca0ULL || rel >= 0xfaecb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faecb0 size=16 callers=0 calls=0
*/
void sub_faecb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaecb0ULL || rel >= 0xfaecc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faecc0 size=144 callers=0 calls=3
   calls: sub_eb6230, sub_eb77f0, sub_f9d830
*/
void sub_faecc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaecc0ULL || rel >= 0xfaed50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faed50 size=16 callers=0 calls=0
*/
void sub_faed50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaed50ULL || rel >= 0xfaed60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faed60 size=16 callers=0 calls=0
*/
void sub_faed60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaed60ULL || rel >= 0xfaed70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faed70 size=16 callers=0 calls=0
*/
void sub_faed70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaed70ULL || rel >= 0xfaed80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faed80 size=16 callers=0 calls=0
*/
void sub_faed80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaed80ULL || rel >= 0xfaed90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faed90 size=16 callers=0 calls=0
*/
void sub_faed90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaed90ULL || rel >= 0xfaeda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faeda0 size=16 callers=0 calls=0
*/
void sub_faeda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaeda0ULL || rel >= 0xfaedb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faedb0 size=16 callers=0 calls=0
*/
void sub_faedb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaedb0ULL || rel >= 0xfaedc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faedc0 size=160 callers=0 calls=0
*/
void sub_faedc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaedc0ULL || rel >= 0xfaee60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faee60 size=288 callers=1 calls=3
   calls: anonymous, sub_d0c0, sub_fa8c20
   ref: StateHostTop
*/
void StateHostTop(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaee60ULL || rel >= 0xfaef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faef80 size=1376 callers=0 calls=25
   calls: G_Vb, sub_5cfaf0, sub_795bc0, sub_79b990, sub_a800f0, sub_c39c40, sub_e807f0, sub_eb6230, sub_eb76b0, sub_eb7730, sub_eba100, sub_fa1210
   ... +13 more
   ref: View_NestHole
   ref: View_Optionbar
*/
void View_Optionbar_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaef80ULL || rel >= 0xfaf4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faf4e0 size=944 callers=3 calls=9
   calls: sub_67d450, sub_c39c40, sub_e7eb10, sub_eb7570, sub_eb75e0, sub_fa1340, sub_faaa80, sub_fb9120, sub_fb9130
*/
void sub_faf4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaf4e0ULL || rel >= 0xfaf890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faf890 size=224 callers=2 calls=4
   calls: sub_e807f0, sub_eb6230, sub_eba100, sub_f9d830
*/
void sub_faf890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaf890ULL || rel >= 0xfaf970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faf970 size=2496 callers=0 calls=22
   calls: sub_e807f0, sub_eb6230, sub_eb6530, sub_eb7790, sub_eb7830, sub_eba100, sub_f9d830, sub_f9f200, sub_f9f690, sub_f9f6b0, sub_fa90e0, sub_fa9340
   ... +10 more
*/
void sub_faf970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaf970ULL || rel >= 0xfb0330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb0330 size=912 callers=1 calls=5
   calls: sub_eb6230, sub_eb77f0, sub_f9d830, sub_f9f200, sub_fa9580
*/
void sub_fb0330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb0330ULL || rel >= 0xfb06c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb06c0 size=544 callers=1 calls=3
   calls: StartCreateSession, sub_fa9870, sub_faaa80
*/
void sub_fb06c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb06c0ULL || rel >= 0xfb08e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb08e0 size=400 callers=1 calls=4
   calls: sub_f9df70, sub_fa8210, sub_fa9340, sub_fa98b0
*/
void sub_fb08e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb08e0ULL || rel >= 0xfb0a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb0a70 size=384 callers=0 calls=7
   calls: sub_101d670, sub_e807f0, sub_eb6230, sub_eba100, sub_f9d830, sub_f9ea40, sub_fa56e0
*/
void sub_fb0a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb0a70ULL || rel >= 0xfb0bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb0bf0 size=16 callers=0 calls=0
*/
void sub_fb0bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb0bf0ULL || rel >= 0xfb0c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb0c00 size=448 callers=0 calls=0
*/
void sub_fb0c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb0c00ULL || rel >= 0xfb0dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb0dc0 size=16 callers=0 calls=0
*/
void sub_fb0dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb0dc0ULL || rel >= 0xfb0dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb0dd0 size=16 callers=0 calls=0
*/
void sub_fb0dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb0dd0ULL || rel >= 0xfb0de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb0de0 size=16 callers=0 calls=0
*/
void sub_fb0de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb0de0ULL || rel >= 0xfb0df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb0df0 size=16 callers=0 calls=0
*/
void sub_fb0df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb0df0ULL || rel >= 0xfb0e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb0e00 size=16 callers=0 calls=0
*/
void sub_fb0e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb0e00ULL || rel >= 0xfb0e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb0e10 size=16 callers=0 calls=0
*/
void sub_fb0e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb0e10ULL || rel >= 0xfb0e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb0e20 size=16 callers=0 calls=0
*/
void sub_fb0e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb0e20ULL || rel >= 0xfb0e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb0e30 size=16 callers=0 calls=0
*/
void sub_fb0e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb0e30ULL || rel >= 0xfb0e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb0e40 size=304 callers=0 calls=0
*/
void sub_fb0e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb0e40ULL || rel >= 0xfb0f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb0f70 size=208 callers=0 calls=2
   calls: sub_e80580, sub_faaa80
*/
void sub_fb0f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb0f70ULL || rel >= 0xfb1040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1040 size=16 callers=0 calls=0
*/
void sub_fb1040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1040ULL || rel >= 0xfb1050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1050 size=16 callers=0 calls=0
*/
void sub_fb1050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1050ULL || rel >= 0xfb1060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1060 size=16 callers=0 calls=0
*/
void sub_fb1060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1060ULL || rel >= 0xfb1070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1070 size=16 callers=0 calls=0
*/
void sub_fb1070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1070ULL || rel >= 0xfb1080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1080 size=16 callers=0 calls=0
*/
void sub_fb1080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1080ULL || rel >= 0xfb1090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1090 size=16 callers=0 calls=0
*/
void sub_fb1090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1090ULL || rel >= 0xfb10a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb10a0 size=16 callers=0 calls=0
*/
void sub_fb10a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb10a0ULL || rel >= 0xfb10b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb10b0 size=128 callers=0 calls=4
   calls: sub_e807f0, sub_eb6230, sub_eba100, sub_fb55c0
*/
void sub_fb10b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb10b0ULL || rel >= 0xfb1130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1130 size=16 callers=0 calls=0
*/
void sub_fb1130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1130ULL || rel >= 0xfb1140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1140 size=16 callers=0 calls=0
*/
void sub_fb1140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1140ULL || rel >= 0xfb1150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1150 size=16 callers=0 calls=0
*/
void sub_fb1150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1150ULL || rel >= 0xfb1160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1160 size=16 callers=0 calls=0
*/
void sub_fb1160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1160ULL || rel >= 0xfb1170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1170 size=16 callers=0 calls=0
*/
void sub_fb1170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1170ULL || rel >= 0xfb1180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1180 size=16 callers=0 calls=0
*/
void sub_fb1180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1180ULL || rel >= 0xfb1190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1190 size=16 callers=0 calls=0
*/
void sub_fb1190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1190ULL || rel >= 0xfb11a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb11a0 size=128 callers=0 calls=3
   calls: sub_eb6230, sub_eb77f0, sub_f9d830
*/
void sub_fb11a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb11a0ULL || rel >= 0xfb1220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1220 size=16 callers=0 calls=0
*/
void sub_fb1220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1220ULL || rel >= 0xfb1230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1230 size=16 callers=0 calls=0
*/
void sub_fb1230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1230ULL || rel >= 0xfb1240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1240 size=16 callers=0 calls=0
*/
void sub_fb1240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1240ULL || rel >= 0xfb1250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1250 size=16 callers=0 calls=0
*/
void sub_fb1250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1250ULL || rel >= 0xfb1260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1260 size=16 callers=0 calls=0
*/
void sub_fb1260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1260ULL || rel >= 0xfb1270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1270 size=16 callers=0 calls=0
*/
void sub_fb1270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1270ULL || rel >= 0xfb1280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1280 size=16 callers=0 calls=0
*/
void sub_fb1280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1280ULL || rel >= 0xfb1290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1290 size=32 callers=0 calls=0
*/
void sub_fb1290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1290ULL || rel >= 0xfb12b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb12b0 size=16 callers=0 calls=0
*/
void sub_fb12b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb12b0ULL || rel >= 0xfb12c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb12c0 size=16 callers=0 calls=0
*/
void sub_fb12c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb12c0ULL || rel >= 0xfb12d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb12d0 size=16 callers=0 calls=0
*/
void sub_fb12d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb12d0ULL || rel >= 0xfb12e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb12e0 size=16 callers=0 calls=0
*/
void sub_fb12e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb12e0ULL || rel >= 0xfb12f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb12f0 size=16 callers=0 calls=0
*/
void sub_fb12f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb12f0ULL || rel >= 0xfb1300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1300 size=16 callers=0 calls=0
*/
void sub_fb1300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1300ULL || rel >= 0xfb1310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1310 size=16 callers=0 calls=0
*/
void sub_fb1310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1310ULL || rel >= 0xfb1320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1320 size=16 callers=0 calls=0
*/
void sub_fb1320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1320ULL || rel >= 0xfb1330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1330 size=16 callers=0 calls=0
*/
void sub_fb1330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1330ULL || rel >= 0xfb1340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1340 size=16 callers=0 calls=0
*/
void sub_fb1340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1340ULL || rel >= 0xfb1350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1350 size=16 callers=0 calls=0
*/
void sub_fb1350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1350ULL || rel >= 0xfb1360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1360 size=112 callers=0 calls=3
   calls: sub_e807f0, sub_eb6230, sub_eba100
*/
void sub_fb1360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1360ULL || rel >= 0xfb13d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb13d0 size=16 callers=0 calls=0
*/
void sub_fb13d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb13d0ULL || rel >= 0xfb13e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb13e0 size=16 callers=0 calls=0
*/
void sub_fb13e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb13e0ULL || rel >= 0xfb13f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb13f0 size=16 callers=0 calls=0
*/
void sub_fb13f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb13f0ULL || rel >= 0xfb1400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1400 size=16 callers=0 calls=0
*/
void sub_fb1400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1400ULL || rel >= 0xfb1410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1410 size=16 callers=0 calls=0
*/
void sub_fb1410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1410ULL || rel >= 0xfb1420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1420 size=16 callers=0 calls=0
*/
void sub_fb1420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1420ULL || rel >= 0xfb1430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1430 size=16 callers=0 calls=0
*/
void sub_fb1430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1430ULL || rel >= 0xfb1440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1440 size=112 callers=0 calls=3
   calls: sub_e807f0, sub_eb6230, sub_eba100
*/
void sub_fb1440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1440ULL || rel >= 0xfb14b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb14b0 size=16 callers=0 calls=0
*/
void sub_fb14b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb14b0ULL || rel >= 0xfb14c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb14c0 size=16 callers=0 calls=0
*/
void sub_fb14c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb14c0ULL || rel >= 0xfb14d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb14d0 size=16 callers=0 calls=0
*/
void sub_fb14d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb14d0ULL || rel >= 0xfb14e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb14e0 size=16 callers=0 calls=0
*/
void sub_fb14e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb14e0ULL || rel >= 0xfb14f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb14f0 size=16 callers=0 calls=0
*/
void sub_fb14f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb14f0ULL || rel >= 0xfb1500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1500 size=16 callers=0 calls=0
*/
void sub_fb1500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1500ULL || rel >= 0xfb1510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1510 size=16 callers=0 calls=0
*/
void sub_fb1510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1510ULL || rel >= 0xfb1520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1520 size=128 callers=0 calls=4
   calls: sub_e807f0, sub_eb6230, sub_eba100, sub_faf4e0
*/
void sub_fb1520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1520ULL || rel >= 0xfb15a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb15a0 size=16 callers=0 calls=0
*/
void sub_fb15a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb15a0ULL || rel >= 0xfb15b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb15b0 size=16 callers=0 calls=0
*/
void sub_fb15b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb15b0ULL || rel >= 0xfb15c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb15c0 size=16 callers=0 calls=0
*/
void sub_fb15c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb15c0ULL || rel >= 0xfb15d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb15d0 size=240 callers=0 calls=4
   calls: sub_e807f0, sub_eb6230, sub_eba100, sub_faaa80
*/
void sub_fb15d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb15d0ULL || rel >= 0xfb16c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb16c0 size=16 callers=0 calls=0
*/
void sub_fb16c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb16c0ULL || rel >= 0xfb16d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb16d0 size=16 callers=0 calls=0
*/
void sub_fb16d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb16d0ULL || rel >= 0xfb16e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb16e0 size=16 callers=0 calls=0
*/
void sub_fb16e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb16e0ULL || rel >= 0xfb16f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb16f0 size=16 callers=0 calls=0
*/
void sub_fb16f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb16f0ULL || rel >= 0xfb1700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1700 size=16 callers=0 calls=0
*/
void sub_fb1700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1700ULL || rel >= 0xfb1710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1710 size=16 callers=0 calls=0
*/
void sub_fb1710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1710ULL || rel >= 0xfb1720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1720 size=16 callers=0 calls=0
*/
void sub_fb1720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1720ULL || rel >= 0xfb1730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1730 size=16 callers=0 calls=0
*/
void sub_fb1730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1730ULL || rel >= 0xfb1740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1740 size=16 callers=0 calls=0
*/
void sub_fb1740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1740ULL || rel >= 0xfb1750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1750 size=16 callers=0 calls=0
*/
void sub_fb1750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1750ULL || rel >= 0xfb1760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1760 size=16 callers=0 calls=0
*/
void sub_fb1760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1760ULL || rel >= 0xfb1770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1770 size=128 callers=0 calls=4
   calls: sub_e807f0, sub_eb6230, sub_eba100, sub_fb55c0
*/
void sub_fb1770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1770ULL || rel >= 0xfb17f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb17f0 size=16 callers=0 calls=0
*/
void sub_fb17f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb17f0ULL || rel >= 0xfb1800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1800 size=16 callers=0 calls=0
*/
void sub_fb1800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1800ULL || rel >= 0xfb1810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1810 size=16 callers=0 calls=0
*/
void sub_fb1810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1810ULL || rel >= 0xfb1820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1820 size=16 callers=0 calls=0
*/
void sub_fb1820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1820ULL || rel >= 0xfb1830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1830 size=16 callers=0 calls=0
*/
void sub_fb1830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1830ULL || rel >= 0xfb1840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1840 size=16 callers=0 calls=0
*/
void sub_fb1840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1840ULL || rel >= 0xfb1850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1850 size=16 callers=0 calls=0
*/
void sub_fb1850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1850ULL || rel >= 0xfb1860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1860 size=240 callers=0 calls=5
   calls: sub_e807f0, sub_eb6230, sub_eba100, sub_faaa80, sub_faf4e0
*/
void sub_fb1860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1860ULL || rel >= 0xfb1950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1950 size=16 callers=0 calls=0
*/
void sub_fb1950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1950ULL || rel >= 0xfb1960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1960 size=16 callers=0 calls=0
*/
void sub_fb1960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1960ULL || rel >= 0xfb1970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1970 size=16 callers=0 calls=0
*/
void sub_fb1970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1970ULL || rel >= 0xfb1980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1980 size=112 callers=0 calls=3
   calls: sub_e807f0, sub_eb6230, sub_eba100
*/
void sub_fb1980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1980ULL || rel >= 0xfb19f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb19f0 size=16 callers=0 calls=0
*/
void sub_fb19f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb19f0ULL || rel >= 0xfb1a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1a00 size=16 callers=0 calls=0
*/
void sub_fb1a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1a00ULL || rel >= 0xfb1a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1a10 size=16 callers=0 calls=0
*/
void sub_fb1a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1a10ULL || rel >= 0xfb1a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1a20 size=16 callers=0 calls=0
*/
void sub_fb1a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1a20ULL || rel >= 0xfb1a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1a30 size=16 callers=0 calls=0
*/
void sub_fb1a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1a30ULL || rel >= 0xfb1a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1a40 size=16 callers=0 calls=0
*/
void sub_fb1a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1a40ULL || rel >= 0xfb1a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1a50 size=16 callers=0 calls=0
*/
void sub_fb1a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1a50ULL || rel >= 0xfb1a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1a60 size=176 callers=0 calls=3
   calls: sub_101d620, sub_f9d830, sub_fa56e0
*/
void sub_fb1a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1a60ULL || rel >= 0xfb1b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1b10 size=16 callers=0 calls=0
*/
void sub_fb1b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1b10ULL || rel >= 0xfb1b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1b20 size=16 callers=0 calls=0
*/
void sub_fb1b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1b20ULL || rel >= 0xfb1b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1b30 size=16 callers=0 calls=0
*/
void sub_fb1b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1b30ULL || rel >= 0xfb1b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1b40 size=16 callers=0 calls=0
*/
void sub_fb1b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1b40ULL || rel >= 0xfb1b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1b50 size=16 callers=0 calls=0
*/
void sub_fb1b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1b50ULL || rel >= 0xfb1b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1b60 size=16 callers=0 calls=0
*/
void sub_fb1b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1b60ULL || rel >= 0xfb1b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1b70 size=16 callers=0 calls=0
*/
void sub_fb1b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1b70ULL || rel >= 0xfb1b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1b80 size=128 callers=0 calls=3
   calls: sub_eb6230, sub_eb77f0, sub_f9d830
*/
void sub_fb1b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1b80ULL || rel >= 0xfb1c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1c00 size=16 callers=0 calls=0
*/
void sub_fb1c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1c00ULL || rel >= 0xfb1c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1c10 size=16 callers=0 calls=0
*/
void sub_fb1c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1c10ULL || rel >= 0xfb1c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1c20 size=16 callers=0 calls=0
*/
void sub_fb1c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1c20ULL || rel >= 0xfb1c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1c30 size=16 callers=0 calls=0
*/
void sub_fb1c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1c30ULL || rel >= 0xfb1c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1c40 size=16 callers=0 calls=0
*/
void sub_fb1c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1c40ULL || rel >= 0xfb1c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1c50 size=16 callers=0 calls=0
*/
void sub_fb1c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1c50ULL || rel >= 0xfb1c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1c60 size=16 callers=0 calls=0
*/
void sub_fb1c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1c60ULL || rel >= 0xfb1c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1c70 size=160 callers=0 calls=0
*/
void sub_fb1c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1c70ULL || rel >= 0xfb1d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1d10 size=272 callers=1 calls=3
   calls: anonymous, sub_d0c0, sub_fa8c20
   ref: StateFirstPokemonValidation
*/
void StateFirstPokemonValidation(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1d10ULL || rel >= 0xfb1e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb1e20 size=992 callers=0 calls=18
   calls: G_Vb, sub_5cfaf0, sub_795bc0, sub_79b990, sub_c39c40, sub_e807f0, sub_eb6230, sub_eb75e0, sub_eb7730, sub_fa1210, sub_fa1340, sub_fa19c0
   ... +6 more
   ref: View_NestHole
   ref: View_Optionbar
*/
void View_Optionbar_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb1e20ULL || rel >= 0xfb2200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2200 size=1120 callers=0 calls=10
   calls: sub_76f440, sub_76f7e0, sub_eb6530, sub_eb7790, sub_eb7830, sub_fa56e0, sub_fa90e0, sub_fa9340, sub_fa9870, sub_fb2de0
*/
void sub_fb2200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2200ULL || rel >= 0xfb2660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2660 size=272 callers=0 calls=1
   calls: sub_f9d830
*/
void sub_fb2660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2660ULL || rel >= 0xfb2770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2770 size=16 callers=0 calls=0
*/
void sub_fb2770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2770ULL || rel >= 0xfb2780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2780 size=352 callers=0 calls=0
*/
void sub_fb2780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2780ULL || rel >= 0xfb28e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb28e0 size=16 callers=0 calls=0
*/
void sub_fb28e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb28e0ULL || rel >= 0xfb28f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb28f0 size=16 callers=0 calls=0
*/
void sub_fb28f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb28f0ULL || rel >= 0xfb2900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2900 size=16 callers=0 calls=0
*/
void sub_fb2900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2900ULL || rel >= 0xfb2910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2910 size=16 callers=0 calls=0
*/
void sub_fb2910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2910ULL || rel >= 0xfb2920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2920 size=16 callers=0 calls=0
*/
void sub_fb2920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2920ULL || rel >= 0xfb2930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2930 size=16 callers=0 calls=0
*/
void sub_fb2930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2930ULL || rel >= 0xfb2940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2940 size=16 callers=0 calls=0
*/
void sub_fb2940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2940ULL || rel >= 0xfb2950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2950 size=16 callers=0 calls=0
*/
void sub_fb2950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2950ULL || rel >= 0xfb2960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2960 size=304 callers=0 calls=0
*/
void sub_fb2960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2960ULL || rel >= 0xfb2a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2a90 size=32 callers=0 calls=0
*/
void sub_fb2a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2a90ULL || rel >= 0xfb2ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2ab0 size=16 callers=0 calls=0
*/
void sub_fb2ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2ab0ULL || rel >= 0xfb2ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2ac0 size=16 callers=0 calls=0
*/
void sub_fb2ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2ac0ULL || rel >= 0xfb2ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2ad0 size=16 callers=0 calls=0
*/
void sub_fb2ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2ad0ULL || rel >= 0xfb2ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2ae0 size=16 callers=0 calls=0
*/
void sub_fb2ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2ae0ULL || rel >= 0xfb2af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2af0 size=16 callers=0 calls=0
*/
void sub_fb2af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2af0ULL || rel >= 0xfb2b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2b00 size=16 callers=0 calls=0
*/
void sub_fb2b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2b00ULL || rel >= 0xfb2b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2b10 size=16 callers=0 calls=0
*/
void sub_fb2b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2b10ULL || rel >= 0xfb2b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2b20 size=16 callers=0 calls=0
*/
void sub_fb2b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2b20ULL || rel >= 0xfb2b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2b30 size=16 callers=0 calls=0
*/
void sub_fb2b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2b30ULL || rel >= 0xfb2b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2b40 size=16 callers=0 calls=0
*/
void sub_fb2b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2b40ULL || rel >= 0xfb2b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2b50 size=16 callers=0 calls=0
*/
void sub_fb2b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2b50ULL || rel >= 0xfb2b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2b60 size=128 callers=0 calls=3
   calls: sub_eb6230, sub_eb77f0, sub_f9d830
*/
void sub_fb2b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2b60ULL || rel >= 0xfb2be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2be0 size=16 callers=0 calls=0
*/
void sub_fb2be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2be0ULL || rel >= 0xfb2bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2bf0 size=16 callers=0 calls=0
*/
void sub_fb2bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2bf0ULL || rel >= 0xfb2c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2c00 size=16 callers=0 calls=0
*/
void sub_fb2c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2c00ULL || rel >= 0xfb2c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2c10 size=16 callers=0 calls=0
*/
void sub_fb2c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2c10ULL || rel >= 0xfb2c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2c20 size=16 callers=0 calls=0
*/
void sub_fb2c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2c20ULL || rel >= 0xfb2c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2c30 size=16 callers=0 calls=0
*/
void sub_fb2c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2c30ULL || rel >= 0xfb2c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2c40 size=16 callers=0 calls=0
*/
void sub_fb2c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2c40ULL || rel >= 0xfb2c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2c50 size=128 callers=0 calls=3
   calls: sub_eb6230, sub_eb77f0, sub_f9d830
*/
void sub_fb2c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2c50ULL || rel >= 0xfb2cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2cd0 size=16 callers=0 calls=0
*/
void sub_fb2cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2cd0ULL || rel >= 0xfb2ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2ce0 size=16 callers=0 calls=0
*/
void sub_fb2ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2ce0ULL || rel >= 0xfb2cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2cf0 size=16 callers=0 calls=0
*/
void sub_fb2cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2cf0ULL || rel >= 0xfb2d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2d00 size=16 callers=0 calls=0
*/
void sub_fb2d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2d00ULL || rel >= 0xfb2d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2d10 size=16 callers=0 calls=0
*/
void sub_fb2d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2d10ULL || rel >= 0xfb2d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2d20 size=16 callers=0 calls=0
*/
void sub_fb2d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2d20ULL || rel >= 0xfb2d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2d30 size=16 callers=0 calls=0
*/
void sub_fb2d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2d30ULL || rel >= 0xfb2d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2d40 size=160 callers=0 calls=0
*/
void sub_fb2d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2d40ULL || rel >= 0xfb2de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb2de0 size=816 callers=4 calls=3
   calls: RequestPokemonValidation, sub_105c390, sub_783bd0
*/
void sub_fb2de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb2de0ULL || rel >= 0xfb3110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb3110 size=112 callers=0 calls=0
*/
void sub_fb3110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb3110ULL || rel >= 0xfb3180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb3180 size=64 callers=0 calls=0
*/
void sub_fb3180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb3180ULL || rel >= 0xfb31c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb31c0 size=48 callers=0 calls=0
*/
void sub_fb31c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb31c0ULL || rel >= 0xfb31f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb31f0 size=48 callers=0 calls=0
*/
void sub_fb31f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb31f0ULL || rel >= 0xfb3220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb3220 size=80 callers=0 calls=0
*/
void sub_fb3220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb3220ULL || rel >= 0xfb3270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb3270 size=64 callers=0 calls=0
*/
void sub_fb3270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb3270ULL || rel >= 0xfb32b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb32b0 size=48 callers=0 calls=0
*/
void sub_fb32b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb32b0ULL || rel >= 0xfb32e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb32e0 size=48 callers=0 calls=0
*/
void sub_fb32e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb32e0ULL || rel >= 0xfb3310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb3310 size=160 callers=0 calls=0
*/
void sub_fb3310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb3310ULL || rel >= 0xfb33b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb33b0 size=240 callers=0 calls=4
   calls: sub_5cfad0, sub_e7e890, sub_e7ea20, sub_e7eb40
*/
void sub_fb33b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb33b0ULL || rel >= 0xfb34a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb34a0 size=1312 callers=0 calls=9
   calls: G_Vb, sub_14aad40, sub_14ba7b0, sub_14e1a30, sub_8f19b0, sub_8f3180, sub_e7eb10, sub_e84310, sub_fb7240
*/
void sub_fb34a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb34a0ULL || rel >= 0xfb39c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb39c0 size=576 callers=7 calls=6
   calls: sub_14e1a30, sub_e82ef0, sub_e83430, sub_e83540, sub_e84310, sub_fb4010
   ref: G,{Vb"-
*/
void G_Vb(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb39c0ULL || rel >= 0xfb3c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb3c00 size=1040 callers=5 calls=11
   calls: sub_14aad40, sub_14bbd10, sub_14d6920, sub_1500c40, sub_8f19b0, sub_8f3180, sub_e83430, sub_e83930, sub_e83c60, sub_fb4010, sub_fb50a0
*/
void sub_fb3c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb3c00ULL || rel >= 0xfb4010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb4010 size=4240 callers=2 calls=5
   calls: sub_14e6550, sub_8f19b0, sub_e83e60, sub_e84190, sub_fb5ed0
*/
void sub_fb4010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb4010ULL || rel >= 0xfb50a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb50a0 size=1168 callers=2 calls=10
   calls: sub_1315b90, sub_14aad40, sub_14ac370, sub_67d450, sub_e83c60, sub_fb55e0, sub_fb5740, sub_fb5c80, sub_fb5ed0, sub_fb64b0
*/
void sub_fb50a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb50a0ULL || rel >= 0xfb5530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb5530 size=144 callers=4 calls=1
   calls: sub_14ab2b0
*/
void sub_fb5530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb5530ULL || rel >= 0xfb55c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb55c0 size=32 callers=7 calls=0
*/
void sub_fb55c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb55c0ULL || rel >= 0xfb55e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb55e0 size=352 callers=1 calls=1
   calls: sub_fb6650
*/
void sub_fb55e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb55e0ULL || rel >= 0xfb5740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb5740 size=1344 callers=4 calls=13
   calls: player_icon_table_3, sub_12f9fc0, sub_1314a80, sub_14ac370, sub_67bd90, sub_67bdc0, sub_67d450, sub_8f19b0, sub_8f3180, sub_e83430, sub_e83540, sub_fb6730
   ... +1 more
*/
void sub_fb5740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb5740ULL || rel >= 0xfb5c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb5c80 size=592 callers=1 calls=4
   calls: sub_1315b90, sub_14ac370, sub_67d450, sub_8f19b0
*/
void sub_fb5c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb5c80ULL || rel >= 0xfb5ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb5ed0 size=1504 callers=2 calls=5
   calls: sub_14e1a00, sub_14e1a30, sub_14e6d90, sub_e83e60, sub_e84190
*/
void sub_fb5ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb5ed0ULL || rel >= 0xfb64b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb64b0 size=416 callers=1 calls=1
   calls: sub_fb7340
*/
void sub_fb64b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb64b0ULL || rel >= 0xfb6650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb6650 size=224 callers=4 calls=3
   calls: sub_12f9fc0, sub_67bd90, sub_67bdc0
*/
void sub_fb6650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb6650ULL || rel >= 0xfb6730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb6730 size=352 callers=2 calls=4
   calls: sub_14bbd10, sub_7a3a10, sub_e83430, sub_fb6890
*/
void sub_fb6730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb6730ULL || rel >= 0xfb6890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb6890 size=272 callers=2 calls=2
   calls: sub_1313c10, sub_67d450
*/
void sub_fb6890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb6890ULL || rel >= 0xfb69a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb69a0 size=16 callers=0 calls=0
*/
void sub_fb69a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb69a0ULL || rel >= 0xfb69b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb69b0 size=496 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/traces/bin/traces_top_00_lyt.bin
   ref: bin/appli/traces/bin/uikit_setting_traces_top_00.bin
*/
void uikit_setting_traces_top_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb69b0ULL || rel >= 0xfb6ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb6ba0 size=144 callers=0 calls=2
   calls: sub_14aad40, sub_e84310
*/
void sub_fb6ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb6ba0ULL || rel >= 0xfb6c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb6c30 size=176 callers=0 calls=2
   calls: sub_14aad40, sub_e84310
*/
void sub_fb6c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb6c30ULL || rel >= 0xfb6ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb6ce0 size=256 callers=0 calls=9
   calls: sub_14ab2b0, sub_14e1a30, sub_14e6550, sub_14e6d50, sub_1500c40, sub_e84190, sub_e84310, sub_fb50a0, sub_fb6de0
*/
void sub_fb6ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb6ce0ULL || rel >= 0xfb6de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb6de0 size=208 callers=1 calls=4
   calls: sub_14e1a30, sub_5cfaf0, sub_e80860, sub_e84310
*/
void sub_fb6de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb6de0ULL || rel >= 0xfb6eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb6eb0 size=96 callers=0 calls=1
   calls: sub_fb7550
*/
void sub_fb6eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb6eb0ULL || rel >= 0xfb6f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb6f10 size=96 callers=0 calls=1
   calls: sub_fb7550
*/
void sub_fb6f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb6f10ULL || rel >= 0xfb6f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb6f70 size=112 callers=0 calls=1
   calls: sub_e7f6c0
*/
void sub_fb6f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb6f70ULL || rel >= 0xfb6fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb6fe0 size=96 callers=0 calls=1
   calls: sub_fb7550
*/
void sub_fb6fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb6fe0ULL || rel >= 0xfb7040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb7040 size=96 callers=0 calls=1
   calls: sub_fb7550
*/
void sub_fb7040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb7040ULL || rel >= 0xfb70a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb70a0 size=112 callers=0 calls=1
   calls: sub_e7f6c0
*/
void sub_fb70a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb70a0ULL || rel >= 0xfb7110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb7110 size=112 callers=0 calls=1
   calls: sub_e7f6c0
*/
void sub_fb7110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb7110ULL || rel >= 0xfb7180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb7180 size=96 callers=0 calls=1
   calls: sub_fb7550
*/
void sub_fb7180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb7180ULL || rel >= 0xfb71e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb71e0 size=96 callers=0 calls=1
   calls: sub_fb7550
*/
void sub_fb71e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb71e0ULL || rel >= 0xfb7240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb7240 size=256 callers=8 calls=1
   calls: sub_67b990
*/
void sub_fb7240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb7240ULL || rel >= 0xfb7340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb7340 size=304 callers=10 calls=3
   calls: sub_67bc30, sub_67bdc0, sub_67bfa0
*/
void sub_fb7340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb7340ULL || rel >= 0xfb7470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb7470 size=224 callers=2 calls=1
   calls: sub_14aad40
*/
void sub_fb7470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb7470ULL || rel >= 0xfb7550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb7550 size=496 callers=7 calls=3
   calls: sub_67bdc0, sub_67bfa0, sub_fb7740
*/
void sub_fb7550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb7550ULL || rel >= 0xfb7740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb7740 size=352 callers=1 calls=2
   calls: sub_67bdc0, sub_67bfa0
*/
void sub_fb7740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb7740ULL || rel >= 0xfb78a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb78a0 size=144 callers=0 calls=5
   calls: sub_14e1a30, sub_14e6550, sub_14e6d50, sub_e84190, sub_e84310
*/
void sub_fb78a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb78a0ULL || rel >= 0xfb7930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb7930 size=16 callers=0 calls=0
*/
void sub_fb7930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb7930ULL || rel >= 0xfb7940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb7940 size=16 callers=0 calls=0
*/
void sub_fb7940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb7940ULL || rel >= 0xfb7950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb7950 size=16 callers=0 calls=0
*/
void sub_fb7950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb7950ULL || rel >= 0xfb7960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb7960 size=32 callers=0 calls=0
*/
void sub_fb7960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb7960ULL || rel >= 0xfb7980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb7980 size=16 callers=0 calls=0
*/
void sub_fb7980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb7980ULL || rel >= 0xfb7990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb7990 size=16 callers=0 calls=0
*/
void sub_fb7990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb7990ULL || rel >= 0xfb79a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb79a0 size=16 callers=0 calls=0
*/
void sub_fb79a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb79a0ULL || rel >= 0xfb79b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb79b0 size=96 callers=0 calls=1
   calls: sub_e84310
*/
void sub_fb79b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb79b0ULL || rel >= 0xfb7a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb7a10 size=16 callers=0 calls=0
*/
void sub_fb7a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb7a10ULL || rel >= 0xfb7a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb7a20 size=16 callers=0 calls=0
*/
void sub_fb7a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb7a20ULL || rel >= 0xfb7a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb7a30 size=16 callers=0 calls=0
*/
void sub_fb7a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb7a30ULL || rel >= 0xfb7a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb7a40 size=96 callers=0 calls=1
   calls: sub_14aad40
*/
void sub_fb7a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb7a40ULL || rel >= 0xfb7aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb7aa0 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/traces/bin/traces_comtime_00_lyt.bin
*/
void traces_comtime_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb7aa0ULL || rel >= 0xfb7bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb7bb0 size=304 callers=1 calls=2
   calls: sub_e83430, sub_e83930
*/
void sub_fb7bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb7bb0ULL || rel >= 0xfb7ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb7ce0 size=16 callers=0 calls=0
*/
void sub_fb7ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb7ce0ULL || rel >= 0xfb7cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb7cf0 size=16 callers=0 calls=0
*/
void sub_fb7cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb7cf0ULL || rel >= 0xfb7d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb7d00 size=16 callers=0 calls=0
*/
void sub_fb7d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb7d00ULL || rel >= 0xfb7d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb7d10 size=16 callers=0 calls=0
*/
void sub_fb7d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb7d10ULL || rel >= 0xfb7d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb7d20 size=16 callers=0 calls=0
*/
void sub_fb7d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb7d20ULL || rel >= 0xfb7d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb7d30 size=16 callers=0 calls=0
*/
void sub_fb7d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb7d30ULL || rel >= 0xfb7d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb7d40 size=16 callers=0 calls=0
*/
void sub_fb7d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb7d40ULL || rel >= 0xfb7d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb7d50 size=16 callers=0 calls=0
*/
void sub_fb7d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb7d50ULL || rel >= 0xfb7d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb7d60 size=16 callers=0 calls=0
*/
void sub_fb7d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb7d60ULL || rel >= 0xfb7d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb7d70 size=1712 callers=2 calls=4
   calls: sub_5e2350, sub_67b990, sub_76f440, sub_fb7240
*/
void sub_fb7d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb7d70ULL || rel >= 0xfb8420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb8420 size=736 callers=1 calls=15
   calls: sub_106f340, sub_1074ff0, sub_1075000, sub_1075010, sub_1075020, sub_1075030, sub_1075040, sub_1075050, sub_1075060, sub_1078430, sub_12f9ef0, sub_768f00
   ... +3 more
*/
void sub_fb8420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb8420ULL || rel >= 0xfb8700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb8700 size=624 callers=2 calls=12
   calls: sub_5cfad0, sub_67be60, sub_6ae9d0, sub_762930, sub_762940, sub_7670a0, sub_767950, sub_768dd0, sub_768ef0, sub_76f7e0, sub_794330, sub_fa56e0
   ref: Play_UI_Gnest_ready
*/
void Play_UI_Gnest_ready(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb8700ULL || rel >= 0xfb8970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb8970 size=1184 callers=1 calls=5
   calls: Play_UI_Gnest_ready, sub_67bdc0, sub_67bfa0, sub_fa56e0, sub_fb7340
*/
void sub_fb8970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb8970ULL || rel >= 0xfb8e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb8e10 size=464 callers=1 calls=13
   calls: sub_136b520, sub_136b580, sub_136b590, sub_136b770, sub_762930, sub_762940, sub_7670a0, sub_767950, sub_768dd0, sub_768ef0, sub_76f7e0, sub_fa56e0
   ... +1 more
*/
void sub_fb8e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb8e10ULL || rel >= 0xfb8fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb8fe0 size=320 callers=1 calls=7
   calls: sub_106fcf0, sub_106fd00, sub_106fd30, sub_106fd40, sub_1078400, sub_67be60, sub_fb7340
*/
void sub_fb8fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb8fe0ULL || rel >= 0xfb9120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb9120 size=16 callers=4 calls=0
*/
void sub_fb9120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb9120ULL || rel >= 0xfb9130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb9130 size=16 callers=1 calls=0
*/
void sub_fb9130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb9130ULL || rel >= 0xfb9140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb9140 size=240 callers=0 calls=1
   calls: sub_fb7550
*/
void sub_fb9140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb9140ULL || rel >= 0xfb9230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb9230 size=16 callers=0 calls=0
*/
void sub_fb9230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb9230ULL || rel >= 0xfb9240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb9240 size=240 callers=0 calls=0
*/
void sub_fb9240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb9240ULL || rel >= 0xfb9330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb9330 size=16 callers=0 calls=0
*/
void sub_fb9330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb9330ULL || rel >= 0xfb9340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb9340 size=16 callers=0 calls=0
*/
void sub_fb9340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb9340ULL || rel >= 0xfb9350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb9350 size=16 callers=0 calls=0
*/
void sub_fb9350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb9350ULL || rel >= 0xfb9360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb9360 size=16 callers=0 calls=0
*/
void sub_fb9360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb9360ULL || rel >= 0xfb9370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb9370 size=16 callers=0 calls=0
*/
void sub_fb9370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb9370ULL || rel >= 0xfb9380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb9380 size=16 callers=0 calls=0
*/
void sub_fb9380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb9380ULL || rel >= 0xfb9390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb9390 size=160 callers=0 calls=0
*/
void sub_fb9390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb9390ULL || rel >= 0xfb9430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb9430 size=368 callers=0 calls=0
*/
void sub_fb9430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb9430ULL || rel >= 0xfb95a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb95a0 size=784 callers=0 calls=1
   calls: sub_1c0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
   ref: bin/field/model/buildmodel/skybox_01/
*/
void skybox_01_34(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb95a0ULL || rel >= 0xfb98b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb98b0 size=496 callers=2 calls=2
   calls: sub_e9d130, sub_fc2480
*/
void sub_fb98b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb98b0ULL || rel >= 0xfb9aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb9aa0 size=16 callers=0 calls=0
*/
void sub_fb9aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb9aa0ULL || rel >= 0xfb9ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb9ab0 size=160 callers=0 calls=6
   calls: sub_7f4540, sub_fb9b50, sub_fb9f80, sub_fba0d0, sub_fba4e0, sub_fbac60
*/
void sub_fb9ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb9ab0ULL || rel >= 0xfb9b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb9b50 size=1072 callers=1 calls=4
   calls: sub_1357670, sub_762890, sub_767950, sub_7847d0
*/
void sub_fb9b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb9b50ULL || rel >= 0xfb9f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fb9f80 size=336 callers=1 calls=1
   calls: sub_785960
*/
void sub_fb9f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb9f80ULL || rel >= 0xfba0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fba0d0 size=1040 callers=1 calls=6
   calls: sub_136b4f0, sub_783bd0, sub_7cd960, sub_8dfba0, sub_8e0730, sub_fee160
*/
void sub_fba0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfba0d0ULL || rel >= 0xfba4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fba4e0 size=1920 callers=1 calls=7
   calls: sub_136b4f0, sub_783bd0, sub_7cd960, sub_8dfba0, sub_8e0730, sub_8e0ae0, sub_fee160
*/
void sub_fba4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfba4e0ULL || rel >= 0xfbac60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fbac60 size=384 callers=1 calls=3
   calls: sub_10619f0, sub_6ae890, sub_6ae9d0
*/
void sub_fbac60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfbac60ULL || rel >= 0xfbade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fbade0 size=1616 callers=1 calls=1
   calls: sub_783bd0
*/
void sub_fbade0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfbade0ULL || rel >= 0xfbb430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fbb430 size=5664 callers=0 calls=51
   calls: Stop_Battle_Music_2, sound_attr, sub_104bf60, sub_104dbb0, sub_1052ca0, sub_12fa460, sub_12fac60, sub_13000b0, sub_1345ca0, sub_136b550, sub_136e8b0, sub_13ed240
   ... +39 more
   ref: a_btl37_wr03
   ref: Reset_Volume_Field_Music
   ref: a_t0401_g0110
   ref: Play_Audience_cheer_base
   ref: MEET_BY_WILD
   ref: a_t0501_g0210
   ref: a_t0701_g0210
   ref: a_pl0110
*/
void Set_Volume_m96_Field_Music(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfbb430ULL || rel >= 0xfbca50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fbca50 size=384 callers=1 calls=3
   calls: sub_1052ca0, sub_1061830, sub_6ba6a0
*/
void sub_fbca50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfbca50ULL || rel >= 0xfbcbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fbcbd0 size=592 callers=1 calls=3
   calls: sub_14e0450, sub_14e0550, sub_fc2700
*/
void sub_fbcbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfbcbd0ULL || rel >= 0xfbce20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fbce20 size=5936 callers=1 calls=7
   calls: sub_12f9ef0, sub_762d50, sub_763000, sub_8e0b60, sub_fc07d0, sub_fc0a80, sub_fc2480
*/
void sub_fbce20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfbce20ULL || rel >= 0xfbe550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fbe550 size=1552 callers=5 calls=0
*/
void sub_fbe550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfbe550ULL || rel >= 0xfbeb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fbeb60 size=672 callers=1 calls=6
   calls: sub_134f3e0, sub_134f600, sub_765520, sub_7655b0, sub_76f650, sub_76f6c0
*/
void sub_fbeb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfbeb60ULL || rel >= 0xfbee00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fbee00 size=288 callers=2 calls=1
   calls: sub_794330
   ref: Stop_Audience_cheer_base
   ref: Stop_Win_Music
   ref: Stop_Battle_Music
*/
void Stop_Battle_Music_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfbee00ULL || rel >= 0xfbef20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fbef20 size=6096 callers=1 calls=7
   calls: sub_12f9ef0, sub_762d50, sub_763000, sub_8e0b60, sub_fc07d0, sub_fc0a80, sub_fc2480
*/
void sub_fbef20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfbef20ULL || rel >= 0xfc06f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc06f0 size=224 callers=0 calls=2
   calls: sub_104dd10, sub_14e0350
*/
void sub_fc06f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc06f0ULL || rel >= 0xfc07d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc07d0 size=688 callers=2 calls=0
*/
void sub_fc07d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc07d0ULL || rel >= 0xfc0a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc0a80 size=320 callers=11 calls=0
*/
void sub_fc0a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc0a80ULL || rel >= 0xfc0bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc0bc0 size=528 callers=0 calls=1
   calls: sub_fc25f0
*/
void sub_fc0bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc0bc0ULL || rel >= 0xfc0dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc0dd0 size=16 callers=0 calls=0
*/
void sub_fc0dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc0dd0ULL || rel >= 0xfc0de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc0de0 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_fc0de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc0de0ULL || rel >= 0xfc0e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc0e50 size=16 callers=0 calls=0
*/
void sub_fc0e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc0e50ULL || rel >= 0xfc0e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc0e60 size=16 callers=0 calls=0
*/
void sub_fc0e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc0e60ULL || rel >= 0xfc0e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc0e70 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_fc0e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc0e70ULL || rel >= 0xfc0ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc0ee0 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_fc0ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc0ee0ULL || rel >= 0xfc0f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc0f50 size=16 callers=0 calls=0
*/
void sub_fc0f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc0f50ULL || rel >= 0xfc0f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc0f60 size=16 callers=0 calls=0
*/
void sub_fc0f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc0f60ULL || rel >= 0xfc0f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc0f70 size=416 callers=4 calls=3
   calls: sub_c38350, sub_e9db40, sub_fc1110
*/
void sub_fc0f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc0f70ULL || rel >= 0xfc1110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc1110 size=464 callers=1 calls=5
   calls: sd9141_vs_result, sub_13a4980, sub_c1b030, sub_e9d130, sub_fc1fc0
*/
void sub_fc1110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc1110ULL || rel >= 0xfc12e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc12e0 size=2064 callers=1 calls=2
   calls: sub_13a4f20, sub_fc22f0
   ref: sd9140_vs
   ref: sd9141_vs_result
*/
void sd9141_vs_result(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc12e0ULL || rel >= 0xfc1af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc1af0 size=112 callers=0 calls=2
   calls: sub_13a4f20, sub_fc0a80
*/
void sub_fc1af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc1af0ULL || rel >= 0xfc1b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc1b60 size=112 callers=0 calls=2
   calls: sub_13a4f20, sub_fc0a80
*/
void sub_fc1b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc1b60ULL || rel >= 0xfc1bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc1bd0 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_fc1bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc1bd0ULL || rel >= 0xfc1c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc1c40 size=16 callers=0 calls=0
*/
void sub_fc1c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc1c40ULL || rel >= 0xfc1c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc1c50 size=16 callers=0 calls=0
*/
void sub_fc1c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc1c50ULL || rel >= 0xfc1c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc1c60 size=176 callers=0 calls=4
   calls: demo_data, sub_c1bcb0, sub_c1bce0, sub_c1bd10
*/
void sub_fc1c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc1c60ULL || rel >= 0xfc1d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc1d10 size=16 callers=0 calls=0
*/
void sub_fc1d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc1d10ULL || rel >= 0xfc1d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc1d20 size=112 callers=0 calls=2
   calls: sub_13a4f20, sub_fc0a80
*/
void sub_fc1d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc1d20ULL || rel >= 0xfc1d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc1d90 size=112 callers=0 calls=2
   calls: sub_13a4f20, sub_fc0a80
*/
void sub_fc1d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc1d90ULL || rel >= 0xfc1e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc1e00 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_fc1e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc1e00ULL || rel >= 0xfc1e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc1e70 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_fc1e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc1e70ULL || rel >= 0xfc1ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc1ee0 size=112 callers=0 calls=2
   calls: sub_13a4f20, sub_fc0a80
*/
void sub_fc1ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc1ee0ULL || rel >= 0xfc1f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc1f50 size=112 callers=0 calls=2
   calls: sub_13a4f20, sub_fc0a80
*/
void sub_fc1f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc1f50ULL || rel >= 0xfc1fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc1fc0 size=368 callers=1 calls=1
   calls: sub_fc2130
*/
void sub_fc1fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc1fc0ULL || rel >= 0xfc2130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc2130 size=448 callers=3 calls=0
*/
void sub_fc2130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc2130ULL || rel >= 0xfc22f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc22f0 size=400 callers=1 calls=0
*/
void sub_fc22f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc22f0ULL || rel >= 0xfc2480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc2480 size=368 callers=6 calls=0
*/
void sub_fc2480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc2480ULL || rel >= 0xfc25f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc25f0 size=272 callers=2 calls=0
*/
void sub_fc25f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc25f0ULL || rel >= 0xfc2700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc2700 size=448 callers=3 calls=0
*/
void sub_fc2700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc2700ULL || rel >= 0xfc28c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc28c0 size=112 callers=1 calls=1
   calls: sub_fc2930
*/
void sub_fc28c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc28c0ULL || rel >= 0xfc2930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc2930 size=288 callers=3 calls=3
   calls: sub_c38350, sub_e9db40, sub_fc4650
*/
void sub_fc2930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc2930ULL || rel >= 0xfc2a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc2a50 size=112 callers=1 calls=1
   calls: sub_fc2930
*/
void sub_fc2a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc2a50ULL || rel >= 0xfc2ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc2ac0 size=112 callers=1 calls=1
   calls: sub_fc2930
*/
void sub_fc2ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc2ac0ULL || rel >= 0xfc2b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc2b30 size=384 callers=1 calls=0
*/
void sub_fc2b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc2b30ULL || rel >= 0xfc2cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc2cb0 size=16 callers=0 calls=0
*/
void sub_fc2cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc2cb0ULL || rel >= 0xfc2cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc2cc0 size=16 callers=0 calls=0
*/
void sub_fc2cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc2cc0ULL || rel >= 0xfc2cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc2cd0 size=16 callers=0 calls=0
*/
void sub_fc2cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc2cd0ULL || rel >= 0xfc2ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc2ce0 size=16 callers=0 calls=0
*/
void sub_fc2ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc2ce0ULL || rel >= 0xfc2cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc2cf0 size=16 callers=0 calls=0
*/
void sub_fc2cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc2cf0ULL || rel >= 0xfc2d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc2d00 size=16 callers=0 calls=0
*/
void sub_fc2d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc2d00ULL || rel >= 0xfc2d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc2d10 size=768 callers=0 calls=8
   calls: sub_1045590, sub_104e090, sub_105c390, sub_14e0350, sub_ca4fe0, sub_fc3010, sub_fc4b10, sub_ffb480
*/
void sub_fc2d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc2d10ULL || rel >= 0xfc3010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc3010 size=720 callers=1 calls=10
   calls: sub_10473b0, sub_1052ca0, sub_1061830, sub_1061a40, sub_136b530, sub_136b580, sub_136b590, sub_136b770, sub_7c2280, sub_eaa040
*/
void sub_fc3010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc3010ULL || rel >= 0xfc32e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc32e0 size=112 callers=0 calls=0
*/
void sub_fc32e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc32e0ULL || rel >= 0xfc3350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc3350 size=3040 callers=0 calls=14
   calls: sub_1045a00, sub_142b3f0, sub_1435450, sub_ba1250, sub_ba1fb0, sub_f42b90, sub_f9bac0, sub_fc2480, sub_fc3f30, sub_fc4040, sub_fc4340, sub_fc5c70
   ... +2 more
*/
void sub_fc3350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc3350ULL || rel >= 0xfc3f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc3f30 size=272 callers=1 calls=3
   calls: sub_672c10, sub_c386f0, sub_fc54a0
*/
void sub_fc3f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc3f30ULL || rel >= 0xfc4040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc4040 size=768 callers=1 calls=2
   calls: sub_1435450, sub_67bc30
*/
void sub_fc4040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc4040ULL || rel >= 0xfc4340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc4340 size=432 callers=1 calls=6
   calls: sub_8e0ae0, sub_ebccd0, sub_ebcfb0, sub_ebd130, sub_ec9830, sub_f9c860
*/
void sub_fc4340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc4340ULL || rel >= 0xfc44f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc44f0 size=16 callers=0 calls=0
*/
void sub_fc44f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc44f0ULL || rel >= 0xfc4500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc4500 size=16 callers=0 calls=0
*/
void sub_fc4500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc4500ULL || rel >= 0xfc4510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc4510 size=16 callers=0 calls=0
*/
void sub_fc4510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc4510ULL || rel >= 0xfc4520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc4520 size=304 callers=0 calls=0
*/
void sub_fc4520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc4520ULL || rel >= 0xfc4650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc4650 size=384 callers=1 calls=3
   calls: sub_e9d130, sub_fc2b30, sub_fc47d0
*/
void sub_fc4650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc4650ULL || rel >= 0xfc47d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc47d0 size=512 callers=1 calls=0
*/
void sub_fc47d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc47d0ULL || rel >= 0xfc49d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc49d0 size=80 callers=0 calls=0
*/
void sub_fc49d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc49d0ULL || rel >= 0xfc4a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc4a20 size=80 callers=0 calls=0
*/
void sub_fc4a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc4a20ULL || rel >= 0xfc4a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc4a70 size=80 callers=0 calls=0
*/
void sub_fc4a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc4a70ULL || rel >= 0xfc4ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc4ac0 size=80 callers=0 calls=0
*/
void sub_fc4ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc4ac0ULL || rel >= 0xfc4b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc4b10 size=384 callers=1 calls=1
   calls: sub_fc4c90
*/
void sub_fc4b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc4b10ULL || rel >= 0xfc4c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc4c90 size=1200 callers=1 calls=2
   calls: sub_e893e0, sub_fc5360
*/
void sub_fc4c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc4c90ULL || rel >= 0xfc5140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc5140 size=496 callers=0 calls=2
   calls: sub_7f4580, sub_e89590
*/
void sub_fc5140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc5140ULL || rel >= 0xfc5330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc5330 size=16 callers=0 calls=0
*/
void sub_fc5330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc5330ULL || rel >= 0xfc5340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc5340 size=16 callers=0 calls=0
*/
void sub_fc5340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc5340ULL || rel >= 0xfc5350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc5350 size=16 callers=0 calls=0
*/
void sub_fc5350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc5350ULL || rel >= 0xfc5360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc5360 size=320 callers=2 calls=0
*/
void sub_fc5360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc5360ULL || rel >= 0xfc54a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc54a0 size=272 callers=1 calls=2
   calls: sub_e7b660, sub_fc55b0
*/
void sub_fc54a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc54a0ULL || rel >= 0xfc55b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc55b0 size=224 callers=1 calls=3
   calls: sub_7c2da0, sub_e7b5e0, sub_fc5690
*/
void sub_fc55b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc55b0ULL || rel >= 0xfc5690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc5690 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_fc5690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc5690ULL || rel >= 0xfc5780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc5780 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_fc5780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc5780ULL || rel >= 0xfc5800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc5800 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_fc5800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc5800ULL || rel >= 0xfc5970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc5970 size=96 callers=0 calls=1
   calls: sub_fc5b90
*/
void sub_fc5970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc5970ULL || rel >= 0xfc59d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc59d0 size=16 callers=0 calls=0
*/
void sub_fc59d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc59d0ULL || rel >= 0xfc59e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc59e0 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_fc59e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc59e0ULL || rel >= 0xfc5a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc5a80 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_fc5a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc5a80ULL || rel >= 0xfc5b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc5b40 size=16 callers=0 calls=0
*/
void sub_fc5b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc5b40ULL || rel >= 0xfc5b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc5b50 size=16 callers=0 calls=0
*/
void sub_fc5b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc5b50ULL || rel >= 0xfc5b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc5b60 size=16 callers=0 calls=0
*/
void sub_fc5b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc5b60ULL || rel >= 0xfc5b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc5b70 size=32 callers=0 calls=0
*/
void sub_fc5b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc5b70ULL || rel >= 0xfc5b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc5b90 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_fc5b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc5b90ULL || rel >= 0xfc5c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc5c70 size=240 callers=2 calls=1
   calls: sub_c39c40
*/
void sub_fc5c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc5c70ULL || rel >= 0xfc5d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc5d60 size=128 callers=0 calls=0
*/
void sub_fc5d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc5d60ULL || rel >= 0xfc5de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc5de0 size=1552 callers=0 calls=13
   calls: sub_5cfad0, sub_78f150, sub_78f240, sub_79b250, sub_e7c0f0, sub_e7e890, sub_fc63f0, sub_fc7c50, sub_fc7fd0, sub_fc83a0, sub_fc87b0, sub_fc8b90
   ... +1 more
   ref: CommonOptionBar
   ref: ViewNetBtlTop
   ref: common/btl_bgm_select.dat
   ref: ViewNetBtlTitle
   ref: ViewNetBtlFinout
   ref: ViewNetBtlBg
   ref: ViewNetBtlMsgWindow
   ref: common/net_btl.dat
*/
void ViewNetBtlMsgWindow(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc5de0ULL || rel >= 0xfc63f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc63f0 size=400 callers=1 calls=3
   calls: sub_e7c160, sub_fc7b20, sub_fd7eb0
*/
void sub_fc63f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc63f0ULL || rel >= 0xfc6580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc6580 size=16 callers=0 calls=0
*/
void sub_fc6580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc6580ULL || rel >= 0xfc6590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc6590 size=1552 callers=0 calls=11
   calls: sub_13083a0, sub_e7c160, sub_e7ea90, sub_fc7b20, sub_fc95e0, sub_fd7f20, sub_fd7f30, sub_fd7f40, sub_fd8060, sub_fd80d0, sub_fd84e0
   ref: StateContinue
   ref: common/btl_bgm_select.dat
   ref: DetermineBattleTeam
   ref: SyncFirst
   ref: DetermineRegulation
   ref: common/net_btl.dat
   ref: common/regulation.dat
*/
void DetermineBattleTeam(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc6590ULL || rel >= 0xfc6ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc6ba0 size=16 callers=0 calls=0
*/
void sub_fc6ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc6ba0ULL || rel >= 0xfc6bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc6bb0 size=2144 callers=0 calls=20
   calls: sub_915af0, sub_e7c160, sub_e806b0, sub_ec0d20, sub_ec1c40, sub_fc5360, sub_fc7b20, sub_fc96e0, sub_fc9830, sub_fc9970, sub_fc9ac0, sub_fc9c00
   ... +8 more
   ref: StateContinue
   ref: ViewNetBtlMsgWindow
*/
void ViewNetBtlMsgWindow_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc6bb0ULL || rel >= 0xfc7410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc7410 size=352 callers=0 calls=5
   calls: sub_10457e0, sub_10459c0, sub_fc7570, sub_fc7b20, sub_fd8010
*/
void sub_fc7410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc7410ULL || rel >= 0xfc7570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc7570 size=352 callers=13 calls=0
*/
void sub_fc7570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc7570ULL || rel >= 0xfc76d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc76d0 size=496 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_fc76d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc76d0ULL || rel >= 0xfc78c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc78c0 size=16 callers=0 calls=0
*/
void sub_fc78c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc78c0ULL || rel >= 0xfc78d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc78d0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_fc78d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc78d0ULL || rel >= 0xfc7980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc7980 size=16 callers=0 calls=0
*/
void sub_fc7980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc7980ULL || rel >= 0xfc7990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc7990 size=16 callers=0 calls=0
*/
void sub_fc7990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc7990ULL || rel >= 0xfc79a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc79a0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_fc79a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc79a0ULL || rel >= 0xfc7a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc7a50 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_fc7a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc7a50ULL || rel >= 0xfc7b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc7b00 size=16 callers=0 calls=0
*/
void sub_fc7b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc7b00ULL || rel >= 0xfc7b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc7b10 size=16 callers=0 calls=0
*/
void sub_fc7b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc7b10ULL || rel >= 0xfc7b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc7b20 size=304 callers=23 calls=0
*/
void sub_fc7b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc7b20ULL || rel >= 0xfc7c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc7c50 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_fc7d70
*/
void sub_fc7c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc7c50ULL || rel >= 0xfc7d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc7d70 size=608 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_fc7d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc7d70ULL || rel >= 0xfc7fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc7fd0 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_fc80f0
*/
void sub_fc7fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc7fd0ULL || rel >= 0xfc80f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc80f0 size=384 callers=1 calls=3
   calls: sub_790490, sub_e7fe20, sub_fc8270
*/
void sub_fc80f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc80f0ULL || rel >= 0xfc8270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc8270 size=304 callers=1 calls=1
   calls: anonymous_2
*/
void sub_fc8270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc8270ULL || rel >= 0xfc83a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc83a0 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_fc84c0
*/
void sub_fc83a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc83a0ULL || rel >= 0xfc84c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc84c0 size=384 callers=1 calls=3
   calls: sub_790490, sub_e7fe20, sub_fc8640
*/
void sub_fc84c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc84c0ULL || rel >= 0xfc8640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc8640 size=368 callers=1 calls=1
   calls: anonymous_2
*/
void sub_fc8640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc8640ULL || rel >= 0xfc87b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc87b0 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_fc88d0
*/
void sub_fc87b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc87b0ULL || rel >= 0xfc88d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc88d0 size=384 callers=1 calls=3
   calls: sub_790490, sub_e7fe20, sub_fc8a50
*/
void sub_fc88d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc88d0ULL || rel >= 0xfc8a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc8a50 size=320 callers=1 calls=1
   calls: anonymous_2
*/
void sub_fc8a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc8a50ULL || rel >= 0xfc8b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc8b90 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_fc8cb0
*/
void sub_fc8b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc8b90ULL || rel >= 0xfc8cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc8cb0 size=384 callers=1 calls=3
   calls: sub_790490, sub_e7fe20, sub_fc8e30
*/
void sub_fc8cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc8cb0ULL || rel >= 0xfc8e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc8e30 size=624 callers=1 calls=3
   calls: anonymous_2, sub_ea46c0, sub_fc90a0
*/
void sub_fc8e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc8e30ULL || rel >= 0xfc90a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc90a0 size=448 callers=2 calls=0
*/
void sub_fc90a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc90a0ULL || rel >= 0xfc9260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc9260 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_fc9380
*/
void sub_fc9260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc9260ULL || rel >= 0xfc9380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc9380 size=608 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_fc9380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc9380ULL || rel >= 0xfc95e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc95e0 size=256 callers=1 calls=1
   calls: sub_fca590
*/
void sub_fc95e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc95e0ULL || rel >= 0xfc96e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc96e0 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_fc96e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc96e0ULL || rel >= 0xfc9830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc9830 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_fc9830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc9830ULL || rel >= 0xfc9970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc9970 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_fc9970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc9970ULL || rel >= 0xfc9ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc9ac0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_fc9ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc9ac0ULL || rel >= 0xfc9c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc9c00 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_fc9c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc9c00ULL || rel >= 0xfc9d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc9d50 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_fc9d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc9d50ULL || rel >= 0xfc9e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc9e90 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_fc9e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc9e90ULL || rel >= 0xfc9fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fc9fe0 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_fc9fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc9fe0ULL || rel >= 0xfca130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fca130 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_fca130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfca130ULL || rel >= 0xfca280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fca280 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_fca280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfca280ULL || rel >= 0xfca3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fca3c0 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_fca3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfca3c0ULL || rel >= 0xfca510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fca510 size=128 callers=0 calls=0
*/
void sub_fca510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfca510ULL || rel >= 0xfca590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fca590 size=160 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_fca590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfca590ULL || rel >= 0xfca630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fca630 size=1552 callers=0 calls=21
   calls: grid_VSSorting, grid_VSSorting_4, pane_T_net_title_00, pane_T_net_title_01, pane_T_net_title_01_2, sub_14aad40, sub_1500ea0, sub_5cfaf0, sub_795bc0, sub_eb7b00, sub_fcc240, sub_fcc330
   ... +9 more
   ref: CommonOptionBar
   ref: ViewNetBtlMsgWindow
*/
void ViewNetBtlMsgWindow_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfca630ULL || rel >= 0xfcac40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcac40 size=144 callers=0 calls=0
*/
void sub_fcac40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcac40ULL || rel >= 0xfcacd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcacd0 size=144 callers=0 calls=0
*/
void sub_fcacd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcacd0ULL || rel >= 0xfcad60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcad60 size=144 callers=0 calls=0
*/
void sub_fcad60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcad60ULL || rel >= 0xfcadf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcadf0 size=144 callers=0 calls=0
*/
void sub_fcadf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcadf0ULL || rel >= 0xfcae80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcae80 size=144 callers=0 calls=0
*/
void sub_fcae80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcae80ULL || rel >= 0xfcaf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcaf10 size=144 callers=0 calls=0
*/
void sub_fcaf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcaf10ULL || rel >= 0xfcafa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcafa0 size=64 callers=1 calls=1
   calls: sub_fd3e20
*/
void sub_fcafa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcafa0ULL || rel >= 0xfcafe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcafe0 size=16 callers=2 calls=0
*/
void sub_fcafe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcafe0ULL || rel >= 0xfcaff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcaff0 size=112 callers=1 calls=1
   calls: sub_ec8f50
*/
void sub_fcaff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcaff0ULL || rel >= 0xfcb060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcb060 size=144 callers=48 calls=2
   calls: sub_fcb0f0, sub_fd43c0
*/
void sub_fcb060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcb060ULL || rel >= 0xfcb0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcb0f0 size=144 callers=3 calls=8
   calls: sub_eb7790, sub_eb7830, sub_fccac0, sub_fcf0c0, sub_fd04a0, sub_fd09f0, sub_fd2fa0, sub_fd46f0
*/
void sub_fcb0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcb0f0ULL || rel >= 0xfcb180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcb180 size=1216 callers=0 calls=15
   calls: grid_VSSorting, grid_VSSorting_3, msg_ui_netbtl_nickname_00, sub_fcb0f0, sub_fcb640, sub_fcb780, sub_fcb8a0, sub_fcb990, sub_fcbad0, sub_fce9c0, sub_fd15c0, sub_fd2870
   ... +3 more
*/
void sub_fcb180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcb180ULL || rel >= 0xfcb640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcb640 size=320 callers=1 calls=5
   calls: grid_VSSorting_5, pane_L_select_detail_00_T_netbtl_b_d_03, pane_T_select_08, sub_fceac0, sub_fcebf0
*/
void sub_fcb640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcb640ULL || rel >= 0xfcb780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcb780 size=288 callers=1 calls=6
   calls: sub_fccae0, sub_fcf0e0, sub_fd04c0, sub_fd0a10, sub_fd2fc0, sub_fd4730
*/
void sub_fcb780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcb780ULL || rel >= 0xfcb8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcb8a0 size=240 callers=2 calls=2
   calls: sub_fcd450, sub_fd2d90
*/
void sub_fcb8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcb8a0ULL || rel >= 0xfcb990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcb990 size=320 callers=1 calls=3
   calls: grid_VSSorting_2, sub_e807f0, sub_fd2880
*/
void sub_fcb990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcb990ULL || rel >= 0xfcbad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcbad0 size=304 callers=1 calls=6
   calls: sub_eb7730, sub_fcc990, sub_fce1d0, sub_fcff00, sub_fd08c0, sub_fd2b90
*/
void sub_fcbad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcbad0ULL || rel >= 0xfcbc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcbc00 size=528 callers=0 calls=4
   calls: sub_fce640, sub_fce6b0, sub_fce9d0, sub_fce9e0
*/
void sub_fcbc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcbc00ULL || rel >= 0xfcbe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcbe10 size=96 callers=0 calls=1
   calls: pane_T_net_title_00
*/
void sub_fcbe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcbe10ULL || rel >= 0xfcbe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcbe70 size=96 callers=0 calls=1
   calls: pane_T_net_title_00
*/
void sub_fcbe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcbe70ULL || rel >= 0xfcbed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcbed0 size=128 callers=0 calls=1
   calls: sub_fce890
*/
void sub_fcbed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcbed0ULL || rel >= 0xfcbf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcbf50 size=128 callers=0 calls=1
   calls: sub_fce890
*/
void sub_fcbf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcbf50ULL || rel >= 0xfcbfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcbfd0 size=16 callers=0 calls=0
*/
void sub_fcbfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcbfd0ULL || rel >= 0xfcbfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcbfe0 size=16 callers=0 calls=0
*/
void sub_fcbfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcbfe0ULL || rel >= 0xfcbff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcbff0 size=128 callers=0 calls=1
   calls: sub_fcebf0
*/
void sub_fcbff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcbff0ULL || rel >= 0xfcc070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcc070 size=128 callers=0 calls=1
   calls: sub_fcebf0
*/
void sub_fcc070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcc070ULL || rel >= 0xfcc0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcc0f0 size=32 callers=0 calls=0
*/
void sub_fcc0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcc0f0ULL || rel >= 0xfcc110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcc110 size=32 callers=0 calls=0
*/
void sub_fcc110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcc110ULL || rel >= 0xfcc130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcc130 size=240 callers=0 calls=0
*/
void sub_fcc130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcc130ULL || rel >= 0xfcc220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcc220 size=16 callers=0 calls=0
*/
void sub_fcc220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcc220ULL || rel >= 0xfcc230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcc230 size=16 callers=0 calls=0
*/
void sub_fcc230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcc230ULL || rel >= 0xfcc240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcc240 size=240 callers=1 calls=1
   calls: sub_e7f6c0
*/
void sub_fcc240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcc240ULL || rel >= 0xfcc330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcc330 size=240 callers=1 calls=1
   calls: sub_e7f6c0
*/
void sub_fcc330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcc330ULL || rel >= 0xfcc420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcc420 size=240 callers=1 calls=1
   calls: sub_e7f6c0
*/
void sub_fcc420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcc420ULL || rel >= 0xfcc510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcc510 size=240 callers=1 calls=1
   calls: sub_e7f6c0
*/
void sub_fcc510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcc510ULL || rel >= 0xfcc600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcc600 size=240 callers=1 calls=1
   calls: sub_e7f6c0
*/
void sub_fcc600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcc600ULL || rel >= 0xfcc6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcc6f0 size=496 callers=1 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_fcc6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcc6f0ULL || rel >= 0xfcc8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcc8e0 size=128 callers=0 calls=0
*/
void sub_fcc8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcc8e0ULL || rel >= 0xfcc960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

