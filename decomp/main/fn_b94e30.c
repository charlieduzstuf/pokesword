/* main functions 00b94e30..00bb5e40 (90 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00b94e30 size=112 callers=0 calls=0
*/
void sub_b94e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb94e30ULL || rel >= 0xb94ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b94ea0 size=112 callers=0 calls=0
*/
void sub_b94ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb94ea0ULL || rel >= 0xb94f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b94f10 size=112 callers=0 calls=0
*/
void sub_b94f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb94f10ULL || rel >= 0xb94f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b94f80 size=464 callers=1 calls=1
   calls: sub_b39cf0
*/
void sub_b94f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb94f80ULL || rel >= 0xb95150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b95150 size=64 callers=2 calls=1
   calls: sub_b46560
*/
void sub_b95150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb95150ULL || rel >= 0xb95190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b95190 size=256 callers=1 calls=2
   calls: sub_b91750, sub_b958b0
*/
void sub_b95190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb95190ULL || rel >= 0xb95290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b95290 size=272 callers=1 calls=2
   calls: sub_b918e0, sub_b958b0
*/
void sub_b95290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb95290ULL || rel >= 0xb953a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b953a0 size=368 callers=1 calls=3
   calls: sub_136b780, sub_b918f0, sub_b958b0
*/
void sub_b953a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb953a0ULL || rel >= 0xb95510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b95510 size=272 callers=1 calls=2
   calls: sub_b91900, sub_b958b0
*/
void sub_b95510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb95510ULL || rel >= 0xb95620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b95620 size=240 callers=4 calls=2
   calls: sub_b91cd0, sub_b958b0
*/
void sub_b95620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb95620ULL || rel >= 0xb95710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b95710 size=16 callers=0 calls=0
*/
void sub_b95710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb95710ULL || rel >= 0xb95720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b95720 size=112 callers=0 calls=1
   calls: sub_b3a8e0
*/
void sub_b95720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb95720ULL || rel >= 0xb95790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b95790 size=16 callers=0 calls=0
*/
void sub_b95790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb95790ULL || rel >= 0xb957a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b957a0 size=16 callers=0 calls=0
*/
void sub_b957a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb957a0ULL || rel >= 0xb957b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b957b0 size=112 callers=0 calls=1
   calls: sub_b3a8e0
*/
void sub_b957b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb957b0ULL || rel >= 0xb95820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b95820 size=112 callers=0 calls=1
   calls: sub_b3a8e0
*/
void sub_b95820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb95820ULL || rel >= 0xb95890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b95890 size=16 callers=0 calls=0
*/
void sub_b95890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb95890ULL || rel >= 0xb958a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b958a0 size=16 callers=0 calls=0
*/
void sub_b958a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb958a0ULL || rel >= 0xb958b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b958b0 size=288 callers=10 calls=1
   calls: sub_b46170
*/
void sub_b958b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb958b0ULL || rel >= 0xb959d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b959d0 size=864 callers=3 calls=5
   calls: sub_607750, sub_b33a30, sub_b33aa0, sub_ed0960, sub_ee1910
*/
void sub_b959d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb959d0ULL || rel >= 0xb95d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b95d30 size=864 callers=6 calls=5
   calls: sub_607750, sub_b33a30, sub_b33aa0, sub_ed09c0, sub_ee19e0
*/
void sub_b95d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb95d30ULL || rel >= 0xb96090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b96090 size=864 callers=3 calls=5
   calls: sub_607750, sub_b33a30, sub_b33aa0, sub_ed0a20, sub_ee1ac0
*/
void sub_b96090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb96090ULL || rel >= 0xb963f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b963f0 size=832 callers=4 calls=5
   calls: sub_607750, sub_b33a30, sub_b33aa0, sub_ed0a80, sub_ee1b90
*/
void sub_b963f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb963f0ULL || rel >= 0xb96730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b96730 size=176 callers=5 calls=1
   calls: sub_b967e0
*/
void sub_b96730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb96730ULL || rel >= 0xb967e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b967e0 size=336 callers=1 calls=2
   calls: sub_b338e0, sub_b4c060
*/
void sub_b967e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb967e0ULL || rel >= 0xb96930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b96930 size=832 callers=2 calls=5
   calls: sub_59a5a0, sub_607750, sub_b33a30, sub_b33aa0, sub_ee1c50
*/
void sub_b96930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb96930ULL || rel >= 0xb96c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b96c70 size=864 callers=3 calls=5
   calls: sub_59a5c0, sub_607750, sub_b33a30, sub_b33aa0, sub_ee1d00
*/
void sub_b96c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb96c70ULL || rel >= 0xb96fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b96fd0 size=848 callers=2 calls=5
   calls: sub_59a650, sub_607750, sub_b33a30, sub_b33aa0, sub_ee1dc0
*/
void sub_b96fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb96fd0ULL || rel >= 0xb97320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b97320 size=464 callers=1 calls=3
   calls: sub_59a670, sub_607750, sub_b33a30
*/
void sub_b97320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb97320ULL || rel >= 0xb974f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b974f0 size=496 callers=1 calls=3
   calls: sub_59a6a0, sub_607750, sub_b33a30
*/
void sub_b974f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb974f0ULL || rel >= 0xb976e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b976e0 size=1056 callers=1 calls=6
   calls: sub_59a670, sub_59a6d0, sub_607750, sub_b33a30, sub_b33aa0, sub_ee1e80
*/
void sub_b976e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb976e0ULL || rel >= 0xb97b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b97b00 size=832 callers=3 calls=5
   calls: sub_59a6f0, sub_607750, sub_b33a30, sub_b33aa0, sub_ee1f90
*/
void sub_b97b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb97b00ULL || rel >= 0xb97e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b97e40 size=448 callers=4 calls=3
   calls: sub_607750, sub_b33c60, sub_b46a10
*/
void sub_b97e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb97e40ULL || rel >= 0xb98000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b98000 size=432 callers=1 calls=3
   calls: sub_607750, sub_b33c60, sub_b46a10
*/
void sub_b98000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb98000ULL || rel >= 0xb981b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b981b0 size=480 callers=2 calls=3
   calls: sub_607750, sub_b33c60, sub_b945f0
*/
void sub_b981b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb981b0ULL || rel >= 0xb98390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b98390 size=448 callers=4 calls=4
   calls: sub_607750, sub_b33c60, sub_b945f0, sub_b95190
*/
void sub_b98390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb98390ULL || rel >= 0xb98550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b98550 size=448 callers=3 calls=4
   calls: sub_607750, sub_b33c60, sub_b945f0, sub_b95290
*/
void sub_b98550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb98550ULL || rel >= 0xb98710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b98710 size=448 callers=1 calls=4
   calls: sub_607750, sub_b33c60, sub_b945f0, sub_b95510
*/
void sub_b98710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb98710ULL || rel >= 0xb988d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b988d0 size=1200 callers=2 calls=5
   calls: sub_b3abe0, sub_b4c080, sub_b571b0, sub_b83d60, sub_b98d80
*/
void sub_b988d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb988d0ULL || rel >= 0xb98d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b98d80 size=224 callers=5 calls=2
   calls: sub_b33870, sub_b4c060
*/
void sub_b98d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb98d80ULL || rel >= 0xb98e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b98e60 size=416 callers=5 calls=1
   calls: sub_689950
*/
void sub_b98e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb98e60ULL || rel >= 0xb99000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b99000 size=320 callers=6 calls=2
   calls: sub_b33870, sub_b4c060
*/
void sub_b99000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb99000ULL || rel >= 0xb99140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b99140 size=48 callers=0 calls=2
   calls: sub_59a7b0, sub_59b280
*/
void sub_b99140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb99140ULL || rel >= 0xb99170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b99170 size=16 callers=0 calls=0
*/
void sub_b99170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb99170ULL || rel >= 0xb99180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b99180 size=16 callers=0 calls=0
*/
void sub_b99180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb99180ULL || rel >= 0xb99190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b99190 size=16 callers=0 calls=0
*/
void sub_b99190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb99190ULL || rel >= 0xb991a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b991a0 size=16 callers=0 calls=0
*/
void sub_b991a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb991a0ULL || rel >= 0xb991b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b991b0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_b991b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb991b0ULL || rel >= 0xb991f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b991f0 size=32 callers=0 calls=0
*/
void sub_b991f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb991f0ULL || rel >= 0xb99210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b99210 size=16 callers=0 calls=0
*/
void sub_b99210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb99210ULL || rel >= 0xb99220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b99220 size=16 callers=0 calls=0
*/
void sub_b99220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb99220ULL || rel >= 0xb99230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b99230 size=768 callers=0 calls=2
   calls: sub_614680, sub_689950
*/
void sub_b99230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb99230ULL || rel >= 0xb99530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b99530 size=16 callers=0 calls=0
*/
void sub_b99530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb99530ULL || rel >= 0xb99540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b99540 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_b99540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb99540ULL || rel >= 0xb99580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b99580 size=32 callers=0 calls=0
*/
void sub_b99580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb99580ULL || rel >= 0xb995a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b995a0 size=16 callers=0 calls=0
*/
void sub_b995a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb995a0ULL || rel >= 0xb995b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b995b0 size=16 callers=0 calls=0
*/
void sub_b995b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb995b0ULL || rel >= 0xb995c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b995c0 size=768 callers=0 calls=2
   calls: sub_614680, sub_689950
*/
void sub_b995c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb995c0ULL || rel >= 0xb998c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b998c0 size=16 callers=0 calls=0
*/
void sub_b998c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb998c0ULL || rel >= 0xb998d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b998d0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_b998d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb998d0ULL || rel >= 0xb99910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b99910 size=32 callers=0 calls=0
*/
void sub_b99910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb99910ULL || rel >= 0xb99930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b99930 size=16 callers=0 calls=0
*/
void sub_b99930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb99930ULL || rel >= 0xb99940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b99940 size=16 callers=0 calls=0
*/
void sub_b99940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb99940ULL || rel >= 0xb99950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b99950 size=1088 callers=0 calls=2
   calls: sub_614680, sub_689950
   ref: face_parts
   ref: body_skin
