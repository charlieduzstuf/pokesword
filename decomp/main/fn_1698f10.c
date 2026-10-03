/* main functions 01698f10..016b35e0 (194 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 01698f10 size=160 callers=1 calls=5
   calls: sub_1652bd0, sub_1655080, sub_165ba50, sub_1699470, sub_17162d0
*/
void sub_1698f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1698f10ULL || rel >= 0x1698fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01698fb0 size=96 callers=0 calls=2
   calls: sub_1655170, sub_1716390
*/
void sub_1698fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1698fb0ULL || rel >= 0x1699010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01699010 size=112 callers=0 calls=3
   calls: sub_1655170, sub_165baa0, sub_1716390
*/
void sub_1699010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1699010ULL || rel >= 0x1699080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01699080 size=304 callers=1 calls=7
   calls: LocalAllowParticipatingBackgroundJob_AllowParticipating, sub_1655110, sub_1655190, sub_1655850, sub_165e060, sub_165e140, sub_1694a60
   ref: LocalAllowParticipatingJob::WaitAllowParticipating
*/
void LocalAllowParticipatingJob_WaitAllowParticipating(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1699080ULL || rel >= 0x16991b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016991b0 size=256 callers=0 calls=5
   calls: sub_1655330, sub_165e060, sub_165e140, sub_16928a0, sub_16935a0
   ref: LocalAllowParticipatingJob::WaitBackgroundJobEnd
*/
void LocalAllowParticipatingJob_WaitBackgroundJobEnd(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16991b0ULL || rel >= 0x16992b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016992b0 size=224 callers=1 calls=5
   calls: sub_1655220, sub_165bba0, sub_165e060, sub_165e140, sub_1699740
*/
void sub_16992b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16992b0ULL || rel >= 0x1699390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01699390 size=96 callers=0 calls=1
   calls: sub_1655a80
   ref: LocalAllowParticipatingJob::CompleteProcess
*/
void LocalAllowParticipatingJob_CompleteProcess(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1699390ULL || rel >= 0x16993f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016993f0 size=112 callers=0 calls=3
   calls: sub_16551b0, sub_1655220, sub_165e060
*/
void sub_16993f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16993f0ULL || rel >= 0x1699460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01699460 size=16 callers=0 calls=0
*/
void sub_1699460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1699460ULL || rel >= 0x1699470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01699470 size=64 callers=1 calls=1
   calls: sub_165ba50
*/
void sub_1699470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1699470ULL || rel >= 0x16994b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016994b0 size=32 callers=0 calls=0
*/
void sub_16994b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16994b0ULL || rel >= 0x16994d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016994d0 size=64 callers=0 calls=1
   calls: sub_165baa0
*/
void sub_16994d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16994d0ULL || rel >= 0x1699510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01699510 size=208 callers=1 calls=4
   calls: sub_1655110, sub_1655190, sub_16559c0, sub_165e060
   ref: LocalAllowParticipatingBackgroundJob::AllowParticipating
*/
void LocalAllowParticipatingBackgroundJob_AllowParticipating(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1699510ULL || rel >= 0x16995e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016995e0 size=352 callers=0 calls=4
   calls: sub_16551b0, sub_1655220, sub_165e060, sub_165e140
*/
void sub_16995e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16995e0ULL || rel >= 0x1699740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01699740 size=144 callers=1 calls=2
   calls: sub_1655220, sub_165e060
*/
void sub_1699740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1699740ULL || rel >= 0x16997d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016997d0 size=16 callers=0 calls=0
*/
void sub_16997d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16997d0ULL || rel >= 0x16997e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016997e0 size=256 callers=1 calls=7
   calls: sub_1652bd0, sub_1653900, sub_1655080, sub_165ba50, sub_165fb30, sub_1699e40, sub_17162d0
*/
void sub_16997e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16997e0ULL || rel >= 0x16998e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016998e0 size=192 callers=1 calls=3
   calls: sub_1652d30, sub_1655170, sub_1716390
*/
void sub_16998e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16998e0ULL || rel >= 0x16999a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016999a0 size=48 callers=0 calls=1
   calls: sub_16998e0
*/
void sub_16999a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16999a0ULL || rel >= 0x16999d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016999d0 size=128 callers=1 calls=1
   calls: sub_165e060
   ref: LocalEjectClientListCheckJob::CheckTargetList
*/
void LocalEjectClientListCheckJob_CheckTargetList(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16999d0ULL || rel >= 0x1699a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01699a50 size=64 callers=0 calls=0
   ref: LocalEjectClientListCheckJob::EjectTargetClient
*/
void LocalEjectClientListCheckJob_EjectTargetClient(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1699a50ULL || rel >= 0x1699a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01699a90 size=80 callers=1 calls=2
   calls: sub_165bba0, sub_169a0d0
*/
void sub_1699a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1699a90ULL || rel >= 0x1699ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01699ae0 size=448 callers=2 calls=4
   calls: sub_1652d30, sub_1653bb0, sub_165fb50, sub_165fd50
*/
void sub_1699ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1699ae0ULL || rel >= 0x1699ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01699ca0 size=224 callers=0 calls=4
   calls: LocalEjectClientBackgroundJob_EjectClient, sub_1652d30, sub_1655850, sub_165fb50
   ref: LocalEjectClientListCheckJob::WaitEjectTargetClient
*/
void LocalEjectClientListCheckJob_WaitEjectTargetClient(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1699ca0ULL || rel >= 0x1699d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01699d80 size=96 callers=0 calls=0
   ref: LocalEjectClientListCheckJob::WaitBackgroundJobEnd
*/
void LocalEjectClientListCheckJob_WaitBackgroundJobEnd(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1699d80ULL || rel >= 0x1699de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01699de0 size=80 callers=0 calls=1
   calls: sub_1655a80
   ref: LocalEjectClientListCheckJob::CheckTargetList
*/
void LocalEjectClientListCheckJob_CheckTargetList_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1699de0ULL || rel >= 0x1699e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01699e30 size=16 callers=0 calls=0
*/
void sub_1699e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1699e30ULL || rel >= 0x1699e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01699e40 size=80 callers=1 calls=2
   calls: sub_165ba50, sub_165fb30
*/
void sub_1699e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1699e40ULL || rel >= 0x1699e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01699e90 size=80 callers=0 calls=1
   calls: sub_1652d30
*/
void sub_1699e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1699e90ULL || rel >= 0x1699ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01699ee0 size=96 callers=0 calls=2
   calls: sub_1652d30, sub_165baa0
*/
void sub_1699ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1699ee0ULL || rel >= 0x1699f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01699f40 size=224 callers=1 calls=5
   calls: sub_1653bb0, sub_1655110, sub_1655190, sub_165e060, sub_165fd50
   ref: LocalEjectClientBackgroundJob::EjectClient
*/
void LocalEjectClientBackgroundJob_EjectClient(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1699f40ULL || rel >= 0x169a020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169a020 size=176 callers=0 calls=3
   calls: sub_16551b0, sub_1655220, sub_165e060
*/
void sub_169a020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169a020ULL || rel >= 0x169a0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169a0d0 size=144 callers=1 calls=3
   calls: sub_1653900, sub_1655220, sub_165e060
*/
void sub_169a0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169a0d0ULL || rel >= 0x169a160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169a160 size=16 callers=0 calls=0
*/
void sub_169a160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169a160ULL || rel >= 0x169a170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169a170 size=80 callers=8 calls=2
   calls: sub_1653900, sub_1687030
*/
void sub_169a170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169a170ULL || rel >= 0x169a1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169a1c0 size=32 callers=8 calls=0
*/
void sub_169a1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169a1c0ULL || rel >= 0x169a1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169a1e0 size=64 callers=0 calls=1
   calls: sub_1652d30
*/
void sub_169a1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169a1e0ULL || rel >= 0x169a220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169a220 size=272 callers=0 calls=3
   calls: sub_165e060, sub_1687070, sub_1687080
*/
void sub_169a220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169a220ULL || rel >= 0x169a330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169a330 size=256 callers=0 calls=3
   calls: sub_165e060, sub_1687070, sub_1687180
*/
void sub_169a330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169a330ULL || rel >= 0x169a430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169a430 size=16 callers=0 calls=0
*/
void sub_169a430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169a430ULL || rel >= 0x169a440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169a440 size=32 callers=0 calls=1
   calls: sub_1687070
*/
void sub_169a440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169a440ULL || rel >= 0x169a460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169a460 size=176 callers=1 calls=4
   calls: sub_1652bd0, sub_165ba50, sub_1697830, sub_17162d0
*/
void sub_169a460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169a460ULL || rel >= 0x169a510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169a510 size=96 callers=0 calls=2
   calls: sub_1716390, sub_17163e0
*/
void sub_169a510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169a510ULL || rel >= 0x169a570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169a570 size=112 callers=0 calls=3
   calls: sub_165baa0, sub_1716390, sub_17163e0
*/
void sub_169a570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169a570ULL || rel >= 0x169a5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169a5e0 size=112 callers=1 calls=1
   calls: sub_165e060
   ref: LocalResendMessageJob::ResendMessage
*/
void LocalResendMessageJob_ResendMessage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169a5e0ULL || rel >= 0x169a650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169a650 size=160 callers=0 calls=3
   calls: sub_165c600, sub_165c6b0, sub_1694530
*/
void sub_169a650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169a650ULL || rel >= 0x169a6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169a6f0 size=16 callers=1 calls=0
*/
void sub_169a6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169a6f0ULL || rel >= 0x169a700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169a700 size=176 callers=1 calls=4
   calls: sub_165c600, sub_165e060, sub_1694530, sub_1697840
*/
void sub_169a700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169a700ULL || rel >= 0x169a7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169a7b0 size=48 callers=1 calls=0
*/
void sub_169a7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169a7b0ULL || rel >= 0x169a7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169a7e0 size=32 callers=1 calls=0
*/
void sub_169a7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169a7e0ULL || rel >= 0x169a800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169a800 size=16 callers=0 calls=0
*/
void sub_169a800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169a800ULL || rel >= 0x169a810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169a810 size=96 callers=2 calls=4
   calls: sub_1652bd0, sub_1655080, sub_165ba50, sub_17162d0
*/
void sub_169a810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169a810ULL || rel >= 0x169a870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169a870 size=80 callers=1 calls=2
   calls: sub_1655170, sub_1716390
*/
void sub_169a870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169a870ULL || rel >= 0x169a8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169a8c0 size=96 callers=0 calls=3
   calls: sub_1655170, sub_165baa0, sub_1716390
*/
void sub_169a8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169a8c0ULL || rel >= 0x169a920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169a920 size=208 callers=0 calls=4
   calls: sub_1655110, sub_1655190, sub_1655850, sub_165e060
   ref: LocalScanNetworkJob::WaitScanNetwork
*/
void LocalScanNetworkJob_WaitScanNetwork(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169a920ULL || rel >= 0x169a9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169a9f0 size=240 callers=0 calls=4
   calls: sub_16551b0, sub_1655220, sub_1655330, sub_165e060
   ref: LocalScanNetworkJob::WaitForCancel
*/
void LocalScanNetworkJob_WaitForCancel(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169a9f0ULL || rel >= 0x169aae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169aae0 size=144 callers=1 calls=3
   calls: sub_1655220, sub_1655330, sub_165e060
*/
void sub_169aae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169aae0ULL || rel >= 0x169ab70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169ab70 size=160 callers=0 calls=2
   calls: sub_1655220, sub_165e060
*/
void sub_169ab70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169ab70ULL || rel >= 0x169ac10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169ac10 size=16 callers=0 calls=0
*/
void sub_169ac10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169ac10ULL || rel >= 0x169ac20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169ac20 size=32 callers=1 calls=0
*/
void sub_169ac20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169ac20ULL || rel >= 0x169ac40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169ac40 size=16 callers=1 calls=0
*/
void sub_169ac40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169ac40ULL || rel >= 0x169ac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169ac50 size=16 callers=0 calls=0
*/
void sub_169ac50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169ac50ULL || rel >= 0x169ac60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169ac60 size=48 callers=1 calls=0
*/
void sub_169ac60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169ac60ULL || rel >= 0x169ac90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169ac90 size=16 callers=1 calls=0
*/
void sub_169ac90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169ac90ULL || rel >= 0x169aca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169aca0 size=16 callers=0 calls=0
*/
void sub_169aca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169aca0ULL || rel >= 0x169acb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169acb0 size=16 callers=0 calls=0
*/
void sub_169acb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169acb0ULL || rel >= 0x169acc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169acc0 size=80 callers=1 calls=0
*/
void sub_169acc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169acc0ULL || rel >= 0x169ad10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169ad10 size=16 callers=1 calls=0
*/
void sub_169ad10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169ad10ULL || rel >= 0x169ad20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169ad20 size=16 callers=0 calls=0
*/
void sub_169ad20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169ad20ULL || rel >= 0x169ad30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169ad30 size=16 callers=0 calls=0
*/
void sub_169ad30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169ad30ULL || rel >= 0x169ad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169ad40 size=16 callers=2 calls=0
*/
void sub_169ad40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169ad40ULL || rel >= 0x169ad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169ad50 size=16 callers=0 calls=0
*/
void sub_169ad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169ad50ULL || rel >= 0x169ad60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169ad60 size=304 callers=0 calls=0
*/
void sub_169ad60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169ad60ULL || rel >= 0x169ae90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169ae90 size=64 callers=1 calls=1
   calls: sub_1735d50
*/
void sub_169ae90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169ae90ULL || rel >= 0x169aed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169aed0 size=16 callers=1 calls=0
*/
void sub_169aed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169aed0ULL || rel >= 0x169aee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169aee0 size=16 callers=0 calls=0
*/
void sub_169aee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169aee0ULL || rel >= 0x169aef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169aef0 size=48 callers=1 calls=1
   calls: sub_1735d70
*/
void sub_169aef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169aef0ULL || rel >= 0x169af20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169af20 size=16 callers=0 calls=0
*/
void sub_169af20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169af20ULL || rel >= 0x169af30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169af30 size=80 callers=3 calls=1
   calls: sub_165ba50
*/
void sub_169af30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169af30ULL || rel >= 0x169af80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169af80 size=16 callers=2 calls=0
*/
void sub_169af80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169af80ULL || rel >= 0x169af90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169af90 size=48 callers=0 calls=1
   calls: sub_165baa0
*/
void sub_169af90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169af90ULL || rel >= 0x169afc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169afc0 size=32 callers=3 calls=0
*/
void sub_169afc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169afc0ULL || rel >= 0x169afe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169afe0 size=368 callers=2 calls=6
   calls: sub_1652d30, sub_1655190, sub_1655950, sub_165e060, sub_165fd50, sub_1749cf0
   ref: ConnectStationJob::SendConnectionRequest
*/
void ConnectStationJob_SendConnectionRequest_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169afe0ULL || rel >= 0x169b150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169b150 size=432 callers=0 calls=4
   calls: sub_1655290, sub_165c600, sub_165c6b0, sub_169b300
   ref: ConnectStationJob::ConnectionFailed
   ref: ConnectStationJob::WaitRequestAck
*/
void ConnectStationJob_WaitRequestAck(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169b150ULL || rel >= 0x169b300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169b300 size=528 callers=1 calls=14
   calls: sub_1652d30, sub_165e140, sub_165fb30, sub_165fd50, sub_16a8370, sub_16a8380, sub_16b00e0, sub_16b34d0, sub_16c0d50, sub_16c1030, sub_1749820, sub_17499e0
   ... +2 more
*/
void sub_169b300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169b300ULL || rel >= 0x169b510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169b510 size=896 callers=0 calls=6
   calls: sub_1655220, sub_1655290, sub_165e060, sub_16a8380, sub_16c10f0, sub_16c1160
   ref: ConnectStationJob::ConnectionSucceeded
   ref: ConnectStationJob::ConnectionFailed
   ref: ConnectStationJob::WaitForConnection
*/
void ConnectStationJob_ConnectionFailed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169b510ULL || rel >= 0x169b890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169b890 size=176 callers=0 calls=2
   calls: sub_1655220, sub_165e060
*/
void sub_169b890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169b890ULL || rel >= 0x169b940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169b940 size=272 callers=0 calls=5
   calls: sub_16551b0, sub_1655290, sub_165e060, sub_1749680, sub_174e2e0
   ref: ConnectStationJob::ConnectionFailed
*/
void ConnectStationJob_ConnectionFailed_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169b940ULL || rel >= 0x169ba50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169ba50 size=352 callers=0 calls=3
   calls: sub_1655220, sub_1655290, sub_165e060
   ref: ConnectStationJob::ConnectionSucceeded
   ref: ConnectStationJob::ConnectionFailed
*/
void ConnectStationJob_ConnectionFailed_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169ba50ULL || rel >= 0x169bbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169bbb0 size=16 callers=0 calls=0
*/
void sub_169bbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169bbb0ULL || rel >= 0x169bbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169bbc0 size=160 callers=2 calls=1
   calls: sub_165e060
   ref: ConnectStationJob::SendRelayConnectionRequest
*/
void ConnectStationJob_SendRelayConnectionRequest(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169bbc0ULL || rel >= 0x169bc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169bc60 size=256 callers=0 calls=3
   calls: sub_1655290, sub_165c6b0, sub_169bd60
   ref: ConnectStationJob::WaitRequestAck
*/
void ConnectStationJob_WaitRequestAck_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169bc60ULL || rel >= 0x169bd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169bd60 size=400 callers=1 calls=9
   calls: sub_165e140, sub_16a8380, sub_16b00e0, sub_16b34d0, sub_16c1030, sub_1749820, sub_17499e0, sub_1749d90, sub_174de60
*/
void sub_169bd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169bd60ULL || rel >= 0x169bef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169bef0 size=176 callers=6 calls=4
   calls: sub_1655290, sub_16559c0, sub_16a8380, sub_16c1160
*/
void sub_169bef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169bef0ULL || rel >= 0x169bfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169bfa0 size=16 callers=0 calls=0
*/
void sub_169bfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169bfa0ULL || rel >= 0x169bfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169bfb0 size=16 callers=0 calls=0
*/
void sub_169bfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169bfb0ULL || rel >= 0x169bfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169bfc0 size=64 callers=3 calls=1
   calls: sub_165ba50
*/
void sub_169bfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169bfc0ULL || rel >= 0x169c000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169c000 size=16 callers=2 calls=0
*/
void sub_169c000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169c000ULL || rel >= 0x169c010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169c010 size=48 callers=0 calls=1
   calls: sub_165baa0
*/
void sub_169c010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169c010ULL || rel >= 0x169c040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169c040 size=64 callers=1 calls=1
   calls: sub_1655190
*/
void sub_169c040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169c040ULL || rel >= 0x169c080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169c080 size=128 callers=0 calls=1
   calls: sub_165e060
   ref: CreateMeshJob::SetupLocalPlayerInfo
*/
void CreateMeshJob_SetupLocalPlayerInfo_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169c080ULL || rel >= 0x169c100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169c100 size=112 callers=0 calls=1
   calls: sub_16a80f0
   ref: CreateMeshJob::CompleteFailure
*/
void CreateMeshJob_CompleteFailure(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169c100ULL || rel >= 0x169c170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169c170 size=240 callers=0 calls=6
   calls: sub_1655220, sub_1655290, sub_16559c0, sub_1655a80, sub_165bba0, sub_165e060
*/
void sub_169c170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169c170ULL || rel >= 0x169c260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169c260 size=32 callers=0 calls=0
   ref: CreateMeshJob::SetupLocalStation
*/
void CreateMeshJob_SetupLocalStation(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169c260ULL || rel >= 0x169c280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169c280 size=1536 callers=0 calls=41
   calls: ProcessJoinRequestJob_InitialStep, sub_1652d30, sub_16551b0, sub_1655220, sub_1655290, sub_1655850, sub_16559c0, sub_1655a80, sub_165bba0, sub_165c600, sub_165e060, sub_165e140
   ... +29 more
*/
void sub_169c280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169c280ULL || rel >= 0x169c880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169c880 size=128 callers=1 calls=4
   calls: sub_1655290, sub_16559c0, sub_1655a80, sub_165bba0
*/
void sub_169c880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169c880ULL || rel >= 0x169c900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169c900 size=16 callers=0 calls=0
*/
void sub_169c900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169c900ULL || rel >= 0x169c910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169c910 size=16 callers=0 calls=0
*/
void sub_169c910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169c910ULL || rel >= 0x169c920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169c920 size=208 callers=1 calls=4
   calls: sub_1655c60, sub_16580b0, sub_16580c0, sub_16672c0
*/
void sub_169c920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169c920ULL || rel >= 0x169c9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169c9f0 size=288 callers=3 calls=0
*/
void sub_169c9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169c9f0ULL || rel >= 0x169cb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169cb10 size=112 callers=1 calls=2
   calls: sub_16580f0, sub_1658120
*/
void sub_169cb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169cb10ULL || rel >= 0x169cb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169cb80 size=112 callers=1 calls=2
   calls: sub_16580f0, sub_1658120
*/
void sub_169cb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169cb80ULL || rel >= 0x169cbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169cbf0 size=320 callers=1 calls=5
   calls: sub_16580c0, sub_16581f0, sub_165e060, sub_16672c0, sub_169c9f0
*/
void sub_169cbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169cbf0ULL || rel >= 0x169cd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169cd30 size=688 callers=4 calls=0
*/
void sub_169cd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169cd30ULL || rel >= 0x169cfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169cfe0 size=496 callers=5 calls=1
   calls: sub_165e060
*/
void sub_169cfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169cfe0ULL || rel >= 0x169d1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169d1d0 size=16 callers=1 calls=0
*/
void sub_169d1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169d1d0ULL || rel >= 0x169d1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169d1e0 size=1168 callers=3 calls=3
   calls: sub_1655c80, sub_1655c90, sub_165e060
*/
void sub_169d1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169d1e0ULL || rel >= 0x169d670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169d670 size=608 callers=7 calls=3
   calls: sub_1655c80, sub_1655c90, sub_165e060
*/
void sub_169d670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169d670ULL || rel >= 0x169d8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169d8d0 size=656 callers=1 calls=3
   calls: sub_1655c80, sub_1655c90, sub_165e060
*/
void sub_169d8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169d8d0ULL || rel >= 0x169db60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169db60 size=256 callers=0 calls=3
   calls: sub_1655c80, sub_1655c90, sub_165e060
*/
void sub_169db60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169db60ULL || rel >= 0x169dc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169dc60 size=240 callers=0 calls=3
   calls: sub_1655c80, sub_1655c90, sub_165e060
*/
void sub_169dc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169dc60ULL || rel >= 0x169dd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169dd50 size=240 callers=0 calls=3
   calls: sub_1655c80, sub_1655c90, sub_165e060
*/
void sub_169dd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169dd50ULL || rel >= 0x169de40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169de40 size=128 callers=15 calls=2
   calls: sub_1655c80, sub_169c9f0
*/
void sub_169de40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169de40ULL || rel >= 0x169dec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169dec0 size=112 callers=1 calls=2
   calls: sub_1655c80, sub_169c9f0
*/
void sub_169dec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169dec0ULL || rel >= 0x169df30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169df30 size=16 callers=2 calls=0
*/
void sub_169df30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169df30ULL || rel >= 0x169df40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169df40 size=560 callers=3 calls=5
   calls: sub_1652bd0, sub_1655080, sub_165ba50, sub_17162d0, sub_1749820
*/
void sub_169df40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169df40ULL || rel >= 0x169e170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169e170 size=224 callers=3 calls=5
   calls: sub_1655110, sub_1655170, sub_1655290, sub_1716390, sub_17163e0
*/
void sub_169e170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169e170ULL || rel >= 0x169e250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169e250 size=48 callers=0 calls=1
   calls: sub_169e170
*/
void sub_169e250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169e250ULL || rel >= 0x169e280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169e280 size=352 callers=1 calls=6
   calls: sub_1655190, sub_165e140, sub_16a8050, sub_16a8330, sub_1749a80, sub_1749d90
*/
void sub_169e280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169e280ULL || rel >= 0x169e3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169e3e0 size=80 callers=0 calls=0
   ref: JoinMeshJob::SetupLocalPlayerInfo
*/
void JoinMeshJob_SetupLocalPlayerInfo_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169e3e0ULL || rel >= 0x169e430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169e430 size=112 callers=0 calls=1
   calls: sub_16a80f0
   ref: JoinMeshJob::SetupLocalPlayerInfoFailure
*/
void JoinMeshJob_SetupLocalPlayerInfoFailure(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169e430ULL || rel >= 0x169e4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169e4a0 size=224 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_16a7cd0, sub_16a8050
*/
void sub_169e4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169e4a0ULL || rel >= 0x169e580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169e580 size=32 callers=0 calls=0
   ref: JoinMeshJob::SetupLocalStation
*/
void JoinMeshJob_SetupLocalStation(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169e580ULL || rel >= 0x169e5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169e5a0 size=1056 callers=0 calls=22
   calls: sub_1652d30, sub_1655220, sub_165e060, sub_165e140, sub_165fd50, sub_16672c0, sub_169cd30, sub_169cfe0, sub_169d1e0, sub_169df30, sub_16a51e0, sub_16a56b0
   ... +10 more
   ref: JoinMeshJob::StartConnectingToHost
*/
void JoinMeshJob_StartConnectingToHost(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169e5a0ULL || rel >= 0x169e9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169e9c0 size=784 callers=0 calls=24
   calls: sub_1652d30, sub_1655110, sub_1655220, sub_1655290, sub_1655850, sub_1655950, sub_165c600, sub_165c6b0, sub_165e060, sub_165fd50, sub_169afc0, sub_169bef0
   ... +12 more
   ref: JoinMeshJob::WaitUntilConnectToHost
*/
void JoinMeshJob_WaitUntilConnectToHost(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169e9c0ULL || rel >= 0x169ecd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169ecd0 size=336 callers=7 calls=8
   calls: sub_1655110, sub_1655290, sub_165c6b0, sub_16a14d0, sub_16a1880, sub_16a7cd0, sub_16a8050, sub_16bcaa0
*/
void sub_169ecd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169ecd0ULL || rel >= 0x169ee20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169ee20 size=2496 callers=0 calls=19
   calls: sub_1655110, sub_1655220, sub_1655290, sub_165c6b0, sub_165e060, sub_165e140, sub_165fd40, sub_165fd50, sub_169ecd0, sub_169f7e0, sub_16a7a50, sub_16a7cd0
   ... +7 more
   ref: JoinMeshJob::SendJoinRequest
*/
void JoinMeshJob_SendJoinRequest(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169ee20ULL || rel >= 0x169f7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169f7e0 size=352 callers=7 calls=8
   calls: sub_1655110, sub_1655220, sub_1655290, sub_165c6b0, sub_165e060, sub_16a14d0, sub_16a7cd0, sub_16a8050
*/
void sub_169f7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169f7e0ULL || rel >= 0x169f940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169f940 size=672 callers=0 calls=12
   calls: sub_1655110, sub_1655220, sub_1655290, sub_165c6b0, sub_165e060, sub_169ecd0, sub_16a7cd0, sub_16a7ec0, sub_16a8050, sub_16af7f0, sub_16afc80, sub_174de50
   ref: JoinMeshJob::WaitRequestAck
*/
void JoinMeshJob_WaitRequestAck(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169f940ULL || rel >= 0x169fbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169fbe0 size=256 callers=0 calls=6
   calls: sub_169ecd0, sub_169f7e0, sub_169fce0, sub_16a8380, sub_16c10f0, sub_16c1160
   ref: JoinMeshJob::AnalyzeJoinResponse
   ref: JoinMeshJob::WaitJoinResponse
*/
void JoinMeshJob_WaitJoinResponse(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169fbe0ULL || rel >= 0x169fce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169fce0 size=384 callers=4 calls=10
   calls: sub_1655110, sub_1655220, sub_1655290, sub_165c6b0, sub_165e060, sub_16a14d0, sub_16a7a50, sub_16a7cd0, sub_16a8050, sub_174de50
*/
void sub_169fce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169fce0ULL || rel >= 0x169fe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0169fe60 size=992 callers=0 calls=8
   calls: sub_1655110, sub_1655220, sub_1655290, sub_165c6b0, sub_165e060, sub_169ecd0, sub_16a7cd0, sub_16a8050
   ref: JoinMeshJob::WaitAllConnection
*/
void JoinMeshJob_WaitAllConnection(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169fe60ULL || rel >= 0x16a0240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a0240 size=144 callers=0 calls=3
   calls: sub_169ecd0, sub_169f7e0, sub_169fce0
   ref: JoinMeshJob::AnalyzeJoinResponse
*/
void JoinMeshJob_AnalyzeJoinResponse(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a0240ULL || rel >= 0x16a02d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a02d0 size=1248 callers=1 calls=12
   calls: sub_165c9d0, sub_16a07b0, sub_16a7ec0, sub_16afc80, sub_1749820, sub_17498a0, sub_17499e0, sub_1749b10, sub_1749bf0, sub_174a210, sub_174a450, sub_174dbd0
*/
void sub_16a02d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a02d0ULL || rel >= 0x16a07b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a07b0 size=352 callers=2 calls=12
   calls: sub_16a5730, sub_16a78a0, sub_16a7a50, sub_16a7a60, sub_16a8370, sub_16bfc20, sub_173dcd0, sub_1749400, sub_1749680, sub_1749d80, sub_174de50, sub_174de60
*/
void sub_16a07b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a07b0ULL || rel >= 0x16a0910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a0910 size=2304 callers=0 calls=18
   calls: sub_1655110, sub_1655220, sub_1655290, sub_16559c0, sub_165c6b0, sub_165e060, sub_169ecd0, sub_169f7e0, sub_169fce0, sub_16a5480, sub_16a56d0, sub_16a7c10
   ... +6 more
   ref: JoinMeshJob::StartDisconnectStations
*/
void JoinMeshJob_StartDisconnectStations(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a0910ULL || rel >= 0x16a1210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a1210 size=368 callers=0 calls=8
   calls: sub_1655850, sub_165c6b0, sub_169bef0, sub_16a1f80, sub_16a5480, sub_16a54e0, sub_16b5360, sub_174de50
   ref: JoinMeshJob::WaitDisconnectStations
*/
void JoinMeshJob_WaitDisconnectStations(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a1210ULL || rel >= 0x16a1380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a1380 size=336 callers=0 calls=8
   calls: sub_16551b0, sub_165c6b0, sub_165e060, sub_16a14d0, sub_16a7cd0, sub_16a8050, sub_16a8350, sub_174dc60
*/
void sub_16a1380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a1380ULL || rel >= 0x16a14d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a14d0 size=944 callers=6 calls=11
   calls: sub_165e060, sub_165e140, sub_16a5480, sub_16a7ea0, sub_16a8370, sub_16bfb90, sub_1749820, sub_17499e0, sub_1749d90, sub_174de50, sub_174de60
*/
void sub_16a14d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a14d0ULL || rel >= 0x16a1880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a1880 size=176 callers=2 calls=5
   calls: sub_169bef0, sub_16a5480, sub_16a54e0, sub_16b5360, sub_174de50
*/
void sub_16a1880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a1880ULL || rel >= 0x16a1930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a1930 size=144 callers=0 calls=2
   calls: sub_16a65e0, sub_16a6a80
   ref: JoinMeshJob::CompleteCancelWithLeaveMesh
   ref: JoinMeshJob::WaitLeaveMesh
*/
void JoinMeshJob_WaitLeaveMesh(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a1930ULL || rel >= 0x16a19c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a19c0 size=112 callers=0 calls=1
   calls: sub_165e060
   ref: JoinMeshJob::CompleteCancelWithLeaveMesh
*/
void JoinMeshJob_CompleteCancelWithLeaveMesh(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a19c0ULL || rel >= 0x16a1a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a1a30 size=256 callers=0 calls=6
   calls: sub_1655110, sub_1655290, sub_165c6b0, sub_16a14d0, sub_16a7cd0, sub_16a8050
*/
void sub_16a1a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a1a30ULL || rel >= 0x16a1b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a1b30 size=96 callers=0 calls=1
   calls: sub_16a7510
   ref: JoinMeshJob::WaitLeaveMesh
*/
void JoinMeshJob_WaitLeaveMesh_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a1b30ULL || rel >= 0x16a1b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a1b90 size=176 callers=0 calls=1
   calls: sub_174de50
*/
void sub_16a1b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a1b90ULL || rel >= 0x16a1c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a1c40 size=16 callers=0 calls=0
*/
void sub_16a1c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a1c40ULL || rel >= 0x16a1c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a1c50 size=640 callers=7 calls=15
   calls: sub_1655110, sub_1655220, sub_1655290, sub_1655330, sub_16559c0, sub_1655a80, sub_165bba0, sub_165c6b0, sub_165e060, sub_16a14d0, sub_16a1880, sub_16a7cd0
   ... +3 more
*/
void sub_16a1c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a1c50ULL || rel >= 0x16a1ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a1ed0 size=16 callers=0 calls=0
*/
void sub_16a1ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a1ed0ULL || rel >= 0x16a1ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a1ee0 size=16 callers=0 calls=0
*/
void sub_16a1ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a1ee0ULL || rel >= 0x16a1ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a1ef0 size=80 callers=2 calls=1
   calls: sub_165ba50
*/
void sub_16a1ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a1ef0ULL || rel >= 0x16a1f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a1f40 size=16 callers=1 calls=0
*/
void sub_16a1f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a1f40ULL || rel >= 0x16a1f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a1f50 size=48 callers=0 calls=1
   calls: sub_165baa0
*/
void sub_16a1f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a1f50ULL || rel >= 0x16a1f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a1f80 size=16 callers=3 calls=0
*/
void sub_16a1f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a1f80ULL || rel >= 0x16a1f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a1f90 size=400 callers=0 calls=6
   calls: sub_165c600, sub_165c6b0, sub_165e060, sub_16a8370, sub_16bfb90, sub_174de50
   ref: DisconnectStationJob::CutRouteOfRelayConnection
   ref: DisconnectStationJob::SendDisconnectionRequest
*/
void DisconnectStationJob_SendDisconnectionRequest(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a1f90ULL || rel >= 0x16a2120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a2120 size=192 callers=0 calls=4
   calls: sub_165c6b0, sub_165fd30, sub_16b33d0, sub_16b3460
   ref: DisconnectStationJob::DisconnectionSucceeded
   ref: DisconnectStationJob::WaitForDisconnection
*/
void DisconnectStationJob_WaitForDisconnection(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a2120ULL || rel >= 0x16a21e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a21e0 size=128 callers=0 calls=1
   calls: sub_16b33d0
   ref: DisconnectStationJob::DisconnectionSucceeded
*/
void DisconnectStationJob_DisconnectionSucceeded(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a21e0ULL || rel >= 0x16a2260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a2260 size=240 callers=0 calls=7
   calls: sub_169bef0, sub_169de40, sub_16a56c0, sub_16b5360, sub_17495e0, sub_174de50, sub_174de60
*/
void sub_16a2260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a2260ULL || rel >= 0x16a2350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a2350 size=272 callers=0 calls=4
   calls: sub_165c6b0, sub_165fd30, sub_16b33d0, sub_16b3460
   ref: DisconnectStationJob::DisconnectionSucceeded
*/
void DisconnectStationJob_DisconnectionSucceeded_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a2350ULL || rel >= 0x16a2460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a2460 size=16 callers=1 calls=0
*/
void sub_16a2460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a2460ULL || rel >= 0x16a2470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a2470 size=16 callers=0 calls=0
*/
void sub_16a2470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a2470ULL || rel >= 0x16a2480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a2480 size=16 callers=0 calls=0
*/
void sub_16a2480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a2480ULL || rel >= 0x16a2490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a2490 size=112 callers=2 calls=2
   calls: sub_1655080, sub_165ba50
*/
void sub_16a2490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a2490ULL || rel >= 0x16a2500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a2500 size=64 callers=1 calls=1
   calls: sub_1655170
*/
void sub_16a2500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a2500ULL || rel >= 0x16a2540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a2540 size=64 callers=0 calls=2
   calls: sub_1655170, sub_165baa0
*/
void sub_16a2540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a2540ULL || rel >= 0x16a2580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a2580 size=160 callers=1 calls=0
*/
void sub_16a2580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a2580ULL || rel >= 0x16a2620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a2620 size=400 callers=1 calls=3
   calls: sub_16559c0, sub_165e140, sub_16a8010
   ref: KickoutManageJob::ClientStartLeaveMesh
   ref: KickoutManageJob::ClientFinalize
*/
void KickoutManageJob_ClientFinalize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a2620ULL || rel >= 0x16a27b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a27b0 size=192 callers=0 calls=5
   calls: sub_16559c0, sub_165e060, sub_16a1c50, sub_16a29c0, sub_16a6900
*/
void sub_16a27b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a27b0ULL || rel >= 0x16a2870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a2870 size=272 callers=0 calls=5
   calls: LeaveMeshJob_SendLeaveRequest, sub_1655850, sub_16a34b0, sub_16a77c0, sub_16a7ea0
   ref: KickoutManageJob::ClientWaitLeaveMesh
   ref: KickoutManageJob::ClientFinalize
*/
void KickoutManageJob_ClientFinalize_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a2870ULL || rel >= 0x16a2980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a2980 size=64 callers=0 calls=0
   ref: KickoutManageJob::ClientFinalize
*/
void KickoutManageJob_ClientFinalize_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a2980ULL || rel >= 0x16a29c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a29c0 size=288 callers=2 calls=3
   calls: sub_16551b0, sub_1655290, sub_165e060
*/
void sub_16a29c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a29c0ULL || rel >= 0x16a2ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a2ae0 size=1152 callers=2 calls=3
   calls: sub_165e060, sub_16a7ec0, sub_16af6f0
*/
void sub_16a2ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a2ae0ULL || rel >= 0x16a2f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a2f60 size=704 callers=1 calls=4
   calls: sub_1652d30, sub_165fb30, sub_174b020, sub_174de50
*/
void sub_16a2f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a2f60ULL || rel >= 0x16a3220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a3220 size=400 callers=0 calls=0
*/
void sub_16a3220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a3220ULL || rel >= 0x16a33b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a33b0 size=64 callers=1 calls=1
   calls: sub_1655190
*/
void sub_16a33b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a33b0ULL || rel >= 0x16a33f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a33f0 size=16 callers=0 calls=0
*/
void sub_16a33f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a33f0ULL || rel >= 0x16a3400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a3400 size=16 callers=0 calls=0
*/
void sub_16a3400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a3400ULL || rel >= 0x16a3410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a3410 size=16 callers=0 calls=0
*/
void sub_16a3410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a3410ULL || rel >= 0x16a3420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a3420 size=80 callers=1 calls=1
   calls: sub_165ba50
*/
void sub_16a3420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a3420ULL || rel >= 0x16a3470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a3470 size=16 callers=0 calls=0
*/
void sub_16a3470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a3470ULL || rel >= 0x16a3480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a3480 size=48 callers=0 calls=1
   calls: sub_165baa0
*/
void sub_16a3480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a3480ULL || rel >= 0x16a34b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a34b0 size=48 callers=2 calls=1
   calls: sub_1655190
*/
void sub_16a34b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a34b0ULL || rel >= 0x16a34e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a34e0 size=288 callers=3 calls=6
   calls: sub_1655190, sub_1655950, sub_165c6b0, sub_16a6900, sub_16b6db0, sub_16bcaa0
   ref: LeaveMeshJob::SendLeaveRequest
*/
void LeaveMeshJob_SendLeaveRequest(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a34e0ULL || rel >= 0x16a3600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a3600 size=112 callers=0 calls=3
   calls: sub_16a7ec0, sub_16ae240, sub_16afc90
   ref: LeaveMeshJob::WaitLeaveResponse
*/
void LeaveMeshJob_WaitLeaveResponse(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a3600ULL || rel >= 0x16a3670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a3670 size=176 callers=0 calls=2
   calls: sub_165c6b0, sub_174de50
   ref: LeaveMeshJob::StartDisconnectStations
*/
void LeaveMeshJob_StartDisconnectStations(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a3670ULL || rel >= 0x16a3720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a3720 size=352 callers=0 calls=5
   calls: sub_1655850, sub_16a1f80, sub_16a5480, sub_16a54e0, sub_174de50
   ref: LeaveMeshJob::WaitLeavingProcess
   ref: LeaveMeshJob::LeaveSuccess
*/
void LeaveMeshJob_LeaveSuccess(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a3720ULL || rel >= 0x16a3880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a3880 size=320 callers=0 calls=5
   calls: sub_16551b0, sub_165e060, sub_16a51f0, sub_16a5a10, sub_174de50
*/
void sub_16a3880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a3880ULL || rel >= 0x16a39c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a39c0 size=192 callers=0 calls=1
   calls: sub_174de50
   ref: LeaveMeshJob::LeaveSuccess
*/
void LeaveMeshJob_LeaveSuccess_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a39c0ULL || rel >= 0x16a3a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a3a80 size=224 callers=1 calls=2
   calls: sub_16551b0, sub_165e060
*/
void sub_16a3a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a3a80ULL || rel >= 0x16a3b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a3b60 size=16 callers=0 calls=0
*/
void sub_16a3b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a3b60ULL || rel >= 0x16a3b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a3b70 size=96 callers=3 calls=1
   calls: sub_165ba50
*/
void sub_16a3b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a3b70ULL || rel >= 0x16a3bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a3bd0 size=16 callers=3 calls=0
*/
void sub_16a3bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a3bd0ULL || rel >= 0x16a3be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a3be0 size=16 callers=0 calls=0
*/
void sub_16a3be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a3be0ULL || rel >= 0x16a3bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a3bf0 size=192 callers=1 calls=3
   calls: sub_1655190, sub_165c6b0, sub_16a6900
   ref: LeaveWithHostMigrationJob::CheckHostMigrationProcess
*/
void LeaveWithHostMigrationJob_CheckHostMigrationProcess(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a3bf0ULL || rel >= 0x16a3cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a3cb0 size=192 callers=0 calls=1
   calls: sub_16b6db0
   ref: LeaveWithHostMigrationJob::SendStartMultiMigrationMessage
   ref: LeaveWithHostMigrationJob::WaitHostMigrationProcess
   ref: LeaveWithHostMigrationJob::StartDisconnectStations
   ref: LeaveWithHostMigrationJob::SendStartMigrationMessage
*/
void LeaveWithHostMigrationJob_StartDisconnectStations(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a3cb0ULL || rel >= 0x16a3d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a3d70 size=352 callers=0 calls=5
   calls: sub_1655850, sub_16a1f80, sub_16a5480, sub_16a54e0, sub_174de50
   ref: LeaveWithHostMigrationJob::WaitDisconnectStations
   ref: LeaveWithHostMigrationJob::CleanupMesh
*/
void LeaveWithHostMigrationJob_CleanupMesh(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a3d70ULL || rel >= 0x16a3ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a3ed0 size=128 callers=0 calls=0
   ref: LeaveWithHostMigrationJob::CleanupMesh
   ref: LeaveWithHostMigrationJob::SendStartMigrationMessage
*/
void LeaveWithHostMigrationJob_CleanupMesh_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a3ed0ULL || rel >= 0x16a3f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a3f50 size=128 callers=0 calls=2
   calls: sub_16a7ec0, sub_16af370
   ref: LeaveWithHostMigrationJob::WaitMigrationResponse
   ref: LeaveWithHostMigrationJob::CleanupMesh
*/
void LeaveWithHostMigrationJob_CleanupMesh_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a3f50ULL || rel >= 0x16a3fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a3fd0 size=288 callers=0 calls=4
   calls: sub_16a5480, sub_16a7ea0, sub_16a7ec0, sub_16aeb30
   ref: LeaveWithHostMigrationJob::WaitMigrationResponse
   ref: LeaveWithHostMigrationJob::CleanupMesh
*/
void LeaveWithHostMigrationJob_CleanupMesh_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a3fd0ULL || rel >= 0x16a40f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a40f0 size=256 callers=0 calls=5
   calls: sub_16551b0, sub_165e060, sub_16a51f0, sub_16a5a10, sub_174de50
*/
void sub_16a40f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a40f0ULL || rel >= 0x16a41f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a41f0 size=192 callers=0 calls=1
   calls: sub_16a5480
   ref: LeaveWithHostMigrationJob::CleanupMesh
*/
void LeaveWithHostMigrationJob_CleanupMesh_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a41f0ULL || rel >= 0x16a42b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a42b0 size=192 callers=0 calls=1
   calls: sub_174de50
   ref: LeaveWithHostMigrationJob::CleanupMesh
*/
void LeaveWithHostMigrationJob_CleanupMesh_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a42b0ULL || rel >= 0x16a4370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a4370 size=32 callers=0 calls=0
*/
void sub_16a4370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a4370ULL || rel >= 0x16a4390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a4390 size=64 callers=0 calls=0
*/
void sub_16a4390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a4390ULL || rel >= 0x16a43d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a43d0 size=80 callers=1 calls=1
   calls: sub_1655290
*/
void sub_16a43d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a43d0ULL || rel >= 0x16a4420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a4420 size=16 callers=0 calls=0
*/
void sub_16a4420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a4420ULL || rel >= 0x16a4430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a4430 size=16 callers=1 calls=0
*/
void sub_16a4430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a4430ULL || rel >= 0x16a4440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a4440 size=144 callers=0 calls=1
   calls: sub_165e060
*/
void sub_16a4440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a4440ULL || rel >= 0x16a44d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a44d0 size=480 callers=1 calls=8
   calls: sub_1652bd0, sub_165e060, sub_16a46b0, sub_16a4d70, sub_16a4ec0, sub_1716330, sub_1716390, sub_17163e0
*/
void sub_16a44d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a44d0ULL || rel >= 0x16a46b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a46b0 size=1456 callers=1 calls=27
   calls: MeshProtocolReliable_send_buffer_num, sub_1652bd0, sub_165e060, sub_169c920, sub_169cbf0, sub_16a83f0, sub_16ab000, sub_16b5430, sub_16b7ba0, sub_16bcce0, sub_16bd500, sub_16bd550
   ... +15 more
*/
void sub_16a46b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a46b0ULL || rel >= 0x16a4c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a4c60 size=96 callers=1 calls=4
   calls: sub_16a4cc0, sub_16a4ec0, sub_1716390, sub_17163e0
*/
void sub_16a4c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a4c60ULL || rel >= 0x16a4cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a4cc0 size=176 callers=10 calls=4
   calls: sub_16a51f0, sub_16a5820, sub_1736b60, sub_6af650
*/
void sub_16a4cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a4cc0ULL || rel >= 0x16a4d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a4d70 size=336 callers=1 calls=3
   calls: sub_1655080, sub_1667640, sub_6af650
*/
void sub_16a4d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a4d70ULL || rel >= 0x16a4ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a4ec0 size=800 callers=2 calls=17
   calls: sub_1655170, sub_165e060, sub_169cb10, sub_169cb80, sub_16ab2e0, sub_16bd540, sub_16bda40, sub_16c0410, sub_16c0920, sub_16c1250, sub_16c12f0, sub_1716390
   ... +5 more
*/
void sub_16a4ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a4ec0ULL || rel >= 0x16a51e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a51e0 size=16 callers=2 calls=0
*/
void sub_16a51e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a51e0ULL || rel >= 0x16a51f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a51f0 size=656 callers=9 calls=15
   calls: sub_16540f0, sub_1654100, sub_1658470, sub_1659e90, sub_169d1d0, sub_169dec0, sub_16a54e0, sub_16aff40, sub_16c1c20, sub_173ddf0, sub_17495e0, sub_174de50
   ... +3 more
*/
void sub_16a51f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a51f0ULL || rel >= 0x16a5480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a5480 size=96 callers=106 calls=0
*/
void sub_16a5480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a5480ULL || rel >= 0x16a54e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a54e0 size=464 callers=20 calls=7
   calls: sub_1652d30, sub_165fb50, sub_16a2f60, sub_16c1710, sub_173e0c0, sub_174de50, sub_174e000
*/
void sub_16a54e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a54e0ULL || rel >= 0x16a56b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a56b0 size=16 callers=2 calls=0
*/
void sub_16a56b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a56b0ULL || rel >= 0x16a56c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a56c0 size=16 callers=40 calls=0
*/
void sub_16a56c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a56c0ULL || rel >= 0x16a56d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a56d0 size=96 callers=2 calls=0
*/
void sub_16a56d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a56d0ULL || rel >= 0x16a5730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a5730 size=240 callers=7 calls=2
   calls: sub_174de50, sub_174e000
*/
void sub_16a5730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a5730ULL || rel >= 0x16a5820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a5820 size=496 callers=1 calls=15
   calls: sub_1655110, sub_165e060, sub_169c880, sub_16a1c50, sub_16a29c0, sub_16a3a80, sub_16a43d0, sub_16a88f0, sub_16aff40, sub_16b5780, sub_16b6db0, sub_16b8790
   ... +3 more
*/
void sub_16a5820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a5820ULL || rel >= 0x16a5a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a5a10 size=80 callers=6 calls=2
   calls: sub_16aff40, sub_174de50
*/
void sub_16a5a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a5a10ULL || rel >= 0x16a5a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a5a60 size=1392 callers=1 calls=17
   calls: sub_165bea0, sub_165e060, sub_165e140, sub_16672c0, sub_169cd30, sub_16a2580, sub_16a5fd0, sub_16a6090, sub_16a83e0, sub_16b7b10, sub_16bcc90, sub_16c01e0
   ... +5 more
*/
void sub_16a5a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a5a60ULL || rel >= 0x16a5fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a5fd0 size=192 callers=2 calls=2
   calls: sub_165e060, sub_16a6090
*/
void sub_16a5fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a5fd0ULL || rel >= 0x16a6090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a6090 size=368 callers=12 calls=3
   calls: sub_165c080, sub_165c180, sub_165e060
*/
void sub_16a6090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a6090ULL || rel >= 0x16a6200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a6200 size=288 callers=2 calls=6
   calls: sub_1655850, sub_1655950, sub_165e060, sub_165e140, sub_169c040, sub_174de50
*/
void sub_16a6200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a6200ULL || rel >= 0x16a6320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a6320 size=176 callers=2 calls=3
   calls: sub_1655110, sub_165e060, sub_16a6200
*/
void sub_16a6320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a6320ULL || rel >= 0x16a63d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a63d0 size=48 callers=2 calls=0
*/
void sub_16a63d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a63d0ULL || rel >= 0x16a6400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a6400 size=144 callers=2 calls=1
   calls: sub_165e060
*/
void sub_16a6400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a6400ULL || rel >= 0x16a6490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a6490 size=336 callers=3 calls=9
   calls: DestroyMeshJob_SendDestroyMesh, sub_1655190, sub_16551b0, sub_1655850, sub_165e060, sub_16a4cc0, sub_16a65e0, sub_16a7d00, sub_16a8990
*/
void sub_16a6490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a6490ULL || rel >= 0x16a65e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a65e0 size=800 callers=18 calls=0
*/
void sub_16a65e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a65e0ULL || rel >= 0x16a6900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a6900 size=16 callers=8 calls=0
*/
void sub_16a6900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a6900ULL || rel >= 0x16a6910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a6910 size=176 callers=3 calls=3
   calls: sub_1655110, sub_165e060, sub_16a6490
*/
void sub_16a6910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a6910ULL || rel >= 0x16a69c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a69c0 size=48 callers=3 calls=0
*/
void sub_16a69c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a69c0ULL || rel >= 0x16a69f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a69f0 size=144 callers=3 calls=1
   calls: sub_165e060
*/
void sub_16a69f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a69f0ULL || rel >= 0x16a6a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a6a80 size=336 callers=4 calls=8
   calls: LeaveWithHostMigrationJob_CheckHostMigrationProcess, sub_1655190, sub_16551b0, sub_1655850, sub_165e060, sub_16a4cc0, sub_16a65e0, sub_16a7d00
*/
void sub_16a6a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a6a80ULL || rel >= 0x16a6bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a6bd0 size=16 callers=28 calls=0
*/
void sub_16a6bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a6bd0ULL || rel >= 0x16a6be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a6be0 size=176 callers=3 calls=3
   calls: sub_1655110, sub_165e060, sub_16a6a80
*/
void sub_16a6be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a6be0ULL || rel >= 0x16a6c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a6c90 size=48 callers=3 calls=0
*/
void sub_16a6c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a6c90ULL || rel >= 0x16a6cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a6cc0 size=144 callers=3 calls=1
   calls: sub_165e060
*/
void sub_16a6cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a6cc0ULL || rel >= 0x16a6d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a6d50 size=608 callers=1 calls=11
   calls: sub_16559c0, sub_165e140, sub_16a65e0, sub_16a7010, sub_16b02f0, sub_16c18d0, sub_16c1b20, sub_1749820, sub_17499e0, sub_1749d80, sub_174de60
*/
void sub_16a6d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a6d50ULL || rel >= 0x16a6fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a6fb0 size=96 callers=10 calls=1
   calls: sub_16559c0
*/
void sub_16a6fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a6fb0ULL || rel >= 0x16a7010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7010 size=400 callers=3 calls=0
*/
void sub_16a7010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7010ULL || rel >= 0x16a71a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a71a0 size=352 callers=1 calls=5
   calls: sub_1655850, sub_1655950, sub_165e060, sub_169e280, sub_174de50
*/
void sub_16a71a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a71a0ULL || rel >= 0x16a7300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7300 size=192 callers=3 calls=3
   calls: sub_1655110, sub_165e060, sub_16a71a0
*/
void sub_16a7300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7300ULL || rel >= 0x16a73c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a73c0 size=48 callers=4 calls=0
*/
void sub_16a73c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a73c0ULL || rel >= 0x16a73f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a73f0 size=144 callers=3 calls=1
   calls: sub_165e060
*/
void sub_16a73f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a73f0ULL || rel >= 0x16a7480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7480 size=16 callers=4 calls=0
*/
void sub_16a7480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7480ULL || rel >= 0x16a7490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7490 size=128 callers=0 calls=2
   calls: sub_1655330, sub_165e060
*/
void sub_16a7490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7490ULL || rel >= 0x16a7510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7510 size=320 callers=4 calls=8
   calls: LeaveMeshJob_SendLeaveRequest, sub_1655190, sub_16551b0, sub_1655850, sub_16559c0, sub_165e060, sub_16a33b0, sub_16a34b0
*/
void sub_16a7510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7510ULL || rel >= 0x16a7650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7650 size=176 callers=3 calls=3
   calls: sub_1655110, sub_165e060, sub_16a7510
*/
void sub_16a7650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7650ULL || rel >= 0x16a7700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7700 size=48 callers=3 calls=0
*/
void sub_16a7700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7700ULL || rel >= 0x16a7730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7730 size=144 callers=3 calls=1
   calls: sub_165e060
*/
void sub_16a7730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7730ULL || rel >= 0x16a77c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a77c0 size=112 callers=70 calls=1
   calls: sub_165e060
*/
void sub_16a77c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a77c0ULL || rel >= 0x16a7830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7830 size=96 callers=6 calls=0
*/
void sub_16a7830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7830ULL || rel >= 0x16a7890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7890 size=16 callers=4 calls=0
*/
void sub_16a7890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7890ULL || rel >= 0x16a78a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a78a0 size=432 callers=4 calls=6
   calls: sub_1652d30, sub_165fb50, sub_173e0c0, sub_174de50, sub_174e000, sub_174e2e0
*/
void sub_16a78a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a78a0ULL || rel >= 0x16a7a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7a50 size=16 callers=52 calls=0
*/
void sub_16a7a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7a50ULL || rel >= 0x16a7a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7a60 size=96 callers=2 calls=0
*/
void sub_16a7a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7a60ULL || rel >= 0x16a7ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7ac0 size=80 callers=1 calls=0
*/
void sub_16a7ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7ac0ULL || rel >= 0x16a7b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7b10 size=48 callers=24 calls=0
*/
void sub_16a7b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7b10ULL || rel >= 0x16a7b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7b40 size=16 callers=1 calls=0
*/
void sub_16a7b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7b40ULL || rel >= 0x16a7b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7b50 size=16 callers=1 calls=0
*/
void sub_16a7b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7b50ULL || rel >= 0x16a7b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7b60 size=128 callers=1 calls=1
   calls: sub_165e060
*/
void sub_16a7b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7b60ULL || rel >= 0x16a7be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7be0 size=16 callers=1 calls=0
*/
void sub_16a7be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7be0ULL || rel >= 0x16a7bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7bf0 size=16 callers=1 calls=0
*/
void sub_16a7bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7bf0ULL || rel >= 0x16a7c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7c00 size=16 callers=0 calls=0
*/
void sub_16a7c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7c00ULL || rel >= 0x16a7c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7c10 size=48 callers=2 calls=0
*/
void sub_16a7c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7c10ULL || rel >= 0x16a7c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7c40 size=16 callers=2 calls=0
*/
void sub_16a7c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7c40ULL || rel >= 0x16a7c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7c50 size=16 callers=3 calls=0
*/
void sub_16a7c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7c50ULL || rel >= 0x16a7c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7c60 size=16 callers=7 calls=0
*/
void sub_16a7c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7c60ULL || rel >= 0x16a7c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7c70 size=64 callers=9 calls=1
   calls: sub_16540f0
*/
void sub_16a7c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7c70ULL || rel >= 0x16a7cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7cb0 size=16 callers=2 calls=0
*/
void sub_16a7cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7cb0ULL || rel >= 0x16a7cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7cc0 size=16 callers=20 calls=0
*/
void sub_16a7cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7cc0ULL || rel >= 0x16a7cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7cd0 size=48 callers=14 calls=1
   calls: sub_16540f0
*/
void sub_16a7cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7cd0ULL || rel >= 0x16a7d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7d00 size=368 callers=3 calls=11
   calls: sub_16540f0, sub_1654190, sub_1657c60, sub_165c6b0, sub_16a65e0, sub_16b7b20, sub_16bcca0, sub_174b550, sub_174dc60, sub_174e340, sub_174e350
*/
void sub_16a7d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7d00ULL || rel >= 0x16a7e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7e70 size=16 callers=3 calls=0
*/
void sub_16a7e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7e70ULL || rel >= 0x16a7e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7e80 size=16 callers=1 calls=0
*/
void sub_16a7e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7e80ULL || rel >= 0x16a7e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7e90 size=16 callers=1 calls=0
*/
void sub_16a7e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7e90ULL || rel >= 0x16a7ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7ea0 size=16 callers=57 calls=0
*/
void sub_16a7ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7ea0ULL || rel >= 0x16a7eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7eb0 size=16 callers=2 calls=0
*/
void sub_16a7eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7eb0ULL || rel >= 0x16a7ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7ec0 size=16 callers=36 calls=0
*/
void sub_16a7ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7ec0ULL || rel >= 0x16a7ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7ed0 size=176 callers=1 calls=1
   calls: sub_174de50
*/
void sub_16a7ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7ed0ULL || rel >= 0x16a7f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a7f80 size=144 callers=0 calls=1
   calls: sub_16a7d00
*/
void sub_16a7f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7f80ULL || rel >= 0x16a8010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8010 size=16 callers=11 calls=0
*/
void sub_16a8010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8010ULL || rel >= 0x16a8020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8020 size=16 callers=3 calls=0
*/
void sub_16a8020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8020ULL || rel >= 0x16a8030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8030 size=32 callers=1 calls=0
*/
void sub_16a8030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8030ULL || rel >= 0x16a8050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8050 size=48 callers=31 calls=1
   calls: sub_16540f0
*/
void sub_16a8050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8050ULL || rel >= 0x16a8080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8080 size=32 callers=6 calls=0
*/
void sub_16a8080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8080ULL || rel >= 0x16a80a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a80a0 size=16 callers=1 calls=0
*/
void sub_16a80a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a80a0ULL || rel >= 0x16a80b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a80b0 size=16 callers=8 calls=0
*/
void sub_16a80b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a80b0ULL || rel >= 0x16a80c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a80c0 size=16 callers=1 calls=0
*/
void sub_16a80c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a80c0ULL || rel >= 0x16a80d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a80d0 size=16 callers=2 calls=0
*/
void sub_16a80d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a80d0ULL || rel >= 0x16a80e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a80e0 size=16 callers=2 calls=0
*/
void sub_16a80e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a80e0ULL || rel >= 0x16a80f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a80f0 size=496 callers=2 calls=5
   calls: sub_165bc90, sub_165e060, sub_16672c0, sub_169cd30, sub_169cfe0
*/
void sub_16a80f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a80f0ULL || rel >= 0x16a82e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a82e0 size=16 callers=2 calls=0
*/
void sub_16a82e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a82e0ULL || rel >= 0x16a82f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a82f0 size=16 callers=1 calls=0
*/
void sub_16a82f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a82f0ULL || rel >= 0x16a8300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8300 size=16 callers=22 calls=0
*/
void sub_16a8300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8300ULL || rel >= 0x16a8310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8310 size=16 callers=4 calls=0
*/
void sub_16a8310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8310ULL || rel >= 0x16a8320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8320 size=16 callers=3 calls=0
*/
void sub_16a8320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8320ULL || rel >= 0x16a8330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8330 size=16 callers=3 calls=0
*/
void sub_16a8330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8330ULL || rel >= 0x16a8340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8340 size=16 callers=8 calls=0
*/
void sub_16a8340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8340ULL || rel >= 0x16a8350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8350 size=32 callers=2 calls=0
*/
void sub_16a8350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8350ULL || rel >= 0x16a8370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8370 size=16 callers=45 calls=0
*/
void sub_16a8370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8370ULL || rel >= 0x16a8380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8380 size=16 callers=72 calls=0
*/
void sub_16a8380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8380ULL || rel >= 0x16a8390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8390 size=16 callers=85 calls=0
*/
void sub_16a8390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8390ULL || rel >= 0x16a83a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a83a0 size=16 callers=0 calls=0
*/
void sub_16a83a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a83a0ULL || rel >= 0x16a83b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a83b0 size=16 callers=0 calls=0
*/
void sub_16a83b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a83b0ULL || rel >= 0x16a83c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a83c0 size=16 callers=1 calls=0
*/
void sub_16a83c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a83c0ULL || rel >= 0x16a83d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a83d0 size=16 callers=1 calls=0
*/
void sub_16a83d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a83d0ULL || rel >= 0x16a83e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a83e0 size=16 callers=1 calls=0
*/
void sub_16a83e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a83e0ULL || rel >= 0x16a83f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a83f0 size=96 callers=1 calls=1
   calls: sub_165ba50
*/
void sub_16a83f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a83f0ULL || rel >= 0x16a8450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8450 size=16 callers=0 calls=0
*/
void sub_16a8450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8450ULL || rel >= 0x16a8460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8460 size=48 callers=0 calls=1
   calls: sub_165baa0
*/
void sub_16a8460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8460ULL || rel >= 0x16a8490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8490 size=224 callers=2 calls=3
   calls: sub_1655190, sub_165c6b0, sub_16a6900
   ref: DestroyMeshJob::SendDestroyMesh
*/
void DestroyMeshJob_SendDestroyMesh(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8490ULL || rel >= 0x16a8570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8570 size=256 callers=0 calls=4
   calls: sub_16a5480, sub_16a7ea0, sub_16a7ec0, sub_16ae4b0
   ref: DestroyMeshJob::WaitDestroyResponse
   ref: DestroyMeshJob::CleanupMesh
*/
void DestroyMeshJob_CleanupMesh(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8570ULL || rel >= 0x16a8670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8670 size=272 callers=0 calls=5
   calls: sub_16551b0, sub_165e060, sub_16a51f0, sub_16a5a10, sub_174de50
*/
void sub_16a8670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8670ULL || rel >= 0x16a8780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8780 size=336 callers=0 calls=0
   ref: DestroyMeshJob::CleanupMesh
*/
void DestroyMeshJob_CleanupMesh_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8780ULL || rel >= 0x16a88d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a88d0 size=32 callers=0 calls=0
*/
void sub_16a88d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a88d0ULL || rel >= 0x16a88f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a88f0 size=160 callers=1 calls=2
   calls: sub_16551b0, sub_165e060
*/
void sub_16a88f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a88f0ULL || rel >= 0x16a8990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8990 size=112 callers=1 calls=1
   calls: sub_1655190
*/
void sub_16a8990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8990ULL || rel >= 0x16a8a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8a00 size=16 callers=0 calls=0
*/
void sub_16a8a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8a00ULL || rel >= 0x16a8a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8a10 size=48 callers=1 calls=1
   calls: sub_1739cf0
*/
void sub_16a8a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8a10ULL || rel >= 0x16a8a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8a40 size=16 callers=0 calls=0
*/
void sub_16a8a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8a40ULL || rel >= 0x16a8a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8a50 size=16 callers=0 calls=0
*/
void sub_16a8a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8a50ULL || rel >= 0x16a8a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8a60 size=16 callers=0 calls=0
*/
void sub_16a8a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8a60ULL || rel >= 0x16a8a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8a70 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_16a9a20, sub_17162d0
*/
void sub_16a8a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8a70ULL || rel >= 0x16a8ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8ab0 size=64 callers=0 calls=0
*/
void sub_16a8ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8ab0ULL || rel >= 0x16a8af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8af0 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_16a9070, sub_17162d0
*/
void sub_16a8af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8af0ULL || rel >= 0x16a8b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8b30 size=64 callers=0 calls=0
*/
void sub_16a8b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8b30ULL || rel >= 0x16a8b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8b70 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_169bfc0, sub_17162d0
*/
void sub_16a8b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8b70ULL || rel >= 0x16a8bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8bb0 size=64 callers=0 calls=0
*/
void sub_16a8bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8bb0ULL || rel >= 0x16a8bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8bf0 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_169df40, sub_17162d0
*/
void sub_16a8bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8bf0ULL || rel >= 0x16a8c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8c30 size=64 callers=0 calls=0
*/
void sub_16a8c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8c30ULL || rel >= 0x16a8c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8c70 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_16a3420, sub_17162d0
*/
void sub_16a8c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8c70ULL || rel >= 0x16a8cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8cb0 size=64 callers=0 calls=0
*/
void sub_16a8cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8cb0ULL || rel >= 0x16a8cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8cf0 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_16a2490, sub_17162d0
*/
void sub_16a8cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8cf0ULL || rel >= 0x16a8d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8d30 size=64 callers=0 calls=0
*/
void sub_16a8d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8d30ULL || rel >= 0x16a8d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8d70 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_16b8830, sub_17162d0
*/
void sub_16a8d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8d70ULL || rel >= 0x16a8db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8db0 size=64 callers=0 calls=0
*/
void sub_16a8db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8db0ULL || rel >= 0x16a8df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8df0 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_169af30, sub_17162d0
*/
void sub_16a8df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8df0ULL || rel >= 0x16a8e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8e30 size=64 callers=0 calls=0
*/
void sub_16a8e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8e30ULL || rel >= 0x16a8e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8e70 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_16a1ef0, sub_17162d0
*/
void sub_16a8e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8e70ULL || rel >= 0x16a8eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8eb0 size=64 callers=0 calls=0
*/
void sub_16a8eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8eb0ULL || rel >= 0x16a8ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8ef0 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_16b0e90, sub_17162d0
*/
void sub_16a8ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8ef0ULL || rel >= 0x16a8f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8f30 size=64 callers=0 calls=0
*/
void sub_16a8f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8f30ULL || rel >= 0x16a8f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8f70 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_16b03a0, sub_17162d0
*/
void sub_16a8f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8f70ULL || rel >= 0x16a8fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8fb0 size=64 callers=0 calls=0
*/
void sub_16a8fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8fb0ULL || rel >= 0x16a8ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a8ff0 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_16b3ea0, sub_17162d0
*/
void sub_16a8ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a8ff0ULL || rel >= 0x16a9030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a9030 size=64 callers=0 calls=0
*/
void sub_16a9030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a9030ULL || rel >= 0x16a9070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a9070 size=64 callers=4 calls=1
   calls: sub_173a270
*/
void sub_16a9070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a9070ULL || rel >= 0x16a90b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a90b0 size=64 callers=1 calls=1
   calls: sub_17399f0
*/
void sub_16a90b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a90b0ULL || rel >= 0x16a90f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a90f0 size=64 callers=0 calls=2
   calls: sub_17399f0, sub_173a2d0
*/
void sub_16a90f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a90f0ULL || rel >= 0x16a9130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a9130 size=224 callers=1 calls=3
   calls: Pia_Receive, sub_165e060, sub_165e140
*/
void sub_16a9130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a9130ULL || rel >= 0x16a9210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a9210 size=16 callers=0 calls=0
*/
void sub_16a9210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a9210ULL || rel >= 0x16a9220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a9220 size=240 callers=1 calls=3
   calls: sub_165e060, sub_165e140, sub_173a5a0
*/
void sub_16a9220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a9220ULL || rel >= 0x16a9310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a9310 size=16 callers=0 calls=0
*/
void sub_16a9310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a9310ULL || rel >= 0x16a9320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a9320 size=496 callers=0 calls=3
   calls: sub_173a710, sub_173e2c0, sub_174de50
*/
void sub_16a9320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a9320ULL || rel >= 0x16a9510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a9510 size=16 callers=0 calls=0
*/
void sub_16a9510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a9510ULL || rel >= 0x16a9520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a9520 size=80 callers=0 calls=1
   calls: sub_174de50
*/
void sub_16a9520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a9520ULL || rel >= 0x16a9570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a9570 size=96 callers=0 calls=1
   calls: sub_174de50
*/
void sub_16a9570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a9570ULL || rel >= 0x16a95d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a95d0 size=48 callers=0 calls=1
   calls: sub_16a8390
*/
void sub_16a95d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a95d0ULL || rel >= 0x16a9600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a9600 size=208 callers=0 calls=2
   calls: sub_1749110, sub_174de50
*/
void sub_16a9600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a9600ULL || rel >= 0x16a96d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a96d0 size=144 callers=0 calls=1
   calls: sub_173e5e0
*/
void sub_16a96d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a96d0ULL || rel >= 0x16a9760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a9760 size=192 callers=0 calls=1
   calls: sub_173e5e0
*/
void sub_16a9760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a9760ULL || rel >= 0x16a9820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a9820 size=144 callers=0 calls=4
   calls: sub_1749820, sub_17499e0, sub_174de50, sub_174de60
*/
void sub_16a9820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a9820ULL || rel >= 0x16a98b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a98b0 size=112 callers=0 calls=1
   calls: sub_174de50
*/
void sub_16a98b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a98b0ULL || rel >= 0x16a9920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a9920 size=16 callers=0 calls=0
*/
void sub_16a9920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a9920ULL || rel >= 0x16a9930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a9930 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_16a9930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a9930ULL || rel >= 0x16a9990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a9990 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_16a9990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a9990ULL || rel >= 0x16a99f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a99f0 size=16 callers=0 calls=0
*/
void sub_16a99f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a99f0ULL || rel >= 0x16a9a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a9a00 size=16 callers=0 calls=0
*/
void sub_16a9a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a9a00ULL || rel >= 0x16a9a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a9a10 size=16 callers=0 calls=0
*/
void sub_16a9a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a9a10ULL || rel >= 0x16a9a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a9a20 size=48 callers=4 calls=1
   calls: sub_173bd50
*/
void sub_16a9a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a9a20ULL || rel >= 0x16a9a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a9a50 size=16 callers=1 calls=0
*/
void sub_16a9a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a9a50ULL || rel >= 0x16a9a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a9a60 size=48 callers=0 calls=1
   calls: sub_173bdc0
*/
void sub_16a9a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a9a60ULL || rel >= 0x16a9a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a9a90 size=240 callers=1 calls=3
   calls: Pia_Send, sub_165e060, sub_165e140
*/
void sub_16a9a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a9a90ULL || rel >= 0x16a9b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a9b80 size=32 callers=0 calls=0
*/
void sub_16a9b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a9b80ULL || rel >= 0x16a9ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a9ba0 size=320 callers=1 calls=6
   calls: sub_165e060, sub_165e140, sub_16a8380, sub_16c0ab0, sub_173c170, sub_173eb50
*/
void sub_16a9ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a9ba0ULL || rel >= 0x16a9ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a9ce0 size=64 callers=0 calls=1
   calls: sub_16c0b10
*/
void sub_16a9ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a9ce0ULL || rel >= 0x16a9d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a9d20 size=64 callers=0 calls=0
*/
void sub_16a9d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a9d20ULL || rel >= 0x16a9d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a9d60 size=224 callers=0 calls=6
   calls: sub_16c0b30, sub_1739b30, sub_173c360, sub_173caa0, sub_174b0f0, sub_174de50
*/
void sub_16a9d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a9d60ULL || rel >= 0x16a9e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a9e40 size=272 callers=0 calls=2
   calls: sub_174b0f0, sub_174de50
*/
void sub_16a9e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a9e40ULL || rel >= 0x16a9f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016a9f50 size=192 callers=0 calls=1
   calls: sub_174de50
*/
void sub_16a9f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a9f50ULL || rel >= 0x16aa010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016aa010 size=64 callers=0 calls=0
*/
void sub_16aa010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16aa010ULL || rel >= 0x16aa050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016aa050 size=352 callers=0 calls=4
   calls: sub_16aa1b0, sub_16aa380, sub_173eb50, sub_173eb60
*/
void sub_16aa050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16aa050ULL || rel >= 0x16aa1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016aa1b0 size=464 callers=2 calls=7
   calls: sub_1652d30, sub_165fb50, sub_173c950, sub_173c9c0, sub_173ca60, sub_173eed0, sub_174de60
*/
void sub_16aa1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16aa1b0ULL || rel >= 0x16aa380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016aa380 size=848 callers=4 calls=12
   calls: sub_1652d30, sub_165fb30, sub_165fb70, sub_171b080, sub_171b0c0, sub_173c950, sub_173c9c0, sub_173ca60, sub_173eed0, sub_17490f0, sub_174b020, sub_174de50
*/
void sub_16aa380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16aa380ULL || rel >= 0x16aa6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016aa6d0 size=304 callers=0 calls=5
   calls: sub_16aa800, sub_173eb50, sub_173eb60, sub_174b0f0, sub_174de50
*/
void sub_16aa6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16aa6d0ULL || rel >= 0x16aa800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016aa800 size=464 callers=2 calls=6
   calls: sub_1652d30, sub_165fb30, sub_173c950, sub_173c9c0, sub_173ca60, sub_173eed0
*/
void sub_16aa800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16aa800ULL || rel >= 0x16aa9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016aa9d0 size=288 callers=0 calls=3
   calls: sub_16aa380, sub_173eb50, sub_173eb60
*/
void sub_16aa9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16aa9d0ULL || rel >= 0x16aaaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016aaaf0 size=320 callers=1 calls=3
   calls: sub_173c9c0, sub_17490f0, sub_174de50
*/
void sub_16aaaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16aaaf0ULL || rel >= 0x16aac30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016aac30 size=224 callers=0 calls=2
   calls: sub_165e060, sub_174de70
*/
void sub_16aac30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16aac30ULL || rel >= 0x16aad10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016aad10 size=128 callers=0 calls=1
   calls: sub_174de50
*/
void sub_16aad10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16aad10ULL || rel >= 0x16aad90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016aad90 size=80 callers=0 calls=1
   calls: sub_174de50
*/
void sub_16aad90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16aad90ULL || rel >= 0x16aade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016aade0 size=96 callers=0 calls=1
   calls: sub_174de50
*/
void sub_16aade0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16aade0ULL || rel >= 0x16aae40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016aae40 size=16 callers=0 calls=0
*/
void sub_16aae40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16aae40ULL || rel >= 0x16aae50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016aae50 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_16aae50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16aae50ULL || rel >= 0x16aaeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016aaeb0 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_16aaeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16aaeb0ULL || rel >= 0x16aaf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016aaf10 size=176 callers=1 calls=3
   calls: sub_165d8e0, sub_165d9b0, sub_173cf60
   ref: MeshProtocolReliable receive buffer num
   ref: MeshProtocolReliable send buffer num
*/
void MeshProtocolReliable_send_buffer_num(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16aaf10ULL || rel >= 0x16aafc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016aafc0 size=16 callers=0 calls=0
*/
void sub_16aafc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16aafc0ULL || rel >= 0x16aafd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016aafd0 size=48 callers=0 calls=1
   calls: sub_173cfa0
*/
void sub_16aafd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16aafd0ULL || rel >= 0x16ab000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ab000 size=736 callers=1 calls=6
   calls: sub_1652bd0, sub_165c600, sub_165e060, sub_17162d0, sub_1716330, sub_1743960
*/
void sub_16ab000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ab000ULL || rel >= 0x16ab2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ab2e0 size=256 callers=1 calls=2
   calls: sub_1716390, sub_17163e0
*/
void sub_16ab2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ab2e0ULL || rel >= 0x16ab3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ab3e0 size=480 callers=0 calls=8
   calls: sub_165e060, sub_16a7ea0, sub_173d270, sub_1743f20, sub_1744090, sub_17440f0, sub_1744290, sub_174de50
*/
void sub_16ab3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ab3e0ULL || rel >= 0x16ab5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ab5c0 size=224 callers=0 calls=2
   calls: sub_165e060, sub_174e350
*/
void sub_16ab5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ab5c0ULL || rel >= 0x16ab6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ab6a0 size=4176 callers=0 calls=52
   calls: DestroyMeshJob_SendDestroyMesh, sub_1652d30, sub_1655850, sub_16559c0, sub_165c6b0, sub_165d8e0, sub_165da20, sub_165e060, sub_165e140, sub_165fb30, sub_165fb50, sub_165fd50
   ... +40 more
*/
void sub_16ab6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ab6a0ULL || rel >= 0x16ac6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ac6f0 size=1296 callers=2 calls=7
   calls: KickoutManageJob_ClientFinalize, sub_165c9d0, sub_16a5480, sub_16a6bd0, sub_16a7a50, sub_16a7b10, sub_174de50
*/
void sub_16ac6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ac6f0ULL || rel >= 0x16acc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016acc00 size=1344 callers=6 calls=15
   calls: sub_165c6b0, sub_165c9b0, sub_165d8e0, sub_165da20, sub_16a5480, sub_16a6fb0, sub_16a7a50, sub_173caa0, sub_173ef10, sub_1746570, sub_1749820, sub_17499e0
   ... +3 more
*/
void sub_16acc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16acc00ULL || rel >= 0x16ad140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ad140 size=400 callers=0 calls=9
   calls: sub_1652d30, sub_16558d0, sub_1655950, sub_165fb50, sub_16a8380, sub_16b2800, sub_16b8760, sub_16c1140, sub_174de50
*/
void sub_16ad140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ad140ULL || rel >= 0x16ad2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ad2d0 size=272 callers=0 calls=6
   calls: sub_165fd40, sub_16a02d0, sub_16a7a50, sub_16a8380, sub_16c1140, sub_174de50
*/
void sub_16ad2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ad2d0ULL || rel >= 0x16ad3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ad3e0 size=240 callers=0 calls=8
   calls: sub_16a5480, sub_16a54e0, sub_16a8370, sub_16acc00, sub_16ade80, sub_16bff90, sub_1749400, sub_174de50
*/
void sub_16ad3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ad3e0ULL || rel >= 0x16ad4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ad4d0 size=192 callers=0 calls=4
   calls: ProcessDestroyMeshJob_SendDestroyResponse, sub_16a7a50, sub_16a8300, sub_174de50
*/
void sub_16ad4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ad4d0ULL || rel >= 0x16ad590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ad590 size=640 callers=0 calls=11
   calls: ProcessUpdateMeshJob_UpdateFailed, ProcessUpdateMeshJob_UpdateFailed_6, sub_1655850, sub_16559c0, sub_165c9d0, sub_165fd40, sub_16a7a50, sub_16a7eb0, sub_16adfd0, sub_174b0e0, sub_174de50
*/
void sub_16ad590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ad590ULL || rel >= 0x16ad810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ad810 size=304 callers=0 calls=4
   calls: sub_165c9d0, sub_16a7a50, sub_16a7b10, sub_16a7ea0
*/
void sub_16ad810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ad810ULL || rel >= 0x16ad940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ad940 size=208 callers=0 calls=5
   calls: sub_16559c0, sub_16a6bd0, sub_16a7a50, sub_16b5880, sub_174de50
*/
void sub_16ad940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ad940ULL || rel >= 0x16ada10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ada10 size=240 callers=0 calls=7
   calls: sub_16559c0, sub_165c9d0, sub_16a6bd0, sub_16a7a50, sub_16a7b10, sub_16b6df0, sub_174de50
*/
void sub_16ada10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ada10ULL || rel >= 0x16adb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016adb00 size=352 callers=0 calls=9
   calls: sub_165c9d0, sub_16a6bd0, sub_16a7ea0, sub_16a8380, sub_16b2750, sub_16b7920, sub_16b7ab0, sub_16c1140, sub_174de50
*/
void sub_16adb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16adb00ULL || rel >= 0x16adc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016adc60 size=272 callers=0 calls=7
   calls: RelayRouteManageJob_WaitAllDirectConnectionReport, sub_1655850, sub_16559c0, sub_165c9d0, sub_16a7a50, sub_16a7b10, sub_174de50
*/
void sub_16adc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16adc60ULL || rel >= 0x16add70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016add70 size=272 callers=0 calls=7
   calls: sub_165c9d0, sub_16a7a50, sub_16a7b10, sub_16a8370, sub_16bf6e0, sub_16bf900, sub_174de50
*/
void sub_16add70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16add70ULL || rel >= 0x16ade80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ade80 size=336 callers=1 calls=5
   calls: sub_165e140, sub_173c720, sub_173caa0, sub_173ef10, sub_174de50
*/
void sub_16ade80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ade80ULL || rel >= 0x16adfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016adfd0 size=336 callers=1 calls=5
   calls: sub_165c9b0, sub_16a7a50, sub_173caa0, sub_173ef20, sub_174de50
*/
void sub_16adfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16adfd0ULL || rel >= 0x16ae120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ae120 size=288 callers=3 calls=4
   calls: sub_165c9b0, sub_16a7ea0, sub_173caa0, sub_173ef20
*/
void sub_16ae120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ae120ULL || rel >= 0x16ae240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ae240 size=304 callers=1 calls=5
   calls: sub_165d8e0, sub_165da20, sub_16a7a50, sub_1746570, sub_174de50
*/
void sub_16ae240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ae240ULL || rel >= 0x16ae370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ae370 size=320 callers=1 calls=5
   calls: sub_165e140, sub_173c720, sub_173caa0, sub_173ef10, sub_174de50
*/
void sub_16ae370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ae370ULL || rel >= 0x16ae4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ae4b0 size=320 callers=1 calls=5
   calls: sub_165d8e0, sub_165da20, sub_16a7ea0, sub_1746570, sub_174de50
*/
void sub_16ae4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ae4b0ULL || rel >= 0x16ae5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ae5f0 size=400 callers=1 calls=6
   calls: sub_165e140, sub_16a7ea0, sub_173c720, sub_173caa0, sub_173ef10, sub_174de50
*/
void sub_16ae5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ae5f0ULL || rel >= 0x16ae780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ae780 size=320 callers=2 calls=4
   calls: sub_16a7ea0, sub_173caa0, sub_173ef10, sub_174de50
*/
void sub_16ae780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ae780ULL || rel >= 0x16ae8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ae8c0 size=304 callers=1 calls=5
   calls: sub_165d8e0, sub_165da20, sub_16a7ea0, sub_1746570, sub_174de50
*/
void sub_16ae8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ae8c0ULL || rel >= 0x16ae9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ae9f0 size=320 callers=1 calls=5
   calls: sub_165d8e0, sub_165da20, sub_16a7ea0, sub_1746570, sub_174de50
*/
void sub_16ae9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ae9f0ULL || rel >= 0x16aeb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016aeb30 size=336 callers=1 calls=5
   calls: sub_165d8e0, sub_165da20, sub_16a7ea0, sub_1746570, sub_174de50
*/
void sub_16aeb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16aeb30ULL || rel >= 0x16aec80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016aec80 size=400 callers=1 calls=6
   calls: sub_165e140, sub_16a7ea0, sub_173c720, sub_173caa0, sub_173ef10, sub_174de50
*/
void sub_16aec80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16aec80ULL || rel >= 0x16aee10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016aee10 size=944 callers=1 calls=13
   calls: sub_165c9b0, sub_165d8e0, sub_165da20, sub_16a7a50, sub_16a7ea0, sub_16a8370, sub_16affd0, sub_16b0000, sub_16c0230, sub_1746570, sub_1749700, sub_17497e0
   ... +1 more
*/
void sub_16aee10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16aee10ULL || rel >= 0x16af1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016af1c0 size=432 callers=1 calls=11
   calls: sub_165c9b0, sub_165d8e0, sub_165da20, sub_165e140, sub_16a65e0, sub_16a7ea0, sub_16a8370, sub_16bf6f0, sub_16bfb50, sub_1746570, sub_174de50
*/
void sub_16af1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16af1c0ULL || rel >= 0x16af370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016af370 size=496 callers=1 calls=10
   calls: sub_165c9b0, sub_165d8e0, sub_165da20, sub_165e140, sub_16a5480, sub_16a65e0, sub_16a7ea0, sub_16b71b0, sub_1746570, sub_174de50
*/
void sub_16af370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16af370ULL || rel >= 0x16af560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016af560 size=400 callers=2 calls=9
   calls: sub_165c9b0, sub_165e140, sub_16a65e0, sub_16a7a50, sub_16a7ea0, sub_16a8380, sub_16b7920, sub_16c1030, sub_174de50
*/
void sub_16af560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16af560ULL || rel >= 0x16af6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016af6f0 size=256 callers=1 calls=4
   calls: sub_165d8e0, sub_165da20, sub_16a7ea0, sub_1746570
*/
void sub_16af6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16af6f0ULL || rel >= 0x16af7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016af7f0 size=288 callers=1 calls=8
   calls: sub_1652d30, sub_165e140, sub_165fb30, sub_16a7a50, sub_16a8380, sub_16c0d50, sub_174b020, sub_174de50
*/
void sub_16af7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16af7f0ULL || rel >= 0x16af910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016af910 size=864 callers=1 calls=9
   calls: sub_165c9b0, sub_16a7a50, sub_16a83c0, sub_16a83d0, sub_1749820, sub_17499e0, sub_1749fd0, sub_174de50, sub_174de60
*/
void sub_16af910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16af910ULL || rel >= 0x16afc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016afc70 size=16 callers=1 calls=0
*/
void sub_16afc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16afc70ULL || rel >= 0x16afc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016afc80 size=16 callers=3 calls=0
*/
void sub_16afc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16afc80ULL || rel >= 0x16afc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016afc90 size=16 callers=1 calls=0
*/
void sub_16afc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16afc90ULL || rel >= 0x16afca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016afca0 size=16 callers=0 calls=0
*/
void sub_16afca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16afca0ULL || rel >= 0x16afcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016afcb0 size=16 callers=0 calls=0
*/
void sub_16afcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16afcb0ULL || rel >= 0x16afcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016afcc0 size=16 callers=0 calls=0
*/
void sub_16afcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16afcc0ULL || rel >= 0x16afcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016afcd0 size=112 callers=1 calls=4
   calls: sub_1652bd0, sub_16b4770, sub_17162d0, sub_1749270
*/
void sub_16afcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16afcd0ULL || rel >= 0x16afd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016afd40 size=96 callers=0 calls=1
   calls: sub_1716390
*/
void sub_16afd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16afd40ULL || rel >= 0x16afda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016afda0 size=96 callers=0 calls=2
   calls: sub_1716390, sub_17492d0
*/
void sub_16afda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16afda0ULL || rel >= 0x16afe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016afe00 size=208 callers=1 calls=1
   calls: sub_165e060
*/
void sub_16afe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16afe00ULL || rel >= 0x16afed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016afed0 size=112 callers=0 calls=2
   calls: sub_17493f0, sub_174e330
*/
void sub_16afed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16afed0ULL || rel >= 0x16aff40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016aff40 size=144 callers=17 calls=3
   calls: sub_169bef0, sub_16a2460, sub_16b5360
*/
void sub_16aff40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16aff40ULL || rel >= 0x16affd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016affd0 size=48 callers=4 calls=0
*/
void sub_16affd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16affd0ULL || rel >= 0x16b0000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b0000 size=48 callers=2 calls=0
*/
void sub_16b0000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b0000ULL || rel >= 0x16b0030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b0030 size=176 callers=5 calls=2
   calls: sub_165e060, sub_16a56c0
*/
void sub_16b0030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b0030ULL || rel >= 0x16b00e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b00e0 size=352 callers=14 calls=5
   calls: sub_165e060, sub_1749820, sub_17499e0, sub_1749d80, sub_174de60
*/
void sub_16b00e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b00e0ULL || rel >= 0x16b0240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b0240 size=176 callers=1 calls=2
   calls: sub_165e060, sub_16a56c0
*/
void sub_16b0240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b0240ULL || rel >= 0x16b02f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b02f0 size=176 callers=4 calls=2
   calls: sub_165e060, sub_16a56c0
*/
void sub_16b02f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b02f0ULL || rel >= 0x16b03a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b03a0 size=64 callers=1 calls=1
   calls: sub_174a460
*/
void sub_16b03a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b03a0ULL || rel >= 0x16b03e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b03e0 size=128 callers=0 calls=2
   calls: sub_1716390, sub_17163e0
*/
void sub_16b03e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b03e0ULL || rel >= 0x16b0460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b0460 size=144 callers=0 calls=3
   calls: sub_1716390, sub_17163e0, sub_174a4b0
*/
void sub_16b0460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b0460ULL || rel >= 0x16b04f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b04f0 size=208 callers=0 calls=5
   calls: sub_1652bd0, sub_165e060, sub_17162d0, sub_1749820, sub_174a520
*/
void sub_16b04f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b04f0ULL || rel >= 0x16b05c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b05c0 size=112 callers=0 calls=2
   calls: sub_1716390, sub_17163e0
*/
void sub_16b05c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b05c0ULL || rel >= 0x16b0630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b0630 size=384 callers=0 calls=4
   calls: sub_1655c80, sub_1655c90, sub_165e060, sub_1749a80
*/
void sub_16b0630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b0630ULL || rel >= 0x16b07b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b07b0 size=320 callers=0 calls=4
   calls: sub_1655c80, sub_1655c90, sub_165e060, sub_1749a80
*/
void sub_16b07b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b07b0ULL || rel >= 0x16b08f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b08f0 size=288 callers=0 calls=5
   calls: sub_1655c80, sub_1655c90, sub_165e060, sub_1749a80, sub_1749d80
*/
void sub_16b08f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b08f0ULL || rel >= 0x16b0a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b0a10 size=144 callers=0 calls=3
   calls: sub_1655c80, sub_1655c90, sub_1749b10
*/
void sub_16b0a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b0a10ULL || rel >= 0x16b0aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b0aa0 size=208 callers=0 calls=4
   calls: sub_1653860, sub_1655c80, sub_1655c90, sub_1749cd0
*/
void sub_16b0aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b0aa0ULL || rel >= 0x16b0b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b0b70 size=192 callers=0 calls=3
   calls: sub_1655c80, sub_1655c90, sub_1749da0
*/
void sub_16b0b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b0b70ULL || rel >= 0x16b0c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b0c30 size=192 callers=0 calls=3
   calls: sub_1655c80, sub_1655c90, sub_1749d80
*/
void sub_16b0c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b0c30ULL || rel >= 0x16b0cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b0cf0 size=208 callers=1 calls=4
   calls: sub_1655c80, sub_1655c90, sub_1749d80, sub_1749d90
*/
void sub_16b0cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b0cf0ULL || rel >= 0x16b0dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b0dc0 size=128 callers=0 calls=1
   calls: sub_1655c80
*/
void sub_16b0dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b0dc0ULL || rel >= 0x16b0e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b0e40 size=64 callers=0 calls=1
   calls: sub_1655c80
*/
void sub_16b0e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b0e40ULL || rel >= 0x16b0e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b0e80 size=16 callers=0 calls=0
*/
void sub_16b0e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b0e80ULL || rel >= 0x16b0e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b0e90 size=112 callers=1 calls=2
   calls: sub_16580b0, sub_174a5f0
*/
void sub_16b0e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b0e90ULL || rel >= 0x16b0f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b0f00 size=16 callers=0 calls=0
*/
void sub_16b0f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b0f00ULL || rel >= 0x16b0f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b0f10 size=48 callers=0 calls=1
   calls: sub_174a680
*/
void sub_16b0f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b0f10ULL || rel >= 0x16b0f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b0f40 size=1072 callers=0 calls=17
   calls: sub_1652bd0, sub_16580c0, sub_16581f0, sub_165e060, sub_165e140, sub_16afcd0, sub_16afe00, sub_16b16a0, sub_16b1720, sub_17162d0, sub_173d6d0, sub_173d700
   ... +5 more
*/
void sub_16b0f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b0f40ULL || rel >= 0x16b1370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b1370 size=288 callers=0 calls=8
   calls: sub_16580f0, sub_1658120, sub_16b1780, sub_1716390, sub_17163e0, sub_173d9d0, sub_173db30, sub_1747d60
*/
void sub_16b1370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b1370ULL || rel >= 0x16b1490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b1490 size=240 callers=0 calls=3
   calls: sub_165e060, sub_16a8390, sub_16c1910
*/
void sub_16b1490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b1490ULL || rel >= 0x16b1580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b1580 size=240 callers=0 calls=3
   calls: sub_165e060, sub_16a8390, sub_16c19c0
*/
void sub_16b1580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b1580ULL || rel >= 0x16b1670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b1670 size=16 callers=0 calls=0
*/
void sub_16b1670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b1670ULL || rel >= 0x16b1680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b1680 size=32 callers=0 calls=0
*/
void sub_16b1680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b1680ULL || rel >= 0x16b16a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b16a0 size=64 callers=1 calls=1
   calls: sub_173cf60
*/
void sub_16b16a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b16a0ULL || rel >= 0x16b16e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b16e0 size=16 callers=0 calls=0
*/
void sub_16b16e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b16e0ULL || rel >= 0x16b16f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b16f0 size=48 callers=0 calls=1
   calls: sub_173cfa0
*/
void sub_16b16f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b16f0ULL || rel >= 0x16b1720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b1720 size=96 callers=1 calls=1
   calls: sub_165e060
*/
void sub_16b1720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b1720ULL || rel >= 0x16b1780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b1780 size=16 callers=1 calls=0
*/
void sub_16b1780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b1780ULL || rel >= 0x16b1790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b1790 size=16 callers=0 calls=0
*/
void sub_16b1790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b1790ULL || rel >= 0x16b17a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b17a0 size=16 callers=0 calls=0
*/
void sub_16b17a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b17a0ULL || rel >= 0x16b17b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b17b0 size=464 callers=0 calls=8
   calls: sub_1652d30, sub_165e060, sub_165e140, sub_165fb30, sub_165fd50, sub_16b1980, sub_173ab40, sub_173ab60
*/
void sub_16b17b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b17b0ULL || rel >= 0x16b1980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b1980 size=448 callers=1 calls=8
   calls: sub_165c9d0, sub_165e060, sub_16a8380, sub_16b1b40, sub_16b1cd0, sub_16b28a0, sub_16c1160, sub_174de50
*/
void sub_16b1980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b1980ULL || rel >= 0x16b1b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b1b40 size=400 callers=1 calls=7
   calls: sub_165fd30, sub_16a8370, sub_16bff90, sub_173c720, sub_173caa0, sub_173ef30, sub_174de50
*/
void sub_16b1b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b1b40ULL || rel >= 0x16b1cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b1cd0 size=2448 callers=1 calls=35
   calls: ProcessConnectionRequestJob_ConnectToRequesterStation, ProcessConnectionRequestJob_WaitInverseConnection_2, sub_1652d30, sub_1653890, sub_1653bb0, sub_1655850, sub_1655950, sub_165c600, sub_165c9b0, sub_165fd50, sub_169bef0, sub_16a8380
   ... +23 more
*/
void sub_16b1cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b1cd0ULL || rel >= 0x16b2660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b2660 size=240 callers=1 calls=5
   calls: sub_173c720, sub_173caa0, sub_173ef30, sub_173ef60, sub_173ef90
*/
void sub_16b2660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b2660ULL || rel >= 0x16b2750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b2750 size=176 callers=1 calls=3
   calls: sub_165c9b0, sub_173caa0, sub_173ef10
*/
void sub_16b2750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b2750ULL || rel >= 0x16b2800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b2800 size=160 callers=2 calls=4
   calls: sub_165c9b0, sub_173c720, sub_173caa0, sub_173ef10
*/
void sub_16b2800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b2800ULL || rel >= 0x16b28a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b28a0 size=2864 callers=1 calls=30
   calls: sub_1653860, sub_1653930, sub_1653bb0, sub_165bc90, sub_165bd20, sub_165c9a0, sub_165c9b0, sub_165c9d0, sub_165c9f0, sub_165ca10, sub_165fd50, sub_16672c0
   ... +18 more
*/
void sub_16b28a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b28a0ULL || rel >= 0x16b33d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b33d0 size=144 callers=4 calls=2
   calls: sub_173caa0, sub_173ef30
*/
void sub_16b33d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b33d0ULL || rel >= 0x16b3460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b3460 size=112 callers=2 calls=3
   calls: sub_173c720, sub_173caa0, sub_173ef30
*/
void sub_16b3460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b3460ULL || rel >= 0x16b34d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b34d0 size=272 callers=2 calls=1
   calls: sub_174de60
*/
void sub_16b34d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b34d0ULL || rel >= 0x16b35e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b35e0 size=2192 callers=3 calls=11
   calls: sub_165be70, sub_165be80, sub_165be90, sub_165c180, sub_165c960, sub_165c9b0, sub_165c9e0, sub_165ca00, sub_16672c0, sub_169cfe0, sub_16a56c0
*/
void sub_16b35e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b35e0ULL || rel >= 0x16b3e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

