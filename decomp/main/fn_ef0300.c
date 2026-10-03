/* main functions 00ef0300..00f08230 (118 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00ef0300 size=128 callers=3 calls=1
   calls: sub_e7eb10
*/
void sub_ef0300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef0300ULL || rel >= 0xef0380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef0380 size=128 callers=2 calls=1
   calls: sub_e7eb10
*/
void sub_ef0380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef0380ULL || rel >= 0xef0400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef0400 size=48 callers=1 calls=0
*/
void sub_ef0400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef0400ULL || rel >= 0xef0430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef0430 size=64 callers=1 calls=0
*/
void sub_ef0430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef0430ULL || rel >= 0xef0470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef0470 size=64 callers=1 calls=0
*/
void sub_ef0470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef0470ULL || rel >= 0xef04b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef04b0 size=32 callers=1 calls=0
*/
void sub_ef04b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef04b0ULL || rel >= 0xef04d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef04d0 size=112 callers=28 calls=0
*/
void sub_ef04d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef04d0ULL || rel >= 0xef0540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef0540 size=144 callers=1 calls=1
   calls: sub_ef05d0
*/
void sub_ef0540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef0540ULL || rel >= 0xef05d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef05d0 size=464 callers=2 calls=3
   calls: sub_c38350, sub_e9d130, sub_e9db40
*/
void sub_ef05d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef05d0ULL || rel >= 0xef07a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef07a0 size=16 callers=0 calls=0
*/
void sub_ef07a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef07a0ULL || rel >= 0xef07b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef07b0 size=16 callers=0 calls=0
*/
void sub_ef07b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef07b0ULL || rel >= 0xef07c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef07c0 size=16 callers=0 calls=0
*/
void sub_ef07c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef07c0ULL || rel >= 0xef07d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef07d0 size=272 callers=0 calls=2
   calls: sub_ef08e0, sub_ef1540
*/
void sub_ef07d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef07d0ULL || rel >= 0xef08e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef08e0 size=272 callers=1 calls=3
   calls: sub_672c10, sub_c386f0, sub_ef0d90
*/
void sub_ef08e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef08e0ULL || rel >= 0xef09f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef09f0 size=96 callers=0 calls=0
*/
void sub_ef09f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef09f0ULL || rel >= 0xef0a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef0a50 size=96 callers=0 calls=0
*/
void sub_ef0a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef0a50ULL || rel >= 0xef0ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef0ab0 size=16 callers=0 calls=0
*/
void sub_ef0ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef0ab0ULL || rel >= 0xef0ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef0ac0 size=96 callers=0 calls=0
*/
void sub_ef0ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef0ac0ULL || rel >= 0xef0b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef0b20 size=96 callers=0 calls=0
*/
void sub_ef0b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef0b20ULL || rel >= 0xef0b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef0b80 size=16 callers=0 calls=0
*/
void sub_ef0b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef0b80ULL || rel >= 0xef0b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef0b90 size=16 callers=0 calls=0
*/
void sub_ef0b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef0b90ULL || rel >= 0xef0ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef0ba0 size=96 callers=0 calls=0
*/
void sub_ef0ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef0ba0ULL || rel >= 0xef0c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef0c00 size=96 callers=0 calls=0
*/
void sub_ef0c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef0c00ULL || rel >= 0xef0c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef0c60 size=304 callers=0 calls=0
*/
void sub_ef0c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef0c60ULL || rel >= 0xef0d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef0d90 size=240 callers=1 calls=2
   calls: sub_e7b660, sub_ef0e80
*/
void sub_ef0d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef0d90ULL || rel >= 0xef0e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef0e80 size=224 callers=1 calls=3
   calls: sub_7c2da0, sub_e7b5e0, sub_ef0f60
*/
void sub_ef0e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef0e80ULL || rel >= 0xef0f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef0f60 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_ef0f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef0f60ULL || rel >= 0xef1050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef1050 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_ef1050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef1050ULL || rel >= 0xef10d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef10d0 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_ef10d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef10d0ULL || rel >= 0xef1240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef1240 size=96 callers=0 calls=1
   calls: sub_ef1460
*/
void sub_ef1240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef1240ULL || rel >= 0xef12a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef12a0 size=16 callers=0 calls=0
*/
void sub_ef12a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef12a0ULL || rel >= 0xef12b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef12b0 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_ef12b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef12b0ULL || rel >= 0xef1350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef1350 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_ef1350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef1350ULL || rel >= 0xef1410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef1410 size=16 callers=0 calls=0
*/
void sub_ef1410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef1410ULL || rel >= 0xef1420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef1420 size=16 callers=0 calls=0
*/
void sub_ef1420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef1420ULL || rel >= 0xef1430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef1430 size=16 callers=0 calls=0
*/
void sub_ef1430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef1430ULL || rel >= 0xef1440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef1440 size=32 callers=0 calls=0
*/
void sub_ef1440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef1440ULL || rel >= 0xef1460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef1460 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_ef1460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef1460ULL || rel >= 0xef1540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef1540 size=240 callers=1 calls=1
   calls: sub_c39c40
*/
void sub_ef1540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef1540ULL || rel >= 0xef1630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef1630 size=1024 callers=0 calls=15
   calls: sub_13575e0, sub_78f150, sub_78f240, sub_794e80, sub_79ab20, sub_79b250, sub_c338a0, sub_c33950, sub_e7c0f0, sub_e7e890, sub_ea3d10, sub_ee49b0
   ... +3 more
   ref: CommonOptionBar
   ref: HairsalonTopView
   ref: SystemMessageView
   ref: common/hairsalon.dat
   ref: common/dressup_item_name.dat
*/
void SystemMessageView_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef1630ULL || rel >= 0xef1a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef1a30 size=400 callers=1 calls=3
   calls: sub_e7c160, sub_ef2580, sub_ef2c60
*/
void sub_ef1a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef1a30ULL || rel >= 0xef1bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef1bc0 size=384 callers=1 calls=3
   calls: sub_136b780, sub_b72950, sub_ef2c60
*/
void sub_ef1bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef1bc0ULL || rel >= 0xef1d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef1d40 size=208 callers=0 calls=2
   calls: sub_c33590, sub_ef2c60
*/
void sub_ef1d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef1d40ULL || rel >= 0xef1e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef1e10 size=208 callers=0 calls=3
   calls: sub_c33590, sub_ef2c60, sub_ef3510
*/
void sub_ef1e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef1e10ULL || rel >= 0xef1ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef1ee0 size=512 callers=0 calls=4
   calls: sub_e7c160, sub_ef3150, sub_ef3290, sub_ef33d0
*/
void sub_ef1ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef1ee0ULL || rel >= 0xef20e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef20e0 size=160 callers=0 calls=2
   calls: sub_13575e0, sub_ea3d10
*/
void sub_ef20e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef20e0ULL || rel >= 0xef2180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef2180 size=416 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_ef2180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef2180ULL || rel >= 0xef2320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef2320 size=16 callers=0 calls=0
*/
void sub_ef2320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef2320ULL || rel >= 0xef2330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef2330 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_ef2330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef2330ULL || rel >= 0xef23e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef23e0 size=16 callers=0 calls=0
*/
void sub_ef23e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef23e0ULL || rel >= 0xef23f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef23f0 size=16 callers=0 calls=0
*/
void sub_ef23f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef23f0ULL || rel >= 0xef2400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef2400 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_ef2400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef2400ULL || rel >= 0xef24b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef24b0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_ef24b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef24b0ULL || rel >= 0xef2560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef2560 size=16 callers=0 calls=0
*/
void sub_ef2560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef2560ULL || rel >= 0xef2570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef2570 size=16 callers=0 calls=0
*/
void sub_ef2570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef2570ULL || rel >= 0xef2580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef2580 size=256 callers=1 calls=3
   calls: sub_e7c210, sub_ef2680, sub_ef2990
*/
void sub_ef2580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef2580ULL || rel >= 0xef2680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef2680 size=464 callers=1 calls=1
   calls: sub_65d700
*/
void sub_ef2680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef2680ULL || rel >= 0xef2850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef2850 size=192 callers=0 calls=1
   calls: sub_ef2b10
*/
void sub_ef2850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef2850ULL || rel >= 0xef2910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef2910 size=16 callers=0 calls=0
*/
void sub_ef2910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef2910ULL || rel >= 0xef2920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef2920 size=16 callers=0 calls=0
*/
void sub_ef2920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef2920ULL || rel >= 0xef2930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef2930 size=16 callers=0 calls=0
*/
void sub_ef2930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef2930ULL || rel >= 0xef2940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef2940 size=16 callers=0 calls=0
*/
void sub_ef2940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef2940ULL || rel >= 0xef2950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef2950 size=16 callers=0 calls=0
*/
void sub_ef2950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef2950ULL || rel >= 0xef2960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef2960 size=16 callers=0 calls=0
*/
void sub_ef2960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef2960ULL || rel >= 0xef2970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef2970 size=16 callers=0 calls=0
*/
void sub_ef2970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef2970ULL || rel >= 0xef2980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef2980 size=16 callers=0 calls=0
*/
void sub_ef2980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef2980ULL || rel >= 0xef2990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef2990 size=384 callers=1 calls=2
   calls: sub_b4a710, sub_b6f8c0
