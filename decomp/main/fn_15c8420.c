/* main functions 015c8420..015e8d60 (186 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 015c8420 size=128 callers=2 calls=0
*/
void sub_15c8420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c8420ULL || rel >= 0x15c84a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c84a0 size=288 callers=1 calls=1
   calls: sub_15c3ee0
*/
void sub_15c84a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c84a0ULL || rel >= 0x15c85c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c85c0 size=16 callers=1 calls=0
*/
void sub_15c85c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c85c0ULL || rel >= 0x15c85d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c85d0 size=352 callers=2 calls=0
*/
void sub_15c85d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c85d0ULL || rel >= 0x15c8730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c8730 size=96 callers=1 calls=1
   calls: sub_15bca80
*/
void sub_15c8730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c8730ULL || rel >= 0x15c8790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c8790 size=160 callers=6 calls=2
   calls: InstanceTable_203, sub_15b6dc0
*/
void sub_15c8790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c8790ULL || rel >= 0x15c8830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c8830 size=144 callers=11 calls=0
*/
void sub_15c8830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c8830ULL || rel >= 0x15c88c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c88c0 size=224 callers=14 calls=0
*/
void sub_15c88c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c88c0ULL || rel >= 0x15c89a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c89a0 size=208 callers=0 calls=0
*/
void sub_15c89a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c89a0ULL || rel >= 0x15c8a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c8a70 size=48 callers=5 calls=0
*/
void sub_15c8a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c8a70ULL || rel >= 0x15c8aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c8aa0 size=48 callers=115 calls=0
*/
void sub_15c8aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c8aa0ULL || rel >= 0x15c8ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c8ad0 size=32 callers=597 calls=1
   calls: sub_15c3ee0
*/
void sub_15c8ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c8ad0ULL || rel >= 0x15c8af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c8af0 size=176 callers=23 calls=1
   calls: sub_15b8dc0
   ref: C:/home/ws/hac-appor/Pack/7923402a/OnlineCore/src/Core/Buffer.cpp
*/
void Buffer_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c8af0ULL || rel >= 0x15c8ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c8ba0 size=112 callers=2 calls=1
   calls: sub_15c3ee0
*/
void sub_15c8ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c8ba0ULL || rel >= 0x15c8c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c8c10 size=80 callers=1 calls=0
*/
void sub_15c8c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c8c10ULL || rel >= 0x15c8c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c8c60 size=64 callers=11 calls=1
   calls: sub_15c3ee0
*/
void sub_15c8c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c8c60ULL || rel >= 0x15c8ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c8ca0 size=64 callers=37 calls=1
   calls: sub_15c3ee0
