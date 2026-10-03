/* subsdk0 functions 002225c0..0023ee60 (15 of 20). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 002225c0 size=336 callers=0 calls=0
*/
void sub_2225c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2225c0ULL || rel >= 0x222710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00222710 size=192 callers=0 calls=0
*/
void sub_222710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x222710ULL || rel >= 0x2227d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002227d0 size=16 callers=0 calls=0
*/
void sub_2227d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2227d0ULL || rel >= 0x2227e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002227e0 size=16 callers=0 calls=0
*/
void sub_2227e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2227e0ULL || rel >= 0x2227f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002227f0 size=96 callers=0 calls=0
   ref: nvnDeviceGetProcAddress
*/
void nvnDeviceGetProcAddress(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2227f0ULL || rel >= 0x222850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00222850 size=304 callers=0 calls=0
*/
void sub_222850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x222850ULL || rel >= 0x222980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00222980 size=192 callers=0 calls=0
*/
void sub_222980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x222980ULL || rel >= 0x222a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00222a40 size=32 callers=0 calls=0
*/
void sub_222a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x222a40ULL || rel >= 0x222a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00222a60 size=176 callers=0 calls=0
*/
void sub_222a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x222a60ULL || rel >= 0x222b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00222b10 size=48 callers=0 calls=0
*/
void sub_222b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x222b10ULL || rel >= 0x222b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00222b40 size=64 callers=0 calls=0
*/
void sub_222b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x222b40ULL || rel >= 0x222b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00222b80 size=192 callers=0 calls=0
*/
void sub_222b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x222b80ULL || rel >= 0x222c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00222c40 size=112 callers=0 calls=0
*/
void sub_222c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x222c40ULL || rel >= 0x222cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00222cb0 size=208 callers=0 calls=0
*/
void sub_222cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x222cb0ULL || rel >= 0x222d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00222d80 size=16 callers=0 calls=0
*/
void sub_222d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x222d80ULL || rel >= 0x222d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00222d90 size=80 callers=0 calls=0
   ref: nvnSyncGetNvRmSyncNVX
   ref: nvnSyncInitializeFromNvRmSyncNVX
*/
void nvnSyncInitializeFromNvRmSyncNVX(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x222d90ULL || rel >= 0x222de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00222de0 size=208 callers=0 calls=0
   ref: nvnTextureGetNvRmSurfaceNVX
*/
void nvnTextureGetNvRmSurfaceNVX(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x222de0ULL || rel >= 0x222eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00222eb0 size=192 callers=0 calls=0
   ref: nvnTextureGetNvRmSurfaceNVX
*/
void nvnTextureGetNvRmSurfaceNVX_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x222eb0ULL || rel >= 0x222f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00222f70 size=32 callers=0 calls=0
*/
void sub_222f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x222f70ULL || rel >= 0x222f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00222f90 size=32 callers=0 calls=0
*/
void sub_222f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x222f90ULL || rel >= 0x222fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00222fb0 size=32 callers=0 calls=0
*/
void sub_222fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x222fb0ULL || rel >= 0x222fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00222fd0 size=1024 callers=0 calls=0
*/
void sub_222fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x222fd0ULL || rel >= 0x2233d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002233d0 size=320 callers=0 calls=0
*/
void sub_2233d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2233d0ULL || rel >= 0x223510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223510 size=1024 callers=0 calls=0
   ref: <%d:%s>
   ref: <%d:UNKNOWN>
*/
void d_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223510ULL || rel >= 0x223910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223910 size=944 callers=0 calls=0
   ref: <%d:%s>
   ref: <%d:UNKNOWN>
*/
void d_s_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223910ULL || rel >= 0x223cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223cc0 size=560 callers=0 calls=0
   ref: <%d:%s>
   ref: <%d:UNKNOWN>
*/
void d_s_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223cc0ULL || rel >= 0x223ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223ef0 size=416 callers=0 calls=0
   ref: <%d:%s>
   ref: <%d:UNKNOWN>
*/
void d_s_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223ef0ULL || rel >= 0x224090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224090 size=336 callers=0 calls=0
   ref: scoopvideo
*/
void scoopvideo(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224090ULL || rel >= 0x2241e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002241e0 size=192 callers=0 calls=0
   ref: screenshot
*/
void screenshot(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2241e0ULL || rel >= 0x2242a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002242a0 size=1952 callers=0 calls=0
   ref: screenshot
*/
void screenshot_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2242a0ULL || rel >= 0x224a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224a40 size=944 callers=0 calls=0
*/
void sub_224a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224a40ULL || rel >= 0x224df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224df0 size=272 callers=0 calls=0
*/
void sub_224df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224df0ULL || rel >= 0x224f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224f00 size=16 callers=0 calls=0
*/
void sub_224f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224f00ULL || rel >= 0x224f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224f10 size=32 callers=0 calls=0
*/
void sub_224f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224f10ULL || rel >= 0x224f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224f30 size=16 callers=0 calls=0
*/
void sub_224f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224f30ULL || rel >= 0x224f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224f40 size=16 callers=0 calls=0
*/
void sub_224f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224f40ULL || rel >= 0x224f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224f50 size=16 callers=0 calls=0
*/
void sub_224f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224f50ULL || rel >= 0x224f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224f60 size=112 callers=0 calls=0
*/
void sub_224f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224f60ULL || rel >= 0x224fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224fd0 size=144 callers=0 calls=0
*/
void sub_224fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224fd0ULL || rel >= 0x225060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225060 size=16 callers=0 calls=0
*/
void sub_225060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225060ULL || rel >= 0x225070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225070 size=16 callers=0 calls=0
*/
void sub_225070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225070ULL || rel >= 0x225080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225080 size=16 callers=0 calls=0
*/
void sub_225080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225080ULL || rel >= 0x225090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225090 size=16 callers=0 calls=0
*/
void sub_225090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225090ULL || rel >= 0x2250a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002250a0 size=48 callers=0 calls=0
*/
void sub_2250a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2250a0ULL || rel >= 0x2250d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002250d0 size=32 callers=0 calls=0
*/
void sub_2250d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2250d0ULL || rel >= 0x2250f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002250f0 size=16 callers=0 calls=0
*/
void sub_2250f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2250f0ULL || rel >= 0x225100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225100 size=32 callers=0 calls=0
*/
void sub_225100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225100ULL || rel >= 0x225120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225120 size=656 callers=0 calls=0
*/
void sub_225120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225120ULL || rel >= 0x2253b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002253b0 size=576 callers=0 calls=0
*/
void sub_2253b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2253b0ULL || rel >= 0x2255f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002255f0 size=64 callers=0 calls=0
*/
void sub_2255f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2255f0ULL || rel >= 0x225630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225630 size=16 callers=0 calls=0
*/
void sub_225630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225630ULL || rel >= 0x225640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225640 size=48 callers=0 calls=0
*/
void sub_225640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225640ULL || rel >= 0x225670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225670 size=176 callers=0 calls=0
*/
void sub_225670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225670ULL || rel >= 0x225720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225720 size=64 callers=0 calls=0
*/
void sub_225720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225720ULL || rel >= 0x225760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225760 size=64 callers=0 calls=0
*/
void sub_225760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225760ULL || rel >= 0x2257a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002257a0 size=16 callers=0 calls=0
*/
void sub_2257a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2257a0ULL || rel >= 0x2257b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002257b0 size=16 callers=0 calls=0
*/
void sub_2257b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2257b0ULL || rel >= 0x2257c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002257c0 size=16 callers=0 calls=0
*/
void sub_2257c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2257c0ULL || rel >= 0x2257d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002257d0 size=16 callers=0 calls=0
*/
void sub_2257d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2257d0ULL || rel >= 0x2257e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002257e0 size=16 callers=0 calls=0
*/
void sub_2257e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2257e0ULL || rel >= 0x2257f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002257f0 size=48 callers=0 calls=0
*/
void sub_2257f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2257f0ULL || rel >= 0x225820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225820 size=16 callers=0 calls=0
*/
void sub_225820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225820ULL || rel >= 0x225830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225830 size=48 callers=0 calls=0
*/
void sub_225830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225830ULL || rel >= 0x225860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225860 size=16 callers=0 calls=0
*/
void sub_225860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225860ULL || rel >= 0x225870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225870 size=112 callers=0 calls=0
*/
void sub_225870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225870ULL || rel >= 0x2258e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002258e0 size=128 callers=0 calls=0
*/
void sub_2258e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2258e0ULL || rel >= 0x225960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225960 size=64 callers=0 calls=0
*/
void sub_225960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225960ULL || rel >= 0x2259a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002259a0 size=112 callers=0 calls=0
*/
void sub_2259a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2259a0ULL || rel >= 0x225a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225a10 size=128 callers=0 calls=0
*/
void sub_225a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225a10ULL || rel >= 0x225a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225a90 size=128 callers=0 calls=0
*/
void sub_225a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225a90ULL || rel >= 0x225b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225b10 size=128 callers=0 calls=0
*/
void sub_225b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225b10ULL || rel >= 0x225b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225b90 size=128 callers=0 calls=0
*/
void sub_225b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225b90ULL || rel >= 0x225c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225c10 size=144 callers=0 calls=0
*/
void sub_225c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225c10ULL || rel >= 0x225ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225ca0 size=144 callers=0 calls=0
*/
void sub_225ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225ca0ULL || rel >= 0x225d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225d30 size=144 callers=0 calls=0
*/
void sub_225d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225d30ULL || rel >= 0x225dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225dc0 size=16 callers=0 calls=0
*/
void sub_225dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225dc0ULL || rel >= 0x225dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225dd0 size=32 callers=0 calls=0
*/
void sub_225dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225dd0ULL || rel >= 0x225df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225df0 size=16 callers=0 calls=0
*/
void sub_225df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225df0ULL || rel >= 0x225e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225e00 size=32 callers=0 calls=0
*/
void sub_225e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225e00ULL || rel >= 0x225e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225e20 size=16 callers=0 calls=0
*/
void sub_225e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225e20ULL || rel >= 0x225e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225e30 size=16 callers=0 calls=0
*/
void sub_225e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225e30ULL || rel >= 0x225e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225e40 size=32 callers=0 calls=0
*/
void sub_225e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225e40ULL || rel >= 0x225e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225e60 size=16 callers=0 calls=0
*/
void sub_225e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225e60ULL || rel >= 0x225e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225e70 size=16 callers=0 calls=0
*/
void sub_225e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225e70ULL || rel >= 0x225e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225e80 size=16 callers=0 calls=0
*/
void sub_225e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225e80ULL || rel >= 0x225e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225e90 size=16 callers=0 calls=0
*/
void sub_225e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225e90ULL || rel >= 0x225ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225ea0 size=272 callers=0 calls=0
*/
void sub_225ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225ea0ULL || rel >= 0x225fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225fb0 size=176 callers=0 calls=0
*/
void sub_225fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225fb0ULL || rel >= 0x226060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226060 size=64 callers=0 calls=0
*/
void sub_226060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226060ULL || rel >= 0x2260a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002260a0 size=176 callers=0 calls=0
*/
void sub_2260a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2260a0ULL || rel >= 0x226150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226150 size=256 callers=0 calls=0
*/
void sub_226150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226150ULL || rel >= 0x226250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226250 size=160 callers=0 calls=0
*/
void sub_226250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226250ULL || rel >= 0x2262f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002262f0 size=16 callers=0 calls=0
*/
void sub_2262f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2262f0ULL || rel >= 0x226300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226300 size=16 callers=0 calls=0
*/
void sub_226300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226300ULL || rel >= 0x226310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226310 size=160 callers=0 calls=0
*/
void sub_226310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226310ULL || rel >= 0x2263b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002263b0 size=160 callers=0 calls=0
*/
void sub_2263b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2263b0ULL || rel >= 0x226450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226450 size=16 callers=0 calls=0
*/
void sub_226450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226450ULL || rel >= 0x226460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226460 size=16 callers=0 calls=0
*/
void sub_226460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226460ULL || rel >= 0x226470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226470 size=16 callers=0 calls=0
*/
void sub_226470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226470ULL || rel >= 0x226480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226480 size=16 callers=0 calls=0
*/
void sub_226480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226480ULL || rel >= 0x226490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226490 size=16 callers=0 calls=0
*/
void sub_226490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226490ULL || rel >= 0x2264a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002264a0 size=16 callers=0 calls=0
*/
void sub_2264a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2264a0ULL || rel >= 0x2264b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002264b0 size=16 callers=0 calls=0
*/
void sub_2264b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2264b0ULL || rel >= 0x2264c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002264c0 size=64 callers=0 calls=0
*/
void sub_2264c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2264c0ULL || rel >= 0x226500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226500 size=80 callers=0 calls=0
*/
void sub_226500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226500ULL || rel >= 0x226550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226550 size=80 callers=0 calls=0
*/
void sub_226550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226550ULL || rel >= 0x2265a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002265a0 size=112 callers=0 calls=0
*/
void sub_2265a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2265a0ULL || rel >= 0x226610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226610 size=112 callers=0 calls=0
*/
void sub_226610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226610ULL || rel >= 0x226680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226680 size=160 callers=0 calls=0
*/
void sub_226680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226680ULL || rel >= 0x226720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226720 size=144 callers=0 calls=0
*/
void sub_226720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226720ULL || rel >= 0x2267b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002267b0 size=144 callers=0 calls=0
*/
void sub_2267b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2267b0ULL || rel >= 0x226840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226840 size=64 callers=0 calls=0
*/
void sub_226840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226840ULL || rel >= 0x226880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226880 size=80 callers=0 calls=0
*/
void sub_226880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226880ULL || rel >= 0x2268d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002268d0 size=224 callers=0 calls=0
*/
void sub_2268d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2268d0ULL || rel >= 0x2269b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002269b0 size=432 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: SkipCutBuffer
*/
void SkipCutBuffer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2269b0ULL || rel >= 0x226b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226b60 size=384 callers=0 calls=0
   ref: SkipCutBuffer
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void SkipCutBuffer_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226b60ULL || rel >= 0x226ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226ce0 size=176 callers=0 calls=0
*/
void sub_226ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226ce0ULL || rel >= 0x226d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226d90 size=16 callers=0 calls=0
*/
void sub_226d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226d90ULL || rel >= 0x226da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226da0 size=48 callers=0 calls=0
*/
void sub_226da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226da0ULL || rel >= 0x226dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226dd0 size=896 callers=0 calls=0
*/
void sub_226dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226dd0ULL || rel >= 0x227150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00227150 size=880 callers=0 calls=0
*/
void sub_227150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x227150ULL || rel >= 0x2274c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002274c0 size=320 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(!mStarted)
   ref: SurfaceMediaSource
*/
void SurfaceMediaSource(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2274c0ULL || rel >= 0x227600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00227600 size=64 callers=0 calls=0
*/
void sub_227600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x227600ULL || rel >= 0x227640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00227640 size=48 callers=0 calls=0
*/
void sub_227640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x227640ULL || rel >= 0x227670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00227670 size=48 callers=0 calls=0
*/
void sub_227670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x227670ULL || rel >= 0x2276a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002276a0 size=48 callers=0 calls=0
*/
void sub_2276a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2276a0ULL || rel >= 0x2276d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002276d0 size=64 callers=0 calls=0
*/
void sub_2276d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2276d0ULL || rel >= 0x227710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00227710 size=64 callers=0 calls=0
*/
void sub_227710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x227710ULL || rel >= 0x227750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00227750 size=64 callers=0 calls=0
*/
void sub_227750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x227750ULL || rel >= 0x227790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00227790 size=64 callers=0 calls=0
*/
void sub_227790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x227790ULL || rel >= 0x2277d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002277d0 size=64 callers=0 calls=0
*/
void sub_2277d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2277d0ULL || rel >= 0x227810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00227810 size=64 callers=0 calls=0
*/
void sub_227810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x227810ULL || rel >= 0x227850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00227850 size=128 callers=0 calls=0
*/
void sub_227850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x227850ULL || rel >= 0x2278d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002278d0 size=112 callers=0 calls=0
*/
void sub_2278d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2278d0ULL || rel >= 0x227940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00227940 size=112 callers=0 calls=0
*/
void sub_227940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x227940ULL || rel >= 0x2279b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002279b0 size=96 callers=0 calls=0
*/
void sub_2279b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2279b0ULL || rel >= 0x227a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00227a10 size=16 callers=0 calls=0
*/
void sub_227a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x227a10ULL || rel >= 0x227a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00227a20 size=64 callers=0 calls=0
*/
void sub_227a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x227a20ULL || rel >= 0x227a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00227a60 size=448 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(!mStarted)
   ref: SurfaceMediaSource
*/
void SurfaceMediaSource_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x227a60ULL || rel >= 0x227c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00227c20 size=224 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: SurfaceMediaSource
*/
void SurfaceMediaSource_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x227c20ULL || rel >= 0x227d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00227d00 size=64 callers=0 calls=0
*/
void sub_227d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x227d00ULL || rel >= 0x227d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00227d40 size=160 callers=0 calls=0
*/
void sub_227d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x227d40ULL || rel >= 0x227de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00227de0 size=256 callers=0 calls=0
*/
void sub_227de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x227de0ULL || rel >= 0x227ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00227ee0 size=864 callers=0 calls=0
   ref: SurfaceMediaSource::read
*/
void SurfaceMediaSource_read(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x227ee0ULL || rel >= 0x228240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228240 size=320 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: SurfaceMediaSource
   ref: !(!"signalBufferReturned: bogus buffer")
*/
void SurfaceMediaSource_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228240ULL || rel >= 0x228380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228380 size=16 callers=0 calls=0
*/
void sub_228380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228380ULL || rel >= 0x228390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228390 size=176 callers=0 calls=0
*/
void sub_228390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228390ULL || rel >= 0x228440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228440 size=16 callers=0 calls=0
*/
void sub_228440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228440ULL || rel >= 0x228450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228450 size=112 callers=0 calls=0
*/
void sub_228450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228450ULL || rel >= 0x2284c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002284c0 size=112 callers=0 calls=0
*/
void sub_2284c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2284c0ULL || rel >= 0x228530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228530 size=16 callers=0 calls=0
*/
void sub_228530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228530ULL || rel >= 0x228540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228540 size=16 callers=0 calls=0
*/
void sub_228540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228540ULL || rel >= 0x228550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228550 size=64 callers=0 calls=0
*/
void sub_228550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228550ULL || rel >= 0x228590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228590 size=32 callers=0 calls=0
*/
void sub_228590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228590ULL || rel >= 0x2285b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002285b0 size=64 callers=0 calls=0
*/
void sub_2285b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2285b0ULL || rel >= 0x2285f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002285f0 size=96 callers=0 calls=0
*/
void sub_2285f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2285f0ULL || rel >= 0x228650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228650 size=80 callers=0 calls=0
*/
void sub_228650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228650ULL || rel >= 0x2286a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002286a0 size=112 callers=0 calls=0
*/
void sub_2286a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2286a0ULL || rel >= 0x228710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228710 size=112 callers=0 calls=0
*/
void sub_228710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228710ULL || rel >= 0x228780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228780 size=32 callers=0 calls=0
*/
void sub_228780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228780ULL || rel >= 0x2287a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002287a0 size=176 callers=0 calls=0
   ref: !(mBandwidthLimitBytesPerSecond > 0)
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void ThrottledSource_cpp_31_CHECK_mBandwidthLimitBytesPerSeco(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2287a0ULL || rel >= 0x228850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228850 size=208 callers=0 calls=0
*/
void sub_228850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228850ULL || rel >= 0x228920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228920 size=80 callers=0 calls=0
*/
void sub_228920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228920ULL || rel >= 0x228970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228970 size=80 callers=0 calls=0
*/
void sub_228970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228970ULL || rel >= 0x2289c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002289c0 size=16 callers=0 calls=0
*/
void sub_2289c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2289c0ULL || rel >= 0x2289d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002289d0 size=16 callers=0 calls=0
*/
void sub_2289d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2289d0ULL || rel >= 0x2289e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002289e0 size=16 callers=0 calls=0
*/
void sub_2289e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2289e0ULL || rel >= 0x2289f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002289f0 size=16 callers=0 calls=0
*/
void sub_2289f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2289f0ULL || rel >= 0x228a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228a00 size=16 callers=0 calls=0
*/
void sub_228a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228a00ULL || rel >= 0x228a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228a10 size=16 callers=0 calls=0
*/
void sub_228a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228a10ULL || rel >= 0x228a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228a20 size=16 callers=0 calls=0
*/
void sub_228a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228a20ULL || rel >= 0x228a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228a30 size=16 callers=0 calls=0
*/
void sub_228a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228a30ULL || rel >= 0x228a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228a40 size=192 callers=0 calls=0
*/
void sub_228a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228a40ULL || rel >= 0x228b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228b00 size=432 callers=0 calls=0
*/
void sub_228b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228b00ULL || rel >= 0x228cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228cb0 size=336 callers=0 calls=0
*/
void sub_228cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228cb0ULL || rel >= 0x228e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228e00 size=160 callers=0 calls=0
*/
void sub_228e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228e00ULL || rel >= 0x228ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228ea0 size=128 callers=0 calls=0
*/
void sub_228ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228ea0ULL || rel >= 0x228f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228f20 size=32 callers=0 calls=0
*/
void sub_228f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228f20ULL || rel >= 0x228f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228f40 size=16 callers=0 calls=0
*/
void sub_228f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228f40ULL || rel >= 0x228f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228f50 size=448 callers=0 calls=0
   ref: TimedEventQueue
   ref: !(mWakeLockToken == 0)
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void TimedEventQueue(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228f50ULL || rel >= 0x229110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229110 size=32 callers=0 calls=0
*/
void sub_229110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229110ULL || rel >= 0x229130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229130 size=16 callers=0 calls=0
*/
void sub_229130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229130ULL || rel >= 0x229140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229140 size=112 callers=0 calls=0
   ref: TimedEventQueue
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(delay_us >= 0)
*/
void TimedEventQueue_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229140ULL || rel >= 0x2291b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002291b0 size=80 callers=0 calls=0
   ref: TimedEventQueue
   ref: !(mWakeLockToken == 0)
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void TimedEventQueue_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2291b0ULL || rel >= 0x229200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229200 size=208 callers=0 calls=0
*/
void sub_229200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229200ULL || rel >= 0x2292d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002292d0 size=336 callers=0 calls=0
*/
void sub_2292d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2292d0ULL || rel >= 0x229420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229420 size=608 callers=0 calls=0
   ref: TimedEventQueue
*/
void TimedEventQueue_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229420ULL || rel >= 0x229680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229680 size=160 callers=0 calls=0
*/
void sub_229680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229680ULL || rel >= 0x229720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229720 size=96 callers=0 calls=0
*/
void sub_229720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229720ULL || rel >= 0x229780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229780 size=96 callers=0 calls=0
*/
void sub_229780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229780ULL || rel >= 0x2297e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002297e0 size=16 callers=0 calls=0
*/
void sub_2297e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2297e0ULL || rel >= 0x2297f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002297f0 size=48 callers=0 calls=0
*/
void sub_2297f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2297f0ULL || rel >= 0x229820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229820 size=32 callers=0 calls=0
*/
void sub_229820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229820ULL || rel >= 0x229840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229840 size=48 callers=0 calls=0
*/
void sub_229840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229840ULL || rel >= 0x229870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229870 size=48 callers=0 calls=0
*/
void sub_229870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229870ULL || rel >= 0x2298a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002298a0 size=16 callers=0 calls=0
*/
void sub_2298a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2298a0ULL || rel >= 0x2298b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002298b0 size=160 callers=0 calls=0
*/
void sub_2298b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2298b0ULL || rel >= 0x229950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229950 size=64 callers=0 calls=0
*/
void sub_229950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229950ULL || rel >= 0x229990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229990 size=48 callers=0 calls=0
*/
void sub_229990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229990ULL || rel >= 0x2299c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002299c0 size=16 callers=0 calls=0
*/
void sub_2299c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2299c0ULL || rel >= 0x2299d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002299d0 size=16 callers=0 calls=0
*/
void sub_2299d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2299d0ULL || rel >= 0x2299e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002299e0 size=16 callers=0 calls=0
*/
void sub_2299e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2299e0ULL || rel >= 0x2299f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002299f0 size=16 callers=0 calls=0
*/
void sub_2299f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2299f0ULL || rel >= 0x229a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229a00 size=16 callers=0 calls=0
*/
void sub_229a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229a00ULL || rel >= 0x229a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229a10 size=16 callers=0 calls=0
*/
void sub_229a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229a10ULL || rel >= 0x229a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229a20 size=16 callers=0 calls=0
*/
void sub_229a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229a20ULL || rel >= 0x229a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229a30 size=16 callers=0 calls=0
*/
void sub_229a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229a30ULL || rel >= 0x229a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229a40 size=32 callers=0 calls=0
*/
void sub_229a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229a40ULL || rel >= 0x229a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229a60 size=32 callers=0 calls=0
*/
void sub_229a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229a60ULL || rel >= 0x229a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229a80 size=4944 callers=0 calls=1
   calls: sub_22add0
   ref: is-sync-frame
   ref: rotation-degrees
   ref: timeUs
   ref: audio/
   ref: frame-rate
   ref: video/
   ref: sar-width
   ref: bit-rate
*/
void totalDataSize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229a80ULL || rel >= 0x22add0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022add0 size=352 callers=3 calls=0
*/
void sub_22add0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22add0ULL || rel >= 0x22af30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022af30 size=2512 callers=0 calls=0
   ref: is-sync-frame
   ref: rotation-degrees
   ref: audio/
   ref: frame-rate
   ref: video/
   ref: sar-width
   ref: height
   ref: color-range
*/
void durationUs_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22af30ULL || rel >= 0x22b900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022b900 size=112 callers=0 calls=0
   ref: Unknown
   ref: stagefright/1.2 (Linux;Android 
   ref: ro.build.version.release
*/
void Unknown(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22b900ULL || rel >= 0x22b970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022b970 size=496 callers=0 calls=0
   ref: music_offload_sample_rate
   ref: delay_samples
   ref: music_offload_avg_bit_rate
   ref: padding_samples
   ref: music_offload_num_channels
*/
void music_offload_sample_rate(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22b970ULL || rel >= 0x22bb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022bb60 size=112 callers=0 calls=0
*/
void sub_22bb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22bb60ULL || rel >= 0x22bbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022bbd0 size=160 callers=0 calls=0
*/
void sub_22bbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22bbd0ULL || rel >= 0x22bc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022bc70 size=16 callers=0 calls=0
*/
void sub_22bc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22bc70ULL || rel >= 0x22bc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022bc80 size=400 callers=0 calls=0
   ref: <URI suppressed>
   ref: <no-scheme URI suppressed>
   ref: ://<suppressed>
   ref: media.stagefright.log-uri
*/
void suppressed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22bc80ULL || rel >= 0x22be10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022be10 size=208 callers=0 calls=0
*/
void sub_22be10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22be10ULL || rel >= 0x22bee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022bee0 size=976 callers=0 calls=0
   ref: VBRISeeker
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void VBRISeeker(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22bee0ULL || rel >= 0x22c2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022c2b0 size=96 callers=0 calls=0
*/
void sub_22c2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22c2b0ULL || rel >= 0x22c310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022c310 size=32 callers=0 calls=0
*/
void sub_22c310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22c310ULL || rel >= 0x22c330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022c330 size=112 callers=0 calls=0
*/
void sub_22c330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22c330ULL || rel >= 0x22c3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022c3a0 size=96 callers=0 calls=0
*/
void sub_22c3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22c3a0ULL || rel >= 0x22c400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022c400 size=96 callers=0 calls=0
*/
void sub_22c400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22c400ULL || rel >= 0x22c460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022c460 size=112 callers=0 calls=0
*/
void sub_22c460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22c460ULL || rel >= 0x22c4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022c4d0 size=1472 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: WAVExtractor
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(mWaveFormat == WAVE_FORMAT_MULAW || mWaveFormat == WAVE_FORMAT_ALAW)
*/
void WAVExtractor(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22c4d0ULL || rel >= 0x22ca90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ca90 size=80 callers=0 calls=0
*/
void sub_22ca90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ca90ULL || rel >= 0x22cae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022cae0 size=96 callers=0 calls=0
*/
void sub_22cae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22cae0ULL || rel >= 0x22cb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022cb40 size=128 callers=0 calls=0
*/
void sub_22cb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22cb40ULL || rel >= 0x22cbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022cbc0 size=16 callers=0 calls=0
*/
void sub_22cbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22cbc0ULL || rel >= 0x22cbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022cbd0 size=144 callers=0 calls=0
*/
void sub_22cbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22cbd0ULL || rel >= 0x22cc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022cc60 size=352 callers=0 calls=0
   ref: WAVExtractor
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(mMeta->findInt32(kKeyChannelCount, &mNumChannels))
   ref: !(mMeta->findInt32(kKeySampleRate, &mSampleRate))
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void WAVExtractor_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22cc60ULL || rel >= 0x22cdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022cdc0 size=48 callers=0 calls=0
*/
void sub_22cdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22cdc0ULL || rel >= 0x22cdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022cdf0 size=336 callers=0 calls=0
   ref: WAVExtractor
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(mMeta->findInt32(kKeyChannelCount, &mNumChannels))
   ref: !(mMeta->findInt32(kKeySampleRate, &mSampleRate))
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void WAVExtractor_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22cdf0ULL || rel >= 0x22cf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022cf40 size=128 callers=0 calls=0
*/
void sub_22cf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22cf40ULL || rel >= 0x22cfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022cfc0 size=160 callers=0 calls=0
*/
void sub_22cfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22cfc0ULL || rel >= 0x22d060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022d060 size=160 callers=0 calls=0
*/
void sub_22d060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22d060ULL || rel >= 0x22d100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022d100 size=160 callers=0 calls=0
*/
void sub_22d100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22d100ULL || rel >= 0x22d1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022d1a0 size=16 callers=0 calls=0
*/
void sub_22d1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22d1a0ULL || rel >= 0x22d1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022d1b0 size=208 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: WAVExtractor
   ref: !(!mStarted)
*/
void WAVExtractor_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22d1b0ULL || rel >= 0x22d280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022d280 size=128 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: WAVExtractor
   ref: !(mStarted)
*/
void WAVExtractor_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22d280ULL || rel >= 0x22d300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022d300 size=32 callers=0 calls=0
*/
void sub_22d300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22d300ULL || rel >= 0x22d320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022d320 size=1168 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: WAVExtractor
*/
void WAVExtractor_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22d320ULL || rel >= 0x22d7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022d7b0 size=336 callers=0 calls=0
*/
void sub_22d7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22d7b0ULL || rel >= 0x22d900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022d900 size=112 callers=0 calls=0
*/
void sub_22d900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22d900ULL || rel >= 0x22d970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022d970 size=32 callers=0 calls=0
*/
void sub_22d970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22d970ULL || rel >= 0x22d990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022d990 size=80 callers=0 calls=0
*/
void sub_22d990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22d990ULL || rel >= 0x22d9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022d9e0 size=96 callers=0 calls=0
*/
void sub_22d9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22d9e0ULL || rel >= 0x22da40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022da40 size=32 callers=0 calls=0
*/
void sub_22da40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22da40ULL || rel >= 0x22da60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022da60 size=32 callers=0 calls=0
*/
void sub_22da60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22da60ULL || rel >= 0x22da80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022da80 size=32 callers=0 calls=0
*/
void sub_22da80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22da80ULL || rel >= 0x22daa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022daa0 size=32 callers=0 calls=0
*/
void sub_22daa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22daa0ULL || rel >= 0x22dac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022dac0 size=32 callers=0 calls=0
*/
void sub_22dac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22dac0ULL || rel >= 0x22dae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022dae0 size=32 callers=0 calls=0
*/
void sub_22dae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22dae0ULL || rel >= 0x22db00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022db00 size=32 callers=0 calls=0
*/
void sub_22db00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22db00ULL || rel >= 0x22db20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022db20 size=32 callers=0 calls=0
*/
void sub_22db20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22db20ULL || rel >= 0x22db40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022db40 size=32 callers=0 calls=0
*/
void sub_22db40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22db40ULL || rel >= 0x22db60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022db60 size=32 callers=0 calls=0
*/
void sub_22db60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22db60ULL || rel >= 0x22db80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022db80 size=32 callers=0 calls=0
*/
void sub_22db80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22db80ULL || rel >= 0x22dba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022dba0 size=64 callers=0 calls=0
*/
void sub_22dba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22dba0ULL || rel >= 0x22dbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022dbe0 size=80 callers=0 calls=0
*/
void sub_22dbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22dbe0ULL || rel >= 0x22dc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022dc30 size=64 callers=0 calls=0
*/
void sub_22dc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22dc30ULL || rel >= 0x22dc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022dc70 size=32 callers=0 calls=0
*/
void sub_22dc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22dc70ULL || rel >= 0x22dc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022dc90 size=240 callers=0 calls=0
*/
void sub_22dc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22dc90ULL || rel >= 0x22dd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022dd80 size=848 callers=0 calls=0
*/
void sub_22dd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22dd80ULL || rel >= 0x22e0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e0d0 size=16 callers=0 calls=0
*/
void sub_22e0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e0d0ULL || rel >= 0x22e0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e0e0 size=16 callers=0 calls=0
*/
void sub_22e0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e0e0ULL || rel >= 0x22e0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e0f0 size=48 callers=0 calls=0
*/
void sub_22e0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e0f0ULL || rel >= 0x22e120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e120 size=192 callers=0 calls=0
*/
void sub_22e120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e120ULL || rel >= 0x22e1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e1e0 size=32 callers=0 calls=0
*/
void sub_22e1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e1e0ULL || rel >= 0x22e200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e200 size=144 callers=0 calls=0
*/
void sub_22e200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e200ULL || rel >= 0x22e290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e290 size=256 callers=0 calls=0
*/
void sub_22e290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e290ULL || rel >= 0x22e390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e390 size=48 callers=0 calls=0
*/
void sub_22e390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e390ULL || rel >= 0x22e3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e3c0 size=256 callers=0 calls=0
*/
void sub_22e3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e3c0ULL || rel >= 0x22e4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e4c0 size=688 callers=0 calls=0
   ref: MatroskaExtractor
   ref: audio/
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(meta->findCString(kKeyMIMEType, &mime))
   ref: !(meta->findData( kKeyAVCC, &dummy, (const void **)&avcc, &avccSize))
*/
void MatroskaExtractor(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e4c0ULL || rel >= 0x22e770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e770 size=704 callers=0 calls=0
   ref: MatroskaExtractor
   ref: audio/
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(meta->findCString(kKeyMIMEType, &mime))
   ref: !(meta->findData( kKeyAVCC, &dummy, (const void **)&avcc, &avccSize))
*/
void MatroskaExtractor_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e770ULL || rel >= 0x22ea30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ea30 size=256 callers=0 calls=0
*/
void sub_22ea30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ea30ULL || rel >= 0x22eb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022eb30 size=112 callers=0 calls=0
*/
void sub_22eb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22eb30ULL || rel >= 0x22eba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022eba0 size=48 callers=0 calls=0
*/
void sub_22eba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22eba0ULL || rel >= 0x22ebd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ebd0 size=64 callers=0 calls=0
*/
void sub_22ebd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ebd0ULL || rel >= 0x22ec10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ec10 size=64 callers=0 calls=0
*/
void sub_22ec10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ec10ULL || rel >= 0x22ec50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ec50 size=64 callers=0 calls=0
*/
void sub_22ec50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ec50ULL || rel >= 0x22ec90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ec90 size=32 callers=0 calls=0
*/
void sub_22ec90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ec90ULL || rel >= 0x22ecb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ecb0 size=208 callers=0 calls=0
*/
void sub_22ecb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ecb0ULL || rel >= 0x22ed80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ed80 size=112 callers=0 calls=0
*/
void sub_22ed80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ed80ULL || rel >= 0x22edf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022edf0 size=48 callers=0 calls=0
*/
void sub_22edf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22edf0ULL || rel >= 0x22ee20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ee20 size=400 callers=0 calls=0
*/
void sub_22ee20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ee20ULL || rel >= 0x22efb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022efb0 size=384 callers=0 calls=0
*/
void sub_22efb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22efb0ULL || rel >= 0x22f130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022f130 size=160 callers=0 calls=0
*/
void sub_22f130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22f130ULL || rel >= 0x22f1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022f1d0 size=1792 callers=0 calls=0
   ref: MatroskaExtractor
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(mCluster)
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(pCP)
   ref: !(!mCluster->EOS())
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void MatroskaExtractor_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22f1d0ULL || rel >= 0x22f8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022f8d0 size=80 callers=0 calls=0
*/
void sub_22f8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22f8d0ULL || rel >= 0x22f920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022f920 size=16 callers=0 calls=0
*/
void sub_22f920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22f920ULL || rel >= 0x22f930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022f930 size=32 callers=0 calls=0
*/
void sub_22f930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22f930ULL || rel >= 0x22f950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022f950 size=80 callers=0 calls=0
*/
void sub_22f950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22f950ULL || rel >= 0x22f9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022f9a0 size=944 callers=0 calls=0
   ref: MatroskaExtractor
   ref: !(nextCluster != 0L)
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(!nextCluster->EOS())
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(mBlockEntry != 0L)
*/
void MatroskaExtractor_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22f9a0ULL || rel >= 0x22fd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022fd50 size=96 callers=0 calls=0
*/
void sub_22fd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22fd50ULL || rel >= 0x22fdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022fdb0 size=800 callers=0 calls=0
   ref: MatroskaExtractor
   ref: !(mPendingFrames.empty())
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void MatroskaExtractor_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22fdb0ULL || rel >= 0x2300d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002300d0 size=1584 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: MatroskaExtractor
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(frame->meta_data()->findInt32(kKeyIsSyncFrame, &isSync))
   ref: !(frame->meta_data()->findInt64(kKeyTime, &timeUs))
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void MatroskaExtractor_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2300d0ULL || rel >= 0x230700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00230700 size=16 callers=0 calls=0
*/
void sub_230700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x230700ULL || rel >= 0x230710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00230710 size=576 callers=0 calls=0
   ref: MatroskaExtractor
   ref: !(mSegment == 0L)
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void MatroskaExtractor_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x230710ULL || rel >= 0x230950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00230950 size=1744 callers=0 calls=1
   calls: MatroskaExtractor_10
   ref: MatroskaExtractor
   ref: V_MPEG4/ISO/AVC
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: A_VORBIS
   ref: A_OPUS
   ref: !(codecPrivateSize >= 2)
   ref: A_MPEG/L3
   ref: V_MPEG4/ISO/ASP
*/
void MatroskaExtractor_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x230950ULL || rel >= 0x231020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00231020 size=192 callers=0 calls=0
*/
void sub_231020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x231020ULL || rel >= 0x2310e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002310e0 size=64 callers=0 calls=0
*/
void sub_2310e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2310e0ULL || rel >= 0x231120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00231120 size=48 callers=0 calls=0
*/
void sub_231120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x231120ULL || rel >= 0x231150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00231150 size=16 callers=0 calls=0
*/
void sub_231150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x231150ULL || rel >= 0x231160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00231160 size=160 callers=0 calls=0
*/
void sub_231160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x231160ULL || rel >= 0x231200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00231200 size=144 callers=0 calls=0
*/
void sub_231200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x231200ULL || rel >= 0x231290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00231290 size=688 callers=0 calls=0
   ref: MatroskaExtractor
   ref: video/
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(info->mMeta->findCString(kKeyMIMEType, &mime))
*/
void MatroskaExtractor_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x231290ULL || rel >= 0x231540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00231540 size=400 callers=0 calls=0
*/
void sub_231540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x231540ULL || rel >= 0x2316d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002316d0 size=272 callers=0 calls=0
*/
void sub_2316d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2316d0ULL || rel >= 0x2317e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002317e0 size=1024 callers=2 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: MatroskaExtractor
   ref: !(size <= 0xfffffff)
*/
void MatroskaExtractor_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2317e0ULL || rel >= 0x231be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00231be0 size=128 callers=0 calls=0
   ref: video/webm
*/
void webm(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x231be0ULL || rel >= 0x231c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00231c60 size=176 callers=0 calls=0
*/
void sub_231c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x231c60ULL || rel >= 0x231d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00231d10 size=208 callers=0 calls=0
*/
void sub_231d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x231d10ULL || rel >= 0x231de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00231de0 size=64 callers=0 calls=0
*/
void sub_231de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x231de0ULL || rel >= 0x231e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00231e20 size=208 callers=0 calls=0
   ref: MatroskaExtractor
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(position >= 0)
   ref: !(length >= 0)
*/
void MatroskaExtractor_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x231e20ULL || rel >= 0x231ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00231ef0 size=112 callers=0 calls=0
*/
void sub_231ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x231ef0ULL || rel >= 0x231f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00231f60 size=80 callers=0 calls=0
*/
void sub_231f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x231f60ULL || rel >= 0x231fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00231fb0 size=64 callers=0 calls=0
*/
void sub_231fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x231fb0ULL || rel >= 0x231ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00231ff0 size=96 callers=0 calls=0
*/
void sub_231ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x231ff0ULL || rel >= 0x232050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00232050 size=112 callers=0 calls=0
*/
void sub_232050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x232050ULL || rel >= 0x2320c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002320c0 size=144 callers=0 calls=0
*/
void sub_2320c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2320c0ULL || rel >= 0x232150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00232150 size=144 callers=0 calls=0
*/
void sub_232150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x232150ULL || rel >= 0x2321e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002321e0 size=208 callers=0 calls=0
*/
void sub_2321e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2321e0ULL || rel >= 0x2322b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002322b0 size=192 callers=0 calls=0
*/
void sub_2322b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2322b0ULL || rel >= 0x232370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00232370 size=64 callers=0 calls=0
*/
void sub_232370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x232370ULL || rel >= 0x2323b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002323b0 size=64 callers=0 calls=0
*/
void sub_2323b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2323b0ULL || rel >= 0x2323f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002323f0 size=16 callers=0 calls=0
*/
void sub_2323f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2323f0ULL || rel >= 0x232400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00232400 size=16 callers=0 calls=0
*/
void sub_232400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x232400ULL || rel >= 0x232410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00232410 size=32 callers=0 calls=0
*/
void sub_232410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x232410ULL || rel >= 0x232430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00232430 size=96 callers=0 calls=0
*/
void sub_232430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x232430ULL || rel >= 0x232490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00232490 size=32 callers=0 calls=0
*/
void sub_232490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x232490ULL || rel >= 0x2324b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002324b0 size=32 callers=0 calls=0
*/
void sub_2324b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2324b0ULL || rel >= 0x2324d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002324d0 size=16 callers=0 calls=0
*/
void sub_2324d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2324d0ULL || rel >= 0x2324e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002324e0 size=16 callers=0 calls=0
*/
void sub_2324e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2324e0ULL || rel >= 0x2324f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002324f0 size=32 callers=0 calls=0
*/
void sub_2324f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2324f0ULL || rel >= 0x232510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00232510 size=304 callers=0 calls=0
*/
void sub_232510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x232510ULL || rel >= 0x232640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00232640 size=288 callers=0 calls=0
*/
void sub_232640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x232640ULL || rel >= 0x232760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00232760 size=240 callers=0 calls=0
*/
void sub_232760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x232760ULL || rel >= 0x232850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00232850 size=160 callers=0 calls=0
*/
void sub_232850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x232850ULL || rel >= 0x2328f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002328f0 size=256 callers=0 calls=0
*/
void sub_2328f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2328f0ULL || rel >= 0x2329f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002329f0 size=224 callers=0 calls=0
*/
void sub_2329f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2329f0ULL || rel >= 0x232ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00232ad0 size=192 callers=0 calls=0
*/
void sub_232ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x232ad0ULL || rel >= 0x232b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00232b90 size=672 callers=0 calls=0
*/
void sub_232b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x232b90ULL || rel >= 0x232e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00232e30 size=1040 callers=0 calls=0
*/
void sub_232e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x232e30ULL || rel >= 0x233240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00233240 size=1040 callers=0 calls=0
*/
void sub_233240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x233240ULL || rel >= 0x233650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00233650 size=32 callers=0 calls=0
*/
void sub_233650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x233650ULL || rel >= 0x233670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00233670 size=80 callers=0 calls=0
*/
void sub_233670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x233670ULL || rel >= 0x2336c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002336c0 size=16 callers=0 calls=0
*/
void sub_2336c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2336c0ULL || rel >= 0x2336d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002336d0 size=2080 callers=0 calls=0
*/
void sub_2336d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2336d0ULL || rel >= 0x233ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00233ef0 size=64 callers=0 calls=0
*/
void sub_233ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x233ef0ULL || rel >= 0x233f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00233f30 size=704 callers=0 calls=0
*/
void sub_233f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x233f30ULL || rel >= 0x2341f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002341f0 size=1264 callers=0 calls=0
*/
void sub_2341f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2341f0ULL || rel >= 0x2346e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002346e0 size=2144 callers=0 calls=0
*/
void sub_2346e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2346e0ULL || rel >= 0x234f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00234f40 size=1088 callers=0 calls=0
*/
void sub_234f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x234f40ULL || rel >= 0x235380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00235380 size=432 callers=0 calls=0
*/
void sub_235380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x235380ULL || rel >= 0x235530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00235530 size=816 callers=0 calls=0
*/
void sub_235530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x235530ULL || rel >= 0x235860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00235860 size=208 callers=0 calls=0
*/
void sub_235860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x235860ULL || rel >= 0x235930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00235930 size=208 callers=0 calls=0
*/
void sub_235930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x235930ULL || rel >= 0x235a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00235a00 size=80 callers=0 calls=0
*/
void sub_235a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x235a00ULL || rel >= 0x235a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00235a50 size=2560 callers=0 calls=0
*/
void sub_235a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x235a50ULL || rel >= 0x236450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00236450 size=144 callers=0 calls=0
*/
void sub_236450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x236450ULL || rel >= 0x2364e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002364e0 size=2480 callers=0 calls=0
*/
void sub_2364e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2364e0ULL || rel >= 0x236e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00236e90 size=16 callers=0 calls=0
*/
void sub_236e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x236e90ULL || rel >= 0x236ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00236ea0 size=16 callers=0 calls=0
*/
void sub_236ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x236ea0ULL || rel >= 0x236eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00236eb0 size=112 callers=0 calls=0
*/
void sub_236eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x236eb0ULL || rel >= 0x236f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00236f20 size=480 callers=0 calls=0
*/
void sub_236f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x236f20ULL || rel >= 0x237100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00237100 size=1776 callers=0 calls=0
*/
void sub_237100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x237100ULL || rel >= 0x2377f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002377f0 size=368 callers=0 calls=0
*/
void sub_2377f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2377f0ULL || rel >= 0x237960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00237960 size=272 callers=0 calls=0
*/
void sub_237960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x237960ULL || rel >= 0x237a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00237a70 size=16 callers=0 calls=0
*/
void sub_237a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x237a70ULL || rel >= 0x237a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00237a80 size=32 callers=0 calls=0
*/
void sub_237a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x237a80ULL || rel >= 0x237aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00237aa0 size=64 callers=0 calls=0
*/
void sub_237aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x237aa0ULL || rel >= 0x237ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00237ae0 size=1504 callers=0 calls=0
*/
void sub_237ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x237ae0ULL || rel >= 0x2380c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002380c0 size=16 callers=0 calls=0
*/
void sub_2380c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2380c0ULL || rel >= 0x2380d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002380d0 size=48 callers=0 calls=0
*/
void sub_2380d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2380d0ULL || rel >= 0x238100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00238100 size=16 callers=0 calls=0
*/
void sub_238100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x238100ULL || rel >= 0x238110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00238110 size=48 callers=0 calls=0
*/
void sub_238110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x238110ULL || rel >= 0x238140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00238140 size=1392 callers=0 calls=0
*/
void sub_238140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x238140ULL || rel >= 0x2386b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002386b0 size=32 callers=0 calls=0
*/
void sub_2386b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2386b0ULL || rel >= 0x2386d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002386d0 size=128 callers=0 calls=0
*/
void sub_2386d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2386d0ULL || rel >= 0x238750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00238750 size=32 callers=0 calls=0
*/
void sub_238750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x238750ULL || rel >= 0x238770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00238770 size=32 callers=0 calls=0
*/
void sub_238770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x238770ULL || rel >= 0x238790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00238790 size=624 callers=0 calls=0
*/
void sub_238790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x238790ULL || rel >= 0x238a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00238a00 size=368 callers=0 calls=0
*/
void sub_238a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x238a00ULL || rel >= 0x238b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00238b70 size=704 callers=0 calls=0
*/
void sub_238b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x238b70ULL || rel >= 0x238e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00238e30 size=16 callers=0 calls=0
*/
void sub_238e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x238e30ULL || rel >= 0x238e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00238e40 size=1952 callers=0 calls=0
*/
void sub_238e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x238e40ULL || rel >= 0x2395e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002395e0 size=400 callers=0 calls=0
*/
void sub_2395e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2395e0ULL || rel >= 0x239770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00239770 size=32 callers=0 calls=0
*/
void sub_239770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x239770ULL || rel >= 0x239790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00239790 size=64 callers=0 calls=0
*/
void sub_239790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x239790ULL || rel >= 0x2397d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002397d0 size=48 callers=0 calls=0
*/
void sub_2397d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2397d0ULL || rel >= 0x239800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00239800 size=64 callers=0 calls=0
*/
void sub_239800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x239800ULL || rel >= 0x239840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00239840 size=112 callers=0 calls=0
*/
void sub_239840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x239840ULL || rel >= 0x2398b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002398b0 size=32 callers=0 calls=0
*/
void sub_2398b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2398b0ULL || rel >= 0x2398d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002398d0 size=416 callers=0 calls=0
*/
void sub_2398d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2398d0ULL || rel >= 0x239a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00239a70 size=576 callers=0 calls=0
*/
void sub_239a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x239a70ULL || rel >= 0x239cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00239cb0 size=352 callers=0 calls=0
*/
void sub_239cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x239cb0ULL || rel >= 0x239e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00239e10 size=32 callers=0 calls=0
*/
void sub_239e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x239e10ULL || rel >= 0x239e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00239e30 size=16 callers=0 calls=0
*/
void sub_239e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x239e30ULL || rel >= 0x239e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00239e40 size=960 callers=0 calls=0
*/
void sub_239e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x239e40ULL || rel >= 0x23a200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023a200 size=16 callers=0 calls=0
*/
void sub_23a200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23a200ULL || rel >= 0x23a210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023a210 size=16 callers=0 calls=0
*/
void sub_23a210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23a210ULL || rel >= 0x23a220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023a220 size=16 callers=0 calls=0
*/
void sub_23a220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23a220ULL || rel >= 0x23a230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023a230 size=144 callers=0 calls=0
*/
void sub_23a230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23a230ULL || rel >= 0x23a2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023a2c0 size=48 callers=0 calls=0
*/
void sub_23a2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23a2c0ULL || rel >= 0x23a2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023a2f0 size=48 callers=0 calls=0
*/
void sub_23a2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23a2f0ULL || rel >= 0x23a320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023a320 size=16 callers=0 calls=0
*/
void sub_23a320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23a320ULL || rel >= 0x23a330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023a330 size=2128 callers=0 calls=0
*/
void sub_23a330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23a330ULL || rel >= 0x23ab80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023ab80 size=16 callers=0 calls=0
*/
void sub_23ab80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23ab80ULL || rel >= 0x23ab90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023ab90 size=1440 callers=0 calls=0
*/
void sub_23ab90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23ab90ULL || rel >= 0x23b130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023b130 size=3504 callers=0 calls=0
*/
void sub_23b130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23b130ULL || rel >= 0x23bee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023bee0 size=272 callers=0 calls=0
*/
void sub_23bee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23bee0ULL || rel >= 0x23bff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023bff0 size=80 callers=0 calls=0
*/
void sub_23bff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23bff0ULL || rel >= 0x23c040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023c040 size=16 callers=0 calls=0
*/
void sub_23c040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23c040ULL || rel >= 0x23c050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023c050 size=16 callers=0 calls=0
*/
void sub_23c050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23c050ULL || rel >= 0x23c060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023c060 size=16 callers=0 calls=0
*/
void sub_23c060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23c060ULL || rel >= 0x23c070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023c070 size=16 callers=0 calls=0
*/
void sub_23c070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23c070ULL || rel >= 0x23c080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023c080 size=16 callers=0 calls=0
*/
void sub_23c080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23c080ULL || rel >= 0x23c090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023c090 size=48 callers=0 calls=0
*/
void sub_23c090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23c090ULL || rel >= 0x23c0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023c0c0 size=48 callers=0 calls=0
*/
void sub_23c0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23c0c0ULL || rel >= 0x23c0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023c0f0 size=32 callers=0 calls=0
*/
void sub_23c0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23c0f0ULL || rel >= 0x23c110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023c110 size=192 callers=0 calls=0
*/
void sub_23c110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23c110ULL || rel >= 0x23c1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023c1d0 size=112 callers=0 calls=0
*/
void sub_23c1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23c1d0ULL || rel >= 0x23c240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023c240 size=304 callers=0 calls=0
*/
void sub_23c240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23c240ULL || rel >= 0x23c370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023c370 size=16 callers=0 calls=0
*/
void sub_23c370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23c370ULL || rel >= 0x23c380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023c380 size=48 callers=0 calls=0
*/
void sub_23c380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23c380ULL || rel >= 0x23c3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023c3b0 size=224 callers=0 calls=0
*/
void sub_23c3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23c3b0ULL || rel >= 0x23c490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023c490 size=32 callers=0 calls=0
*/
void sub_23c490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23c490ULL || rel >= 0x23c4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023c4b0 size=16 callers=0 calls=0
*/
void sub_23c4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23c4b0ULL || rel >= 0x23c4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023c4c0 size=256 callers=0 calls=0
*/
void sub_23c4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23c4c0ULL || rel >= 0x23c5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023c5c0 size=16 callers=0 calls=0
*/
void sub_23c5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23c5c0ULL || rel >= 0x23c5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023c5d0 size=16 callers=0 calls=0
*/
void sub_23c5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23c5d0ULL || rel >= 0x23c5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023c5e0 size=16 callers=0 calls=0
*/
void sub_23c5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23c5e0ULL || rel >= 0x23c5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023c5f0 size=48 callers=0 calls=0
*/
void sub_23c5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23c5f0ULL || rel >= 0x23c620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023c620 size=192 callers=0 calls=0
*/
void sub_23c620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23c620ULL || rel >= 0x23c6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023c6e0 size=128 callers=0 calls=0
*/
void sub_23c6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23c6e0ULL || rel >= 0x23c760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023c760 size=272 callers=0 calls=0
*/
void sub_23c760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23c760ULL || rel >= 0x23c870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023c870 size=32 callers=0 calls=0
*/
void sub_23c870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23c870ULL || rel >= 0x23c890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023c890 size=880 callers=0 calls=0
*/
void sub_23c890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23c890ULL || rel >= 0x23cc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023cc00 size=64 callers=0 calls=0
*/
void sub_23cc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23cc00ULL || rel >= 0x23cc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023cc40 size=16 callers=0 calls=0
*/
void sub_23cc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23cc40ULL || rel >= 0x23cc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023cc50 size=16 callers=0 calls=0
*/
void sub_23cc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23cc50ULL || rel >= 0x23cc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023cc60 size=16 callers=0 calls=0
*/
void sub_23cc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23cc60ULL || rel >= 0x23cc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023cc70 size=16 callers=0 calls=0
*/
void sub_23cc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23cc70ULL || rel >= 0x23cc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023cc80 size=16 callers=0 calls=0
*/
void sub_23cc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23cc80ULL || rel >= 0x23cc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023cc90 size=16 callers=0 calls=0
*/
void sub_23cc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23cc90ULL || rel >= 0x23cca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023cca0 size=80 callers=0 calls=0
*/
void sub_23cca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23cca0ULL || rel >= 0x23ccf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023ccf0 size=64 callers=0 calls=0
*/
void sub_23ccf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23ccf0ULL || rel >= 0x23cd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023cd30 size=80 callers=0 calls=0
*/
void sub_23cd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23cd30ULL || rel >= 0x23cd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023cd80 size=16 callers=0 calls=0
*/
void sub_23cd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23cd80ULL || rel >= 0x23cd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023cd90 size=48 callers=0 calls=0
*/
void sub_23cd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23cd90ULL || rel >= 0x23cdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023cdc0 size=80 callers=0 calls=0
*/
void sub_23cdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23cdc0ULL || rel >= 0x23ce10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023ce10 size=320 callers=0 calls=0
*/
void sub_23ce10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23ce10ULL || rel >= 0x23cf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023cf50 size=240 callers=0 calls=0
*/
void sub_23cf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23cf50ULL || rel >= 0x23d040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023d040 size=16 callers=0 calls=0
*/
void sub_23d040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d040ULL || rel >= 0x23d050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023d050 size=592 callers=0 calls=0
*/
void sub_23d050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d050ULL || rel >= 0x23d2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023d2a0 size=32 callers=0 calls=0
*/
void sub_23d2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d2a0ULL || rel >= 0x23d2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023d2c0 size=16 callers=0 calls=0
*/
void sub_23d2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d2c0ULL || rel >= 0x23d2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023d2d0 size=16 callers=0 calls=0
*/
void sub_23d2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d2d0ULL || rel >= 0x23d2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023d2e0 size=16 callers=0 calls=0
*/
void sub_23d2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d2e0ULL || rel >= 0x23d2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023d2f0 size=16 callers=0 calls=0
*/
void sub_23d2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d2f0ULL || rel >= 0x23d300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023d300 size=16 callers=0 calls=0
*/
void sub_23d300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d300ULL || rel >= 0x23d310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023d310 size=32 callers=0 calls=0
*/
void sub_23d310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d310ULL || rel >= 0x23d330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023d330 size=224 callers=0 calls=0
*/
void sub_23d330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d330ULL || rel >= 0x23d410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023d410 size=128 callers=0 calls=0
*/
void sub_23d410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d410ULL || rel >= 0x23d490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023d490 size=448 callers=0 calls=0
*/
void sub_23d490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d490ULL || rel >= 0x23d650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023d650 size=16 callers=0 calls=0
*/
void sub_23d650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d650ULL || rel >= 0x23d660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023d660 size=48 callers=0 calls=0
*/
void sub_23d660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d660ULL || rel >= 0x23d690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023d690 size=224 callers=0 calls=0
*/
void sub_23d690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d690ULL || rel >= 0x23d770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023d770 size=32 callers=0 calls=0
*/
void sub_23d770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d770ULL || rel >= 0x23d790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023d790 size=16 callers=0 calls=0
*/
void sub_23d790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d790ULL || rel >= 0x23d7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023d7a0 size=208 callers=0 calls=0
*/
void sub_23d7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d7a0ULL || rel >= 0x23d870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023d870 size=16 callers=0 calls=0
*/
void sub_23d870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d870ULL || rel >= 0x23d880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023d880 size=16 callers=0 calls=0
*/
void sub_23d880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d880ULL || rel >= 0x23d890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023d890 size=16 callers=0 calls=0
*/
void sub_23d890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d890ULL || rel >= 0x23d8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023d8a0 size=48 callers=0 calls=0
*/
void sub_23d8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d8a0ULL || rel >= 0x23d8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023d8d0 size=64 callers=0 calls=0
*/
void sub_23d8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d8d0ULL || rel >= 0x23d910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023d910 size=384 callers=0 calls=0
*/
void sub_23d910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d910ULL || rel >= 0x23da90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023da90 size=304 callers=0 calls=0
*/
void sub_23da90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23da90ULL || rel >= 0x23dbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023dbc0 size=16 callers=0 calls=0
*/
void sub_23dbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23dbc0ULL || rel >= 0x23dbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023dbd0 size=464 callers=0 calls=0
*/
void sub_23dbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23dbd0ULL || rel >= 0x23dda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023dda0 size=32 callers=0 calls=0
*/
void sub_23dda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23dda0ULL || rel >= 0x23ddc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023ddc0 size=16 callers=0 calls=0
*/
void sub_23ddc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23ddc0ULL || rel >= 0x23ddd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023ddd0 size=16 callers=0 calls=0
*/
void sub_23ddd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23ddd0ULL || rel >= 0x23dde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023dde0 size=16 callers=0 calls=0
*/
void sub_23dde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23dde0ULL || rel >= 0x23ddf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023ddf0 size=16 callers=0 calls=0
*/
void sub_23ddf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23ddf0ULL || rel >= 0x23de00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023de00 size=32 callers=0 calls=0
*/
void sub_23de00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23de00ULL || rel >= 0x23de20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023de20 size=80 callers=0 calls=0
*/
void sub_23de20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23de20ULL || rel >= 0x23de70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023de70 size=16 callers=0 calls=0
*/
void sub_23de70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23de70ULL || rel >= 0x23de80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023de80 size=16 callers=0 calls=0
*/
void sub_23de80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23de80ULL || rel >= 0x23de90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023de90 size=16 callers=0 calls=0
*/
void sub_23de90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23de90ULL || rel >= 0x23dea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023dea0 size=16 callers=0 calls=0
*/
void sub_23dea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23dea0ULL || rel >= 0x23deb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023deb0 size=16 callers=0 calls=0
*/
void sub_23deb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23deb0ULL || rel >= 0x23dec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023dec0 size=32 callers=0 calls=0
*/
void sub_23dec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23dec0ULL || rel >= 0x23dee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023dee0 size=80 callers=0 calls=0
*/
void sub_23dee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23dee0ULL || rel >= 0x23df30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023df30 size=32 callers=0 calls=0
*/
void sub_23df30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23df30ULL || rel >= 0x23df50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023df50 size=208 callers=0 calls=0
*/
void sub_23df50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23df50ULL || rel >= 0x23e020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023e020 size=48 callers=0 calls=0
*/
void sub_23e020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23e020ULL || rel >= 0x23e050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023e050 size=16 callers=0 calls=0
*/
void sub_23e050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23e050ULL || rel >= 0x23e060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023e060 size=48 callers=0 calls=0
*/
void sub_23e060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23e060ULL || rel >= 0x23e090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023e090 size=16 callers=0 calls=0
*/
void sub_23e090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23e090ULL || rel >= 0x23e0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023e0a0 size=384 callers=0 calls=0
*/
void sub_23e0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23e0a0ULL || rel >= 0x23e220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023e220 size=1120 callers=0 calls=0
*/
void sub_23e220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23e220ULL || rel >= 0x23e680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023e680 size=672 callers=0 calls=0
*/
void sub_23e680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23e680ULL || rel >= 0x23e920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023e920 size=1088 callers=0 calls=0
*/
void sub_23e920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23e920ULL || rel >= 0x23ed60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023ed60 size=80 callers=0 calls=0
*/
void sub_23ed60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23ed60ULL || rel >= 0x23edb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023edb0 size=112 callers=0 calls=0
*/
void sub_23edb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23edb0ULL || rel >= 0x23ee20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023ee20 size=16 callers=0 calls=0
*/
void sub_23ee20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23ee20ULL || rel >= 0x23ee30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023ee30 size=48 callers=0 calls=0
*/
void sub_23ee30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23ee30ULL || rel >= 0x23ee60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023ee60 size=224 callers=0 calls=0
*/
void sub_23ee60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23ee60ULL || rel >= 0x23ef40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