*/
void sub_ef2990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef2990ULL || rel >= 0xef2b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef2b10 size=336 callers=1 calls=0
*/
void sub_ef2b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef2b10ULL || rel >= 0xef2c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef2c60 size=304 callers=9 calls=0
*/
void sub_ef2c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef2c60ULL || rel >= 0xef2d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef2d90 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_ef2eb0
*/
void sub_ef2d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef2d90ULL || rel >= 0xef2eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef2eb0 size=672 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_ef2eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef2eb0ULL || rel >= 0xef3150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef3150 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_ef3150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef3150ULL || rel >= 0xef3290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef3290 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_ef3290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef3290ULL || rel >= 0xef33d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef33d0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_ef33d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef33d0ULL || rel >= 0xef3510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef3510 size=304 callers=1 calls=6
   calls: sub_14ab2b0, sub_14e1a30, sub_1500c40, sub_e843d0, sub_ef0170, sub_ef3640
*/
void sub_ef3510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef3510ULL || rel >= 0xef3640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef3640 size=608 callers=2 calls=12
   calls: sub_14aad40, sub_14e1a30, sub_14edac0, sub_14f1840, sub_14f1850, sub_eef950, sub_eefa60, sub_ef39c0, sub_ef3c90, sub_ef6b30, sub_ef8700, sub_ef8720
*/
void sub_ef3640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef3640ULL || rel >= 0xef38a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef38a0 size=144 callers=3 calls=2
   calls: sub_14e1a30, sub_e843d0
*/
void sub_ef38a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef38a0ULL || rel >= 0xef3930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef3930 size=144 callers=1 calls=2
   calls: sub_ef8700, sub_ef8720
*/
void sub_ef3930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef3930ULL || rel >= 0xef39c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef39c0 size=720 callers=1 calls=3
   calls: sub_14e1a00, sub_e83f20, sub_ef0150
*/
void sub_ef39c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef39c0ULL || rel >= 0xef3c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef3c90 size=320 callers=5 calls=3
   calls: sub_14eebd0, sub_14eebe0, sub_eefa60
*/
void sub_ef3c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef3c90ULL || rel >= 0xef3dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef3dd0 size=32 callers=2 calls=0
*/
void sub_ef3dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef3dd0ULL || rel >= 0xef3df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef3df0 size=32 callers=1 calls=0
*/
void sub_ef3df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef3df0ULL || rel >= 0xef3e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef3e10 size=272 callers=6 calls=4
   calls: sub_14aad40, sub_e833a0, sub_e83870, sub_eef9d0
   ref: anime_win_in
   ref: anime_in
   ref: anime_win_out
   ref: anime_f_out
   ref: anime_out
   ref: anime_keep
   ref: anime_ptn_win
   ref: anime_f_in
