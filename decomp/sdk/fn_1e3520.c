/* sdk functions 001e3520..001fb0b0 (19 of 53). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 001e3520 size=352 callers=0 calls=0
*/
void sub_1e3520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e3520ULL || rel >= 0x1e3680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e3680 size=592 callers=0 calls=0
*/
void sub_1e3680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e3680ULL || rel >= 0x1e38d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e38d0 size=384 callers=0 calls=0
*/
void sub_1e38d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e38d0ULL || rel >= 0x1e3a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e3a50 size=640 callers=0 calls=0
*/
void sub_1e3a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e3a50ULL || rel >= 0x1e3cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e3cd0 size=528 callers=0 calls=0
*/
void sub_1e3cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e3cd0ULL || rel >= 0x1e3ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e3ee0 size=464 callers=0 calls=0
*/
void sub_1e3ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e3ee0ULL || rel >= 0x1e40b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e40b0 size=544 callers=0 calls=0
*/
void sub_1e40b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e40b0ULL || rel >= 0x1e42d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e42d0 size=576 callers=0 calls=0
*/
void sub_1e42d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e42d0ULL || rel >= 0x1e4510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e4510 size=544 callers=0 calls=0
*/
void sub_1e4510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e4510ULL || rel >= 0x1e4730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e4730 size=352 callers=0 calls=0
*/
void sub_1e4730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e4730ULL || rel >= 0x1e4890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e4890 size=176 callers=0 calls=0
*/
void sub_1e4890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e4890ULL || rel >= 0x1e4940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e4940 size=16 callers=0 calls=0
*/
void sub_1e4940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e4940ULL || rel >= 0x1e4950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e4950 size=96 callers=0 calls=0
*/
void sub_1e4950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e4950ULL || rel >= 0x1e49b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e49b0 size=16 callers=0 calls=0
*/
void sub_1e49b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e49b0ULL || rel >= 0x1e49c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e49c0 size=32 callers=0 calls=0
*/
void sub_1e49c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e49c0ULL || rel >= 0x1e49e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e49e0 size=32 callers=0 calls=0
*/
void sub_1e49e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e49e0ULL || rel >= 0x1e4a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e4a00 size=32 callers=0 calls=0
*/
void sub_1e4a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e4a00ULL || rel >= 0x1e4a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e4a20 size=16 callers=0 calls=0
*/
void sub_1e4a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e4a20ULL || rel >= 0x1e4a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e4a30 size=16 callers=0 calls=0
*/
void sub_1e4a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e4a30ULL || rel >= 0x1e4a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e4a40 size=176 callers=0 calls=0
*/
void sub_1e4a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e4a40ULL || rel >= 0x1e4af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e4af0 size=16 callers=0 calls=0
*/
void sub_1e4af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e4af0ULL || rel >= 0x1e4b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e4b00 size=96 callers=0 calls=0
*/
void sub_1e4b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e4b00ULL || rel >= 0x1e4b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e4b60 size=16 callers=0 calls=0
*/
void sub_1e4b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e4b60ULL || rel >= 0x1e4b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e4b70 size=16 callers=0 calls=0
*/
void sub_1e4b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e4b70ULL || rel >= 0x1e4b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e4b80 size=16 callers=0 calls=0
*/
void sub_1e4b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e4b80ULL || rel >= 0x1e4b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e4b90 size=16 callers=0 calls=0
*/
void sub_1e4b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e4b90ULL || rel >= 0x1e4ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e4ba0 size=160 callers=0 calls=0
*/
void sub_1e4ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e4ba0ULL || rel >= 0x1e4c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e4c40 size=128 callers=0 calls=1
   calls: sub_1e4cc0
*/
void sub_1e4c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e4c40ULL || rel >= 0x1e4cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e4cc0 size=192 callers=9 calls=0
*/
void sub_1e4cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e4cc0ULL || rel >= 0x1e4d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e4d80 size=224 callers=0 calls=1
   calls: sub_1e4cc0
*/
void sub_1e4d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e4d80ULL || rel >= 0x1e4e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e4e60 size=240 callers=0 calls=1
   calls: sub_1e4cc0
*/
void sub_1e4e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e4e60ULL || rel >= 0x1e4f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e4f50 size=128 callers=0 calls=1
   calls: sub_1e4cc0
*/
void sub_1e4f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e4f50ULL || rel >= 0x1e4fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e4fd0 size=128 callers=0 calls=1
   calls: sub_1e4cc0
*/
void sub_1e4fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e4fd0ULL || rel >= 0x1e5050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e5050 size=128 callers=0 calls=1
   calls: sub_1e4cc0
*/
void sub_1e5050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e5050ULL || rel >= 0x1e50d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e50d0 size=128 callers=0 calls=1
   calls: sub_1e4cc0
*/
void sub_1e50d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e50d0ULL || rel >= 0x1e5150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e5150 size=128 callers=0 calls=1
   calls: sub_1e4cc0
*/
void sub_1e5150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e5150ULL || rel >= 0x1e51d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e51d0 size=128 callers=0 calls=1
   calls: sub_1e4cc0
*/
void sub_1e51d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e51d0ULL || rel >= 0x1e5250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e5250 size=192 callers=0 calls=0
   ref: GetGlobalAccessLogMode
