/* main functions 01687630..01698f00 (193 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 01687630 size=208 callers=1 calls=4
   calls: sub_165c600, sub_165c6b0, sub_165e060, sub_1687700
   ref: LocalBackgroundProcessJob::DestroyNetwork
*/
void LocalBackgroundProcessJob_DestroyNetwork(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1687630ULL || rel >= 0x1687700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01687700 size=208 callers=8 calls=4
   calls: sub_1655110, sub_1655190, sub_16559c0, sub_165e060
*/
void sub_1687700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1687700ULL || rel >= 0x16877d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016877d0 size=176 callers=1 calls=4
   calls: sub_1655330, sub_16559c0, sub_1655a80, sub_165e060
*/
void sub_16877d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16877d0ULL || rel >= 0x1687880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01687880 size=208 callers=1 calls=4
   calls: sub_165c600, sub_165c6b0, sub_165e060, sub_1687700
   ref: LocalBackgroundProcessJob::DisconnectNetwork
*/
void LocalBackgroundProcessJob_DisconnectNetwork(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1687880ULL || rel >= 0x1687950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01687950 size=384 callers=1 calls=9
   calls: sub_165c600, sub_165c6b0, sub_165e060, sub_165e140, sub_1660a50, sub_1687700, sub_16961c0, sub_1696ab0, sub_1697210
   ref: LocalBackgroundProcessJob::CreateNetwork
*/
void LocalBackgroundProcessJob_CreateNetwork(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1687950ULL || rel >= 0x1687ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01687ad0 size=16 callers=2 calls=0
*/
void sub_1687ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1687ad0ULL || rel >= 0x1687ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01687ae0 size=528 callers=0 calls=7
   calls: sub_16551b0, sub_1655220, sub_1655290, sub_165c600, sub_165e060, sub_1694a60, sub_172be20
*/
void sub_1687ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1687ae0ULL || rel >= 0x1687cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01687cf0 size=224 callers=1 calls=4
   calls: sub_165c600, sub_165c6b0, sub_165e060, sub_1687700
   ref: LocalBackgroundProcessJob::ConnectNetwork
*/
void LocalBackgroundProcessJob_ConnectNetwork(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1687cf0ULL || rel >= 0x1687dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01687dd0 size=528 callers=0 calls=7
   calls: sub_16551b0, sub_1655220, sub_1655290, sub_165c600, sub_165e060, sub_16936b0, sub_172be20
*/
void sub_1687dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1687dd0ULL || rel >= 0x1687fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01687fe0 size=528 callers=0 calls=7
   calls: sub_16551b0, sub_1655220, sub_1655290, sub_165c600, sub_165e060, sub_1692ea0, sub_172be20
*/
void sub_1687fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1687fe0ULL || rel >= 0x16881f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016881f0 size=48 callers=2 calls=1
   calls: sub_1660a40
*/
void sub_16881f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16881f0ULL || rel >= 0x1688220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01688220 size=16 callers=0 calls=0
*/
void sub_1688220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1688220ULL || rel >= 0x1688230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01688230 size=96 callers=1 calls=2
   calls: sub_1653900, sub_165e140
*/
void sub_1688230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1688230ULL || rel >= 0x1688290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01688290 size=16 callers=0 calls=0
*/
void sub_1688290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1688290ULL || rel >= 0x16882a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016882a0 size=16 callers=0 calls=0
*/
void sub_16882a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16882a0ULL || rel >= 0x16882b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016882b0 size=96 callers=2 calls=4
   calls: sub_1652bd0, sub_1655080, sub_165ba50, sub_17162d0
*/
void sub_16882b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16882b0ULL || rel >= 0x1688310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01688310 size=80 callers=1 calls=2
   calls: sub_1655170, sub_1716390
*/
void sub_1688310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1688310ULL || rel >= 0x1688360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01688360 size=96 callers=0 calls=3
   calls: sub_1655170, sub_165baa0, sub_1716390
*/
void sub_1688360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1688360ULL || rel >= 0x16883c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016883c0 size=224 callers=0 calls=4
   calls: sub_1655110, sub_1655190, sub_1655850, sub_165e060
   ref: LocalCreateNetworkJob::WaitCreateNetwork
*/
void LocalCreateNetworkJob_WaitCreateNetwork_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16883c0ULL || rel >= 0x16884a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016884a0 size=240 callers=0 calls=4
   calls: sub_16551b0, sub_1655220, sub_1655330, sub_165e060
   ref: LocalCreateNetworkJob::WaitForCancel
*/
void LocalCreateNetworkJob_WaitForCancel(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16884a0ULL || rel >= 0x1688590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01688590 size=144 callers=1 calls=3
   calls: sub_1655220, sub_1655330, sub_165e060
*/
void sub_1688590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1688590ULL || rel >= 0x1688620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01688620 size=80 callers=0 calls=1
   calls: sub_1655290
*/
void sub_1688620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1688620ULL || rel >= 0x1688670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01688670 size=16 callers=0 calls=0
*/
void sub_1688670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1688670ULL || rel >= 0x1688680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01688680 size=112 callers=1 calls=1
   calls: sub_17232f0
*/
void sub_1688680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1688680ULL || rel >= 0x16886f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016886f0 size=32 callers=1 calls=0
*/
void sub_16886f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16886f0ULL || rel >= 0x1688710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01688710 size=16 callers=0 calls=0
*/
void sub_1688710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1688710ULL || rel >= 0x1688720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01688720 size=48 callers=1 calls=0
*/
void sub_1688720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1688720ULL || rel >= 0x1688750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01688750 size=48 callers=0 calls=0
*/
void sub_1688750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1688750ULL || rel >= 0x1688780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01688780 size=224 callers=1 calls=4
   calls: sub_165be70, sub_165bea0, sub_165c080, sub_165e060
*/
void sub_1688780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1688780ULL || rel >= 0x1688860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01688860 size=16 callers=1 calls=0
*/
void sub_1688860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1688860ULL || rel >= 0x1688870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01688870 size=16 callers=0 calls=0
*/
void sub_1688870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1688870ULL || rel >= 0x1688880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01688880 size=16 callers=0 calls=0
*/
void sub_1688880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1688880ULL || rel >= 0x1688890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01688890 size=480 callers=0 calls=2
   calls: sub_165c200, sub_165e060
*/
void sub_1688890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1688890ULL || rel >= 0x1688a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01688a70 size=64 callers=1 calls=1
   calls: sub_165ba50
*/
void sub_1688a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1688a70ULL || rel >= 0x1688ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01688ab0 size=32 callers=1 calls=0
*/
void sub_1688ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1688ab0ULL || rel >= 0x1688ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01688ad0 size=64 callers=0 calls=1
   calls: sub_165baa0
*/
void sub_1688ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1688ad0ULL || rel >= 0x1688b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01688b10 size=160 callers=1 calls=3
   calls: sub_1655110, sub_1655190, sub_165e060
   ref: LocalEventCheckBackgroundJob::UpdateConnectionStatus
*/
void LocalEventCheckBackgroundJob_UpdateConnectionStatus(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1688b10ULL || rel >= 0x1688bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01688bb0 size=144 callers=0 calls=2
   calls: sub_16551b0, sub_165e060
*/
void sub_1688bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1688bb0ULL || rel >= 0x1688c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01688c40 size=144 callers=0 calls=2
   calls: sub_1655220, sub_165e060
*/
void sub_1688c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1688c40ULL || rel >= 0x1688cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01688cd0 size=16 callers=0 calls=0
*/
void sub_1688cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1688cd0ULL || rel >= 0x1688ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01688ce0 size=304 callers=1 calls=5
   calls: sub_1652bd0, sub_165e060, sub_167bd20, sub_167bde0, sub_1716330
*/
void sub_1688ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1688ce0ULL || rel >= 0x1688e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01688e10 size=160 callers=1 calls=2
   calls: sub_1716390, sub_17163e0
*/
void sub_1688e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1688e10ULL || rel >= 0x1688eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01688eb0 size=96 callers=1 calls=0
*/
void sub_1688eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1688eb0ULL || rel >= 0x1688f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01688f10 size=32 callers=0 calls=0
*/
void sub_1688f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1688f10ULL || rel >= 0x1688f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01688f30 size=32 callers=0 calls=0
*/
void sub_1688f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1688f30ULL || rel >= 0x1688f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01688f50 size=256 callers=1 calls=1
   calls: sub_165e060
*/
void sub_1688f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1688f50ULL || rel >= 0x1689050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01689050 size=208 callers=0 calls=1
   calls: sub_165e060
*/
void sub_1689050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1689050ULL || rel >= 0x1689120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01689120 size=48 callers=2 calls=0
*/
void sub_1689120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1689120ULL || rel >= 0x1689150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01689150 size=16 callers=0 calls=0
*/
void sub_1689150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1689150ULL || rel >= 0x1689160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01689160 size=64 callers=0 calls=2
   calls: sub_1652bd0, sub_17162d0
*/
void sub_1689160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1689160ULL || rel >= 0x16891a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016891a0 size=64 callers=0 calls=0
*/
void sub_16891a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16891a0ULL || rel >= 0x16891e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016891e0 size=224 callers=1 calls=2
   calls: sub_165e060, sub_16971f0
*/
void sub_16891e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16891e0ULL || rel >= 0x16892c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016892c0 size=112 callers=0 calls=2
   calls: sub_165e060, sub_1693c60
*/
void sub_16892c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16892c0ULL || rel >= 0x1689330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01689330 size=16 callers=0 calls=0
*/
void sub_1689330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1689330ULL || rel >= 0x1689340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01689340 size=128 callers=1 calls=1
   calls: sub_165e060
*/
void sub_1689340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1689340ULL || rel >= 0x16893c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016893c0 size=16 callers=1 calls=0
*/
void sub_16893c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16893c0ULL || rel >= 0x16893d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016893d0 size=128 callers=1 calls=1
   calls: sub_165e060
*/
void sub_16893d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16893d0ULL || rel >= 0x1689450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01689450 size=128 callers=1 calls=1
   calls: sub_165e060
*/
void sub_1689450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1689450ULL || rel >= 0x16894d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016894d0 size=16 callers=1 calls=0
*/
void sub_16894d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16894d0ULL || rel >= 0x16894e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016894e0 size=128 callers=1 calls=1
   calls: sub_165e060
*/
void sub_16894e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16894e0ULL || rel >= 0x1689560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01689560 size=128 callers=1 calls=1
   calls: sub_165e060
*/
void sub_1689560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1689560ULL || rel >= 0x16895e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016895e0 size=16 callers=2 calls=0
*/
void sub_16895e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16895e0ULL || rel >= 0x16895f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016895f0 size=128 callers=1 calls=1
   calls: sub_165e060
*/
void sub_16895f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16895f0ULL || rel >= 0x1689670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01689670 size=128 callers=2 calls=1
   calls: sub_165e060
*/
void sub_1689670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1689670ULL || rel >= 0x16896f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016896f0 size=128 callers=1 calls=1
   calls: sub_165e060
*/
void sub_16896f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16896f0ULL || rel >= 0x1689770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01689770 size=16 callers=1 calls=0
*/
void sub_1689770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1689770ULL || rel >= 0x1689780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01689780 size=128 callers=1 calls=1
   calls: sub_165e060
*/
void sub_1689780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1689780ULL || rel >= 0x1689800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01689800 size=160 callers=1 calls=1
   calls: sub_165e060
*/
void sub_1689800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1689800ULL || rel >= 0x16898a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016898a0 size=48 callers=4 calls=0
*/
void sub_16898a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16898a0ULL || rel >= 0x16898d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016898d0 size=16 callers=1 calls=0
*/
void sub_16898d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16898d0ULL || rel >= 0x16898e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016898e0 size=128 callers=1 calls=1
   calls: sub_165e060
*/
void sub_16898e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16898e0ULL || rel >= 0x1689960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01689960 size=128 callers=1 calls=1
   calls: sub_165e060
*/
void sub_1689960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1689960ULL || rel >= 0x16899e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016899e0 size=144 callers=1 calls=1
   calls: sub_165e060
*/
void sub_16899e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16899e0ULL || rel >= 0x1689a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01689a70 size=128 callers=1 calls=1
   calls: sub_165e060
*/
void sub_1689a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1689a70ULL || rel >= 0x1689af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01689af0 size=32 callers=4 calls=0
*/
void sub_1689af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1689af0ULL || rel >= 0x1689b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01689b10 size=32 callers=3 calls=0
*/
void sub_1689b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1689b10ULL || rel >= 0x1689b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01689b30 size=32 callers=1 calls=0
*/
void sub_1689b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1689b30ULL || rel >= 0x1689b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01689b50 size=144 callers=2 calls=1
   calls: sub_165e060
*/
void sub_1689b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1689b50ULL || rel >= 0x1689be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01689be0 size=64 callers=1 calls=0
*/
void sub_1689be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1689be0ULL || rel >= 0x1689c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01689c20 size=64 callers=1 calls=0
*/
void sub_1689c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1689c20ULL || rel >= 0x1689c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01689c60 size=160 callers=1 calls=1
   calls: sub_165e060
*/
void sub_1689c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1689c60ULL || rel >= 0x1689d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01689d00 size=128 callers=0 calls=1
   calls: sub_165e060
*/
void sub_1689d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1689d00ULL || rel >= 0x1689d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01689d80 size=48 callers=1 calls=0
*/
void sub_1689d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1689d80ULL || rel >= 0x1689db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01689db0 size=96 callers=1 calls=3
   calls: sub_1655c80, sub_1655c90, sub_1695fb0
*/
void sub_1689db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1689db0ULL || rel >= 0x1689e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01689e10 size=32 callers=3 calls=0
*/
void sub_1689e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1689e10ULL || rel >= 0x1689e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01689e30 size=16 callers=2 calls=0
*/
void sub_1689e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1689e30ULL || rel >= 0x1689e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01689e40 size=320 callers=1 calls=10
   calls: sub_1653890, sub_165e060, sub_1749820, sub_1749960, sub_17499e0, sub_1749f10, sub_1749f30, sub_1749f40, sub_1749f50, sub_1749fc0
*/
void sub_1689e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1689e40ULL || rel >= 0x1689f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01689f80 size=32 callers=0 calls=0
*/
void sub_1689f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1689f80ULL || rel >= 0x1689fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01689fa0 size=128 callers=0 calls=3
   calls: sub_165fea0, sub_16a7c50, sub_16a7ed0
*/
void sub_1689fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1689fa0ULL || rel >= 0x168a020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168a020 size=480 callers=2 calls=18
   calls: sub_1652ca0, sub_1652d30, sub_1653890, sub_165e060, sub_165fd50, sub_1689e40, sub_168a200, sub_1693bb0, sub_1694a60, sub_16a7c50, sub_1749820, sub_17499e0
   ... +6 more
*/
void sub_168a020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168a020ULL || rel >= 0x168a200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168a200 size=368 callers=2 calls=12
   calls: sub_1652ca0, sub_1652d30, sub_1653890, sub_165e060, sub_1749820, sub_1749960, sub_17499e0, sub_1749f10, sub_1749f30, sub_1749f40, sub_1749f50, sub_1749fc0
*/
void sub_168a200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168a200ULL || rel >= 0x168a370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168a370 size=16 callers=1 calls=0
*/
void sub_168a370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168a370ULL || rel >= 0x168a380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168a380 size=16 callers=1 calls=0
*/
void sub_168a380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168a380ULL || rel >= 0x168a390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168a390 size=16 callers=1 calls=0
*/
void sub_168a390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168a390ULL || rel >= 0x168a3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168a3a0 size=112 callers=2 calls=1
   calls: sub_165e060
*/
void sub_168a3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168a3a0ULL || rel >= 0x168a410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168a410 size=32 callers=1 calls=0
*/
void sub_168a410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168a410ULL || rel >= 0x168a430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168a430 size=16 callers=0 calls=0
*/
void sub_168a430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168a430ULL || rel >= 0x168a440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168a440 size=128 callers=0 calls=0
*/
void sub_168a440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168a440ULL || rel >= 0x168a4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168a4c0 size=64 callers=1 calls=1
   calls: sub_165ba50
*/
void sub_168a4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168a4c0ULL || rel >= 0x168a500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168a500 size=32 callers=1 calls=0
*/
void sub_168a500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168a500ULL || rel >= 0x168a520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168a520 size=64 callers=0 calls=1
   calls: sub_165baa0
*/
void sub_168a520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168a520ULL || rel >= 0x168a560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168a560 size=176 callers=2 calls=3
   calls: sub_1655110, sub_1655190, sub_165e060
   ref: LocalForceDisconnectNetworkJob::WaitHostMigrationEnd
   ref: LocalForceDisconnectNetworkJob::WaitDisconnected
*/
void LocalForceDisconnectNetworkJob_WaitDisconnected(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168a560ULL || rel >= 0x168a610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168a610 size=224 callers=0 calls=7
   calls: sub_1655110, sub_1655190, sub_16551b0, sub_1655220, sub_1655290, sub_165e060, sub_1694ea0
*/
void sub_168a610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168a610ULL || rel >= 0x168a6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168a6f0 size=160 callers=0 calls=4
   calls: sub_16551b0, sub_1655290, sub_165e060, sub_1692ea0
*/
void sub_168a6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168a6f0ULL || rel >= 0x168a790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168a790 size=144 callers=1 calls=2
   calls: sub_1655220, sub_165e060
*/
void sub_168a790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168a790ULL || rel >= 0x168a820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168a820 size=16 callers=0 calls=0
*/
void sub_168a820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168a820ULL || rel >= 0x168a830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168a830 size=112 callers=1 calls=4
   calls: sub_1652bd0, sub_1655080, sub_165ba50, sub_17162d0
*/
void sub_168a830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168a830ULL || rel >= 0x168a8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168a8a0 size=80 callers=1 calls=2
   calls: sub_1655170, sub_1716390
*/
void sub_168a8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168a8a0ULL || rel >= 0x168a8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168a8f0 size=96 callers=0 calls=3
   calls: sub_1655170, sub_165baa0, sub_1716390
*/
void sub_168a8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168a8f0ULL || rel >= 0x168a950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168a950 size=176 callers=1 calls=3
   calls: sub_1655110, sub_1655190, sub_165e060
   ref: LocalHostMigrationJob::DisconnectNetwork
*/
void LocalHostMigrationJob_DisconnectNetwork(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168a950ULL || rel >= 0x168aa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168aa00 size=192 callers=0 calls=3
   calls: sub_1655330, sub_1694e90, sub_1694ea0
   ref: LocalHostMigrationJob::WaitForCancel
   ref: LocalHostMigrationJob::WaitDisconnectNetwork
*/
void LocalHostMigrationJob_WaitForCancel(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168aa00ULL || rel >= 0x168aac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168aac0 size=160 callers=1 calls=3
   calls: sub_1655220, sub_1655330, sub_165e060
*/
void sub_168aac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168aac0ULL || rel >= 0x168ab60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168ab60 size=80 callers=0 calls=2
   calls: sub_1655290, sub_168ad20
*/
void sub_168ab60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168ab60ULL || rel >= 0x168abb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168abb0 size=368 callers=0 calls=5
   calls: sub_1655220, sub_1655330, sub_165c600, sub_165e060, sub_168ad20
   ref: LocalHostMigrationJob::WaitForCancel
   ref: LocalHostMigrationJob::CreateNetwork
*/
void LocalHostMigrationJob_WaitForCancel_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168abb0ULL || rel >= 0x168ad20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168ad20 size=480 callers=10 calls=2
   calls: sub_1653900, sub_1687250
*/
void sub_168ad20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168ad20ULL || rel >= 0x168af00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168af00 size=192 callers=0 calls=2
   calls: sub_1655330, sub_16963b0
   ref: LocalHostMigrationJob::WaitForCancel
   ref: LocalHostMigrationJob::WaitCreateNetwork
*/
void LocalHostMigrationJob_WaitForCancel_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168af00ULL || rel >= 0x168afc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168afc0 size=400 callers=0 calls=6
   calls: sub_1653bb0, sub_1655220, sub_1655330, sub_165c600, sub_165e060, sub_168ad20
   ref: LocalHostMigrationJob::WaitForCancel
   ref: LocalHostMigrationJob::WaitUntilAllClientsConnection
*/
void LocalHostMigrationJob_WaitForCancel_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168afc0ULL || rel >= 0x168b150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168b150 size=448 callers=0 calls=12
   calls: sub_1652d30, sub_1653900, sub_1653bb0, sub_1655330, sub_165c600, sub_165c6b0, sub_165fb30, sub_165fb50, sub_165fd90, sub_1687250, sub_1693bd0, sub_1695ae0
   ref: LocalHostMigrationJob::WaitForCancel
   ref: LocalHostMigrationJob::ChangeAllowParticipatingState
*/
void LocalHostMigrationJob_WaitForCancel_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168b150ULL || rel >= 0x168b310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168b310 size=224 callers=0 calls=5
   calls: sub_1655220, sub_165e060, sub_168ad20, sub_1695c30, sub_1696fd0
   ref: LocalHostMigrationJob::WaitChangeAllowParticipatingState
*/
void LocalHostMigrationJob_WaitChangeAllowParticipatingState(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168b310ULL || rel >= 0x168b3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168b3f0 size=304 callers=0 calls=4
   calls: sub_1655220, sub_1655330, sub_165e060, sub_168ad20
   ref: LocalHostMigrationJob::WaitForCancel
   ref: LocalHostMigrationJob::WaitAllClientsAck
*/
void LocalHostMigrationJob_WaitForCancel_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168b3f0ULL || rel >= 0x168b520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168b520 size=304 callers=0 calls=5
   calls: sub_1653bb0, sub_16551b0, sub_1655330, sub_165e060, sub_1695d90
   ref: LocalHostMigrationJob::WaitForCancel
*/
void LocalHostMigrationJob_WaitForCancel_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168b520ULL || rel >= 0x168b650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168b650 size=32 callers=0 calls=0
   ref: LocalHostMigrationJob::ScanNetwork
*/
void LocalHostMigrationJob_ScanNetwork(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168b650ULL || rel >= 0x168b670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168b670 size=368 callers=0 calls=7
   calls: sub_1655220, sub_1655330, sub_165c600, sub_165c6b0, sub_165e060, sub_168ad20, sub_1696dc0
   ref: LocalHostMigrationJob::WaitForCancel
   ref: LocalHostMigrationJob::WaitScanNetwork
*/
void LocalHostMigrationJob_WaitForCancel_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168b670ULL || rel >= 0x168b7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168b7e0 size=320 callers=0 calls=4
   calls: sub_1655220, sub_1655330, sub_165e060, sub_168ad20
   ref: LocalHostMigrationJob::WaitForCancel
   ref: LocalHostMigrationJob::SearchNewHostNetwork
*/
void LocalHostMigrationJob_WaitForCancel_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168b7e0ULL || rel >= 0x168b920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168b920 size=256 callers=0 calls=1
   calls: sub_1655330
   ref: LocalHostMigrationJob::WaitForCancel
   ref: LocalHostMigrationJob::ConnectNetwork
   ref: LocalHostMigrationJob::ScanNetwork
*/
void LocalHostMigrationJob_ScanNetwork_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168b920ULL || rel >= 0x168ba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168ba20 size=256 callers=0 calls=2
   calls: sub_1655330, sub_1696900
   ref: LocalHostMigrationJob::WaitForCancel
   ref: LocalHostMigrationJob::WaitConnectNetwork
*/
void LocalHostMigrationJob_WaitForCancel_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168ba20ULL || rel >= 0x168bb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168bb20 size=384 callers=0 calls=6
   calls: sub_1653bb0, sub_16551b0, sub_1655220, sub_1655330, sub_165e060, sub_168ad20
   ref: LocalHostMigrationJob::WaitForCancel
*/
void LocalHostMigrationJob_WaitForCancel_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168bb20ULL || rel >= 0x168bca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168bca0 size=16 callers=0 calls=0
*/
void sub_168bca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168bca0ULL || rel >= 0x168bcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168bcb0 size=32 callers=1 calls=0
*/
void sub_168bcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168bcb0ULL || rel >= 0x168bcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168bcd0 size=32 callers=2 calls=0
*/
void sub_168bcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168bcd0ULL || rel >= 0x168bcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168bcf0 size=16 callers=0 calls=0
*/
void sub_168bcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168bcf0ULL || rel >= 0x168bd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168bd00 size=16 callers=1 calls=0
*/
void sub_168bd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168bd00ULL || rel >= 0x168bd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168bd10 size=16 callers=1 calls=0
*/
void sub_168bd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168bd10ULL || rel >= 0x168bd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168bd20 size=256 callers=0 calls=3
   calls: sub_1652de0, sub_165c9b0, sub_165e060
*/
void sub_168bd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168bd20ULL || rel >= 0x168be20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168be20 size=16 callers=0 calls=0
*/
void sub_168be20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168be20ULL || rel >= 0x168be30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168be30 size=112 callers=1 calls=1
   calls: sub_1724e40
*/
void sub_168be30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168be30ULL || rel >= 0x168bea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168bea0 size=32 callers=2 calls=0
*/
void sub_168bea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168bea0ULL || rel >= 0x168bec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168bec0 size=16 callers=0 calls=0
*/
void sub_168bec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168bec0ULL || rel >= 0x168bed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168bed0 size=80 callers=1 calls=1
   calls: sub_1724f10
*/
void sub_168bed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168bed0ULL || rel >= 0x168bf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168bf20 size=16 callers=0 calls=0
*/
void sub_168bf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168bf20ULL || rel >= 0x168bf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168bf30 size=32 callers=0 calls=0
*/
void sub_168bf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168bf30ULL || rel >= 0x168bf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168bf50 size=224 callers=1 calls=4
   calls: sub_165be70, sub_165bea0, sub_165c080, sub_165e060
*/
void sub_168bf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168bf50ULL || rel >= 0x168c030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168c030 size=16 callers=3 calls=0
*/
void sub_168c030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168c030ULL || rel >= 0x168c040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168c040 size=16 callers=0 calls=0
*/
void sub_168c040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168c040ULL || rel >= 0x168c050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168c050 size=48 callers=0 calls=1
   calls: sub_1727660
*/
void sub_168c050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168c050ULL || rel >= 0x168c080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168c080 size=688 callers=0 calls=9
   calls: sub_165bea0, sub_165e060, sub_165e140, sub_16891e0, sub_16a6090, sub_171e0e0, sub_171e1e0, sub_17276d0, sub_6af650
*/
void sub_168c080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168c080ULL || rel >= 0x168c330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168c330 size=464 callers=0 calls=9
   calls: sub_165e060, sub_165e140, sub_16898a0, sub_1689af0, sub_1689b10, sub_168a3a0, sub_168a410, sub_16a6fb0, sub_16a80b0
*/
void sub_168c330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168c330ULL || rel >= 0x168c500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168c500 size=768 callers=0 calls=5
   calls: sub_1687250, sub_16a8390, sub_16c16d0, sub_1727900, sub_174de50
*/
void sub_168c500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168c500ULL || rel >= 0x168c800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168c800 size=64 callers=0 calls=1
   calls: sub_1689120
*/
void sub_168c800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168c800ULL || rel >= 0x168c840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168c840 size=32 callers=0 calls=1
   calls: sub_1689e10
*/
void sub_168c840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168c840ULL || rel >= 0x168c860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168c860 size=32 callers=0 calls=1
   calls: sub_1689e10
*/
void sub_168c860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168c860ULL || rel >= 0x168c880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168c880 size=80 callers=1 calls=1
   calls: sub_165bea0
*/
void sub_168c880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168c880ULL || rel >= 0x168c8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168c8d0 size=16 callers=0 calls=0
*/
void sub_168c8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168c8d0ULL || rel >= 0x168c8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168c8e0 size=16 callers=0 calls=0
*/
void sub_168c8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168c8e0ULL || rel >= 0x168c8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168c8f0 size=16 callers=0 calls=0
*/
void sub_168c8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168c8f0ULL || rel >= 0x168c900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168c900 size=16 callers=0 calls=0
*/
void sub_168c900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168c900ULL || rel >= 0x168c910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168c910 size=80 callers=1 calls=1
   calls: sub_1722840
*/
void sub_168c910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168c910ULL || rel >= 0x168c960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168c960 size=32 callers=1 calls=0
*/
void sub_168c960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168c960ULL || rel >= 0x168c980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168c980 size=16 callers=0 calls=0
*/
void sub_168c980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168c980ULL || rel >= 0x168c990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168c990 size=208 callers=0 calls=5
   calls: sub_1655220, sub_165e060, sub_1689670, sub_1689960, sub_1722860
*/
void sub_168c990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168c990ULL || rel >= 0x168ca60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168ca60 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_168ca60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168ca60ULL || rel >= 0x168cac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168cac0 size=16 callers=0 calls=0
*/
void sub_168cac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168cac0ULL || rel >= 0x168cad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168cad0 size=288 callers=0 calls=3
   calls: sub_1655190, sub_165e060, sub_1689800
*/
void sub_168cad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168cad0ULL || rel >= 0x168cbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168cbf0 size=672 callers=0 calls=9
   calls: sub_16551b0, sub_1655220, sub_165e060, sub_165e140, sub_16898d0, sub_16898e0, sub_1689c60, sub_1733df0, sub_1733e00
*/
void sub_168cbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168cbf0ULL || rel >= 0x168ce90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168ce90 size=256 callers=0 calls=3
   calls: sub_1655190, sub_165e060, sub_1689340
*/
void sub_168ce90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168ce90ULL || rel >= 0x168cf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168cf90 size=336 callers=0 calls=6
   calls: sub_16551b0, sub_1655220, sub_165e060, sub_16893c0, sub_16893d0, sub_1689d80
*/
void sub_168cf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168cf90ULL || rel >= 0x168d0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168d0e0 size=240 callers=0 calls=3
   calls: sub_1655190, sub_165e060, sub_1689b50
*/
void sub_168d0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168d0e0ULL || rel >= 0x168d1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168d1d0 size=384 callers=0 calls=4
   calls: sub_16551b0, sub_1655220, sub_165e060, sub_165e140
*/
void sub_168d1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168d1d0ULL || rel >= 0x168d350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168d350 size=240 callers=0 calls=3
   calls: sub_1655190, sub_165e060, sub_1689b50
*/
void sub_168d350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168d350ULL || rel >= 0x168d440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168d440 size=384 callers=0 calls=4
   calls: sub_16551b0, sub_1655220, sub_165e060, sub_165e140
*/
void sub_168d440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168d440ULL || rel >= 0x168d5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168d5c0 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_168d5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168d5c0ULL || rel >= 0x168d620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168d620 size=16 callers=0 calls=0
*/
void sub_168d620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168d620ULL || rel >= 0x168d630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168d630 size=288 callers=0 calls=3
   calls: sub_1655190, sub_165e060, sub_1689560
*/
void sub_168d630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168d630ULL || rel >= 0x168d750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168d750 size=416 callers=0 calls=5
   calls: sub_16551b0, sub_1655220, sub_165e060, sub_16895e0, sub_16895f0
*/
void sub_168d750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168d750ULL || rel >= 0x168d8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168d8f0 size=240 callers=0 calls=3
   calls: sub_1655190, sub_165e060, sub_16896f0
*/
void sub_168d8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168d8f0ULL || rel >= 0x168d9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168d9e0 size=304 callers=0 calls=5
   calls: sub_16551b0, sub_1655220, sub_165e060, sub_1689770, sub_1689780
*/
void sub_168d9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168d9e0ULL || rel >= 0x168db10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168db10 size=240 callers=0 calls=3
   calls: sub_1655190, sub_165e060, sub_1689450
*/
void sub_168db10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168db10ULL || rel >= 0x168dc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168dc00 size=304 callers=0 calls=5
   calls: sub_16551b0, sub_1655220, sub_165e060, sub_16894d0, sub_16894e0
*/
void sub_168dc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168dc00ULL || rel >= 0x168dd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168dd30 size=160 callers=0 calls=3
   calls: sub_1655190, sub_16551b0, sub_165e060
*/
void sub_168dd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168dd30ULL || rel >= 0x168ddd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168ddd0 size=64 callers=0 calls=1
   calls: sub_1689e30
*/
void sub_168ddd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168ddd0ULL || rel >= 0x168de10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168de10 size=64 callers=1 calls=2
   calls: sub_165bea0, sub_1688860
*/
void sub_168de10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168de10ULL || rel >= 0x168de50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168de50 size=16 callers=0 calls=0
*/
void sub_168de50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168de50ULL || rel >= 0x168de60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168de60 size=16 callers=0 calls=0
*/
void sub_168de60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168de60ULL || rel >= 0x168de70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168de70 size=80 callers=0 calls=1
   calls: sub_1652de0
*/
void sub_168de70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168de70ULL || rel >= 0x168dec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168dec0 size=176 callers=1 calls=2
   calls: sub_165e060, sub_1689a70
*/
void sub_168dec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168dec0ULL || rel >= 0x168df70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168df70 size=48 callers=2 calls=1
   calls: sub_17315f0
*/
void sub_168df70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168df70ULL || rel >= 0x168dfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168dfa0 size=16 callers=1 calls=0
*/
void sub_168dfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168dfa0ULL || rel >= 0x168dfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168dfb0 size=16 callers=0 calls=0
*/
void sub_168dfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168dfb0ULL || rel >= 0x168dfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168dfc0 size=16 callers=0 calls=0
*/
void sub_168dfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168dfc0ULL || rel >= 0x168dfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168dfd0 size=16 callers=0 calls=0
*/
void sub_168dfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168dfd0ULL || rel >= 0x168dfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168dfe0 size=16 callers=0 calls=0
*/
void sub_168dfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168dfe0ULL || rel >= 0x168dff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168dff0 size=16 callers=0 calls=0
*/
void sub_168dff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168dff0ULL || rel >= 0x168e000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e000 size=16 callers=0 calls=0
*/
void sub_168e000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e000ULL || rel >= 0x168e010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e010 size=16 callers=0 calls=0
*/
void sub_168e010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e010ULL || rel >= 0x168e020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e020 size=16 callers=0 calls=0
*/
void sub_168e020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e020ULL || rel >= 0x168e030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e030 size=16 callers=0 calls=0
*/
void sub_168e030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e030ULL || rel >= 0x168e040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e040 size=16 callers=0 calls=0
*/
void sub_168e040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e040ULL || rel >= 0x168e050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e050 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_16a9a20, sub_17162d0
*/
void sub_168e050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e050ULL || rel >= 0x168e090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e090 size=64 callers=0 calls=0
*/
void sub_168e090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e090ULL || rel >= 0x168e0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e0d0 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_16a9070, sub_17162d0
*/
void sub_168e0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e0d0ULL || rel >= 0x168e110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e110 size=64 callers=0 calls=0
*/
void sub_168e110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e110ULL || rel >= 0x168e150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e150 size=16 callers=0 calls=0
*/
void sub_168e150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e150ULL || rel >= 0x168e160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e160 size=16 callers=0 calls=0
*/
void sub_168e160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e160ULL || rel >= 0x168e170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e170 size=16 callers=0 calls=0
*/
void sub_168e170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e170ULL || rel >= 0x168e180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e180 size=16 callers=0 calls=0
*/
void sub_168e180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e180ULL || rel >= 0x168e190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e190 size=16 callers=0 calls=0
*/
void sub_168e190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e190ULL || rel >= 0x168e1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e1a0 size=16 callers=0 calls=0
*/
void sub_168e1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e1a0ULL || rel >= 0x168e1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e1b0 size=16 callers=0 calls=0
*/
void sub_168e1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e1b0ULL || rel >= 0x168e1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e1c0 size=16 callers=0 calls=0
*/
void sub_168e1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e1c0ULL || rel >= 0x168e1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e1d0 size=16 callers=0 calls=0
*/
void sub_168e1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e1d0ULL || rel >= 0x168e1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e1e0 size=16 callers=0 calls=0
*/
void sub_168e1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e1e0ULL || rel >= 0x168e1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e1f0 size=80 callers=0 calls=3
   calls: sub_1652bd0, sub_168e840, sub_17162d0
*/
void sub_168e1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e1f0ULL || rel >= 0x168e240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e240 size=64 callers=0 calls=0
*/
void sub_168e240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e240ULL || rel >= 0x168e280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e280 size=16 callers=0 calls=0
*/
void sub_168e280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e280ULL || rel >= 0x168e290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e290 size=16 callers=0 calls=0
*/
void sub_168e290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e290ULL || rel >= 0x168e2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e2a0 size=16 callers=0 calls=0
*/
void sub_168e2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e2a0ULL || rel >= 0x168e2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e2b0 size=16 callers=0 calls=0
*/
void sub_168e2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e2b0ULL || rel >= 0x168e2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e2c0 size=16 callers=0 calls=0
*/
void sub_168e2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e2c0ULL || rel >= 0x168e2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e2d0 size=16 callers=0 calls=0
*/
void sub_168e2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e2d0ULL || rel >= 0x168e2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e2e0 size=16 callers=0 calls=0
*/
void sub_168e2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e2e0ULL || rel >= 0x168e2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e2f0 size=16 callers=0 calls=0
*/
void sub_168e2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e2f0ULL || rel >= 0x168e300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e300 size=80 callers=0 calls=3
   calls: sub_1652bd0, sub_1690ec0, sub_17162d0
*/
void sub_168e300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e300ULL || rel >= 0x168e350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e350 size=64 callers=0 calls=0
*/
void sub_168e350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e350ULL || rel >= 0x168e390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e390 size=80 callers=0 calls=3
   calls: sub_1652bd0, sub_16903c0, sub_17162d0
*/
void sub_168e390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e390ULL || rel >= 0x168e3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e3e0 size=64 callers=0 calls=0
*/
void sub_168e3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e3e0ULL || rel >= 0x168e420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e420 size=80 callers=0 calls=3
   calls: sub_1652bd0, sub_168f1e0, sub_17162d0
*/
void sub_168e420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e420ULL || rel >= 0x168e470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e470 size=64 callers=0 calls=0
*/
void sub_168e470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e470ULL || rel >= 0x168e4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e4b0 size=16 callers=0 calls=0
*/
void sub_168e4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e4b0ULL || rel >= 0x168e4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e4c0 size=16 callers=0 calls=0
*/
void sub_168e4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e4c0ULL || rel >= 0x168e4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e4d0 size=80 callers=0 calls=3
   calls: sub_1652bd0, sub_168fb10, sub_17162d0
*/
void sub_168e4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e4d0ULL || rel >= 0x168e520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e520 size=64 callers=0 calls=0
*/
void sub_168e520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e520ULL || rel >= 0x168e560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e560 size=80 callers=0 calls=3
   calls: sub_1652bd0, sub_168e920, sub_17162d0
*/
void sub_168e560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e560ULL || rel >= 0x168e5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e5b0 size=64 callers=0 calls=0
*/
void sub_168e5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e5b0ULL || rel >= 0x168e5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e5f0 size=80 callers=0 calls=3
   calls: sub_1652bd0, sub_168f110, sub_17162d0
*/
void sub_168e5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e5f0ULL || rel >= 0x168e640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e640 size=64 callers=0 calls=0
*/
void sub_168e640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e640ULL || rel >= 0x168e680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e680 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_168f8a0, sub_17162d0
*/
void sub_168e680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e680ULL || rel >= 0x168e6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e6c0 size=64 callers=0 calls=0
*/
void sub_168e6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e6c0ULL || rel >= 0x168e700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e700 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_1690630, sub_17162d0
*/
void sub_168e700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e700ULL || rel >= 0x168e740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e740 size=64 callers=0 calls=0
*/
void sub_168e740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e740ULL || rel >= 0x168e780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e780 size=16 callers=0 calls=0
*/
void sub_168e780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e780ULL || rel >= 0x168e790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e790 size=16 callers=0 calls=0
*/
void sub_168e790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e790ULL || rel >= 0x168e7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e7a0 size=96 callers=0 calls=3
   calls: sub_1652bd0, sub_17162d0, sub_17273b0
*/
void sub_168e7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e7a0ULL || rel >= 0x168e800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e800 size=64 callers=0 calls=0
*/
void sub_168e800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e800ULL || rel >= 0x168e840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e840 size=64 callers=1 calls=1
   calls: sub_16a2490
*/
void sub_168e840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e840ULL || rel >= 0x168e880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e880 size=32 callers=0 calls=0
*/
void sub_168e880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e880ULL || rel >= 0x168e8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e8a0 size=64 callers=0 calls=1
   calls: sub_16a2500
*/
void sub_168e8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e8a0ULL || rel >= 0x168e8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e8e0 size=32 callers=0 calls=0
*/
void sub_168e8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e8e0ULL || rel >= 0x168e900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e900 size=16 callers=0 calls=0
*/
void sub_168e900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e900ULL || rel >= 0x168e910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e910 size=16 callers=0 calls=0
*/
void sub_168e910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e910ULL || rel >= 0x168e920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e920 size=64 callers=1 calls=1
   calls: sub_1723b00
*/
void sub_168e920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e920ULL || rel >= 0x168e960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e960 size=32 callers=0 calls=0
*/
void sub_168e960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e960ULL || rel >= 0x168e980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e980 size=64 callers=0 calls=1
   calls: sub_1723b80
*/
void sub_168e980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e980ULL || rel >= 0x168e9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168e9c0 size=464 callers=0 calls=7
   calls: sub_165be70, sub_165be80, sub_165bea0, sub_165e060, sub_168c030, sub_1716400, sub_172e150
   ref: LocalMatchJoinSessionJob::JoinMatchmakeSession
*/
void LocalMatchJoinSessionJob_JoinMatchmakeSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168e9c0ULL || rel >= 0x168eb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168eb90 size=224 callers=0 calls=3
   calls: sub_1655220, sub_1655290, sub_165e060
   ref: LocalMatchJoinSessionJob::WaitJoinMatchmake
*/
void LocalMatchJoinSessionJob_WaitJoinMatchmake(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168eb90ULL || rel >= 0x168ec70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168ec70 size=528 callers=0 calls=13
   calls: sub_1655110, sub_1655220, sub_1655290, sub_165e060, sub_165e140, sub_16895e0, sub_1689670, sub_1689af0, sub_1689b10, sub_168a020, sub_168a200, sub_1724c60
   ... +1 more
   ref: JoinSessionJob::MeshStartup
   ref: LocalMatchJoinSessionJob::WaitForCancel
*/
void JoinSessionJob_MeshStartup_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168ec70ULL || rel >= 0x168ee80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168ee80 size=128 callers=0 calls=1
   calls: sub_1655290
*/
void sub_168ee80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168ee80ULL || rel >= 0x168ef00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168ef00 size=160 callers=0 calls=0
   ref: LocalMatchJoinSessionJob::CompleteFailure
   ref: LocalMatchJoinSessionJob::WaitLeaveMatchmake
*/
void LocalMatchJoinSessionJob_CompleteFailure(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168ef00ULL || rel >= 0x168efa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168efa0 size=128 callers=0 calls=1
   calls: sub_1655110
   ref: LocalMatchJoinSessionJob::CompleteFailure
*/
void LocalMatchJoinSessionJob_CompleteFailure_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168efa0ULL || rel >= 0x168f020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168f020 size=80 callers=0 calls=0
   ref: JoinSessionJob::CompleteProcess
*/
void JoinSessionJob_CompleteProcess(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168f020ULL || rel >= 0x168f070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168f070 size=64 callers=0 calls=1
   calls: sub_165e140
   ref: LocalMatchJoinSessionJob::MeshCleanup
*/
void LocalMatchJoinSessionJob_MeshCleanup(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168f070ULL || rel >= 0x168f0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168f0b0 size=32 callers=0 calls=0
   ref: LocalMatchJoinSessionJob::MeshCleanup
*/
void LocalMatchJoinSessionJob_MeshCleanup_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168f0b0ULL || rel >= 0x168f0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168f0d0 size=32 callers=0 calls=0
   ref: LocalMatchJoinSessionJob::LeaveMatchmakeSession
*/
void LocalMatchJoinSessionJob_LeaveMatchmakeSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168f0d0ULL || rel >= 0x168f0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168f0f0 size=16 callers=0 calls=0
*/
void sub_168f0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168f0f0ULL || rel >= 0x168f100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168f100 size=16 callers=0 calls=0
*/
void sub_168f100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168f100ULL || rel >= 0x168f110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168f110 size=64 callers=1 calls=1
   calls: sub_1726390
*/
void sub_168f110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168f110ULL || rel >= 0x168f150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168f150 size=32 callers=0 calls=0
*/
void sub_168f150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168f150ULL || rel >= 0x168f170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168f170 size=64 callers=0 calls=1
   calls: sub_17263e0
*/
void sub_168f170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168f170ULL || rel >= 0x168f1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168f1b0 size=16 callers=0 calls=0
*/
void sub_168f1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168f1b0ULL || rel >= 0x168f1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168f1c0 size=16 callers=0 calls=0
*/
void sub_168f1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168f1c0ULL || rel >= 0x168f1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168f1d0 size=16 callers=0 calls=0
*/
void sub_168f1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168f1d0ULL || rel >= 0x168f1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168f1e0 size=128 callers=1 calls=2
   calls: sub_165e060, sub_1722980
*/
void sub_168f1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168f1e0ULL || rel >= 0x168f260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168f260 size=32 callers=0 calls=0
*/
void sub_168f260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168f260ULL || rel >= 0x168f280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168f280 size=64 callers=0 calls=1
   calls: sub_17229e0
*/
void sub_168f280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168f280ULL || rel >= 0x168f2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168f2c0 size=192 callers=0 calls=3
   calls: sub_165e060, sub_1723380, sub_172e150
   ref: LocalMatchCreateSessionJob::CreateLocalNetwork
*/
void LocalMatchCreateSessionJob_CreateLocalNetwork(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168f2c0ULL || rel >= 0x168f380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168f380 size=208 callers=0 calls=2
   calls: sub_1655220, sub_165e060
   ref: LocalMatchCreateSessionJob::WaitCreateLocalNetwork
*/
void LocalMatchCreateSessionJob_WaitCreateLocalNetwork(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168f380ULL || rel >= 0x168f450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168f450 size=304 callers=0 calls=5
   calls: sub_1655220, sub_165e060, sub_17231d0, sub_172e0d0, sub_172e100
   ref: LocalMatchCreateSessionJob::StartLocalSession
*/
void LocalMatchCreateSessionJob_StartLocalSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168f450ULL || rel >= 0x168f580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168f580 size=224 callers=0 calls=5
   calls: sub_1655220, sub_165e060, sub_1689af0, sub_1689b10, sub_168a020
   ref: CreateSessionJob::MeshStartup
*/
void CreateSessionJob_MeshStartup_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168f580ULL || rel >= 0x168f660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168f660 size=64 callers=0 calls=1
   calls: sub_168a370
   ref: LocalMatchCreateSessionJob::DestroyLocalNetwork
*/
void LocalMatchCreateSessionJob_DestroyLocalNetwork(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168f660ULL || rel >= 0x168f6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168f6a0 size=128 callers=0 calls=0
   ref: LocalMatchCreateSessionJob::CompleteFailure
   ref: LocalMatchCreateSessionJob::WaitDestroyLocalNetwork
*/
void LocalMatchCreateSessionJob_CompleteFailure(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168f6a0ULL || rel >= 0x168f720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168f720 size=80 callers=0 calls=2
   calls: sub_1655220, sub_165e060
*/
void sub_168f720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168f720ULL || rel >= 0x168f770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168f770 size=128 callers=0 calls=0
   ref: LocalMatchCreateSessionJob::CompleteFailure
*/
void LocalMatchCreateSessionJob_CompleteFailure_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168f770ULL || rel >= 0x168f7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168f7f0 size=80 callers=0 calls=0
   ref: CreateSessionJob::CompleteProcess
*/
void CreateSessionJob_CompleteProcess_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168f7f0ULL || rel >= 0x168f840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168f840 size=64 callers=0 calls=1
   calls: sub_165e140
   ref: LocalMatchCreateSessionJob::StopLocalSession
*/
void LocalMatchCreateSessionJob_StopLocalSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168f840ULL || rel >= 0x168f880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168f880 size=16 callers=0 calls=0
*/
void sub_168f880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168f880ULL || rel >= 0x168f890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168f890 size=16 callers=0 calls=0
*/
void sub_168f890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168f890ULL || rel >= 0x168f8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168f8a0 size=48 callers=1 calls=1
   calls: sub_1723400
*/
void sub_168f8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168f8a0ULL || rel >= 0x168f8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168f8d0 size=16 callers=0 calls=0
*/
void sub_168f8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168f8d0ULL || rel >= 0x168f8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168f8e0 size=48 callers=0 calls=1
   calls: sub_1723440
*/
void sub_168f8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168f8e0ULL || rel >= 0x168f910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168f910 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_168f910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168f910ULL || rel >= 0x168f970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168f970 size=160 callers=0 calls=0
   ref: LocalMatchDestroySessionJob::WaitDestroyLocalNetwork
   ref: LocalMatchDestroySessionJob::SendMonitoringData
*/
void LocalMatchDestroySessionJob_SendMonitoringData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168f970ULL || rel >= 0x168fa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168fa10 size=160 callers=0 calls=1
   calls: sub_172e100
   ref: LocalMatchDestroySessionJob::SendMonitoringData
*/
void LocalMatchDestroySessionJob_SendMonitoringData_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168fa10ULL || rel >= 0x168fab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168fab0 size=32 callers=0 calls=0
   ref: DestroySessionJob::MeshCleanup
*/
void DestroySessionJob_MeshCleanup(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168fab0ULL || rel >= 0x168fad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168fad0 size=32 callers=0 calls=0
   ref: LocalMatchDestroySessionJob::DestroyLocalNetwork
*/
void LocalMatchDestroySessionJob_DestroyLocalNetwork(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168fad0ULL || rel >= 0x168faf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168faf0 size=16 callers=0 calls=0
*/
void sub_168faf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168faf0ULL || rel >= 0x168fb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168fb00 size=16 callers=0 calls=0
*/
void sub_168fb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168fb00ULL || rel >= 0x168fb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168fb10 size=64 callers=1 calls=1
   calls: sub_1722610
*/
void sub_168fb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168fb10ULL || rel >= 0x168fb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168fb50 size=64 callers=0 calls=1
   calls: sub_1655170
*/
void sub_168fb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168fb50ULL || rel >= 0x168fb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168fb90 size=80 callers=0 calls=2
   calls: sub_1655170, sub_1722650
*/
void sub_168fb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168fb90ULL || rel >= 0x168fbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168fbe0 size=144 callers=0 calls=1
   calls: sub_165e060
   ref: LocalMatchBrowseMatchmakeJob::BrowseMatchmake
*/
void LocalMatchBrowseMatchmakeJob_BrowseMatchmake(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168fbe0ULL || rel >= 0x168fc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168fc70 size=224 callers=0 calls=2
   calls: sub_1655220, sub_165e060
   ref: LocalMatchBrowseMatchmakeJob::WaitBrowseMatchmake
*/
void LocalMatchBrowseMatchmakeJob_WaitBrowseMatchmake(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168fc70ULL || rel >= 0x168fd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168fd50 size=512 callers=0 calls=3
   calls: sub_1655220, sub_165e060, sub_172be20
   ref: session::BrowseMatchmakeJob::CompleteProcess
*/
void session_BrowseMatchmakeJob_CompleteProcess_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168fd50ULL || rel >= 0x168ff50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168ff50 size=112 callers=0 calls=1
   calls: sub_165e060
   ref: LocalMatchBrowseMatchmakeJob::WaitHostMigration
*/
void LocalMatchBrowseMatchmakeJob_WaitHostMigration(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168ff50ULL || rel >= 0x168ffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0168ffc0 size=416 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_16898a0, sub_172be20
   ref: LocalMatchBrowseMatchmakeJob::UpdateCurrentConnectionStatus
*/
void LocalMatchBrowseMatchmakeJob_UpdateCurrentConnectionStat(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168ffc0ULL || rel >= 0x1690160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01690160 size=80 callers=0 calls=1
   calls: sub_168a390
   ref: LocalMatchBrowseMatchmakeJob::WaitUpdateCurrentConnectionStatus
*/
void LocalMatchBrowseMatchmakeJob_WaitUpdateCurrentConnection(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1690160ULL || rel >= 0x16901b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016901b0 size=416 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_168a380, sub_172be20
   ref: LocalMatchBrowseMatchmakeJob::UpdateSessionInfo
*/
void LocalMatchBrowseMatchmakeJob_UpdateSessionInfo(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16901b0ULL || rel >= 0x1690350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01690350 size=80 callers=0 calls=0
   ref: LocalMatchBrowseMatchmakeJob::CompleteProcess
*/
void LocalMatchBrowseMatchmakeJob_CompleteProcess(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1690350ULL || rel >= 0x16903a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016903a0 size=16 callers=0 calls=0
*/
void sub_16903a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16903a0ULL || rel >= 0x16903b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016903b0 size=16 callers=0 calls=0
*/
void sub_16903b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16903b0ULL || rel >= 0x16903c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016903c0 size=64 callers=1 calls=1
   calls: sub_16a3b70
*/
void sub_16903c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16903c0ULL || rel >= 0x1690400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01690400 size=32 callers=0 calls=0
*/
void sub_1690400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1690400ULL || rel >= 0x1690420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01690420 size=64 callers=0 calls=1
   calls: sub_16a3bd0
*/
void sub_1690420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1690420ULL || rel >= 0x1690460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01690460 size=448 callers=0 calls=10
   calls: sub_1652c70, sub_1652ca0, sub_1652d30, sub_1653890, sub_1653b50, sub_1653bb0, sub_165fb30, sub_165fd90, sub_16953a0, sub_174de50
*/
void sub_1690460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1690460ULL || rel >= 0x1690620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01690620 size=16 callers=0 calls=0
*/
void sub_1690620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1690620ULL || rel >= 0x1690630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01690630 size=80 callers=1 calls=1
   calls: sub_1735df0
*/
void sub_1690630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1690630ULL || rel >= 0x1690680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01690680 size=16 callers=0 calls=0
*/
void sub_1690680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1690680ULL || rel >= 0x1690690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01690690 size=48 callers=0 calls=1
   calls: sub_1735e30
*/
void sub_1690690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1690690ULL || rel >= 0x16906c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016906c0 size=624 callers=0 calls=4
   calls: sub_1655110, sub_165e060, sub_165e140, sub_168dec0
   ref: LocalMatchUpdateSessionSettingJob::CompleteFailure
   ref: LocalMatchUpdateSessionSettingJob::SignalProcess
*/
void LocalMatchUpdateSessionSettingJob_SignalProcess(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16906c0ULL || rel >= 0x1690930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01690930 size=96 callers=0 calls=2
   calls: sub_1655220, sub_165e060
*/
void sub_1690930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1690930ULL || rel >= 0x1690990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01690990 size=624 callers=0 calls=3
   calls: sub_1655220, sub_165e060, sub_172be20
   ref: UpdateSessionSettingJob::CompleteProcess
*/
void UpdateSessionSettingJob_CompleteProcess_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1690990ULL || rel >= 0x1690c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01690c00 size=96 callers=0 calls=2
   calls: sub_165e140, sub_1736030
*/
void sub_1690c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1690c00ULL || rel >= 0x1690c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01690c60 size=16 callers=0 calls=0
*/
void sub_1690c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1690c60ULL || rel >= 0x1690c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01690c70 size=64 callers=3 calls=0
*/
void sub_1690c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1690c70ULL || rel >= 0x1690cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01690cb0 size=32 callers=1 calls=0
*/
void sub_1690cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1690cb0ULL || rel >= 0x1690cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01690cd0 size=32 callers=2 calls=0
*/
void sub_1690cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1690cd0ULL || rel >= 0x1690cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01690cf0 size=16 callers=0 calls=0
*/
void sub_1690cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1690cf0ULL || rel >= 0x1690d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01690d00 size=16 callers=0 calls=0
*/
void sub_1690d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1690d00ULL || rel >= 0x1690d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01690d10 size=16 callers=1 calls=0
*/
void sub_1690d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1690d10ULL || rel >= 0x1690d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01690d20 size=256 callers=0 calls=3
   calls: sub_1652de0, sub_165c9b0, sub_165e060
*/
void sub_1690d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1690d20ULL || rel >= 0x1690e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01690e20 size=16 callers=0 calls=0
*/
void sub_1690e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1690e20ULL || rel >= 0x1690e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01690e30 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_1690e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1690e30ULL || rel >= 0x1690e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01690e90 size=16 callers=0 calls=0
*/
void sub_1690e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1690e90ULL || rel >= 0x1690ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01690ea0 size=16 callers=0 calls=0
*/
void sub_1690ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1690ea0ULL || rel >= 0x1690eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01690eb0 size=16 callers=0 calls=0
*/
void sub_1690eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1690eb0ULL || rel >= 0x1690ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01690ec0 size=112 callers=1 calls=3
   calls: sub_1652c70, sub_1653900, sub_16b57a0
*/
void sub_1690ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1690ec0ULL || rel >= 0x1690f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01690f30 size=80 callers=0 calls=1
   calls: sub_1652d30
*/
void sub_1690f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1690f30ULL || rel >= 0x1690f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01690f80 size=80 callers=0 calls=2
   calls: sub_1652d30, sub_16b5860
*/
void sub_1690f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1690f80ULL || rel >= 0x1690fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01690fd0 size=112 callers=0 calls=1
   calls: sub_16a7a50
   ref: LocalProcessHostMigrationJobNew::LocalDecideNextHost
   ref: LocalProcessHostMigrationJobNew::LocalCleanupOldHostInfo
*/
void LocalProcessHostMigrationJobNew_LocalDecideNextHost(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1690fd0ULL || rel >= 0x1691040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01691040 size=576 callers=0 calls=10
   calls: sub_1652ca0, sub_1652cf0, sub_1652d30, sub_1653890, sub_1653900, sub_1653b50, sub_1653bb0, sub_165c6b0, sub_16b5ca0, sub_174de50
   ref: LocalProcessHostMigrationJobNew::HostMigrationFailure
   ref: LocalProcessHostMigrationJobNew::WaitLocalHostMigrationClient
   ref: LocalProcessHostMigrationJobNew::LocalPrepareForBecomingHost
*/
void LocalProcessHostMigrationJobNew_HostMigrationFailure(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1691040ULL || rel >= 0x1691280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01691280 size=672 callers=0 calls=14
   calls: sub_1652cf0, sub_1652d30, sub_1653890, sub_1653900, sub_1653bb0, sub_165c6b0, sub_165fb30, sub_165fd90, sub_165fea0, sub_16953a0, sub_16a7a50, sub_16a7ea0
   ... +2 more
   ref: LocalProcessHostMigrationJobNew::HostMigrationFailure
   ref: LocalProcessHostMigrationJobNew::WaitLocalHostMigrationClient
   ref: LocalProcessHostMigrationJobNew::LocalPrepareForBecomingHost
*/
void LocalProcessHostMigrationJobNew_HostMigrationFailure_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1691280ULL || rel >= 0x1691520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01691520 size=64 callers=0 calls=2
   calls: sub_1653900, sub_16b6d30
*/
void sub_1691520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1691520ULL || rel >= 0x1691560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01691560 size=32 callers=0 calls=0
   ref: ProcessHostMigrationJob::SendMigrationFinish
*/
void ProcessHostMigrationJob_SendMigrationFinish_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1691560ULL || rel >= 0x1691580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01691580 size=288 callers=0 calls=9
   calls: sub_1652ca0, sub_1652d30, sub_1653890, sub_1653b50, sub_1653bb0, sub_1689e30, sub_16b5dc0, sub_16b5e60, sub_172e0d0
   ref: LocalProcessHostMigrationJobNew::WaitLocalHostMigrationNewHost
   ref: LocalProcessHostMigrationJobNew::HostMigrationFailure
*/
void LocalProcessHostMigrationJobNew_HostMigrationFailure_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1691580ULL || rel >= 0x16916a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016916a0 size=608 callers=0 calls=9
   calls: sub_1652ca0, sub_1652cf0, sub_1652d30, sub_1653890, sub_1653b50, sub_1653bb0, sub_16898a0, sub_1693f60, sub_174de50
   ref: LocalProcessHostMigrationJobNew::HostMigrationFailure
   ref: LocalProcessHostMigrationJobNew::WaitNewHostGreeting
   ref: LocalProcessHostMigrationJobNew::LocalPrepareForBecomingHost
*/
void LocalProcessHostMigrationJobNew_WaitNewHostGreeting(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16916a0ULL || rel >= 0x1691900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01691900 size=336 callers=0 calls=6
   calls: sub_1652ca0, sub_1652d30, sub_1653b50, sub_1653bb0, sub_16898a0, sub_1689af0
   ref: LocalProcessHostMigrationJobNew::HostMigrationFailure
   ref: LocalProcessHostMigrationJobNew::SendGreetingMessage
*/
void LocalProcessHostMigrationJobNew_SendGreetingMessage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1691900ULL || rel >= 0x1691a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01691a50 size=16 callers=0 calls=0
*/
void sub_1691a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1691a50ULL || rel >= 0x1691a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01691a60 size=16 callers=0 calls=0
*/
void sub_1691a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1691a60ULL || rel >= 0x1691a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01691a70 size=16 callers=0 calls=0
*/
void sub_1691a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1691a70ULL || rel >= 0x1691a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01691a80 size=16 callers=0 calls=0
*/
void sub_1691a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1691a80ULL || rel >= 0x1691a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01691a90 size=704 callers=1 calls=10
   calls: sub_1652940, sub_1652c70, sub_1655080, sub_1655c60, sub_165c600, sub_165c6b0, sub_165e060, sub_165fb30, sub_169a170, sub_173cf60
*/
void sub_1691a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1691a90ULL || rel >= 0x1691d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01691d50 size=224 callers=0 calls=4
   calls: sub_1652d30, sub_1655170, sub_1655c70, sub_169a1c0
*/
void sub_1691d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1691d50ULL || rel >= 0x1691e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01691e30 size=16 callers=0 calls=0
*/
void sub_1691e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1691e30ULL || rel >= 0x1691e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01691e40 size=688 callers=1 calls=5
   calls: sub_1652bd0, sub_1655080, sub_165e060, sub_16920f0, sub_17162d0
*/
void sub_1691e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1691e40ULL || rel >= 0x16920f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016920f0 size=480 callers=2 calls=9
   calls: sub_1652bd0, sub_16978e0, sub_1697c90, sub_16981b0, sub_1698a60, sub_1698f10, sub_16997e0, sub_169a460, sub_17162d0
*/
void sub_16920f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16920f0ULL || rel >= 0x16922d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016922d0 size=208 callers=0 calls=4
   calls: sub_1655170, sub_16923a0, sub_1716390, sub_17163e0
*/
void sub_16922d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16922d0ULL || rel >= 0x16923a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016923a0 size=432 callers=1 calls=2
   calls: sub_1692a10, sub_1716390
*/
void sub_16923a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16923a0ULL || rel >= 0x1692550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01692550 size=560 callers=0 calls=8
   calls: LocalEjectClientListCheckJob_CheckTargetList, LocalEventJob_WatchUpdateEvent, LocalResendMessageJob_ResendMessage, sub_1653900, sub_1655850, sub_165e060, sub_165e140, sub_16927e0
*/
void sub_1692550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1692550ULL || rel >= 0x1692780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01692780 size=96 callers=4 calls=0
*/
void sub_1692780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1692780ULL || rel >= 0x16927e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016927e0 size=192 callers=1 calls=1
   calls: sub_1653900
*/
void sub_16927e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16927e0ULL || rel >= 0x16928a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016928a0 size=16 callers=1 calls=0
*/
void sub_16928a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16928a0ULL || rel >= 0x16928b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016928b0 size=16 callers=7 calls=0
*/
void sub_16928b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16928b0ULL || rel >= 0x16928c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016928c0 size=336 callers=0 calls=4
   calls: sub_1653900, sub_1655110, sub_165e140, sub_1692a10
*/
void sub_16928c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16928c0ULL || rel >= 0x1692a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01692a10 size=432 callers=2 calls=12
   calls: sub_165bba0, sub_16874e0, sub_1688590, sub_168a790, sub_1697b10, sub_1698010, sub_1698490, sub_1698d30, sub_16992b0, sub_1699a90, sub_169a6f0, sub_169aae0
*/
void sub_1692a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1692a10ULL || rel >= 0x1692bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01692bc0 size=736 callers=0 calls=12
   calls: sub_1653890, sub_1653b50, sub_165e060, sub_1694cf0, sub_1694dc0, sub_16951d0, sub_1697300, sub_1697360, sub_1697830, sub_1697840, sub_173ab40, sub_173ab60
*/
void sub_1692bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1692bc0ULL || rel >= 0x1692ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01692ea0 size=160 callers=9 calls=2
   calls: sub_1653890, sub_1653b50
*/
void sub_1692ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1692ea0ULL || rel >= 0x1692f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01692f40 size=32 callers=0 calls=0
*/
void sub_1692f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1692f40ULL || rel >= 0x1692f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01692f60 size=80 callers=0 calls=1
   calls: sub_1655c80
*/
void sub_1692f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1692f60ULL || rel >= 0x1692fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01692fb0 size=1520 callers=1 calls=13
   calls: sub_1652cf0, sub_1652d30, sub_1653890, sub_1653900, sub_1653b50, sub_1653bb0, sub_165e060, sub_165e140, sub_1687030, sub_1687270, sub_16935a0, sub_1693730
   ... +1 more
*/
void sub_1692fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1692fb0ULL || rel >= 0x16935a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016935a0 size=272 callers=3 calls=4
   calls: sub_1697380, sub_1697490, sub_1697510, sub_169a700
*/
void sub_16935a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16935a0ULL || rel >= 0x16936b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016936b0 size=128 callers=2 calls=2
   calls: sub_1653890, sub_1653b50
*/
void sub_16936b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16936b0ULL || rel >= 0x1693730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01693730 size=1152 callers=2 calls=15
   calls: LocalHostMigrationJob_DisconnectNetwork, sub_1652c70, sub_1652d30, sub_1653900, sub_1653b50, sub_1653bb0, sub_1655850, sub_1655950, sub_16559c0, sub_165e060, sub_165fb30, sub_165fb50
   ... +3 more
*/
void sub_1693730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1693730ULL || rel >= 0x1693bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01693bb0 size=16 callers=1 calls=0
*/
void sub_1693bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1693bb0ULL || rel >= 0x1693bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01693bc0 size=16 callers=0 calls=0
*/
void sub_1693bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1693bc0ULL || rel >= 0x1693bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01693bd0 size=144 callers=1 calls=3
   calls: sub_1652d30, sub_1653bb0, sub_165fb50
*/
void sub_1693bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1693bd0ULL || rel >= 0x1693c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01693c60 size=16 callers=1 calls=0
*/
void sub_1693c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1693c60ULL || rel >= 0x1693c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01693c70 size=16 callers=2 calls=0
*/
void sub_1693c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1693c70ULL || rel >= 0x1693c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01693c80 size=16 callers=2 calls=0
*/
void sub_1693c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1693c80ULL || rel >= 0x1693c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01693c90 size=16 callers=1 calls=0
*/
void sub_1693c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1693c90ULL || rel >= 0x1693ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01693ca0 size=704 callers=1 calls=14
   calls: sub_1652cf0, sub_1652d30, sub_1653b50, sub_1653bb0, sub_165fb30, sub_165fd90, sub_1687030, sub_1693f60, sub_16940d0, sub_1699ae0, sub_17498a0, sub_17499e0
   ... +2 more
*/
void sub_1693ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1693ca0ULL || rel >= 0x1693f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01693f60 size=288 callers=7 calls=1
   calls: sub_1653b50
*/
void sub_1693f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1693f60ULL || rel >= 0x1694080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01694080 size=80 callers=0 calls=2
   calls: sub_1653bb0, sub_1699ae0
*/
void sub_1694080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1694080ULL || rel >= 0x16940d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016940d0 size=352 callers=1 calls=5
   calls: sub_1653bb0, sub_1687250, sub_16872d0, sub_1693f60, sub_1695870
*/
void sub_16940d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16940d0ULL || rel >= 0x1694230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01694230 size=768 callers=1 calls=9
   calls: sub_1652d30, sub_1653900, sub_1653bb0, sub_165fb30, sub_165fb50, sub_165fd90, sub_1687030, sub_1693f60, sub_169a7e0
*/
void sub_1694230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1694230ULL || rel >= 0x1694530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01694530 size=160 callers=6 calls=6
   calls: sub_1655c80, sub_1655c90, sub_165fd30, sub_173c720, sub_173caa0, sub_173ef10
*/
void sub_1694530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1694530ULL || rel >= 0x16945d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016945d0 size=128 callers=1 calls=5
   calls: sub_1694530, sub_1697630, sub_1697660, sub_1697830, sub_1697840
*/
void sub_16945d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16945d0ULL || rel >= 0x1694650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01694650 size=128 callers=1 calls=5
   calls: sub_1694530, sub_16976d0, sub_1697700, sub_1697830, sub_1697840
*/
void sub_1694650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1694650ULL || rel >= 0x16946d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016946d0 size=912 callers=0 calls=13
   calls: sub_1652cf0, sub_1653890, sub_1653b50, sub_1694530, sub_1694ac0, sub_1697410, sub_16974f0, sub_1697510, sub_16975e0, sub_1697770, sub_16977a0, sub_1697830
   ... +1 more
*/
void sub_16946d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16946d0ULL || rel >= 0x1694a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01694a60 size=96 callers=7 calls=1
   calls: sub_1653890
*/
void sub_1694a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1694a60ULL || rel >= 0x1694ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01694ac0 size=272 callers=1 calls=5
   calls: sub_1652d30, sub_1653bb0, sub_165fb30, sub_165fb50, sub_165fd90
*/
void sub_1694ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1694ac0ULL || rel >= 0x1694bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01694bd0 size=80 callers=0 calls=3
   calls: sub_1652bd0, sub_16882b0, sub_17162d0
*/
void sub_1694bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1694bd0ULL || rel >= 0x1694c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01694c20 size=80 callers=0 calls=3
   calls: sub_1652bd0, sub_169a810, sub_17162d0
*/
void sub_1694c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1694c20ULL || rel >= 0x1694c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01694c70 size=64 callers=0 calls=0
*/
void sub_1694c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1694c70ULL || rel >= 0x1694cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01694cb0 size=64 callers=0 calls=0
*/
void sub_1694cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1694cb0ULL || rel >= 0x1694cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01694cf0 size=208 callers=1 calls=6
   calls: sub_1653890, sub_1653b50, sub_1693f60, sub_1697770, sub_1697800, sub_169a7b0
*/
void sub_1694cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1694cf0ULL || rel >= 0x1694dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01694dc0 size=208 callers=1 calls=5
   calls: sub_1653890, sub_1653b50, sub_1694ea0, sub_1697630, sub_16976b0
*/
void sub_1694dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1694dc0ULL || rel >= 0x1694e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01694e90 size=16 callers=1 calls=0
*/
void sub_1694e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1694e90ULL || rel >= 0x1694ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01694ea0 size=816 callers=4 calls=14
   calls: LocalDestroyNetworkJob_TryPrepareDestroyNetwork, LocalDisconnectNetworkJob_TryPrepareDisconnectNetwork, LocalForceDisconnectNetworkJob_WaitDisconnected, sub_1653890, sub_1653b50, sub_1655110, sub_1655190, sub_16551b0, sub_1655330, sub_1655850, sub_1655950, sub_16559c0
   ... +2 more
*/
void sub_1694ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1694ea0ULL || rel >= 0x16951d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016951d0 size=176 callers=1 calls=5
   calls: sub_1653890, sub_1653b50, sub_1693730, sub_16976d0, sub_1697750
*/
void sub_16951d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16951d0ULL || rel >= 0x1695280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01695280 size=144 callers=0 calls=1
   calls: sub_165e060
*/
void sub_1695280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1695280ULL || rel >= 0x1695310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01695310 size=144 callers=0 calls=2
   calls: sub_1655330, sub_165e060
*/
void sub_1695310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1695310ULL || rel >= 0x16953a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016953a0 size=544 callers=3 calls=5
   calls: sub_1652d50, sub_1652de0, sub_1653900, sub_1653b50, sub_1687250
*/
void sub_16953a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16953a0ULL || rel >= 0x16955c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016955c0 size=256 callers=2 calls=0
*/
void sub_16955c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16955c0ULL || rel >= 0x16956c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016956c0 size=432 callers=0 calls=2
   calls: sub_1653b50, sub_1687250
*/
void sub_16956c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16956c0ULL || rel >= 0x1695870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01695870 size=624 callers=1 calls=1
   calls: sub_1687250
*/
void sub_1695870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1695870ULL || rel >= 0x1695ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01695ae0 size=256 callers=1 calls=1
   calls: sub_1687250
*/
void sub_1695ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1695ae0ULL || rel >= 0x1695be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01695be0 size=80 callers=1 calls=2
   calls: sub_1653890, sub_16955c0
*/
void sub_1695be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1695be0ULL || rel >= 0x1695c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01695c30 size=208 callers=2 calls=2
   calls: sub_1653890, sub_1653b50
*/
void sub_1695c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1695c30ULL || rel >= 0x1695d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01695d00 size=64 callers=1 calls=1
   calls: sub_1655c80
*/
void sub_1695d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1695d00ULL || rel >= 0x1695d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01695d40 size=80 callers=0 calls=2
   calls: sub_1655c80, sub_1655c90
*/
void sub_1695d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1695d40ULL || rel >= 0x1695d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01695d90 size=32 callers=2 calls=0
*/
void sub_1695d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1695d90ULL || rel >= 0x1695db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01695db0 size=512 callers=0 calls=4
   calls: sub_1655c80, sub_1655c90, sub_165e060, sub_1690c70
*/
void sub_1695db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1695db0ULL || rel >= 0x1695fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01695fb0 size=224 callers=5 calls=3
   calls: sub_1655c80, sub_1655c90, sub_1690c70
*/
void sub_1695fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1695fb0ULL || rel >= 0x1696090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01696090 size=16 callers=1 calls=0
*/
void sub_1696090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1696090ULL || rel >= 0x16960a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016960a0 size=288 callers=0 calls=3
   calls: sub_1655c80, sub_1655c90, sub_165e060
*/
void sub_16960a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16960a0ULL || rel >= 0x16961c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016961c0 size=304 callers=2 calls=1
   calls: sub_165e060
*/
void sub_16961c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16961c0ULL || rel >= 0x16962f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016962f0 size=96 callers=1 calls=1
   calls: sub_165e060
*/
void sub_16962f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16962f0ULL || rel >= 0x1696350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01696350 size=96 callers=1 calls=0
*/
void sub_1696350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1696350ULL || rel >= 0x16963b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016963b0 size=608 callers=2 calls=7
   calls: sub_1653890, sub_1653b50, sub_1655850, sub_1655950, sub_16559c0, sub_165e060, sub_165e140
*/
void sub_16963b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16963b0ULL || rel >= 0x1696610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01696610 size=192 callers=0 calls=3
   calls: sub_1655110, sub_165e060, sub_16963b0
*/
void sub_1696610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1696610ULL || rel >= 0x16966d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016966d0 size=48 callers=0 calls=0
*/
void sub_16966d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16966d0ULL || rel >= 0x1696700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01696700 size=16 callers=0 calls=0
*/
void sub_1696700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1696700ULL || rel >= 0x1696710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01696710 size=240 callers=1 calls=5
   calls: LocalDestroyNetworkJob_TryPrepareDestroyNetwork, sub_1655850, sub_1655950, sub_16559c0, sub_165e060
*/
void sub_1696710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1696710ULL || rel >= 0x1696800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01696800 size=192 callers=0 calls=3
   calls: sub_1655110, sub_165e060, sub_1696710
*/
void sub_1696800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1696800ULL || rel >= 0x16968c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016968c0 size=48 callers=0 calls=0
*/
void sub_16968c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16968c0ULL || rel >= 0x16968f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016968f0 size=16 callers=0 calls=0
*/
void sub_16968f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16968f0ULL || rel >= 0x1696900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01696900 size=432 callers=2 calls=9
   calls: LocalConnectNetworkJob_WaitConnectNetwork, sub_1653890, sub_1653b50, sub_1655850, sub_1655950, sub_16559c0, sub_165e060, sub_1695fb0, sub_1696ab0
*/
void sub_1696900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1696900ULL || rel >= 0x1696ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01696ab0 size=256 callers=4 calls=7
   calls: sub_1652940, sub_1656e10, sub_1656e20, sub_16571e0, sub_171e140, sub_171e1e0, sub_1727940
*/
void sub_1696ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1696ab0ULL || rel >= 0x1696bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01696bb0 size=192 callers=0 calls=3
   calls: sub_1655110, sub_165e060, sub_1696900
*/
void sub_1696bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1696bb0ULL || rel >= 0x1696c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01696c70 size=48 callers=0 calls=0
*/
void sub_1696c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1696c70ULL || rel >= 0x1696ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01696ca0 size=16 callers=0 calls=0
*/
void sub_1696ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1696ca0ULL || rel >= 0x1696cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01696cb0 size=16 callers=0 calls=0
*/
void sub_1696cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1696cb0ULL || rel >= 0x1696cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01696cc0 size=192 callers=0 calls=3
   calls: sub_1655110, sub_165e060, sub_1694ea0
*/
void sub_1696cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1696cc0ULL || rel >= 0x1696d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01696d80 size=48 callers=0 calls=0
*/
void sub_1696d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1696d80ULL || rel >= 0x1696db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01696db0 size=16 callers=0 calls=0
*/
void sub_1696db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1696db0ULL || rel >= 0x1696dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01696dc0 size=256 callers=2 calls=4
   calls: sub_1655850, sub_1655950, sub_16559c0, sub_165e060
*/
void sub_1696dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1696dc0ULL || rel >= 0x1696ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01696ec0 size=192 callers=0 calls=3
   calls: sub_1655110, sub_165e060, sub_1696dc0
*/
void sub_1696ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1696ec0ULL || rel >= 0x1696f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01696f80 size=48 callers=0 calls=0
*/
void sub_1696f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1696f80ULL || rel >= 0x1696fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01696fb0 size=16 callers=0 calls=0
*/
void sub_1696fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1696fb0ULL || rel >= 0x1696fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01696fc0 size=16 callers=0 calls=0
*/
void sub_1696fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1696fc0ULL || rel >= 0x1696fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01696fd0 size=512 callers=1 calls=8
   calls: LocalAllowParticipatingJob_WaitAllowParticipating, sub_1653890, sub_1653b50, sub_1655850, sub_1655950, sub_16559c0, sub_165e060, sub_165e140
*/
void sub_1696fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1696fd0ULL || rel >= 0x16971d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016971d0 size=16 callers=0 calls=0
*/
void sub_16971d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16971d0ULL || rel >= 0x16971e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016971e0 size=16 callers=0 calls=0
*/
void sub_16971e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16971e0ULL || rel >= 0x16971f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016971f0 size=32 callers=1 calls=0
*/
void sub_16971f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16971f0ULL || rel >= 0x1697210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01697210 size=16 callers=3 calls=0
*/
void sub_1697210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1697210ULL || rel >= 0x1697220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01697220 size=224 callers=0 calls=2
   calls: sub_1653890, sub_1653b50
*/
void sub_1697220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1697220ULL || rel >= 0x1697300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01697300 size=48 callers=1 calls=0
*/
void sub_1697300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1697300ULL || rel >= 0x1697330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01697330 size=48 callers=0 calls=0
*/
void sub_1697330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1697330ULL || rel >= 0x1697360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01697360 size=32 callers=1 calls=0
*/
void sub_1697360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1697360ULL || rel >= 0x1697380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01697380 size=144 callers=8 calls=0
*/
void sub_1697380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1697380ULL || rel >= 0x1697410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01697410 size=128 callers=8 calls=0
*/
void sub_1697410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1697410ULL || rel >= 0x1697490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01697490 size=96 callers=1 calls=0
*/
void sub_1697490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1697490ULL || rel >= 0x16974f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016974f0 size=32 callers=1 calls=0
*/
void sub_16974f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16974f0ULL || rel >= 0x1697510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01697510 size=64 callers=2 calls=0
*/
void sub_1697510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1697510ULL || rel >= 0x1697550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01697550 size=144 callers=0 calls=1
   calls: sub_1695c30
*/
void sub_1697550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1697550ULL || rel >= 0x16975e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016975e0 size=80 callers=1 calls=0
*/
void sub_16975e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16975e0ULL || rel >= 0x1697630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01697630 size=48 callers=2 calls=0
*/
void sub_1697630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1697630ULL || rel >= 0x1697660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01697660 size=80 callers=1 calls=0
*/
void sub_1697660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1697660ULL || rel >= 0x16976b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016976b0 size=32 callers=1 calls=0
*/
void sub_16976b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16976b0ULL || rel >= 0x16976d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016976d0 size=48 callers=2 calls=0
*/
void sub_16976d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16976d0ULL || rel >= 0x1697700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01697700 size=80 callers=1 calls=0
*/
void sub_1697700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1697700ULL || rel >= 0x1697750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01697750 size=32 callers=1 calls=0
*/
void sub_1697750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1697750ULL || rel >= 0x1697770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01697770 size=48 callers=3 calls=0
*/
void sub_1697770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1697770ULL || rel >= 0x16977a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016977a0 size=96 callers=2 calls=0
*/
void sub_16977a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16977a0ULL || rel >= 0x1697800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01697800 size=48 callers=1 calls=0
*/
void sub_1697800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1697800ULL || rel >= 0x1697830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01697830 size=16 callers=6 calls=0
*/
void sub_1697830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1697830ULL || rel >= 0x1697840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01697840 size=64 callers=6 calls=0
*/
void sub_1697840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1697840ULL || rel >= 0x1697880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01697880 size=16 callers=0 calls=0
*/
void sub_1697880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1697880ULL || rel >= 0x1697890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01697890 size=16 callers=0 calls=0
*/
void sub_1697890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1697890ULL || rel >= 0x16978a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016978a0 size=16 callers=0 calls=0
*/
void sub_16978a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16978a0ULL || rel >= 0x16978b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016978b0 size=16 callers=0 calls=0
*/
void sub_16978b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16978b0ULL || rel >= 0x16978c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016978c0 size=16 callers=0 calls=0
*/
void sub_16978c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16978c0ULL || rel >= 0x16978d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016978d0 size=16 callers=0 calls=0
*/
void sub_16978d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16978d0ULL || rel >= 0x16978e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016978e0 size=96 callers=1 calls=2
   calls: sub_1655080, sub_165ba50
*/
void sub_16978e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16978e0ULL || rel >= 0x1697940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01697940 size=96 callers=0 calls=1
   calls: sub_1655170
*/
void sub_1697940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1697940ULL || rel >= 0x16979a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016979a0 size=96 callers=0 calls=2
   calls: sub_1655170, sub_165baa0
*/
void sub_16979a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16979a0ULL || rel >= 0x1697a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01697a00 size=112 callers=1 calls=1
   calls: sub_165e060
   ref: LocalEventJob::WatchUpdateEvent
*/
void LocalEventJob_WatchUpdateEvent(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1697a00ULL || rel >= 0x1697a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01697a70 size=160 callers=0 calls=4
   calls: LocalEventCheckBackgroundJob_UpdateConnectionStatus, sub_1655850, sub_1692ea0, sub_1693c90
   ref: LocalEventJob::WaitConnectionStatusUpdated
*/
void LocalEventJob_WaitConnectionStatusUpdated(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1697a70ULL || rel >= 0x1697b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01697b10 size=80 callers=1 calls=1
   calls: sub_165bba0
*/
void sub_1697b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1697b10ULL || rel >= 0x1697b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01697b60 size=128 callers=0 calls=0
   ref: LocalEventJob::WaitBackgroundJobEnd
   ref: LocalEventJob::ProcessUpdateEvent
*/
void LocalEventJob_ProcessUpdateEvent(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1697b60ULL || rel >= 0x1697be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01697be0 size=80 callers=0 calls=1
   calls: sub_1692fb0
   ref: LocalEventJob::WaitBackgroundJobEnd
*/
void LocalEventJob_WaitBackgroundJobEnd(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1697be0ULL || rel >= 0x1697c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01697c30 size=80 callers=0 calls=2
   calls: sub_1655a80, sub_1693c80
   ref: LocalEventJob::WatchUpdateEvent
*/
void LocalEventJob_WatchUpdateEvent_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1697c30ULL || rel >= 0x1697c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01697c80 size=16 callers=0 calls=0
*/
void sub_1697c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1697c80ULL || rel >= 0x1697c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01697c90 size=96 callers=1 calls=4
   calls: sub_1652bd0, sub_1655080, sub_165ba50, sub_17162d0
*/
void sub_1697c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1697c90ULL || rel >= 0x1697cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01697cf0 size=80 callers=0 calls=2
   calls: sub_1655170, sub_1716390
*/
void sub_1697cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1697cf0ULL || rel >= 0x1697d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01697d40 size=96 callers=0 calls=3
   calls: sub_1655170, sub_165baa0, sub_1716390
*/
void sub_1697d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1697d40ULL || rel >= 0x1697da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01697da0 size=336 callers=1 calls=5
   calls: sub_1655110, sub_1655190, sub_1655850, sub_165e060, sub_1695fb0
   ref: LocalConnectNetworkJob::WaitConnectNetwork
*/
void LocalConnectNetworkJob_WaitConnectNetwork(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1697da0ULL || rel >= 0x1697ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01697ef0 size=288 callers=0 calls=4
   calls: sub_1655220, sub_1655330, sub_16559c0, sub_165e060
   ref: LocalConnectNetworkJob::WaitForCancel
   ref: LocalConnectNetworkJob::ProcessSucceeded
*/
void LocalConnectNetworkJob_WaitForCancel(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1697ef0ULL || rel >= 0x1698010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01698010 size=144 callers=1 calls=3
   calls: sub_1655220, sub_1655330, sub_165e060
*/
void sub_1698010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1698010ULL || rel >= 0x16980a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016980a0 size=80 callers=0 calls=1
   calls: sub_1655290
*/
void sub_16980a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16980a0ULL || rel >= 0x16980f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016980f0 size=176 callers=0 calls=3
   calls: sub_16551b0, sub_1655330, sub_165e060
   ref: LocalConnectNetworkJob::WaitForCancel
*/
void LocalConnectNetworkJob_WaitForCancel_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16980f0ULL || rel >= 0x16981a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016981a0 size=16 callers=0 calls=0
*/
void sub_16981a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16981a0ULL || rel >= 0x16981b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016981b0 size=112 callers=1 calls=4
   calls: sub_1652bd0, sub_1655080, sub_165ba50, sub_17162d0
*/
void sub_16981b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16981b0ULL || rel >= 0x1698220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01698220 size=80 callers=0 calls=2
   calls: sub_1655170, sub_1716390
*/
void sub_1698220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1698220ULL || rel >= 0x1698270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01698270 size=96 callers=0 calls=3
   calls: sub_1655170, sub_165baa0, sub_1716390
*/
void sub_1698270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1698270ULL || rel >= 0x16982d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016982d0 size=208 callers=2 calls=3
   calls: sub_1655110, sub_1655190, sub_165e060
   ref: LocalDestroyNetworkJob::TryPrepareDestroyNetwork
*/
void LocalDestroyNetworkJob_TryPrepareDestroyNetwork(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16982d0ULL || rel >= 0x16983a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016983a0 size=240 callers=0 calls=4
   calls: sub_1655330, sub_165c600, sub_1687580, sub_16935a0
   ref: LocalDestroyNetworkJob::SendDestroyNetworkMessage
   ref: LocalDestroyNetworkJob::WaitUntilAllClientsReceiveUpdateSessionMessage
   ref: LocalDestroyNetworkJob::WaitForCancel
*/
void LocalDestroyNetworkJob_WaitForCancel(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16983a0ULL || rel >= 0x1698490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01698490 size=176 callers=1 calls=3
   calls: sub_1655220, sub_1655330, sub_165e060
*/
void sub_1698490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1698490ULL || rel >= 0x1698540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01698540 size=80 callers=0 calls=1
   calls: sub_1655290
*/
void sub_1698540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1698540ULL || rel >= 0x1698590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01698590 size=224 callers=0 calls=4
   calls: sub_1655330, sub_165c600, sub_165c6b0, sub_1695d90
   ref: LocalDestroyNetworkJob::SendDestroyNetworkMessage
   ref: LocalDestroyNetworkJob::WaitForCancel
*/
void LocalDestroyNetworkJob_WaitForCancel_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1698590ULL || rel >= 0x1698670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01698670 size=208 callers=0 calls=5
   calls: sub_1655330, sub_165c600, sub_16945d0, sub_1694650, sub_1694a60
   ref: LocalDestroyNetworkJob::WaitUntilAllClientsDisconnection
   ref: LocalDestroyNetworkJob::StartDestroyNetwork
   ref: LocalDestroyNetworkJob::WaitForCancel
*/
void LocalDestroyNetworkJob_WaitForCancel_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1698670ULL || rel >= 0x1698740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01698740 size=208 callers=0 calls=4
   calls: LocalBackgroundProcessJob_DestroyNetwork, sub_1655220, sub_1655850, sub_165e060
   ref: LocalDestroyNetworkJob::WaitDestroyNetwork
*/
void LocalDestroyNetworkJob_WaitDestroyNetwork(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1698740ULL || rel >= 0x1698810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01698810 size=288 callers=0 calls=4
   calls: sub_1655330, sub_165c600, sub_165c6b0, sub_16955c0
   ref: LocalDestroyNetworkJob::SendDestroyNetworkMessage
   ref: LocalDestroyNetworkJob::StartDestroyNetwork
   ref: LocalDestroyNetworkJob::WaitForCancel
*/
void LocalDestroyNetworkJob_WaitForCancel_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1698810ULL || rel >= 0x1698930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01698930 size=288 callers=0 calls=5
   calls: sub_16551b0, sub_1655220, sub_1655330, sub_165e060, sub_1692780
   ref: LocalDestroyNetworkJob::WaitForCancel
*/
void LocalDestroyNetworkJob_WaitForCancel_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1698930ULL || rel >= 0x1698a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01698a50 size=16 callers=0 calls=0
*/
void sub_1698a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1698a50ULL || rel >= 0x1698a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01698a60 size=96 callers=1 calls=4
   calls: sub_1652bd0, sub_1655080, sub_165ba50, sub_17162d0
*/
void sub_1698a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1698a60ULL || rel >= 0x1698ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01698ac0 size=80 callers=0 calls=2
   calls: sub_1655170, sub_1716390
*/
void sub_1698ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1698ac0ULL || rel >= 0x1698b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01698b10 size=96 callers=0 calls=3
   calls: sub_1655170, sub_165baa0, sub_1716390
*/
void sub_1698b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1698b10ULL || rel >= 0x1698b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01698b70 size=176 callers=1 calls=3
   calls: sub_1655110, sub_1655190, sub_165e060
   ref: LocalDisconnectNetworkJob::TryPrepareDisconnectNetwork
*/
void LocalDisconnectNetworkJob_TryPrepareDisconnectNetwork(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1698b70ULL || rel >= 0x1698c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01698c20 size=272 callers=0 calls=7
   calls: LocalBackgroundProcessJob_DisconnectNetwork, sub_1655220, sub_1655330, sub_1655850, sub_165e060, sub_165e140, sub_16877d0
   ref: LocalDisconnectNetworkJob::WaitForCancel
   ref: LocalDisconnectNetworkJob::WaitDisconnectNetwork
*/
void LocalDisconnectNetworkJob_WaitForCancel(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1698c20ULL || rel >= 0x1698d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01698d30 size=144 callers=1 calls=3
   calls: sub_1655220, sub_1655330, sub_165e060
*/
void sub_1698d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1698d30ULL || rel >= 0x1698dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01698dc0 size=80 callers=0 calls=1
   calls: sub_1655290
*/
void sub_1698dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1698dc0ULL || rel >= 0x1698e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01698e10 size=240 callers=0 calls=5
   calls: sub_16551b0, sub_1655220, sub_1655330, sub_165e060, sub_1692780
   ref: LocalDisconnectNetworkJob::WaitForCancel
*/
void LocalDisconnectNetworkJob_WaitForCancel_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1698e10ULL || rel >= 0x1698f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01698f00 size=16 callers=0 calls=0
*/
void sub_1698f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1698f00ULL || rel >= 0x1698f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

