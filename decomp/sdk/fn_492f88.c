/* sdk functions 00492f88..004b3980 (49 of 53). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00492f88 size=8 callers=0 calls=0
*/
void sub_492f88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492f88ULL || rel >= 0x492f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492f90 size=96 callers=0 calls=0
   ref: Unknown error type
*/
void Unknown_error_type(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492f90ULL || rel >= 0x492ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492ff0 size=8 callers=0 calls=0
*/
void sub_492ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492ff0ULL || rel >= 0x492ff8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492ff8 size=40 callers=0 calls=0
*/
void sub_492ff8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492ff8ULL || rel >= 0x493020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493020 size=192 callers=0 calls=0
*/
void sub_493020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493020ULL || rel >= 0x4930e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004930e0 size=200 callers=0 calls=0
*/
void sub_4930e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4930e0ULL || rel >= 0x4931a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004931a8 size=72 callers=0 calls=0
*/
void sub_4931a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4931a8ULL || rel >= 0x4931f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004931f0 size=88 callers=0 calls=0
*/
void sub_4931f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4931f0ULL || rel >= 0x493248ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493248 size=56 callers=0 calls=0
*/
void sub_493248(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493248ULL || rel >= 0x493280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493280 size=144 callers=0 calls=0
*/
void sub_493280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493280ULL || rel >= 0x493310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493310 size=72 callers=0 calls=0
*/
void sub_493310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493310ULL || rel >= 0x493358ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493358 size=48 callers=0 calls=0
*/
void sub_493358(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493358ULL || rel >= 0x493388ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493388 size=136 callers=0 calls=0
*/
void sub_493388(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493388ULL || rel >= 0x493410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493410 size=88 callers=0 calls=0
*/
void sub_493410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493410ULL || rel >= 0x493468ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493468 size=112 callers=0 calls=0
*/
void sub_493468(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493468ULL || rel >= 0x4934d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004934d8 size=56 callers=0 calls=0
*/
void sub_4934d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4934d8ULL || rel >= 0x493510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493510 size=144 callers=0 calls=0
*/
void sub_493510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493510ULL || rel >= 0x4935a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004935a0 size=72 callers=0 calls=0
*/
void sub_4935a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4935a0ULL || rel >= 0x4935e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004935e8 size=48 callers=0 calls=0
*/
void sub_4935e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4935e8ULL || rel >= 0x493618ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493618 size=136 callers=0 calls=0
*/
void sub_493618(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493618ULL || rel >= 0x4936a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004936a0 size=88 callers=0 calls=0
*/
void sub_4936a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4936a0ULL || rel >= 0x4936f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004936f8 size=112 callers=0 calls=0
*/
void sub_4936f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4936f8ULL || rel >= 0x493768ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493768 size=144 callers=0 calls=0
*/
void sub_493768(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493768ULL || rel >= 0x4937f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004937f8 size=128 callers=0 calls=0
*/
void sub_4937f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4937f8ULL || rel >= 0x493878ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493878 size=48 callers=0 calls=0
*/
void sub_493878(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493878ULL || rel >= 0x4938a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004938a8 size=112 callers=0 calls=0
*/
void sub_4938a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4938a8ULL || rel >= 0x493918ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493918 size=144 callers=0 calls=0
*/
void sub_493918(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493918ULL || rel >= 0x4939a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004939a8 size=128 callers=0 calls=0
*/
void sub_4939a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4939a8ULL || rel >= 0x493a28ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493a28 size=48 callers=0 calls=0
*/
void sub_493a28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493a28ULL || rel >= 0x493a58ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493a58 size=112 callers=0 calls=0
*/
void sub_493a58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493a58ULL || rel >= 0x493ac8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493ac8 size=96 callers=0 calls=0
   ref: basic_string
*/
void basic_string(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493ac8ULL || rel >= 0x493b28ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493b28 size=96 callers=0 calls=0
   ref: basic_string
*/
void basic_string_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493b28ULL || rel >= 0x493b88ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493b88 size=184 callers=0 calls=0
*/
void sub_493b88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493b88ULL || rel >= 0x493c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493c40 size=136 callers=0 calls=0
*/
void sub_493c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493c40ULL || rel >= 0x493cc8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493cc8 size=184 callers=0 calls=0
*/
void sub_493cc8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493cc8ULL || rel >= 0x493d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493d80 size=136 callers=0 calls=0
*/
void sub_493d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493d80ULL || rel >= 0x493e08ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493e08 size=208 callers=0 calls=0
*/
void sub_493e08(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493e08ULL || rel >= 0x493ed8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493ed8 size=24 callers=0 calls=0
*/
void sub_493ed8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493ed8ULL || rel >= 0x493ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493ef0 size=72 callers=0 calls=0
*/
void sub_493ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493ef0ULL || rel >= 0x493f38ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493f38 size=352 callers=0 calls=0
*/
void sub_493f38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493f38ULL || rel >= 0x494098ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00494098 size=56 callers=0 calls=0
*/
void sub_494098(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x494098ULL || rel >= 0x4940d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004940d0 size=56 callers=0 calls=0
*/
void sub_4940d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4940d0ULL || rel >= 0x494108ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00494108 size=96 callers=0 calls=0
*/
void sub_494108(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x494108ULL || rel >= 0x494168ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00494168 size=424 callers=0 calls=0
*/
void sub_494168(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x494168ULL || rel >= 0x494310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00494310 size=384 callers=0 calls=0
*/
void sub_494310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x494310ULL || rel >= 0x494490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00494490 size=80 callers=0 calls=0
*/
void sub_494490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x494490ULL || rel >= 0x4944e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004944e0 size=80 callers=0 calls=0
*/
void sub_4944e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4944e0ULL || rel >= 0x494530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00494530 size=56 callers=0 calls=0
*/
void sub_494530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x494530ULL || rel >= 0x494568ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00494568 size=312 callers=0 calls=0
*/
void sub_494568(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x494568ULL || rel >= 0x4946a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004946a0 size=440 callers=0 calls=0
*/
void sub_4946a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4946a0ULL || rel >= 0x494858ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00494858 size=72 callers=0 calls=0
*/
void sub_494858(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x494858ULL || rel >= 0x4948a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004948a0 size=360 callers=0 calls=0
*/
void sub_4948a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4948a0ULL || rel >= 0x494a08ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00494a08 size=328 callers=0 calls=0
*/
void sub_494a08(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x494a08ULL || rel >= 0x494b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00494b50 size=72 callers=0 calls=0
*/
void sub_494b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x494b50ULL || rel >= 0x494b98ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00494b98 size=344 callers=0 calls=0
*/
void sub_494b98(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x494b98ULL || rel >= 0x494cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00494cf0 size=560 callers=0 calls=0
*/
void sub_494cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x494cf0ULL || rel >= 0x494f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00494f20 size=72 callers=0 calls=0
*/
void sub_494f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x494f20ULL || rel >= 0x494f68ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00494f68 size=72 callers=0 calls=0
*/
void sub_494f68(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x494f68ULL || rel >= 0x494fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00494fb0 size=528 callers=0 calls=0
*/
void sub_494fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x494fb0ULL || rel >= 0x4951c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004951c0 size=448 callers=0 calls=0
*/
void sub_4951c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4951c0ULL || rel >= 0x495380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00495380 size=184 callers=0 calls=0
*/
void sub_495380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x495380ULL || rel >= 0x495438ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00495438 size=720 callers=0 calls=0
*/
void sub_495438(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x495438ULL || rel >= 0x495708ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00495708 size=72 callers=0 calls=0
*/
void sub_495708(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x495708ULL || rel >= 0x495750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00495750 size=80 callers=0 calls=0
*/
void sub_495750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x495750ULL || rel >= 0x4957a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004957a0 size=560 callers=0 calls=0
*/
void sub_4957a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4957a0ULL || rel >= 0x4959d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004959d0 size=120 callers=0 calls=0
*/
void sub_4959d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4959d0ULL || rel >= 0x495a48ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00495a48 size=208 callers=0 calls=0
*/
void sub_495a48(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x495a48ULL || rel >= 0x495b18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00495b18 size=120 callers=0 calls=0
*/
void sub_495b18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x495b18ULL || rel >= 0x495b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00495b90 size=248 callers=0 calls=0
*/
void sub_495b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x495b90ULL || rel >= 0x495c88ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00495c88 size=80 callers=0 calls=0
*/
void sub_495c88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x495c88ULL || rel >= 0x495cd8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00495cd8 size=120 callers=0 calls=0
*/
void sub_495cd8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x495cd8ULL || rel >= 0x495d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00495d50 size=136 callers=0 calls=0
*/
void sub_495d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x495d50ULL || rel >= 0x495dd8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00495dd8 size=152 callers=0 calls=0
*/
void sub_495dd8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x495dd8ULL || rel >= 0x495e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00495e70 size=168 callers=0 calls=0
*/
void sub_495e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x495e70ULL || rel >= 0x495f18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00495f18 size=160 callers=0 calls=0
*/
void sub_495f18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x495f18ULL || rel >= 0x495fb8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00495fb8 size=288 callers=0 calls=0
   ref: string_view::substr
*/
void string_view_substr(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x495fb8ULL || rel >= 0x4960d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004960d8 size=176 callers=0 calls=1
   calls: sub_44d288
*/
void sub_4960d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4960d8ULL || rel >= 0x496188ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00496188 size=200 callers=0 calls=0
*/
void sub_496188(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x496188ULL || rel >= 0x496250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00496250 size=144 callers=0 calls=0
*/
void sub_496250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x496250ULL || rel >= 0x4962e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004962e0 size=48 callers=0 calls=0
*/
void sub_4962e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4962e0ULL || rel >= 0x496310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00496310 size=240 callers=0 calls=1
   calls: sub_44d288
   ref: allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size
*/
void allocator_T_allocate_size_t_n_n_exceeds_maximum_supporte_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x496310ULL || rel >= 0x496400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00496400 size=48 callers=0 calls=0
*/
void sub_496400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x496400ULL || rel >= 0x496430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00496430 size=240 callers=0 calls=1
   calls: sub_44d288
   ref: allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size
*/
void allocator_T_allocate_size_t_n_n_exceeds_maximum_supporte_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x496430ULL || rel >= 0x496520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00496520 size=80 callers=0 calls=0
*/
void sub_496520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x496520ULL || rel >= 0x496570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00496570 size=24 callers=0 calls=0
*/
void sub_496570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x496570ULL || rel >= 0x496588ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00496588 size=232 callers=0 calls=1
   calls: sub_44d288
*/
void sub_496588(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x496588ULL || rel >= 0x496670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00496670 size=208 callers=0 calls=1
   calls: sub_44d288
*/
void sub_496670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x496670ULL || rel >= 0x496740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00496740 size=216 callers=0 calls=1
   calls: sub_44d288
*/
void sub_496740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x496740ULL || rel >= 0x496818ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00496818 size=48 callers=0 calls=0
*/
void sub_496818(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x496818ULL || rel >= 0x496848ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00496848 size=96 callers=0 calls=0
*/
void sub_496848(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x496848ULL || rel >= 0x4968a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004968a8 size=264 callers=0 calls=1
   calls: sub_44d288
*/
void sub_4968a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4968a8ULL || rel >= 0x4969b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004969b0 size=592 callers=0 calls=1
   calls: sub_44d288
   ref: allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size
*/
void allocator_T_allocate_size_t_n_n_exceeds_maximum_supporte_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4969b0ULL || rel >= 0x496c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00496c00 size=80 callers=0 calls=0
*/
void sub_496c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x496c00ULL || rel >= 0x496c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00496c50 size=80 callers=0 calls=0
*/
void sub_496c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x496c50ULL || rel >= 0x496ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00496ca0 size=56 callers=0 calls=0
*/
void sub_496ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x496ca0ULL || rel >= 0x496cd8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00496cd8 size=168 callers=0 calls=0
*/
void sub_496cd8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x496cd8ULL || rel >= 0x496d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00496d80 size=208 callers=0 calls=1
   calls: sub_44d288
*/
void sub_496d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x496d80ULL || rel >= 0x496e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00496e50 size=72 callers=0 calls=0
*/
void sub_496e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x496e50ULL || rel >= 0x496e98ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00496e98 size=472 callers=0 calls=1
   calls: sub_44d288
   ref: allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size
*/
void allocator_T_allocate_size_t_n_n_exceeds_maximum_supporte_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x496e98ULL || rel >= 0x497070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00497070 size=432 callers=0 calls=1
   calls: sub_44d288
   ref: allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size
*/
void allocator_T_allocate_size_t_n_n_exceeds_maximum_supporte_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x497070ULL || rel >= 0x497220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00497220 size=256 callers=0 calls=1
   calls: sub_44d288
*/
void sub_497220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x497220ULL || rel >= 0x497320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00497320 size=216 callers=0 calls=1
   calls: sub_44d288
*/
void sub_497320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x497320ULL || rel >= 0x4973f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004973f8 size=328 callers=0 calls=1
   calls: sub_44d288
*/
void sub_4973f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4973f8ULL || rel >= 0x497540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00497540 size=72 callers=0 calls=0
*/
void sub_497540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x497540ULL || rel >= 0x497588ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00497588 size=72 callers=0 calls=0
*/
void sub_497588(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x497588ULL || rel >= 0x4975d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004975d0 size=336 callers=0 calls=1
   calls: sub_44d288
*/
void sub_4975d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4975d0ULL || rel >= 0x497720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00497720 size=264 callers=0 calls=1
   calls: sub_44d288
*/
void sub_497720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x497720ULL || rel >= 0x497828ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00497828 size=192 callers=0 calls=1
   calls: sub_44d288
*/
void sub_497828(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x497828ULL || rel >= 0x4978e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004978e8 size=496 callers=0 calls=1
   calls: sub_44d288
*/
void sub_4978e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4978e8ULL || rel >= 0x497ad8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00497ad8 size=72 callers=0 calls=0
*/
void sub_497ad8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x497ad8ULL || rel >= 0x497b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00497b20 size=80 callers=0 calls=0
*/
void sub_497b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x497b20ULL || rel >= 0x497b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00497b70 size=336 callers=0 calls=1
   calls: sub_44d288
*/
void sub_497b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x497b70ULL || rel >= 0x497cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00497cc0 size=128 callers=0 calls=1
   calls: sub_44d288
*/
void sub_497cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x497cc0ULL || rel >= 0x497d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00497d40 size=216 callers=0 calls=0
*/
void sub_497d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x497d40ULL || rel >= 0x497e18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00497e18 size=120 callers=0 calls=0
*/
void sub_497e18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x497e18ULL || rel >= 0x497e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00497e90 size=264 callers=0 calls=0
*/
void sub_497e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x497e90ULL || rel >= 0x497f98ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00497f98 size=88 callers=0 calls=0
*/
void sub_497f98(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x497f98ULL || rel >= 0x497ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00497ff0 size=128 callers=0 calls=0
*/
void sub_497ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x497ff0ULL || rel >= 0x498070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00498070 size=144 callers=0 calls=0
*/
void sub_498070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x498070ULL || rel >= 0x498100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00498100 size=160 callers=0 calls=0
*/
void sub_498100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x498100ULL || rel >= 0x4981a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004981a0 size=176 callers=0 calls=0
*/
void sub_4981a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4981a0ULL || rel >= 0x498250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00498250 size=160 callers=0 calls=0
*/
void sub_498250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x498250ULL || rel >= 0x4982f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004982f0 size=304 callers=0 calls=0
   ref: string_view::substr
*/
void string_view_substr_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4982f0ULL || rel >= 0x498420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00498420 size=176 callers=0 calls=1
   calls: sub_44d288
*/
void sub_498420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x498420ULL || rel >= 0x4984d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004984d0 size=200 callers=0 calls=0
*/
void sub_4984d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4984d0ULL || rel >= 0x498598ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00498598 size=240 callers=0 calls=1
   calls: sub_44d288
   ref: allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size
*/
void allocator_T_allocate_size_t_n_n_exceeds_maximum_supporte_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x498598ULL || rel >= 0x498688ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00498688 size=256 callers=0 calls=0
*/
void sub_498688(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x498688ULL || rel >= 0x498788ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00498788 size=552 callers=0 calls=0
   ref: : out of range
   ref: : no conversion
*/
void out_of_range(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x498788ULL || rel >= 0x4989b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004989b0 size=560 callers=0 calls=0
   ref: : out of range
   ref: : no conversion
*/
void out_of_range_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4989b0ULL || rel >= 0x498be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00498be0 size=456 callers=0 calls=0
   ref: : out of range
   ref: : no conversion
*/
void out_of_range_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x498be0ULL || rel >= 0x498da8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00498da8 size=464 callers=0 calls=0
   ref: : out of range
   ref: : no conversion
*/
void out_of_range_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x498da8ULL || rel >= 0x498f78ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00498f78 size=456 callers=0 calls=0
   ref: : out of range
   ref: : no conversion
*/
void out_of_range_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x498f78ULL || rel >= 0x499140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00499140 size=464 callers=0 calls=0
   ref: : out of range
   ref: : no conversion
*/
void out_of_range_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x499140ULL || rel >= 0x499310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00499310 size=456 callers=0 calls=0
   ref: : out of range
   ref: : no conversion
*/
void out_of_range_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x499310ULL || rel >= 0x4994d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004994d8 size=464 callers=0 calls=0
   ref: : out of range
   ref: : no conversion
*/
void out_of_range_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4994d8ULL || rel >= 0x4996a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004996a8 size=464 callers=0 calls=0
   ref: : out of range
   ref: : no conversion
*/
void out_of_range_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4996a8ULL || rel >= 0x499878ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00499878 size=472 callers=0 calls=0
   ref: : out of range
   ref: : no conversion
*/
void out_of_range_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x499878ULL || rel >= 0x499a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00499a50 size=456 callers=0 calls=0
   ref: : out of range
   ref: : no conversion
*/
void out_of_range_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x499a50ULL || rel >= 0x499c18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00499c18 size=464 callers=0 calls=0
   ref: : out of range
   ref: : no conversion
*/
void out_of_range_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x499c18ULL || rel >= 0x499de8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00499de8 size=456 callers=0 calls=0
   ref: : out of range
   ref: : no conversion
*/
void out_of_range_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x499de8ULL || rel >= 0x499fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00499fb0 size=464 callers=0 calls=0
   ref: : out of range
   ref: : no conversion
*/
void out_of_range_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x499fb0ULL || rel >= 0x49a180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a180 size=456 callers=0 calls=0
   ref: : out of range
   ref: : no conversion
*/
void out_of_range_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a180ULL || rel >= 0x49a348ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a348 size=464 callers=0 calls=0
   ref: : out of range
   ref: : no conversion
*/
void out_of_range_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a348ULL || rel >= 0x49a518ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a518 size=440 callers=0 calls=0
*/
void sub_49a518(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a518ULL || rel >= 0x49a6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a6d0 size=440 callers=0 calls=0
*/
void sub_49a6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a6d0ULL || rel >= 0x49a888ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a888 size=440 callers=0 calls=0
*/
void sub_49a888(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a888ULL || rel >= 0x49aa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049aa40 size=440 callers=0 calls=0
*/
void sub_49aa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49aa40ULL || rel >= 0x49abf8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049abf8 size=440 callers=0 calls=0
*/
void sub_49abf8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49abf8ULL || rel >= 0x49adb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049adb0 size=440 callers=0 calls=0
*/
void sub_49adb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49adb0ULL || rel >= 0x49af68ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049af68 size=448 callers=0 calls=0
*/
void sub_49af68(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49af68ULL || rel >= 0x49b128ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049b128 size=448 callers=0 calls=0
*/
void sub_49b128(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49b128ULL || rel >= 0x49b2e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049b2e8 size=432 callers=0 calls=0
*/
void sub_49b2e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49b2e8ULL || rel >= 0x49b498ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049b498 size=440 callers=0 calls=1
   calls: sub_44d288
*/
void sub_49b498(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49b498ULL || rel >= 0x49b650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049b650 size=440 callers=0 calls=1
   calls: sub_44d288
*/
void sub_49b650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49b650ULL || rel >= 0x49b808ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049b808 size=440 callers=0 calls=1
   calls: sub_44d288
*/
void sub_49b808(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49b808ULL || rel >= 0x49b9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049b9c0 size=440 callers=0 calls=1
   calls: sub_44d288
*/
void sub_49b9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49b9c0ULL || rel >= 0x49bb78ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049bb78 size=440 callers=0 calls=1
   calls: sub_44d288
*/
void sub_49bb78(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49bb78ULL || rel >= 0x49bd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049bd30 size=440 callers=0 calls=1
   calls: sub_44d288
*/
void sub_49bd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49bd30ULL || rel >= 0x49bee8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049bee8 size=488 callers=0 calls=1
   calls: sub_44d288
*/
void sub_49bee8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49bee8ULL || rel >= 0x49c0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049c0d0 size=488 callers=0 calls=1
   calls: sub_44d288
*/
void sub_49c0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49c0d0ULL || rel >= 0x49c2b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049c2b8 size=480 callers=0 calls=1
   calls: sub_44d288
*/
void sub_49c2b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49c2b8ULL || rel >= 0x49c498ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049c498 size=280 callers=0 calls=0
*/
void sub_49c498(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49c498ULL || rel >= 0x49c5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049c5b0 size=72 callers=0 calls=0
*/
void sub_49c5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49c5b0ULL || rel >= 0x49c5f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049c5f8 size=88 callers=0 calls=0
*/
void sub_49c5f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49c5f8ULL || rel >= 0x49c650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049c650 size=104 callers=0 calls=0
*/
void sub_49c650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49c650ULL || rel >= 0x49c6b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049c6b8 size=144 callers=0 calls=0
*/
void sub_49c6b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49c6b8ULL || rel >= 0x49c748ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049c748 size=128 callers=0 calls=0
*/
void sub_49c748(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49c748ULL || rel >= 0x49c7c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049c7c8 size=144 callers=0 calls=0
*/
void sub_49c7c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49c7c8ULL || rel >= 0x49c858ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049c858 size=128 callers=0 calls=0
*/
void sub_49c858(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49c858ULL || rel >= 0x49c8d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049c8d8 size=144 callers=0 calls=0
*/
void sub_49c8d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49c8d8ULL || rel >= 0x49c968ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049c968 size=128 callers=0 calls=0
*/
void sub_49c968(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49c968ULL || rel >= 0x49c9e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049c9e8 size=128 callers=0 calls=1
   calls: sub_44d288
*/
void sub_49c9e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49c9e8ULL || rel >= 0x49ca68ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049ca68 size=128 callers=0 calls=1
   calls: sub_44d288
*/
void sub_49ca68(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49ca68ULL || rel >= 0x49cae8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049cae8 size=88 callers=0 calls=0
*/
void sub_49cae8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49cae8ULL || rel >= 0x49cb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049cb40 size=32 callers=0 calls=0
*/
void sub_49cb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49cb40ULL || rel >= 0x49cb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049cb60 size=24 callers=0 calls=0
*/
void sub_49cb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49cb60ULL || rel >= 0x49cb78ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049cb78 size=16 callers=0 calls=0
*/
void sub_49cb78(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49cb78ULL || rel >= 0x49cb88ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049cb88 size=320 callers=0 calls=0
*/
void sub_49cb88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49cb88ULL || rel >= 0x49ccc8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049ccc8 size=104 callers=0 calls=0
*/
void sub_49ccc8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49ccc8ULL || rel >= 0x49cd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049cd30 size=56 callers=0 calls=0
*/
void sub_49cd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49cd30ULL || rel >= 0x49cd68ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049cd68 size=352 callers=0 calls=0
*/
void sub_49cd68(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49cd68ULL || rel >= 0x49cec8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049cec8 size=200 callers=0 calls=0
*/
void sub_49cec8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49cec8ULL || rel >= 0x49cf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049cf90 size=168 callers=0 calls=1
   calls: sub_44d288
*/
void sub_49cf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49cf90ULL || rel >= 0x49d038ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d038 size=184 callers=0 calls=1
   calls: sub_44d288
*/
void sub_49d038(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d038ULL || rel >= 0x49d0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d0f0 size=16 callers=0 calls=0
*/
void sub_49d0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d0f0ULL || rel >= 0x49d100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d100 size=40 callers=0 calls=0
*/
void sub_49d100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d100ULL || rel >= 0x49d128ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d128 size=48 callers=0 calls=0
*/
void sub_49d128(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d128ULL || rel >= 0x49d158ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d158 size=168 callers=0 calls=1
   calls: sub_44d288
*/
void sub_49d158(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d158ULL || rel >= 0x49d200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d200 size=184 callers=0 calls=1
   calls: sub_44d288
*/
void sub_49d200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d200ULL || rel >= 0x49d2b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d2b8 size=16 callers=0 calls=0
*/
void sub_49d2b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d2b8ULL || rel >= 0x49d2c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d2c8 size=40 callers=0 calls=0
*/
void sub_49d2c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d2c8ULL || rel >= 0x49d2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d2f0 size=48 callers=0 calls=0
*/
void sub_49d2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d2f0ULL || rel >= 0x49d320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d320 size=176 callers=0 calls=1
   calls: sub_44d288
*/
void sub_49d320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d320ULL || rel >= 0x49d3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d3d0 size=48 callers=0 calls=0
*/
void sub_49d3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d3d0ULL || rel >= 0x49d400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d400 size=48 callers=0 calls=0
*/
void sub_49d400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d400ULL || rel >= 0x49d430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d430 size=56 callers=0 calls=0
*/
void sub_49d430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d430ULL || rel >= 0x49d468ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d468 size=56 callers=0 calls=0
*/
void sub_49d468(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d468ULL || rel >= 0x49d4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d4a0 size=64 callers=0 calls=0
*/
void sub_49d4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d4a0ULL || rel >= 0x49d4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d4e0 size=64 callers=0 calls=0
*/
void sub_49d4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d4e0ULL || rel >= 0x49d520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d520 size=24 callers=0 calls=0
*/
void sub_49d520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d520ULL || rel >= 0x49d538ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d538 size=8 callers=0 calls=0
*/
void sub_49d538(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d538ULL || rel >= 0x49d540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d540 size=16 callers=0 calls=0
*/
void sub_49d540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d540ULL || rel >= 0x49d550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d550 size=72 callers=0 calls=0
*/
void sub_49d550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d550ULL || rel >= 0x49d598ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d598 size=32 callers=0 calls=0
*/
void sub_49d598(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d598ULL || rel >= 0x49d5b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d5b8 size=280 callers=0 calls=0
   ref: Unknown error %d
*/
void Unknown_error_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d5b8ULL || rel >= 0x49d6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d6d0 size=16 callers=0 calls=0
   ref: generic
*/
void generic(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d6d0ULL || rel >= 0x49d6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d6e0 size=112 callers=0 calls=0
   ref: unspecified generic_category error
*/
void unspecified_generic_category_error(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d6e0ULL || rel >= 0x49d750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d750 size=96 callers=0 calls=0
*/
void sub_49d750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d750ULL || rel >= 0x49d7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d7b0 size=16 callers=0 calls=0
   ref: system
*/
void system(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d7b0ULL || rel >= 0x49d7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d7c0 size=112 callers=0 calls=0
   ref: unspecified system_category error
*/
void unspecified_system_category_error(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d7c0ULL || rel >= 0x49d830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d830 size=248 callers=0 calls=0
*/
void sub_49d830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d830ULL || rel >= 0x49d928ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d928 size=96 callers=0 calls=0
*/
void sub_49d928(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d928ULL || rel >= 0x49d988ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d988 size=24 callers=0 calls=0
*/
void sub_49d988(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d988ULL || rel >= 0x49d9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d9a0 size=24 callers=0 calls=0
*/
void sub_49d9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d9a0ULL || rel >= 0x49d9b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d9b8 size=240 callers=0 calls=0
*/
void sub_49d9b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d9b8ULL || rel >= 0x49daa8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049daa8 size=216 callers=0 calls=0
*/
void sub_49daa8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49daa8ULL || rel >= 0x49db80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049db80 size=344 callers=0 calls=0
*/
void sub_49db80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49db80ULL || rel >= 0x49dcd8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049dcd8 size=208 callers=0 calls=0
*/
void sub_49dcd8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49dcd8ULL || rel >= 0x49dda8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049dda8 size=232 callers=0 calls=0
*/
void sub_49dda8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49dda8ULL || rel >= 0x49de90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049de90 size=360 callers=0 calls=0
*/
void sub_49de90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49de90ULL || rel >= 0x49dff8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049dff8 size=232 callers=0 calls=0
*/
void sub_49dff8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49dff8ULL || rel >= 0x49e0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e0e0 size=8 callers=0 calls=0
*/
void sub_49e0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e0e0ULL || rel >= 0x49e0e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e0e8 size=40 callers=0 calls=0
*/
void sub_49e0e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e0e8ULL || rel >= 0x49e110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e110 size=160 callers=0 calls=0
*/
void sub_49e110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e110ULL || rel >= 0x49e1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e1b0 size=8 callers=0 calls=0
*/
void sub_49e1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e1b0ULL || rel >= 0x49e1b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e1b8 size=8 callers=0 calls=0
*/
void sub_49e1b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e1b8ULL || rel >= 0x49e1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e1c0 size=8 callers=0 calls=0
*/
void sub_49e1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e1c0ULL || rel >= 0x49e1c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e1c8 size=80 callers=0 calls=1
   calls: sub_44d288
*/
void sub_49e1c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e1c8ULL || rel >= 0x49e218ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e218 size=16 callers=0 calls=0
*/
void sub_49e218(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e218ULL || rel >= 0x49e228ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e228 size=88 callers=0 calls=0
   ref: thread::join failed
*/
void thread_join_failed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e228ULL || rel >= 0x49e280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e280 size=80 callers=0 calls=0
   ref: thread::detach failed
*/
void thread_detach_failed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e280ULL || rel >= 0x49e2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e2d0 size=40 callers=0 calls=1
   calls: sub_44d288
*/
void sub_49e2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e2d0ULL || rel >= 0x49e2f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e2f8 size=24 callers=0 calls=0
*/
void sub_49e2f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e2f8ULL || rel >= 0x49e310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e310 size=144 callers=0 calls=0
   ref: __thread_specific_ptr construction failed
*/
void thread_specific_ptr_construction_failed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e310ULL || rel >= 0x49e3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e3a0 size=8 callers=0 calls=0
*/
void sub_49e3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e3a0ULL || rel >= 0x49e3a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e3a8 size=192 callers=2 calls=3
   calls: sub_44d288, sub_49e468, sub_49e480
*/
void sub_49e3a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e3a8ULL || rel >= 0x49e468ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e468 size=24 callers=1 calls=0
*/
void sub_49e468(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e468ULL || rel >= 0x49e480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e480 size=24 callers=1 calls=0
*/
void sub_49e480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e480ULL || rel >= 0x49e498ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e498 size=272 callers=0 calls=0
*/
void sub_49e498(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e498ULL || rel >= 0x49e5a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e5a8 size=240 callers=0 calls=0
*/
void sub_49e5a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e5a8ULL || rel >= 0x49e698ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e698 size=56 callers=0 calls=0
*/
void sub_49e698(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e698ULL || rel >= 0x49e6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e6d0 size=56 callers=0 calls=1
   calls: sub_49e3a8
*/
void sub_49e6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e6d0ULL || rel >= 0x49e708ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e708 size=8 callers=0 calls=0
*/
void sub_49e708(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e708ULL || rel >= 0x49e710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e710 size=8 callers=0 calls=0
*/
void sub_49e710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e710ULL || rel >= 0x49e718ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e718 size=64 callers=0 calls=1
   calls: sub_49e3a8
*/
void sub_49e718(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e718ULL || rel >= 0x49e758ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e758 size=32 callers=0 calls=1
   calls: sub_49f240
*/
void sub_49e758(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e758ULL || rel >= 0x49e778ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e778 size=24 callers=0 calls=1
   calls: sub_49f268
*/
void sub_49e778(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e778ULL || rel >= 0x49e790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e790 size=24 callers=0 calls=1
   calls: sub_49f268
*/
void sub_49e790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e790ULL || rel >= 0x49e7a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e7a8 size=24 callers=0 calls=1
   calls: sub_49f250
*/
void sub_49e7a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e7a8ULL || rel >= 0x49e7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e7c0 size=8 callers=0 calls=0
*/
void sub_49e7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e7c0ULL || rel >= 0x49e7c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e7c8 size=24 callers=0 calls=1
   calls: sub_49f260
*/
void sub_49e7c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e7c8ULL || rel >= 0x49e7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e7e0 size=24 callers=0 calls=1
   calls: sub_49f250
*/
void sub_49e7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e7e0ULL || rel >= 0x49e7f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e7f8 size=8 callers=0 calls=0
*/
void sub_49e7f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e7f8ULL || rel >= 0x49e800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e800 size=24 callers=0 calls=1
   calls: sub_49f260
*/
void sub_49e800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e800ULL || rel >= 0x49e818ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e818 size=24 callers=0 calls=1
   calls: sub_49f198
*/
void sub_49e818(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e818ULL || rel >= 0x49e830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e830 size=24 callers=0 calls=1
   calls: sub_49f1a0
*/
void sub_49e830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e830ULL || rel >= 0x49e848ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e848 size=24 callers=0 calls=1
   calls: sub_49f1a8
*/
void sub_49e848(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e848ULL || rel >= 0x49e860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e860 size=112 callers=0 calls=0
*/
void sub_49e860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e860ULL || rel >= 0x49e8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e8d0 size=24 callers=0 calls=1
   calls: sub_49f1d0
*/
void sub_49e8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e8d0ULL || rel >= 0x49e8e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e8e8 size=16 callers=0 calls=0
*/
void sub_49e8e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e8e8ULL || rel >= 0x49e8f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e8f8 size=200 callers=0 calls=1
   calls: sub_49f2a0
*/
void sub_49e8f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e8f8ULL || rel >= 0x49e9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e9c0 size=8 callers=0 calls=0
*/
void sub_49e9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e9c0ULL || rel >= 0x49e9c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e9c8 size=40 callers=0 calls=0
*/
void sub_49e9c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e9c8ULL || rel >= 0x49e9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e9f0 size=40 callers=0 calls=1
   calls: sub_49f350
*/
void sub_49e9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e9f0ULL || rel >= 0x49ea18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049ea18 size=8 callers=0 calls=0
*/
void sub_49ea18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49ea18ULL || rel >= 0x49ea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049ea20 size=112 callers=0 calls=0
*/
void sub_49ea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49ea20ULL || rel >= 0x49ea90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049ea90 size=8 callers=0 calls=0
*/
void sub_49ea90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49ea90ULL || rel >= 0x49ea98ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049ea98 size=32 callers=0 calls=0
*/
void sub_49ea98(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49ea98ULL || rel >= 0x49eab8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049eab8 size=8 callers=0 calls=0
*/
void sub_49eab8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49eab8ULL || rel >= 0x49eac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049eac0 size=32 callers=0 calls=0
*/
void sub_49eac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49eac0ULL || rel >= 0x49eae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049eae0 size=32 callers=0 calls=1
   calls: sub_49f240
*/
void sub_49eae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49eae0ULL || rel >= 0x49eb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049eb00 size=24 callers=0 calls=1
   calls: sub_49f250
*/
void sub_49eb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49eb00ULL || rel >= 0x49eb18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049eb18 size=32 callers=0 calls=1
   calls: sub_49f258
*/
void sub_49eb18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49eb18ULL || rel >= 0x49eb38ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049eb38 size=24 callers=0 calls=1
   calls: sub_49f260
*/
void sub_49eb38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49eb38ULL || rel >= 0x49eb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049eb50 size=24 callers=0 calls=1
   calls: sub_49f268
*/
void sub_49eb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49eb50ULL || rel >= 0x49eb68ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049eb68 size=24 callers=0 calls=1
   calls: sub_49f268
*/
void sub_49eb68(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49eb68ULL || rel >= 0x49eb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049eb80 size=24 callers=0 calls=1
   calls: sub_49f250
*/
void sub_49eb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49eb80ULL || rel >= 0x49eb98ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049eb98 size=32 callers=0 calls=1
   calls: sub_49f258
*/
void sub_49eb98(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49eb98ULL || rel >= 0x49ebb8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049ebb8 size=24 callers=0 calls=1
   calls: sub_49f260
*/
void sub_49ebb8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49ebb8ULL || rel >= 0x49ebd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049ebd0 size=80 callers=0 calls=0
*/
void sub_49ebd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49ebd0ULL || rel >= 0x49ec20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049ec20 size=32 callers=0 calls=0
*/
void sub_49ec20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49ec20ULL || rel >= 0x49ec40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049ec40 size=8 callers=0 calls=0
*/
void sub_49ec40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49ec40ULL || rel >= 0x49ec48ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049ec48 size=8 callers=0 calls=0
*/
void sub_49ec48(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49ec48ULL || rel >= 0x49ec50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049ec50 size=16 callers=0 calls=0
*/
void sub_49ec50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49ec50ULL || rel >= 0x49ec60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049ec60 size=80 callers=0 calls=0
*/
void sub_49ec60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49ec60ULL || rel >= 0x49ecb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049ecb0 size=80 callers=0 calls=0
*/
void sub_49ecb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49ecb0ULL || rel >= 0x49ed00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049ed00 size=208 callers=0 calls=0
*/
void sub_49ed00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49ed00ULL || rel >= 0x49edd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049edd0 size=720 callers=0 calls=0
*/
void sub_49edd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49edd0ULL || rel >= 0x49f0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f0a0 size=16 callers=0 calls=0
   ref: bad_variant_access
*/
void bad_variant_access(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f0a0ULL || rel >= 0x49f0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f0b0 size=40 callers=0 calls=0
*/
void sub_49f0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f0b0ULL || rel >= 0x49f0d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f0d8 size=96 callers=0 calls=0
   ref: vector
*/
void vector(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f0d8ULL || rel >= 0x49f138ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f138 size=96 callers=0 calls=0
   ref: vector
*/
void vector_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f138ULL || rel >= 0x49f198ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f198 size=8 callers=1 calls=0
*/
void sub_49f198(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f198ULL || rel >= 0x49f1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f1a0 size=8 callers=1 calls=0
*/
void sub_49f1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f1a0ULL || rel >= 0x49f1a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f1a8 size=8 callers=1 calls=0
*/
void sub_49f1a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f1a8ULL || rel >= 0x49f1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f1b0 size=32 callers=0 calls=0
*/
void sub_49f1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f1b0ULL || rel >= 0x49f1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f1d0 size=8 callers=1 calls=0
*/
void sub_49f1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f1d0ULL || rel >= 0x49f1d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f1d8 size=104 callers=2 calls=0
*/
void sub_49f1d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f1d8ULL || rel >= 0x49f240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f240 size=16 callers=2 calls=0
*/
void sub_49f240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f240ULL || rel >= 0x49f250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f250 size=8 callers=4 calls=0
*/
void sub_49f250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f250ULL || rel >= 0x49f258ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f258 size=8 callers=2 calls=0
*/
void sub_49f258(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f258ULL || rel >= 0x49f260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f260 size=8 callers=4 calls=0
*/
void sub_49f260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f260ULL || rel >= 0x49f268ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f268 size=8 callers=4 calls=0
*/
void sub_49f268(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f268ULL || rel >= 0x49f270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f270 size=24 callers=0 calls=0
*/
void sub_49f270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f270ULL || rel >= 0x49f288ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f288 size=24 callers=0 calls=0
*/
void sub_49f288(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f288ULL || rel >= 0x49f2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f2a0 size=152 callers=1 calls=0
*/
void sub_49f2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f2a0ULL || rel >= 0x49f338ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f338 size=8 callers=4 calls=0
*/
void sub_49f338(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f338ULL || rel >= 0x49f340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f340 size=16 callers=2 calls=0
*/
void sub_49f340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f340ULL || rel >= 0x49f350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f350 size=8 callers=1 calls=0
*/
void sub_49f350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f350ULL || rel >= 0x49f358ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f358 size=8 callers=0 calls=0
*/
void sub_49f358(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f358ULL || rel >= 0x49f360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f360 size=48 callers=4 calls=0
*/
void sub_49f360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f360ULL || rel >= 0x49f390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f390 size=32 callers=4 calls=0
*/
void sub_49f390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f390ULL || rel >= 0x49f3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f3b0 size=8 callers=0 calls=0
*/
void sub_49f3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f3b0ULL || rel >= 0x49f3b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f3b8 size=32 callers=0 calls=0
*/
void sub_49f3b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f3b8ULL || rel >= 0x49f3d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f3d8 size=8 callers=0 calls=0
*/
void sub_49f3d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f3d8ULL || rel >= 0x49f3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f3e0 size=8 callers=0 calls=0
*/
void sub_49f3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f3e0ULL || rel >= 0x49f3e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f3e8 size=8 callers=0 calls=0
*/
void sub_49f3e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f3e8ULL || rel >= 0x49f3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f3f0 size=56 callers=0 calls=0
*/
void sub_49f3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f3f0ULL || rel >= 0x49f428ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f428 size=56 callers=0 calls=0
*/
void sub_49f428(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f428ULL || rel >= 0x49f460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f460 size=56 callers=0 calls=0
*/
void sub_49f460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f460ULL || rel >= 0x49f498ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f498 size=40 callers=0 calls=0
*/
void sub_49f498(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f498ULL || rel >= 0x49f4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f4c0 size=40 callers=0 calls=0
*/
void sub_49f4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f4c0ULL || rel >= 0x49f4e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f4e8 size=368 callers=0 calls=1
   calls: sub_4b58a0
   ref: terminating with %s exception of type %s
   ref: terminating with %s exception of type %s: %s
   ref: terminating with %s foreign exception
   ref: terminating
*/
void terminating(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f4e8ULL || rel >= 0x49f658ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f658 size=32 callers=0 calls=0
   ref: unexpected
*/
void unexpected(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f658ULL || rel >= 0x49f678ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f678 size=1704 callers=0 calls=2
   calls: NodeOrString, popTrailingNodeArray
   ref: __cxa_demangle
   ref: C:\buildslave\rynda\a64-rel-stage1\src\lib\libcxxabi\src\cxa_demangle.cpp
   ref: invocation function for block in 
   ref: Parser.ForwardTemplateRefs.empty()
*/
void cxa_demangle(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f678ULL || rel >= 0x49fd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049fd20 size=3704 callers=7 calls=5
   calls: NodeOrString, popTrailingNodeArray, popTrailingNodeArray_2, string_literal, sub_4a3a18
   ref: covariant return thunk to 
   ref: typeinfo name for 
   ref: typeinfo for 
   ref: reference temporary for 
   ref: FromPosition <= Names.size()
   ref: popTrailingNodeArray
   ref: vtable for 
   ref: VTT for 
*/
void popTrailingNodeArray(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49fd20ULL || rel >= 0x4a0b98ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a0b98 size=6544 callers=41 calls=8
   calls: NodeOrString, cxa_demangle_2, popTrailingNodeArray_3, popTrailingNodeArray_5, popTrailingNodeArray_6, struct_fn, sub_4a3f90, sub_4b21e0
   ref: decltype(
   ref: char32_t
   ref: wchar_t
   ref: decltype(auto)
   ref: unsigned __int128
   ref: std::nullptr_t
   ref: unsigned char
   ref: unsigned short
*/
void NodeOrString(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a0b98ULL || rel >= 0x4a2528ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a2528 size=4488 callers=9 calls=9
   calls: cxa_demangle_2, popTrailingNodeArray, popTrailingNodeArray_3, popTrailingNodeArray_4, popTrailingNodeArray_5, string_literal, sub_4a3f90, sub_4a4d40, sub_4a4fe0
   ref: decltype(
   ref: string literal
*/
void string_literal(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a2528ULL || rel >= 0x4a36b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a36b0 size=872 callers=5 calls=3
   calls: popTrailingNodeArray, popTrailingNodeArray_2, popTrailingNodeArray_5
   ref: FromPosition <= Names.size()
   ref: popTrailingNodeArray
   ref: dropBack
   ref: C:\buildslave\rynda\a64-rel-stage1\src\lib\libcxxabi\src\cxa_demangle.cpp
   ref: Index <= size() && "dropBack() can't expand!"
*/
void popTrailingNodeArray_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a36b0ULL || rel >= 0x4a3a18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a3a18 size=760 callers=4 calls=0
*/
void sub_4a3a18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a3a18ULL || rel >= 0x4a3d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a3d10 size=8 callers=0 calls=0
*/
void sub_4a3d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a3d10ULL || rel >= 0x4a3d18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a3d18 size=8 callers=0 calls=0
*/
void sub_4a3d18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a3d18ULL || rel >= 0x4a3d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a3d20 size=8 callers=0 calls=0
*/
void sub_4a3d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a3d20ULL || rel >= 0x4a3d28ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a3d28 size=8 callers=0 calls=0
*/
void sub_4a3d28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a3d28ULL || rel >= 0x4a3d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a3d30 size=216 callers=0 calls=0
*/
void sub_4a3d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a3d30ULL || rel >= 0x4a3e08ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a3e08 size=8 callers=0 calls=0
*/
void sub_4a3e08(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a3e08ULL || rel >= 0x4a3e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a3e10 size=16 callers=0 calls=0
*/
void sub_4a3e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a3e10ULL || rel >= 0x4a3e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a3e20 size=8 callers=0 calls=0
*/
void sub_4a3e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a3e20ULL || rel >= 0x4a3e28ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a3e28 size=352 callers=0 calls=0
   ref: construction vtable for 
*/
void construction_vtable_for(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a3e28ULL || rel >= 0x4a3f88ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a3f88 size=8 callers=0 calls=0
*/
void sub_4a3f88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a3f88ULL || rel >= 0x4a3f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a3f90 size=1064 callers=3 calls=1
   calls: sub_4a4fe0
*/
void sub_4a3f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a3f90ULL || rel >= 0x4a43b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a43b8 size=1704 callers=13 calls=1
   calls: popTrailingNodeArray_2
   ref: FromPosition <= Names.size()
   ref: popTrailingNodeArray
   ref: dropBack
   ref: C:\buildslave\rynda\a64-rel-stage1\src\lib\libcxxabi\src\cxa_demangle.cpp
   ref: Index <= size() && "dropBack() can't expand!"
*/
void popTrailingNodeArray_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a43b8ULL || rel >= 0x4a4a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a4a60 size=736 callers=4 calls=0
   ref: Last != First && "Calling back() on empty vector!"
   ref: C:\buildslave\rynda\a64-rel-stage1\src\lib\libcxxabi\src\cxa_demangle.cpp
*/
void cxa_demangle_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a4a60ULL || rel >= 0x4a4d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a4d40 size=672 callers=1 calls=1
   calls: string_literal
*/
void sub_4a4d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a4d40ULL || rel >= 0x4a4fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a4fe0 size=408 callers=2 calls=0
*/
void sub_4a4fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a4fe0ULL || rel >= 0x4a5178ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a5178 size=1952 callers=3 calls=3
   calls: NodeOrString, anonymous_namespace, unnamed_35
   ref: FromPosition <= Names.size()
   ref: popTrailingNodeArray
   ref: dropBack
   ref: C:\buildslave\rynda\a64-rel-stage1\src\lib\libcxxabi\src\cxa_demangle.cpp
   ref: Index <= size() && "dropBack() can't expand!"
*/
void popTrailingNodeArray_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a5178ULL || rel >= 0x4a5918ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a5918 size=144 callers=0 calls=0
*/
void sub_4a5918(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a5918ULL || rel >= 0x4a59a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a59a8 size=16 callers=0 calls=0
*/
void sub_4a59a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a59a8ULL || rel >= 0x4a59b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a59b8 size=8 callers=0 calls=0
*/
void sub_4a59b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a59b8ULL || rel >= 0x4a59c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a59c0 size=128 callers=0 calls=0
*/
void sub_4a59c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a59c0ULL || rel >= 0x4a5a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a5a40 size=128 callers=0 calls=0
*/
void sub_4a5a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a5a40ULL || rel >= 0x4a5ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a5ac0 size=128 callers=0 calls=0
*/
void sub_4a5ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a5ac0ULL || rel >= 0x4a5b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a5b40 size=96 callers=0 calls=0
*/
void sub_4a5b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a5b40ULL || rel >= 0x4a5ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a5ba0 size=88 callers=0 calls=0
*/
void sub_4a5ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a5ba0ULL || rel >= 0x4a5bf8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a5bf8 size=88 callers=0 calls=0
*/
void sub_4a5bf8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a5bf8ULL || rel >= 0x4a5c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a5c50 size=8 callers=0 calls=0
*/
void sub_4a5c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a5c50ULL || rel >= 0x4a5c58ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a5c58 size=248 callers=0 calls=0
*/
void sub_4a5c58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a5c58ULL || rel >= 0x4a5d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a5d50 size=16 callers=0 calls=0
*/
void sub_4a5d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a5d50ULL || rel >= 0x4a5d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a5d60 size=8 callers=0 calls=0
*/
void sub_4a5d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a5d60ULL || rel >= 0x4a5d68ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a5d68 size=9688 callers=53 calls=6
   calls: NodeOrString, cxa_demangle_2, popTrailingNodeArray_2, popTrailingNodeArray_5, sub_4a8c00, sub_4a9f30
   ref: typeid (
   ref: const_cast
   ref: FromPosition <= Names.size()
   ref: popTrailingNodeArray
   ref: alignof (
   ref: noexcept (
   ref: dynamic_cast
   ref: dropBack
*/
void popTrailingNodeArray_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a5d68ULL || rel >= 0x4a8340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a8340 size=2240 callers=0 calls=2
   calls: NodeOrString, popTrailingNodeArray
   ref: wchar_t
   ref: unsigned __int128
   ref: unsigned char
   ref: unsigned short
   ref: signed char
   ref: __int128
*/
void wchar_t_fn(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a8340ULL || rel >= 0x4a8c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a8c00 size=1064 callers=1 calls=0
*/
void sub_4a8c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a8c00ULL || rel >= 0x4a9028ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a9028 size=1536 callers=0 calls=1
   calls: popTrailingNodeArray_5
*/
void sub_4a9028(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a9028ULL || rel >= 0x4a9628ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a9628 size=192 callers=0 calls=1
   calls: popTrailingNodeArray_5
*/
void sub_4a9628(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a9628ULL || rel >= 0x4a96e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a96e8 size=2120 callers=0 calls=4
   calls: anonymous_namespace, decltype_fn, popTrailingNodeArray_3, sub_4ac948
   ref: parseUnresolvedName
   ref: SoFar != nullptr
   ref: C:\buildslave\rynda\a64-rel-stage1\src\lib\libcxxabi\src\cxa_demangle.cpp
*/
void parseUnresolvedName(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a96e8ULL || rel >= 0x4a9f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a9f30 size=592 callers=5 calls=3
   calls: anonymous_namespace, popTrailingNodeArray_5, sub_4a9f30
*/
void sub_4a9f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a9f30ULL || rel >= 0x4aa180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aa180 size=368 callers=0 calls=0
*/
void sub_4aa180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aa180ULL || rel >= 0x4aa2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aa2f0 size=744 callers=0 calls=0
*/
void sub_4aa2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aa2f0ULL || rel >= 0x4aa5d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aa5d8 size=8 callers=0 calls=0
*/
void sub_4aa5d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aa5d8ULL || rel >= 0x4aa5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aa5e0 size=168 callers=0 calls=0
*/
void sub_4aa5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aa5e0ULL || rel >= 0x4aa688ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aa688 size=8 callers=0 calls=0
*/
void sub_4aa688(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aa688ULL || rel >= 0x4aa690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aa690 size=448 callers=0 calls=0
*/
void sub_4aa690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aa690ULL || rel >= 0x4aa850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aa850 size=8 callers=0 calls=0
*/
void sub_4aa850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aa850ULL || rel >= 0x4aa858ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aa858 size=648 callers=0 calls=0
*/
void sub_4aa858(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aa858ULL || rel >= 0x4aaae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aaae0 size=8 callers=0 calls=0
*/
void sub_4aaae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aaae0ULL || rel >= 0x4aaae8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aaae8 size=1040 callers=0 calls=0
*/
void sub_4aaae8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aaae8ULL || rel >= 0x4aaef8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aaef8 size=8 callers=0 calls=0
*/
void sub_4aaef8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aaef8ULL || rel >= 0x4aaf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aaf00 size=360 callers=0 calls=0
*/
void sub_4aaf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aaf00ULL || rel >= 0x4ab068ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ab068 size=8 callers=0 calls=0
*/
void sub_4ab068(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ab068ULL || rel >= 0x4ab070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ab070 size=224 callers=0 calls=0
*/
void sub_4ab070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ab070ULL || rel >= 0x4ab150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ab150 size=8 callers=0 calls=0
*/
void sub_4ab150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ab150ULL || rel >= 0x4ab158ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ab158 size=1864 callers=0 calls=1
   calls: sub_4ab8a8
*/
void sub_4ab158(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ab158ULL || rel >= 0x4ab8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ab8a0 size=8 callers=0 calls=0
*/
void sub_4ab8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ab8a0ULL || rel >= 0x4ab8a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ab8a8 size=432 callers=3 calls=0
*/
void sub_4ab8a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ab8a8ULL || rel >= 0x4aba58ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aba58 size=8 callers=0 calls=0
*/
void sub_4aba58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aba58ULL || rel >= 0x4aba60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aba60 size=864 callers=0 calls=0
*/
void sub_4aba60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aba60ULL || rel >= 0x4abdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004abdc0 size=8 callers=0 calls=0
*/
void sub_4abdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4abdc0ULL || rel >= 0x4abdc8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004abdc8 size=400 callers=0 calls=0
*/
void sub_4abdc8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4abdc8ULL || rel >= 0x4abf58ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004abf58 size=8 callers=0 calls=0
*/
void sub_4abf58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4abf58ULL || rel >= 0x4abf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004abf60 size=464 callers=0 calls=0
*/
void sub_4abf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4abf60ULL || rel >= 0x4ac130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ac130 size=8 callers=0 calls=0
*/
void sub_4ac130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ac130ULL || rel >= 0x4ac138ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ac138 size=504 callers=0 calls=0
*/
void sub_4ac138(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ac138ULL || rel >= 0x4ac330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ac330 size=8 callers=0 calls=0
*/
void sub_4ac330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ac330ULL || rel >= 0x4ac338ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ac338 size=584 callers=0 calls=0
*/
void sub_4ac338(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ac338ULL || rel >= 0x4ac580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ac580 size=8 callers=0 calls=0
*/
void sub_4ac580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ac580ULL || rel >= 0x4ac588ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ac588 size=424 callers=0 calls=0
*/
void sub_4ac588(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ac588ULL || rel >= 0x4ac730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ac730 size=8 callers=0 calls=0
*/
void sub_4ac730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ac730ULL || rel >= 0x4ac738ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ac738 size=528 callers=3 calls=2
   calls: cxa_demangle_2, popTrailingNodeArray_5
   ref: decltype(
*/
void decltype_fn(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ac738ULL || rel >= 0x4ac948ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ac948 size=696 callers=4 calls=4
   calls: anonymous_namespace, decltype_fn, popTrailingNodeArray_3, unnamed_35
*/
void sub_4ac948(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ac948ULL || rel >= 0x4acc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004acc00 size=576 callers=12 calls=0
   ref: (anonymous namespace)
*/
void anonymous_namespace(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4acc00ULL || rel >= 0x4ace40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ace40 size=248 callers=0 calls=0
*/
void sub_4ace40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ace40ULL || rel >= 0x4acf38ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004acf38 size=16 callers=0 calls=0
*/
void sub_4acf38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4acf38ULL || rel >= 0x4acf48ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004acf48 size=8 callers=0 calls=0
*/
void sub_4acf48(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4acf48ULL || rel >= 0x4acf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004acf50 size=4784 callers=2 calls=2
   calls: NodeOrString, anonymous_namespace
   ref: operator^=
   ref: operator<=
   ref: operator>>=
   ref: operator<=>
   ref: operator~
   ref: operator delete
   ref: operator>=
   ref: operator new
*/
void unnamed_35(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4acf50ULL || rel >= 0x4ae200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ae200 size=136 callers=0 calls=0
*/
void sub_4ae200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ae200ULL || rel >= 0x4ae288ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ae288 size=8 callers=0 calls=0
*/
void sub_4ae288(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ae288ULL || rel >= 0x4ae290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ae290 size=200 callers=0 calls=0
   ref: operator 
*/
void operator_fn_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ae290ULL || rel >= 0x4ae358ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ae358 size=8 callers=0 calls=0
*/
void sub_4ae358(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ae358ULL || rel >= 0x4ae360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ae360 size=208 callers=0 calls=0
   ref: operator"" 
*/
void operator_fn_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ae360ULL || rel >= 0x4ae430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ae430 size=8 callers=0 calls=0
*/
void sub_4ae430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ae430ULL || rel >= 0x4ae438ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ae438 size=184 callers=0 calls=0
*/
void sub_4ae438(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ae438ULL || rel >= 0x4ae4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ae4f0 size=16 callers=0 calls=0
*/
void sub_4ae4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ae4f0ULL || rel >= 0x4ae500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ae500 size=8 callers=0 calls=0
*/
void sub_4ae500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ae500ULL || rel >= 0x4ae508ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ae508 size=264 callers=0 calls=0
*/
void sub_4ae508(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ae508ULL || rel >= 0x4ae610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ae610 size=8 callers=0 calls=0
*/
void sub_4ae610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ae610ULL || rel >= 0x4ae618ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ae618 size=400 callers=0 calls=0
*/
void sub_4ae618(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ae618ULL || rel >= 0x4ae7a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ae7a8 size=8 callers=0 calls=0
*/
void sub_4ae7a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ae7a8ULL || rel >= 0x4ae7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ae7b0 size=568 callers=0 calls=0
*/
void sub_4ae7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ae7b0ULL || rel >= 0x4ae9e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ae9e8 size=8 callers=0 calls=0
*/
void sub_4ae9e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ae9e8ULL || rel >= 0x4ae9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ae9f0 size=584 callers=0 calls=0
*/
void sub_4ae9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ae9f0ULL || rel >= 0x4aec38ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aec38 size=8 callers=0 calls=0
*/
void sub_4aec38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aec38ULL || rel >= 0x4aec40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aec40 size=528 callers=0 calls=0
*/
void sub_4aec40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aec40ULL || rel >= 0x4aee50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aee50 size=8 callers=0 calls=0
*/
void sub_4aee50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aee50ULL || rel >= 0x4aee58ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aee58 size=360 callers=0 calls=0
*/
void sub_4aee58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aee58ULL || rel >= 0x4aefc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aefc0 size=8 callers=0 calls=0
*/
void sub_4aefc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aefc0ULL || rel >= 0x4aefc8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aefc8 size=1328 callers=0 calls=0
   ref: ::operator 
*/
void operator_fn_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aefc8ULL || rel >= 0x4af4f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004af4f8 size=8 callers=0 calls=0
*/
void sub_4af4f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4af4f8ULL || rel >= 0x4af500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004af500 size=304 callers=0 calls=0
*/
void sub_4af500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4af500ULL || rel >= 0x4af630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004af630 size=8 callers=0 calls=0
*/
void sub_4af630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4af630ULL || rel >= 0x4af638ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004af638 size=560 callers=0 calls=0
*/
void sub_4af638(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4af638ULL || rel >= 0x4af868ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004af868 size=8 callers=0 calls=0
*/
void sub_4af868(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4af868ULL || rel >= 0x4af870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004af870 size=8 callers=0 calls=0
*/
void sub_4af870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4af870ULL || rel >= 0x4af878ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004af878 size=272 callers=0 calls=1
   calls: sub_4ab8a8
   ref: sizeof...(
*/
void sizeof_fn(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4af878ULL || rel >= 0x4af988ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004af988 size=8 callers=0 calls=0
*/
void sub_4af988(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4af988ULL || rel >= 0x4af990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004af990 size=296 callers=0 calls=0
*/
void sub_4af990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4af990ULL || rel >= 0x4afab8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004afab8 size=8 callers=0 calls=0
*/
void sub_4afab8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4afab8ULL || rel >= 0x4afac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004afac0 size=200 callers=0 calls=0
*/
void sub_4afac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4afac0ULL || rel >= 0x4afb88ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004afb88 size=8 callers=0 calls=0
*/
void sub_4afb88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4afb88ULL || rel >= 0x4afb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004afb90 size=488 callers=0 calls=0
   ref: std::basic_string<char, std::char_traits<char>, std::allocator<char> >
   ref: std::basic_ostream<char, std::char_traits<char> >
   ref: std::basic_istream<char, std::char_traits<char> >
   ref: std::basic_iostream<char, std::char_traits<char> >
*/
void std_basic_ostream_char_std_char_traits_char(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4afb90ULL || rel >= 0x4afd78ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004afd78 size=120 callers=0 calls=0
   ref: basic_ostream
   ref: basic_istream
   ref: basic_string
   ref: allocator
   ref: basic_iostream
*/
void basic_iostream(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4afd78ULL || rel >= 0x4afdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004afdf0 size=8 callers=0 calls=0
*/
void sub_4afdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4afdf0ULL || rel >= 0x4afdf8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004afdf8 size=248 callers=0 calls=0
*/
void sub_4afdf8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4afdf8ULL || rel >= 0x4afef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004afef0 size=8 callers=0 calls=0
*/
void sub_4afef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4afef0ULL || rel >= 0x4afef8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004afef8 size=336 callers=0 calls=0
*/
void sub_4afef8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4afef8ULL || rel >= 0x4b0048ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b0048 size=8 callers=0 calls=0
*/
void sub_4b0048(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b0048ULL || rel >= 0x4b0050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b0050 size=320 callers=0 calls=0
*/
void sub_4b0050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b0050ULL || rel >= 0x4b0190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b0190 size=8 callers=0 calls=0
*/
void sub_4b0190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b0190ULL || rel >= 0x4b0198ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b0198 size=656 callers=0 calls=0
*/
void sub_4b0198(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b0198ULL || rel >= 0x4b0428ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b0428 size=8 callers=0 calls=0
*/
void sub_4b0428(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b0428ULL || rel >= 0x4b0430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b0430 size=464 callers=0 calls=0
*/
void sub_4b0430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b0430ULL || rel >= 0x4b0600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b0600 size=8 callers=0 calls=0
*/
void sub_4b0600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b0600ULL || rel >= 0x4b0608ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b0608 size=248 callers=0 calls=0
*/
void sub_4b0608(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b0608ULL || rel >= 0x4b0700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b0700 size=8 callers=0 calls=0
*/
void sub_4b0700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b0700ULL || rel >= 0x4b0708ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b0708 size=688 callers=0 calls=0
   ref: std::basic_string
   ref: std::string
   ref: std::ostream
   ref: std::iostream
   ref: std::istream
   ref: std::allocator
*/
void std_string(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b0708ULL || rel >= 0x4b09b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b09b8 size=136 callers=0 calls=0
   ref: string
   ref: ostream
   ref: istream
   ref: iostream
   ref: basic_string
   ref: allocator
*/
void basic_string_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b09b8ULL || rel >= 0x4b0a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b0a40 size=8 callers=0 calls=0
*/
void sub_4b0a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b0a40ULL || rel >= 0x4b0a48ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b0a48 size=104 callers=0 calls=0
*/
void sub_4b0a48(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b0a48ULL || rel >= 0x4b0ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b0ab0 size=104 callers=0 calls=0
*/
void sub_4b0ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b0ab0ULL || rel >= 0x4b0b18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b0b18 size=104 callers=0 calls=0
*/
void sub_4b0b18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b0b18ULL || rel >= 0x4b0b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b0b80 size=72 callers=0 calls=0
*/
void sub_4b0b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b0b80ULL || rel >= 0x4b0bc8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b0bc8 size=72 callers=0 calls=0
*/
void sub_4b0bc8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b0bc8ULL || rel >= 0x4b0c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b0c10 size=72 callers=0 calls=0
*/
void sub_4b0c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b0c10ULL || rel >= 0x4b0c58ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b0c58 size=8 callers=0 calls=0
*/
void sub_4b0c58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b0c58ULL || rel >= 0x4b0c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b0c60 size=544 callers=0 calls=0
*/
void sub_4b0c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b0c60ULL || rel >= 0x4b0e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b0e80 size=8 callers=0 calls=0
*/
void sub_4b0e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b0e80ULL || rel >= 0x4b0e88ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b0e88 size=160 callers=0 calls=0
*/
void sub_4b0e88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b0e88ULL || rel >= 0x4b0f28ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b0f28 size=16 callers=0 calls=0
*/
void sub_4b0f28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b0f28ULL || rel >= 0x4b0f38ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b0f38 size=8 callers=0 calls=0
*/
void sub_4b0f38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b0f38ULL || rel >= 0x4b0f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b0f40 size=200 callers=0 calls=0
*/
void sub_4b0f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b0f40ULL || rel >= 0x4b1008ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b1008 size=16 callers=0 calls=0
*/
void sub_4b1008(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b1008ULL || rel >= 0x4b1018ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b1018 size=8 callers=0 calls=0
*/
void sub_4b1018(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b1018ULL || rel >= 0x4b1020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b1020 size=296 callers=0 calls=0
*/
void sub_4b1020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b1020ULL || rel >= 0x4b1148ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b1148 size=8 callers=0 calls=0
*/
void sub_4b1148(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b1148ULL || rel >= 0x4b1150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b1150 size=472 callers=0 calls=0
   ref:  [enable_if:
*/
void enable_if(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b1150ULL || rel >= 0x4b1328ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b1328 size=8 callers=0 calls=0
*/
void sub_4b1328(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b1328ULL || rel >= 0x4b1330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b1330 size=8 callers=0 calls=0
*/
void sub_4b1330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b1330ULL || rel >= 0x4b1338ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b1338 size=8 callers=0 calls=0
*/
void sub_4b1338(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b1338ULL || rel >= 0x4b1340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b1340 size=248 callers=0 calls=0
*/
void sub_4b1340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b1340ULL || rel >= 0x4b1438ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b1438 size=1088 callers=0 calls=0
   ref:  restrict
   ref:  volatile
*/
void volatile_fn(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b1438ULL || rel >= 0x4b1878ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b1878 size=8 callers=0 calls=0
*/
void sub_4b1878(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b1878ULL || rel >= 0x4b1880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b1880 size=360 callers=0 calls=0
*/
void sub_4b1880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b1880ULL || rel >= 0x4b19e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b19e8 size=8 callers=0 calls=0
*/
void sub_4b19e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b19e8ULL || rel >= 0x4b19f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b19f0 size=2032 callers=1 calls=2
   calls: NodeOrString, popTrailingNodeArray_5
   ref: FromPosition <= Names.size()
   ref: popTrailingNodeArray
   ref: dropBack
   ref: C:\buildslave\rynda\a64-rel-stage1\src\lib\libcxxabi\src\cxa_demangle.cpp
   ref: Index <= size() && "dropBack() can't expand!"
   ref: noexcept
*/
void popTrailingNodeArray_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b19f0ULL || rel >= 0x4b21e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b21e0 size=1120 callers=3 calls=2
   calls: NodeOrString, sub_4b21e0
*/
void sub_4b21e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b21e0ULL || rel >= 0x4b2640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b2640 size=360 callers=1 calls=1
   calls: string_literal
   ref: struct
*/
void struct_fn(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b2640ULL || rel >= 0x4b27a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b27a8 size=272 callers=0 calls=0
   ref: noexcept(
*/
void noexcept(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b27a8ULL || rel >= 0x4b28b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b28b8 size=8 callers=0 calls=0
*/
void sub_4b28b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b28b8ULL || rel >= 0x4b28c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b28c0 size=464 callers=0 calls=0
*/
void sub_4b28c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b28c0ULL || rel >= 0x4b2a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b2a90 size=8 callers=0 calls=0
*/
void sub_4b2a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b2a90ULL || rel >= 0x4b2a98ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b2a98 size=8 callers=0 calls=0
*/
void sub_4b2a98(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b2a98ULL || rel >= 0x4b2aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b2aa0 size=8 callers=0 calls=0
*/
void sub_4b2aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b2aa0ULL || rel >= 0x4b2aa8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b2aa8 size=128 callers=0 calls=0
*/
void sub_4b2aa8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b2aa8ULL || rel >= 0x4b2b28ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b2b28 size=1160 callers=0 calls=0
   ref:  restrict
   ref:  volatile
*/
void volatile_fn_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b2b28ULL || rel >= 0x4b2fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b2fb0 size=8 callers=0 calls=0
*/
void sub_4b2fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b2fb0ULL || rel >= 0x4b2fb8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b2fb8 size=360 callers=0 calls=0
*/
void sub_4b2fb8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b2fb8ULL || rel >= 0x4b3120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b3120 size=8 callers=0 calls=0
*/
void sub_4b3120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b3120ULL || rel >= 0x4b3128ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b3128 size=280 callers=0 calls=0
*/
void sub_4b3128(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b3128ULL || rel >= 0x4b3240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b3240 size=8 callers=0 calls=0
*/
void sub_4b3240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b3240ULL || rel >= 0x4b3248ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b3248 size=40 callers=0 calls=0
*/
void sub_4b3248(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b3248ULL || rel >= 0x4b3270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b3270 size=40 callers=0 calls=0
*/
void sub_4b3270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b3270ULL || rel >= 0x4b3298ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b3298 size=40 callers=0 calls=0
*/
void sub_4b3298(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b3298ULL || rel >= 0x4b32c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b32c0 size=376 callers=0 calls=0
   ref:  restrict
   ref:  volatile
*/
void volatile_fn_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b32c0ULL || rel >= 0x4b3438ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b3438 size=16 callers=0 calls=0
*/
void sub_4b3438(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b3438ULL || rel >= 0x4b3448ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b3448 size=8 callers=0 calls=0
*/
void sub_4b3448(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b3448ULL || rel >= 0x4b3450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b3450 size=744 callers=0 calls=0
   ref: isString()
   ref: asString
   ref: pixel vector[
   ref: C:\buildslave\rynda\a64-rel-stage1\src\lib\libcxxabi\src\cxa_demangle.cpp
*/
void asString(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b3450ULL || rel >= 0x4b3738ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b3738 size=8 callers=0 calls=0
*/
void sub_4b3738(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b3738ULL || rel >= 0x4b3740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b3740 size=8 callers=0 calls=0
*/
void sub_4b3740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b3740ULL || rel >= 0x4b3748ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b3748 size=8 callers=0 calls=0
*/
void sub_4b3748(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b3748ULL || rel >= 0x4b3750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b3750 size=16 callers=0 calls=0
*/
void sub_4b3750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b3750ULL || rel >= 0x4b3760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b3760 size=536 callers=0 calls=0
*/
void sub_4b3760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b3760ULL || rel >= 0x4b3978ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b3978 size=8 callers=0 calls=0
*/
void sub_4b3978(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b3978ULL || rel >= 0x4b3980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b3980 size=40 callers=0 calls=0
*/
void sub_4b3980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b3980ULL || rel >= 0x4b39a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