*/
void GetGlobalAccessLogMode(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e5250ULL || rel >= 0x1e5310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e5310 size=192 callers=0 calls=0
   ref: SetGlobalAccessLogMode
*/
void SetGlobalAccessLogMode(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e5310ULL || rel >= 0x1e53d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e53d0 size=32 callers=0 calls=0
*/
void sub_1e53d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e53d0ULL || rel >= 0x1e53f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e53f0 size=32 callers=0 calls=0
*/
void sub_1e53f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e53f0ULL || rel >= 0x1e5410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e5410 size=64 callers=0 calls=0
*/
void sub_1e5410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e5410ULL || rel >= 0x1e5450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e5450 size=80 callers=0 calls=0
*/
void sub_1e5450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e5450ULL || rel >= 0x1e54a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e54a0 size=80 callers=0 calls=0
*/
void sub_1e54a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e54a0ULL || rel >= 0x1e54f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e54f0 size=112 callers=0 calls=0
   ref: SdCard
*/
void SdCard(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e54f0ULL || rel >= 0x1e5560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e5560 size=80 callers=0 calls=0
*/
void sub_1e5560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e5560ULL || rel >= 0x1e55b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e55b0 size=112 callers=0 calls=0
   ref: SdCard
*/
void SdCard_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e55b0ULL || rel >= 0x1e5620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e5620 size=80 callers=0 calls=0
*/
void sub_1e5620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e5620ULL || rel >= 0x1e5670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e5670 size=192 callers=0 calls=0
   ref: System
   ref: SdSystem
   ref: ProperSystem
*/
void ProperSystem(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e5670ULL || rel >= 0x1e5730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e5730 size=80 callers=0 calls=0
*/
void sub_1e5730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e5730ULL || rel >= 0x1e5780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e5780 size=112 callers=0 calls=0
*/
void sub_1e5780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e5780ULL || rel >= 0x1e57f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e57f0 size=336 callers=0 calls=1
   calls: FS_ACCESS_sdk_version_7_3_2_spec_NX
   ref: GetGlobalAccessLogMode
   ref: IsEnabledAccessLog
*/
void GetGlobalAccessLogMode_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e57f0ULL || rel >= 0x1e5940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e5940 size=272 callers=1 calls=1
   calls: OutputAccessLogToSdCard
   ref: FS_ACCESS: { sdk_version: 7.3.2, spec: NX }
   ref: FS_ACCESS: { sdk_version: 7.3.2, spec: NX, program_index: %d }
*/
void FS_ACCESS_sdk_version_7_3_2_spec_NX(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e5940ULL || rel >= 0x1e5a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e5a50 size=16 callers=0 calls=0
*/
void sub_1e5a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e5a50ULL || rel >= 0x1e5a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e5a60 size=272 callers=0 calls=1
   calls: FS_ACCESS_start_9lld_end_9lld_result_0x_08X_handle_0x_p
*/
void sub_1e5a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e5a60ULL || rel >= 0x1e5b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e5b70 size=560 callers=9 calls=1
   calls: OutputAccessLogToSdCard
   ref: FS_ACCESS: { start: %9lld, end: %9lld, result: 0x%08X, handle: 0x%p, priority: %s, function: "%s"%s 
*/
void FS_ACCESS_start_9lld_end_9lld_result_0x_08X_handle_0x_p(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e5b70ULL || rel >= 0x1e5da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e5da0 size=272 callers=0 calls=1
   calls: FS_ACCESS_start_9lld_end_9lld_result_0x_08X_handle_0x_p
*/
void sub_1e5da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e5da0ULL || rel >= 0x1e5eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e5eb0 size=272 callers=0 calls=1
   calls: FS_ACCESS_start_9lld_end_9lld_result_0x_08X_handle_0x_p
*/
void sub_1e5eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e5eb0ULL || rel >= 0x1e5fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e5fc0 size=272 callers=0 calls=1
   calls: FS_ACCESS_start_9lld_end_9lld_result_0x_08X_handle_0x_p
*/
void sub_1e5fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e5fc0ULL || rel >= 0x1e60d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e60d0 size=272 callers=0 calls=1
   calls: FS_ACCESS_start_9lld_end_9lld_result_0x_08X_handle_0x_p
*/
void sub_1e60d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e60d0ULL || rel >= 0x1e61e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e61e0 size=272 callers=0 calls=1
   calls: FS_ACCESS_start_9lld_end_9lld_result_0x_08X_handle_0x_p
*/
void sub_1e61e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e61e0ULL || rel >= 0x1e62f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e62f0 size=272 callers=0 calls=1
   calls: FS_ACCESS_start_9lld_end_9lld_result_0x_08X_handle_0x_p
*/
void sub_1e62f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e62f0ULL || rel >= 0x1e6400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e6400 size=272 callers=0 calls=1
   calls: FS_ACCESS_start_9lld_end_9lld_result_0x_08X_handle_0x_p
*/
void sub_1e6400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e6400ULL || rel >= 0x1e6510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e6510 size=272 callers=0 calls=1
   calls: FS_ACCESS_start_9lld_end_9lld_result_0x_08X_handle_0x_p
*/
void sub_1e6510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e6510ULL || rel >= 0x1e6620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e6620 size=48 callers=0 calls=0
*/
void sub_1e6620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e6620ULL || rel >= 0x1e6650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e6650 size=32 callers=0 calls=0
*/
void sub_1e6650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e6650ULL || rel >= 0x1e6670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e6670 size=16 callers=0 calls=0
*/
void sub_1e6670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e6670ULL || rel >= 0x1e6680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e6680 size=16 callers=0 calls=0
*/
void sub_1e6680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e6680ULL || rel >= 0x1e6690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e6690 size=128 callers=0 calls=0
   ref: IsEnabledFileSystemAccessorAccessLog
*/
void IsEnabledFileSystemAccessorAccessLog(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e6690ULL || rel >= 0x1e6710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e6710 size=128 callers=0 calls=0
   ref: EnableFileSystemAccessorAccessLog
*/
void EnableFileSystemAccessorAccessLog(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e6710ULL || rel >= 0x1e6790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e6790 size=192 callers=2 calls=0
   ref: OutputAccessLogToSdCard
*/
void OutputAccessLogToSdCard(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e6790ULL || rel >= 0x1e6850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e6850 size=16 callers=0 calls=0
*/
void sub_1e6850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e6850ULL || rel >= 0x1e6860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e6860 size=16 callers=0 calls=0
*/
void sub_1e6860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e6860ULL || rel >= 0x1e6870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e6870 size=32 callers=0 calls=0
*/
void sub_1e6870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e6870ULL || rel >= 0x1e6890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e6890 size=16 callers=0 calls=0
*/
void sub_1e6890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e6890ULL || rel >= 0x1e68a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e68a0 size=96 callers=0 calls=0
*/
void sub_1e68a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e68a0ULL || rel >= 0x1e6900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e6900 size=48 callers=0 calls=0
*/
void sub_1e6900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e6900ULL || rel >= 0x1e6930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e6930 size=80 callers=0 calls=0
*/
void sub_1e6930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e6930ULL || rel >= 0x1e6980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e6980 size=16 callers=0 calls=0
*/
void sub_1e6980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e6980ULL || rel >= 0x1e6990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e6990 size=32 callers=0 calls=0
*/
void sub_1e6990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e6990ULL || rel >= 0x1e69b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e69b0 size=160 callers=0 calls=1
   calls: sub_1c0
*/
void sub_1e69b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e69b0ULL || rel >= 0x1e6a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e6a50 size=32 callers=0 calls=0
*/
void sub_1e6a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e6a50ULL || rel >= 0x1e6a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e6a70 size=32 callers=0 calls=0
*/
void sub_1e6a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e6a70ULL || rel >= 0x1e6a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e6a90 size=16 callers=0 calls=0
*/
void sub_1e6a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e6a90ULL || rel >= 0x1e6aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e6aa0 size=16 callers=0 calls=0
*/
void sub_1e6aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e6aa0ULL || rel >= 0x1e6ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e6ab0 size=304 callers=0 calls=0
*/
void sub_1e6ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e6ab0ULL || rel >= 0x1e6be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e6be0 size=48 callers=0 calls=0
*/
void sub_1e6be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e6be0ULL || rel >= 0x1e6c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e6c10 size=112 callers=0 calls=0
*/
void sub_1e6c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e6c10ULL || rel >= 0x1e6c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e6c80 size=112 callers=0 calls=0
*/
void sub_1e6c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e6c80ULL || rel >= 0x1e6cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e6cf0 size=144 callers=0 calls=0
*/
void sub_1e6cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e6cf0ULL || rel >= 0x1e6d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e6d80 size=64 callers=0 calls=0
*/
void sub_1e6d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e6d80ULL || rel >= 0x1e6dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e6dc0 size=96 callers=0 calls=0
*/
void sub_1e6dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e6dc0ULL || rel >= 0x1e6e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e6e20 size=768 callers=0 calls=0
*/
void sub_1e6e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e6e20ULL || rel >= 0x1e7120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e7120 size=32 callers=0 calls=0
*/
void sub_1e7120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e7120ULL || rel >= 0x1e7140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e7140 size=304 callers=0 calls=0
*/
void sub_1e7140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e7140ULL || rel >= 0x1e7270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e7270 size=816 callers=0 calls=0
*/
void sub_1e7270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e7270ULL || rel >= 0x1e75a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e75a0 size=32 callers=0 calls=0
*/
void sub_1e75a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e75a0ULL || rel >= 0x1e75c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e75c0 size=144 callers=0 calls=0
*/
void sub_1e75c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e75c0ULL || rel >= 0x1e7650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e7650 size=352 callers=0 calls=0
*/
void sub_1e7650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e7650ULL || rel >= 0x1e77b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e77b0 size=144 callers=0 calls=0
*/
void sub_1e77b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e77b0ULL || rel >= 0x1e7840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e7840 size=352 callers=0 calls=0
*/
void sub_1e7840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e7840ULL || rel >= 0x1e79a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e79a0 size=144 callers=0 calls=0
*/
void sub_1e79a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e79a0ULL || rel >= 0x1e7a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e7a30 size=64 callers=0 calls=0
*/
void sub_1e7a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e7a30ULL || rel >= 0x1e7a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e7a70 size=288 callers=0 calls=0
*/
void sub_1e7a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e7a70ULL || rel >= 0x1e7b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e7b90 size=304 callers=0 calls=0
*/
void sub_1e7b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e7b90ULL || rel >= 0x1e7cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e7cc0 size=176 callers=0 calls=0
*/
void sub_1e7cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e7cc0ULL || rel >= 0x1e7d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e7d70 size=112 callers=0 calls=0
*/
void sub_1e7d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e7d70ULL || rel >= 0x1e7de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e7de0 size=336 callers=0 calls=0
*/
void sub_1e7de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e7de0ULL || rel >= 0x1e7f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e7f30 size=320 callers=0 calls=0
*/
void sub_1e7f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e7f30ULL || rel >= 0x1e8070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e8070 size=176 callers=0 calls=0
*/
void sub_1e8070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e8070ULL || rel >= 0x1e8120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e8120 size=128 callers=0 calls=0
*/
void sub_1e8120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e8120ULL || rel >= 0x1e81a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e81a0 size=320 callers=0 calls=0
*/
void sub_1e81a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e81a0ULL || rel >= 0x1e82e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e82e0 size=304 callers=0 calls=0
*/
void sub_1e82e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e82e0ULL || rel >= 0x1e8410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e8410 size=304 callers=0 calls=0
*/
void sub_1e8410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e8410ULL || rel >= 0x1e8540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e8540 size=32 callers=0 calls=0
*/
void sub_1e8540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e8540ULL || rel >= 0x1e8560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e8560 size=48 callers=0 calls=0
*/
void sub_1e8560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e8560ULL || rel >= 0x1e8590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e8590 size=768 callers=1 calls=1
   calls: null_08X
   ref: + / %s [%08X]
   ref: + / (null) [%08X]
*/
void null_08X(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e8590ULL || rel >= 0x1e8890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e8890 size=240 callers=0 calls=0
*/
void sub_1e8890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e8890ULL || rel >= 0x1e8980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e8980 size=672 callers=0 calls=0
*/
void sub_1e8980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e8980ULL || rel >= 0x1e8c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e8c20 size=1008 callers=0 calls=0
*/
void sub_1e8c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e8c20ULL || rel >= 0x1e9010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e9010 size=112 callers=0 calls=0
*/
void sub_1e9010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e9010ULL || rel >= 0x1e9080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e9080 size=144 callers=0 calls=0
*/
void sub_1e9080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e9080ULL || rel >= 0x1e9110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e9110 size=144 callers=0 calls=0
*/
void sub_1e9110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e9110ULL || rel >= 0x1e91a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e91a0 size=64 callers=0 calls=0
*/
void sub_1e91a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e91a0ULL || rel >= 0x1e91e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e91e0 size=272 callers=0 calls=0
*/
void sub_1e91e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e91e0ULL || rel >= 0x1e92f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e92f0 size=96 callers=0 calls=0
*/
void sub_1e92f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e92f0ULL || rel >= 0x1e9350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e9350 size=672 callers=0 calls=0
*/
void sub_1e9350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e9350ULL || rel >= 0x1e95f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e95f0 size=576 callers=0 calls=0
*/
void sub_1e95f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e95f0ULL || rel >= 0x1e9830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e9830 size=672 callers=0 calls=0
*/
void sub_1e9830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e9830ULL || rel >= 0x1e9ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e9ad0 size=576 callers=0 calls=0
*/
void sub_1e9ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e9ad0ULL || rel >= 0x1e9d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e9d10 size=16 callers=0 calls=0
*/
void sub_1e9d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e9d10ULL || rel >= 0x1e9d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e9d20 size=80 callers=0 calls=0
*/
void sub_1e9d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e9d20ULL || rel >= 0x1e9d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e9d70 size=16 callers=0 calls=0
*/
void sub_1e9d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e9d70ULL || rel >= 0x1e9d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e9d80 size=16 callers=0 calls=0
*/
void sub_1e9d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e9d80ULL || rel >= 0x1e9d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e9d90 size=96 callers=0 calls=0
*/
void sub_1e9d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e9d90ULL || rel >= 0x1e9df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e9df0 size=176 callers=0 calls=0
*/
void sub_1e9df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e9df0ULL || rel >= 0x1e9ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e9ea0 size=64 callers=0 calls=0
*/
void sub_1e9ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e9ea0ULL || rel >= 0x1e9ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e9ee0 size=64 callers=0 calls=0
*/
void sub_1e9ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e9ee0ULL || rel >= 0x1e9f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e9f20 size=320 callers=0 calls=0
*/
void sub_1e9f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e9f20ULL || rel >= 0x1ea060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ea060 size=32 callers=0 calls=0
*/
void sub_1ea060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ea060ULL || rel >= 0x1ea080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ea080 size=48 callers=0 calls=0
*/
void sub_1ea080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ea080ULL || rel >= 0x1ea0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ea0b0 size=64 callers=0 calls=0
*/
void sub_1ea0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ea0b0ULL || rel >= 0x1ea0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ea0f0 size=240 callers=0 calls=0
*/
void sub_1ea0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ea0f0ULL || rel >= 0x1ea1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ea1e0 size=112 callers=0 calls=0
*/
void sub_1ea1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ea1e0ULL || rel >= 0x1ea250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ea250 size=240 callers=0 calls=0
*/
void sub_1ea250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ea250ULL || rel >= 0x1ea340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ea340 size=64 callers=0 calls=0
*/
void sub_1ea340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ea340ULL || rel >= 0x1ea380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ea380 size=128 callers=0 calls=0
*/
void sub_1ea380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ea380ULL || rel >= 0x1ea400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ea400 size=48 callers=0 calls=0
*/
void sub_1ea400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ea400ULL || rel >= 0x1ea430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ea430 size=320 callers=0 calls=0
*/
void sub_1ea430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ea430ULL || rel >= 0x1ea570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ea570 size=48 callers=0 calls=0
*/
void sub_1ea570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ea570ULL || rel >= 0x1ea5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ea5a0 size=288 callers=0 calls=0
*/
void sub_1ea5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ea5a0ULL || rel >= 0x1ea6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ea6c0 size=48 callers=0 calls=0
*/
void sub_1ea6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ea6c0ULL || rel >= 0x1ea6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ea6f0 size=64 callers=0 calls=0
*/
void sub_1ea6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ea6f0ULL || rel >= 0x1ea730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ea730 size=64 callers=0 calls=0
*/
void sub_1ea730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ea730ULL || rel >= 0x1ea770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ea770 size=80 callers=0 calls=0
*/
void sub_1ea770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ea770ULL || rel >= 0x1ea7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ea7c0 size=256 callers=0 calls=0
*/
void sub_1ea7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ea7c0ULL || rel >= 0x1ea8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ea8c0 size=112 callers=0 calls=0
*/
void sub_1ea8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ea8c0ULL || rel >= 0x1ea930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ea930 size=256 callers=0 calls=0
*/
void sub_1ea930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ea930ULL || rel >= 0x1eaa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eaa30 size=112 callers=0 calls=0
*/
void sub_1eaa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eaa30ULL || rel >= 0x1eaaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eaaa0 size=48 callers=0 calls=0
*/
void sub_1eaaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eaaa0ULL || rel >= 0x1eaad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eaad0 size=32 callers=0 calls=0
*/
void sub_1eaad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eaad0ULL || rel >= 0x1eaaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eaaf0 size=112 callers=0 calls=0
*/
void sub_1eaaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eaaf0ULL || rel >= 0x1eab60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eab60 size=112 callers=0 calls=0
*/
void sub_1eab60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eab60ULL || rel >= 0x1eabd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eabd0 size=112 callers=0 calls=0
*/
void sub_1eabd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eabd0ULL || rel >= 0x1eac40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eac40 size=208 callers=0 calls=0
*/
void sub_1eac40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eac40ULL || rel >= 0x1ead10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ead10 size=208 callers=0 calls=0
*/
void sub_1ead10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ead10ULL || rel >= 0x1eade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eade0 size=1408 callers=0 calls=2
   calls: sub_1eb360, sub_1eb630
*/
void sub_1eade0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eade0ULL || rel >= 0x1eb360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eb360 size=720 callers=2 calls=0
*/
void sub_1eb360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eb360ULL || rel >= 0x1eb630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eb630 size=1456 callers=2 calls=0
*/
void sub_1eb630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eb630ULL || rel >= 0x1ebbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ebbe0 size=496 callers=0 calls=2
   calls: sub_1eb360, sub_1eb630
*/
void sub_1ebbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ebbe0ULL || rel >= 0x1ebdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ebdd0 size=272 callers=0 calls=0
*/
void sub_1ebdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ebdd0ULL || rel >= 0x1ebee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ebee0 size=320 callers=0 calls=0
*/
void sub_1ebee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ebee0ULL || rel >= 0x1ec020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ec020 size=240 callers=0 calls=0
*/
void sub_1ec020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ec020ULL || rel >= 0x1ec110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ec110 size=48 callers=0 calls=0
*/
void sub_1ec110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ec110ULL || rel >= 0x1ec140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ec140 size=64 callers=0 calls=0
*/
void sub_1ec140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ec140ULL || rel >= 0x1ec180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ec180 size=144 callers=0 calls=0
*/
void sub_1ec180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ec180ULL || rel >= 0x1ec210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ec210 size=144 callers=0 calls=0
   ref: :*?<>|
*/
void unnamed_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ec210ULL || rel >= 0x1ec2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ec2a0 size=16 callers=0 calls=0
*/
void sub_1ec2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ec2a0ULL || rel >= 0x1ec2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ec2b0 size=192 callers=0 calls=0
*/
void sub_1ec2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ec2b0ULL || rel >= 0x1ec370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ec370 size=16 callers=0 calls=0
*/
void sub_1ec370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ec370ULL || rel >= 0x1ec380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ec380 size=48 callers=0 calls=0
*/
void sub_1ec380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ec380ULL || rel >= 0x1ec3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ec3b0 size=64 callers=0 calls=0
*/
void sub_1ec3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ec3b0ULL || rel >= 0x1ec3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ec3f0 size=176 callers=0 calls=0
*/
void sub_1ec3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ec3f0ULL || rel >= 0x1ec4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ec4a0 size=352 callers=0 calls=0
*/
void sub_1ec4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ec4a0ULL || rel >= 0x1ec600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ec600 size=192 callers=0 calls=0
*/
void sub_1ec600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ec600ULL || rel >= 0x1ec6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ec6c0 size=16 callers=0 calls=0
*/
void sub_1ec6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ec6c0ULL || rel >= 0x1ec6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ec6d0 size=16 callers=0 calls=0
*/
void sub_1ec6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ec6d0ULL || rel >= 0x1ec6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ec6e0 size=160 callers=0 calls=1
   calls: sub_1ed4d0
*/
void sub_1ec6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ec6e0ULL || rel >= 0x1ec780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ec780 size=112 callers=0 calls=0
*/
void sub_1ec780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ec780ULL || rel >= 0x1ec7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ec7f0 size=1360 callers=0 calls=1
   calls: sub_1ed4d0
*/
void sub_1ec7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ec7f0ULL || rel >= 0x1ecd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ecd40 size=272 callers=0 calls=0
*/
void sub_1ecd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ecd40ULL || rel >= 0x1ece50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ece50 size=112 callers=0 calls=0
*/
void sub_1ece50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ece50ULL || rel >= 0x1ecec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ecec0 size=240 callers=0 calls=0
*/
void sub_1ecec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ecec0ULL || rel >= 0x1ecfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ecfb0 size=256 callers=0 calls=0
*/
void sub_1ecfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ecfb0ULL || rel >= 0x1ed0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed0b0 size=16 callers=0 calls=0
*/
void sub_1ed0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed0b0ULL || rel >= 0x1ed0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed0c0 size=16 callers=0 calls=0
*/
void sub_1ed0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed0c0ULL || rel >= 0x1ed0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed0d0 size=16 callers=0 calls=0
*/
void sub_1ed0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed0d0ULL || rel >= 0x1ed0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed0e0 size=16 callers=0 calls=0
*/
void sub_1ed0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed0e0ULL || rel >= 0x1ed0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed0f0 size=16 callers=0 calls=0
*/
void sub_1ed0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed0f0ULL || rel >= 0x1ed100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed100 size=16 callers=0 calls=0
*/
void sub_1ed100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed100ULL || rel >= 0x1ed110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed110 size=16 callers=0 calls=0
*/
void sub_1ed110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed110ULL || rel >= 0x1ed120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed120 size=16 callers=0 calls=0
*/
void sub_1ed120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed120ULL || rel >= 0x1ed130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed130 size=16 callers=0 calls=0
*/
void sub_1ed130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed130ULL || rel >= 0x1ed140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed140 size=16 callers=0 calls=0
*/
void sub_1ed140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed140ULL || rel >= 0x1ed150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed150 size=16 callers=0 calls=0
*/
void sub_1ed150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed150ULL || rel >= 0x1ed160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed160 size=16 callers=0 calls=0
*/
void sub_1ed160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed160ULL || rel >= 0x1ed170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed170 size=16 callers=0 calls=0
*/
void sub_1ed170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed170ULL || rel >= 0x1ed180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed180 size=160 callers=0 calls=0
*/
void sub_1ed180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed180ULL || rel >= 0x1ed220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed220 size=32 callers=0 calls=0
*/
void sub_1ed220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed220ULL || rel >= 0x1ed240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed240 size=64 callers=0 calls=0
*/
void sub_1ed240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed240ULL || rel >= 0x1ed280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed280 size=48 callers=0 calls=0
*/
void sub_1ed280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed280ULL || rel >= 0x1ed2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed2b0 size=64 callers=0 calls=0
*/
void sub_1ed2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed2b0ULL || rel >= 0x1ed2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed2f0 size=192 callers=0 calls=0
*/
void sub_1ed2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed2f0ULL || rel >= 0x1ed3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed3b0 size=224 callers=0 calls=1
   calls: sub_1ed4d0
*/
void sub_1ed3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed3b0ULL || rel >= 0x1ed490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed490 size=16 callers=0 calls=0
*/
void sub_1ed490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed490ULL || rel >= 0x1ed4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed4a0 size=16 callers=0 calls=0
*/
void sub_1ed4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed4a0ULL || rel >= 0x1ed4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed4b0 size=16 callers=0 calls=0
*/
void sub_1ed4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed4b0ULL || rel >= 0x1ed4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed4c0 size=16 callers=0 calls=0
*/
void sub_1ed4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed4c0ULL || rel >= 0x1ed4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed4d0 size=560 callers=8 calls=0
*/
void sub_1ed4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed4d0ULL || rel >= 0x1ed700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed700 size=16 callers=0 calls=0
*/
void sub_1ed700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed700ULL || rel >= 0x1ed710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed710 size=112 callers=0 calls=0
*/
void sub_1ed710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed710ULL || rel >= 0x1ed780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed780 size=112 callers=0 calls=0
*/
void sub_1ed780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed780ULL || rel >= 0x1ed7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed7f0 size=16 callers=0 calls=0
*/
void sub_1ed7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed7f0ULL || rel >= 0x1ed800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed800 size=16 callers=0 calls=0
*/
void sub_1ed800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed800ULL || rel >= 0x1ed810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed810 size=16 callers=0 calls=0
*/
void sub_1ed810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed810ULL || rel >= 0x1ed820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed820 size=96 callers=0 calls=0
*/
void sub_1ed820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed820ULL || rel >= 0x1ed880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed880 size=16 callers=0 calls=0
*/
void sub_1ed880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed880ULL || rel >= 0x1ed890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed890 size=16 callers=0 calls=0
*/
void sub_1ed890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed890ULL || rel >= 0x1ed8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed8a0 size=192 callers=0 calls=1
   calls: sub_1ed4d0
*/
void sub_1ed8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed8a0ULL || rel >= 0x1ed960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed960 size=16 callers=0 calls=0
*/
void sub_1ed960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed960ULL || rel >= 0x1ed970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed970 size=16 callers=0 calls=0
*/
void sub_1ed970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed970ULL || rel >= 0x1ed980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed980 size=16 callers=0 calls=0
*/
void sub_1ed980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed980ULL || rel >= 0x1ed990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed990 size=32 callers=0 calls=0
*/
void sub_1ed990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed990ULL || rel >= 0x1ed9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed9b0 size=128 callers=0 calls=0
*/
void sub_1ed9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed9b0ULL || rel >= 0x1eda30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eda30 size=16 callers=0 calls=0
*/
void sub_1eda30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eda30ULL || rel >= 0x1eda40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eda40 size=16 callers=0 calls=0
*/
void sub_1eda40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eda40ULL || rel >= 0x1eda50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eda50 size=48 callers=0 calls=1
   calls: sub_1edad0
*/
void sub_1eda50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eda50ULL || rel >= 0x1eda80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eda80 size=64 callers=0 calls=1
   calls: sub_1edad0
*/
void sub_1eda80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eda80ULL || rel >= 0x1edac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001edac0 size=16 callers=0 calls=0
*/
void sub_1edac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1edac0ULL || rel >= 0x1edad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001edad0 size=704 callers=2 calls=0
*/
void sub_1edad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1edad0ULL || rel >= 0x1edd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001edd90 size=32 callers=0 calls=0
*/
void sub_1edd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1edd90ULL || rel >= 0x1eddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eddb0 size=96 callers=0 calls=0
*/
void sub_1eddb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eddb0ULL || rel >= 0x1ede10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ede10 size=96 callers=0 calls=0
*/
void sub_1ede10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ede10ULL || rel >= 0x1ede70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ede70 size=64 callers=0 calls=0
*/
void sub_1ede70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ede70ULL || rel >= 0x1edeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001edeb0 size=32 callers=0 calls=0
*/
void sub_1edeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1edeb0ULL || rel >= 0x1eded0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eded0 size=208 callers=0 calls=0
   ref: ~FileAccessor
*/
void FileAccessor(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eded0ULL || rel >= 0x1edfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001edfa0 size=1568 callers=0 calls=0
   ref: , offset: %lld, size: %zu, fetched: [{ offset: %lld, size: %zu }, { offset: %lld, size: %zu }, { off
   ref: , offset: %lld, size: %zu, fetched: [{ offset: %lld, size: %zu }, { offset: %lld, size: %zu }, { off
   ref: , offset: %lld, size: %zu, fetched: []
   ref: , offset: %lld, size: %zu, fetched: [{ offset: %lld, size: %zu }, { offset: %lld, size: %zu }, { off
   ref: , offset: %lld, size: %zu, fetched: [{ offset: %lld, size: %zu }, { offset: %lld, size: %zu }, { off
   ref: , offset: %lld, size: %zu, fetched: [{ offset: %lld, size: %zu }]
   ref: , offset: %lld, size: %zu
   ref: , offset: %lld, size: %zu, fetched: [{ offset: %lld, size: %zu }, { offset: %lld, size: %zu }]
*/
void ReadFile(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1edfa0ULL || rel >= 0x1ee5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ee5c0 size=16 callers=0 calls=0
*/
void sub_1ee5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ee5c0ULL || rel >= 0x1ee5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ee5d0 size=112 callers=0 calls=0
*/
void sub_1ee5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ee5d0ULL || rel >= 0x1ee640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ee640 size=576 callers=0 calls=0
   ref: , offset: %lld, size: %zu
   ref: ReadFile
*/
void ReadFile_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ee640ULL || rel >= 0x1ee880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ee880 size=368 callers=0 calls=0
*/
void sub_1ee880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ee880ULL || rel >= 0x1ee9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ee9f0 size=48 callers=0 calls=0
*/
void sub_1ee9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ee9f0ULL || rel >= 0x1eea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eea20 size=128 callers=0 calls=0
*/
void sub_1eea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eea20ULL || rel >= 0x1eeaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eeaa0 size=160 callers=0 calls=0
*/
void sub_1eeaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eeaa0ULL || rel >= 0x1eeb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eeb40 size=80 callers=0 calls=0
*/
void sub_1eeb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eeb40ULL || rel >= 0x1eeb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eeb90 size=16 callers=0 calls=0
*/
void sub_1eeb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eeb90ULL || rel >= 0x1eeba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eeba0 size=48 callers=0 calls=0
*/
void sub_1eeba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eeba0ULL || rel >= 0x1eebd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eebd0 size=64 callers=0 calls=0
*/
void sub_1eebd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eebd0ULL || rel >= 0x1eec10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eec10 size=320 callers=0 calls=0
   ref: FileSystemAccessor
*/
void FileSystemAccessor(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eec10ULL || rel >= 0x1eed50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eed50 size=336 callers=0 calls=0
   ref: ~FileSystemAccessor
*/
void FileSystemAccessor_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eed50ULL || rel >= 0x1eeea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eeea0 size=256 callers=0 calls=0
*/
void sub_1eeea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eeea0ULL || rel >= 0x1eefa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eefa0 size=48 callers=0 calls=0
*/
void sub_1eefa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eefa0ULL || rel >= 0x1eefd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eefd0 size=368 callers=0 calls=0
*/
void sub_1eefd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eefd0ULL || rel >= 0x1ef140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ef140 size=144 callers=0 calls=0
*/
void sub_1ef140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ef140ULL || rel >= 0x1ef1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ef1d0 size=144 callers=0 calls=0
*/
void sub_1ef1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ef1d0ULL || rel >= 0x1ef260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ef260 size=144 callers=0 calls=0
*/
void sub_1ef260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ef260ULL || rel >= 0x1ef2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ef2f0 size=144 callers=0 calls=0
*/
void sub_1ef2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ef2f0ULL || rel >= 0x1ef380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ef380 size=144 callers=0 calls=0
*/
void sub_1ef380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ef380ULL || rel >= 0x1ef410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ef410 size=368 callers=0 calls=0
*/
void sub_1ef410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ef410ULL || rel >= 0x1ef580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ef580 size=352 callers=0 calls=0
*/
void sub_1ef580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ef580ULL || rel >= 0x1ef6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ef6e0 size=176 callers=0 calls=0
*/
void sub_1ef6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ef6e0ULL || rel >= 0x1ef790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ef790 size=176 callers=0 calls=0
*/
void sub_1ef790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ef790ULL || rel >= 0x1ef840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ef840 size=176 callers=0 calls=0
*/
void sub_1ef840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ef840ULL || rel >= 0x1ef8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ef8f0 size=544 callers=0 calls=0
*/
void sub_1ef8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ef8f0ULL || rel >= 0x1efb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001efb10 size=384 callers=0 calls=0
*/
void sub_1efb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1efb10ULL || rel >= 0x1efc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001efc90 size=272 callers=0 calls=0
*/
void sub_1efc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1efc90ULL || rel >= 0x1efda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001efda0 size=80 callers=0 calls=0
*/
void sub_1efda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1efda0ULL || rel >= 0x1efdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001efdf0 size=64 callers=0 calls=0
*/
void sub_1efdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1efdf0ULL || rel >= 0x1efe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001efe30 size=16 callers=0 calls=0
*/
void sub_1efe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1efe30ULL || rel >= 0x1efe40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001efe40 size=144 callers=0 calls=0
*/
void sub_1efe40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1efe40ULL || rel >= 0x1efed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001efed0 size=144 callers=0 calls=0
*/
void sub_1efed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1efed0ULL || rel >= 0x1eff60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eff60 size=64 callers=0 calls=0
*/
void sub_1eff60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eff60ULL || rel >= 0x1effa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001effa0 size=32 callers=0 calls=0
*/
void sub_1effa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1effa0ULL || rel >= 0x1effc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001effc0 size=176 callers=0 calls=0
*/
void sub_1effc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1effc0ULL || rel >= 0x1f0070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f0070 size=112 callers=0 calls=0
*/
void sub_1f0070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f0070ULL || rel >= 0x1f00e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f00e0 size=240 callers=0 calls=0
   ref: Unmount
*/
void Unmount(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f00e0ULL || rel >= 0x1f01d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f01d0 size=160 callers=0 calls=0
*/
void sub_1f01d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f01d0ULL || rel >= 0x1f0270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f0270 size=16 callers=0 calls=0
*/
void sub_1f0270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f0270ULL || rel >= 0x1f0280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f0280 size=192 callers=0 calls=1
   calls: sub_1f0340
*/
void sub_1f0280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f0280ULL || rel >= 0x1f0340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f0340 size=512 callers=2 calls=0
*/
void sub_1f0340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f0340ULL || rel >= 0x1f0540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f0540 size=64 callers=0 calls=1
   calls: sub_1f0580
*/
void sub_1f0540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f0540ULL || rel >= 0x1f0580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f0580 size=528 callers=2 calls=0
*/
void sub_1f0580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f0580ULL || rel >= 0x1f0790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f0790 size=64 callers=0 calls=1
   calls: sub_1f0580
*/
void sub_1f0790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f0790ULL || rel >= 0x1f07d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f07d0 size=368 callers=0 calls=0
   ref: , name: "%s"
   ref: Unmount
*/
void Unmount_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f07d0ULL || rel >= 0x1f0940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f0940 size=416 callers=0 calls=1
   calls: sub_1f0340
   ref: ConvertToFsCommonPath
*/
void ConvertToFsCommonPath(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f0940ULL || rel >= 0x1f0ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f0ae0 size=192 callers=0 calls=0
*/
void sub_1f0ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f0ae0ULL || rel >= 0x1f0ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f0ba0 size=160 callers=0 calls=0
*/
void sub_1f0ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f0ba0ULL || rel >= 0x1f0c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f0c40 size=192 callers=0 calls=0
*/
void sub_1f0c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f0c40ULL || rel >= 0x1f0d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f0d00 size=16 callers=0 calls=0
*/
void sub_1f0d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f0d00ULL || rel >= 0x1f0d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f0d10 size=144 callers=0 calls=0
   ref: CloseDirectory
*/
void CloseDirectory(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f0d10ULL || rel >= 0x1f0da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f0da0 size=272 callers=0 calls=0
   ref: ReadDirectory
*/
void ReadDirectory(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f0da0ULL || rel >= 0x1f0eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f0eb0 size=160 callers=0 calls=0
   ref: GetDirectoryEntryCount
*/
void GetDirectoryEntryCount(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f0eb0ULL || rel >= 0x1f0f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f0f50 size=144 callers=0 calls=0
   ref: CloseFile
*/
void CloseFile(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f0f50ULL || rel >= 0x1f0fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f0fe0 size=288 callers=0 calls=0
   ref: ReadFile
*/
void ReadFile_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f0fe0ULL || rel >= 0x1f1100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f1100 size=160 callers=0 calls=0
   ref: ReadFile
*/
void ReadFile_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f1100ULL || rel >= 0x1f11a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f11a0 size=48 callers=0 calls=0
*/
void sub_1f11a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f11a0ULL || rel >= 0x1f11d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f11d0 size=160 callers=0 calls=0
   ref: ReadFile
*/
void ReadFile_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f11d0ULL || rel >= 0x1f1270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f1270 size=320 callers=0 calls=0
   ref: , offset: %lld, size: %zu, write_option: Flush
   ref: , offset: %lld, size: %zu
   ref: WriteFile
*/
void WriteFile(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f1270ULL || rel >= 0x1f13b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f13b0 size=240 callers=0 calls=0
   ref: FlushFile
*/
void FlushFile(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f13b0ULL || rel >= 0x1f14a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f14a0 size=256 callers=0 calls=0
   ref: , size: %lld
   ref: SetFileSize
*/
void SetFileSize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f14a0ULL || rel >= 0x1f15a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f15a0 size=160 callers=0 calls=0
   ref: GetFileSize
*/
void GetFileSize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f15a0ULL || rel >= 0x1f1640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f1640 size=16 callers=0 calls=0
*/
void sub_1f1640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f1640ULL || rel >= 0x1f1650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f1650 size=176 callers=0 calls=0
   ref: QueryRange
*/
void QueryRange(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f1650ULL || rel >= 0x1f1700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f1700 size=176 callers=0 calls=0
   ref: InvalidateCache
*/
void InvalidateCache(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f1700ULL || rel >= 0x1f17b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f17b0 size=32 callers=0 calls=0
*/
void sub_1f17b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f17b0ULL || rel >= 0x1f17d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f17d0 size=416 callers=0 calls=0
   ref: DeleteFile
   ref: , path: "%s"
*/
void DeleteFile(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f17d0ULL || rel >= 0x1f1970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f1970 size=416 callers=0 calls=0
   ref: CreateDirectory
   ref: , path: "%s"
*/
void CreateDirectory(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f1970ULL || rel >= 0x1f1b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f1b10 size=416 callers=0 calls=0
   ref: DeleteDirectory
   ref: , path: "%s"
*/
void DeleteDirectory(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f1b10ULL || rel >= 0x1f1cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f1cb0 size=416 callers=0 calls=0
   ref: , path: "%s"
   ref: DeleteDirectoryRecursively
*/
void DeleteDirectoryRecursively(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f1cb0ULL || rel >= 0x1f1e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f1e50 size=416 callers=0 calls=0
   ref: CleanDirectoryRecursively
   ref: , path: "%s"
*/
void CleanDirectoryRecursively(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f1e50ULL || rel >= 0x1f1ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f1ff0 size=688 callers=0 calls=0
   ref: , path: "%s", new_path: "%s"
   ref: RenameFile
*/
void RenameFile(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f1ff0ULL || rel >= 0x1f22a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f22a0 size=688 callers=0 calls=0
   ref: , path: "%s", new_path: "%s"
   ref: RenameDirectory
*/
void RenameDirectory(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f22a0ULL || rel >= 0x1f2550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f2550 size=432 callers=0 calls=0
   ref: GetEntryType
   ref: , path: "%s"
*/
void GetEntryType(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f2550ULL || rel >= 0x1f2700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f2700 size=544 callers=0 calls=0
   ref: OpenFile
   ref: , path: "%s", open_mode: 0x%X
*/
void OpenFile(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f2700ULL || rel >= 0x1f2920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f2920 size=240 callers=0 calls=0
   ref: OpenFile
*/
void OpenFile_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f2920ULL || rel >= 0x1f2a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f2a10 size=544 callers=0 calls=0
   ref: , path: "%s"
   ref: OpenDirectory
*/
void OpenDirectory(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f2a10ULL || rel >= 0x1f2c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f2c30 size=32 callers=0 calls=1
   calls: CommitImpl
   ref: Commit
*/
void Commit(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f2c30ULL || rel >= 0x1f2c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f2c50 size=400 callers=2 calls=0
   ref: , name: "%s"
   ref: CommitImpl
*/
void CommitImpl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f2c50ULL || rel >= 0x1f2de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f2de0 size=32 callers=0 calls=1
   calls: CommitImpl
   ref: CommitSaveData
*/
void CommitSaveData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f2de0ULL || rel >= 0x1f2e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f2e00 size=4928 callers=0 calls=1
   calls: sub_1f4140
   ref: Commit
   ref: (nullptr)
   ref: , name_array: [ %s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s ], na
*/
void Commit_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f2e00ULL || rel >= 0x1f4140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4140 size=464 callers=2 calls=0
*/
void sub_1f4140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4140ULL || rel >= 0x1f4310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4310 size=16 callers=0 calls=0
*/
void sub_1f4310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4310ULL || rel >= 0x1f4320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4320 size=224 callers=0 calls=0
   ref: GetFileTimeStampRawForDebug
*/
void GetFileTimeStampRawForDebug(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4320ULL || rel >= 0x1f4400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4400 size=448 callers=0 calls=0
   ref: , path: "%s", size: %lld
   ref: CreateFile
   ref: , path: "%s"
*/
void CreateFile(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4400ULL || rel >= 0x1f45c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f45c0 size=224 callers=0 calls=0
   ref: GetFreeSpaceSize
*/
void GetFreeSpaceSize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f45c0ULL || rel >= 0x1f46a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f46a0 size=224 callers=0 calls=0
   ref: GetTotalSpaceSize
*/
void GetTotalSpaceSize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f46a0ULL || rel >= 0x1f4780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4780 size=224 callers=0 calls=0
   ref: SetConcatenationFileAttribute
*/
void SetConcatenationFileAttribute(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4780ULL || rel >= 0x1f4860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4860 size=16 callers=0 calls=0
*/
void sub_1f4860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4860ULL || rel >= 0x1f4870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4870 size=48 callers=0 calls=0
*/
void sub_1f4870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4870ULL || rel >= 0x1f48a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f48a0 size=48 callers=0 calls=0
*/
void sub_1f48a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f48a0ULL || rel >= 0x1f48d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f48d0 size=32 callers=0 calls=0
*/
void sub_1f48d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f48d0ULL || rel >= 0x1f48f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f48f0 size=80 callers=0 calls=0
*/
void sub_1f48f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f48f0ULL || rel >= 0x1f4940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4940 size=288 callers=0 calls=0
   ref: GetAccessFailureDetectionEvent
*/
void GetAccessFailureDetectionEvent(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4940ULL || rel >= 0x1f4a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4a60 size=176 callers=0 calls=0
   ref: IsAccessFailureDetected
*/
void IsAccessFailureDetected(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4a60ULL || rel >= 0x1f4b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4b10 size=336 callers=0 calls=0
   ref: OpenAccessFailureDetectionEventNotifier
*/
void OpenAccessFailureDetectionEventNotifier(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4b10ULL || rel >= 0x1f4c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4c60 size=176 callers=0 calls=0
   ref: ResolveAccessFailure
*/
void ResolveAccessFailure(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4c60ULL || rel >= 0x1f4d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4d10 size=160 callers=0 calls=0
   ref: AbandonAccessFailure
*/
void AbandonAccessFailure(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4d10ULL || rel >= 0x1f4db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4db0 size=368 callers=0 calls=0
   ref: OpenAccessFailureResolver
*/
void OpenAccessFailureResolver(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4db0ULL || rel >= 0x1f4f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4f20 size=192 callers=0 calls=0
   ref: AbandonAccessFailure
*/
void AbandonAccessFailure_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4f20ULL || rel >= 0x1f4fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4fe0 size=464 callers=0 calls=0
   ref: MountApplicationPackage
*/
void MountApplicationPackage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4fe0ULL || rel >= 0x1f51b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f51b0 size=384 callers=0 calls=0
   ref: MountBcatSaveData
*/
void MountBcatSaveData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f51b0ULL || rel >= 0x1f5330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5330 size=448 callers=0 calls=0
   ref: MountBis
*/
void MountBis(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5330ULL || rel >= 0x1f54f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f54f0 size=144 callers=0 calls=0
   ref: @System
   ref: @CalibFile
*/
void System(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f54f0ULL || rel >= 0x1f5580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5580 size=368 callers=0 calls=0
   ref: SetBisRootForHost
*/
void SetBisRootForHost(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5580ULL || rel >= 0x1f56f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f56f0 size=32 callers=0 calls=0
*/
void sub_1f56f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f56f0ULL || rel >= 0x1f5710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5710 size=176 callers=0 calls=0
   ref: @System
   ref: @CalibFile
*/
void System_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5710ULL || rel >= 0x1f57c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f57c0 size=336 callers=0 calls=0
   ref: OpenBisPartition
*/
void OpenBisPartition(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f57c0ULL || rel >= 0x1f5910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5910 size=192 callers=0 calls=0
   ref: InvalidateBisCache
*/
void InvalidateBisCache(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5910ULL || rel >= 0x1f59d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f59d0 size=272 callers=0 calls=0
   ref: @System
   ref: @CalibFile
*/
void System_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f59d0ULL || rel >= 0x1f5ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5ae0 size=16 callers=0 calls=0
*/
void sub_1f5ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5ae0ULL || rel >= 0x1f5af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5af0 size=16 callers=0 calls=0
*/
void sub_1f5af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5af0ULL || rel >= 0x1f5b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5b00 size=368 callers=0 calls=0
   ref: MountCloudBackupWorkStorage
*/
void MountCloudBackupWorkStorage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5b00ULL || rel >= 0x1f5c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5c70 size=512 callers=0 calls=0
   ref: MountCode
*/
void MountCode(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5c70ULL || rel >= 0x1f5e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5e70 size=176 callers=0 calls=0
   ref: MountContent
*/
void MountContent(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5e70ULL || rel >= 0x1f5f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5f20 size=288 callers=0 calls=1
   calls: sub_1f6300
   ref: MountContent
*/
void MountContent_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5f20ULL || rel >= 0x1f6040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f6040 size=288 callers=0 calls=1
   calls: sub_1f6300
   ref: MountContent
*/
void MountContent_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f6040ULL || rel >= 0x1f6160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f6160 size=416 callers=0 calls=0
   ref: MountContent
*/
void MountContent_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f6160ULL || rel >= 0x1f6300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f6300 size=352 callers=2 calls=0
*/
void sub_1f6300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f6300ULL || rel >= 0x1f6460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f6460 size=1008 callers=0 calls=0
   ref: MountContentStorage
*/
void MountContentStorage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f6460ULL || rel >= 0x1f6850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f6850 size=80 callers=0 calls=0
*/
void sub_1f6850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f6850ULL || rel >= 0x1f68a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f68a0 size=64 callers=0 calls=0
*/
void sub_1f68a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f68a0ULL || rel >= 0x1f68e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f68e0 size=144 callers=0 calls=0
*/
void sub_1f68e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f68e0ULL || rel >= 0x1f6970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f6970 size=16 callers=0 calls=0
*/
void sub_1f6970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f6970ULL || rel >= 0x1f6980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f6980 size=48 callers=0 calls=0
   ref: CustomStorage0
*/
void CustomStorage0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f6980ULL || rel >= 0x1f69b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f69b0 size=352 callers=0 calls=0
   ref: MountCustomStorage
*/
void MountCustomStorage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f69b0ULL || rel >= 0x1f6b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f6b10 size=352 callers=0 calls=1
   calls: OpenDataStorageByDataId
   ref: QueryMountDataCacheSize
*/
void QueryMountDataCacheSize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f6b10ULL || rel >= 0x1f6c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f6c70 size=336 callers=2 calls=0
   ref: OpenDataStorageByDataId
*/
void OpenDataStorageByDataId(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f6c70ULL || rel >= 0x1f6dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f6dc0 size=272 callers=0 calls=1
   calls: sub_1f6ed0
   ref: MountData
*/
void MountData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f6dc0ULL || rel >= 0x1f6ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f6ed0 size=304 callers=3 calls=1
   calls: OpenDataStorageByDataId
*/
void sub_1f6ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f6ed0ULL || rel >= 0x1f7000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f7000 size=336 callers=0 calls=1
   calls: sub_1f6ed0
   ref: MountData
*/
void MountData_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f7000ULL || rel >= 0x1f7150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f7150 size=352 callers=0 calls=1
   calls: sub_1f6ed0
   ref: MountData
*/
void MountData_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f7150ULL || rel >= 0x1f72b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f72b0 size=192 callers=0 calls=0
   ref: CreatePaddingFile
*/
void CreatePaddingFile(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f72b0ULL || rel >= 0x1f7370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f7370 size=192 callers=0 calls=0
   ref: DeleteAllPaddingFiles
*/
void DeleteAllPaddingFiles(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f7370ULL || rel >= 0x1f7430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f7430 size=208 callers=0 calls=0
   ref: OverrideSaveDataTransferTokenSignVerificationKey
*/
void OverrideSaveDataTransferTokenSignVerificationKey(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f7430ULL || rel >= 0x1f7500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f7500 size=288 callers=0 calls=1
   calls: sub_1f7750
   ref: , name: "%s"
   ref: MountDeviceSaveData
*/
void MountDeviceSaveData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f7500ULL || rel >= 0x1f7620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f7620 size=304 callers=0 calls=1
   calls: sub_1f7750
   ref: MountDeviceSaveData
   ref: , name: "%s", applicationid: 0x%llX
*/
void MountDeviceSaveData_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f7620ULL || rel >= 0x1f7750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f7750 size=320 callers=4 calls=0
*/
void sub_1f7750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f7750ULL || rel >= 0x1f7890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f7890 size=256 callers=0 calls=0
   ref: GetAndClearFileSystemProxyErrorInfo
*/
void GetAndClearFileSystemProxyErrorInfo(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f7890ULL || rel >= 0x1f7990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f7990 size=48 callers=0 calls=0
*/
void sub_1f7990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f7990ULL || rel >= 0x1f79c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f79c0 size=48 callers=0 calls=0
*/
void sub_1f79c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f79c0ULL || rel >= 0x1f79f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f79f0 size=80 callers=0 calls=0
*/
void sub_1f79f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f79f0ULL || rel >= 0x1f7a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f7a40 size=224 callers=0 calls=0
   ref: DoBindEvent
*/
void DoBindEvent(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f7a40ULL || rel >= 0x1f7b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f7b20 size=16 callers=0 calls=0
*/
void sub_1f7b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f7b20ULL || rel >= 0x1f7b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f7b30 size=112 callers=0 calls=0
*/
void sub_1f7b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f7b30ULL || rel >= 0x1f7ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f7ba0 size=16 callers=0 calls=0
*/
void sub_1f7ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f7ba0ULL || rel >= 0x1f7bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f7bb0 size=16 callers=0 calls=0
*/
void sub_1f7bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f7bb0ULL || rel >= 0x1f7bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f7bc0 size=32 callers=0 calls=0
*/
void sub_1f7bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f7bc0ULL || rel >= 0x1f7be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f7be0 size=96 callers=0 calls=0
*/
void sub_1f7be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f7be0ULL || rel >= 0x1f7c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f7c40 size=1024 callers=0 calls=3
   calls: sub_1c0, sub_1f8ba0, sub_20a880
   ref: fsp-srv
*/
void fsp_srv(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f7c40ULL || rel >= 0x1f8040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f8040 size=1328 callers=0 calls=1
   calls: sub_1c0
   ref: fsp-ldr
*/
void fsp_ldr(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f8040ULL || rel >= 0x1f8570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f8570 size=32 callers=0 calls=0
*/
void sub_1f8570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f8570ULL || rel >= 0x1f8590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f8590 size=1344 callers=0 calls=1
   calls: sub_1c0
   ref: fsp-pr
*/
void fsp_pr(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f8590ULL || rel >= 0x1f8ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f8ad0 size=32 callers=0 calls=0
*/
void sub_1f8ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f8ad0ULL || rel >= 0x1f8af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f8af0 size=32 callers=0 calls=0
*/
void sub_1f8af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f8af0ULL || rel >= 0x1f8b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f8b10 size=144 callers=0 calls=2
   calls: sub_1f8ba0, sub_20a880
*/
void sub_1f8b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f8b10ULL || rel >= 0x1f8ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f8ba0 size=400 callers=3 calls=1
   calls: sub_1c0
*/
void sub_1f8ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f8ba0ULL || rel >= 0x1f8d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f8d30 size=144 callers=0 calls=2
   calls: sub_1f8ba0, sub_20a880
*/
void sub_1f8d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f8d30ULL || rel >= 0x1f8dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f8dc0 size=80 callers=0 calls=0
*/
void sub_1f8dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f8dc0ULL || rel >= 0x1f8e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f8e10 size=80 callers=0 calls=0
*/
void sub_1f8e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f8e10ULL || rel >= 0x1f8e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f8e60 size=96 callers=0 calls=0
*/
void sub_1f8e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f8e60ULL || rel >= 0x1f8ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f8ec0 size=16 callers=0 calls=0
*/
void sub_1f8ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f8ec0ULL || rel >= 0x1f8ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f8ed0 size=16 callers=0 calls=0
*/
void sub_1f8ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f8ed0ULL || rel >= 0x1f8ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f8ee0 size=128 callers=0 calls=0
*/
void sub_1f8ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f8ee0ULL || rel >= 0x1f8f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f8f60 size=16 callers=0 calls=0
*/
void sub_1f8f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f8f60ULL || rel >= 0x1f8f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f8f70 size=32 callers=0 calls=0
*/
void sub_1f8f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f8f70ULL || rel >= 0x1f8f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f8f90 size=144 callers=0 calls=1
   calls: sub_1fbfc0
*/
void sub_1f8f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f8f90ULL || rel >= 0x1f9020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9020 size=176 callers=0 calls=1
   calls: sub_1fbfc0
*/
void sub_1f9020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9020ULL || rel >= 0x1f90d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f90d0 size=192 callers=0 calls=1
   calls: sub_1fbfc0
*/
void sub_1f90d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f90d0ULL || rel >= 0x1f9190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9190 size=160 callers=0 calls=1
   calls: sub_1fbfc0
*/
void sub_1f9190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9190ULL || rel >= 0x1f9230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9230 size=176 callers=0 calls=1
   calls: sub_1fbfc0
*/
void sub_1f9230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9230ULL || rel >= 0x1f92e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f92e0 size=160 callers=0 calls=1
   calls: sub_1fef60
*/
void sub_1f92e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f92e0ULL || rel >= 0x1f9380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9380 size=32 callers=0 calls=0
*/
void sub_1f9380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9380ULL || rel >= 0x1f93a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f93a0 size=160 callers=0 calls=1
   calls: sub_1fbfc0
*/
void sub_1f93a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f93a0ULL || rel >= 0x1f9440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9440 size=144 callers=0 calls=1
   calls: sub_1fbfc0
*/
void sub_1f9440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9440ULL || rel >= 0x1f94d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f94d0 size=32 callers=0 calls=0
*/
void sub_1f94d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f94d0ULL || rel >= 0x1f94f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f94f0 size=32 callers=0 calls=0
*/
void sub_1f94f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f94f0ULL || rel >= 0x1f9510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9510 size=32 callers=0 calls=0
*/
void sub_1f9510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9510ULL || rel >= 0x1f9530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9530 size=32 callers=0 calls=0
*/
void sub_1f9530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9530ULL || rel >= 0x1f9550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9550 size=48 callers=0 calls=0
*/
void sub_1f9550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9550ULL || rel >= 0x1f9580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9580 size=48 callers=0 calls=0
*/
void sub_1f9580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9580ULL || rel >= 0x1f95b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f95b0 size=32 callers=0 calls=0
*/
void sub_1f95b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f95b0ULL || rel >= 0x1f95d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f95d0 size=32 callers=0 calls=0
*/
void sub_1f95d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f95d0ULL || rel >= 0x1f95f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f95f0 size=48 callers=0 calls=0
*/
void sub_1f95f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f95f0ULL || rel >= 0x1f9620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9620 size=176 callers=0 calls=1
   calls: sub_1fef60
*/
void sub_1f9620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9620ULL || rel >= 0x1f96d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f96d0 size=176 callers=0 calls=1
   calls: sub_1fbfc0
*/
void sub_1f96d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f96d0ULL || rel >= 0x1f9780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9780 size=48 callers=0 calls=0
*/
void sub_1f9780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9780ULL || rel >= 0x1f97b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f97b0 size=48 callers=0 calls=0
*/
void sub_1f97b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f97b0ULL || rel >= 0x1f97e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f97e0 size=48 callers=0 calls=0
*/
void sub_1f97e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f97e0ULL || rel >= 0x1f9810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9810 size=32 callers=0 calls=0
*/
void sub_1f9810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9810ULL || rel >= 0x1f9830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9830 size=176 callers=0 calls=1
   calls: sub_1fbfc0
*/
void sub_1f9830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9830ULL || rel >= 0x1f98e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f98e0 size=176 callers=0 calls=1
   calls: sub_1fbfc0
*/
void sub_1f98e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f98e0ULL || rel >= 0x1f9990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9990 size=176 callers=0 calls=1
   calls: sub_1fbfc0
*/
void sub_1f9990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9990ULL || rel >= 0x1f9a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9a40 size=64 callers=0 calls=0
*/
void sub_1f9a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9a40ULL || rel >= 0x1f9a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9a80 size=48 callers=0 calls=0
*/
void sub_1f9a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9a80ULL || rel >= 0x1f9ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9ab0 size=48 callers=0 calls=0
*/
void sub_1f9ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9ab0ULL || rel >= 0x1f9ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9ae0 size=144 callers=0 calls=1
   calls: sub_201210
*/
void sub_1f9ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9ae0ULL || rel >= 0x1f9b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9b70 size=160 callers=0 calls=1
   calls: sub_201210
*/
void sub_1f9b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9b70ULL || rel >= 0x1f9c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9c10 size=144 callers=0 calls=1
   calls: sub_201210
*/
void sub_1f9c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9c10ULL || rel >= 0x1f9ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9ca0 size=176 callers=0 calls=1
   calls: sub_1fbfc0
*/
void sub_1f9ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9ca0ULL || rel >= 0x1f9d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9d50 size=48 callers=0 calls=0
*/
void sub_1f9d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9d50ULL || rel >= 0x1f9d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9d80 size=64 callers=0 calls=0
*/
void sub_1f9d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9d80ULL || rel >= 0x1f9dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9dc0 size=64 callers=0 calls=0
*/
void sub_1f9dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9dc0ULL || rel >= 0x1f9e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9e00 size=176 callers=0 calls=1
   calls: sub_201210
*/
void sub_1f9e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9e00ULL || rel >= 0x1f9eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9eb0 size=176 callers=0 calls=1
   calls: sub_1fd060
*/
void sub_1f9eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9eb0ULL || rel >= 0x1f9f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9f60 size=144 callers=0 calls=1
   calls: sub_202070
*/
void sub_1f9f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9f60ULL || rel >= 0x1f9ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9ff0 size=144 callers=0 calls=1
   calls: sub_202ef0
*/
void sub_1f9ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9ff0ULL || rel >= 0x1fa080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fa080 size=160 callers=0 calls=1
   calls: sub_205dc0
*/
void sub_1fa080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fa080ULL || rel >= 0x1fa120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fa120 size=64 callers=0 calls=0
*/
void sub_1fa120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fa120ULL || rel >= 0x1fa160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fa160 size=160 callers=0 calls=1
   calls: sub_1fbfc0
*/
void sub_1fa160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fa160ULL || rel >= 0x1fa200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fa200 size=160 callers=0 calls=1
   calls: sub_1fbfc0
*/
void sub_1fa200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fa200ULL || rel >= 0x1fa2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fa2a0 size=160 callers=0 calls=1
   calls: sub_1fbfc0
*/
void sub_1fa2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fa2a0ULL || rel >= 0x1fa340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fa340 size=160 callers=0 calls=1
   calls: sub_1fbfc0
*/
void sub_1fa340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fa340ULL || rel >= 0x1fa3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fa3e0 size=144 callers=0 calls=1
   calls: sub_1fef60
*/
void sub_1fa3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fa3e0ULL || rel >= 0x1fa470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fa470 size=160 callers=0 calls=1
   calls: sub_1fef60
*/
void sub_1fa470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fa470ULL || rel >= 0x1fa510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fa510 size=176 callers=0 calls=1
   calls: sub_1fef60
*/
void sub_1fa510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fa510ULL || rel >= 0x1fa5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fa5c0 size=144 callers=0 calls=1
   calls: sub_1fef60
*/
void sub_1fa5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fa5c0ULL || rel >= 0x1fa650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fa650 size=160 callers=0 calls=1
   calls: sub_1fbfc0
*/
void sub_1fa650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fa650ULL || rel >= 0x1fa6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fa6f0 size=160 callers=0 calls=1
   calls: sub_1fef60
*/
void sub_1fa6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fa6f0ULL || rel >= 0x1fa790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fa790 size=144 callers=0 calls=1
   calls: sub_206360
*/
void sub_1fa790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fa790ULL || rel >= 0x1fa820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fa820 size=144 callers=0 calls=1
   calls: sub_2080b0
*/
void sub_1fa820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fa820ULL || rel >= 0x1fa8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fa8b0 size=144 callers=0 calls=1
   calls: sub_2080b0
*/
void sub_1fa8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fa8b0ULL || rel >= 0x1fa940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fa940 size=144 callers=0 calls=1
   calls: sub_2080b0
*/
void sub_1fa940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fa940ULL || rel >= 0x1fa9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fa9d0 size=32 callers=0 calls=0
*/
void sub_1fa9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fa9d0ULL || rel >= 0x1fa9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fa9f0 size=48 callers=0 calls=0
*/
void sub_1fa9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fa9f0ULL || rel >= 0x1faa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001faa20 size=32 callers=0 calls=0
*/
void sub_1faa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1faa20ULL || rel >= 0x1faa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001faa40 size=48 callers=0 calls=0
*/
void sub_1faa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1faa40ULL || rel >= 0x1faa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001faa70 size=32 callers=0 calls=0
*/
void sub_1faa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1faa70ULL || rel >= 0x1faa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001faa90 size=32 callers=0 calls=0
*/
void sub_1faa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1faa90ULL || rel >= 0x1faab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001faab0 size=32 callers=0 calls=0
*/
void sub_1faab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1faab0ULL || rel >= 0x1faad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001faad0 size=48 callers=0 calls=0
*/
void sub_1faad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1faad0ULL || rel >= 0x1fab00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fab00 size=32 callers=0 calls=0
*/
void sub_1fab00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fab00ULL || rel >= 0x1fab20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fab20 size=32 callers=0 calls=0
*/
void sub_1fab20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fab20ULL || rel >= 0x1fab40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fab40 size=48 callers=0 calls=0
*/
void sub_1fab40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fab40ULL || rel >= 0x1fab70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fab70 size=48 callers=0 calls=0
*/
void sub_1fab70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fab70ULL || rel >= 0x1faba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001faba0 size=48 callers=0 calls=0
*/
void sub_1faba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1faba0ULL || rel >= 0x1fabd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fabd0 size=48 callers=0 calls=0
*/
void sub_1fabd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fabd0ULL || rel >= 0x1fac00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fac00 size=48 callers=0 calls=0
*/
void sub_1fac00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fac00ULL || rel >= 0x1fac30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fac30 size=48 callers=0 calls=0
*/
void sub_1fac30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fac30ULL || rel >= 0x1fac60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fac60 size=48 callers=0 calls=0
*/
void sub_1fac60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fac60ULL || rel >= 0x1fac90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fac90 size=48 callers=0 calls=0
*/
void sub_1fac90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fac90ULL || rel >= 0x1facc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001facc0 size=32 callers=0 calls=0
*/
void sub_1facc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1facc0ULL || rel >= 0x1face0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001face0 size=32 callers=0 calls=0
*/
void sub_1face0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1face0ULL || rel >= 0x1fad00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fad00 size=48 callers=0 calls=0
*/
void sub_1fad00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fad00ULL || rel >= 0x1fad30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fad30 size=32 callers=0 calls=0
*/
void sub_1fad30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fad30ULL || rel >= 0x1fad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fad50 size=32 callers=0 calls=0
*/
void sub_1fad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fad50ULL || rel >= 0x1fad70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fad70 size=160 callers=0 calls=1
   calls: sub_2080b0
*/
void sub_1fad70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fad70ULL || rel >= 0x1fae10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fae10 size=32 callers=0 calls=0
*/
void sub_1fae10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fae10ULL || rel >= 0x1fae30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fae30 size=32 callers=0 calls=0
*/
void sub_1fae30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fae30ULL || rel >= 0x1fae50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fae50 size=32 callers=0 calls=0
*/
void sub_1fae50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fae50ULL || rel >= 0x1fae70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fae70 size=32 callers=0 calls=0
*/
void sub_1fae70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fae70ULL || rel >= 0x1fae90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fae90 size=32 callers=0 calls=0
*/
void sub_1fae90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fae90ULL || rel >= 0x1faeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001faeb0 size=48 callers=0 calls=0
*/
void sub_1faeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1faeb0ULL || rel >= 0x1faee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001faee0 size=48 callers=0 calls=0
*/
void sub_1faee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1faee0ULL || rel >= 0x1faf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001faf10 size=32 callers=0 calls=0
*/
void sub_1faf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1faf10ULL || rel >= 0x1faf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001faf30 size=48 callers=0 calls=0
*/
void sub_1faf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1faf30ULL || rel >= 0x1faf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001faf60 size=32 callers=0 calls=0
*/
void sub_1faf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1faf60ULL || rel >= 0x1faf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001faf80 size=48 callers=0 calls=0
*/
void sub_1faf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1faf80ULL || rel >= 0x1fafb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fafb0 size=32 callers=0 calls=0
*/
void sub_1fafb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fafb0ULL || rel >= 0x1fafd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fafd0 size=48 callers=0 calls=0
*/
void sub_1fafd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fafd0ULL || rel >= 0x1fb000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb000 size=32 callers=0 calls=0
*/
void sub_1fb000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb000ULL || rel >= 0x1fb020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb020 size=144 callers=0 calls=1
   calls: sub_1fbfc0
*/
void sub_1fb020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb020ULL || rel >= 0x1fb0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb0b0 size=32 callers=0 calls=0
*/
void sub_1fb0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb0b0ULL || rel >= 0x1fb0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