*/
void face_parts(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb99950ULL || rel >= 0xb99d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b99d90 size=16 callers=0 calls=0
*/
void sub_b99d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb99d90ULL || rel >= 0xb99da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b99da0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_b99da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb99da0ULL || rel >= 0xb99de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b99de0 size=32 callers=0 calls=0
*/
void sub_b99de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb99de0ULL || rel >= 0xb99e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b99e00 size=16 callers=0 calls=0
*/
void sub_b99e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb99e00ULL || rel >= 0xb99e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b99e10 size=16 callers=0 calls=0
*/
void sub_b99e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb99e10ULL || rel >= 0xb99e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b99e20 size=416 callers=0 calls=2
   calls: sub_614680, sub_689950
*/
void sub_b99e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb99e20ULL || rel >= 0xb99fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b99fc0 size=16 callers=0 calls=0
*/
void sub_b99fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb99fc0ULL || rel >= 0xb99fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b99fd0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_b99fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb99fd0ULL || rel >= 0xb9a010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9a010 size=32 callers=0 calls=0
*/
void sub_b9a010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9a010ULL || rel >= 0xb9a030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9a030 size=16 callers=0 calls=0
*/
void sub_b9a030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9a030ULL || rel >= 0xb9a040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9a040 size=16 callers=0 calls=0
*/
void sub_b9a040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9a040ULL || rel >= 0xb9a050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9a050 size=416 callers=0 calls=2
   calls: sub_614680, sub_689950
*/
void sub_b9a050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9a050ULL || rel >= 0xb9a1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9a1f0 size=16 callers=0 calls=0
*/
void sub_b9a1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9a1f0ULL || rel >= 0xb9a200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9a200 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_b9a200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9a200ULL || rel >= 0xb9a240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9a240 size=32 callers=0 calls=0
*/
void sub_b9a240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9a240ULL || rel >= 0xb9a260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9a260 size=16 callers=0 calls=0
*/
void sub_b9a260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9a260ULL || rel >= 0xb9a270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9a270 size=16 callers=0 calls=0
*/
void sub_b9a270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9a270ULL || rel >= 0xb9a280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9a280 size=80 callers=0 calls=0
*/
void sub_b9a280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9a280ULL || rel >= 0xb9a2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9a2d0 size=16 callers=0 calls=0
*/
void sub_b9a2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9a2d0ULL || rel >= 0xb9a2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9a2e0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_b9a2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9a2e0ULL || rel >= 0xb9a320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9a320 size=32 callers=0 calls=0
*/
void sub_b9a320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9a320ULL || rel >= 0xb9a340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9a340 size=16 callers=0 calls=0
*/
void sub_b9a340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9a340ULL || rel >= 0xb9a350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9a350 size=16 callers=0 calls=0
*/
void sub_b9a350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9a350ULL || rel >= 0xb9a360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9a360 size=48 callers=0 calls=0
*/
void sub_b9a360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9a360ULL || rel >= 0xb9a390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9a390 size=48 callers=0 calls=0
*/
void sub_b9a390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9a390ULL || rel >= 0xb9a3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9a3c0 size=16 callers=0 calls=0
*/
void sub_b9a3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9a3c0ULL || rel >= 0xb9a3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9a3d0 size=16 callers=0 calls=0
*/
void sub_b9a3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9a3d0ULL || rel >= 0xb9a3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9a3e0 size=16 callers=0 calls=0
*/
void sub_b9a3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9a3e0ULL || rel >= 0xb9a3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9a3f0 size=1056 callers=0 calls=5
   calls: sub_b424e0, sub_b659b0, sub_b94160, sub_b9a810, sub_b9aa60
*/
void sub_b9a3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9a3f0ULL || rel >= 0xb9a810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9a810 size=592 callers=3 calls=2
   calls: sub_b60780, sub_b94160
*/
void sub_b9a810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9a810ULL || rel >= 0xb9aa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9aa60 size=512 callers=2 calls=2
   calls: sub_b659b0, sub_b94160
*/
void sub_b9aa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9aa60ULL || rel >= 0xb9ac60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9ac60 size=3216 callers=0 calls=7
   calls: sub_b66520, sub_b67390, sub_b67420, sub_b94160, sub_b9a810, sub_b9b8f0, sub_b9cb50
*/
void sub_b9ac60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9ac60ULL || rel >= 0xb9b8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9b8f0 size=4704 callers=1 calls=15
   calls: sub_967240, sub_986200, sub_b39cf0, sub_b5a410, sub_b5a430, sub_b60780, sub_b66170, sub_b677f0, sub_b7e3c0, sub_b7f700, sub_b94160, sub_b9ce40
   ... +3 more
*/
void sub_b9b8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9b8f0ULL || rel >= 0xb9cb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9cb50 size=752 callers=2 calls=2
   calls: sub_b659b0, sub_b94160
*/
void sub_b9cb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9cb50ULL || rel >= 0xb9ce40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9ce40 size=400 callers=2 calls=1
   calls: sub_b7e370
*/
void sub_b9ce40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9ce40ULL || rel >= 0xb9cfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9cfd0 size=960 callers=1 calls=4
   calls: sub_b6a530, sub_b7f290, sub_b94160, sub_b9fa90
*/
void sub_b9cfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9cfd0ULL || rel >= 0xb9d390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9d390 size=960 callers=1 calls=4
   calls: sub_b6ab70, sub_b7fa70, sub_b94160, sub_b9f960
*/
void sub_b9d390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9d390ULL || rel >= 0xb9d750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9d750 size=80 callers=0 calls=1
   calls: sub_b9d7a0
*/
void sub_b9d750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9d750ULL || rel >= 0xb9d7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9d7a0 size=1184 callers=2 calls=6
   calls: sub_b60780, sub_b67ed0, sub_b94160, sub_b9a810, sub_b9ce40, sub_b9f960
*/
void sub_b9d7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9d7a0ULL || rel >= 0xb9dc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9dc40 size=48 callers=0 calls=1
   calls: sub_b9d7a0
*/
void sub_b9dc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9dc40ULL || rel >= 0xb9dc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9dc70 size=1072 callers=0 calls=9
   calls: sub_598de0, sub_5d99d0, sub_989700, sub_989810, sub_b7f2f0, sub_b98e60, sub_b9f960, sub_b9fa90, sub_b9fbc0
*/
void sub_b9dc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9dc70ULL || rel >= 0xb9e0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9e0a0 size=384 callers=0 calls=4
   calls: sub_682dd0, sub_b43a90, sub_b43db0, sub_b9fca0
*/
void sub_b9e0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9e0a0ULL || rel >= 0xb9e220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9e220 size=256 callers=2 calls=3
   calls: sub_598de0, sub_5d99d0, sub_989810
*/
void sub_b9e220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9e220ULL || rel >= 0xb9e320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9e320 size=64 callers=0 calls=0
*/
void sub_b9e320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9e320ULL || rel >= 0xb9e360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9e360 size=64 callers=0 calls=0
*/
void sub_b9e360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9e360ULL || rel >= 0xb9e3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9e3a0 size=80 callers=0 calls=0
*/
void sub_b9e3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9e3a0ULL || rel >= 0xb9e3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9e3f0 size=304 callers=0 calls=2
   calls: sub_5f19d0, sub_618ec0
*/
void sub_b9e3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9e3f0ULL || rel >= 0xb9e520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9e520 size=448 callers=1 calls=2
   calls: sub_ed0e70, sub_ed1340
*/
void sub_b9e520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9e520ULL || rel >= 0xb9e6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9e6e0 size=192 callers=0 calls=0
*/
void sub_b9e6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9e6e0ULL || rel >= 0xb9e7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9e7a0 size=640 callers=0 calls=3
   calls: sub_b60780, sub_b94160, sub_b9f960
*/
void sub_b9e7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9e7a0ULL || rel >= 0xb9ea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9ea20 size=224 callers=0 calls=0
*/
void sub_b9ea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9ea20ULL || rel >= 0xb9eb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9eb00 size=624 callers=0 calls=4
   calls: sub_b67390, sub_b7f700, sub_b94160, sub_b9aa60
*/
void sub_b9eb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9eb00ULL || rel >= 0xb9ed70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9ed70 size=48 callers=0 calls=0
*/
void sub_b9ed70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9ed70ULL || rel >= 0xb9eda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9eda0 size=288 callers=0 calls=0
*/
void sub_b9eda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9eda0ULL || rel >= 0xb9eec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9eec0 size=496 callers=0 calls=1
   calls: sub_b9f370
*/
void sub_b9eec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9eec0ULL || rel >= 0xb9f0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9f0b0 size=16 callers=0 calls=0
*/
void sub_b9f0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9f0b0ULL || rel >= 0xb9f0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9f0c0 size=112 callers=0 calls=1
   calls: sub_b946e0
*/
void sub_b9f0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9f0c0ULL || rel >= 0xb9f130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9f130 size=16 callers=0 calls=0
*/
void sub_b9f130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9f130ULL || rel >= 0xb9f140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9f140 size=16 callers=0 calls=0
*/
void sub_b9f140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9f140ULL || rel >= 0xb9f150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9f150 size=16 callers=0 calls=0
*/
void sub_b9f150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9f150ULL || rel >= 0xb9f160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9f160 size=16 callers=0 calls=0
*/
void sub_b9f160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9f160ULL || rel >= 0xb9f170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9f170 size=16 callers=0 calls=0
*/
void sub_b9f170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9f170ULL || rel >= 0xb9f180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9f180 size=112 callers=0 calls=1
   calls: sub_b946e0
*/
void sub_b9f180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9f180ULL || rel >= 0xb9f1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9f1f0 size=112 callers=0 calls=1
   calls: sub_b946e0
*/
void sub_b9f1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9f1f0ULL || rel >= 0xb9f260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9f260 size=16 callers=0 calls=0
*/
void sub_b9f260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9f260ULL || rel >= 0xb9f270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9f270 size=16 callers=0 calls=0
*/
void sub_b9f270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9f270ULL || rel >= 0xb9f280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9f280 size=80 callers=0 calls=0
*/
void sub_b9f280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9f280ULL || rel >= 0xb9f2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9f2d0 size=80 callers=0 calls=0
*/
void sub_b9f2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9f2d0ULL || rel >= 0xb9f320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9f320 size=80 callers=0 calls=0
*/
void sub_b9f320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9f320ULL || rel >= 0xb9f370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9f370 size=224 callers=1 calls=1
   calls: sub_682dd0
*/
void sub_b9f370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9f370ULL || rel >= 0xb9f450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9f450 size=208 callers=0 calls=0
*/
void sub_b9f450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9f450ULL || rel >= 0xb9f520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9f520 size=208 callers=0 calls=0
*/
void sub_b9f520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9f520ULL || rel >= 0xb9f5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9f5f0 size=16 callers=0 calls=0
*/
void sub_b9f5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9f5f0ULL || rel >= 0xb9f600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9f600 size=208 callers=0 calls=0
*/
void sub_b9f600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9f600ULL || rel >= 0xb9f6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9f6d0 size=208 callers=0 calls=0
*/
void sub_b9f6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9f6d0ULL || rel >= 0xb9f7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9f7a0 size=16 callers=0 calls=0
*/
void sub_b9f7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9f7a0ULL || rel >= 0xb9f7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9f7b0 size=16 callers=0 calls=0
*/
void sub_b9f7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9f7b0ULL || rel >= 0xb9f7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9f7c0 size=208 callers=0 calls=0
*/
void sub_b9f7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9f7c0ULL || rel >= 0xb9f890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9f890 size=208 callers=0 calls=0
*/
void sub_b9f890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9f890ULL || rel >= 0xb9f960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9f960 size=304 callers=7 calls=1
   calls: sub_b39cf0
*/
void sub_b9f960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9f960ULL || rel >= 0xb9fa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9fa90 size=304 callers=2 calls=1
   calls: sub_b39cf0
*/
void sub_b9fa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9fa90ULL || rel >= 0xb9fbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9fbc0 size=224 callers=1 calls=1
   calls: sub_ed0ae0
*/
void sub_b9fbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9fbc0ULL || rel >= 0xb9fca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9fca0 size=656 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_b9ff30
*/
void sub_b9fca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9fca0ULL || rel >= 0xb9ff30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b9ff30 size=240 callers=4 calls=1
   calls: sub_607750
*/
void sub_b9ff30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9ff30ULL || rel >= 0xba0020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba0020 size=80 callers=0 calls=1
   calls: sub_598de0
*/
void sub_ba0020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba0020ULL || rel >= 0xba0070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba0070 size=16 callers=0 calls=0
*/
void sub_ba0070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba0070ULL || rel >= 0xba0080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba0080 size=32 callers=0 calls=0
*/
void sub_ba0080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba0080ULL || rel >= 0xba00a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba00a0 size=32 callers=0 calls=0
*/
void sub_ba00a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba00a0ULL || rel >= 0xba00c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba00c0 size=64 callers=0 calls=1
   calls: sub_599a80
*/
void sub_ba00c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba00c0ULL || rel >= 0xba0100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba0100 size=16 callers=0 calls=0
*/
void sub_ba0100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba0100ULL || rel >= 0xba0110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba0110 size=16 callers=0 calls=0
*/
void sub_ba0110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba0110ULL || rel >= 0xba0120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba0120 size=16 callers=0 calls=0
*/
void sub_ba0120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba0120ULL || rel >= 0xba0130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba0130 size=272 callers=0 calls=2
   calls: sub_598de0, sub_b9f960
*/
void sub_ba0130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba0130ULL || rel >= 0xba0240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba0240 size=16 callers=0 calls=0
*/
void sub_ba0240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba0240ULL || rel >= 0xba0250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba0250 size=32 callers=0 calls=0
*/
void sub_ba0250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba0250ULL || rel >= 0xba0270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba0270 size=32 callers=0 calls=0
*/
void sub_ba0270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba0270ULL || rel >= 0xba0290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba0290 size=256 callers=0 calls=2
   calls: sub_598de0, sub_b9f960
*/
void sub_ba0290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba0290ULL || rel >= 0xba0390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba0390 size=16 callers=0 calls=0
*/
void sub_ba0390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba0390ULL || rel >= 0xba03a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba03a0 size=16 callers=0 calls=0
*/
void sub_ba03a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba03a0ULL || rel >= 0xba03b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba03b0 size=16 callers=0 calls=0
*/
void sub_ba03b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba03b0ULL || rel >= 0xba03c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba03c0 size=256 callers=0 calls=2
   calls: sub_598de0, sub_b9f960
*/
void sub_ba03c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba03c0ULL || rel >= 0xba04c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba04c0 size=16 callers=0 calls=0
*/
void sub_ba04c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba04c0ULL || rel >= 0xba04d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba04d0 size=16 callers=0 calls=0
*/
void sub_ba04d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba04d0ULL || rel >= 0xba04e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba04e0 size=16 callers=0 calls=0
*/
void sub_ba04e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba04e0ULL || rel >= 0xba04f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba04f0 size=160 callers=3 calls=1
   calls: sub_ba0590
*/
void sub_ba04f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba04f0ULL || rel >= 0xba0590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba0590 size=288 callers=2 calls=3
   calls: sub_ba14c0, sub_c38350, sub_e9db40
*/
void sub_ba0590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba0590ULL || rel >= 0xba06b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba06b0 size=160 callers=0 calls=0
*/
void sub_ba06b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba06b0ULL || rel >= 0xba0750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba0750 size=160 callers=0 calls=0
*/
void sub_ba0750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba0750ULL || rel >= 0xba07f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba07f0 size=160 callers=0 calls=0
*/
void sub_ba07f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba07f0ULL || rel >= 0xba0890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba0890 size=160 callers=0 calls=0
*/
void sub_ba0890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba0890ULL || rel >= 0xba0930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba0930 size=160 callers=0 calls=0
*/
void sub_ba0930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba0930ULL || rel >= 0xba09d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba09d0 size=160 callers=0 calls=0
*/
void sub_ba09d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba09d0ULL || rel >= 0xba0a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba0a70 size=16 callers=0 calls=0
*/
void sub_ba0a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba0a70ULL || rel >= 0xba0a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba0a80 size=16 callers=0 calls=0
*/
void sub_ba0a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba0a80ULL || rel >= 0xba0a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba0a90 size=16 callers=0 calls=0
*/
void sub_ba0a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba0a90ULL || rel >= 0xba0aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba0aa0 size=1696 callers=0 calls=7
   calls: sub_8dfd80, sub_8e03b0, sub_8e0670, sub_8e06c0, sub_ba1140, sub_ba1250, sub_ba1fb0
*/
void sub_ba0aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba0aa0ULL || rel >= 0xba1140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba1140 size=272 callers=1 calls=3
   calls: sub_672c10, sub_ba1ec0, sub_c386f0
*/
void sub_ba1140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba1140ULL || rel >= 0xba1250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba1250 size=272 callers=3 calls=3
   calls: sub_672c10, sub_ba25b0, sub_c386f0
*/
void sub_ba1250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba1250ULL || rel >= 0xba1360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba1360 size=16 callers=0 calls=0
*/
void sub_ba1360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba1360ULL || rel >= 0xba1370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba1370 size=16 callers=0 calls=0
*/
void sub_ba1370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba1370ULL || rel >= 0xba1380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba1380 size=16 callers=0 calls=0
*/
void sub_ba1380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba1380ULL || rel >= 0xba1390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba1390 size=304 callers=0 calls=0
*/
void sub_ba1390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba1390ULL || rel >= 0xba14c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba14c0 size=288 callers=1 calls=2
   calls: sub_ba15e0, sub_e9d130
*/
void sub_ba14c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba14c0ULL || rel >= 0xba15e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba15e0 size=560 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_ba15e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba15e0ULL || rel >= 0xba1810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba1810 size=240 callers=0 calls=0
*/
void sub_ba1810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba1810ULL || rel >= 0xba1900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba1900 size=240 callers=0 calls=0
*/
void sub_ba1900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba1900ULL || rel >= 0xba19f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba19f0 size=240 callers=0 calls=0
*/
void sub_ba19f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba19f0ULL || rel >= 0xba1ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba1ae0 size=240 callers=0 calls=0
*/
void sub_ba1ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba1ae0ULL || rel >= 0xba1bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba1bd0 size=240 callers=0 calls=0
*/
void sub_ba1bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba1bd0ULL || rel >= 0xba1cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba1cc0 size=16 callers=0 calls=0
*/
void sub_ba1cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba1cc0ULL || rel >= 0xba1cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba1cd0 size=16 callers=0 calls=0
*/
void sub_ba1cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba1cd0ULL || rel >= 0xba1ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba1ce0 size=240 callers=0 calls=0
*/
void sub_ba1ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba1ce0ULL || rel >= 0xba1dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba1dd0 size=240 callers=0 calls=0
*/
void sub_ba1dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba1dd0ULL || rel >= 0xba1ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba1ec0 size=240 callers=1 calls=1
   calls: sub_ba26b0
*/
void sub_ba1ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba1ec0ULL || rel >= 0xba1fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba1fb0 size=400 callers=3 calls=1
   calls: sub_5e2350
*/
void sub_ba1fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba1fb0ULL || rel >= 0xba2140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba2140 size=144 callers=0 calls=0
*/
void sub_ba2140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba2140ULL || rel >= 0xba21d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba21d0 size=144 callers=0 calls=0
*/
void sub_ba21d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba21d0ULL || rel >= 0xba2260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba2260 size=240 callers=0 calls=0
*/
void sub_ba2260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba2260ULL || rel >= 0xba2350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba2350 size=144 callers=0 calls=0
*/
void sub_ba2350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba2350ULL || rel >= 0xba23e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba23e0 size=144 callers=0 calls=0
*/
void sub_ba23e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba23e0ULL || rel >= 0xba2470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba2470 size=16 callers=0 calls=0
*/
void sub_ba2470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba2470ULL || rel >= 0xba2480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba2480 size=16 callers=0 calls=0
*/
void sub_ba2480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba2480ULL || rel >= 0xba2490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba2490 size=144 callers=0 calls=0
*/
void sub_ba2490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba2490ULL || rel >= 0xba2520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba2520 size=144 callers=0 calls=0
*/
void sub_ba2520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba2520ULL || rel >= 0xba25b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba25b0 size=256 callers=1 calls=1
   calls: sub_1319b40
*/
void sub_ba25b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba25b0ULL || rel >= 0xba26b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba26b0 size=112 callers=1 calls=3
   calls: sub_ba2720, sub_e76a20, sub_e7b660
*/
void sub_ba26b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba26b0ULL || rel >= 0xba2720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba2720 size=224 callers=1 calls=3
   calls: sub_7c2da0, sub_ba42d0, sub_e7b5e0
*/
void sub_ba2720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba2720ULL || rel >= 0xba2800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba2800 size=720 callers=0 calls=13
   calls: strinput, sub_5cfad0, sub_78f150, sub_78f240, sub_794e80, sub_79ab20, sub_79b250, sub_ba2ad0, sub_ba47c0, sub_ba4b50, sub_ba4f60, sub_e7c0f0
   ... +1 more
   ref: OptionBar
   ref: ViewTop
   ref: SystemMessageView
   ref: ViewRegulation
   ref: ViewSelect
*/
void SystemMessageView(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba2800ULL || rel >= 0xba2ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba2ad0 size=272 callers=1 calls=3
   calls: sub_ba43c0, sub_ba4690, sub_e7c160
*/
void sub_ba2ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba2ad0ULL || rel >= 0xba2be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba2be0 size=80 callers=0 calls=2
   calls: sub_e76980, sub_e7ea20
*/
void sub_ba2be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba2be0ULL || rel >= 0xba2c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba2c30 size=960 callers=0 calls=4
   calls: sub_ba2ff0, sub_ba4690, sub_ba52f0, sub_e7eb10
   ref: ViewTop
*/
void ViewTop(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba2c30ULL || rel >= 0xba2ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba2ff0 size=1600 callers=1 calls=1
   calls: sub_67b990
*/
void sub_ba2ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba2ff0ULL || rel >= 0xba3630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba3630 size=16 callers=0 calls=0
*/
void sub_ba3630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba3630ULL || rel >= 0xba3640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba3640 size=448 callers=0 calls=5
   calls: sub_ba3800, sub_ba5570, sub_ba5810, sub_ba5a90, sub_e7c160
*/
void sub_ba3640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba3640ULL || rel >= 0xba3800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba3800 size=352 callers=19 calls=0
*/
void sub_ba3800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba3800ULL || rel >= 0xba3960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba3960 size=96 callers=0 calls=2
   calls: sub_1049bd0, sub_e769b0
*/
void sub_ba3960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba3960ULL || rel >= 0xba39c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba39c0 size=448 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_ba39c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba39c0ULL || rel >= 0xba3b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba3b80 size=16 callers=0 calls=0
*/
void sub_ba3b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba3b80ULL || rel >= 0xba3b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba3b90 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_ba3b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba3b90ULL || rel >= 0xba3c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba3c40 size=16 callers=0 calls=0
*/
void sub_ba3c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba3c40ULL || rel >= 0xba3c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba3c50 size=16 callers=0 calls=0
*/
void sub_ba3c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba3c50ULL || rel >= 0xba3c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba3c60 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_ba3c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba3c60ULL || rel >= 0xba3d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba3d10 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_ba3d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba3d10ULL || rel >= 0xba3dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba3dc0 size=16 callers=0 calls=0
*/
void sub_ba3dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba3dc0ULL || rel >= 0xba3dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba3dd0 size=16 callers=0 calls=0
*/
void sub_ba3dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba3dd0ULL || rel >= 0xba3de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba3de0 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_ba3de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba3de0ULL || rel >= 0xba3e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba3e60 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_ba3e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba3e60ULL || rel >= 0xba3fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba3fd0 size=96 callers=0 calls=1
   calls: sub_ba41f0
*/
void sub_ba3fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba3fd0ULL || rel >= 0xba4030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba4030 size=16 callers=0 calls=0
*/
void sub_ba4030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba4030ULL || rel >= 0xba4040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba4040 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_ba4040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba4040ULL || rel >= 0xba40e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba40e0 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_ba40e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba40e0ULL || rel >= 0xba41a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba41a0 size=16 callers=0 calls=0
*/
void sub_ba41a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba41a0ULL || rel >= 0xba41b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba41b0 size=16 callers=0 calls=0
*/
void sub_ba41b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba41b0ULL || rel >= 0xba41c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba41c0 size=16 callers=0 calls=0
*/
void sub_ba41c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba41c0ULL || rel >= 0xba41d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba41d0 size=32 callers=0 calls=0
*/
void sub_ba41d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba41d0ULL || rel >= 0xba41f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba41f0 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_ba41f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba41f0ULL || rel >= 0xba42d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba42d0 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_ba42d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba42d0ULL || rel >= 0xba43c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba43c0 size=256 callers=1 calls=2
   calls: sub_e76a20, sub_e7c210
*/
void sub_ba43c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba43c0ULL || rel >= 0xba44c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba44c0 size=336 callers=0 calls=0
*/
void sub_ba44c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba44c0ULL || rel >= 0xba4610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba4610 size=16 callers=0 calls=0
*/
void sub_ba4610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba4610ULL || rel >= 0xba4620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba4620 size=16 callers=0 calls=0
*/
void sub_ba4620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba4620ULL || rel >= 0xba4630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba4630 size=16 callers=0 calls=0
*/
void sub_ba4630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba4630ULL || rel >= 0xba4640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba4640 size=16 callers=0 calls=0
*/
void sub_ba4640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba4640ULL || rel >= 0xba4650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba4650 size=16 callers=0 calls=0
*/
void sub_ba4650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba4650ULL || rel >= 0xba4660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba4660 size=16 callers=0 calls=0
*/
void sub_ba4660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba4660ULL || rel >= 0xba4670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba4670 size=16 callers=0 calls=0
*/
void sub_ba4670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba4670ULL || rel >= 0xba4680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba4680 size=16 callers=0 calls=0
*/
void sub_ba4680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba4680ULL || rel >= 0xba4690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba4690 size=304 callers=36 calls=0
*/
void sub_ba4690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba4690ULL || rel >= 0xba47c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba47c0 size=288 callers=1 calls=2
   calls: sub_ba48e0, sub_e809c0
*/
void sub_ba47c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba47c0ULL || rel >= 0xba48e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba48e0 size=624 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_ba48e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba48e0ULL || rel >= 0xba4b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba4b50 size=288 callers=1 calls=2
   calls: sub_ba4c70, sub_e809c0
*/
void sub_ba4b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba4b50ULL || rel >= 0xba4c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba4c70 size=384 callers=1 calls=3
   calls: sub_790490, sub_ba4df0, sub_e7fe20
*/
void sub_ba4c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba4c70ULL || rel >= 0xba4df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba4df0 size=368 callers=1 calls=1
   calls: anonymous_2
*/
void sub_ba4df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba4df0ULL || rel >= 0xba4f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba4f60 size=288 callers=1 calls=2
   calls: sub_ba5080, sub_e809c0
*/
void sub_ba4f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba4f60ULL || rel >= 0xba5080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba5080 size=624 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_ba5080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba5080ULL || rel >= 0xba52f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba52f0 size=336 callers=3 calls=2
   calls: sub_5cfaf0, sub_ba5440
*/
void sub_ba52f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba52f0ULL || rel >= 0xba5440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba5440 size=304 callers=8 calls=0
*/
void sub_ba5440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba5440ULL || rel >= 0xba5570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba5570 size=288 callers=1 calls=1
   calls: sub_ba5690
*/
void sub_ba5570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba5570ULL || rel >= 0xba5690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba5690 size=384 callers=1 calls=1
   calls: anonymous
*/
void sub_ba5690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba5690ULL || rel >= 0xba5810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba5810 size=288 callers=1 calls=1
   calls: sub_ba5930
*/
void sub_ba5810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba5810ULL || rel >= 0xba5930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba5930 size=352 callers=1 calls=1
   calls: anonymous
*/
void sub_ba5930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba5930ULL || rel >= 0xba5a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba5a90 size=288 callers=1 calls=1
   calls: sub_ba5bb0
*/
void sub_ba5a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba5a90ULL || rel >= 0xba5bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba5bb0 size=352 callers=1 calls=1
   calls: anonymous
*/
void sub_ba5bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba5bb0ULL || rel >= 0xba5d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba5d10 size=128 callers=0 calls=0
*/
void sub_ba5d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba5d10ULL || rel >= 0xba5d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba5d90 size=832 callers=1 calls=3
   calls: sub_ba7840, sub_e83930, sub_e84190
   ref: pane_%s
   ref: L_co_r_button_00
   ref: pane_%s_%s
*/
void L_co_r_button_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba5d90ULL || rel >= 0xba60d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba60d0 size=208 callers=1 calls=4
   calls: sub_14e1b40, sub_ba7290, sub_e83930, sub_e84190
*/
void sub_ba60d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba60d0ULL || rel >= 0xba61a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba61a0 size=768 callers=1 calls=3
   calls: sub_ba7840, sub_e83930, sub_e84190
   ref: pane_%s
   ref: L_co_r_button_00
   ref: pane_%s_%s
*/
void L_co_r_button_00_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba61a0ULL || rel >= 0xba64a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba64a0 size=48 callers=0 calls=0
*/
void sub_ba64a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba64a0ULL || rel >= 0xba64d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba64d0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/competition_organize/bin/competition_organize_regulation_00_lyt.bin
   ref: bin/appli/competition_organize/bin/uikit_competition_organize_regulation_00.bin
*/
void uikit_competition_organize_regulation_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba64d0ULL || rel >= 0xba66b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba66b0 size=192 callers=0 calls=1
   calls: sub_ea4740
*/
void sub_ba66b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba66b0ULL || rel >= 0xba6770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba6770 size=432 callers=0 calls=1
   calls: sub_ba7840
   ref: pane_%s
   ref: pane_%s_%s
   ref: T_co_r_wait_00
   ref: T_co_r_title_00
*/
void T_co_r_title_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba6770ULL || rel >= 0xba6920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba6920 size=560 callers=0 calls=4
   calls: sub_14e1b40, sub_5cfad0, sub_7a3c20, sub_e84190
*/
void sub_ba6920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba6920ULL || rel >= 0xba6b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba6b50 size=240 callers=0 calls=0
*/
void sub_ba6b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba6b50ULL || rel >= 0xba6c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba6c40 size=240 callers=0 calls=0
*/
void sub_ba6c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba6c40ULL || rel >= 0xba6d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba6d30 size=112 callers=0 calls=1
   calls: sub_ba5440
*/
void sub_ba6d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba6d30ULL || rel >= 0xba6da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba6da0 size=240 callers=0 calls=0
*/
void sub_ba6da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba6da0ULL || rel >= 0xba6e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba6e90 size=240 callers=0 calls=0
*/
void sub_ba6e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba6e90ULL || rel >= 0xba6f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba6f80 size=112 callers=0 calls=1
   calls: sub_ba5440
*/
void sub_ba6f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba6f80ULL || rel >= 0xba6ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba6ff0 size=112 callers=0 calls=1
   calls: sub_ba5440
*/
void sub_ba6ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba6ff0ULL || rel >= 0xba7060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba7060 size=240 callers=0 calls=0
*/
void sub_ba7060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba7060ULL || rel >= 0xba7150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba7150 size=240 callers=0 calls=0
*/
void sub_ba7150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba7150ULL || rel >= 0xba7240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba7240 size=32 callers=0 calls=0
*/
void sub_ba7240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba7240ULL || rel >= 0xba7260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba7260 size=16 callers=0 calls=0
*/
void sub_ba7260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba7260ULL || rel >= 0xba7270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba7270 size=16 callers=0 calls=0
*/
void sub_ba7270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba7270ULL || rel >= 0xba7280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba7280 size=16 callers=0 calls=0
*/
void sub_ba7280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba7280ULL || rel >= 0xba7290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba7290 size=80 callers=27 calls=2
   calls: sub_14e1a30, sub_e84310
*/
void sub_ba7290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba7290ULL || rel >= 0xba72e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba72e0 size=240 callers=4 calls=2
   calls: sub_67d450, sub_e7eb10
*/
void sub_ba72e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba72e0ULL || rel >= 0xba73d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba73d0 size=240 callers=1 calls=2
   calls: sub_e7eb10, sub_e7f7c0
*/
void sub_ba73d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba73d0ULL || rel >= 0xba74c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba74c0 size=112 callers=0 calls=4
   calls: sub_14e1a30, sub_ba73d0, sub_e806b0, sub_e84310
*/
void sub_ba74c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba74c0ULL || rel >= 0xba7530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba7530 size=16 callers=3 calls=0
*/
void sub_ba7530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba7530ULL || rel >= 0xba7540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba7540 size=176 callers=4 calls=1
   calls: sub_1315b90
*/
void sub_ba7540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba7540ULL || rel >= 0xba75f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba75f0 size=32 callers=6 calls=0
*/
void sub_ba75f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba75f0ULL || rel >= 0xba7610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba7610 size=32 callers=2 calls=0
*/
void sub_ba7610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba7610ULL || rel >= 0xba7630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba7630 size=112 callers=2 calls=1
   calls: sub_1315b90
*/
void sub_ba7630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba7630ULL || rel >= 0xba76a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba76a0 size=176 callers=3 calls=1
   calls: sub_1315b90
*/
void sub_ba76a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba76a0ULL || rel >= 0xba7750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba7750 size=240 callers=2 calls=1
   calls: sub_1315b90
*/
void sub_ba7750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba7750ULL || rel >= 0xba7840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba7840 size=256 callers=40 calls=2
   calls: sub_14ac370, sub_67d450
*/
void sub_ba7840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba7840ULL || rel >= 0xba7940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba7940 size=112 callers=0 calls=0
*/
void sub_ba7940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba7940ULL || rel >= 0xba79b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba79b0 size=112 callers=0 calls=0
*/
void sub_ba79b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba79b0ULL || rel >= 0xba7a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba7a20 size=16 callers=0 calls=0
*/
void sub_ba7a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba7a20ULL || rel >= 0xba7a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba7a30 size=16 callers=0 calls=0
*/
void sub_ba7a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba7a30ULL || rel >= 0xba7a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba7a40 size=16 callers=0 calls=0
*/
void sub_ba7a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba7a40ULL || rel >= 0xba7a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba7a50 size=112 callers=0 calls=0
*/
void sub_ba7a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba7a50ULL || rel >= 0xba7ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba7ac0 size=112 callers=0 calls=0
*/
void sub_ba7ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba7ac0ULL || rel >= 0xba7b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba7b30 size=16 callers=0 calls=0
*/
void sub_ba7b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba7b30ULL || rel >= 0xba7b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba7b40 size=16 callers=0 calls=0
*/
void sub_ba7b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba7b40ULL || rel >= 0xba7b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba7b50 size=112 callers=0 calls=0
*/
void sub_ba7b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba7b50ULL || rel >= 0xba7bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba7bc0 size=112 callers=0 calls=0
*/
void sub_ba7bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba7bc0ULL || rel >= 0xba7c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba7c30 size=48 callers=6 calls=1
   calls: sub_e83d70
   ref: C_button_confirm
*/
void C_button_confirm(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba7c30ULL || rel >= 0xba7c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba7c60 size=112 callers=2 calls=0
*/
void sub_ba7c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba7c60ULL || rel >= 0xba7cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba7cd0 size=112 callers=2 calls=0
*/
void sub_ba7cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba7cd0ULL || rel >= 0xba7d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba7d40 size=112 callers=2 calls=0
*/
void sub_ba7d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba7d40ULL || rel >= 0xba7db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba7db0 size=144 callers=0 calls=0
*/
void sub_ba7db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba7db0ULL || rel >= 0xba7e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba7e40 size=720 callers=1 calls=2
   calls: sub_ba7840, sub_e83930
   ref: pane_%s
   ref: anime_%s
   ref: L_co_top_detail_00
   ref: pane_%s_%s
   ref: detail_switch
   ref: T_co_detail_l_13
   ref: anime_%s_%s
*/
void L_co_top_detail_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba7e40ULL || rel >= 0xba8110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba8110 size=720 callers=1 calls=2
   calls: sub_ba7840, sub_e83930
   ref: pane_%s
   ref: anime_%s
   ref: pane_%s_%s
   ref: detail_switch
   ref: T_co_detail_l_13
   ref: anime_%s_%s
   ref: L_co_top_detail_01
*/
void L_co_top_detail_01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba8110ULL || rel >= 0xba83e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba83e0 size=720 callers=1 calls=2
   calls: sub_ba7840, sub_e83930
   ref: pane_%s
   ref: anime_%s
   ref: L_co_top_detail_02
   ref: pane_%s_%s
   ref: detail_switch
   ref: T_co_detail_l_13
   ref: anime_%s_%s
*/
void L_co_top_detail_02(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba83e0ULL || rel >= 0xba86b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba86b0 size=720 callers=1 calls=2
   calls: sub_ba7840, sub_e83930
   ref: pane_%s
   ref: anime_%s
   ref: pane_%s_%s
   ref: detail_switch
   ref: T_co_detail_l_13
   ref: anime_%s_%s
   ref: L_co_top_detail_03
*/
void L_co_top_detail_03(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba86b0ULL || rel >= 0xba8980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba8980 size=528 callers=1 calls=1
   calls: sub_ba7840
   ref: pane_%s
   ref: pane_%s_%s
   ref: L_co_top_detail_04
   ref: T_co_detail_s_01
*/
void L_co_top_detail_04(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba8980ULL || rel >= 0xba8b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba8b90 size=528 callers=1 calls=1
   calls: sub_ba7840
   ref: pane_%s
   ref: L_co_top_detail_05
   ref: pane_%s_%s
   ref: T_co_detail_s_01
*/
void L_co_top_detail_05(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba8b90ULL || rel >= 0xba8da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba8da0 size=64 callers=2 calls=1
   calls: sub_14e6550
*/
void sub_ba8da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba8da0ULL || rel >= 0xba8de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba8de0 size=32 callers=2 calls=1
   calls: sub_14e6d50
*/
void sub_ba8de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba8de0ULL || rel >= 0xba8e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba8e00 size=880 callers=2 calls=4
   calls: sub_14ab040, sub_ba7530, sub_ba7840, sub_e83930
   ref: pane_%s
   ref: anime_%s
   ref: L_co_top_detail_00
   ref: pane_%s_%s
   ref: detail_switch
   ref: anime_%s_%s
   ref: T_co_detail_l_09
*/
void L_co_top_detail_00_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba8e00ULL || rel >= 0xba9170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba9170 size=880 callers=2 calls=4
   calls: sub_14ab040, sub_ba7530, sub_ba7840, sub_e83930
   ref: pane_%s
   ref: anime_%s
   ref: L_co_top_detail_00
   ref: pane_%s_%s
   ref: detail_switch
   ref: T_co_detail_l_10
   ref: anime_%s_%s
*/
void L_co_top_detail_00_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba9170ULL || rel >= 0xba94e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba94e0 size=1472 callers=9 calls=2
   calls: sub_ba7840, sub_e83930
   ref: pane_%s
   ref: anime_%s
   ref: pane_%s_%s
   ref: detail_switch
   ref: T_co_detail_l_01
   ref: anime_%s_%s
   ref: L_co_top_detail_01
   ref: T_co_detail_l_02
*/
void L_co_top_detail_01_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba94e0ULL || rel >= 0xba9aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba9aa0 size=1136 callers=4 calls=3
   calls: sub_ba7530, sub_ba7840, sub_e83930
   ref: pane_%s
   ref: anime_%s
   ref: pane_%s_%s
   ref: detail_switch
   ref: T_co_detail_l_01
   ref: anime_%s_%s
   ref: L_co_top_detail_01
   ref: T_co_detail_l_02
*/
void L_co_top_detail_01_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba9aa0ULL || rel >= 0xba9f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ba9f10 size=1360 callers=1 calls=3
   calls: sub_ba7540, sub_ba7840, sub_e83930
   ref: pane_%s
   ref: anime_%s
   ref: T_co_detail_l_03
   ref: L_co_top_detail_02
   ref: pane_%s_%s
   ref: T_co_detail_l_05
   ref: detail_switch
   ref: T_co_detail_l_08
*/
void L_co_top_detail_02_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba9f10ULL || rel >= 0xbaa460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00baa460 size=1168 callers=4 calls=4
   calls: sub_14ab040, sub_ba75f0, sub_ba7840, sub_e83930
   ref: pane_%s
   ref: anime_%s
   ref: T_co_detail_l_11
   ref: pane_%s_%s
   ref: detail_switch
   ref: anime_%s_%s
   ref: T_co_detail_l_12
   ref: L_co_top_detail_03
*/
void L_co_top_detail_03_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbaa460ULL || rel >= 0xbaa8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00baa8f0 size=1184 callers=2 calls=4
   calls: sub_14ab040, sub_ba75f0, sub_ba7840, sub_e83930
   ref: pane_%s
   ref: anime_%s
   ref: T_co_detail_l_11
   ref: pane_%s_%s
   ref: detail_switch
   ref: anime_%s_%s
   ref: T_co_detail_l_12
   ref: L_co_top_detail_03
*/
void L_co_top_detail_03_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbaa8f0ULL || rel >= 0xbaad90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00baad90 size=736 callers=1 calls=1
   calls: sub_ba7840
   ref: pane_%s
   ref: pane_%s_%s
   ref: L_co_top_detail_04
   ref: T_co_detail_s_01
*/
void L_co_top_detail_04_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbaad90ULL || rel >= 0xbab070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bab070 size=560 callers=2 calls=2
   calls: sub_ba7610, sub_ba7840
   ref: pane_%s
   ref: L_co_top_detail_05
   ref: pane_%s_%s
   ref: T_co_detail_s_01
*/
void L_co_top_detail_05_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbab070ULL || rel >= 0xbab2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bab2a0 size=384 callers=0 calls=0
*/
void sub_bab2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbab2a0ULL || rel >= 0xbab420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bab420 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/competition_organize/bin/competition_organize_top_00_lyt.bin
   ref: bin/appli/competition_organize/bin/uikit_competition_organize_top_00.bin
*/
void uikit_competition_organize_top_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbab420ULL || rel >= 0xbab600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bab600 size=16 callers=0 calls=0
*/
void sub_bab600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbab600ULL || rel >= 0xbab610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bab610 size=5056 callers=0 calls=1
   calls: sub_ba7840
   ref: pane_%s
   ref: L_co_top_detail_05
   ref: L_co_top_detail_00
   ref: L_co_top_detail_02
   ref: T_co_detail_l__01
   ref: pane_%s_%s
   ref: T_co_title_00
   ref: T_co_detail_l_00
*/
void T_co_title_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbab610ULL || rel >= 0xbac9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bac9d0 size=624 callers=0 calls=10
   calls: L_co_top_detail_00, L_co_top_detail_01, L_co_top_detail_02, L_co_top_detail_03, L_co_top_detail_04, L_co_top_detail_05, sub_14e6550, sub_5cfad0, sub_7a3c20, sub_e84190
*/
void sub_bac9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbac9d0ULL || rel >= 0xbacc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bacc40 size=384 callers=2 calls=6
   calls: sub_14e61e0, sub_14e62b0, sub_14e6550, sub_e83870, sub_e83930, sub_e84190
   ref: anime_detail_switch
*/
void anime_detail_switch(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbacc40ULL || rel >= 0xbacdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bacdc0 size=240 callers=0 calls=0
*/
void sub_bacdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbacdc0ULL || rel >= 0xbaceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00baceb0 size=240 callers=0 calls=0
*/
void sub_baceb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbaceb0ULL || rel >= 0xbacfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bacfa0 size=112 callers=0 calls=1
   calls: sub_ba5440
*/
void sub_bacfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbacfa0ULL || rel >= 0xbad010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bad010 size=240 callers=0 calls=0
*/
void sub_bad010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbad010ULL || rel >= 0xbad100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bad100 size=240 callers=0 calls=0
*/
void sub_bad100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbad100ULL || rel >= 0xbad1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bad1f0 size=112 callers=0 calls=1
   calls: sub_ba5440
*/
void sub_bad1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbad1f0ULL || rel >= 0xbad260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bad260 size=112 callers=0 calls=1
   calls: sub_ba5440
*/
void sub_bad260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbad260ULL || rel >= 0xbad2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bad2d0 size=240 callers=0 calls=0
*/
void sub_bad2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbad2d0ULL || rel >= 0xbad3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bad3c0 size=240 callers=0 calls=0
*/
void sub_bad3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbad3c0ULL || rel >= 0xbad4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bad4b0 size=32 callers=0 calls=0
*/
void sub_bad4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbad4b0ULL || rel >= 0xbad4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bad4d0 size=16 callers=0 calls=0
*/
void sub_bad4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbad4d0ULL || rel >= 0xbad4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bad4e0 size=16 callers=0 calls=0
*/
void sub_bad4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbad4e0ULL || rel >= 0xbad4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bad4f0 size=16 callers=0 calls=0
*/
void sub_bad4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbad4f0ULL || rel >= 0xbad500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bad500 size=16 callers=0 calls=0
*/
void sub_bad500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbad500ULL || rel >= 0xbad510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bad510 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/competition_organize/bin/competition_organize_date_00_lyt.bin
   ref: bin/appli/competition_organize/bin/uikit_competition_organize_date_00.bin
*/
void uikit_competition_organize_date_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbad510ULL || rel >= 0xbad6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bad6f0 size=16 callers=0 calls=0
*/
void sub_bad6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbad6f0ULL || rel >= 0xbad700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bad700 size=528 callers=1 calls=3
   calls: OptionBar_3, sub_bae780, sub_e83930
   ref: switch
   ref: anime_%s
   ref: pointer
*/
void pointer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbad700ULL || rel >= 0xbad910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bad910 size=608 callers=1 calls=4
   calls: sub_ba7750, sub_ba7840, sub_badb70, sub_e83930
   ref: switch
   ref: pane_%s
   ref: anime_%s
   ref: pane_%s_%s
   ref: T_co_date_00
*/
void T_co_date_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbad910ULL || rel >= 0xbadb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00badb70 size=464 callers=2 calls=7
   calls: sub_14e1a00, sub_14edac0, sub_14f1840, sub_14f1850, sub_14f1870, sub_bb16d0, sub_e84250
*/
void sub_badb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbadb70ULL || rel >= 0xbadd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00badd40 size=336 callers=2 calls=2
   calls: sub_badb70, sub_e83930
   ref: switch
   ref: anime_%s
*/
void switch_fn(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbadd40ULL || rel >= 0xbade90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bade90 size=336 callers=2 calls=2
   calls: sub_badfe0, sub_e83930
   ref: switch
   ref: anime_%s
*/
void switch_fn_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbade90ULL || rel >= 0xbadfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00badfe0 size=608 callers=1 calls=7
   calls: sub_14e1a00, sub_14edac0, sub_14f1840, sub_14f1850, sub_14f1870, sub_bb16d0, sub_e84250
*/
void sub_badfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbadfe0ULL || rel >= 0xbae240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bae240 size=208 callers=0 calls=1
   calls: sub_ba7840
   ref: pane_%s
   ref: T_co_date_title_00
*/
void T_co_date_title_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbae240ULL || rel >= 0xbae310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bae310 size=1136 callers=0 calls=4
   calls: sub_5cfad0, sub_7a3c20, sub_bb0bd0, sub_e84250
*/
void sub_bae310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbae310ULL || rel >= 0xbae780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bae780 size=912 callers=2 calls=8
   calls: T_co_date_00_2, sub_14e1a00, sub_14edac0, sub_14f1840, sub_14f1850, sub_14f1870, sub_bb16d0, sub_e84250
*/
void sub_bae780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbae780ULL || rel >= 0xbaeb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00baeb10 size=608 callers=3 calls=4
   calls: sub_ba7630, sub_ba76a0, sub_ba7750, sub_ba7840
   ref: pane_%s
   ref: T_co_date_00
*/
void T_co_date_00_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbaeb10ULL || rel >= 0xbaed70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00baed70 size=384 callers=2 calls=8
   calls: T_co_date_00_2, sub_14e1a00, sub_14edac0, sub_14f1840, sub_14f1850, sub_14f1870, sub_bb16d0, sub_e84250
*/
void sub_baed70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbaed70ULL || rel >= 0xbaeef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00baeef0 size=416 callers=1 calls=8
   calls: T_co_date_00_2, sub_14e1a00, sub_14edac0, sub_14f1840, sub_14f1850, sub_14f1870, sub_bb16d0, sub_e84250
*/
void sub_baeef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbaeef0ULL || rel >= 0xbaf090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00baf090 size=784 callers=0 calls=9
   calls: OptionBar_3, sub_14eebd0, sub_14eebe0, sub_ba7290, sub_baed70, sub_baeef0, sub_e80580, sub_e83930, sub_e84250
   ref: anime_%s
   ref: pointer
*/
void pointer_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbaf090ULL || rel >= 0xbaf3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00baf3a0 size=2736 callers=0 calls=6
   calls: sub_ba75f0, sub_ba7610, sub_ba7630, sub_ba76a0, sub_ba7840, sub_e83930
   ref: switch
   ref: pane_%s
   ref: anime_%s
   ref: L_co_date_button_%02d
   ref: pane_%s_%s
   ref: T_co_b_d_00
   ref: anime_%s_%s
   ref: T_co_b_d_01
*/
void T_co_b_d_01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbaf3a0ULL || rel >= 0xbafe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bafe50 size=512 callers=3 calls=4
   calls: sub_67d450, sub_795bc0, sub_e7eb10, sub_eb7640
   ref: OptionBar
*/
void OptionBar_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbafe50ULL || rel >= 0xbb0050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb0050 size=496 callers=0 calls=6
   calls: OptionBar_3, sub_ba7290, sub_bae780, sub_baed70, sub_e80580, sub_e83930
   ref: anime_%s
   ref: pointer
*/
void pointer_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb0050ULL || rel >= 0xbb0240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb0240 size=288 callers=0 calls=0
*/
void sub_bb0240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb0240ULL || rel >= 0xbb0360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb0360 size=288 callers=0 calls=0
*/
void sub_bb0360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb0360ULL || rel >= 0xbb0480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb0480 size=176 callers=0 calls=1
   calls: sub_e7f6c0
*/
void sub_bb0480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb0480ULL || rel >= 0xbb0530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb0530 size=304 callers=0 calls=0
*/
void sub_bb0530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb0530ULL || rel >= 0xbb0660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb0660 size=304 callers=0 calls=0
*/
void sub_bb0660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb0660ULL || rel >= 0xbb0790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb0790 size=176 callers=0 calls=1
   calls: sub_e7f6c0
*/
void sub_bb0790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb0790ULL || rel >= 0xbb0840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb0840 size=176 callers=0 calls=1
   calls: sub_e7f6c0
*/
void sub_bb0840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb0840ULL || rel >= 0xbb08f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb08f0 size=304 callers=0 calls=0
*/
void sub_bb08f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb08f0ULL || rel >= 0xbb0a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb0a20 size=304 callers=0 calls=0
*/
void sub_bb0a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb0a20ULL || rel >= 0xbb0b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb0b50 size=16 callers=0 calls=0
*/
void sub_bb0b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb0b50ULL || rel >= 0xbb0b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb0b60 size=16 callers=0 calls=0
*/
void sub_bb0b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb0b60ULL || rel >= 0xbb0b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb0b70 size=16 callers=0 calls=0
*/
void sub_bb0b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb0b70ULL || rel >= 0xbb0b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb0b80 size=16 callers=0 calls=0
*/
void sub_bb0b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb0b80ULL || rel >= 0xbb0b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb0b90 size=16 callers=0 calls=0
*/
void sub_bb0b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb0b90ULL || rel >= 0xbb0ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb0ba0 size=16 callers=0 calls=0
*/
void sub_bb0ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb0ba0ULL || rel >= 0xbb0bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb0bb0 size=16 callers=0 calls=0
*/
void sub_bb0bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb0bb0ULL || rel >= 0xbb0bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb0bc0 size=16 callers=0 calls=0
*/
void sub_bb0bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb0bc0ULL || rel >= 0xbb0bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb0bd0 size=512 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_bb0bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb0bd0ULL || rel >= 0xbb0dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb0dd0 size=240 callers=0 calls=0
*/
void sub_bb0dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb0dd0ULL || rel >= 0xbb0ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb0ec0 size=240 callers=0 calls=0
*/
void sub_bb0ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb0ec0ULL || rel >= 0xbb0fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb0fb0 size=112 callers=0 calls=1
   calls: sub_7a4ab0
*/
void sub_bb0fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb0fb0ULL || rel >= 0xbb1020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb1020 size=32 callers=0 calls=0
*/
void sub_bb1020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb1020ULL || rel >= 0xbb1040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb1040 size=112 callers=0 calls=0
*/
void sub_bb1040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb1040ULL || rel >= 0xbb10b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb10b0 size=240 callers=0 calls=0
*/
void sub_bb10b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb10b0ULL || rel >= 0xbb11a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb11a0 size=16 callers=0 calls=0
*/
void sub_bb11a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb11a0ULL || rel >= 0xbb11b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb11b0 size=240 callers=0 calls=0
*/
void sub_bb11b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb11b0ULL || rel >= 0xbb12a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb12a0 size=240 callers=0 calls=0
*/
void sub_bb12a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb12a0ULL || rel >= 0xbb1390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb1390 size=112 callers=0 calls=1
   calls: sub_7a4ab0
*/
void sub_bb1390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb1390ULL || rel >= 0xbb1400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb1400 size=112 callers=0 calls=1
   calls: sub_7a4ab0
*/
void sub_bb1400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb1400ULL || rel >= 0xbb1470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb1470 size=240 callers=0 calls=0
*/
void sub_bb1470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb1470ULL || rel >= 0xbb1560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb1560 size=240 callers=0 calls=0
*/
void sub_bb1560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb1560ULL || rel >= 0xbb1650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb1650 size=16 callers=0 calls=0
*/
void sub_bb1650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb1650ULL || rel >= 0xbb1660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb1660 size=16 callers=0 calls=0
*/
void sub_bb1660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb1660ULL || rel >= 0xbb1670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb1670 size=16 callers=0 calls=0
*/
void sub_bb1670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb1670ULL || rel >= 0xbb1680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb1680 size=16 callers=0 calls=0
*/
void sub_bb1680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb1680ULL || rel >= 0xbb1690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb1690 size=16 callers=0 calls=0
*/
void sub_bb1690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb1690ULL || rel >= 0xbb16a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb16a0 size=16 callers=0 calls=0
*/
void sub_bb16a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb16a0ULL || rel >= 0xbb16b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb16b0 size=16 callers=0 calls=0
*/
void sub_bb16b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb16b0ULL || rel >= 0xbb16c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb16c0 size=16 callers=0 calls=0
*/
void sub_bb16c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb16c0ULL || rel >= 0xbb16d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb16d0 size=560 callers=25 calls=0
*/
void sub_bb16d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb16d0ULL || rel >= 0xbb1900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb1900 size=640 callers=0 calls=6
   calls: OptionBar_4, sub_5cfaf0, sub_795bc0, sub_bb4e70, sub_c39c40, sub_d0c0
   ref: OptionBar
   ref: SendRegulation
*/
void SendRegulation(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb1900ULL || rel >= 0xbb1b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb1b80 size=144 callers=0 calls=3
   calls: sub_1049bd0, sub_104ffc0, sub_bb3d50
*/
void sub_bb1b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb1b80ULL || rel >= 0xbb1c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb1c10 size=3840 callers=0 calls=44
   calls: L_co_r_button_00, L_co_r_button_00_2, sub_1049bd0, sub_104fb70, sub_1050000, sub_1064840, sub_106e130, sub_6aea40, sub_6aeb70, sub_ba3800, sub_ba4690, sub_ba60d0
   ... +32 more
*/
void sub_bb1c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb1c10ULL || rel >= 0xbb2b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb2b10 size=1120 callers=2 calls=16
   calls: sub_172bd80, sub_6cf5a0, sub_6cf8f0, sub_6cfbd0, sub_6d1070, sub_6d12e0, sub_6d13b0, sub_6d1450, sub_6d1490, sub_6d14f0, sub_6d7d80, sub_6d7e60
   ... +4 more
*/
void sub_bb2b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb2b10ULL || rel >= 0xbb2f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb2f70 size=432 callers=1 calls=1
   calls: RequestLocalConnection
*/
void sub_bb2f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb2f70ULL || rel >= 0xbb3120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb3120 size=400 callers=1 calls=1
   calls: RequestLanConnection
*/
void sub_bb3120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb3120ULL || rel >= 0xbb32b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb32b0 size=448 callers=1 calls=5
   calls: sub_6ae890, sub_6d7610, sub_bb3860, sub_bb5e90, sub_bb6eb0
*/
void sub_bb32b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb32b0ULL || rel >= 0xbb3470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb3470 size=512 callers=1 calls=9
   calls: sub_138cb20, sub_65da00, sub_65daf0, sub_6d1070, sub_6f6640, sub_bb3e90, sub_bb9110, sub_c70, sub_ce0
*/
void sub_bb3470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb3470ULL || rel >= 0xbb3670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb3670 size=176 callers=1 calls=3
   calls: sub_ba72e0, sub_eb7570, sub_eb75e0
*/
void sub_bb3670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb3670ULL || rel >= 0xbb3720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb3720 size=320 callers=1 calls=3
   calls: sub_1049bd0, sub_104b2f0, sub_138cb20
*/
void sub_bb3720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb3720ULL || rel >= 0xbb3860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb3860 size=1264 callers=2 calls=8
   calls: sub_5e2350, sub_6be8b0, sub_6bee70, sub_6d0a20, sub_6d1530, sub_6d1540, sub_6d7840, sub_6d7aa0
*/
void sub_bb3860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb3860ULL || rel >= 0xbb3d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb3d50 size=320 callers=7 calls=4
   calls: sub_6d1530, sub_6d7910, sub_89a0f0, sub_bb5420
*/
void sub_bb3d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb3d50ULL || rel >= 0xbb3e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb3e90 size=480 callers=1 calls=4
   calls: sub_65da00, sub_65daf0, sub_bb5420, sub_bb7eb0
*/
void sub_bb3e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb3e90ULL || rel >= 0xbb4070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb4070 size=48 callers=0 calls=0
*/
void sub_bb4070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb4070ULL || rel >= 0xbb40a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb40a0 size=48 callers=0 calls=0
*/
void sub_bb40a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb40a0ULL || rel >= 0xbb40d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb40d0 size=16 callers=0 calls=0
*/
void sub_bb40d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb40d0ULL || rel >= 0xbb40e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb40e0 size=16 callers=0 calls=0
*/
void sub_bb40e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb40e0ULL || rel >= 0xbb40f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb40f0 size=16 callers=0 calls=0
*/
void sub_bb40f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb40f0ULL || rel >= 0xbb4100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb4100 size=16 callers=0 calls=0
*/
void sub_bb4100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb4100ULL || rel >= 0xbb4110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb4110 size=16 callers=0 calls=0
*/
void sub_bb4110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb4110ULL || rel >= 0xbb4120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb4120 size=16 callers=0 calls=0
*/
void sub_bb4120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb4120ULL || rel >= 0xbb4130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb4130 size=32 callers=0 calls=0
*/
void sub_bb4130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb4130ULL || rel >= 0xbb4150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb4150 size=32 callers=0 calls=0
*/
void sub_bb4150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb4150ULL || rel >= 0xbb4170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb4170 size=448 callers=0 calls=3
   calls: sub_6d7ac0, sub_89b390, sub_bb4330
*/
void sub_bb4170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb4170ULL || rel >= 0xbb4330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb4330 size=304 callers=2 calls=4
   calls: sub_1652250, sub_165e060, sub_6abee0, sub_6ac290
*/
void sub_bb4330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb4330ULL || rel >= 0xbb4460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb4460 size=16 callers=0 calls=0
*/
void sub_bb4460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb4460ULL || rel >= 0xbb4470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb4470 size=80 callers=0 calls=1
   calls: sub_1061810
*/
void sub_bb4470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb4470ULL || rel >= 0xbb44c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb44c0 size=80 callers=0 calls=1
   calls: sub_1061810
*/
void sub_bb44c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb44c0ULL || rel >= 0xbb4510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb4510 size=240 callers=0 calls=0
*/
void sub_bb4510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb4510ULL || rel >= 0xbb4600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb4600 size=240 callers=0 calls=0
*/
void sub_bb4600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb4600ULL || rel >= 0xbb46f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb46f0 size=16 callers=0 calls=0
*/
void sub_bb46f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb46f0ULL || rel >= 0xbb4700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb4700 size=240 callers=0 calls=0
*/
void sub_bb4700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb4700ULL || rel >= 0xbb47f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb47f0 size=240 callers=0 calls=0
*/
void sub_bb47f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb47f0ULL || rel >= 0xbb48e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb48e0 size=16 callers=0 calls=0
*/
void sub_bb48e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb48e0ULL || rel >= 0xbb48f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb48f0 size=16 callers=0 calls=0
*/
void sub_bb48f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb48f0ULL || rel >= 0xbb4900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb4900 size=240 callers=0 calls=0
*/
void sub_bb4900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb4900ULL || rel >= 0xbb49f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb49f0 size=240 callers=0 calls=0
*/
void sub_bb49f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb49f0ULL || rel >= 0xbb4ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb4ae0 size=256 callers=0 calls=0
*/
void sub_bb4ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb4ae0ULL || rel >= 0xbb4be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb4be0 size=256 callers=0 calls=0
*/
void sub_bb4be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb4be0ULL || rel >= 0xbb4ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb4ce0 size=16 callers=0 calls=0
*/
void sub_bb4ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb4ce0ULL || rel >= 0xbb4cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb4cf0 size=16 callers=0 calls=0
*/
void sub_bb4cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb4cf0ULL || rel >= 0xbb4d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb4d00 size=16 callers=0 calls=0
*/
void sub_bb4d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb4d00ULL || rel >= 0xbb4d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb4d10 size=16 callers=0 calls=0
*/
void sub_bb4d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb4d10ULL || rel >= 0xbb4d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb4d20 size=16 callers=0 calls=0
*/
void sub_bb4d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb4d20ULL || rel >= 0xbb4d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb4d30 size=16 callers=0 calls=0
*/
void sub_bb4d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb4d30ULL || rel >= 0xbb4d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb4d40 size=304 callers=0 calls=0
*/
void sub_bb4d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb4d40ULL || rel >= 0xbb4e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb4e70 size=240 callers=1 calls=1
   calls: sub_e7f6c0
*/
void sub_bb4e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb4e70ULL || rel >= 0xbb4f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb4f60 size=320 callers=1 calls=0
*/
void sub_bb4f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb4f60ULL || rel >= 0xbb50a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb50a0 size=288 callers=2 calls=3
   calls: sub_65da00, sub_65daf0, sub_bb51c0
*/
void sub_bb50a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb50a0ULL || rel >= 0xbb51c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb51c0 size=368 callers=1 calls=3
   calls: sub_65da00, sub_65daf0, sub_70b2e0
*/
void sub_bb51c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb51c0ULL || rel >= 0xbb5330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5330 size=240 callers=3 calls=3
   calls: sub_6d7d80, sub_89a0f0, sub_bb5420
*/
void sub_bb5330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5330ULL || rel >= 0xbb5420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5420 size=208 callers=7 calls=2
   calls: sub_65da00, sub_65daf0
*/
void sub_bb5420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5420ULL || rel >= 0xbb54f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb54f0 size=32 callers=0 calls=0
*/
void sub_bb54f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb54f0ULL || rel >= 0xbb5510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5510 size=16 callers=0 calls=0
*/
void sub_bb5510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5510ULL || rel >= 0xbb5520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5520 size=16 callers=0 calls=0
*/
void sub_bb5520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5520ULL || rel >= 0xbb5530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5530 size=16 callers=0 calls=0
*/
void sub_bb5530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5530ULL || rel >= 0xbb5540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5540 size=192 callers=0 calls=2
   calls: sub_bba890, sub_e80580
*/
void sub_bb5540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5540ULL || rel >= 0xbb5600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5600 size=16 callers=0 calls=0
*/
void sub_bb5600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5600ULL || rel >= 0xbb5610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5610 size=16 callers=0 calls=0
*/
void sub_bb5610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5610ULL || rel >= 0xbb5620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5620 size=16 callers=0 calls=0
*/
void sub_bb5620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5620ULL || rel >= 0xbb5630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5630 size=16 callers=0 calls=0
*/
void sub_bb5630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5630ULL || rel >= 0xbb5640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5640 size=16 callers=0 calls=0
*/
void sub_bb5640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5640ULL || rel >= 0xbb5650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5650 size=16 callers=0 calls=0
*/
void sub_bb5650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5650ULL || rel >= 0xbb5660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5660 size=16 callers=0 calls=0
*/
void sub_bb5660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5660ULL || rel >= 0xbb5670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5670 size=16 callers=0 calls=0
*/
void sub_bb5670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5670ULL || rel >= 0xbb5680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5680 size=16 callers=0 calls=0
*/
void sub_bb5680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5680ULL || rel >= 0xbb5690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5690 size=16 callers=0 calls=0
*/
void sub_bb5690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5690ULL || rel >= 0xbb56a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb56a0 size=16 callers=0 calls=0
*/
void sub_bb56a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb56a0ULL || rel >= 0xbb56b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb56b0 size=16 callers=0 calls=0
*/
void sub_bb56b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb56b0ULL || rel >= 0xbb56c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb56c0 size=16 callers=0 calls=0
*/
void sub_bb56c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb56c0ULL || rel >= 0xbb56d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb56d0 size=16 callers=0 calls=0
*/
void sub_bb56d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb56d0ULL || rel >= 0xbb56e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb56e0 size=16 callers=0 calls=0
*/
void sub_bb56e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb56e0ULL || rel >= 0xbb56f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb56f0 size=16 callers=0 calls=0
*/
void sub_bb56f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb56f0ULL || rel >= 0xbb5700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5700 size=16 callers=0 calls=0
*/
void sub_bb5700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5700ULL || rel >= 0xbb5710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5710 size=16 callers=0 calls=0
*/
void sub_bb5710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5710ULL || rel >= 0xbb5720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5720 size=16 callers=0 calls=0
*/
void sub_bb5720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5720ULL || rel >= 0xbb5730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5730 size=64 callers=0 calls=1
   calls: sub_bb3720
*/
void sub_bb5730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5730ULL || rel >= 0xbb5770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5770 size=64 callers=0 calls=0
*/
void sub_bb5770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5770ULL || rel >= 0xbb57b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb57b0 size=48 callers=0 calls=0
*/
void sub_bb57b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb57b0ULL || rel >= 0xbb57e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb57e0 size=48 callers=0 calls=0
*/
void sub_bb57e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb57e0ULL || rel >= 0xbb5810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5810 size=48 callers=0 calls=0
*/
void sub_bb5810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5810ULL || rel >= 0xbb5840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5840 size=64 callers=0 calls=0
*/
void sub_bb5840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5840ULL || rel >= 0xbb5880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5880 size=48 callers=0 calls=0
*/
void sub_bb5880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5880ULL || rel >= 0xbb58b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb58b0 size=48 callers=0 calls=0
*/
void sub_bb58b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb58b0ULL || rel >= 0xbb58e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb58e0 size=64 callers=0 calls=0
*/
void sub_bb58e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb58e0ULL || rel >= 0xbb5920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5920 size=64 callers=0 calls=0
*/
void sub_bb5920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5920ULL || rel >= 0xbb5960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5960 size=48 callers=0 calls=0
*/
void sub_bb5960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5960ULL || rel >= 0xbb5990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5990 size=48 callers=0 calls=0
*/
void sub_bb5990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5990ULL || rel >= 0xbb59c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb59c0 size=48 callers=0 calls=0
*/
void sub_bb59c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb59c0ULL || rel >= 0xbb59f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb59f0 size=64 callers=0 calls=0
*/
void sub_bb59f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb59f0ULL || rel >= 0xbb5a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5a30 size=48 callers=0 calls=0
*/
void sub_bb5a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5a30ULL || rel >= 0xbb5a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5a60 size=48 callers=0 calls=0
*/
void sub_bb5a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5a60ULL || rel >= 0xbb5a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5a90 size=304 callers=3 calls=1
   calls: sub_5e2350
*/
void sub_bb5a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5a90ULL || rel >= 0xbb5bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5bc0 size=336 callers=0 calls=0
*/
void sub_bb5bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5bc0ULL || rel >= 0xbb5d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5d10 size=16 callers=0 calls=0
*/
void sub_bb5d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5d10ULL || rel >= 0xbb5d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5d20 size=240 callers=0 calls=0
*/
void sub_bb5d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5d20ULL || rel >= 0xbb5e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5e10 size=16 callers=0 calls=0
*/
void sub_bb5e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5e10ULL || rel >= 0xbb5e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5e20 size=16 callers=0 calls=0
*/
void sub_bb5e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5e20ULL || rel >= 0xbb5e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5e30 size=16 callers=0 calls=0
*/
void sub_bb5e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5e30ULL || rel >= 0xbb5e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5e40 size=16 callers=0 calls=0
*/
void sub_bb5e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5e40ULL || rel >= 0xbb5e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