*/
void sub_15c8ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c8ca0ULL || rel >= 0x15c8ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c8ce0 size=80 callers=15 calls=0
*/
void sub_15c8ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c8ce0ULL || rel >= 0x15c8d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c8d30 size=16 callers=1 calls=0
*/
void sub_15c8d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c8d30ULL || rel >= 0x15c8d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c8d40 size=16 callers=1 calls=0
*/
void sub_15c8d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c8d40ULL || rel >= 0x15c8d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c8d50 size=96 callers=0 calls=0
*/
void sub_15c8d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c8d50ULL || rel >= 0x15c8db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c8db0 size=80 callers=0 calls=0
*/
void sub_15c8db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c8db0ULL || rel >= 0x15c8e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c8e00 size=736 callers=20 calls=6
   calls: InstanceTable_206, sub_15b6e10, sub_15b8dc0, sub_15b9390, sub_15c9a60, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_205(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c8e00ULL || rel >= 0x15c90e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c90e0 size=576 callers=59 calls=6
   calls: InstanceTable_206, sub_15b8dc0, sub_15b9390, sub_15ca170, sub_15ca400, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_206(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c90e0ULL || rel >= 0x15c9320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c9320 size=48 callers=0 calls=1
   calls: InstanceTable_205
*/
void sub_15c9320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c9320ULL || rel >= 0x15c9350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c9350 size=16 callers=4 calls=0
*/
void sub_15c9350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c9350ULL || rel >= 0x15c9360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c9360 size=624 callers=134 calls=4
   calls: sub_15b6dc0, sub_15b8dc0, sub_15d0500, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_207(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c9360ULL || rel >= 0x15c95d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c95d0 size=752 callers=41 calls=5
   calls: Result_2, sub_15b8dc0, sub_15bbd10, sub_15c9a60, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_208(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c95d0ULL || rel >= 0x15c98c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c98c0 size=416 callers=1 calls=4
   calls: sub_15b8dc0, sub_15b9340, sub_6a5230, sub_6a54a0
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_209(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c98c0ULL || rel >= 0x15c9a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c9a60 size=512 callers=2 calls=2
   calls: sub_15b9390, sub_6f9720
*/
void sub_15c9a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c9a60ULL || rel >= 0x15c9c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c9c60 size=384 callers=95 calls=5
   calls: InstanceTable_208, Result_2, sub_15b6e10, sub_15b8dc0, sub_15b9390
   ref: C:/home/ws/hac-appor/Pack/7923402a/OnlineCore/src/Core/CallContext.cpp
*/
void CallContext(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c9c60ULL || rel >= 0x15c9de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c9de0 size=320 callers=1 calls=5
   calls: CallContext, InstanceTable_208, Result_2, sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c9de0ULL || rel >= 0x15c9f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c9f20 size=272 callers=3 calls=4
   calls: InstanceTable_201, InstanceTable_207, sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_211(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c9f20ULL || rel >= 0x15ca030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ca030 size=144 callers=9 calls=1
   calls: sub_15b9340
*/
void sub_15ca030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ca030ULL || rel >= 0x15ca0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ca0c0 size=176 callers=31 calls=1
   calls: sub_15b9340
*/
void sub_15ca0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ca0c0ULL || rel >= 0x15ca170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ca170 size=656 callers=3 calls=2
   calls: sub_15b9340, sub_15b9390
*/
void sub_15ca170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ca170ULL || rel >= 0x15ca400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ca400 size=432 callers=1 calls=2
   calls: InstanceTable_208, Result_2
*/
void sub_15ca400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ca400ULL || rel >= 0x15ca5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ca5b0 size=16 callers=0 calls=0
*/
void sub_15ca5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ca5b0ULL || rel >= 0x15ca5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ca5c0 size=288 callers=2 calls=7
   calls: Scheduler, sub_15baa10, sub_15baa20, sub_15bc0a0, sub_15bc130, sub_15bc160, sub_15ca890
   ref: C:/home/ws/hac-appor/Pack/7923402a/OnlineCore/src/Core/CallContext.cpp
   ref: GetState() == CallContext::CallInProgress
*/
void CallContext_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ca5c0ULL || rel >= 0x15ca6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ca6e0 size=432 callers=2 calls=9
   calls: InstanceTable_218, sub_15b8dc0, sub_15baa10, sub_15baa20, sub_15bc0a0, sub_15bc130, sub_15bc160, sub_15ca890, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
   ref: (vResult = cbCallback(object, 0)) == bErrorValue
   ref: C:/home/ws/hac-appor/Pack/7923402a/OnlineCore/src/Core/Scheduler.cpp
*/
void Scheduler(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ca6e0ULL || rel >= 0x15ca890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ca890 size=416 callers=4 calls=3
   calls: InstanceTable_219, sub_15be1a0, sub_6a5230
*/
void sub_15ca890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ca890ULL || rel >= 0x15caa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015caa30 size=16 callers=32 calls=0
*/
void sub_15caa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15caa30ULL || rel >= 0x15caa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015caa40 size=32 callers=0 calls=0
*/
void sub_15caa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15caa40ULL || rel >= 0x15caa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015caa60 size=128 callers=11 calls=1
   calls: sub_15bc1e0
*/
void sub_15caa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15caa60ULL || rel >= 0x15caae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015caae0 size=352 callers=1 calls=6
   calls: InstanceTable_208, Result, sub_15b9390, sub_15bc310, sub_15d4b50, sub_15d4b90
*/
void sub_15caae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15caae0ULL || rel >= 0x15cac40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cac40 size=96 callers=6 calls=1
   calls: sub_15bc310
*/
void sub_15cac40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cac40ULL || rel >= 0x15caca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015caca0 size=48 callers=0 calls=1
   calls: sub_15caae0
*/
void sub_15caca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15caca0ULL || rel >= 0x15cacd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cacd0 size=32 callers=0 calls=1
   calls: InstanceTable_212
*/
void sub_15cacd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cacd0ULL || rel >= 0x15cacf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cacf0 size=672 callers=1 calls=6
   calls: sub_15b6dc0, sub_15b8dc0, sub_15bc1e0, sub_15bc310, sub_15d0500, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
   ref: CallContextRegister::CheckExpiredCalls
*/
void InstanceTable_212(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cacf0ULL || rel >= 0x15caf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015caf90 size=32 callers=0 calls=1
   calls: InstanceTable_213
*/
void sub_15caf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15caf90ULL || rel >= 0x15cafb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cafb0 size=400 callers=1 calls=3
   calls: sub_15b8dc0, sub_15cb8d0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_213(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cafb0ULL || rel >= 0x15cb140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cb140 size=16 callers=0 calls=0
*/
void sub_15cb140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cb140ULL || rel >= 0x15cb150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cb150 size=768 callers=0 calls=10
   calls: InstanceTable_206, InstanceTable_208, Result_2, sub_15b8dc0, sub_15b9390, sub_15bde80, sub_15be030, sub_15ca170, sub_15cb450, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_214(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cb150ULL || rel >= 0x15cb450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cb450 size=1152 callers=2 calls=2
   calls: sub_15b9340, sub_15b9390
*/
void sub_15cb450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cb450ULL || rel >= 0x15cb8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cb8d0 size=816 callers=2 calls=3
   calls: sub_15b9390, sub_15bbef0, sub_6f9720
*/
void sub_15cb8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cb8d0ULL || rel >= 0x15cbc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cbc00 size=768 callers=4 calls=8
   calls: InstanceTable_206, InstanceTable_208, InstanceTable_215, sub_15b8dc0, sub_15b9390, sub_15ca170, sub_15cb450, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_215(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cbc00ULL || rel >= 0x15cbf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cbf00 size=192 callers=27 calls=2
   calls: sub_15b9340, sub_6a54a0
*/
void sub_15cbf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cbf00ULL || rel >= 0x15cbfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cbfc0 size=128 callers=26 calls=0
*/
void sub_15cbfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cbfc0ULL || rel >= 0x15cc040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cc040 size=32 callers=12 calls=0
*/
void sub_15cc040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cc040ULL || rel >= 0x15cc060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cc060 size=80 callers=92 calls=1
   calls: sub_15b8d60
*/
void sub_15cc060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cc060ULL || rel >= 0x15cc0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cc0b0 size=272 callers=26 calls=2
   calls: sub_15b6dc0, sub_15b9340
*/
void sub_15cc0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cc0b0ULL || rel >= 0x15cc1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cc1c0 size=96 callers=2 calls=1
   calls: sub_15b8d60
*/
void sub_15cc1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cc1c0ULL || rel >= 0x15cc220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cc220 size=16 callers=2 calls=0
*/
void sub_15cc220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cc220ULL || rel >= 0x15cc230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cc230 size=32 callers=3 calls=0
*/
void sub_15cc230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cc230ULL || rel >= 0x15cc250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cc250 size=32 callers=0 calls=0
*/
void sub_15cc250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cc250ULL || rel >= 0x15cc270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cc270 size=176 callers=2 calls=3
   calls: sub_15b8dc0, sub_15bde80, sub_15be030
   ref: C:/home/ws/hac-appor/Pack/7923402a/OnlineCore/src/Core/Chrono.cpp
*/
void Chrono(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cc270ULL || rel >= 0x15cc320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cc320 size=128 callers=2 calls=2
   calls: sub_15bde80, sub_15be030
*/
void sub_15cc320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cc320ULL || rel >= 0x15cc3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cc3a0 size=1520 callers=1 calls=16
   calls: InstantiationContext_2, Internal_Worker_Thread_ID_d, System_Components, sub_15b6dc0, sub_15b78f0, sub_15b8dc0, sub_15b9340, sub_15b9390, sub_15bc1e0, sub_15bc310, sub_15bde80, sub_15be030
   ... +4 more
   ref: CallContextRegister
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void CallContextRegister(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cc3a0ULL || rel >= 0x15cc990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cc990 size=80 callers=3 calls=0
*/
void sub_15cc990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cc990ULL || rel >= 0x15cc9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cc9e0 size=224 callers=3 calls=0
*/
void sub_15cc9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cc9e0ULL || rel >= 0x15ccac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ccac0 size=816 callers=1 calls=8
   calls: Scheduler_2, SystemComponent_3, sub_15b8dc0, sub_15b9300, sub_15b9390, sub_15c01f0, sub_15ccdf0, sub_6a5230
   ref: C:/home/ws/hac-appor/Pack/7923402a/OnlineCore/src/Core/InstantiationContext.cpp
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstantiationContext(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ccac0ULL || rel >= 0x15ccdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ccdf0 size=352 callers=3 calls=0
*/
void sub_15ccdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ccdf0ULL || rel >= 0x15ccf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ccf50 size=288 callers=2 calls=8
   calls: PreventRegularBlockCall, Result, Result_2, sub_15baa10, sub_15baa20, sub_15bc0a0, sub_15bc130, sub_15ccdf0
   ref: C:/home/ws/hac-appor/Pack/7923402a/OnlineCore/src/Core/SystemComponent.cpp
   ref: TestState()!=Terminated
*/
void SystemComponent_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ccf50ULL || rel >= 0x15cd070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cd070 size=1744 callers=1 calls=10
   calls: sub_15b9390, sub_15baa10, sub_15baa20, sub_15bc0a0, sub_15bc130, sub_15bc160, sub_15ca890, sub_15d0500, sub_15d4d20, sub_15d50b0
   ref: GetTotalNumberOfJobs() != 0
   ref: C:/home/ws/hac-appor/Pack/7923402a/OnlineCore/src/Core/Scheduler.cpp
*/
void Scheduler_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cd070ULL || rel >= 0x15cd740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cd740 size=48 callers=0 calls=1
   calls: InstantiationContext
*/
void sub_15cd740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cd740ULL || rel >= 0x15cd770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cd770 size=432 callers=6 calls=5
   calls: CallContextRegister, SDK_MW_Nintendo_NEX_4_6_8_appor, sub_15b6dc0, sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_216(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cd770ULL || rel >= 0x15cd920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cd920 size=400 callers=5 calls=3
   calls: sub_15b8dc0, sub_15bffa0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_217(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cd920ULL || rel >= 0x15cdab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cdab0 size=192 callers=2 calls=1
   calls: sub_15b8d60
*/
void sub_15cdab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cdab0ULL || rel >= 0x15cdb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cdb70 size=80 callers=1 calls=0
*/
void sub_15cdb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cdb70ULL || rel >= 0x15cdbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cdbc0 size=64 callers=3 calls=0
*/
void sub_15cdbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cdbc0ULL || rel >= 0x15cdc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cdc00 size=256 callers=2 calls=1
   calls: sub_15b8dc0
   ref: C:/home/ws/hac-appor/Pack/7923402a/OnlineCore/src/Core/InstantiationContext.cpp
   ref: C:/home/ws/hac-appor/Pack/7923402a/OnlineCore/src/Core/InstanceTable.cpp
*/
void InstantiationContext_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cdc00ULL || rel >= 0x15cdd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cdd00 size=192 callers=7 calls=1
   calls: sub_15b8dc0
   ref: C:/home/ws/hac-appor/Pack/7923402a/OnlineCore/src/Core/InstantiationContext.cpp
*/
void InstantiationContext_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cdd00ULL || rel >= 0x15cddc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cddc0 size=192 callers=0 calls=1
   calls: sub_15b8dc0
   ref: C:/home/ws/hac-appor/Pack/7923402a/OnlineCore/src/Core/InstantiationContext.cpp
*/
void InstantiationContext_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cddc0ULL || rel >= 0x15cde80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cde80 size=80 callers=0 calls=0
*/
void sub_15cde80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cde80ULL || rel >= 0x15cded0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cded0 size=80 callers=0 calls=0
*/
void sub_15cded0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cded0ULL || rel >= 0x15cdf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cdf20 size=64 callers=0 calls=0
*/
void sub_15cdf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cdf20ULL || rel >= 0x15cdf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cdf60 size=64 callers=0 calls=0
*/
void sub_15cdf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cdf60ULL || rel >= 0x15cdfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cdfa0 size=16 callers=0 calls=0
*/
void sub_15cdfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cdfa0ULL || rel >= 0x15cdfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cdfb0 size=64 callers=0 calls=0
*/
void sub_15cdfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cdfb0ULL || rel >= 0x15cdff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cdff0 size=16 callers=0 calls=0
*/
void sub_15cdff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cdff0ULL || rel >= 0x15ce000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ce000 size=16 callers=0 calls=0
*/
void sub_15ce000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ce000ULL || rel >= 0x15ce010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ce010 size=224 callers=1 calls=5
   calls: Scheduler, sub_15baa10, sub_15baa20, sub_15bc0a0, sub_15bc130
   ref: C:/home/ws/hac-appor/Pack/7923402a/OnlineCore/src/Core/Job.cpp
   ref: GetState()!=Complete
*/
void unnamed_69(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ce010ULL || rel >= 0x15ce0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ce0f0 size=32 callers=66 calls=0
*/
void sub_15ce0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ce0f0ULL || rel >= 0x15ce110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ce110 size=16 callers=0 calls=0
*/
void sub_15ce110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ce110ULL || rel >= 0x15ce120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ce120 size=64 callers=5 calls=0
*/
void sub_15ce120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ce120ULL || rel >= 0x15ce160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ce160 size=336 callers=9 calls=1
   calls: sub_15b9340
*/
void sub_15ce160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ce160ULL || rel >= 0x15ce2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ce2b0 size=256 callers=4 calls=1
   calls: sub_15b9340
*/
void sub_15ce2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ce2b0ULL || rel >= 0x15ce3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ce3b0 size=176 callers=5 calls=1
   calls: sub_15b9340
*/
void sub_15ce3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ce3b0ULL || rel >= 0x15ce460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ce460 size=256 callers=1 calls=2
   calls: sub_15aa220, sub_15bca70
*/
void sub_15ce460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ce460ULL || rel >= 0x15ce560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ce560 size=80 callers=28 calls=1
   calls: sub_15b9390
*/
void sub_15ce560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ce560ULL || rel >= 0x15ce5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ce5b0 size=80 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_15ce5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ce5b0ULL || rel >= 0x15ce600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ce600 size=16 callers=8 calls=0
*/
void sub_15ce600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ce600ULL || rel >= 0x15ce610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ce610 size=96 callers=2 calls=1
   calls: sub_15aa220
*/
void sub_15ce610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ce610ULL || rel >= 0x15ce670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ce670 size=16 callers=0 calls=0
*/
void sub_15ce670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ce670ULL || rel >= 0x15ce680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ce680 size=16 callers=0 calls=0
*/
void sub_15ce680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ce680ULL || rel >= 0x15ce690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ce690 size=32 callers=3 calls=0
*/
void sub_15ce690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ce690ULL || rel >= 0x15ce6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ce6b0 size=48 callers=1 calls=0
*/
void sub_15ce6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ce6b0ULL || rel >= 0x15ce6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ce6e0 size=192 callers=1 calls=1
   calls: sub_15b9390
*/
void sub_15ce6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ce6e0ULL || rel >= 0x15ce7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ce7a0 size=192 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_15ce7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ce7a0ULL || rel >= 0x15ce860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ce860 size=32 callers=6 calls=0
*/
void sub_15ce860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ce860ULL || rel >= 0x15ce880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ce880 size=160 callers=1 calls=1
   calls: sub_15b9340
*/
void sub_15ce880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ce880ULL || rel >= 0x15ce920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ce920 size=144 callers=1 calls=0
*/
void sub_15ce920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ce920ULL || rel >= 0x15ce9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ce9b0 size=80 callers=0 calls=2
   calls: sub_15b9300, sub_15c02a0
*/
void sub_15ce9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ce9b0ULL || rel >= 0x15cea00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cea00 size=80 callers=0 calls=2
   calls: sub_15b9300, sub_15c02a0
*/
void sub_15cea00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cea00ULL || rel >= 0x15cea50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cea50 size=864 callers=0 calls=4
   calls: sub_15b8dc0, sub_15bbdb0, sub_15bde80, sub_15be030
   ref: C:/home/ws/hac-appor/Pack/7923402a/OnlineCore/src/Core/Chrono.cpp
*/
void Chrono_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cea50ULL || rel >= 0x15cedb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cedb0 size=64 callers=0 calls=0
*/
void sub_15cedb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cedb0ULL || rel >= 0x15cedf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cedf0 size=16 callers=0 calls=0
*/
void sub_15cedf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cedf0ULL || rel >= 0x15cee00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cee00 size=16 callers=0 calls=0
*/
void sub_15cee00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cee00ULL || rel >= 0x15cee10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cee10 size=16 callers=0 calls=0
*/
void sub_15cee10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cee10ULL || rel >= 0x15cee20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cee20 size=160 callers=27 calls=0
*/
void sub_15cee20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cee20ULL || rel >= 0x15ceec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ceec0 size=192 callers=52 calls=0
*/
void sub_15ceec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ceec0ULL || rel >= 0x15cef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cef80 size=32 callers=27 calls=0
*/
void sub_15cef80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cef80ULL || rel >= 0x15cefa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cefa0 size=16 callers=27 calls=0
*/
void sub_15cefa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cefa0ULL || rel >= 0x15cefb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cefb0 size=16 callers=0 calls=0
*/
void sub_15cefb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cefb0ULL || rel >= 0x15cefc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cefc0 size=208 callers=5 calls=2
   calls: InstantiationContext_2, sub_6a5230
*/
void sub_15cefc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cefc0ULL || rel >= 0x15cf090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cf090 size=192 callers=0 calls=1
   calls: sub_15b8dc0
   ref: C:/home/ws/hac-appor/Pack/7923402a/OnlineCore/src/Core/InstantiationContext.cpp
*/
void InstantiationContext_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cf090ULL || rel >= 0x15cf150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cf150 size=64 callers=3 calls=1
   calls: sub_15be1a0
*/
void sub_15cf150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cf150ULL || rel >= 0x15cf190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cf190 size=160 callers=31 calls=1
   calls: sub_15b9340
*/
void sub_15cf190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cf190ULL || rel >= 0x15cf230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cf230 size=304 callers=29 calls=1
   calls: sub_15b9340
*/
void sub_15cf230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cf230ULL || rel >= 0x15cf360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cf360 size=96 callers=7 calls=1
   calls: sub_15cf600
*/
void sub_15cf360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cf360ULL || rel >= 0x15cf3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cf3c0 size=80 callers=73 calls=1
   calls: sub_15b9390
*/
void sub_15cf3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cf3c0ULL || rel >= 0x15cf410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cf410 size=80 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_15cf410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cf410ULL || rel >= 0x15cf460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cf460 size=48 callers=22 calls=0
*/
void sub_15cf460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cf460ULL || rel >= 0x15cf490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cf490 size=224 callers=1 calls=2
   calls: sub_15b9340, sub_15cf570
*/
void sub_15cf490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cf490ULL || rel >= 0x15cf570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cf570 size=144 callers=11 calls=1
   calls: sub_15cf490
*/
void sub_15cf570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cf570ULL || rel >= 0x15cf600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cf600 size=336 callers=1 calls=3
   calls: sub_15b9340, sub_15b9390, sub_15cf570
*/
void sub_15cf600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cf600ULL || rel >= 0x15cf750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cf750 size=288 callers=2 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_218(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cf750ULL || rel >= 0x15cf870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cf870 size=576 callers=1 calls=12
   calls: InstanceTable_218, Result_2, Result_4, sub_15b8dc0, sub_15baa10, sub_15baa20, sub_15bbd10, sub_15bc0a0, sub_15bc130, sub_15bc160, sub_15ca890, sub_6a5230
   ref: PreventRegularBlockCall
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
   ref: C:/home/ws/hac-appor/Pack/7923402a/OnlineCore/src/Core/Scheduler.cpp
*/
void PreventRegularBlockCall(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cf870ULL || rel >= 0x15cfab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cfab0 size=432 callers=1 calls=5
   calls: sub_15b6dc0, sub_15b78f0, sub_15c0230, sub_15cfc60, sub_6a5230
*/
void sub_15cfab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cfab0ULL || rel >= 0x15cfc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cfc60 size=416 callers=1 calls=3
   calls: sub_15b78f0, sub_15b8d60, sub_15c0230
*/
void sub_15cfc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cfc60ULL || rel >= 0x15cfe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015cfe00 size=800 callers=1 calls=4
   calls: sub_15b9300, sub_15ba7a0, sub_15d0120, sub_15d4d20
*/
void sub_15cfe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cfe00ULL || rel >= 0x15d0120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d0120 size=352 callers=2 calls=0
*/
void sub_15d0120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d0120ULL || rel >= 0x15d0280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d0280 size=160 callers=0 calls=0
*/
void sub_15d0280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d0280ULL || rel >= 0x15d0320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d0320 size=48 callers=0 calls=1
   calls: sub_15cfe00
*/
void sub_15d0320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d0320ULL || rel >= 0x15d0350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d0350 size=432 callers=1 calls=6
   calls: sub_15b6dc0, sub_15b74e0, sub_15b9ef0, sub_15ba370, sub_15bc310, sub_15d5880
   ref: Internal (Worker) Thread (ID %d)
*/
void Internal_Worker_Thread_ID_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d0350ULL || rel >= 0x15d0500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d0500 size=496 callers=14 calls=5
   calls: sub_15b9340, sub_15bbef0, sub_15bde80, sub_15be030, sub_6a54a0
*/
void sub_15d0500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d0500ULL || rel >= 0x15d06f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d06f0 size=32 callers=0 calls=0
*/
void sub_15d06f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d06f0ULL || rel >= 0x15d0710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d0710 size=1360 callers=1 calls=3
   calls: sub_15b9390, sub_15d0500, sub_6f9720
*/
void sub_15d0710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d0710ULL || rel >= 0x15d0c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d0c60 size=272 callers=1 calls=3
   calls: sub_15bbdb0, sub_15bde80, sub_15be030
*/
void sub_15d0c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d0c60ULL || rel >= 0x15d0d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d0d70 size=48 callers=2 calls=1
   calls: sub_15d0da0
*/
void sub_15d0d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d0d70ULL || rel >= 0x15d0da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d0da0 size=1616 callers=3 calls=5
   calls: sub_15bde80, sub_15be030, sub_15d0c60, sub_15d13f0, sub_15d1850
*/
void sub_15d0da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d0da0ULL || rel >= 0x15d13f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d13f0 size=1120 callers=1 calls=4
   calls: sub_15bde80, sub_15be030, sub_15d0710, sub_15d1850
*/
void sub_15d13f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d13f0ULL || rel >= 0x15d1850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d1850 size=480 callers=7 calls=1
   calls: sub_15d0500
*/
void sub_15d1850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d1850ULL || rel >= 0x15d1a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d1a30 size=416 callers=1 calls=4
   calls: InstanceTable_216, sub_15b8dc0, sub_15d0da0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_219(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d1a30ULL || rel >= 0x15d1bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d1bd0 size=496 callers=1 calls=4
   calls: sub_15bde80, sub_15be030, sub_15d1850, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d1bd0ULL || rel >= 0x15d1dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d1dc0 size=384 callers=4 calls=3
   calls: InstanceTable_220, sub_15be1a0, sub_6a5230
*/
void sub_15d1dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d1dc0ULL || rel >= 0x15d1f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d1f40 size=176 callers=1 calls=0
*/
void sub_15d1f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d1f40ULL || rel >= 0x15d1ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d1ff0 size=512 callers=1 calls=5
   calls: sub_15b78f0, sub_15b9340, sub_15be770, sub_15beab0, sub_6a54a0
*/
void sub_15d1ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d1ff0ULL || rel >= 0x15d21f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d21f0 size=32 callers=0 calls=0
*/
void sub_15d21f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d21f0ULL || rel >= 0x15d2210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d2210 size=240 callers=2 calls=4
   calls: sub_15b9300, sub_15b9390, sub_15d5570, sub_15d5670
*/
void sub_15d2210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d2210ULL || rel >= 0x15d2300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d2300 size=64 callers=0 calls=1
   calls: sub_15d2210
*/
void sub_15d2300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d2300ULL || rel >= 0x15d2340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d2340 size=208 callers=7 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_221(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d2340ULL || rel >= 0x15d2410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d2410 size=128 callers=2 calls=2
   calls: sub_15b9340, sub_15d2490
*/
void sub_15d2410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d2410ULL || rel >= 0x15d2490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d2490 size=656 callers=2 calls=4
   calls: sub_15b9340, sub_15beab0, sub_15d53b0, sub_6a54a0
*/
void sub_15d2490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d2490ULL || rel >= 0x15d2720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d2720 size=96 callers=1 calls=1
   calls: sub_15d2490
*/
void sub_15d2720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d2720ULL || rel >= 0x15d2780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d2780 size=272 callers=0 calls=3
   calls: sub_15b8dc0, sub_15d29a0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_222(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d2780ULL || rel >= 0x15d2890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d2890 size=272 callers=0 calls=3
   calls: sub_15b8dc0, sub_15d29a0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_223(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d2890ULL || rel >= 0x15d29a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d29a0 size=656 callers=8 calls=4
   calls: sub_15b9340, sub_15beab0, sub_15d53b0, sub_6a54a0
*/
void sub_15d29a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d29a0ULL || rel >= 0x15d2c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d2c30 size=80 callers=2 calls=1
   calls: sub_15d29a0
*/
void sub_15d2c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d2c30ULL || rel >= 0x15d2c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d2c80 size=80 callers=2 calls=1
   calls: sub_15d29a0
*/
void sub_15d2c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d2c80ULL || rel >= 0x15d2cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d2cd0 size=16 callers=1 calls=0
*/
void sub_15d2cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d2cd0ULL || rel >= 0x15d2ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d2ce0 size=64 callers=0 calls=1
   calls: sub_15ba080
*/
void sub_15d2ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d2ce0ULL || rel >= 0x15d2d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d2d20 size=32 callers=0 calls=0
*/
void sub_15d2d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d2d20ULL || rel >= 0x15d2d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d2d40 size=48 callers=0 calls=1
   calls: sub_15ba080
*/
void sub_15d2d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d2d40ULL || rel >= 0x15d2d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d2d70 size=64 callers=0 calls=1
   calls: sub_15ba080
*/
void sub_15d2d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d2d70ULL || rel >= 0x15d2db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d2db0 size=32 callers=0 calls=0
*/
void sub_15d2db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d2db0ULL || rel >= 0x15d2dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d2dd0 size=224 callers=0 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_224(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d2dd0ULL || rel >= 0x15d2eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d2eb0 size=272 callers=0 calls=1
   calls: sub_15b8d60
*/
void sub_15d2eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d2eb0ULL || rel >= 0x15d2fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d2fc0 size=16 callers=0 calls=0
*/
void sub_15d2fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d2fc0ULL || rel >= 0x15d2fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d2fd0 size=64 callers=0 calls=0
*/
void sub_15d2fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d2fd0ULL || rel >= 0x15d3010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d3010 size=16 callers=0 calls=0
*/
void sub_15d3010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d3010ULL || rel >= 0x15d3020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d3020 size=16 callers=4 calls=0
*/
void sub_15d3020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d3020ULL || rel >= 0x15d3030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d3030 size=256 callers=0 calls=0
*/
void sub_15d3030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d3030ULL || rel >= 0x15d3130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d3130 size=32 callers=0 calls=0
*/
void sub_15d3130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d3130ULL || rel >= 0x15d3150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d3150 size=176 callers=1 calls=0
*/
void sub_15d3150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d3150ULL || rel >= 0x15d3200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d3200 size=176 callers=1 calls=0
*/
void sub_15d3200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d3200ULL || rel >= 0x15d32b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d32b0 size=192 callers=0 calls=0
*/
void sub_15d32b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d32b0ULL || rel >= 0x15d3370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d3370 size=64 callers=0 calls=1
   calls: SystemComponent_3
*/
void sub_15d3370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d3370ULL || rel >= 0x15d33b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d33b0 size=384 callers=2 calls=2
   calls: sub_15b9390, sub_15bc310
*/
void sub_15d33b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d33b0ULL || rel >= 0x15d3530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d3530 size=48 callers=0 calls=1
   calls: sub_15d33b0
*/
void sub_15d3530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d3530ULL || rel >= 0x15d3560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d3560 size=48 callers=0 calls=0
*/
void sub_15d3560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d3560ULL || rel >= 0x15d3590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d3590 size=288 callers=0 calls=0
*/
void sub_15d3590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d3590ULL || rel >= 0x15d36b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d36b0 size=288 callers=0 calls=0
*/
void sub_15d36b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d36b0ULL || rel >= 0x15d37d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d37d0 size=288 callers=0 calls=0
*/
void sub_15d37d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d37d0ULL || rel >= 0x15d38f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d38f0 size=288 callers=0 calls=0
*/
void sub_15d38f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d38f0ULL || rel >= 0x15d3a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d3a10 size=448 callers=0 calls=2
   calls: sub_15cc9e0, sub_15ccdf0
*/
void sub_15d3a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d3a10ULL || rel >= 0x15d3bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d3bd0 size=512 callers=1 calls=4
   calls: sub_15b6dc0, sub_15b9340, sub_15bc1e0, sub_15bc310
   ref: System Components
*/
void System_Components(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d3bd0ULL || rel >= 0x15d3dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d3dd0 size=48 callers=0 calls=1
   calls: sub_15d33b0
*/
void sub_15d3dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d3dd0ULL || rel >= 0x15d3e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d3e00 size=160 callers=0 calls=0
*/
void sub_15d3e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d3e00ULL || rel >= 0x15d3ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d3ea0 size=592 callers=1 calls=1
   calls: sub_1c0
*/
void sub_15d3ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d3ea0ULL || rel >= 0x15d40f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d40f0 size=48 callers=0 calls=1
   calls: sub_15d3ea0
*/
void sub_15d40f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d40f0ULL || rel >= 0x15d4120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4120 size=96 callers=0 calls=1
   calls: sub_15ba080
*/
void sub_15d4120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4120ULL || rel >= 0x15d4180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4180 size=48 callers=0 calls=0
*/
void sub_15d4180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4180ULL || rel >= 0x15d41b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d41b0 size=48 callers=0 calls=1
   calls: sub_15ba080
*/
void sub_15d41b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d41b0ULL || rel >= 0x15d41e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d41e0 size=64 callers=0 calls=1
   calls: sub_15ba080
*/
void sub_15d41e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d41e0ULL || rel >= 0x15d4220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4220 size=576 callers=1 calls=0
*/
void sub_15d4220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4220ULL || rel >= 0x15d4460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4460 size=288 callers=1 calls=2
   calls: sub_15b9390, sub_15ba7a0
*/
void sub_15d4460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4460ULL || rel >= 0x15d4580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4580 size=16 callers=0 calls=0
*/
void sub_15d4580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4580ULL || rel >= 0x15d4590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4590 size=96 callers=0 calls=0
*/
void sub_15d4590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4590ULL || rel >= 0x15d45f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d45f0 size=16 callers=0 calls=0
*/
void sub_15d45f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d45f0ULL || rel >= 0x15d4600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4600 size=64 callers=0 calls=0
*/
void sub_15d4600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4600ULL || rel >= 0x15d4640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4640 size=16 callers=0 calls=0
*/
void sub_15d4640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4640ULL || rel >= 0x15d4650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4650 size=16 callers=0 calls=0
*/
void sub_15d4650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4650ULL || rel >= 0x15d4660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4660 size=16 callers=0 calls=0
*/
void sub_15d4660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4660ULL || rel >= 0x15d4670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4670 size=16 callers=0 calls=0
*/
void sub_15d4670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4670ULL || rel >= 0x15d4680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4680 size=16 callers=0 calls=0
*/
void sub_15d4680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4680ULL || rel >= 0x15d4690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4690 size=16 callers=0 calls=0
*/
void sub_15d4690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4690ULL || rel >= 0x15d46a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d46a0 size=32 callers=2 calls=0
*/
void sub_15d46a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d46a0ULL || rel >= 0x15d46c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d46c0 size=16 callers=0 calls=0
   ref: CallContextRegister
*/
void CallContextRegister_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d46c0ULL || rel >= 0x15d46d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d46d0 size=96 callers=0 calls=0
   ref: CallContextRegister
   ref: SystemComponent
*/
void CallContextRegister_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d46d0ULL || rel >= 0x15d4730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4730 size=16 callers=0 calls=0
*/
void sub_15d4730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4730ULL || rel >= 0x15d4740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4740 size=16 callers=0 calls=0
*/
void sub_15d4740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4740ULL || rel >= 0x15d4750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4750 size=16 callers=0 calls=0
*/
void sub_15d4750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4750ULL || rel >= 0x15d4760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4760 size=32 callers=0 calls=0
*/
void sub_15d4760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4760ULL || rel >= 0x15d4780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4780 size=64 callers=0 calls=1
   calls: sub_15b9300
*/
void sub_15d4780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4780ULL || rel >= 0x15d47c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d47c0 size=16 callers=0 calls=0
*/
void sub_15d47c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d47c0ULL || rel >= 0x15d47d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d47d0 size=16 callers=0 calls=0
   ref: SystemComponent
*/
void SystemComponent_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d47d0ULL || rel >= 0x15d47e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d47e0 size=48 callers=0 calls=0
   ref: SystemComponent
*/
void SystemComponent_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d47e0ULL || rel >= 0x15d4810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4810 size=16 callers=0 calls=0
*/
void sub_15d4810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4810ULL || rel >= 0x15d4820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4820 size=16 callers=0 calls=0
*/
void sub_15d4820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4820ULL || rel >= 0x15d4830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4830 size=16 callers=0 calls=0
   ref: SystemComponentGroup
*/
void SystemComponentGroup(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4830ULL || rel >= 0x15d4840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4840 size=96 callers=0 calls=0
   ref: SystemComponentGroup
   ref: SystemComponent
*/
void SystemComponentGroup_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4840ULL || rel >= 0x15d48a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d48a0 size=16 callers=0 calls=0
*/
void sub_15d48a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d48a0ULL || rel >= 0x15d48b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d48b0 size=16 callers=0 calls=0
*/
void sub_15d48b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d48b0ULL || rel >= 0x15d48c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d48c0 size=16 callers=0 calls=0
*/
void sub_15d48c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d48c0ULL || rel >= 0x15d48d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d48d0 size=16 callers=0 calls=0
*/
void sub_15d48d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d48d0ULL || rel >= 0x15d48e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d48e0 size=16 callers=0 calls=0
*/
void sub_15d48e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d48e0ULL || rel >= 0x15d48f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d48f0 size=16 callers=0 calls=0
*/
void sub_15d48f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d48f0ULL || rel >= 0x15d4900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4900 size=16 callers=0 calls=0
*/
void sub_15d4900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4900ULL || rel >= 0x15d4910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4910 size=32 callers=0 calls=0
*/
void sub_15d4910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4910ULL || rel >= 0x15d4930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4930 size=96 callers=2 calls=2
   calls: sub_15bc310, sub_15d4930
*/
void sub_15d4930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4930ULL || rel >= 0x15d4990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4990 size=32 callers=0 calls=0
*/
void sub_15d4990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4990ULL || rel >= 0x15d49b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d49b0 size=32 callers=0 calls=0
*/
void sub_15d49b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d49b0ULL || rel >= 0x15d49d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d49d0 size=384 callers=0 calls=4
   calls: InstanceTable_208, sub_15b8dc0, sub_15bbc90, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_225(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d49d0ULL || rel >= 0x15d4b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4b50 size=64 callers=4 calls=1
   calls: sub_15d4b50
*/
void sub_15d4b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4b50ULL || rel >= 0x15d4b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4b90 size=64 callers=3 calls=1
   calls: sub_15d4b90
*/
void sub_15d4b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4b90ULL || rel >= 0x15d4bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4bd0 size=96 callers=0 calls=2
   calls: sub_15b9300, sub_15c02a0
*/
void sub_15d4bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4bd0ULL || rel >= 0x15d4c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4c30 size=112 callers=0 calls=3
   calls: sub_15b9300, sub_15c02a0, sub_15d4460
*/
void sub_15d4c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4c30ULL || rel >= 0x15d4ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4ca0 size=80 callers=0 calls=1
   calls: sub_15be1a0
*/
void sub_15d4ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4ca0ULL || rel >= 0x15d4cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4cf0 size=48 callers=0 calls=1
   calls: sub_15d0da0
*/
void sub_15d4cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4cf0ULL || rel >= 0x15d4d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4d20 size=64 callers=5 calls=1
   calls: sub_15d4d20
*/
void sub_15d4d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4d20ULL || rel >= 0x15d4d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4d60 size=16 callers=0 calls=0
*/
void sub_15d4d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4d60ULL || rel >= 0x15d4d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4d70 size=368 callers=1 calls=3
   calls: InstanceTable_203, sub_15b9340, sub_6a54a0
*/
void sub_15d4d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4d70ULL || rel >= 0x15d4ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4ee0 size=32 callers=0 calls=0
*/
void sub_15d4ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4ee0ULL || rel >= 0x15d4f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4f00 size=48 callers=0 calls=0
*/
void sub_15d4f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4f00ULL || rel >= 0x15d4f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d4f30 size=224 callers=0 calls=7
   calls: null_2, sub_15bc1e0, sub_15bc310, sub_15bd4f0, sub_15bd810, sub_15bd850, sub_15bdc00
*/
void sub_15d4f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d4f30ULL || rel >= 0x15d5010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d5010 size=160 callers=0 calls=0
*/
void sub_15d5010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d5010ULL || rel >= 0x15d50b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d50b0 size=320 callers=3 calls=1
   calls: sub_15b9340
*/
void sub_15d50b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d50b0ULL || rel >= 0x15d51f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d51f0 size=48 callers=0 calls=1
   calls: sub_15d2210
*/
void sub_15d51f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d51f0ULL || rel >= 0x15d5220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d5220 size=112 callers=0 calls=1
   calls: sub_15d5570
*/
void sub_15d5220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d5220ULL || rel >= 0x15d5290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d5290 size=144 callers=0 calls=2
   calls: sub_15beab0, sub_15d5570
*/
void sub_15d5290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d5290ULL || rel >= 0x15d5320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d5320 size=144 callers=0 calls=1
   calls: sub_15d5570
*/
void sub_15d5320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d5320ULL || rel >= 0x15d53b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d53b0 size=448 callers=2 calls=2
   calls: sub_15b9340, sub_15b9390
*/
void sub_15d53b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d53b0ULL || rel >= 0x15d5570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d5570 size=256 callers=4 calls=2
   calls: sub_15b9390, sub_6f9720
*/
void sub_15d5570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d5570ULL || rel >= 0x15d5670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d5670 size=160 callers=3 calls=2
   calls: sub_15b9390, sub_15d5670
*/
void sub_15d5670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d5670ULL || rel >= 0x15d5710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d5710 size=16 callers=0 calls=0
*/
void sub_15d5710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d5710ULL || rel >= 0x15d5720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d5720 size=48 callers=0 calls=0
*/
void sub_15d5720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d5720ULL || rel >= 0x15d5750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d5750 size=160 callers=0 calls=0
*/
void sub_15d5750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d5750ULL || rel >= 0x15d57f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d57f0 size=48 callers=0 calls=1
   calls: sub_15c03c0
*/
void sub_15d57f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d57f0ULL || rel >= 0x15d5820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d5820 size=96 callers=0 calls=1
   calls: sub_15baaf0
*/
void sub_15d5820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d5820ULL || rel >= 0x15d5880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d5880 size=320 callers=1 calls=1
   calls: sub_15b9340
*/
void sub_15d5880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d5880ULL || rel >= 0x15d59c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d59c0 size=704 callers=0 calls=2
   calls: sub_15b78f0, sub_1c0
   ref: CallContextRegisterCheckExpiredCalls
   ref: ConnectionEncoding
*/
void CallContextRegisterCheckExpiredCalls(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d59c0ULL || rel >= 0x15d5c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d5c80 size=352 callers=3 calls=1
   calls: sub_15bc1e0
   ref: localhost
*/
void localhost(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d5c80ULL || rel >= 0x15d5de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d5de0 size=1184 callers=0 calls=9
   calls: sub_15bab00, sub_15bb6c0, sub_15bc1e0, sub_15bc310, sub_15bca70, sub_15bcd90, sub_15d6630, sub_15d6710, sub_15d6900
*/
void sub_15d5de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d5de0ULL || rel >= 0x15d6280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d6280 size=144 callers=3 calls=1
   calls: sub_15bc310
*/
void sub_15d6280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d6280ULL || rel >= 0x15d6310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d6310 size=688 callers=2 calls=9
   calls: sub_15b77e0, sub_15b9f90, sub_15bc1e0, sub_15bc310, sub_15bc680, sub_15bca70, sub_15bd810, sub_15bd850, sub_15bdab0
*/
void sub_15d6310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d6310ULL || rel >= 0x15d65c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d65c0 size=16 callers=3 calls=0
*/
void sub_15d65c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d65c0ULL || rel >= 0x15d65d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d65d0 size=16 callers=1 calls=0
*/
void sub_15d65d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d65d0ULL || rel >= 0x15d65e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d65e0 size=16 callers=1 calls=0
*/
void sub_15d65e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d65e0ULL || rel >= 0x15d65f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d65f0 size=16 callers=1 calls=0
*/
void sub_15d65f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d65f0ULL || rel >= 0x15d6600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d6600 size=48 callers=1 calls=1
   calls: sub_15bab00
*/
void sub_15d6600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d6600ULL || rel >= 0x15d6630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d6630 size=224 callers=4 calls=6
   calls: sub_15bab00, sub_15bb6c0, sub_15bc310, sub_15bca70, sub_15bcd90, sub_15d6900
*/
void sub_15d6630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d6630ULL || rel >= 0x15d6710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d6710 size=496 callers=3 calls=3
   calls: sub_15bc1e0, sub_15bc310, sub_15bc910
*/
void sub_15d6710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d6710ULL || rel >= 0x15d6900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d6900 size=480 callers=2 calls=3
   calls: sub_15bc1e0, sub_15bc310, sub_15bc910
*/
void sub_15d6900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d6900ULL || rel >= 0x15d6ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d6ae0 size=816 callers=1 calls=10
   calls: InstanceTable_277, InstanceTable_278, sub_15b8dc0, sub_15bc1e0, sub_15bc310, sub_15caa60, sub_15cc9e0, sub_15d6e10, sub_1618120, sub_6a5230
   ref: ConnectionManager
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void ConnectionManager(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d6ae0ULL || rel >= 0x15d6e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d6e10 size=448 callers=1 calls=4
   calls: sub_15b8d60, sub_15b9390, sub_16184e0, sub_6f9720
*/
void sub_15d6e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d6e10ULL || rel >= 0x15d6fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d6fd0 size=160 callers=0 calls=2
   calls: sub_15b9390, sub_16184e0
*/
void sub_15d6fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d6fd0ULL || rel >= 0x15d7070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d7070 size=160 callers=0 calls=3
   calls: sub_15b9390, sub_15cac40, sub_16184e0
*/
void sub_15d7070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d7070ULL || rel >= 0x15d7110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d7110 size=288 callers=1 calls=4
   calls: prudps, sub_15b8dc0, sub_1618500, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_226(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d7110ULL || rel >= 0x15d7230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d7230 size=64 callers=4 calls=1
   calls: prudps
*/
void sub_15d7230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d7230ULL || rel >= 0x15d7270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d7270 size=16 callers=1 calls=0
*/
void sub_15d7270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d7270ULL || rel >= 0x15d7280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d7280 size=16 callers=0 calls=0
*/
void sub_15d7280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d7280ULL || rel >= 0x15d7290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d7290 size=128 callers=3 calls=1
   calls: sub_15b9340
*/
void sub_15d7290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d7290ULL || rel >= 0x15d7310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d7310 size=16 callers=1 calls=0
*/
void sub_15d7310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d7310ULL || rel >= 0x15d7320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d7320 size=560 callers=2 calls=6
   calls: InstanceTable_201, JobConnectEndPoint, sub_15b6dc0, sub_15b8dc0, sub_15c5460, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_227(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d7320ULL || rel >= 0x15d7550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d7550 size=352 callers=2 calls=3
   calls: InstanceTable_201, sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_228(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d7550ULL || rel >= 0x15d76b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d76b0 size=496 callers=0 calls=5
   calls: InstanceTable_208, sub_15b8dc0, sub_15bbc90, sub_15c5e40, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_229(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d76b0ULL || rel >= 0x15d78a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d78a0 size=32 callers=8 calls=0
*/
void sub_15d78a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d78a0ULL || rel >= 0x15d78c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d78c0 size=208 callers=0 calls=4
   calls: sub_15c4e00, sub_15c7dc0, sub_15c7dd0, sub_15c8140
*/
void sub_15d78c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d78c0ULL || rel >= 0x15d7990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d7990 size=160 callers=0 calls=1
   calls: sub_15cf150
*/
void sub_15d7990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d7990ULL || rel >= 0x15d7a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d7a30 size=80 callers=3 calls=2
   calls: prudps, sub_1618200
*/
void sub_15d7a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d7a30ULL || rel >= 0x15d7a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d7a80 size=80 callers=1 calls=1
   calls: sub_15d7ad0
*/
void sub_15d7a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d7a80ULL || rel >= 0x15d7ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d7ad0 size=448 callers=5 calls=1
   calls: sub_6a5230
*/
void sub_15d7ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d7ad0ULL || rel >= 0x15d7c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d7c90 size=416 callers=4 calls=3
   calls: sub_15b6dc0, sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d7c90ULL || rel >= 0x15d7e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d7e30 size=64 callers=1 calls=1
   calls: InstanceTable_231
*/
void sub_15d7e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d7e30ULL || rel >= 0x15d7e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d7e70 size=320 callers=5 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_231(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d7e70ULL || rel >= 0x15d7fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d7fb0 size=16 callers=0 calls=0
*/
void sub_15d7fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d7fb0ULL || rel >= 0x15d7fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d7fc0 size=16 callers=0 calls=0
*/
void sub_15d7fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d7fc0ULL || rel >= 0x15d7fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d7fd0 size=48 callers=0 calls=1
   calls: Result_2
*/
void sub_15d7fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d7fd0ULL || rel >= 0x15d8000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d8000 size=48 callers=0 calls=1
   calls: Result_2
*/
void sub_15d8000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d8000ULL || rel >= 0x15d8030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d8030 size=96 callers=0 calls=1
   calls: InstanceTable_278
*/
void sub_15d8030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d8030ULL || rel >= 0x15d8090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d8090 size=80 callers=0 calls=1
   calls: InstanceTable_277
*/
void sub_15d8090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d8090ULL || rel >= 0x15d80e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d80e0 size=16 callers=0 calls=0
*/
void sub_15d80e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d80e0ULL || rel >= 0x15d80f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d80f0 size=16 callers=0 calls=0
*/
void sub_15d80f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d80f0ULL || rel >= 0x15d8100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d8100 size=16 callers=0 calls=0
*/
void sub_15d8100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d8100ULL || rel >= 0x15d8110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d8110 size=16 callers=0 calls=0
*/
void sub_15d8110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d8110ULL || rel >= 0x15d8120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d8120 size=16 callers=0 calls=0
*/
void sub_15d8120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d8120ULL || rel >= 0x15d8130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d8130 size=16 callers=0 calls=0
*/
void sub_15d8130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d8130ULL || rel >= 0x15d8140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d8140 size=16 callers=0 calls=0
*/
void sub_15d8140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d8140ULL || rel >= 0x15d8150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d8150 size=16 callers=0 calls=0
*/
void sub_15d8150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d8150ULL || rel >= 0x15d8160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d8160 size=16 callers=0 calls=0
*/
void sub_15d8160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d8160ULL || rel >= 0x15d8170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d8170 size=16 callers=0 calls=0
*/
void sub_15d8170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d8170ULL || rel >= 0x15d8180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d8180 size=16 callers=0 calls=0
*/
void sub_15d8180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d8180ULL || rel >= 0x15d8190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d8190 size=96 callers=0 calls=1
   calls: Result_2
*/
void sub_15d8190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d8190ULL || rel >= 0x15d81f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d81f0 size=16 callers=0 calls=0
*/
void sub_15d81f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d81f0ULL || rel >= 0x15d8200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d8200 size=48 callers=0 calls=1
   calls: Result_2
*/
void sub_15d8200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d8200ULL || rel >= 0x15d8230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d8230 size=48 callers=0 calls=1
   calls: Result_2
*/
void sub_15d8230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d8230ULL || rel >= 0x15d8260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d8260 size=48 callers=0 calls=1
   calls: Result_2
*/
void sub_15d8260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d8260ULL || rel >= 0x15d8290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d8290 size=48 callers=0 calls=1
   calls: Result_2
*/
void sub_15d8290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d8290ULL || rel >= 0x15d82c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d82c0 size=112 callers=0 calls=1
   calls: sub_6a5230
*/
void sub_15d82c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d82c0ULL || rel >= 0x15d8330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d8330 size=592 callers=2 calls=7
   calls: InstanceTable_208, InstantiationContext_3, Result_2, sub_15b8dc0, sub_15b9c20, sub_15c5e40, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_232(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d8330ULL || rel >= 0x15d8580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d8580 size=48 callers=0 calls=1
   calls: InstanceTable_232
*/
void sub_15d8580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d8580ULL || rel >= 0x15d85b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d85b0 size=112 callers=1 calls=1
   calls: sub_6a5230
*/
void sub_15d85b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d85b0ULL || rel >= 0x15d8620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d8620 size=32 callers=2 calls=1
   calls: sub_15baeb0
*/
void sub_15d8620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d8620ULL || rel >= 0x15d8640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d8640 size=912 callers=4 calls=6
   calls: sub_15b8dc0, sub_15bab00, sub_15bc1e0, sub_15bc310, sub_16124b0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_233(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d8640ULL || rel >= 0x15d89d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d89d0 size=16 callers=1 calls=0
*/
void sub_15d89d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d89d0ULL || rel >= 0x15d89e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d89e0 size=272 callers=1 calls=3
   calls: sub_15b8dc0, sub_15cc060, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_234(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d89e0ULL || rel >= 0x15d8af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d8af0 size=48 callers=1 calls=0
*/
void sub_15d8af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d8af0ULL || rel >= 0x15d8b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d8b20 size=48 callers=1 calls=0
*/
void sub_15d8b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d8b20ULL || rel >= 0x15d8b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d8b50 size=80 callers=0 calls=1
   calls: sub_15bc310
*/
void sub_15d8b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d8b50ULL || rel >= 0x15d8ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d8ba0 size=128 callers=0 calls=5
   calls: localhost_2, sub_15bcba0, sub_1618120, sub_16184e0, sub_1618510
*/
void sub_15d8ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d8ba0ULL || rel >= 0x15d8c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d8c20 size=464 callers=1 calls=12
   calls: InstanceTable_201, InstanceTable_230, InstanceTable_234, Result_2, sub_15b6dc0, sub_15b78f0, sub_15b8dc0, sub_15bab00, sub_15bca80, sub_15c5460, sub_15cbfc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_235(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d8c20ULL || rel >= 0x15d8df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d8df0 size=16 callers=0 calls=0
*/
void sub_15d8df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d8df0ULL || rel >= 0x15d8e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d8e00 size=208 callers=1 calls=3
   calls: sub_15b6dc0, sub_15e9900, sub_1618120
*/
void sub_15d8e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d8e00ULL || rel >= 0x15d8ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d8ed0 size=272 callers=1 calls=2
   calls: sub_15b9390, sub_1611190
*/
void sub_15d8ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d8ed0ULL || rel >= 0x15d8fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d8fe0 size=96 callers=8 calls=0
*/
void sub_15d8fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d8fe0ULL || rel >= 0x15d9040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d9040 size=96 callers=9 calls=0
*/
void sub_15d9040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d9040ULL || rel >= 0x15d90a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d90a0 size=16 callers=0 calls=0
*/
void sub_15d90a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d90a0ULL || rel >= 0x15d90b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d90b0 size=32 callers=1 calls=0
*/
void sub_15d90b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d90b0ULL || rel >= 0x15d90d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d90d0 size=96 callers=1 calls=1
   calls: Result_2
*/
void sub_15d90d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d90d0ULL || rel >= 0x15d9130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d9130 size=192 callers=2 calls=1
   calls: Result_2
*/
void sub_15d9130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d9130ULL || rel >= 0x15d91f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d91f0 size=80 callers=3 calls=2
   calls: Result_2, sub_15d9130
*/
void sub_15d91f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d91f0ULL || rel >= 0x15d9240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d9240 size=608 callers=1 calls=5
   calls: sub_15b8d60, sub_15b8dc0, sub_15baeb0, sub_15d7ad0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_236(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d9240ULL || rel >= 0x15d94a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d94a0 size=96 callers=0 calls=1
   calls: InstanceTable_277
*/
void sub_15d94a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d94a0ULL || rel >= 0x15d9500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d9500 size=96 callers=0 calls=1
   calls: InstanceTable_277
*/
void sub_15d9500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d9500ULL || rel >= 0x15d9560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d9560 size=432 callers=1 calls=7
   calls: InstanceTable_278, sub_15b6dc0, sub_15c42b0, sub_15ce160, sub_15ce560, sub_15e75c0, sub_6a5230
*/
void sub_15d9560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d9560ULL || rel >= 0x15d9710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d9710 size=448 callers=0 calls=0
*/
void sub_15d9710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d9710ULL || rel >= 0x15d98d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d98d0 size=16 callers=0 calls=0
*/
void sub_15d98d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d98d0ULL || rel >= 0x15d98e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d98e0 size=848 callers=0 calls=7
   calls: InstanceTable_237, InstanceTable_344, Result_2, sub_15b6dc0, sub_15bbf80, sub_1618200, sub_6a5230
*/
void sub_15d98e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d98e0ULL || rel >= 0x15d9c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d9c30 size=816 callers=7 calls=4
   calls: sub_15b8dc0, sub_15bbf80, sub_1618120, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_237(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d9c30ULL || rel >= 0x15d9f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015d9f60 size=1056 callers=1 calls=10
   calls: Result, Result_2, sub_15b9340, sub_15bbd10, sub_15cbfc0, sub_15cc060, sub_15d3150, sub_1610540, sub_1618120, sub_1618500
   ref: JobConnectEndPoint
*/
void JobConnectEndPoint(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d9f60ULL || rel >= 0x15da380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015da380 size=112 callers=0 calls=1
   calls: sub_15cc060
*/
void sub_15da380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15da380ULL || rel >= 0x15da3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015da3f0 size=96 callers=0 calls=1
   calls: sub_15cc060
*/
void sub_15da3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15da3f0ULL || rel >= 0x15da450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015da450 size=128 callers=0 calls=5
   calls: InstanceTable_240, InstanceTable_253, Result_2, sub_15c5ee0, sub_15d9130
*/
void sub_15da450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15da450ULL || rel >= 0x15da4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015da4d0 size=448 callers=0 calls=3
   calls: sub_15b8dc0, sub_15cc060, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_238(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15da4d0ULL || rel >= 0x15da690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015da690 size=608 callers=1 calls=4
   calls: InstanceTable_205, sub_15b9390, sub_15d3200, sub_16184e0
*/
void sub_15da690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15da690ULL || rel >= 0x15da8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015da8f0 size=32 callers=0 calls=0
*/
void sub_15da8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15da8f0ULL || rel >= 0x15da910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015da910 size=48 callers=0 calls=1
   calls: sub_15da690
*/
void sub_15da910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15da910ULL || rel >= 0x15da940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015da940 size=288 callers=1 calls=3
   calls: sub_15b8dc0, sub_15c5e40, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_239(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15da940ULL || rel >= 0x15daa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015daa60 size=592 callers=2 calls=4
   calls: InstanceTable_259, sub_15b8dc0, sub_15ea560, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15daa60ULL || rel >= 0x15dacb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015dacb0 size=32 callers=7 calls=1
   calls: sub_15ea560
*/
void sub_15dacb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dacb0ULL || rel >= 0x15dacd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015dacd0 size=16 callers=0 calls=0
*/
void sub_15dacd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dacd0ULL || rel >= 0x15dace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015dace0 size=96 callers=0 calls=2
   calls: InstanceTable_239, sub_15cc060
*/
void sub_15dace0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dace0ULL || rel >= 0x15dad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015dad40 size=112 callers=0 calls=3
   calls: InstanceTable_253, Result_2, sub_15c5ee0
*/
void sub_15dad40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dad40ULL || rel >= 0x15dadb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015dadb0 size=464 callers=0 calls=4
   calls: sub_15b8dc0, sub_15bbd10, sub_15ce0f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_241(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dadb0ULL || rel >= 0x15daf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015daf80 size=384 callers=0 calls=3
   calls: sub_15b8dc0, sub_15ce0f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_242(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15daf80ULL || rel >= 0x15db100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015db100 size=176 callers=0 calls=1
   calls: sub_15cc060
*/
void sub_15db100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15db100ULL || rel >= 0x15db1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015db1b0 size=544 callers=0 calls=6
   calls: InstanceTable_244, sub_15b8dc0, sub_15cc060, sub_15ea560, sub_1618500, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_243(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15db1b0ULL || rel >= 0x15db3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015db3d0 size=272 callers=1 calls=7
   calls: prudps, sub_15b8dc0, sub_1616220, sub_1618120, sub_1618200, sub_16184e0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_244(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15db3d0ULL || rel >= 0x15db4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015db4e0 size=160 callers=0 calls=3
   calls: InstanceTable_249, sub_15bead0, sub_15cc060
*/
void sub_15db4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15db4e0ULL || rel >= 0x15db580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015db580 size=1088 callers=0 calls=17
   calls: InstanceTable_247, InstanceTable_258, prudps, sub_15b6dc0, sub_15b8dc0, sub_15b9390, sub_15bead0, sub_15cc060, sub_15e9900, sub_15ea560, sub_1610dd0, sub_1611190
   ... +5 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_245(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15db580ULL || rel >= 0x15db9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015db9c0 size=1024 callers=0 calls=14
   calls: InstanceTable_248, InstanceTable_258, prudps, sub_15b8d60, sub_15b8dc0, sub_15b9340, sub_15b9390, sub_15cc060, sub_15ce0f0, sub_15ea560, sub_1618170, sub_1618200
   ... +2 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_246(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15db9c0ULL || rel >= 0x15dbdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015dbdc0 size=1200 callers=1 calls=18
   calls: sub_15b6dc0, sub_15b8dc0, sub_15b8ec0, sub_15b9280, sub_15b9340, sub_15bab00, sub_15bacc0, sub_15bacd0, sub_15bc1e0, sub_15bc310, sub_15bc5d0, sub_15e9900
   ... +6 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_247(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dbdc0ULL || rel >= 0x15dc270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015dc270 size=656 callers=2 calls=3
   calls: sub_15b8dc0, sub_15ea560, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_248(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dc270ULL || rel >= 0x15dc500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015dc500 size=976 callers=2 calls=13
   calls: InstanceTable_252, prudps, sub_15b6dc0, sub_15b8dc0, sub_15b9390, sub_1610dd0, sub_1611190, sub_16180e0, sub_1618110, sub_1618120, sub_1618200, sub_1618410
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_249(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dc500ULL || rel >= 0x15dc8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015dc8d0 size=288 callers=0 calls=7
   calls: CallContext, prudps, sub_15cc060, sub_15ce0f0, sub_1618170, sub_1618200, sub_1618410
*/
void sub_15dc8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dc8d0ULL || rel >= 0x15dc9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015dc9f0 size=624 callers=0 calls=9
   calls: InstanceTable_226, prudps, sub_15bbc90, sub_15bbd10, sub_15cc060, sub_15ce0f0, sub_1618170, sub_1618200, sub_1618410
*/
void sub_15dc9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dc9f0ULL || rel >= 0x15dcc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015dcc60 size=352 callers=0 calls=3
   calls: sub_15bbc90, sub_15cc060, sub_15ce0f0
*/
void sub_15dcc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dcc60ULL || rel >= 0x15dcdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015dcdc0 size=240 callers=0 calls=5
   calls: InstanceTable_240, InstanceTable_253, Result_2, sub_15c5ee0, sub_15ea560
*/
void sub_15dcdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dcdc0ULL || rel >= 0x15dceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015dceb0 size=528 callers=0 calls=7
   calls: prudps, sub_15b8dc0, sub_15cc060, sub_1618170, sub_1618200, sub_1618410, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dceb0ULL || rel >= 0x15dd0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015dd0c0 size=736 callers=0 calls=13
   calls: InstanceTable_249, prudps, sub_15b6dc0, sub_15b8dc0, sub_15b9390, sub_15cc060, sub_1610dd0, sub_1611190, sub_1618120, sub_1618170, sub_1618200, sub_1618410
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_251(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dd0c0ULL || rel >= 0x15dd3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015dd3a0 size=64 callers=4 calls=2
   calls: prudps, sub_1618410
*/
void sub_15dd3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dd3a0ULL || rel >= 0x15dd3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015dd3e0 size=832 callers=1 calls=8
   calls: sub_15b6dc0, sub_15b8dc0, sub_15b9340, sub_15b9390, sub_15e9900, sub_15ea560, sub_1618120, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_252(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dd3e0ULL || rel >= 0x15dd720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015dd720 size=64 callers=7 calls=1
   calls: prudps
*/
void sub_15dd720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dd720ULL || rel >= 0x15dd760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015dd760 size=240 callers=3 calls=4
   calls: InstanceTable_208, sub_15b8dc0, sub_15c5e40, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_253(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dd760ULL || rel >= 0x15dd850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015dd850 size=32 callers=2 calls=1
   calls: sub_15ea560
*/
void sub_15dd850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dd850ULL || rel >= 0x15dd870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015dd870 size=128 callers=0 calls=0
*/
void sub_15dd870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dd870ULL || rel >= 0x15dd8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015dd8f0 size=16 callers=0 calls=0
*/
void sub_15dd8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dd8f0ULL || rel >= 0x15dd900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015dd900 size=32 callers=0 calls=0
*/
void sub_15dd900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dd900ULL || rel >= 0x15dd920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015dd920 size=80 callers=0 calls=1
   calls: sub_15ceec0
*/
void sub_15dd920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dd920ULL || rel >= 0x15dd970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015dd970 size=208 callers=1 calls=4
   calls: InstanceTable_231, sub_15b9300, sub_15ba7a0, sub_6a5230
*/
void sub_15dd970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dd970ULL || rel >= 0x15dda40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015dda40 size=48 callers=0 calls=1
   calls: sub_15dd970
*/
void sub_15dda40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dda40ULL || rel >= 0x15dda70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015dda70 size=160 callers=0 calls=2
   calls: Result_2, sub_15bbd10
*/
void sub_15dda70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dda70ULL || rel >= 0x15ddb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ddb10 size=592 callers=0 calls=12
   calls: InstanceTable_255, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15b9ef0, sub_15ba370, sub_15bc1e0, sub_15bc310, sub_15c5e40, sub_15cc060, sub_15ce0f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
   ref: DNS Check Thread
*/
void InstanceTable_254(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ddb10ULL || rel >= 0x15ddd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ddd60 size=304 callers=3 calls=5
   calls: InstanceTable_208, sub_15b8dc0, sub_15c5e40, sub_15c5ee0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_255(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ddd60ULL || rel >= 0x15dde90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015dde90 size=416 callers=0 calls=7
   calls: InstanceTable_255, Result_2, sub_15b8dc0, sub_15c5e40, sub_15cc060, sub_15ce0f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_256(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dde90ULL || rel >= 0x15de030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015de030 size=176 callers=0 calls=3
   calls: InstanceTable_255, Result_2, sub_15ce0f0
*/
void sub_15de030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15de030ULL || rel >= 0x15de0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015de0e0 size=160 callers=122 calls=5
   calls: Result, Result_2, sub_15bbd10, sub_15c8790, sub_15de180
*/
void sub_15de0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15de0e0ULL || rel >= 0x15de180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015de180 size=176 callers=1 calls=3
   calls: sub_15c3ee0, sub_15c8a70, sub_15c8aa0
*/
void sub_15de180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15de180ULL || rel >= 0x15de230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015de230 size=160 callers=4 calls=4
   calls: Result, Result_2, sub_15bbd10, sub_15c8830
*/
void sub_15de230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15de230ULL || rel >= 0x15de2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015de2d0 size=80 callers=126 calls=0
*/
void sub_15de2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15de2d0ULL || rel >= 0x15de320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015de320 size=80 callers=0 calls=1
   calls: sub_15c88c0
*/
void sub_15de320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15de320ULL || rel >= 0x15de370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015de370 size=128 callers=15 calls=2
   calls: sub_15c3ee0, sub_15c8aa0
*/
void sub_15de370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15de370ULL || rel >= 0x15de3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015de3f0 size=32 callers=1 calls=0
*/
void sub_15de3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15de3f0ULL || rel >= 0x15de410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015de410 size=176 callers=1 calls=1
   calls: sub_15bc1e0
*/
void sub_15de410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15de410ULL || rel >= 0x15de4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015de4c0 size=80 callers=1 calls=1
   calls: sub_15bc310
*/
void sub_15de4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15de4c0ULL || rel >= 0x15de510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015de510 size=80 callers=0 calls=1
   calls: sub_15bc310
*/
void sub_15de510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15de510ULL || rel >= 0x15de560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015de560 size=32 callers=1 calls=0
*/
void sub_15de560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15de560ULL || rel >= 0x15de580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015de580 size=16 callers=1 calls=0
*/
void sub_15de580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15de580ULL || rel >= 0x15de590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015de590 size=16 callers=0 calls=0
*/
void sub_15de590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15de590ULL || rel >= 0x15de5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015de5a0 size=2704 callers=1 calls=28
   calls: InstanceTable_257, sub_15b6dc0, sub_15b8dc0, sub_15b8ec0, sub_15b9280, sub_15b9390, sub_15bab00, sub_15bacc0, sub_15bacd0, sub_15bc1e0, sub_15bc310, sub_15c3ee0
   ... +16 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
   ref: probeinit
*/
void probeinit(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15de5a0ULL || rel >= 0x15df030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015df030 size=528 callers=1 calls=4
   calls: InstanceTable_205, sub_15b9390, sub_15bc310, sub_1610880
*/
void sub_15df030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15df030ULL || rel >= 0x15df240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015df240 size=48 callers=0 calls=1
   calls: sub_15df030
*/
void sub_15df240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15df240ULL || rel >= 0x15df270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015df270 size=16 callers=2 calls=0
*/
void sub_15df270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15df270ULL || rel >= 0x15df280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015df280 size=48 callers=4 calls=1
   calls: sub_15ea440
*/
void sub_15df280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15df280ULL || rel >= 0x15df2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015df2b0 size=240 callers=4 calls=5
   calls: sub_15bab00, sub_15bc1e0, sub_15bc310, sub_1613190, sub_16132b0
*/
void sub_15df2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15df2b0ULL || rel >= 0x15df3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015df3a0 size=48 callers=4 calls=1
   calls: sub_15ea440
*/
void sub_15df3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15df3a0ULL || rel >= 0x15df3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015df3d0 size=48 callers=1 calls=1
   calls: sub_15ea560
   ref: probeinit
*/
void probeinit_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15df3d0ULL || rel >= 0x15df400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015df400 size=1824 callers=4 calls=27
   calls: localhost_2, prudps, sub_15b6dc0, sub_15b8d60, sub_15b8dc0, sub_15b8ec0, sub_15b9280, sub_15b9340, sub_15b9390, sub_15bacc0, sub_15bacd0, sub_15bc310
   ... +15 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_257(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15df400ULL || rel >= 0x15dfb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015dfb20 size=48 callers=4 calls=1
   calls: sub_15ea440
*/
void sub_15dfb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dfb20ULL || rel >= 0x15dfb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015dfb50 size=512 callers=3 calls=7
   calls: prudps, sub_15bc1e0, sub_15bc310, sub_15bc5d0, sub_15ea560, sub_1618500, sub_1618510
*/
void sub_15dfb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dfb50ULL || rel >= 0x15dfd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015dfd50 size=192 callers=2 calls=8
   calls: prudps, sub_15b8d60, sub_15b8ec0, sub_15b9280, sub_15bacc0, sub_15bacd0, sub_1618110, sub_1618410
*/
void sub_15dfd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dfd50ULL || rel >= 0x15dfe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015dfe10 size=304 callers=2 calls=6
   calls: prudps, sub_15c8790, sub_15c88c0, sub_15c8ad0, sub_15c8ba0, sub_1618110
*/
void sub_15dfe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dfe10ULL || rel >= 0x15dff40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015dff40 size=80 callers=1 calls=1
   calls: sub_15bab00
*/
void sub_15dff40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dff40ULL || rel >= 0x15dff90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015dff90 size=320 callers=5 calls=3
   calls: sub_15b8dc0, sub_15ea560, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_258(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dff90ULL || rel >= 0x15e00d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e00d0 size=464 callers=1 calls=3
   calls: sub_15b8dc0, sub_15ea560, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_259(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e00d0ULL || rel >= 0x15e02a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e02a0 size=48 callers=1 calls=1
   calls: sub_15ea560
*/
void sub_15e02a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e02a0ULL || rel >= 0x15e02d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e02d0 size=528 callers=1 calls=5
   calls: sub_15b8d60, sub_15b8dc0, sub_15dfe10, sub_15ea560, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
   ref: probeinit
*/
void probeinit_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e02d0ULL || rel >= 0x15e04e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e04e0 size=3904 callers=1 calls=22
   calls: InstanceTable_260, sub_15b6dc0, sub_15b8d60, sub_15b8dc0, sub_15b8ec0, sub_15b9280, sub_15b9340, sub_15b9390, sub_15bab00, sub_15bacc0, sub_15bacd0, sub_15bc1e0
   ... +10 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
   ref: probeinit
*/
void probeinit_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e04e0ULL || rel >= 0x15e1420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e1420 size=288 callers=1 calls=4
   calls: sub_15b8dc0, sub_15bc5d0, sub_15ea560, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e1420ULL || rel >= 0x15e1540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e1540 size=384 callers=2 calls=4
   calls: sub_15b8dc0, sub_15bc1e0, sub_15bc310, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_261(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e1540ULL || rel >= 0x15e16c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e16c0 size=272 callers=3 calls=3
   calls: sub_15bc1e0, sub_15bc310, sub_15bc650
*/
void sub_15e16c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e16c0ULL || rel >= 0x15e17d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e17d0 size=272 callers=4 calls=3
   calls: sub_15bc1e0, sub_15bc310, sub_15bc650
*/
void sub_15e17d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e17d0ULL || rel >= 0x15e18e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e18e0 size=32 callers=1 calls=1
   calls: sub_15ea560
*/
void sub_15e18e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e18e0ULL || rel >= 0x15e1900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e1900 size=144 callers=0 calls=2
   calls: sub_15b9390, sub_1611190
*/
void sub_15e1900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e1900ULL || rel >= 0x15e1990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e1990 size=576 callers=1 calls=12
   calls: prudps, sub_15b6dc0, sub_15b8d60, sub_15b9390, sub_15c8790, sub_15c88c0, sub_15c8ad0, sub_15c8ba0, sub_1610dd0, sub_1611190, sub_1618120, sub_1618200
*/
void sub_15e1990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e1990ULL || rel >= 0x15e1bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e1bd0 size=6992 callers=1 calls=35
   calls: InstanceTable_257, InstanceTable_261, InstanceTable_262, localhost_2, prudps, sub_15b6dc0, sub_15b8d60, sub_15b8dc0, sub_15b9340, sub_15b9390, sub_15bab00, sub_15bc1e0
   ... +23 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
   ref: probeinit
*/
void probeinit_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e1bd0ULL || rel >= 0x15e3720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e3720 size=48 callers=2 calls=1
   calls: sub_15ea440
   ref: probeinit
*/
void probeinit_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e3720ULL || rel >= 0x15e3750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e3750 size=240 callers=4 calls=5
   calls: sub_15bab00, sub_15bc1e0, sub_15bc310, sub_1613190, sub_16132b0
*/
void sub_15e3750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e3750ULL || rel >= 0x15e3840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e3840 size=48 callers=3 calls=1
   calls: sub_15ea440
*/
void sub_15e3840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e3840ULL || rel >= 0x15e3870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e3870 size=880 callers=1 calls=18
   calls: prudps, sub_15b6dc0, sub_15b9390, sub_15bc1e0, sub_15bc310, sub_15c3ee0, sub_15c7dc0, sub_15c7dd0, sub_15c8090, sub_15c8140, sub_15c8790, sub_15c88c0
   ... +6 more
*/
void sub_15e3870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e3870ULL || rel >= 0x15e3be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e3be0 size=256 callers=1 calls=5
   calls: CallContext, sub_15b6dc0, sub_15b8dc0, sub_15e4fe0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_262(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e3be0ULL || rel >= 0x15e3ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e3ce0 size=272 callers=1 calls=3
   calls: sub_15bc1e0, sub_15bc310, sub_15bc650
*/
void sub_15e3ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e3ce0ULL || rel >= 0x15e3df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e3df0 size=864 callers=1 calls=11
   calls: sub_15b6dc0, sub_15b8dc0, sub_15b9340, sub_15b9390, sub_15e9900, sub_15ed940, sub_1610dd0, sub_1611190, sub_1612790, sub_1618120, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_263(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e3df0ULL || rel >= 0x15e4150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e4150 size=288 callers=0 calls=6
   calls: CallContext, InstanceTable_263, InstanceTable_264, probeinit_3, probeinit_4, probeinit_5
*/
void sub_15e4150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e4150ULL || rel >= 0x15e4270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e4270 size=1328 callers=1 calls=20
   calls: prudps, sub_15b6dc0, sub_15b8dc0, sub_15b9340, sub_15b9390, sub_15bc1e0, sub_15bc310, sub_15c3ee0, sub_15c7dc0, sub_15c7dd0, sub_15c8090, sub_15c8140
   ... +8 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_264(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e4270ULL || rel >= 0x15e47a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e47a0 size=64 callers=3 calls=1
   calls: prudps
*/
void sub_15e47a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e47a0ULL || rel >= 0x15e47e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e47e0 size=48 callers=10 calls=1
   calls: sub_15e9900
*/
void sub_15e47e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e47e0ULL || rel >= 0x15e4810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e4810 size=368 callers=0 calls=6
   calls: InstanceTable_236, sub_15b6dc0, sub_15b8d60, sub_15b8dc0, sub_15d9560, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_265(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e4810ULL || rel >= 0x15e4980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e4980 size=256 callers=0 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_266(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e4980ULL || rel >= 0x15e4a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e4a80 size=240 callers=0 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_267(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e4a80ULL || rel >= 0x15e4b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e4b70 size=240 callers=0 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_268(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e4b70ULL || rel >= 0x15e4c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e4c60 size=448 callers=0 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_269(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e4c60ULL || rel >= 0x15e4e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e4e20 size=448 callers=0 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e4e20ULL || rel >= 0x15e4fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e4fe0 size=384 callers=1 calls=8
   calls: InstanceTable_201, Result_2, sub_15b6dc0, sub_15cbfc0, sub_15cc060, sub_15e9900, sub_1610540, sub_1618120
*/
void sub_15e4fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e4fe0ULL || rel >= 0x15e5160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e5160 size=656 callers=0 calls=8
   calls: sub_15b8d60, sub_15b8dc0, sub_15c5e40, sub_15cbf00, sub_15cc060, sub_1618120, sub_16184e0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_271(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e5160ULL || rel >= 0x15e53f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e53f0 size=256 callers=1 calls=4
   calls: InstanceTable_205, sub_15b9390, sub_1610dd0, sub_1611190
*/
void sub_15e53f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e53f0ULL || rel >= 0x15e54f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e54f0 size=48 callers=0 calls=1
   calls: sub_15e53f0
*/
void sub_15e54f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e54f0ULL || rel >= 0x15e5520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e5520 size=256 callers=0 calls=6
   calls: InstanceTable_208, Result_2, sub_15b8dc0, sub_15c5e40, sub_15c5ee0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_272(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e5520ULL || rel >= 0x15e5620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e5620 size=1008 callers=0 calls=13
   calls: InstanceTable_208, InstanceTable_258, Result_2, sub_15b8d60, sub_15b8dc0, sub_15bc1e0, sub_15bc310, sub_15c5e40, sub_15c5ee0, sub_15cc060, sub_15ce0f0, sub_15ea560
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_273(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e5620ULL || rel >= 0x15e5a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e5a10 size=1232 callers=0 calls=15
   calls: InstanceTable_208, InstanceTable_257, InstanceTable_258, Result_2, prudps, sub_15b8d60, sub_15b8dc0, sub_15bc1e0, sub_15bc310, sub_15c5e40, sub_15c5ee0, sub_15cc060
   ... +3 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
   ref: probeinit
*/
void probeinit_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e5a10ULL || rel >= 0x15e5ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e5ee0 size=656 callers=0 calls=12
   calls: InstanceTable_208, InstanceTable_248, InstanceTable_258, Result_2, sub_15b8d60, sub_15b8dc0, sub_15c5e40, sub_15c5ee0, sub_15cc060, sub_15ce0f0, sub_15ea560, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_274(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e5ee0ULL || rel >= 0x15e6170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e6170 size=96 callers=0 calls=1
   calls: InstanceTable_277
*/
void sub_15e6170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e6170ULL || rel >= 0x15e61d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e61d0 size=16 callers=0 calls=0
*/
void sub_15e61d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e61d0ULL || rel >= 0x15e61e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e61e0 size=432 callers=0 calls=9
   calls: probeinit, prudps, sub_15b6dc0, sub_15b9390, sub_15ea440, sub_1610dd0, sub_1611190, sub_1618120, sub_1618200
   ref: stream
*/
void stream(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e61e0ULL || rel >= 0x15e6390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e6390 size=48 callers=2 calls=1
   calls: sub_15ea440
   ref: stream
*/
void stream_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e6390ULL || rel >= 0x15e63c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e63c0 size=48 callers=4 calls=1
   calls: sub_15ea440
*/
void sub_15e63c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e63c0ULL || rel >= 0x15e63f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e63f0 size=1168 callers=0 calls=15
   calls: InstanceTable_216, Result_2, Transport_Job, sub_15b6dc0, sub_15b78f0, sub_15b93f0, sub_15bc1e0, sub_15c3fe0, sub_15c6700, sub_15c6e50, sub_15cc990, sub_15cefc0
   ... +3 more
*/
void sub_15e63f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e63f0ULL || rel >= 0x15e6880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e6880 size=704 callers=1 calls=4
   calls: sub_15c63b0, sub_15ce160, sub_15ce560, sub_6a5230
*/
void sub_15e6880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e6880ULL || rel >= 0x15e6b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e6b40 size=960 callers=1 calls=9
   calls: InstanceTable_206, InstanceTable_217, InstanceTable_232, InstantiationContext_3, sub_15b9300, sub_15b9390, sub_15b9450, sub_15c6f50, sub_6a5230
*/
void sub_15e6b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e6b40ULL || rel >= 0x15e6f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e6f00 size=144 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_15e6f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e6f00ULL || rel >= 0x15e6f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e6f90 size=48 callers=0 calls=1
   calls: sub_15e6b40
*/
void sub_15e6f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e6f90ULL || rel >= 0x15e6fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e6fc0 size=16 callers=4 calls=0
*/
void sub_15e6fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e6fc0ULL || rel >= 0x15e6fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e6fd0 size=208 callers=2 calls=4
   calls: prudps, sub_15e70a0, sub_15eae80, sub_1618110
*/
void sub_15e6fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e6fd0ULL || rel >= 0x15e70a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e70a0 size=256 callers=1 calls=4
   calls: sub_15b6dc0, sub_15b9340, sub_15e9900, sub_1618120
*/
void sub_15e70a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e70a0ULL || rel >= 0x15e71a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e71a0 size=304 callers=1 calls=4
   calls: prudps, sub_15b9390, sub_15eae80, sub_1618110
*/
void sub_15e71a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e71a0ULL || rel >= 0x15e72d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e72d0 size=240 callers=1 calls=4
   calls: prudps, sub_15e9900, sub_15eae80, sub_1618110
*/
void sub_15e72d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e72d0ULL || rel >= 0x15e73c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e73c0 size=240 callers=2 calls=4
   calls: prudps, sub_15e9900, sub_15eae80, sub_1618110
*/
void sub_15e73c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e73c0ULL || rel >= 0x15e74b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e74b0 size=272 callers=1 calls=3
   calls: sub_15b9390, sub_15e9900, sub_16109c0
*/
void sub_15e74b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e74b0ULL || rel >= 0x15e75c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e75c0 size=304 callers=2 calls=6
   calls: sub_15b6dc0, sub_15b9340, sub_15c6e50, sub_15c73b0, sub_15ce120, sub_15ce2b0
*/
void sub_15e75c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e75c0ULL || rel >= 0x15e76f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e76f0 size=240 callers=2 calls=2
   calls: sub_15b9390, sub_15ce560
*/
void sub_15e76f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e76f0ULL || rel >= 0x15e77e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e77e0 size=48 callers=0 calls=1
   calls: sub_15e76f0
*/
void sub_15e77e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e77e0ULL || rel >= 0x15e7810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e7810 size=832 callers=0 calls=13
   calls: sub_15b6dc0, sub_15b6e10, sub_15bbf80, sub_15c3ee0, sub_15c42a0, sub_15c42b0, sub_15c6bc0, sub_15c7dd0, sub_15c7ff0, sub_15c8140, sub_15ce2b0, sub_15ce560
   ... +1 more
*/
void sub_15e7810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e7810ULL || rel >= 0x15e7b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e7b50 size=448 callers=0 calls=6
   calls: sub_15c42a0, sub_15c42b0, sub_15c6bc0, sub_15ce2b0, sub_15ce560, sub_6a5230
*/
void sub_15e7b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e7b50ULL || rel >= 0x15e7d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e7d10 size=16 callers=0 calls=0
*/
void sub_15e7d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e7d10ULL || rel >= 0x15e7d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e7d20 size=288 callers=1 calls=6
   calls: sub_15c42a0, sub_15c42b0, sub_15c42c0, sub_15c42d0, sub_15c6470, sub_15ce600
*/
void sub_15e7d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e7d20ULL || rel >= 0x15e7e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e7e40 size=96 callers=0 calls=2
   calls: sub_15c5ea0, sub_15c6bc0
*/
void sub_15e7e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e7e40ULL || rel >= 0x15e7ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e7ea0 size=96 callers=0 calls=2
   calls: sub_15c5ea0, sub_15e7d20
*/
void sub_15e7ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e7ea0ULL || rel >= 0x15e7f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e7f00 size=880 callers=0 calls=6
   calls: sub_15b6dc0, sub_15b9340, sub_15b9390, sub_15c6e50, sub_15c73b0, sub_1612ad0
*/
void sub_15e7f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e7f00ULL || rel >= 0x15e8270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e8270 size=336 callers=0 calls=5
   calls: sub_15c42a0, sub_15c42b0, sub_15c6bc0, sub_15ce3b0, sub_15ce560
*/
void sub_15e8270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e8270ULL || rel >= 0x15e83c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e83c0 size=256 callers=0 calls=6
   calls: sub_15c42a0, sub_15c42b0, sub_15c5ea0, sub_15c6bc0, sub_15ce3b0, sub_15ce560
*/
void sub_15e83c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e83c0ULL || rel >= 0x15e84c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e84c0 size=80 callers=0 calls=1
   calls: sub_15ceec0
*/
void sub_15e84c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e84c0ULL || rel >= 0x15e8510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e8510 size=80 callers=0 calls=1
   calls: sub_15ceec0
*/
void sub_15e8510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e8510ULL || rel >= 0x15e8560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e8560 size=832 callers=1 calls=8
   calls: sub_15b6dc0, sub_15b78f0, sub_15b9340, sub_15b9390, sub_15bc1e0, sub_15bd810, sub_1612f90, sub_1618120
*/
void sub_15e8560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e8560ULL || rel >= 0x15e88a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e88a0 size=432 callers=1 calls=7
   calls: InstanceTable_277, sub_15b6e10, sub_15b9300, sub_15b9390, sub_15bc310, sub_1610970, sub_16184e0
*/
void sub_15e88a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e88a0ULL || rel >= 0x15e8a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e8a50 size=16 callers=0 calls=0
*/
void sub_15e8a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e8a50ULL || rel >= 0x15e8a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e8a60 size=16 callers=0 calls=0
*/
void sub_15e8a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e8a60ULL || rel >= 0x15e8a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e8a70 size=16 callers=0 calls=0
*/
void sub_15e8a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e8a70ULL || rel >= 0x15e8a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e8a80 size=16 callers=0 calls=0
*/
void sub_15e8a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e8a80ULL || rel >= 0x15e8a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e8a90 size=704 callers=2 calls=9
   calls: prudps, sub_15b6dc0, sub_15b8dc0, sub_15b9390, sub_1610dd0, sub_1611190, sub_1618120, sub_1618200, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_275(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e8a90ULL || rel >= 0x15e8d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e8d50 size=16 callers=1 calls=0
*/
void sub_15e8d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e8d50ULL || rel >= 0x15e8d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e8d60 size=336 callers=2 calls=5
   calls: sub_15b6dc0, sub_15b9340, sub_15e9900, sub_15ea560, sub_1618120
*/
void sub_15e8d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e8d60ULL || rel >= 0x15e8eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