*/
void anime_win_out(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef3e10ULL || rel >= 0xef3f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef3f20 size=416 callers=6 calls=1
   calls: sub_14ab2b0
*/
void sub_ef3f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef3f20ULL || rel >= 0xef40c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef40c0 size=112 callers=3 calls=2
   calls: sub_14e1a00, sub_eef9d0
*/
void sub_ef40c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef40c0ULL || rel >= 0xef4130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef4130 size=16 callers=0 calls=0
*/
void sub_ef4130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef4130ULL || rel >= 0xef4140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef4140 size=384 callers=1 calls=6
   calls: sub_e83430, sub_e83930, sub_e83a20, sub_eefa10, sub_eefba0, sub_ef0170
*/
void sub_ef4140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef4140ULL || rel >= 0xef42c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef42c0 size=64 callers=2 calls=1
   calls: sub_eefa60
*/
void sub_ef42c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef42c0ULL || rel >= 0xef4300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef4300 size=64 callers=2 calls=1
   calls: sub_eefa60
*/
void sub_ef4300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef4300ULL || rel >= 0xef4340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef4340 size=576 callers=0 calls=4
   calls: sub_67d450, sub_e7eb10, sub_eb7570, sub_eb75e0
*/
void sub_ef4340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef4340ULL || rel >= 0xef4580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef4580 size=16 callers=1 calls=0
*/
void sub_ef4580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef4580ULL || rel >= 0xef4590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef4590 size=416 callers=1 calls=11
   calls: sub_eef950, sub_eef9d0, sub_eefa10, sub_eefa60, sub_eefba0, sub_ef02e0, sub_ef0300, sub_ef0380, sub_ef0400, sub_ef4730, sub_ef4850
*/
void sub_ef4590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef4590ULL || rel >= 0xef4730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef4730 size=288 callers=3 calls=2
   calls: sub_14ac370, sub_67d450
*/
void sub_ef4730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef4730ULL || rel >= 0xef4850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef4850 size=448 callers=2 calls=3
   calls: sub_13133a0, sub_67d450, sub_ef4730
*/
void sub_ef4850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef4850ULL || rel >= 0xef4a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef4a10 size=336 callers=0 calls=11
   calls: sub_14aad40, sub_e806b0, sub_e84250, sub_eefa10, sub_ef0300, sub_ef4730, sub_ef4b60, sub_ef4ca0, sub_ef5090, sub_ef5160, sub_ef5790
*/
void sub_ef4a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef4a10ULL || rel >= 0xef4b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef4b60 size=320 callers=1 calls=9
   calls: sub_14aad40, sub_e83430, sub_e83930, sub_eef950, sub_eefa10, sub_eefba0, sub_ef0170, sub_ef02a0, sub_ef02c0
*/
void sub_ef4b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef4b60ULL || rel >= 0xef4ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef4ca0 size=1008 callers=1 calls=4
   calls: sub_14f1870, sub_14f1ef0, sub_ef6d00, sub_ef8720
*/
void sub_ef4ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef4ca0ULL || rel >= 0xef5090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef5090 size=208 callers=1 calls=4
   calls: sub_1500ea0, sub_5cfad0, sub_795bc0, sub_eb76b0
*/
void sub_ef5090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef5090ULL || rel >= 0xef5160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef5160 size=1584 callers=1 calls=2
   calls: sub_5cfad0, sub_7a3c20
*/
void sub_ef5160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef5160ULL || rel >= 0xef5790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef5790 size=1264 callers=1 calls=8
   calls: sub_136b780, sub_b4c070, sub_b6fbf0, sub_b751c0, sub_eef950, sub_eefa10, sub_eefa60, sub_ef04d0
*/
void sub_ef5790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef5790ULL || rel >= 0xef5c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef5c80 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/hairsalon/bin/uikit_hairsalon_top_00_lyt.bin
   ref: bin/appli/hairsalon/bin/hairsalon_top_00_lyt.bin
*/
void uikit_hairsalon_top_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef5c80ULL || rel >= 0xef5e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef5e60 size=208 callers=0 calls=4
   calls: sub_eefa60, sub_ef3c90, sub_ef60c0, sub_ef61c0
*/
void sub_ef5e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef5e60ULL || rel >= 0xef5f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef5f30 size=304 callers=0 calls=6
   calls: sub_14aad40, sub_eefa60, sub_ef0150, sub_ef0300, sub_ef0380, sub_ef4850
*/
void sub_ef5f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef5f30ULL || rel >= 0xef6060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef6060 size=96 callers=0 calls=4
   calls: sub_14eebd0, sub_14eebe0, sub_eefa60, sub_ef3c90
*/
void sub_ef6060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef6060ULL || rel >= 0xef60c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef60c0 size=256 callers=2 calls=5
   calls: sub_14aad40, sub_14eebe0, sub_14f1f00, sub_eefa60, sub_ef0150
*/
void sub_ef60c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef60c0ULL || rel >= 0xef61c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef61c0 size=944 callers=2 calls=8
   calls: sub_b4c070, sub_b75330, sub_c338b0, sub_c33910, sub_eef950, sub_eefa60, sub_ef04b0, sub_ef04d0
*/
void sub_ef61c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef61c0ULL || rel >= 0xef6570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef6570 size=336 callers=0 calls=10
   calls: sub_14e1a30, sub_1502120, sub_5cfad0, sub_e833a0, sub_e83430, sub_e83850, sub_e843d0, sub_eefc00, sub_eefee0, sub_ef0170
   ref: anime_L_tab_left_00_key_select
   ref: anime_L_tab_right_00_key_select
*/
void anime_L_tab_right_00_key_select_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef6570ULL || rel >= 0xef66c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef66c0 size=224 callers=0 calls=4
   calls: sub_eefa60, sub_ef3c90, sub_ef60c0, sub_ef61c0
*/
void sub_ef66c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef66c0ULL || rel >= 0xef67a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef67a0 size=96 callers=0 calls=0
*/
void sub_ef67a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef67a0ULL || rel >= 0xef6800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef6800 size=96 callers=0 calls=0
*/
void sub_ef6800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef6800ULL || rel >= 0xef6860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef6860 size=112 callers=0 calls=1
   calls: sub_e7f6c0
*/
void sub_ef6860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef6860ULL || rel >= 0xef68d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef68d0 size=96 callers=0 calls=0
*/
void sub_ef68d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef68d0ULL || rel >= 0xef6930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef6930 size=96 callers=0 calls=0
*/
void sub_ef6930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef6930ULL || rel >= 0xef6990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef6990 size=112 callers=0 calls=1
   calls: sub_e7f6c0
*/
void sub_ef6990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef6990ULL || rel >= 0xef6a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef6a00 size=112 callers=0 calls=1
   calls: sub_e7f6c0
*/
void sub_ef6a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef6a00ULL || rel >= 0xef6a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef6a70 size=96 callers=0 calls=0
*/
void sub_ef6a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef6a70ULL || rel >= 0xef6ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef6ad0 size=96 callers=0 calls=0
*/
void sub_ef6ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef6ad0ULL || rel >= 0xef6b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef6b30 size=464 callers=1 calls=0
*/
void sub_ef6b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef6b30ULL || rel >= 0xef6d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef6d00 size=464 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_ef6d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef6d00ULL || rel >= 0xef6ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef6ed0 size=240 callers=0 calls=0
*/
void sub_ef6ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef6ed0ULL || rel >= 0xef6fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef6fc0 size=240 callers=0 calls=0
*/
void sub_ef6fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef6fc0ULL || rel >= 0xef70b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef70b0 size=112 callers=0 calls=1
   calls: sub_7a4ab0
*/
void sub_ef70b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef70b0ULL || rel >= 0xef7120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7120 size=16 callers=0 calls=0
*/
void sub_ef7120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7120ULL || rel >= 0xef7130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7130 size=64 callers=0 calls=0
*/
void sub_ef7130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7130ULL || rel >= 0xef7170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7170 size=352 callers=0 calls=0
*/
void sub_ef7170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7170ULL || rel >= 0xef72d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef72d0 size=240 callers=0 calls=0
*/
void sub_ef72d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef72d0ULL || rel >= 0xef73c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef73c0 size=240 callers=0 calls=0
*/
void sub_ef73c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef73c0ULL || rel >= 0xef74b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef74b0 size=112 callers=0 calls=1
   calls: sub_7a4ab0
*/
void sub_ef74b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef74b0ULL || rel >= 0xef7520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7520 size=112 callers=0 calls=1
   calls: sub_7a4ab0
*/
void sub_ef7520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7520ULL || rel >= 0xef7590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7590 size=240 callers=0 calls=0
*/
void sub_ef7590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7590ULL || rel >= 0xef7680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7680 size=240 callers=0 calls=0
*/
void sub_ef7680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7680ULL || rel >= 0xef7770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7770 size=48 callers=0 calls=0
*/
void sub_ef7770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7770ULL || rel >= 0xef77a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef77a0 size=16 callers=0 calls=0
*/
void sub_ef77a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef77a0ULL || rel >= 0xef77b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef77b0 size=32 callers=0 calls=0
*/
void sub_ef77b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef77b0ULL || rel >= 0xef77d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef77d0 size=32 callers=0 calls=0
*/
void sub_ef77d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef77d0ULL || rel >= 0xef77f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef77f0 size=96 callers=0 calls=1
   calls: sub_eefa60
*/
void sub_ef77f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef77f0ULL || rel >= 0xef7850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7850 size=16 callers=0 calls=0
*/
void sub_ef7850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7850ULL || rel >= 0xef7860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7860 size=16 callers=0 calls=0
*/
void sub_ef7860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7860ULL || rel >= 0xef7870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7870 size=16 callers=0 calls=0
*/
void sub_ef7870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7870ULL || rel >= 0xef7880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7880 size=96 callers=0 calls=1
   calls: sub_eefa60
*/
void sub_ef7880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7880ULL || rel >= 0xef78e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef78e0 size=16 callers=0 calls=0
*/
void sub_ef78e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef78e0ULL || rel >= 0xef78f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef78f0 size=16 callers=0 calls=0
*/
void sub_ef78f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef78f0ULL || rel >= 0xef7900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7900 size=16 callers=0 calls=0
*/
void sub_ef7900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7900ULL || rel >= 0xef7910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7910 size=144 callers=0 calls=2
   calls: sub_eefa10, sub_eefa60
*/
void sub_ef7910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7910ULL || rel >= 0xef79a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef79a0 size=16 callers=0 calls=0
*/
void sub_ef79a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef79a0ULL || rel >= 0xef79b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef79b0 size=16 callers=0 calls=0
*/
void sub_ef79b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef79b0ULL || rel >= 0xef79c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef79c0 size=16 callers=0 calls=0
*/
void sub_ef79c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef79c0ULL || rel >= 0xef79d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef79d0 size=144 callers=0 calls=2
   calls: sub_eefa10, sub_eefa60
*/
void sub_ef79d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef79d0ULL || rel >= 0xef7a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7a60 size=16 callers=0 calls=0
*/
void sub_ef7a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7a60ULL || rel >= 0xef7a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7a70 size=16 callers=0 calls=0
*/
void sub_ef7a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7a70ULL || rel >= 0xef7a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7a80 size=16 callers=0 calls=0
*/
void sub_ef7a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7a80ULL || rel >= 0xef7a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7a90 size=16 callers=0 calls=0
*/
void sub_ef7a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7a90ULL || rel >= 0xef7aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7aa0 size=16 callers=0 calls=0
*/
void sub_ef7aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7aa0ULL || rel >= 0xef7ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7ab0 size=16 callers=0 calls=0
*/
void sub_ef7ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7ab0ULL || rel >= 0xef7ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7ac0 size=16 callers=0 calls=0
*/
void sub_ef7ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7ac0ULL || rel >= 0xef7ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7ad0 size=192 callers=0 calls=5
   calls: sub_14eebd0, sub_14eebe0, sub_14f1f00, sub_e83f20, sub_ef0150
*/
void sub_ef7ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7ad0ULL || rel >= 0xef7b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7b90 size=16 callers=0 calls=0
*/
void sub_ef7b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7b90ULL || rel >= 0xef7ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7ba0 size=16 callers=0 calls=0
*/
void sub_ef7ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7ba0ULL || rel >= 0xef7bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7bb0 size=16 callers=0 calls=0
*/
void sub_ef7bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7bb0ULL || rel >= 0xef7bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7bc0 size=320 callers=0 calls=2
   calls: sub_eefa60, sub_ef04d0
*/
void sub_ef7bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7bc0ULL || rel >= 0xef7d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7d00 size=16 callers=0 calls=0
*/
void sub_ef7d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7d00ULL || rel >= 0xef7d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7d10 size=16 callers=0 calls=0
*/
void sub_ef7d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7d10ULL || rel >= 0xef7d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7d20 size=16 callers=0 calls=0
*/
void sub_ef7d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7d20ULL || rel >= 0xef7d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7d30 size=208 callers=0 calls=2
   calls: sub_eefa60, sub_ef04d0
*/
void sub_ef7d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7d30ULL || rel >= 0xef7e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7e00 size=16 callers=0 calls=0
*/
void sub_ef7e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7e00ULL || rel >= 0xef7e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7e10 size=16 callers=0 calls=0
*/
void sub_ef7e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7e10ULL || rel >= 0xef7e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7e20 size=16 callers=0 calls=0
*/
void sub_ef7e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7e20ULL || rel >= 0xef7e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7e30 size=144 callers=0 calls=2
   calls: sub_eefa60, sub_ef04d0
*/
void sub_ef7e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7e30ULL || rel >= 0xef7ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7ec0 size=16 callers=0 calls=0
*/
void sub_ef7ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7ec0ULL || rel >= 0xef7ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7ed0 size=32 callers=0 calls=0
*/
void sub_ef7ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7ed0ULL || rel >= 0xef7ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7ef0 size=32 callers=0 calls=0
*/
void sub_ef7ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7ef0ULL || rel >= 0xef7f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef7f10 size=1024 callers=1 calls=6
   calls: sub_b4c070, sub_b75230, sub_eefa10, sub_eefa60, sub_ef8310, sub_ef8740
*/
void sub_ef7f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7f10ULL || rel >= 0xef8310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef8310 size=1008 callers=4 calls=3
   calls: sub_13facc0, sub_eef950, sub_ef8d90
*/
void sub_ef8310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef8310ULL || rel >= 0xef8700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef8700 size=32 callers=2 calls=0
*/
void sub_ef8700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef8700ULL || rel >= 0xef8720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef8720 size=32 callers=12 calls=0
*/
void sub_ef8720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef8720ULL || rel >= 0xef8740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef8740 size=608 callers=1 calls=2
   calls: sub_ef89a0, sub_ef8aa0
*/
void sub_ef8740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef8740ULL || rel >= 0xef89a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef89a0 size=256 callers=1 calls=0
*/
void sub_ef89a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef89a0ULL || rel >= 0xef8aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef8aa0 size=752 callers=1 calls=1
   calls: sub_ef8d90
*/
void sub_ef8aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef8aa0ULL || rel >= 0xef8d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef8d90 size=272 callers=3 calls=0
*/
void sub_ef8d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef8d90ULL || rel >= 0xef8ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef8ea0 size=704 callers=0 calls=0
*/
void sub_ef8ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef8ea0ULL || rel >= 0xef9160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef9160 size=960 callers=0 calls=3
   calls: sub_eefa60, sub_ef04d0, sub_ef8310
*/
void sub_ef9160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef9160ULL || rel >= 0xef9520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef9520 size=16 callers=0 calls=0
*/
void sub_ef9520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef9520ULL || rel >= 0xef9530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef9530 size=32 callers=0 calls=0
*/
void sub_ef9530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef9530ULL || rel >= 0xef9550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef9550 size=32 callers=0 calls=0
*/
void sub_ef9550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef9550ULL || rel >= 0xef9570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef9570 size=976 callers=0 calls=14
   calls: anime_win_out, sub_136b780, sub_1502120, sub_5cfad0, sub_795bc0, sub_b6fb70, sub_b6ff20, sub_c219c0, sub_c33940, sub_c39c40, sub_d0c0, sub_eb77f0
   ... +2 more
   ref: HairsalonTopView
   ref: HairsalonEndState
*/
void HairsalonEndState(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef9570ULL || rel >= 0xef9940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef9940 size=208 callers=0 calls=2
   calls: sub_ef2c60, sub_ef3f20
*/
void sub_ef9940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef9940ULL || rel >= 0xef9a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef9a10 size=16 callers=0 calls=0
*/
void sub_ef9a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef9a10ULL || rel >= 0xef9a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef9a20 size=16 callers=0 calls=0
*/
void sub_ef9a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef9a20ULL || rel >= 0xef9a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef9a30 size=16 callers=0 calls=0
*/
void sub_ef9a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef9a30ULL || rel >= 0xef9a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef9a40 size=16 callers=0 calls=0
*/
void sub_ef9a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef9a40ULL || rel >= 0xef9a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef9a50 size=16 callers=0 calls=0
*/
void sub_ef9a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef9a50ULL || rel >= 0xef9a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef9a60 size=16 callers=0 calls=0
*/
void sub_ef9a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef9a60ULL || rel >= 0xef9a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef9a70 size=16 callers=0 calls=0
*/
void sub_ef9a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef9a70ULL || rel >= 0xef9a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef9a80 size=16 callers=0 calls=0
*/
void sub_ef9a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef9a80ULL || rel >= 0xef9a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef9a90 size=304 callers=0 calls=0
*/
void sub_ef9a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef9a90ULL || rel >= 0xef9bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef9bc0 size=336 callers=3 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_ef9bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef9bc0ULL || rel >= 0xef9d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef9d10 size=2016 callers=0 calls=25
   calls: anime_win_out, sub_13575e0, sub_1502120, sub_5cfad0, sub_5cfaf0, sub_67b990, sub_67d450, sub_795bc0, sub_79b990, sub_c33950, sub_c39c40, sub_d0c0
   ... +13 more
   ref: HairsalonTopView
   ref: HairsalonStartState
*/
void HairsalonStartState(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef9d10ULL || rel >= 0xefa4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efa4f0 size=128 callers=0 calls=3
   calls: sub_eb7790, sub_ef38a0, sub_ef3f20
*/
void sub_efa4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefa4f0ULL || rel >= 0xefa570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efa570 size=16 callers=0 calls=0
*/
void sub_efa570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefa570ULL || rel >= 0xefa580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efa580 size=16 callers=0 calls=0
*/
void sub_efa580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefa580ULL || rel >= 0xefa590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efa590 size=16 callers=0 calls=0
*/
void sub_efa590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefa590ULL || rel >= 0xefa5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efa5a0 size=16 callers=0 calls=0
*/
void sub_efa5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefa5a0ULL || rel >= 0xefa5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efa5b0 size=16 callers=0 calls=0
*/
void sub_efa5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefa5b0ULL || rel >= 0xefa5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efa5c0 size=16 callers=0 calls=0
*/
void sub_efa5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefa5c0ULL || rel >= 0xefa5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efa5d0 size=16 callers=0 calls=0
*/
void sub_efa5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefa5d0ULL || rel >= 0xefa5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efa5e0 size=16 callers=0 calls=0
*/
void sub_efa5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefa5e0ULL || rel >= 0xefa5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efa5f0 size=304 callers=0 calls=0
*/
void sub_efa5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefa5f0ULL || rel >= 0xefa720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efa720 size=640 callers=0 calls=8
   calls: sub_5cfaf0, sub_79b990, sub_c39c40, sub_d0c0, sub_e807f0, sub_ef3dd0, sub_ef40c0, sub_ef9bc0
   ref: HairsalonTopView
   ref: HairsalonSelectState
*/
void HairsalonSelectState(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefa720ULL || rel >= 0xefa9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efa9a0 size=1216 callers=0 calls=18
   calls: anime_win_out, sub_67d450, sub_c39c40, sub_e7eb10, sub_e807f0, sub_eb8930, sub_eb8e80, sub_eb8ea0, sub_ef2c60, sub_ef38a0, sub_ef3c90, sub_ef3dd0
   ... +6 more
*/
void sub_efa9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefa9a0ULL || rel >= 0xefae60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efae60 size=416 callers=1 calls=6
   calls: sub_eef950, sub_eefa10, sub_eefba0, sub_ef2c60, sub_ef42c0, sub_ef4300
*/
void sub_efae60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefae60ULL || rel >= 0xefb000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efb000 size=16 callers=0 calls=0
*/
void sub_efb000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefb000ULL || rel >= 0xefb010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efb010 size=16 callers=0 calls=0
*/
void sub_efb010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefb010ULL || rel >= 0xefb020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efb020 size=16 callers=0 calls=0
*/
void sub_efb020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefb020ULL || rel >= 0xefb030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efb030 size=16 callers=0 calls=0
*/
void sub_efb030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefb030ULL || rel >= 0xefb040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efb040 size=16 callers=0 calls=0
*/
void sub_efb040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefb040ULL || rel >= 0xefb050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efb050 size=16 callers=0 calls=0
*/
void sub_efb050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefb050ULL || rel >= 0xefb060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efb060 size=16 callers=0 calls=0
*/
void sub_efb060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefb060ULL || rel >= 0xefb070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efb070 size=16 callers=0 calls=0
*/
void sub_efb070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefb070ULL || rel >= 0xefb080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efb080 size=304 callers=0 calls=0
*/
void sub_efb080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefb080ULL || rel >= 0xefb1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efb1b0 size=32 callers=0 calls=0
*/
void sub_efb1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefb1b0ULL || rel >= 0xefb1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efb1d0 size=112 callers=0 calls=2
   calls: sub_ea3d10, sub_ea47f0
*/
void sub_efb1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefb1d0ULL || rel >= 0xefb240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efb240 size=672 callers=0 calls=4
   calls: sub_972c70, sub_c34680, sub_ef0430, sub_ef0470
*/
void sub_efb240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefb240ULL || rel >= 0xefb4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efb4e0 size=16 callers=0 calls=0
*/
void sub_efb4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefb4e0ULL || rel >= 0xefb4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efb4f0 size=16 callers=0 calls=0
*/
void sub_efb4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefb4f0ULL || rel >= 0xefb500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efb500 size=16 callers=0 calls=0
*/
void sub_efb500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefb500ULL || rel >= 0xefb510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efb510 size=224 callers=1 calls=2
   calls: sub_efb5f0, sub_efbfb0
*/
void sub_efb510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefb510ULL || rel >= 0xefb5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efb5f0 size=464 callers=1 calls=3
   calls: sub_c38350, sub_e9d130, sub_e9db40
*/
void sub_efb5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefb5f0ULL || rel >= 0xefb7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efb7c0 size=112 callers=0 calls=0
*/
void sub_efb7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefb7c0ULL || rel >= 0xefb830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efb830 size=112 callers=0 calls=0
*/
void sub_efb830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefb830ULL || rel >= 0xefb8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efb8a0 size=112 callers=0 calls=0
*/
void sub_efb8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefb8a0ULL || rel >= 0xefb910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efb910 size=112 callers=0 calls=0
*/
void sub_efb910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefb910ULL || rel >= 0xefb980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efb980 size=112 callers=0 calls=0
*/
void sub_efb980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefb980ULL || rel >= 0xefb9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efb9f0 size=112 callers=0 calls=0
*/
void sub_efb9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefb9f0ULL || rel >= 0xefba60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efba60 size=16 callers=0 calls=0
*/
void sub_efba60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefba60ULL || rel >= 0xefba70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efba70 size=16 callers=0 calls=0
*/
void sub_efba70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefba70ULL || rel >= 0xefba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efba80 size=16 callers=0 calls=0
*/
void sub_efba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefba80ULL || rel >= 0xefba90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efba90 size=992 callers=0 calls=7
   calls: sub_12fa690, sub_12fac60, sub_1539b10, sub_c39c40, sub_c43ed0, sub_efbe70, sub_efd570
   ref: MEET_BY_EGG
*/
void MEET_BY_EGG(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefba90ULL || rel >= 0xefbe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efbe70 size=272 callers=1 calls=3
   calls: sub_672c10, sub_c386f0, sub_efc0e0
*/
void sub_efbe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefbe70ULL || rel >= 0xefbf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efbf80 size=16 callers=0 calls=0
*/
void sub_efbf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefbf80ULL || rel >= 0xefbf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efbf90 size=16 callers=0 calls=0
*/
void sub_efbf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefbf90ULL || rel >= 0xefbfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efbfa0 size=16 callers=0 calls=0
*/
void sub_efbfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefbfa0ULL || rel >= 0xefbfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efbfb0 size=304 callers=1 calls=0
*/
void sub_efbfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefbfb0ULL || rel >= 0xefc0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efc0e0 size=240 callers=1 calls=2
   calls: sub_e7b660, sub_efc1d0
*/
void sub_efc0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefc0e0ULL || rel >= 0xefc1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efc1d0 size=224 callers=1 calls=3
   calls: sub_7c2da0, sub_e7b5e0, sub_efc2b0
*/
void sub_efc1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefc1d0ULL || rel >= 0xefc2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efc2b0 size=256 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_efc2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefc2b0ULL || rel >= 0xefc3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efc3b0 size=160 callers=0 calls=1
   calls: sub_3340
*/
void sub_efc3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefc3b0ULL || rel >= 0xefc450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efc450 size=400 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_efc450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefc450ULL || rel >= 0xefc5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efc5e0 size=96 callers=0 calls=1
   calls: sub_efc820
*/
void sub_efc5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefc5e0ULL || rel >= 0xefc640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efc640 size=16 callers=0 calls=0
*/
void sub_efc640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefc640ULL || rel >= 0xefc650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efc650 size=176 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_efc650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefc650ULL || rel >= 0xefc700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efc700 size=208 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_efc700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefc700ULL || rel >= 0xefc7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efc7d0 size=16 callers=0 calls=0
*/
void sub_efc7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefc7d0ULL || rel >= 0xefc7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efc7e0 size=16 callers=0 calls=0
*/
void sub_efc7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefc7e0ULL || rel >= 0xefc7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efc7f0 size=16 callers=0 calls=0
*/
void sub_efc7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefc7f0ULL || rel >= 0xefc800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efc800 size=32 callers=0 calls=0
*/
void sub_efc800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefc800ULL || rel >= 0xefc820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efc820 size=256 callers=2 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_efc820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefc820ULL || rel >= 0xefc920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efc920 size=224 callers=0 calls=2
   calls: sub_12faeb0, sub_762930
   ref: HATCH_OTHER_EGG
*/
void HATCH_OTHER_EGG(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefc920ULL || rel >= 0xefca00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efca00 size=16 callers=0 calls=0
*/
void sub_efca00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefca00ULL || rel >= 0xefca10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efca10 size=16 callers=0 calls=0
*/
void sub_efca10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefca10ULL || rel >= 0xefca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efca20 size=16 callers=0 calls=0
*/
void sub_efca20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefca20ULL || rel >= 0xefca30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efca30 size=256 callers=0 calls=0
*/
void sub_efca30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefca30ULL || rel >= 0xefcb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efcb30 size=16 callers=0 calls=0
*/
void sub_efcb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefcb30ULL || rel >= 0xefcb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efcb40 size=16 callers=0 calls=0
*/
void sub_efcb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefcb40ULL || rel >= 0xefcb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efcb50 size=16 callers=0 calls=0
*/
void sub_efcb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefcb50ULL || rel >= 0xefcb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efcb60 size=16 callers=0 calls=0
*/
void sub_efcb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefcb60ULL || rel >= 0xefcb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efcb70 size=16 callers=0 calls=0
*/
void sub_efcb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefcb70ULL || rel >= 0xefcb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efcb80 size=16 callers=1 calls=0
*/
void sub_efcb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefcb80ULL || rel >= 0xefcb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efcb90 size=960 callers=1 calls=2
   calls: sub_1310f00, sub_67b990
*/
void sub_efcb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefcb90ULL || rel >= 0xefcf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efcf50 size=32 callers=2 calls=0
*/
void sub_efcf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefcf50ULL || rel >= 0xefcf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efcf70 size=1536 callers=1 calls=10
   calls: sub_12f9ef0, sub_1311c60, sub_1313e50, sub_13a4f20, sub_5cfaf0, sub_67d450, sub_763000, sub_768e10, sub_c1b030, sub_d0c0
   ref: sd9120_egg
*/
void sd9120_egg(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefcf70ULL || rel >= 0xefd570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efd570 size=16 callers=3 calls=0
*/
void sub_efd570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefd570ULL || rel >= 0xefd580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efd580 size=816 callers=0 calls=14
   calls: sub_13000b0, sub_136e8b0, sub_767950, sub_767b90, sub_78f150, sub_78f240, sub_794e80, sub_79ab20, sub_e7c0f0, sub_e7e890, sub_efc820, sub_efcb90
   ... +2 more
   ref: common/tamago_demo.dat
   ref: SystemMessageView
*/
void SystemMessageView_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefd580ULL || rel >= 0xefd8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efd8b0 size=464 callers=1 calls=3
   calls: sub_e7c160, sub_e7c210, sub_efe300
*/
void sub_efd8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefd8b0ULL || rel >= 0xefda80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efda80 size=48 callers=0 calls=1
   calls: sub_e7ea20
*/
void sub_efda80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefda80ULL || rel >= 0xefdab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efdab0 size=320 callers=0 calls=2
   calls: sub_e7eb10, sub_efe300
*/
void sub_efdab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefdab0ULL || rel >= 0xefdbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efdbf0 size=16 callers=0 calls=0
*/
void sub_efdbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefdbf0ULL || rel >= 0xefdc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efdc00 size=384 callers=0 calls=3
   calls: sub_e7c160, sub_efe300, sub_efe430
*/
void sub_efdc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefdc00ULL || rel >= 0xefdd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efdd80 size=304 callers=0 calls=1
   calls: sub_efe300
*/
void sub_efdd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefdd80ULL || rel >= 0xefdeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efdeb0 size=16 callers=0 calls=0
*/
void sub_efdeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefdeb0ULL || rel >= 0xefdec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efdec0 size=16 callers=0 calls=0
*/
void sub_efdec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefdec0ULL || rel >= 0xefded0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efded0 size=16 callers=0 calls=0
*/
void sub_efded0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefded0ULL || rel >= 0xefdee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efdee0 size=448 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_efdee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefdee0ULL || rel >= 0xefe0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efe0a0 size=16 callers=0 calls=0
*/
void sub_efe0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefe0a0ULL || rel >= 0xefe0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efe0b0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_efe0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefe0b0ULL || rel >= 0xefe160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efe160 size=16 callers=0 calls=0
*/
void sub_efe160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefe160ULL || rel >= 0xefe170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efe170 size=16 callers=0 calls=0
*/
void sub_efe170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefe170ULL || rel >= 0xefe180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efe180 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_efe180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefe180ULL || rel >= 0xefe230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efe230 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_efe230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefe230ULL || rel >= 0xefe2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efe2e0 size=16 callers=0 calls=0
*/
void sub_efe2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefe2e0ULL || rel >= 0xefe2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efe2f0 size=16 callers=0 calls=0
*/
void sub_efe2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefe2f0ULL || rel >= 0xefe300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efe300 size=304 callers=8 calls=0
*/
void sub_efe300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefe300ULL || rel >= 0xefe430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efe430 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_efe430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefe430ULL || rel >= 0xefe570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efe570 size=368 callers=0 calls=4
   calls: sd9120_egg, sub_c39c40, sub_d0c0, sub_efe300
*/
void sub_efe570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefe570ULL || rel >= 0xefe6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efe6e0 size=400 callers=0 calls=7
   calls: demo_data, sub_c1bcb0, sub_c1bce0, sub_c1bd10, sub_efcb80, sub_efcf50, sub_efe300
*/
void sub_efe6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefe6e0ULL || rel >= 0xefe870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efe870 size=16 callers=0 calls=0
*/
void sub_efe870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefe870ULL || rel >= 0xefe880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efe880 size=16 callers=0 calls=0
*/
void sub_efe880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefe880ULL || rel >= 0xefe890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efe890 size=16 callers=0 calls=0
*/
void sub_efe890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefe890ULL || rel >= 0xefe8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efe8a0 size=16 callers=0 calls=0
*/
void sub_efe8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefe8a0ULL || rel >= 0xefe8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efe8b0 size=16 callers=0 calls=0
*/
void sub_efe8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefe8b0ULL || rel >= 0xefe8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efe8c0 size=16 callers=0 calls=0
*/
void sub_efe8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefe8c0ULL || rel >= 0xefe8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efe8d0 size=16 callers=0 calls=0
*/
void sub_efe8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefe8d0ULL || rel >= 0xefe8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efe8e0 size=16 callers=0 calls=0
*/
void sub_efe8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefe8e0ULL || rel >= 0xefe8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efe8f0 size=16 callers=0 calls=0
*/
void sub_efe8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefe8f0ULL || rel >= 0xefe900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efe900 size=304 callers=0 calls=0
*/
void sub_efe900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefe900ULL || rel >= 0xefea30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efea30 size=224 callers=1 calls=2
   calls: sub_efeb10, sub_eff3f0
*/
void sub_efea30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefea30ULL || rel >= 0xefeb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efeb10 size=288 callers=1 calls=3
   calls: sub_c38350, sub_e9db40, sub_eff520
*/
void sub_efeb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefeb10ULL || rel >= 0xefec30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efec30 size=160 callers=0 calls=0
*/
void sub_efec30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefec30ULL || rel >= 0xefecd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efecd0 size=160 callers=0 calls=0
*/
void sub_efecd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefecd0ULL || rel >= 0xefed70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efed70 size=160 callers=0 calls=0
*/
void sub_efed70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefed70ULL || rel >= 0xefee10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efee10 size=160 callers=0 calls=0
*/
void sub_efee10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefee10ULL || rel >= 0xefeeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efeeb0 size=160 callers=0 calls=0
*/
void sub_efeeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefeeb0ULL || rel >= 0xefef50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efef50 size=160 callers=0 calls=0
*/
void sub_efef50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefef50ULL || rel >= 0xefeff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efeff0 size=16 callers=0 calls=0
*/
void sub_efeff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefeff0ULL || rel >= 0xeff000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eff000 size=224 callers=0 calls=0
*/
void sub_eff000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeff000ULL || rel >= 0xeff0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eff0e0 size=16 callers=0 calls=0
*/
void sub_eff0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeff0e0ULL || rel >= 0xeff0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eff0f0 size=480 callers=0 calls=5
   calls: sub_14e0350, sub_14e0450, sub_a75e20, sub_eff2d0, sub_eff630
*/
void sub_eff0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeff0f0ULL || rel >= 0xeff2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eff2d0 size=240 callers=3 calls=1
   calls: sub_76f440
*/
void sub_eff2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeff2d0ULL || rel >= 0xeff3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eff3c0 size=16 callers=0 calls=0
*/
void sub_eff3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeff3c0ULL || rel >= 0xeff3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eff3d0 size=16 callers=0 calls=0
*/
void sub_eff3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeff3d0ULL || rel >= 0xeff3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eff3e0 size=16 callers=0 calls=0
*/
void sub_eff3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeff3e0ULL || rel >= 0xeff3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eff3f0 size=304 callers=1 calls=0
*/
void sub_eff3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeff3f0ULL || rel >= 0xeff520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eff520 size=272 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_eff520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeff520ULL || rel >= 0xeff630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eff630 size=240 callers=2 calls=1
   calls: sub_c39c40
*/
void sub_eff630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeff630ULL || rel >= 0xeff720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eff720 size=128 callers=0 calls=0
*/
void sub_eff720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeff720ULL || rel >= 0xeff7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eff7a0 size=496 callers=1 calls=6
   calls: KisekaeData, sub_1306f20, sub_5dd790, sub_5e26a0, sub_5e2930, sub_5e2bc0
*/
void sub_eff7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeff7a0ULL || rel >= 0xeff990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eff990 size=816 callers=1 calls=5
   calls: sub_1106220, sub_1106320, sub_11063e0, sub_11069b0, sub_1106f30
   ref: KisekaeData
*/
void KisekaeData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeff990ULL || rel >= 0xeffcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00effcc0 size=240 callers=1 calls=4
   calls: sub_136b560, sub_136b780, sub_b6fb60, sub_b70440
*/
void sub_effcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeffcc0ULL || rel >= 0xeffdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00effdb0 size=160 callers=1 calls=2
   calls: sub_136b780, sub_b6ff20
*/
void sub_effdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeffdb0ULL || rel >= 0xeffe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00effe50 size=48 callers=1 calls=0
*/
void sub_effe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeffe50ULL || rel >= 0xeffe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00effe80 size=160 callers=0 calls=0
*/
void sub_effe80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeffe80ULL || rel >= 0xefff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00efff20 size=1488 callers=0 calls=16
   calls: sub_5cfad0, sub_78f150, sub_78f240, sub_794e80, sub_e7c0f0, sub_e7e890, sub_eeb2b0, sub_eeb410, sub_eff7a0, sub_f004f0, sub_f019e0, sub_f01b10
   ... +4 more
   ref: PlayerSelect
   ref: LangSelect
   ref: BackGround
   ref: Confirm
*/
void PlayerSelect(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefff20ULL || rel >= 0xf004f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f004f0 size=272 callers=1 calls=3
   calls: sub_e7c160, sub_f018d0, sub_f019e0
*/
void sub_f004f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf004f0ULL || rel >= 0xf00600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f00600 size=16 callers=0 calls=0
*/
void sub_f00600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf00600ULL || rel >= 0xf00610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f00610 size=16 callers=0 calls=0
*/
void sub_f00610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf00610ULL || rel >= 0xf00620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f00620 size=16 callers=0 calls=0
*/
void sub_f00620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf00620ULL || rel >= 0xf00630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f00630 size=1840 callers=0 calls=12
   calls: sub_e7c160, sub_f02bd0, sub_f02d10, sub_f02e50, sub_f02f90, sub_f03350, sub_f03710, sub_f03ad0, sub_f03c10, sub_f03d50, sub_f03e90, sub_f03fd0
*/
void sub_f00630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf00630ULL || rel >= 0xf00d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f00d60 size=448 callers=0 calls=4
   calls: sub_79c240, sub_e7c160, sub_f030d0, sub_f03210
*/
void sub_f00d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf00d60ULL || rel >= 0xf00f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f00f20 size=448 callers=0 calls=4
   calls: sub_79c240, sub_e7c160, sub_f03490, sub_f035d0
*/
void sub_f00f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf00f20ULL || rel >= 0xf010e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f010e0 size=448 callers=0 calls=4
   calls: sub_79c240, sub_e7c160, sub_f03850, sub_f03990
*/
void sub_f010e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf010e0ULL || rel >= 0xf012a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f012a0 size=128 callers=0 calls=1
   calls: sub_eeb2b0
*/
void sub_f012a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf012a0ULL || rel >= 0xf01320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f01320 size=720 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_f01320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf01320ULL || rel >= 0xf015f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f015f0 size=16 callers=0 calls=0
*/
void sub_f015f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf015f0ULL || rel >= 0xf01600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f01600 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_f01600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf01600ULL || rel >= 0xf016b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f016b0 size=16 callers=0 calls=0
*/
void sub_f016b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf016b0ULL || rel >= 0xf016c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f016c0 size=16 callers=0 calls=0
*/
void sub_f016c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf016c0ULL || rel >= 0xf016d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f016d0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_f016d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf016d0ULL || rel >= 0xf01780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f01780 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_f01780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf01780ULL || rel >= 0xf01830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f01830 size=16 callers=0 calls=0
*/
void sub_f01830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf01830ULL || rel >= 0xf01840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f01840 size=16 callers=0 calls=0
*/
void sub_f01840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf01840ULL || rel >= 0xf01850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f01850 size=16 callers=0 calls=0
*/
void sub_f01850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf01850ULL || rel >= 0xf01860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f01860 size=16 callers=0 calls=0
*/
void sub_f01860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf01860ULL || rel >= 0xf01870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f01870 size=16 callers=0 calls=0
*/
void sub_f01870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf01870ULL || rel >= 0xf01880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f01880 size=16 callers=0 calls=0
*/
void sub_f01880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf01880ULL || rel >= 0xf01890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f01890 size=16 callers=0 calls=0
*/
void sub_f01890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf01890ULL || rel >= 0xf018a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f018a0 size=16 callers=0 calls=0
*/
void sub_f018a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf018a0ULL || rel >= 0xf018b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f018b0 size=16 callers=0 calls=0
*/
void sub_f018b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf018b0ULL || rel >= 0xf018c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f018c0 size=16 callers=0 calls=0
*/
void sub_f018c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf018c0ULL || rel >= 0xf018d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f018d0 size=272 callers=1 calls=1
   calls: sub_e7c210
*/
void sub_f018d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf018d0ULL || rel >= 0xf019e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f019e0 size=304 callers=10 calls=0
*/
void sub_f019e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf019e0ULL || rel >= 0xf01b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f01b10 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_f01c30
*/
void sub_f01b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf01b10ULL || rel >= 0xf01c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f01c30 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_f01c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf01c30ULL || rel >= 0xf01e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f01e60 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_f01f80
*/
void sub_f01e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf01e60ULL || rel >= 0xf01f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f01f80 size=592 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_f01f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf01f80ULL || rel >= 0xf021d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f021d0 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_f022f0
*/
void sub_f021d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf021d0ULL || rel >= 0xf022f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f022f0 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_f022f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf022f0ULL || rel >= 0xf02520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f02520 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_f02640
*/
void sub_f02520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf02520ULL || rel >= 0xf02640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f02640 size=576 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_f02640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf02640ULL || rel >= 0xf02880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f02880 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_f029a0
*/
void sub_f02880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf02880ULL || rel >= 0xf029a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f029a0 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_f029a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf029a0ULL || rel >= 0xf02bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f02bd0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_f02bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf02bd0ULL || rel >= 0xf02d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f02d10 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_f02d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf02d10ULL || rel >= 0xf02e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f02e50 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_f02e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf02e50ULL || rel >= 0xf02f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f02f90 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_f02f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf02f90ULL || rel >= 0xf030d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f030d0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_f030d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf030d0ULL || rel >= 0xf03210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f03210 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_f03210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf03210ULL || rel >= 0xf03350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f03350 size=320 callers=1 calls=2
   calls: anonymous, sub_e76a20
*/
void sub_f03350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf03350ULL || rel >= 0xf03490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f03490 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_f03490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf03490ULL || rel >= 0xf035d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f035d0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_f035d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf035d0ULL || rel >= 0xf03710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f03710 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_f03710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf03710ULL || rel >= 0xf03850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f03850 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_f03850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf03850ULL || rel >= 0xf03990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f03990 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_f03990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf03990ULL || rel >= 0xf03ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f03ad0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_f03ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf03ad0ULL || rel >= 0xf03c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f03c10 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_f03c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf03c10ULL || rel >= 0xf03d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f03d50 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_f03d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf03d50ULL || rel >= 0xf03e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f03e90 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_f03e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf03e90ULL || rel >= 0xf03fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f03fd0 size=336 callers=1 calls=2
   calls: anonymous, sub_13a4980
*/
void sub_f03fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf03fd0ULL || rel >= 0xf04120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04120 size=336 callers=0 calls=4
   calls: CameraTarget, sub_1345cb0, sub_b6f8c0, sub_d0c0
   ref: State_CardCreate
*/
void State_CardCreate(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04120ULL || rel >= 0xf04270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04270 size=16 callers=0 calls=0
*/
void sub_f04270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04270ULL || rel >= 0xf04280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04280 size=16 callers=0 calls=0
*/
void sub_f04280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04280ULL || rel >= 0xf04290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04290 size=16 callers=0 calls=0
*/
void sub_f04290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04290ULL || rel >= 0xf042a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f042a0 size=16 callers=0 calls=0
*/
void sub_f042a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf042a0ULL || rel >= 0xf042b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f042b0 size=16 callers=0 calls=0
*/
void sub_f042b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf042b0ULL || rel >= 0xf042c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f042c0 size=16 callers=0 calls=0
*/
void sub_f042c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf042c0ULL || rel >= 0xf042d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f042d0 size=16 callers=0 calls=0
*/
void sub_f042d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf042d0ULL || rel >= 0xf042e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f042e0 size=16 callers=0 calls=0
*/
void sub_f042e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf042e0ULL || rel >= 0xf042f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f042f0 size=16 callers=0 calls=0
*/
void sub_f042f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf042f0ULL || rel >= 0xf04300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04300 size=16 callers=0 calls=0
*/
void sub_f04300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04300ULL || rel >= 0xf04310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04310 size=304 callers=0 calls=0
*/
void sub_f04310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04310ULL || rel >= 0xf04440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04440 size=80 callers=0 calls=1
   calls: sub_d0c0
   ref: State_ForcedWait
*/
void State_ForcedWait(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04440ULL || rel >= 0xf04490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04490 size=160 callers=0 calls=1
   calls: sub_f019e0
*/
void sub_f04490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04490ULL || rel >= 0xf04530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04530 size=16 callers=0 calls=0
*/
void sub_f04530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04530ULL || rel >= 0xf04540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04540 size=16 callers=0 calls=0
*/
void sub_f04540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04540ULL || rel >= 0xf04550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04550 size=16 callers=0 calls=0
*/
void sub_f04550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04550ULL || rel >= 0xf04560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04560 size=16 callers=0 calls=0
*/
void sub_f04560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04560ULL || rel >= 0xf04570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04570 size=16 callers=0 calls=0
*/
void sub_f04570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04570ULL || rel >= 0xf04580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04580 size=16 callers=0 calls=0
*/
void sub_f04580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04580ULL || rel >= 0xf04590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04590 size=16 callers=0 calls=0
*/
void sub_f04590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04590ULL || rel >= 0xf045a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f045a0 size=16 callers=0 calls=0
*/
void sub_f045a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf045a0ULL || rel >= 0xf045b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f045b0 size=16 callers=0 calls=0
*/
void sub_f045b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf045b0ULL || rel >= 0xf045c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f045c0 size=304 callers=0 calls=0
*/
void sub_f045c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf045c0ULL || rel >= 0xf046f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f046f0 size=336 callers=0 calls=4
   calls: sub_c39c40, sub_d0c0, sub_eb6230, sub_f04a20
   ref: State_FromCoToNi
   ref: Confirm
*/
void State_FromCoToNi(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf046f0ULL || rel >= 0xf04840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04840 size=32 callers=0 calls=1
   calls: sub_eb6530
*/
void sub_f04840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04840ULL || rel >= 0xf04860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04860 size=16 callers=0 calls=0
*/
void sub_f04860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04860ULL || rel >= 0xf04870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04870 size=16 callers=0 calls=0
*/
void sub_f04870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04870ULL || rel >= 0xf04880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04880 size=16 callers=0 calls=0
*/
void sub_f04880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04880ULL || rel >= 0xf04890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04890 size=16 callers=0 calls=0
*/
void sub_f04890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04890ULL || rel >= 0xf048a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f048a0 size=16 callers=0 calls=0
*/
void sub_f048a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf048a0ULL || rel >= 0xf048b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f048b0 size=16 callers=0 calls=0
*/
void sub_f048b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf048b0ULL || rel >= 0xf048c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f048c0 size=16 callers=0 calls=0
*/
void sub_f048c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf048c0ULL || rel >= 0xf048d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f048d0 size=16 callers=0 calls=0
*/
void sub_f048d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf048d0ULL || rel >= 0xf048e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f048e0 size=16 callers=0 calls=0
*/
void sub_f048e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf048e0ULL || rel >= 0xf048f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f048f0 size=304 callers=0 calls=0
*/
void sub_f048f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf048f0ULL || rel >= 0xf04a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04a20 size=272 callers=4 calls=2
   calls: sub_5cfaf0, sub_f04b30
*/
void sub_f04a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04a20ULL || rel >= 0xf04b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04b30 size=304 callers=1 calls=0
*/
void sub_f04b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04b30ULL || rel >= 0xf04c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04c60 size=480 callers=0 calls=6
   calls: sub_c39c40, sub_d0c0, sub_e806b0, sub_eb6230, sub_f05040, sub_f05190
   ref: PlayerSelect
   ref: State_FromHsToLs
   ref: LangSelect
*/
void State_FromHsToLs(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04c60ULL || rel >= 0xf04e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04e40 size=64 callers=0 calls=1
   calls: sub_eb6530
*/
void sub_f04e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04e40ULL || rel >= 0xf04e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04e80 size=16 callers=0 calls=0
*/
void sub_f04e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04e80ULL || rel >= 0xf04e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04e90 size=16 callers=0 calls=0
*/
void sub_f04e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04e90ULL || rel >= 0xf04ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04ea0 size=16 callers=0 calls=0
*/
void sub_f04ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04ea0ULL || rel >= 0xf04eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04eb0 size=16 callers=0 calls=0
*/
void sub_f04eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04eb0ULL || rel >= 0xf04ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04ec0 size=16 callers=0 calls=0
*/
void sub_f04ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04ec0ULL || rel >= 0xf04ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04ed0 size=16 callers=0 calls=0
*/
void sub_f04ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04ed0ULL || rel >= 0xf04ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04ee0 size=16 callers=0 calls=0
*/
void sub_f04ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04ee0ULL || rel >= 0xf04ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04ef0 size=16 callers=0 calls=0
*/
void sub_f04ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04ef0ULL || rel >= 0xf04f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04f00 size=16 callers=0 calls=0
*/
void sub_f04f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04f00ULL || rel >= 0xf04f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f04f10 size=304 callers=0 calls=0
*/
void sub_f04f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04f10ULL || rel >= 0xf05040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f05040 size=336 callers=4 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_f05040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf05040ULL || rel >= 0xf05190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f05190 size=336 callers=5 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_f05190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf05190ULL || rel >= 0xf052e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f052e0 size=336 callers=0 calls=4
   calls: sub_c39c40, sub_d0c0, sub_eb6230, sub_f05190
   ref: PlayerSelect
   ref: State_FromHsToNi
*/
void State_FromHsToNi(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf052e0ULL || rel >= 0xf05430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f05430 size=32 callers=0 calls=1
   calls: sub_eb6530
*/
void sub_f05430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf05430ULL || rel >= 0xf05450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f05450 size=16 callers=0 calls=0
*/
void sub_f05450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf05450ULL || rel >= 0xf05460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f05460 size=16 callers=0 calls=0
*/
void sub_f05460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf05460ULL || rel >= 0xf05470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f05470 size=16 callers=0 calls=0
*/
void sub_f05470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf05470ULL || rel >= 0xf05480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f05480 size=16 callers=0 calls=0
*/
void sub_f05480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf05480ULL || rel >= 0xf05490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f05490 size=16 callers=0 calls=0
*/
void sub_f05490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf05490ULL || rel >= 0xf054a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f054a0 size=16 callers=0 calls=0
*/
void sub_f054a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf054a0ULL || rel >= 0xf054b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f054b0 size=16 callers=0 calls=0
*/
void sub_f054b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf054b0ULL || rel >= 0xf054c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f054c0 size=16 callers=0 calls=0
*/
void sub_f054c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf054c0ULL || rel >= 0xf054d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f054d0 size=16 callers=0 calls=0
*/
void sub_f054d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf054d0ULL || rel >= 0xf054e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f054e0 size=304 callers=0 calls=0
*/
void sub_f054e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf054e0ULL || rel >= 0xf05610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f05610 size=304 callers=0 calls=0
*/
void sub_f05610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf05610ULL || rel >= 0xf05740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f05740 size=432 callers=0 calls=7
   calls: sub_c39c40, sub_d0c0, sub_e806b0, sub_eb6230, sub_f019e0, sub_f04a20, sub_f0af10
   ref: State_FromNiToCo
   ref: Confirm
*/
void State_FromNiToCo(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf05740ULL || rel >= 0xf058f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f058f0 size=32 callers=0 calls=1
   calls: sub_eb6530
*/
void sub_f058f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf058f0ULL || rel >= 0xf05910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f05910 size=16 callers=0 calls=0
*/
void sub_f05910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf05910ULL || rel >= 0xf05920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f05920 size=16 callers=0 calls=0
*/
void sub_f05920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf05920ULL || rel >= 0xf05930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f05930 size=16 callers=0 calls=0
*/
void sub_f05930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf05930ULL || rel >= 0xf05940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f05940 size=16 callers=0 calls=0
*/
void sub_f05940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf05940ULL || rel >= 0xf05950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f05950 size=16 callers=0 calls=0
*/
void sub_f05950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf05950ULL || rel >= 0xf05960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f05960 size=16 callers=0 calls=0
*/
void sub_f05960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf05960ULL || rel >= 0xf05970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f05970 size=336 callers=0 calls=4
   calls: sub_c39c40, sub_d0c0, sub_eb6230, sub_f05190
   ref: PlayerSelect
   ref: State_FromNiToHs
*/
void State_FromNiToHs(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf05970ULL || rel >= 0xf05ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f05ac0 size=32 callers=0 calls=1
   calls: sub_eb6530
*/
void sub_f05ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf05ac0ULL || rel >= 0xf05ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f05ae0 size=16 callers=0 calls=0
*/
void sub_f05ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf05ae0ULL || rel >= 0xf05af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f05af0 size=16 callers=0 calls=0
*/
void sub_f05af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf05af0ULL || rel >= 0xf05b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f05b00 size=16 callers=0 calls=0
*/
void sub_f05b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf05b00ULL || rel >= 0xf05b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f05b10 size=16 callers=0 calls=0
*/
void sub_f05b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf05b10ULL || rel >= 0xf05b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f05b20 size=16 callers=0 calls=0
*/
void sub_f05b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf05b20ULL || rel >= 0xf05b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f05b30 size=16 callers=0 calls=0
*/
void sub_f05b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf05b30ULL || rel >= 0xf05b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f05b40 size=592 callers=0 calls=7
   calls: sub_c39c40, sub_d0c0, sub_ea0fd0, sub_ee5100, sub_f04a20, sub_f05f70, sub_f06560
   ref: State_Intro_Confirm
   ref: Confirm
*/
void State_Intro_Confirm(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf05b40ULL || rel >= 0xf05d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f05d90 size=464 callers=0 calls=8
   calls: sub_136b780, sub_ed29f0, sub_f06a40, sub_f06a50, sub_f07b60, sub_f07ba0, sub_f07d70, sub_f0b3d0
*/
void sub_f05d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf05d90ULL || rel >= 0xf05f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f05f60 size=16 callers=0 calls=0
*/
void sub_f05f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf05f60ULL || rel >= 0xf05f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f05f70 size=496 callers=1 calls=6
   calls: cameraPosition, sub_1306f20, sub_5dd790, sub_5e26a0, sub_5e2930, sub_5e2bc0
*/
void sub_f05f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf05f70ULL || rel >= 0xf06160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f06160 size=112 callers=0 calls=0
*/
void sub_f06160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf06160ULL || rel >= 0xf061d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f061d0 size=112 callers=0 calls=0
*/
void sub_f061d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf061d0ULL || rel >= 0xf06240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f06240 size=16 callers=0 calls=0
*/
void sub_f06240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf06240ULL || rel >= 0xf06250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f06250 size=112 callers=0 calls=0
*/
void sub_f06250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf06250ULL || rel >= 0xf062c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f062c0 size=112 callers=0 calls=0
*/
void sub_f062c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf062c0ULL || rel >= 0xf06330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f06330 size=16 callers=0 calls=0
*/
void sub_f06330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf06330ULL || rel >= 0xf06340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f06340 size=16 callers=0 calls=0
*/
void sub_f06340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf06340ULL || rel >= 0xf06350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f06350 size=112 callers=0 calls=0
*/
void sub_f06350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf06350ULL || rel >= 0xf063c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f063c0 size=112 callers=0 calls=0
*/
void sub_f063c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf063c0ULL || rel >= 0xf06430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f06430 size=304 callers=0 calls=0
*/
void sub_f06430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf06430ULL || rel >= 0xf06560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f06560 size=240 callers=1 calls=1
   calls: sub_f06650
*/
void sub_f06560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf06560ULL || rel >= 0xf06650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f06650 size=240 callers=1 calls=1
   calls: sub_b4c060
*/
void sub_f06650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf06650ULL || rel >= 0xf06740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f06740 size=768 callers=1 calls=5
   calls: sub_1106220, sub_1106320, sub_11063e0, sub_11067c0, sub_1106f30
   ref: modelRotate
   ref: cameraTarget
   ref: modelPosition
   ref: cameraPosition
*/
void cameraPosition(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf06740ULL || rel >= 0xf06a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f06a40 size=16 callers=2 calls=0
*/
void sub_f06a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf06a40ULL || rel >= 0xf06a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f06a50 size=864 callers=2 calls=12
   calls: fel_910_2, sub_b33510, sub_b33640, sub_b336a0, sub_b33760, sub_c545c0, sub_f06ee0, sub_f07310, sub_f073f0, sub_f07620, sub_f07700, sub_f079b0
*/
void sub_f06a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf06a50ULL || rel >= 0xf06db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f06db0 size=304 callers=1 calls=2
   calls: sub_c539f0, sub_c54b90
   ref: fel_910
*/
void fel_910_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf06db0ULL || rel >= 0xf06ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f06ee0 size=1072 callers=1 calls=8
   calls: sub_5e2bc0, sub_603250, sub_6323a0, sub_64a740, sub_64a890, sub_c55af0, sub_ea0fd0, sub_ed1920
*/
void sub_f06ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf06ee0ULL || rel >= 0xf07310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f07310 size=224 callers=1 calls=3
   calls: sub_986200, sub_ea0fd0, sub_ea9e40
*/
void sub_f07310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf07310ULL || rel >= 0xf073f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f073f0 size=560 callers=1 calls=3
   calls: sub_b334c0, sub_b334f0, sub_ea0fd0
*/
void sub_f073f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf073f0ULL || rel >= 0xf07620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f07620 size=224 callers=1 calls=5
   calls: sub_59a4f0, sub_59bee0, sub_5d99d0, sub_b44bb0, sub_b8b050
*/
void sub_f07620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf07620ULL || rel >= 0xf07700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f07700 size=688 callers=1 calls=5
   calls: sub_607750, sub_972c70, sub_b33c60, sub_b46b30, sub_b99000
*/
void sub_f07700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf07700ULL || rel >= 0xf079b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f079b0 size=432 callers=1 calls=3
   calls: sub_607750, sub_b33c60, sub_b46720
*/
void sub_f079b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf079b0ULL || rel >= 0xf07b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f07b60 size=64 callers=1 calls=1
   calls: sub_f06a50
*/
void sub_f07b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf07b60ULL || rel >= 0xf07ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f07ba0 size=464 callers=1 calls=3
   calls: sub_607750, sub_b33c60, sub_b46a10
*/
void sub_f07ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf07ba0ULL || rel >= 0xf07d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f07d70 size=464 callers=1 calls=3
   calls: sub_607750, sub_b33c60, sub_b46a10
*/
void sub_f07d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf07d70ULL || rel >= 0xf07f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f07f40 size=256 callers=0 calls=0
*/
void sub_f07f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf07f40ULL || rel >= 0xf08040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08040 size=16 callers=0 calls=0
*/
void sub_f08040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08040ULL || rel >= 0xf08050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08050 size=16 callers=0 calls=0
*/
void sub_f08050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08050ULL || rel >= 0xf08060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08060 size=16 callers=0 calls=0
*/
void sub_f08060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08060ULL || rel >= 0xf08070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08070 size=16 callers=0 calls=0
*/
void sub_f08070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08070ULL || rel >= 0xf08080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08080 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_f08080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08080ULL || rel >= 0xf080c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f080c0 size=32 callers=0 calls=0
*/
void sub_f080c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf080c0ULL || rel >= 0xf080e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f080e0 size=16 callers=0 calls=0
*/
void sub_f080e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf080e0ULL || rel >= 0xf080f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f080f0 size=16 callers=0 calls=0
*/
void sub_f080f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf080f0ULL || rel >= 0xf08100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08100 size=192 callers=0 calls=1
   calls: sub_c51540
*/
void sub_f08100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08100ULL || rel >= 0xf081c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f081c0 size=16 callers=0 calls=0
*/
void sub_f081c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf081c0ULL || rel >= 0xf081d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f081d0 size=48 callers=0 calls=1
   calls: sub_c70
*/
void sub_f081d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf081d0ULL || rel >= 0xf08200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08200 size=16 callers=0 calls=0
*/
void sub_f08200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08200ULL || rel >= 0xf08210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08210 size=16 callers=0 calls=0
*/
void sub_f08210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08210ULL || rel >= 0xf08220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08220 size=16 callers=0 calls=0
*/
void sub_f08220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08220ULL || rel >= 0xf08230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08230 size=16 callers=0 calls=0
*/
void sub_f08230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08230ULL || rel >= 0xf08240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

