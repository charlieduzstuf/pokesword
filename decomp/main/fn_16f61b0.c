/* main functions 016f61b0..0171c600 (197 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 016f61b0 size=16 callers=0 calls=0
*/
void sub_16f61b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f61b0ULL || rel >= 0x16f61c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f61c0 size=16 callers=0 calls=0
*/
void sub_16f61c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f61c0ULL || rel >= 0x16f61d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f61d0 size=48 callers=1 calls=1
   calls: sub_16a1ef0
*/
void sub_16f61d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f61d0ULL || rel >= 0x16f6200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f6200 size=16 callers=0 calls=0
*/
void sub_16f6200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f6200ULL || rel >= 0x16f6210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f6210 size=48 callers=0 calls=1
   calls: sub_16a1f40
*/
void sub_16f6210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f6210ULL || rel >= 0x16f6240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f6240 size=288 callers=0 calls=9
   calls: sub_165e140, sub_16a8390, sub_16b00e0, sub_16c1a70, sub_16c8540, sub_1749820, sub_17499e0, sub_174a450, sub_174de60
*/
void sub_16f6240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f6240ULL || rel >= 0x16f6360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f6360 size=16 callers=0 calls=0
*/
void sub_16f6360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f6360ULL || rel >= 0x16f6370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f6370 size=272 callers=1 calls=2
   calls: sub_1724f20, sub_1749820
*/
void sub_16f6370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f6370ULL || rel >= 0x16f6480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f6480 size=64 callers=0 calls=1
   calls: sub_17499e0
*/
void sub_16f6480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f6480ULL || rel >= 0x16f64c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f64c0 size=64 callers=0 calls=2
   calls: sub_1724ff0, sub_17499e0
*/
void sub_16f64c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f64c0ULL || rel >= 0x16f6500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f6500 size=800 callers=0 calls=15
   calls: sub_16580b0, sub_16580c0, sub_16580f0, sub_16581f0, sub_165e060, sub_16a8390, sub_16c4e00, sub_16c5140, sub_16e6f10, sub_16ef830, sub_16ef860, sub_1723380
   ... +3 more
   ref: NexMatchJointSessionJob::CallSessionEvent
*/
void NexMatchJointSessionJob_CallSessionEvent(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f6500ULL || rel >= 0x16f6820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f6820 size=704 callers=0 calls=6
   calls: sub_165e140, sub_16a77c0, sub_16a7cc0, sub_16dba70, sub_1725280, sub_172be20
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::SendAnswerToDestroyInvitation
   ref: NexMatchJointSessionJob::SendAnswerToInvitation
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::CloseMatchmakeSession
*/
void NexMatchJointSessionJob_StartLeaveMesh(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f6820ULL || rel >= 0x16f6ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f6ae0 size=752 callers=0 calls=15
   calls: sub_16580b0, sub_16580c0, sub_16580f0, sub_16581f0, sub_165e060, sub_16a8390, sub_16c4e00, sub_16c5140, sub_16e6e40, sub_16ef830, sub_16ef860, sub_1723380
   ... +3 more
   ref: NexMatchJointSessionJob::CallSessionEvent
*/
void NexMatchJointSessionJob_CallSessionEvent_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f6ae0ULL || rel >= 0x16f6dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f6dd0 size=624 callers=0 calls=10
   calls: sub_16580b0, sub_16580c0, sub_16580f0, sub_16581f0, sub_165e060, sub_16a8390, sub_16e7300, sub_16ef830, sub_16ef860, sub_1735350
   ref: NexMatchJointSessionJob::CallSessionEvent
*/
void NexMatchJointSessionJob_CallSessionEvent_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f6dd0ULL || rel >= 0x16f7040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f7040 size=624 callers=0 calls=10
   calls: sub_16580b0, sub_16580c0, sub_16580f0, sub_16581f0, sub_165e060, sub_16a8390, sub_16ef830, sub_16ef860, sub_1735350, sub_1735a20
   ref: NexMatchJointSessionJob::CallSessionEvent
*/
void NexMatchJointSessionJob_CallSessionEvent_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f7040ULL || rel >= 0x16f72b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f72b0 size=576 callers=0 calls=9
   calls: sub_16580b0, sub_16580c0, sub_16580f0, sub_16581f0, sub_165e060, sub_16a8390, sub_16ef830, sub_16ef860, sub_1735350
   ref: NexMatchJointSessionJob::CallDestroySessionEvent
*/
void NexMatchJointSessionJob_CallDestroySessionEvent(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f72b0ULL || rel >= 0x16f74f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f74f0 size=1088 callers=0 calls=9
   calls: sub_1655220, sub_165e060, sub_165e140, sub_16a77c0, sub_16a7cc0, sub_16dba70, sub_1725280, sub_1725e40, sub_172be20
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::CloseMatchmakeSession
*/
void NexMatchJointSessionJob_StartLeaveMesh_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f74f0ULL || rel >= 0x16f7930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f7930 size=1424 callers=0 calls=10
   calls: sub_16580b0, sub_16580c0, sub_16580f0, sub_16581f0, sub_165e060, sub_16a8390, sub_16ef830, sub_16ef860, sub_1735350, sub_1735a20
   ref: NexMatchJointSessionJob::CallSessionEvent
*/
void NexMatchJointSessionJob_CallSessionEvent_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f7930ULL || rel >= 0x16f7ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f7ec0 size=144 callers=0 calls=2
   calls: sub_165e060, sub_16ee0d0
*/
void sub_16f7ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f7ec0ULL || rel >= 0x16f7f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f7f50 size=400 callers=0 calls=5
   calls: sub_16580b0, sub_16580c0, sub_16580f0, sub_16581f0, sub_165e060
*/
void sub_16f7f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f7f50ULL || rel >= 0x16f80e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f80e0 size=112 callers=0 calls=1
   calls: sub_165e060
*/
void sub_16f80e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f80e0ULL || rel >= 0x16f8150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f8150 size=144 callers=0 calls=1
   calls: sub_165e060
*/
void sub_16f8150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f8150ULL || rel >= 0x16f81e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f81e0 size=144 callers=0 calls=2
   calls: sub_165e140, sub_172c120
*/
void sub_16f81e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f81e0ULL || rel >= 0x16f8270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f8270 size=208 callers=0 calls=2
   calls: sub_165e140, sub_172c120
*/
void sub_16f8270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f8270ULL || rel >= 0x16f8340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f8340 size=176 callers=0 calls=2
   calls: sub_165e140, sub_1726360
*/
void sub_16f8340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f8340ULL || rel >= 0x16f83f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f83f0 size=336 callers=0 calls=4
   calls: sub_16580f0, sub_1658120, sub_16ef880, sub_1726360
*/
void sub_16f83f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f83f0ULL || rel >= 0x16f8540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f8540 size=320 callers=0 calls=8
   calls: sub_1655220, sub_165e060, sub_165e140, sub_16a7c70, sub_16a7cc0, sub_17259c0, sub_1725e40, sub_172be20
*/
void sub_16f8540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f8540ULL || rel >= 0x16f8680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f8680 size=672 callers=0 calls=8
   calls: sub_165e140, sub_16a6910, sub_16a6be0, sub_16a7650, sub_16a77c0, sub_16a7b10, sub_172be20, sub_172c120
   ref: NexMatchJointSessionJob::WaitLeaveMesh
   ref: NexMatchJointSessionJob::StartLeaveCurrentMatchmakeSession
   ref: NexMatchJointSessionJob::ProcessFailure
*/
void NexMatchJointSessionJob_WaitLeaveMesh(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f8680ULL || rel >= 0x16f8920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f8920 size=752 callers=0 calls=7
   calls: sub_165c6b0, sub_165e140, sub_16a77c0, sub_16dba70, sub_17255c0, sub_172be20, sub_172dee0
   ref: NexMatchJointSessionJob::WaitCloseMatchmakeSession
   ref: NexMatchJointSessionJob::CloseJointSessionParticipation
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::SendInvitationAsCompanion
   ref: NexMatchJointSessionJob::ProcessFailure
*/
void NexMatchJointSessionJob_StartLeaveMesh_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f8920ULL || rel >= 0x16f8c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f8c10 size=688 callers=0 calls=7
   calls: sub_165c6b0, sub_165e060, sub_165e140, sub_16dba70, sub_17255c0, sub_172be20, sub_172e0d0
   ref: NexMatchJointSessionJob::CloseJointSessionParticipation
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::SendInvitationAsCompanion
   ref: NexMatchJointSessionJob::ProcessFailure
*/
void NexMatchJointSessionJob_StartLeaveMesh_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f8c10ULL || rel >= 0x16f8ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f8ec0 size=928 callers=0 calls=8
   calls: sub_165c6b0, sub_165e140, sub_16a77c0, sub_16dba70, sub_172be20, sub_172c120, sub_172df70, sub_1735cd0
   ref: NexMatchJointSessionJob::WaitCloseJointSessionParticipation
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::SendInvitationAsCompanion
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::SendDestroyInvitation
   ref: NexMatchJointSessionJob::GetMatchmakeSessionOwners
*/
void NexMatchJointSessionJob_StartLeaveMesh_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f8ec0ULL || rel >= 0x16f9260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f9260 size=1200 callers=0 calls=14
   calls: sub_1655290, sub_165c6b0, sub_165e140, sub_16a77c0, sub_16a8300, sub_16dba70, sub_1725e40, sub_172be20, sub_1733c70, sub_1735350, sub_17353a0, sub_1735440
   ... +2 more
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::WaitForAnswerToInvitation
   ref: NexMatchJointSessionJob::ProcessFailure
*/
void NexMatchJointSessionJob_StartLeaveMesh_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f9260ULL || rel >= 0x16f9710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f9710 size=864 callers=0 calls=8
   calls: sub_165c6b0, sub_165e060, sub_165e140, sub_16dba70, sub_172be20, sub_172c120, sub_172e0e0, sub_1735cd0
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::SendInvitationAsCompanion
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::SendDestroyInvitation
   ref: NexMatchJointSessionJob::GetMatchmakeSessionOwners
*/
void NexMatchJointSessionJob_StartLeaveMesh_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f9710ULL || rel >= 0x16f9a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f9a70 size=1184 callers=0 calls=14
   calls: sub_1655290, sub_165c6b0, sub_165e140, sub_16a77c0, sub_16a8300, sub_16dba70, sub_1725e40, sub_172be20, sub_1733c90, sub_1735350, sub_17353a0, sub_1735440
   ... +2 more
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::WaitForAnswerToDestroyInvitation
   ref: NexMatchJointSessionJob::ProcessFailure
*/
void NexMatchJointSessionJob_StartLeaveMesh_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f9a70ULL || rel >= 0x16f9f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f9f10 size=672 callers=0 calls=5
   calls: sub_165c6b0, sub_165e140, sub_16a77c0, sub_16dd350, sub_172be20
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::WaitGetMatchmakeSessionOwners
   ref: NexMatchJointSessionJob::SendInvitationAsCompanion
   ref: NexMatchJointSessionJob::ProcessFailure
*/
void NexMatchJointSessionJob_StartLeaveMesh_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f9f10ULL || rel >= 0x16fa1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016fa1b0 size=400 callers=0 calls=5
   calls: sub_165e060, sub_165e140, sub_16dd450, sub_172be20, sub_1735b00
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::GetMatchmakeSessionOwners
*/
void NexMatchJointSessionJob_ProcessFailure(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16fa1b0ULL || rel >= 0x16fa340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016fa340 size=928 callers=0 calls=10
   calls: sub_1655290, sub_165c6b0, sub_165e140, sub_16a77c0, sub_16dba70, sub_16faae0, sub_1725e40, sub_172be20, sub_1735350, sub_1735590
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::ResendDestroyInvitation
   ref: NexMatchJointSessionJob::SendInvitationAsCompanion
   ref: NexMatchJointSessionJob::ProcessFailure
*/
void NexMatchJointSessionJob_StartLeaveMesh_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16fa340ULL || rel >= 0x16fa6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016fa6e0 size=1024 callers=0 calls=11
   calls: sub_1655290, sub_165e140, sub_16a5480, sub_16a77c0, sub_16dba70, sub_1725e40, sub_172be20, sub_1733c90, sub_17353f0, sub_1735590, sub_1735ab0
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::WaitForAnswerToDestroyInvitation
   ref: NexMatchJointSessionJob::ProcessFailure
*/
void NexMatchJointSessionJob_StartLeaveMesh_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16fa6e0ULL || rel >= 0x16faae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016faae0 size=368 callers=4 calls=8
   calls: sub_16580b0, sub_16580c0, sub_16580f0, sub_16581f0, sub_16a8390, sub_1735350, sub_17355d0, sub_1735a20
*/
void sub_16faae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16faae0ULL || rel >= 0x16fac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016fac50 size=768 callers=0 calls=7
   calls: sub_165e140, sub_16a77c0, sub_16dba70, sub_16faae0, sub_172be20, sub_172c1b0, sub_1733070
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::WaitForInvitationAsCompanion
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::CloseMatchmakeSession
*/
void NexMatchJointSessionJob_StartLeaveMesh_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16fac50ULL || rel >= 0x16faf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016faf50 size=944 callers=0 calls=8
   calls: sub_165c6b0, sub_165e140, sub_16a77c0, sub_16dba70, sub_16faae0, sub_172be20, sub_172c1b0, sub_1735a20
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::SendAnswerToInvitation
   ref: NexMatchJointSessionJob::SendInvitationAsCompanion
   ref: NexMatchJointSessionJob::ProcessFailure
*/
void NexMatchJointSessionJob_StartLeaveMesh_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16faf50ULL || rel >= 0x16fb300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016fb300 size=816 callers=0 calls=8
   calls: sub_165e140, sub_16a77c0, sub_16dba70, sub_1726360, sub_172be20, sub_172e0d0, sub_1733050, sub_1735110
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::WaitUntilLeaderLeavesMesh
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::WaitNextSessionId
*/
void NexMatchJointSessionJob_StartLeaveMesh_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16fb300ULL || rel >= 0x16fb630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016fb630 size=1088 callers=0 calls=9
   calls: sub_1655290, sub_165c6b0, sub_165e140, sub_16a77c0, sub_16dba70, sub_1725e40, sub_172be20, sub_1735350, sub_1735590
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::StartJoinMatchmakeSession
   ref: NexMatchJointSessionJob::ResendInvitationAsCompanion
   ref: NexMatchJointSessionJob::SendLeaveMeshCompanion
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::StartRandomMatchmake
   ref: NexMatchJointSessionJob::StartCreateMatchmakeSession
*/
void NexMatchJointSessionJob_StartLeaveMesh_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16fb630ULL || rel >= 0x16fba70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016fba70 size=992 callers=0 calls=10
   calls: sub_1655290, sub_165e140, sub_16a77c0, sub_16dba70, sub_1725e40, sub_172be20, sub_1733c70, sub_1735350, sub_17353f0, sub_1735590
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::WaitForAnswerToInvitation
   ref: NexMatchJointSessionJob::ProcessFailure
*/
void NexMatchJointSessionJob_StartLeaveMesh_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16fba70ULL || rel >= 0x16fbe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016fbe50 size=912 callers=0 calls=8
   calls: sub_1655290, sub_165e140, sub_16a77c0, sub_16dba70, sub_16dece0, sub_1725e40, sub_172be20, sub_1735350
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::WaitCreateMatchmakeSession
   ref: NexMatchJointSessionJob::ProcessFailure
*/
void NexMatchJointSessionJob_StartLeaveMesh_17(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16fbe50ULL || rel >= 0x16fc1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016fc1e0 size=912 callers=0 calls=8
   calls: sub_1655290, sub_165e140, sub_16a77c0, sub_16dba70, sub_16e20b0, sub_1725e40, sub_172be20, sub_1735350
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::WaitJoinMatchmakeSession
*/
void NexMatchJointSessionJob_StartLeaveMesh_18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16fc1e0ULL || rel >= 0x16fc570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016fc570 size=912 callers=0 calls=8
   calls: sub_1655290, sub_165e140, sub_16a77c0, sub_16dba70, sub_16dbf50, sub_1725e40, sub_172be20, sub_1735350
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::WaitRandomMatchmake
*/
void NexMatchJointSessionJob_StartLeaveMesh_19(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16fc570ULL || rel >= 0x16fc900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016fc900 size=1280 callers=0 calls=17
   calls: sub_1655290, sub_165c6b0, sub_165e140, sub_16a77c0, sub_16a8300, sub_16a8390, sub_16dba70, sub_1725e40, sub_172be20, sub_172c070, sub_1733cb0, sub_1735350
   ... +5 more
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::WaitUntilCompanionLeavesMesh
*/
void NexMatchJointSessionJob_StartLeaveMesh_20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16fc900ULL || rel >= 0x16fce00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016fce00 size=592 callers=0 calls=10
   calls: sub_165c6b0, sub_165e060, sub_165e140, sub_16dba70, sub_16dc100, sub_16ee090, sub_16ee0a0, sub_172be20, sub_172e0e0, sub_172e120
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::WaitNotification
   ref: NexMatchJointSessionJob::ProcessFailure
*/
void NexMatchJointSessionJob_StartLeaveMesh_21(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16fce00ULL || rel >= 0x16fd050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016fd050 size=800 callers=0 calls=5
   calls: sub_165c6b0, sub_165e140, sub_16dba70, sub_16ee550, sub_172be20
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::SendNextSessionId
*/
void NexMatchJointSessionJob_StartLeaveMesh_22(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16fd050ULL || rel >= 0x16fd370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016fd370 size=528 callers=0 calls=8
   calls: sub_165c6b0, sub_165e060, sub_165e140, sub_16dba70, sub_16dee80, sub_172be20, sub_172e0e0, sub_172e120
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::WaitNotification
   ref: NexMatchJointSessionJob::ProcessFailure
*/
void NexMatchJointSessionJob_StartLeaveMesh_23(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16fd370ULL || rel >= 0x16fd580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016fd580 size=480 callers=0 calls=7
   calls: sub_165c6b0, sub_165e060, sub_165e140, sub_16dba70, sub_16e2270, sub_172be20, sub_172e120
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::WaitNotification
   ref: NexMatchJointSessionJob::ProcessFailure
*/
void NexMatchJointSessionJob_StartLeaveMesh_24(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16fd580ULL || rel >= 0x16fd760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016fd760 size=1248 callers=0 calls=14
   calls: sub_1655290, sub_165c6b0, sub_165e140, sub_16a77c0, sub_16a8300, sub_16dba70, sub_1725e40, sub_172be20, sub_1733220, sub_17350e0, sub_1735110, sub_1735350
   ... +2 more
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::WaitCompanionStationPrepared
   ref: NexMatchJointSessionJob::SendPreparedForMigrateSession
   ref: NexMatchJointSessionJob::ProcessFailure
*/
void NexMatchJointSessionJob_StartLeaveMesh_25(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16fd760ULL || rel >= 0x16fdc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016fdc40 size=1168 callers=0 calls=10
   calls: sub_165e140, sub_16a77c0, sub_16dba70, sub_16faae0, sub_172be20, sub_172c120, sub_172e120, sub_1732d20, sub_1735110, sub_1735350
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::WaitUntilLeaderLeavesMesh
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::WaitNextSessionId
   ref: NexMatchJointSessionJob::SendNextSessionId
*/
void NexMatchJointSessionJob_StartLeaveMesh_26(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16fdc40ULL || rel >= 0x16fe0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016fe0d0 size=912 callers=0 calls=10
   calls: sub_1655290, sub_165c6b0, sub_165e140, sub_16a77c0, sub_16dba70, sub_1725e40, sub_172be20, sub_1735150, sub_1735220, sub_1735350
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::SendPreparedForMigrateSession
   ref: NexMatchJointSessionJob::SendLeaveMeshCompanion
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::ResendNextSessionId
*/
void NexMatchJointSessionJob_StartLeaveMesh_27(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16fe0d0ULL || rel >= 0x16fe460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016fe460 size=1104 callers=0 calls=10
   calls: sub_1655290, sub_165e140, sub_16a77c0, sub_16dba70, sub_1725e40, sub_172be20, sub_1733220, sub_1735220, sub_1735350, sub_17353f0
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::WaitCompanionStationPrepared
   ref: NexMatchJointSessionJob::SendPreparedForMigrateSession
   ref: NexMatchJointSessionJob::ProcessFailure
*/
void NexMatchJointSessionJob_StartLeaveMesh_28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16fe460ULL || rel >= 0x16fe8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016fe8b0 size=624 callers=0 calls=5
   calls: sub_165e140, sub_16a77c0, sub_172be20, sub_1735350, sub_1735590
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::StartLeavePreviousMesh
*/
void NexMatchJointSessionJob_StartLeaveMesh_29(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16fe8b0ULL || rel >= 0x16feb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016feb20 size=816 callers=0 calls=11
   calls: sub_165c6b0, sub_165e140, sub_16a6910, sub_16a6be0, sub_16a7650, sub_16a77c0, sub_16a7b10, sub_17255c0, sub_1726360, sub_172be20, sub_172c120
   ref: NexMatchJointSessionJob::StartLeavePreviousMatchmakeSession
   ref: NexMatchJointSessionJob::WaitLeavePreviousMesh
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::WaitMeshRestart
*/
void NexMatchJointSessionJob_ProcessFailure_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16feb20ULL || rel >= 0x16fee50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016fee50 size=1008 callers=0 calls=8
   calls: sub_165e140, sub_16a77c0, sub_16dba70, sub_16ef590, sub_172be20, sub_172c120, sub_172e120, sub_1735350
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::SendPreparedForMigrateSession
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::GetNextMatchmakeSessionInfo
*/
void NexMatchJointSessionJob_StartLeaveMesh_30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16fee50ULL || rel >= 0x16ff240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ff240 size=400 callers=0 calls=4
   calls: sub_165e140, sub_17255c0, sub_172be20, sub_1735350
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::StartLeavePreviousMesh
*/
void NexMatchJointSessionJob_StartLeaveMesh_31(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ff240ULL || rel >= 0x16ff3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ff3d0 size=592 callers=0 calls=4
   calls: sub_165e140, sub_16a77c0, sub_16dba70, sub_172be20
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::WaitGetNextMatchmakeSessionInfo
*/
void NexMatchJointSessionJob_StartLeaveMesh_32(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ff3d0ULL || rel >= 0x16ff620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ff620 size=512 callers=0 calls=5
   calls: sub_165e060, sub_165e140, sub_16dba70, sub_172be20, sub_172e180
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::SendPreparedForMigrateSession
   ref: NexMatchJointSessionJob::ProcessFailure
*/
void NexMatchJointSessionJob_StartLeaveMesh_33(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ff620ULL || rel >= 0x16ff820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ff820 size=624 callers=0 calls=5
   calls: sub_165e140, sub_16a4cc0, sub_16dba70, sub_172be20, sub_172c120
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::WaitLeavePreviousMatchmakeSession
   ref: NexMatchJointSessionJob::ProcessFailure
*/
void NexMatchJointSessionJob_StartLeaveMesh_34(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ff820ULL || rel >= 0x16ffa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ffa90 size=400 callers=0 calls=2
   calls: sub_165e140, sub_172be20
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::MeshRestart
*/
void NexMatchJointSessionJob_MeshRestart(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ffa90ULL || rel >= 0x16ffc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ffc20 size=688 callers=0 calls=14
   calls: sub_1655290, sub_165c6b0, sub_165e140, sub_16a4cc0, sub_16a69c0, sub_16a69f0, sub_16a6c90, sub_16a6cc0, sub_16a7700, sub_16a7730, sub_16dba70, sub_17255c0
   ... +2 more
   ref: NexMatchJointSessionJob::StartLeavePreviousMatchmakeSession
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::WaitMeshRestart
*/
void NexMatchJointSessionJob_ProcessFailure_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ffc20ULL || rel >= 0x16ffed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ffed0 size=480 callers=0 calls=7
   calls: sub_1655290, sub_165c6b0, sub_165e140, sub_1725e40, sub_172be20, sub_172e0e0, sub_172e120
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::WaitMeshRestart
*/
void NexMatchJointSessionJob_ProcessFailure_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ffed0ULL || rel >= 0x17000b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017000b0 size=1952 callers=0 calls=14
   calls: sub_165c6b0, sub_165e140, sub_16a4cc0, sub_16c7e70, sub_16da980, sub_16dba70, sub_16ef590, sub_16ef880, sub_1725ae0, sub_1726360, sub_172be20, sub_1735260
   ... +2 more
   ref: NexMatchJointSessionJob::StartCreateNextMesh
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::WaitStartRetryJoinMesh
   ref: NexMatchJointSessionJob::StartGetNextMeshHostStationLocation
   ref: NexMatchJointSessionJob::ProcessFailure
*/
void NexMatchJointSessionJob_StartLeaveMesh_35(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17000b0ULL || rel >= 0x1700850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01700850 size=592 callers=0 calls=6
   calls: sub_1655290, sub_165e140, sub_16dba70, sub_1725e40, sub_1726360, sub_172be20
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::MeshRestart
*/
void NexMatchJointSessionJob_MeshRestart_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1700850ULL || rel >= 0x1700aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01700aa0 size=528 callers=0 calls=7
   calls: sub_165e140, sub_16dba70, sub_1726360, sub_172be20, sub_1749820, sub_1749960, sub_17499e0
   ref: NexMatchJointSessionJob::WaitGetNextMeshHostStationLocation
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::ProcessFailure
*/
void NexMatchJointSessionJob_StartLeaveMesh_36(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1700aa0ULL || rel >= 0x1700cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01700cb0 size=464 callers=0 calls=5
   calls: sub_165e140, sub_16a6320, sub_16a7cc0, sub_16dba70, sub_172be20
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::WaitCreateNextMesh
*/
void NexMatchJointSessionJob_StartLeaveMesh_37(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1700cb0ULL || rel >= 0x1700e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01700e80 size=656 callers=0 calls=11
   calls: sub_1655290, sub_165e140, sub_16a63d0, sub_16a6400, sub_16a8390, sub_16c1b60, sub_16dba70, sub_1725e40, sub_1726360, sub_172be20, sub_1735470
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::WaitCompanionStation
*/
void NexMatchJointSessionJob_StartLeaveMesh_38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1700e80ULL || rel >= 0x1701110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01701110 size=1280 callers=0 calls=13
   calls: sub_1655290, sub_165c6b0, sub_165e140, sub_16a77c0, sub_16a8300, sub_16a8390, sub_16c1a70, sub_16dba70, sub_16ef590, sub_1725e40, sub_1726360, sub_172be20
   ... +1 more
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::WaitHostStationId
   ref: NexMatchJointSessionJob::SendCompletionForMigrateSession
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::WaitUntilCompanionCompletion
*/
void NexMatchJointSessionJob_StartLeaveMesh_39(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1701110ULL || rel >= 0x1701610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01701610 size=1184 callers=0 calls=11
   calls: sub_1655290, sub_165c6b0, sub_165e060, sub_165e140, sub_16dba70, sub_16ef590, sub_1725e40, sub_1726360, sub_172be20, sub_1749d80, sub_174a450
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::StartJoinNextMesh
   ref: NexMatchJointSessionJob::WaitStartRetryJoinMesh
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::MeshRestart
*/
void NexMatchJointSessionJob_MeshRestart_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1701610ULL || rel >= 0x1701ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01701ab0 size=480 callers=0 calls=5
   calls: sub_165e140, sub_16a7300, sub_16a7cc0, sub_16dba70, sub_172be20
   ref: NexMatchJointSessionJob::WaitJoinNextMesh
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::ProcessFailure
*/
void NexMatchJointSessionJob_StartLeaveMesh_40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1701ab0ULL || rel >= 0x1701c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01701c90 size=2544 callers=0 calls=13
   calls: sub_1655290, sub_165c6b0, sub_165e140, sub_16a4cc0, sub_16a73c0, sub_16a73f0, sub_16a7480, sub_16dba70, sub_17255c0, sub_1725e40, sub_1726360, sub_172be20
   ... +1 more
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::WaitStartRetryJoinMesh
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::WaitCompanionStation
   ref: NexMatchJointSessionJob::MeshRestart
*/
void NexMatchJointSessionJob_MeshRestart_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1701c90ULL || rel >= 0x1702680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01702680 size=1872 callers=0 calls=16
   calls: sub_165c6b0, sub_165e140, sub_16a77c0, sub_16a7a50, sub_16a8300, sub_16a8390, sub_16b00e0, sub_16c1a70, sub_16da980, sub_16dba70, sub_16ef590, sub_1726360
   ... +4 more
   ref: NexMatchJointSessionJob::ProcessComplete
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::UpdateJointSessionOpenStatus
*/
void NexMatchJointSessionJob_StartLeaveMesh_41(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1702680ULL || rel >= 0x1702dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01702dd0 size=416 callers=0 calls=5
   calls: sub_165c6b0, sub_165e140, sub_16dba70, sub_17352d0, sub_17354c0
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::SendCompletionInvitation
*/
void NexMatchJointSessionJob_StartLeaveMesh_42(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1702dd0ULL || rel >= 0x1702f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01702f70 size=1232 callers=0 calls=9
   calls: sub_165c6b0, sub_165e140, sub_16a77c0, sub_16a8300, sub_16dba70, sub_172be20, sub_172c120, sub_17336f0, sub_1735350
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::WaitCompletionInvitation
   ref: NexMatchJointSessionJob::WaitCompanionStation
*/
void NexMatchJointSessionJob_StartLeaveMesh_43(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1702f70ULL || rel >= 0x1703440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01703440 size=896 callers=0 calls=11
   calls: sub_1655290, sub_165c6b0, sub_165e140, sub_16a77c0, sub_16dba70, sub_1725e40, sub_172be20, sub_1732ec0, sub_1735350, sub_1735540, sub_17355d0
   ref: NexMatchJointSessionJob::WaitForAnswerToCompletionInvitation
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::ProcessFailure
*/
void NexMatchJointSessionJob_StartLeaveMesh_44(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1703440ULL || rel >= 0x17037c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017037c0 size=784 callers=0 calls=8
   calls: sub_1655290, sub_165e140, sub_16a77c0, sub_16dba70, sub_1725e40, sub_172be20, sub_1735350, sub_1735590
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::WaitHostStationId
   ref: NexMatchJointSessionJob::ProcessFailure
*/
void NexMatchJointSessionJob_StartLeaveMesh_45(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17037c0ULL || rel >= 0x1703ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01703ad0 size=976 callers=0 calls=9
   calls: sub_165c6b0, sub_165e140, sub_16a77c0, sub_16a8300, sub_16dba70, sub_172be20, sub_172c120, sub_1733cd0, sub_1735350
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::WaitHostStationId
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::WaitCompanionStation
*/
void NexMatchJointSessionJob_StartLeaveMesh_46(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1703ad0ULL || rel >= 0x1703ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01703ea0 size=240 callers=0 calls=2
   calls: sub_165e140, sub_16dba70
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::WaitUpdateJointSessionOpenStatus
*/
void NexMatchJointSessionJob_StartLeaveMesh_47(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1703ea0ULL || rel >= 0x1703f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01703f90 size=672 callers=0 calls=9
   calls: sub_16551b0, sub_165e060, sub_165e140, sub_16a77c0, sub_16a7cc0, sub_16dba70, sub_17255e0, sub_1725e40, sub_172be20
   ref: NexMatchJointSessionJob::StartLeaveMesh
   ref: NexMatchJointSessionJob::ProcessFailure
*/
void NexMatchJointSessionJob_StartLeaveMesh_48(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1703f90ULL || rel >= 0x1704230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01704230 size=304 callers=0 calls=4
   calls: sub_165e060, sub_165e140, sub_16dba70, sub_172e0e0
   ref: NexMatchJointSessionJob::ProcessComplete
   ref: NexMatchJointSessionJob::StartLeaveMesh
*/
void NexMatchJointSessionJob_StartLeaveMesh_49(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1704230ULL || rel >= 0x1704360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01704360 size=560 callers=0 calls=4
   calls: sub_1655110, sub_165e140, sub_172be20, sub_172c120
   ref: NexMatchJointSessionJob::WaitLeaveCurrentMatchmakeSession
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::StartLeaveBufferMatchmakeSession
*/
void NexMatchJointSessionJob_ProcessFailure_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1704360ULL || rel >= 0x1704590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01704590 size=624 callers=0 calls=9
   calls: sub_165c6b0, sub_165e140, sub_16a69c0, sub_16a69f0, sub_16a6c90, sub_16a6cc0, sub_16a7700, sub_16a7730, sub_172be20
   ref: NexMatchJointSessionJob::StartLeaveCurrentMatchmakeSession
   ref: NexMatchJointSessionJob::WaitHostMigrated
   ref: NexMatchJointSessionJob::ProcessFailure
*/
void NexMatchJointSessionJob_ProcessFailure_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1704590ULL || rel >= 0x1704800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01704800 size=400 callers=0 calls=3
   calls: sub_165e140, sub_16efbf0, sub_172be20
   ref: NexMatchJointSessionJob::StartLeaveCurrentMatchmakeSession
   ref: NexMatchJointSessionJob::ProcessFailure
*/
void NexMatchJointSessionJob_ProcessFailure_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1704800ULL || rel >= 0x1704990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01704990 size=912 callers=0 calls=9
   calls: sub_1655110, sub_165e140, sub_16c6860, sub_16ef5f0, sub_16ef830, sub_16ef860, sub_172be20, sub_172c120, sub_172e120
   ref: NexMatchJointSessionJob::WaitLeaveBufferMatchmakeSession
   ref: NexMatchJointSessionJob::ProcessFailure
*/
void NexMatchJointSessionJob_ProcessFailure_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1704990ULL || rel >= 0x1704d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01704d20 size=496 callers=0 calls=4
   calls: sub_165e060, sub_165e140, sub_172be20, sub_172e120
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::StartLeaveBufferMatchmakeSession
*/
void NexMatchJointSessionJob_ProcessFailure_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1704d20ULL || rel >= 0x1704f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01704f10 size=480 callers=0 calls=4
   calls: sub_165e060, sub_165e140, sub_172be20, sub_172e100
   ref: NexMatchJointSessionJob::ProcessFailure
   ref: NexMatchJointSessionJob::StartLeaveBufferMatchmakeSession
*/
void NexMatchJointSessionJob_ProcessFailure_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1704f10ULL || rel >= 0x17050f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017050f0 size=272 callers=0 calls=4
   calls: sub_165e140, sub_1749820, sub_1749960, sub_17499e0
*/
void sub_17050f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17050f0ULL || rel >= 0x1705200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01705200 size=16 callers=0 calls=0
*/
void sub_1705200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1705200ULL || rel >= 0x1705210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01705210 size=16 callers=0 calls=0
*/
void sub_1705210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1705210ULL || rel >= 0x1705220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01705220 size=128 callers=1 calls=1
   calls: sub_1726390
*/
void sub_1705220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1705220ULL || rel >= 0x17052a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017052a0 size=16 callers=0 calls=0
*/
void sub_17052a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17052a0ULL || rel >= 0x17052b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017052b0 size=48 callers=0 calls=1
   calls: sub_17263e0
*/
void sub_17052b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17052b0ULL || rel >= 0x17052e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017052e0 size=192 callers=0 calls=1
   calls: sub_1735cd0
   ref: NexMatchLeaveSessionJob::GetMatchmakeSessionOwners
*/
void NexMatchLeaveSessionJob_GetMatchmakeSessionOwners(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17052e0ULL || rel >= 0x17053a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017053a0 size=384 callers=0 calls=2
   calls: sub_16dd350, sub_172be20
   ref: LeaveSessionJob::LeaveMesh
   ref: nex::NexMatchLeaveSessionJob::SendMonitoringData
   ref: NexMatchLeaveSessionJob::WaitGetMatchmakeSessionOwners
   ref: nex::NexMatchLeaveSessionJob::LeaveMesh
*/
void LeaveSessionJob_LeaveMesh(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17053a0ULL || rel >= 0x1705520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01705520 size=336 callers=0 calls=4
   calls: sub_165e060, sub_16dd450, sub_172be20, sub_1735b00
   ref: nex::NexMatchLeaveSessionJob::SendMonitoringData
   ref: nex::NexMatchLeaveSessionJob::LeaveMesh
   ref: NexMatchLeaveSessionJob::GetMatchmakeSessionOwners
*/
void nex_NexMatchLeaveSessionJob_LeaveMesh(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1705520ULL || rel >= 0x1705670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01705670 size=352 callers=0 calls=3
   calls: sub_16a8390, sub_16e4cf0, sub_1735a20
   ref: NexMatchLeaveSessionJob::WaitMigrateMatchmakeSessionOwner
*/
void NexMatchLeaveSessionJob_WaitMigrateMatchmakeSessionOwner(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1705670ULL || rel >= 0x17057d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017057d0 size=272 callers=0 calls=3
   calls: sub_165e060, sub_16e4e50, sub_172be20
   ref: nex::NexMatchLeaveSessionJob::SendMonitoringData
   ref: nex::NexMatchLeaveSessionJob::LeaveMesh
*/
void nex_NexMatchLeaveSessionJob_LeaveMesh_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17057d0ULL || rel >= 0x17058e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017058e0 size=896 callers=0 calls=8
   calls: LeaveSessionJob_LeaveBufferMatchmakeSession, sub_16e33c0, sub_16ee550, sub_16ef830, sub_16ef860, sub_16efcd0, sub_16efd90, sub_172be20
   ref: NexMatchLeaveSessionJob::WaitLeaveMatchmakeSessionCompanions
   ref: nex::NexMatchLeaveSessionJob::SendMonitoringData
   ref: LeaveSessionJob::LeaveCurrentMatchmakeSession
   ref: nex::NexMatchLeaveSessionJob::LeaveMesh
*/
void nex_NexMatchLeaveSessionJob_LeaveMesh_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17058e0ULL || rel >= 0x1705c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01705c60 size=256 callers=0 calls=3
   calls: sub_165e060, sub_16e3620, sub_172be20
   ref: nex::NexMatchLeaveSessionJob::SendMonitoringData
   ref: NexMatchLeaveSessionJob::LeaveMatchmakeSessionCompanions
   ref: nex::NexMatchLeaveSessionJob::LeaveMesh
*/
void nex_NexMatchLeaveSessionJob_LeaveMesh_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1705c60ULL || rel >= 0x1705d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01705d60 size=304 callers=4 calls=5
   calls: sub_16c6860, sub_16ef5f0, sub_16ef830, sub_16ef860, sub_172e120
   ref: LeaveSessionJob::LeaveBufferMatchmakeSession
*/
void LeaveSessionJob_LeaveBufferMatchmakeSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1705d60ULL || rel >= 0x1705e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01705e90 size=32 callers=0 calls=0
   ref: NexMatchLeaveSessionJob::MigrateMatchmakeSessionOwner
*/
void NexMatchLeaveSessionJob_MigrateMatchmakeSessionOwner(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1705e90ULL || rel >= 0x1705eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01705eb0 size=32 callers=0 calls=0
   ref: NexMatchLeaveSessionJob::LeaveMatchmakeSessionCompanions
*/
void NexMatchLeaveSessionJob_LeaveMatchmakeSessionCompanions(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1705eb0ULL || rel >= 0x1705ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01705ed0 size=80 callers=0 calls=1
   calls: LeaveSessionJob_LeaveBufferMatchmakeSession
   ref: LeaveSessionJob::LeaveCurrentMatchmakeSession
*/
void LeaveSessionJob_LeaveCurrentMatchmakeSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1705ed0ULL || rel >= 0x1705f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01705f20 size=80 callers=0 calls=1
   calls: LeaveSessionJob_LeaveBufferMatchmakeSession
   ref: LeaveSessionJob::SendMonitoringData
*/
void LeaveSessionJob_SendMonitoringData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1705f20ULL || rel >= 0x1705f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01705f70 size=80 callers=0 calls=1
   calls: LeaveSessionJob_LeaveBufferMatchmakeSession
   ref: LeaveSessionJob::SendMonitoringData
*/
void LeaveSessionJob_SendMonitoringData_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1705f70ULL || rel >= 0x1705fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01705fc0 size=48 callers=0 calls=0
*/
void sub_1705fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1705fc0ULL || rel >= 0x1705ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01705ff0 size=16 callers=0 calls=0
*/
void sub_1705ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1705ff0ULL || rel >= 0x1706000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01706000 size=112 callers=0 calls=0
*/
void sub_1706000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1706000ULL || rel >= 0x1706070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01706070 size=16 callers=0 calls=0
*/
void sub_1706070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1706070ULL || rel >= 0x1706080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01706080 size=64 callers=1 calls=1
   calls: sub_1722980
*/
void sub_1706080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1706080ULL || rel >= 0x17060c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017060c0 size=16 callers=0 calls=0
*/
void sub_17060c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17060c0ULL || rel >= 0x17060d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017060d0 size=48 callers=0 calls=1
   calls: sub_17229e0
*/
void sub_17060d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17060d0ULL || rel >= 0x1706100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01706100 size=448 callers=0 calls=10
   calls: sub_165e060, sub_16c4e00, sub_16c5140, sub_16e6e40, sub_16ef830, sub_16ef860, sub_1723380, sub_172c120, sub_172dec0, sub_172e150
   ref: NexMatchCreateSessionJob::LeaveJoinedMatchmakeSession
*/
void NexMatchCreateSessionJob_LeaveJoinedMatchmakeSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1706100ULL || rel >= 0x17062c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017062c0 size=528 callers=0 calls=3
   calls: sub_1655110, sub_165e140, sub_172be20
   ref: NexMatchCreateSessionJob::CompleteFailure
   ref: NexMatchCreateSessionJob::WaitLeaveJoinedMatchmakeSession
   ref: nex::NexMatchCreateSessionJob::CompleteFailure
   ref: NexMatchCreateSessionJob::CreateMatchmakeSession
*/
void NexMatchCreateSessionJob_CompleteFailure(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17062c0ULL || rel >= 0x17064d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017064d0 size=416 callers=0 calls=5
   calls: sub_1655220, sub_165e060, sub_165e140, sub_16ef3d0, sub_172be20
   ref: nex::NexMatchCreateSessionJob::CompleteFailure
   ref: NexMatchCreateSessionJob::WaitCreateMatchmake
*/
void NexMatchCreateSessionJob_WaitCreateMatchmake(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17064d0ULL || rel >= 0x1706670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01706670 size=464 callers=0 calls=3
   calls: sub_165e060, sub_165e140, sub_172be20
   ref: NexMatchCreateSessionJob::LeaveJoinedMatchmakeSession
   ref: nex::NexMatchCreateSessionJob::CompleteFailure
*/
void nex_NexMatchCreateSessionJob_CompleteFailure(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1706670ULL || rel >= 0x1706840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01706840 size=432 callers=0 calls=7
   calls: sub_165c6b0, sub_165e060, sub_165e140, sub_17231d0, sub_172be20, sub_172e0d0, sub_172e100
   ref: NexMatchCreateSessionJob::WaitNotification
   ref: nex::NexMatchCreateSessionJob::CompleteFailure
   ref: NexMatchCreateSessionJob::UnregisterGathering
*/
void NexMatchCreateSessionJob_WaitNotification(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1706840ULL || rel >= 0x17069f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017069f0 size=320 callers=0 calls=2
   calls: sub_165e140, sub_172be20
   ref: NexMatchCreateSessionJob::CompleteFailure
   ref: NexMatchCreateSessionJob::WaitUnregisterGathering
   ref: nex::NexMatchCreateSessionJob::CompleteFailure
*/
void NexMatchCreateSessionJob_CompleteFailure_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17069f0ULL || rel >= 0x1706b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01706b30 size=816 callers=0 calls=4
   calls: sub_165c6b0, sub_165e140, sub_16ee550, sub_172be20
   ref: nex::NexMatchCreateSessionJob::CompleteFailure
   ref: NexMatchCreateSessionJob::UnregisterGathering
   ref: NexMatchCreateSessionJob::StartNatSession
*/
void NexMatchCreateSessionJob_StartNatSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1706b30ULL || rel >= 0x1706e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01706e60 size=128 callers=0 calls=2
   calls: sub_165e140, sub_16eed40
   ref: NexMatchCreateSessionJob::WaitStartNatSession
   ref: NexMatchCreateSessionJob::UnregisterGathering
*/
void NexMatchCreateSessionJob_WaitStartNatSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1706e60ULL || rel >= 0x1706ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01706ee0 size=1120 callers=0 calls=5
   calls: sub_165e060, sub_165e140, sub_16eedc0, sub_17231f0, sub_172be20
   ref: NexMatchCreateSessionJob::CompleteFailure
   ref: CreateSessionJob::MeshStartup
   ref: nex::NexMatchCreateSessionJob::CompleteFailure
   ref: NexMatchCreateSessionJob::UnregisterGathering
*/
void CreateSessionJob_MeshStartup_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1706ee0ULL || rel >= 0x1707340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01707340 size=32 callers=0 calls=0
   ref: CreateSessionJob::CompleteProcess
*/
void CreateSessionJob_CompleteProcess_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1707340ULL || rel >= 0x1707360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01707360 size=64 callers=0 calls=1
   calls: sub_165e140
   ref: NexMatchCreateSessionJob::UnregisterGathering
*/
void NexMatchCreateSessionJob_UnregisterGathering(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1707360ULL || rel >= 0x17073a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017073a0 size=496 callers=0 calls=4
   calls: sub_165e060, sub_165e140, sub_172be20, sub_172e100
   ref: NexMatchCreateSessionJob::CompleteFailure
   ref: nex::NexMatchCreateSessionJob::CompleteFailure
*/
void NexMatchCreateSessionJob_CompleteFailure_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17073a0ULL || rel >= 0x1707590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01707590 size=48 callers=0 calls=1
   calls: sub_1723250
*/
void sub_1707590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1707590ULL || rel >= 0x17075c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017075c0 size=16 callers=0 calls=0
*/
void sub_17075c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17075c0ULL || rel >= 0x17075d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017075d0 size=48 callers=1 calls=1
   calls: sub_1723400
*/
void sub_17075d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17075d0ULL || rel >= 0x1707600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01707600 size=16 callers=0 calls=0
*/
void sub_1707600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1707600ULL || rel >= 0x1707610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01707610 size=48 callers=0 calls=1
   calls: sub_1723440
*/
void sub_1707610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1707610ULL || rel >= 0x1707640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01707640 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_1707640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1707640ULL || rel >= 0x17076a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017076a0 size=32 callers=0 calls=0
   ref: NexMatchDestroySessionJob::MeshCleanup
*/
void NexMatchDestroySessionJob_MeshCleanup(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17076a0ULL || rel >= 0x17076c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017076c0 size=32 callers=0 calls=0
   ref: NexMatchDestroySessionJob::UnregisterBufferMatchmakeSession
*/
void NexMatchDestroySessionJob_UnregisterBufferMatchmakeSessi(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17076c0ULL || rel >= 0x17076e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017076e0 size=272 callers=0 calls=1
   calls: sub_172be20
   ref: NexMatchDestroySessionJob::WaitUnregisterBufferMatchmakeSession
   ref: nex::NexMatchDestroySessionJob::SendMonitoringData
   ref: NexMatchDestroySessionJob::UnregisterCurrentMatchmakeSession
*/
void nex_NexMatchDestroySessionJob_SendMonitoringData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17076e0ULL || rel >= 0x17077f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017077f0 size=304 callers=0 calls=1
   calls: sub_172be20
   ref: DestroySessionJob::SendMonitoringData
   ref: nex::NexMatchDestroySessionJob::SendMonitoringData
   ref: NexMatchDestroySessionJob::WaitUnregisterCurrentMatchmakeSession
*/
void DestroySessionJob_SendMonitoringData_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17077f0ULL || rel >= 0x1707920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01707920 size=288 callers=0 calls=3
   calls: sub_165e060, sub_172be20, sub_172e120
   ref: nex::NexMatchDestroySessionJob::SendMonitoringData
   ref: NexMatchDestroySessionJob::UnregisterCurrentMatchmakeSession
*/
void nex_NexMatchDestroySessionJob_SendMonitoringData_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1707920ULL || rel >= 0x1707a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01707a40 size=272 callers=0 calls=3
   calls: sub_165e060, sub_172be20, sub_172e100
   ref: DestroySessionJob::SendMonitoringData
   ref: nex::NexMatchDestroySessionJob::SendMonitoringData
*/
void DestroySessionJob_SendMonitoringData_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1707a40ULL || rel >= 0x1707b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01707b50 size=16 callers=0 calls=0
*/
void sub_1707b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1707b50ULL || rel >= 0x1707b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01707b60 size=16 callers=0 calls=0
*/
void sub_1707b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1707b60ULL || rel >= 0x1707b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01707b70 size=112 callers=1 calls=2
   calls: sub_1655080, sub_1722610
*/
void sub_1707b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1707b70ULL || rel >= 0x1707be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01707be0 size=64 callers=0 calls=1
   calls: sub_1655170
*/
void sub_1707be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1707be0ULL || rel >= 0x1707c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01707c20 size=64 callers=0 calls=2
   calls: sub_1655170, sub_1722650
*/
void sub_1707c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1707c20ULL || rel >= 0x1707c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01707c60 size=608 callers=0 calls=7
   calls: sub_165e060, sub_165e140, sub_16e7130, sub_16ec6b0, sub_16ecdc0, sub_16ed750, sub_1733de0
   ref: NexMatchBrowseMatchmakeJob::WaitFindSessionBySessionId
   ref: NexMatchBrowseMatchmakeJob::WaitFindSessionByOwner
   ref: NexMatchBrowseMatchmakeJob::BrowseMatchmake
   ref: NexMatchBrowseMatchmakeJob::WaitFindSessionByParticipant
*/
void NexMatchBrowseMatchmakeJob_BrowseMatchmake(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1707c60ULL || rel >= 0x1707ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01707ec0 size=496 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_16ec810, sub_172be20
   ref: session::BrowseMatchmakeJob::CompleteProcess
*/
void session_BrowseMatchmakeJob_CompleteProcess_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1707ec0ULL || rel >= 0x17080b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017080b0 size=496 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_16ed0e0, sub_172be20
   ref: session::BrowseMatchmakeJob::CompleteProcess
*/
void session_BrowseMatchmakeJob_CompleteProcess_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17080b0ULL || rel >= 0x17082a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017082a0 size=496 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_16ed950, sub_172be20
   ref: session::BrowseMatchmakeJob::CompleteProcess
*/
void session_BrowseMatchmakeJob_CompleteProcess_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17082a0ULL || rel >= 0x1708490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01708490 size=464 callers=0 calls=3
   calls: sub_1655220, sub_165e060, sub_172be20
   ref: NexMatchBrowseMatchmakeJob::WaitBrowseMatchmake
*/
void NexMatchBrowseMatchmakeJob_WaitBrowseMatchmake(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1708490ULL || rel >= 0x1708660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01708660 size=480 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_16dba70, sub_172be20
   ref: session::BrowseMatchmakeJob::CompleteProcess
*/
void session_BrowseMatchmakeJob_CompleteProcess_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1708660ULL || rel >= 0x1708840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01708840 size=256 callers=0 calls=2
   calls: sub_165e060, sub_165e140
   ref: NexMatchBrowseMatchmakeJob::WaitRequestSessionInfo
*/
void NexMatchBrowseMatchmakeJob_WaitRequestSessionInfo(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1708840ULL || rel >= 0x1708940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01708940 size=496 callers=0 calls=3
   calls: sub_1655220, sub_165e060, sub_172be20
   ref: session::BrowseMatchmakeJob::CompleteProcess
*/
void session_BrowseMatchmakeJob_CompleteProcess_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1708940ULL || rel >= 0x1708b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01708b30 size=80 callers=0 calls=3
   calls: sub_1655110, sub_1655290, sub_16dba70
*/
void sub_1708b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1708b30ULL || rel >= 0x1708b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01708b80 size=16 callers=0 calls=0
*/
void sub_1708b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1708b80ULL || rel >= 0x1708b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01708b90 size=80 callers=1 calls=1
   calls: sub_17279d0
*/
void sub_1708b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1708b90ULL || rel >= 0x1708be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01708be0 size=16 callers=0 calls=0
*/
void sub_1708be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1708be0ULL || rel >= 0x1708bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01708bf0 size=48 callers=0 calls=1
   calls: sub_1727a50
*/
void sub_1708bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1708bf0ULL || rel >= 0x1708c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01708c20 size=528 callers=0 calls=10
   calls: sub_165e060, sub_16c4e00, sub_16c5140, sub_16e6f10, sub_16ef830, sub_16ef860, sub_1723380, sub_172c120, sub_172dec0, sub_172e150
   ref: NexMatchRandomMatchmakeJob::LeaveJoinedMatchmakeSession
*/
void NexMatchRandomMatchmakeJob_LeaveJoinedMatchmakeSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1708c20ULL || rel >= 0x1708e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01708e30 size=528 callers=0 calls=3
   calls: sub_1655110, sub_165e140, sub_172be20
   ref: NexMatchRandomMatchmakeJob::CompleteFailure
   ref: nex::NexMatchRandomMatchmakeJob::CompleteFailure
   ref: NexMatchRandomMatchmakeJob::RandomMatchmake
   ref: NexMatchRandomMatchmakeJob::WaitLeaveJoinedMatchmakeSession
*/
void NexMatchRandomMatchmakeJob_RandomMatchmake(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1708e30ULL || rel >= 0x1709040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01709040 size=496 callers=0 calls=7
   calls: sub_1655220, sub_165e060, sub_165e140, sub_16dba70, sub_16ef3d0, sub_1728c10, sub_172be20
   ref: NexMatchRandomMatchmakeJob::CompleteFailure
   ref: nex::NexMatchRandomMatchmakeJob::CompleteFailure
   ref: NexMatchRandomMatchmakeJob::WaitRandomMatchmake
*/
void NexMatchRandomMatchmakeJob_CompleteFailure(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1709040ULL || rel >= 0x1709230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01709230 size=496 callers=0 calls=3
   calls: sub_165e060, sub_165e140, sub_172be20
   ref: nex::NexMatchRandomMatchmakeJob::CompleteFailure
   ref: NexMatchRandomMatchmakeJob::LeaveJoinedMatchmakeSession
*/
void nex_NexMatchRandomMatchmakeJob_CompleteFailure(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1709230ULL || rel >= 0x1709420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01709420 size=608 callers=0 calls=11
   calls: sub_165c6b0, sub_165e060, sub_165e140, sub_16dba70, sub_16ee090, sub_16ee0a0, sub_16ee550, sub_1729140, sub_172be20, sub_172e0d0, sub_172e100
   ref: NexMatchRandomMatchmakeJob::WaitNotification
   ref: nex::NexMatchRandomMatchmakeJob::CompleteFailure
   ref: NexMatchRandomMatchmakeJob::LeaveMatchmakeSession
*/
void NexMatchRandomMatchmakeJob_WaitNotification(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1709420ULL || rel >= 0x1709680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01709680 size=2032 callers=0 calls=13
   calls: sub_1655110, sub_165e140, sub_16c6860, sub_16e33c0, sub_16ee550, sub_16ef5f0, sub_16ef830, sub_16ef860, sub_16efcd0, sub_16efd90, sub_172be20, sub_172e100
   ... +1 more
   ref: NexMatchRandomMatchmakeJob::WaitLeaveBufferMatchmakeSession
   ref: NexMatchRandomMatchmakeJob::CompleteFailure
   ref: nex::NexMatchRandomMatchmakeJob::CompleteFailure
   ref: NexMatchRandomMatchmakeJob::WaitLeaveCurrentMatchmakeSession
   ref: NexMatchRandomMatchmakeJob::WaitLeaveMatchmakeSessionCompanions
*/
void NexMatchRandomMatchmakeJob_CompleteFailure_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1709680ULL || rel >= 0x1709e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01709e70 size=768 callers=0 calls=5
   calls: sub_165c6b0, sub_165e140, sub_16ee550, sub_1728c10, sub_172be20
   ref: nex::NexMatchRandomMatchmakeJob::CompleteFailure
   ref: NexMatchRandomMatchmakeJob::StartNatSession
   ref: NexMatchRandomMatchmakeJob::LeaveMatchmakeSession
*/
void NexMatchRandomMatchmakeJob_StartNatSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1709e70ULL || rel >= 0x170a170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170a170 size=224 callers=0 calls=3
   calls: sub_165e140, sub_16eed40, sub_1728c10
   ref: NexMatchRandomMatchmakeJob::WaitStartNatSession
   ref: NexMatchRandomMatchmakeJob::LeaveMatchmakeSession
*/
void NexMatchRandomMatchmakeJob_WaitStartNatSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170a170ULL || rel >= 0x170a250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170a250 size=1136 callers=0 calls=7
   calls: sub_165e060, sub_165e140, sub_16eedc0, sub_16eee80, sub_1728c10, sub_1729160, sub_172be20
   ref: RandomMatchmakeJob::MeshStartup
   ref: NexMatchRandomMatchmakeJob::CompleteFailure
   ref: nex::NexMatchRandomMatchmakeJob::CompleteFailure
   ref: NexMatchRandomMatchmakeJob::LeaveMatchmakeSession
*/
void RandomMatchmakeJob_MeshStartup_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170a250ULL || rel >= 0x170a6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170a6c0 size=32 callers=0 calls=0
   ref: RandomMatchmakeJob::CompleteProcess
*/
void RandomMatchmakeJob_CompleteProcess_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170a6c0ULL || rel >= 0x170a6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170a6e0 size=64 callers=0 calls=1
   calls: sub_165e140
   ref: NexMatchRandomMatchmakeJob::LeaveMatchmakeSession
*/
void NexMatchRandomMatchmakeJob_LeaveMatchmakeSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170a6e0ULL || rel >= 0x170a720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170a720 size=160 callers=0 calls=3
   calls: sub_1713c40, sub_1713df0, sub_172be90
   ref: RandomMatchmakeJob::CompleteProcess
*/
void RandomMatchmakeJob_CompleteProcess_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170a720ULL || rel >= 0x170a7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170a7c0 size=928 callers=0 calls=2
   calls: sub_165e140, sub_1735840
   ref: NexMatchRandomMatchmakeJob::CleanupForRetryJoinMesh
   ref: NexMatchRandomMatchmakeJob::LeaveMatchmakeSession
*/
void NexMatchRandomMatchmakeJob_LeaveMatchmakeSession_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170a7c0ULL || rel >= 0x170ab60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170ab60 size=432 callers=0 calls=2
   calls: sub_165c6b0, sub_1735840
   ref: NexMatchRandomMatchmakeJob::StartNatSession
   ref: NexMatchRandomMatchmakeJob::WaitForRetryJoinMesh
   ref: NexMatchRandomMatchmakeJob::LeaveMatchmakeSession
*/
void NexMatchRandomMatchmakeJob_StartNatSession_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170ab60ULL || rel >= 0x170ad10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170ad10 size=32 callers=0 calls=0
   ref: NexMatchRandomMatchmakeJob::LeaveMatchmakeSession
*/
void NexMatchRandomMatchmakeJob_LeaveMatchmakeSession_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170ad10ULL || rel >= 0x170ad30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170ad30 size=272 callers=0 calls=4
   calls: sub_165e060, sub_165e140, sub_16e3620, sub_172be20
   ref: nex::NexMatchRandomMatchmakeJob::CompleteFailure
   ref: NexMatchRandomMatchmakeJob::LeaveMatchmakeSession
*/
void nex_NexMatchRandomMatchmakeJob_CompleteFailure_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170ad30ULL || rel >= 0x170ae40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170ae40 size=512 callers=0 calls=4
   calls: sub_165e060, sub_165e140, sub_172be20, sub_172e120
   ref: nex::NexMatchRandomMatchmakeJob::CompleteFailure
   ref: NexMatchRandomMatchmakeJob::LeaveMatchmakeSession
*/
void nex_NexMatchRandomMatchmakeJob_CompleteFailure_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170ae40ULL || rel >= 0x170b040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170b040 size=528 callers=0 calls=4
   calls: sub_165e060, sub_165e140, sub_172be20, sub_172e100
   ref: nex::NexMatchRandomMatchmakeJob::CompleteFailure
   ref: NexMatchRandomMatchmakeJob::LeaveMatchmakeSession
*/
void nex_NexMatchRandomMatchmakeJob_CompleteFailure_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170b040ULL || rel >= 0x170b250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170b250 size=320 callers=0 calls=7
   calls: sub_165c6b0, sub_16a6bd0, sub_16a7c60, sub_16a8010, sub_16a8080, sub_16c6860, sub_172c050
*/
void sub_170b250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170b250ULL || rel >= 0x170b390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170b390 size=32 callers=0 calls=0
*/
void sub_170b390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170b390ULL || rel >= 0x170b3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170b3b0 size=496 callers=0 calls=4
   calls: sub_165e140, sub_16c6860, sub_172be20, sub_172c050
   ref: nex::NexMatchRandomMatchmakeJob::CompleteFailure
   ref: NexMatchRandomMatchmakeJob::StartNatSession
   ref: NexMatchRandomMatchmakeJob::ChangeParticipation
   ref: NexMatchRandomMatchmakeJob::LeaveMatchmakeSession
*/
void NexMatchRandomMatchmakeJob_StartNatSession_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170b3b0ULL || rel >= 0x170b5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170b5a0 size=480 callers=0 calls=3
   calls: sub_165e140, sub_1728c10, sub_172be20
   ref: nex::NexMatchRandomMatchmakeJob::CompleteFailure
   ref: NexMatchRandomMatchmakeJob::LeaveMatchmakeSession
   ref: NexMatchRandomMatchmakeJob::WaitChangeParticipation
*/
void nex_NexMatchRandomMatchmakeJob_CompleteFailure_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170b5a0ULL || rel >= 0x170b780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170b780 size=512 callers=0 calls=4
   calls: sub_165e060, sub_165e140, sub_172be20, sub_172e0d0
   ref: nex::NexMatchRandomMatchmakeJob::CompleteFailure
   ref: NexMatchRandomMatchmakeJob::StartNatSession
   ref: NexMatchRandomMatchmakeJob::LeaveMatchmakeSession
*/
void NexMatchRandomMatchmakeJob_StartNatSession_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170b780ULL || rel >= 0x170b980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170b980 size=64 callers=0 calls=1
   calls: sub_16dba70
*/
void sub_170b980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170b980ULL || rel >= 0x170b9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170b9c0 size=16 callers=0 calls=0
*/
void sub_170b9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170b9c0ULL || rel >= 0x170b9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170b9d0 size=48 callers=1 calls=1
   calls: sub_16a3b70
*/
void sub_170b9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170b9d0ULL || rel >= 0x170ba00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170ba00 size=16 callers=0 calls=0
*/
void sub_170ba00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170ba00ULL || rel >= 0x170ba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170ba10 size=48 callers=0 calls=1
   calls: sub_16a3bd0
*/
void sub_170ba10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170ba10ULL || rel >= 0x170ba40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170ba40 size=1120 callers=0 calls=3
   calls: sub_16a5480, sub_16a7a50, sub_16a7ea0
*/
void sub_170ba40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170ba40ULL || rel >= 0x170bea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170bea0 size=16 callers=0 calls=0
*/
void sub_170bea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170bea0ULL || rel >= 0x170beb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170beb0 size=64 callers=1 calls=1
   calls: sub_17312c0
*/
void sub_170beb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170beb0ULL || rel >= 0x170bef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170bef0 size=16 callers=0 calls=0
*/
void sub_170bef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170bef0ULL || rel >= 0x170bf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170bf00 size=48 callers=0 calls=1
   calls: sub_1731300
*/
void sub_170bf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170bf00ULL || rel >= 0x170bf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170bf30 size=144 callers=0 calls=1
   calls: sub_165e060
   ref: NexMatchClearSystemPasswordJob::ClearMatchmakeSystemPassword
*/
void NexMatchClearSystemPasswordJob_ClearMatchmakeSystemPassw(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170bf30ULL || rel >= 0x170bfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170bfc0 size=528 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_16e0640, sub_172be20
   ref: NexMatchClearSystemPasswordJob::WaitClearMatchmakeSystemPassword
*/
void NexMatchClearSystemPasswordJob_WaitClearMatchmakeSystemP(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170bfc0ULL || rel >= 0x170c1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170c1d0 size=544 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_16e0700, sub_172be20
   ref: ClearMatchmakeSystemPasswordJob::CompleteProcess
*/
void ClearMatchmakeSystemPasswordJob_CompleteProcess(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170c1d0ULL || rel >= 0x170c3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170c3f0 size=48 callers=0 calls=1
   calls: sub_17313d0
*/
void sub_170c3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170c3f0ULL || rel >= 0x170c420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170c420 size=16 callers=0 calls=0
*/
void sub_170c420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170c420ULL || rel >= 0x170c430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170c430 size=64 callers=1 calls=1
   calls: sub_17311d0
*/
void sub_170c430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170c430ULL || rel >= 0x170c470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170c470 size=16 callers=0 calls=0
*/
void sub_170c470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170c470ULL || rel >= 0x170c480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170c480 size=48 callers=0 calls=1
   calls: sub_1731210
*/
void sub_170c480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170c480ULL || rel >= 0x170c4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170c4b0 size=496 callers=0 calls=10
   calls: sub_165e060, sub_16eab60, sub_170e810, sub_170e820, sub_170e830, sub_170e840, sub_170e850, sub_17315c0, sub_17315d0, sub_17315e0
   ref: NexMatchCommunityManagementJob::FindCommunityByParticipant
   ref: NexMatchCommunityManagementJob::FindOfficialCommunity
   ref: NexMatchCommunityManagementJob::FindCommunityByOwner
   ref: NexMatchCommunityManagementJob::FindCommunityByCommunityId
*/
void NexMatchCommunityManagementJob_FindCommunityByOwner(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170c4b0ULL || rel >= 0x170c6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170c6a0 size=144 callers=0 calls=3
   calls: sub_1655220, sub_165e060, sub_16eac70
   ref: NexMatchCommunityManagementJob::WaitFindCommunityByCommunityId
*/
void NexMatchCommunityManagementJob_WaitFindCommunityByCommun(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170c6a0ULL || rel >= 0x170c730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170c730 size=160 callers=0 calls=3
   calls: sub_1655220, sub_165e060, sub_16ec040
   ref: NexMatchCommunityManagementJob::WaitFindCommunityByOwner
*/
void NexMatchCommunityManagementJob_WaitFindCommunityByOwner(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170c730ULL || rel >= 0x170c7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170c7d0 size=160 callers=0 calls=3
   calls: sub_1655220, sub_165e060, sub_16eb360
   ref: NexMatchCommunityManagementJob::WaitFindCommunityByParticipant
*/
void NexMatchCommunityManagementJob_WaitFindCommunityByPartic(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170c7d0ULL || rel >= 0x170c870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170c870 size=160 callers=0 calls=3
   calls: sub_1655220, sub_165e060, sub_16eb9d0
   ref: NexMatchCommunityManagementJob::WaitFindOfficialCommunity
*/
void NexMatchCommunityManagementJob_WaitFindOfficialCommunity(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170c870ULL || rel >= 0x170c910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170c910 size=512 callers=0 calls=5
   calls: sub_16551b0, sub_1655220, sub_165e060, sub_16ead50, sub_172be20
*/
void sub_170c910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170c910ULL || rel >= 0x170cb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170cb10 size=512 callers=0 calls=5
   calls: sub_16551b0, sub_1655220, sub_165e060, sub_16eb450, sub_172be20
*/
void sub_170cb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170cb10ULL || rel >= 0x170cd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170cd10 size=512 callers=0 calls=5
   calls: sub_16551b0, sub_1655220, sub_165e060, sub_16ebac0, sub_172be20
*/
void sub_170cd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170cd10ULL || rel >= 0x170cf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170cf10 size=512 callers=0 calls=5
   calls: sub_16551b0, sub_1655220, sub_165e060, sub_16ec130, sub_172be20
*/
void sub_170cf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170cf10ULL || rel >= 0x170d110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170d110 size=224 callers=0 calls=2
   calls: sub_165e060, sub_16e81b0
   ref: NexMatchCommunityManagementJob::CreateCommunity
*/
void NexMatchCommunityManagementJob_CreateCommunity(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170d110ULL || rel >= 0x170d1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170d1f0 size=448 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_16e9360, sub_172be20
   ref: NexMatchCommunityManagementJob::WaitCreateCommunity
*/
void NexMatchCommunityManagementJob_WaitCreateCommunity(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170d1f0ULL || rel >= 0x170d3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170d3b0 size=512 callers=0 calls=5
   calls: sub_16551b0, sub_1655220, sub_165e060, sub_16e94b0, sub_172be20
*/
void sub_170d3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170d3b0ULL || rel >= 0x170d5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170d5b0 size=224 callers=0 calls=2
   calls: sub_165e060, sub_16e8740
   ref: NexMatchCommunityManagementJob::JoinCommunity
*/
void NexMatchCommunityManagementJob_JoinCommunity(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170d5b0ULL || rel >= 0x170d690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170d690 size=448 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_16e99a0, sub_172be20
   ref: NexMatchCommunityManagementJob::WaitJoinCommunity
*/
void NexMatchCommunityManagementJob_WaitJoinCommunity(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170d690ULL || rel >= 0x170d850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170d850 size=512 callers=0 calls=5
   calls: sub_16551b0, sub_1655220, sub_165e060, sub_16e9af0, sub_172be20
*/
void sub_170d850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170d850ULL || rel >= 0x170da50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170da50 size=224 callers=0 calls=2
   calls: sub_165e060, sub_16e8890
   ref: NexMatchCommunityManagementJob::UpdateCommunity
*/
void NexMatchCommunityManagementJob_UpdateCommunity(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170da50ULL || rel >= 0x170db30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170db30 size=448 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_16ea0d0, sub_172be20
   ref: NexMatchCommunityManagementJob::WaitUpdateCommunity
*/
void NexMatchCommunityManagementJob_WaitUpdateCommunity(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170db30ULL || rel >= 0x170dcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170dcf0 size=512 callers=0 calls=5
   calls: sub_16551b0, sub_1655220, sub_165e060, sub_16ea1a0, sub_172be20
*/
void sub_170dcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170dcf0ULL || rel >= 0x170def0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170def0 size=160 callers=0 calls=1
   calls: sub_165e060
   ref: NexMatchCommunityManagementJob::DestroyCommunity
*/
void NexMatchCommunityManagementJob_DestroyCommunity(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170def0ULL || rel >= 0x170df90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170df90 size=464 callers=0 calls=3
   calls: sub_1655220, sub_165e060, sub_172be20
   ref: NexMatchCommunityManagementJob::WaitDestroyCommunity
*/
void NexMatchCommunityManagementJob_WaitDestroyCommunity(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170df90ULL || rel >= 0x170e160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170e160 size=512 callers=0 calls=4
   calls: sub_16551b0, sub_1655220, sub_165e060, sub_172be20
*/
void sub_170e160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170e160ULL || rel >= 0x170e360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170e360 size=160 callers=0 calls=1
   calls: sub_165e060
   ref: NexMatchCommunityManagementJob::LeaveCommunity
*/
void NexMatchCommunityManagementJob_LeaveCommunity(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170e360ULL || rel >= 0x170e400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170e400 size=464 callers=0 calls=3
   calls: sub_1655220, sub_165e060, sub_172be20
   ref: NexMatchCommunityManagementJob::WaitLeaveCommunity
*/
void NexMatchCommunityManagementJob_WaitLeaveCommunity(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170e400ULL || rel >= 0x170e5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170e5d0 size=512 callers=0 calls=4
   calls: sub_16551b0, sub_1655220, sub_165e060, sub_172be20
*/
void sub_170e5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170e5d0ULL || rel >= 0x170e7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170e7d0 size=48 callers=0 calls=1
   calls: sub_1731260
*/
void sub_170e7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170e7d0ULL || rel >= 0x170e800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170e800 size=16 callers=0 calls=0
*/
void sub_170e800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170e800ULL || rel >= 0x170e810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170e810 size=16 callers=1 calls=0
*/
void sub_170e810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170e810ULL || rel >= 0x170e820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170e820 size=16 callers=1 calls=0
*/
void sub_170e820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170e820ULL || rel >= 0x170e830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170e830 size=16 callers=1 calls=0
*/
void sub_170e830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170e830ULL || rel >= 0x170e840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170e840 size=16 callers=2 calls=0
*/
void sub_170e840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170e840ULL || rel >= 0x170e850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170e850 size=16 callers=1 calls=0
*/
void sub_170e850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170e850ULL || rel >= 0x170e860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170e860 size=64 callers=1 calls=1
   calls: sub_1735df0
*/
void sub_170e860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170e860ULL || rel >= 0x170e8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170e8a0 size=16 callers=0 calls=0
*/
void sub_170e8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170e8a0ULL || rel >= 0x170e8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170e8b0 size=48 callers=0 calls=1
   calls: sub_1735e30
*/
void sub_170e8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170e8b0ULL || rel >= 0x170e8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170e8e0 size=848 callers=0 calls=9
   calls: sub_165e060, sub_16e75a0, sub_1715cf0, sub_1715d00, sub_17160c0, sub_1716100, sub_1716190, sub_17161e0, sub_172be20
   ref: NexMatchUpdateSessionSettingJob::UpdateSessionSetting
   ref: NexMatchUpdateSessionSettingJob::UpdateAttributes
   ref: NexMatchUpdateSessionSettingJob::UpdateApplicationData
   ref: NexMatchUpdateSessionSettingJob::ModifyAttribute
*/
void NexMatchUpdateSessionSettingJob_ModifyAttribute(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170e8e0ULL || rel >= 0x170ec30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170ec30 size=528 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_16e54c0, sub_172be20
   ref: NexMatchUpdateSessionSettingJob::WaitUpdateApplicationData
*/
void NexMatchUpdateSessionSettingJob_WaitUpdateApplicationDat(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170ec30ULL || rel >= 0x170ee40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170ee40 size=528 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_16e4790, sub_172be20
   ref: NexMatchUpdateSessionSettingJob::WaitUpdateAttributes
*/
void NexMatchUpdateSessionSettingJob_WaitUpdateAttributes(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170ee40ULL || rel >= 0x170f050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170f050 size=688 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_16e4230, sub_172be20
   ref: NexMatchUpdateSessionSettingJob::WaitModifyAttribute
   ref: UpdateSessionSettingJob::CompleteProcess
*/
void UpdateSessionSettingJob_CompleteProcess_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170f050ULL || rel >= 0x170f300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170f300 size=528 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_16e8db0, sub_172be20
   ref: NexMatchUpdateSessionSettingJob::WaitUpdateSessionSetting
*/
void NexMatchUpdateSessionSettingJob_WaitUpdateSessionSetting(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170f300ULL || rel >= 0x170f510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170f510 size=80 callers=0 calls=1
   calls: sub_1736030
*/
void sub_170f510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170f510ULL || rel >= 0x170f560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170f560 size=624 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_16e8e90, sub_172be20
   ref: UpdateSessionSettingJob::CompleteProcess
*/
void UpdateSessionSettingJob_CompleteProcess_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170f560ULL || rel >= 0x170f7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170f7d0 size=544 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_16e4300, sub_172be20
   ref: UpdateSessionSettingJob::CompleteProcess
*/
void UpdateSessionSettingJob_CompleteProcess_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170f7d0ULL || rel >= 0x170f9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170f9f0 size=544 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_16e4860, sub_172be20
   ref: UpdateSessionSettingJob::CompleteProcess
*/
void UpdateSessionSettingJob_CompleteProcess_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170f9f0ULL || rel >= 0x170fc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170fc10 size=544 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_16e5790, sub_172be20
   ref: UpdateSessionSettingJob::CompleteProcess
*/
void UpdateSessionSettingJob_CompleteProcess_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170fc10ULL || rel >= 0x170fe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170fe30 size=16 callers=0 calls=0
*/
void sub_170fe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170fe30ULL || rel >= 0x170fe40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170fe40 size=64 callers=1 calls=1
   calls: sub_1731440
*/
void sub_170fe40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170fe40ULL || rel >= 0x170fe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170fe80 size=16 callers=0 calls=0
*/
void sub_170fe80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170fe80ULL || rel >= 0x170fe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170fe90 size=48 callers=0 calls=1
   calls: sub_1731480
*/
void sub_170fe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170fe90ULL || rel >= 0x170fec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170fec0 size=144 callers=0 calls=1
   calls: sub_165e060
   ref: NexMatchGenerateSystemPasswordJob::GenerateMatchmakeSystemPassword
*/
void NexMatchGenerateSystemPasswordJob_GenerateMatchmakeSyste(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170fec0ULL || rel >= 0x170ff50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0170ff50 size=528 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_16e00f0, sub_172be20
   ref: NexMatchGenerateSystemPasswordJob::WaitGenerateMatchmakeSystemPassword
*/
void NexMatchGenerateSystemPasswordJob_WaitGenerateMatchmakeS(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170ff50ULL || rel >= 0x1710160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01710160 size=544 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_16e01b0, sub_172be20
   ref: GenerateMatchmakeSystemPasswordJob::CompleteProcess
*/
void GenerateMatchmakeSystemPasswordJob_CompleteProcess(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1710160ULL || rel >= 0x1710380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01710380 size=48 callers=0 calls=1
   calls: sub_1731550
*/
void sub_1710380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1710380ULL || rel >= 0x17103b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017103b0 size=16 callers=0 calls=0
*/
void sub_17103b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17103b0ULL || rel >= 0x17103c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017103c0 size=64 callers=1 calls=1
   calls: sub_165ba50
*/
void sub_17103c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17103c0ULL || rel >= 0x1710400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01710400 size=64 callers=0 calls=1
   calls: InstanceTable_363
*/
void sub_1710400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1710400ULL || rel >= 0x1710440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01710440 size=64 callers=0 calls=2
   calls: InstanceTable_363, sub_165baa0
*/
void sub_1710440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1710440ULL || rel >= 0x1710480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01710480 size=96 callers=2 calls=3
   calls: CallContext, InstanceTable_206, sub_1655290
*/
void sub_1710480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1710480ULL || rel >= 0x17104e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017104e0 size=64 callers=1 calls=1
   calls: sub_165ff10
*/
void sub_17104e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17104e0ULL || rel >= 0x1710520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01710520 size=16 callers=0 calls=0
*/
void sub_1710520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1710520ULL || rel >= 0x1710530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01710530 size=16 callers=0 calls=0
*/
void sub_1710530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1710530ULL || rel >= 0x1710540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01710540 size=48 callers=0 calls=1
   calls: sub_165ff30
*/
void sub_1710540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1710540ULL || rel >= 0x1710570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01710570 size=48 callers=0 calls=1
   calls: sub_165ff30
*/
void sub_1710570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1710570ULL || rel >= 0x17105a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017105a0 size=336 callers=0 calls=8
   calls: sub_1653890, sub_165b950, sub_165b960, sub_165ba30, sub_165e060, sub_16c6880, sub_16d5170, sub_174de50
*/
void sub_17105a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17105a0ULL || rel >= 0x17106f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017106f0 size=16 callers=0 calls=0
*/
void sub_17106f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17106f0ULL || rel >= 0x1710700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01710700 size=256 callers=0 calls=4
   calls: sub_165c960, sub_165c9a0, sub_165c9b0, sub_165e060
*/
void sub_1710700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1710700ULL || rel >= 0x1710800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01710800 size=16 callers=0 calls=0
*/
void sub_1710800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1710800ULL || rel >= 0x1710810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01710810 size=1216 callers=0 calls=12
   calls: sub_1652ca0, sub_1652d30, sub_1653890, sub_165e060, sub_165e140, sub_1660970, sub_16c6880, sub_16d5170, sub_1710cd0, sub_1710e30, sub_1711020, sub_174de50
*/
void sub_1710810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1710810ULL || rel >= 0x1710cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01710cd0 size=352 callers=2 calls=6
   calls: sub_165e060, sub_16c6880, sub_16d5170, sub_1710e30, sub_1749cd0, sub_174de60
*/
void sub_1710cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1710cd0ULL || rel >= 0x1710e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01710e30 size=496 callers=2 calls=4
   calls: sub_165b3c0, sub_165b5f0, sub_165e060, sub_165e140
*/
void sub_1710e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1710e30ULL || rel >= 0x1711020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01711020 size=176 callers=1 calls=2
   calls: sub_165b770, sub_165e060
*/
void sub_1711020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1711020ULL || rel >= 0x17110d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017110d0 size=16 callers=0 calls=0
*/
void sub_17110d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17110d0ULL || rel >= 0x17110e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017110e0 size=16 callers=0 calls=0
*/
void sub_17110e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17110e0ULL || rel >= 0x17110f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017110f0 size=16 callers=0 calls=0
*/
void sub_17110f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17110f0ULL || rel >= 0x1711100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01711100 size=16 callers=0 calls=0
*/
void sub_1711100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1711100ULL || rel >= 0x1711110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01711110 size=16 callers=0 calls=0
*/
void sub_1711110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1711110ULL || rel >= 0x1711120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01711120 size=16 callers=0 calls=0
*/
void sub_1711120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1711120ULL || rel >= 0x1711130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01711130 size=16 callers=0 calls=0
*/
void sub_1711130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1711130ULL || rel >= 0x1711140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01711140 size=224 callers=1 calls=5
   calls: sub_1633be0, sub_1652bd0, sub_1655080, sub_16b57a0, sub_17162d0
*/
void sub_1711140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1711140ULL || rel >= 0x1711220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01711220 size=384 callers=1 calls=5
   calls: InstanceTable_206, sub_15b9390, sub_1655170, sub_16c7ef0, sub_1716390
*/
void sub_1711220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1711220ULL || rel >= 0x17113a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017113a0 size=48 callers=0 calls=1
   calls: sub_1711220
*/
void sub_17113a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17113a0ULL || rel >= 0x17113d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017113d0 size=16 callers=0 calls=0
*/
void sub_17113d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17113d0ULL || rel >= 0x17113e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017113e0 size=288 callers=0 calls=6
   calls: CallContext, InstanceTable_206, sub_15b24c0, sub_165c6b0, sub_16b5dc0, sub_172be20
   ref: NexProcessHostMigrationJob::HostMigrationFailure
   ref: NexProcessHostMigrationJob::WaitAfterPrepareForBecomingHost
*/
void NexProcessHostMigrationJob_HostMigrationFailure(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17113e0ULL || rel >= 0x1711500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01711500 size=480 callers=0 calls=4
   calls: CallContext, InstanceTable_206, sub_16b5e60, sub_172be20
   ref: NexProcessHostMigrationJob::HostMigrationFailure
   ref: NexProcessHostMigrationJob::SendGreetingMessage
*/
void NexProcessHostMigrationJob_SendGreetingMessage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1711500ULL || rel >= 0x17116e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017116e0 size=256 callers=0 calls=4
   calls: sub_165c6b0, sub_16a7a50, sub_16b5c20, sub_16b71b0
   ref: NexProcessHostMigrationJob::NexSendRankDecision
*/
void NexProcessHostMigrationJob_NexSendRankDecision(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17116e0ULL || rel >= 0x17117e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017117e0 size=1312 callers=0 calls=6
   calls: sub_165c6b0, sub_16a5480, sub_16a77c0, sub_16a7ea0, sub_16a7ec0, sub_16af560
   ref: NexProcessHostMigrationJob::HostMigrationFailure
   ref: NexProcessHostMigrationJob::NexWaitRankDecision
   ref: ProcessHostMigrationJob::HostMigrationFailure
*/
void ProcessHostMigrationJob_HostMigrationFailure_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17117e0ULL || rel >= 0x1711d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01711d00 size=624 callers=0 calls=1
   calls: sub_16a77c0
   ref: NexProcessHostMigrationJob::HostMigrationFailure
   ref: NexProcessHostMigrationJob::NexGetMatchMakingClientHost
   ref: NexProcessHostMigrationJob::WaitNewHostGreeting
*/
void NexProcessHostMigrationJob_WaitNewHostGreeting(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1711d00ULL || rel >= 0x1711f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01711f70 size=368 callers=0 calls=5
   calls: CallContext, InstanceTable_206, sub_15b2710, sub_16a77c0, sub_172c050
   ref: NexProcessHostMigrationJob::HostMigrationFailure
   ref: ProcessHostMigrationJob::HostMigrationFailure
   ref: NexProcessHostMigrationJob::NexWaitMatchMakingClientHost
   ref: NexProcessHostMigrationJob::NexPrepareForBecomingHostMulti
*/
void ProcessHostMigrationJob_HostMigrationFailure_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1711f70ULL || rel >= 0x17120e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017120e0 size=192 callers=0 calls=4
   calls: sub_165c6b0, sub_16a7ea0, sub_16a8380, sub_16c1160
   ref: NexProcessHostMigrationJob::NexPrepareForBecomingHost
*/
void NexProcessHostMigrationJob_NexPrepareForBecomingHost(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17120e0ULL || rel >= 0x17121a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017121a0 size=1424 callers=0 calls=9
   calls: InstanceTable_206, sub_15e9080, sub_165c6b0, sub_16a5480, sub_16a77c0, sub_16a7ea0, sub_16a8370, sub_16b7af0, sub_16bfb90
   ref: NexProcessHostMigrationJob::HostMigrationFailure
   ref: NexProcessHostMigrationJob::NexCheckOldHostDisconnection
   ref: NexProcessHostMigrationJob::WaitNewHostGreeting
   ref: NexProcessHostMigrationJob::NexPrepareForBecomingHostMulti
*/
void NexProcessHostMigrationJob_WaitNewHostGreeting_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17121a0ULL || rel >= 0x1712730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01712730 size=1168 callers=0 calls=5
   calls: CallContext, InstanceTable_206, sub_15b2710, sub_165c6b0, sub_16a77c0
   ref: NexProcessHostMigrationJob::HostMigrationFailure
   ref: NexProcessHostMigrationJob::NexWaitCheckOldHostDisconnection
   ref: NexProcessHostMigrationJob::WaitNewHostGreeting
   ref: NexProcessHostMigrationJob::NexPrepareForBecomingHostMulti
*/
void NexProcessHostMigrationJob_WaitNewHostGreeting_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1712730ULL || rel >= 0x1712bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01712bc0 size=128 callers=0 calls=4
   calls: sub_1655110, sub_1655290, sub_16a8380, sub_16c1160
*/
void sub_1712bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1712bc0ULL || rel >= 0x1712c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01712c40 size=240 callers=0 calls=3
   calls: sub_16a8380, sub_16b5c20, sub_16c1160
   ref: NexProcessHostMigrationJob::NexSendRankDecision
*/
void NexProcessHostMigrationJob_NexSendRankDecision_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1712c40ULL || rel >= 0x1712d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01712d30 size=80 callers=0 calls=1
   calls: sub_165c6b0
   ref: NexProcessHostMigrationJob::UpdateSessionOpenStatus
*/
void NexProcessHostMigrationJob_UpdateSessionOpenStatus(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1712d30ULL || rel >= 0x1712d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01712d80 size=352 callers=0 calls=5
   calls: CallContext, InstanceTable_206, sub_159f0d0, sub_15a5450, sub_16a77c0
   ref: NexProcessHostMigrationJob::HostMigrationFailure
   ref: NexProcessHostMigrationJob::WaitUpdateSessionOpenStatus
   ref: ProcessHostMigrationJob::HostMigrationFailure
   ref: NexProcessHostMigrationJob::HostMigrationSuccess
*/
void ProcessHostMigrationJob_HostMigrationFailure_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1712d80ULL || rel >= 0x1712ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01712ee0 size=416 callers=0 calls=4
   calls: InstanceTable_206, sub_16a77c0, sub_172e0d0, sub_172e0e0
   ref: NexProcessHostMigrationJob::HostMigrationFailure
   ref: ProcessHostMigrationJob::HostMigrationFailure
   ref: NexProcessHostMigrationJob::SendMigrationFinish
*/
void ProcessHostMigrationJob_HostMigrationFailure_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1712ee0ULL || rel >= 0x1713080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713080 size=1248 callers=0 calls=5
   calls: InstanceTable_206, sub_15e9080, sub_165c6b0, sub_16a77c0, sub_16b7af0
   ref: NexProcessHostMigrationJob::HostMigrationFailure
   ref: NexProcessHostMigrationJob::NexCheckOldHostDisconnection
   ref: NexProcessHostMigrationJob::WaitNewHostGreeting
   ref: NexProcessHostMigrationJob::NexPrepareForBecomingHostMulti
*/
void NexProcessHostMigrationJob_WaitNewHostGreeting_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713080ULL || rel >= 0x1713560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713560 size=48 callers=0 calls=0
*/
void sub_1713560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713560ULL || rel >= 0x1713590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713590 size=64 callers=0 calls=0
   ref: NexProcessHostMigrationJob::NexCheckMatchMakingClientHostIsUpdated
*/
void NexProcessHostMigrationJob_NexCheckMatchMakingClientHost(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713590ULL || rel >= 0x17135d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017135d0 size=288 callers=0 calls=4
   calls: CallContext, InstanceTable_206, sub_15b2710, sub_16a77c0
   ref: NexProcessHostMigrationJob::HostMigrationFailure
   ref: ProcessHostMigrationJob::HostMigrationFailure
   ref: NexProcessHostMigrationJob::NexWaitMatchMakingClientHostIsUpdated
*/
void ProcessHostMigrationJob_HostMigrationFailure_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17135d0ULL || rel >= 0x17136f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017136f0 size=256 callers=0 calls=2
   calls: InstanceTable_206, sub_16a77c0
   ref: NexProcessHostMigrationJob::HostMigrationFailure
   ref: NexProcessHostMigrationJob::WaitNewHostGreeting
*/
void NexProcessHostMigrationJob_WaitNewHostGreeting_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17136f0ULL || rel >= 0x17137f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017137f0 size=80 callers=0 calls=1
   calls: sub_16c7ea0
*/
void sub_17137f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17137f0ULL || rel >= 0x1713840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713840 size=64 callers=0 calls=1
   calls: sub_16c7ef0
*/
void sub_1713840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713840ULL || rel >= 0x1713880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713880 size=16 callers=0 calls=0
*/
void sub_1713880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713880ULL || rel >= 0x1713890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713890 size=16 callers=0 calls=0
*/
void sub_1713890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713890ULL || rel >= 0x17138a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017138a0 size=80 callers=0 calls=0
*/
void sub_17138a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17138a0ULL || rel >= 0x17138f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017138f0 size=96 callers=0 calls=1
   calls: sub_16c8540
*/
void sub_17138f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17138f0ULL || rel >= 0x1713950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713950 size=48 callers=0 calls=1
   calls: sub_16b8b20
*/
void sub_1713950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713950ULL || rel >= 0x1713980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713980 size=160 callers=2 calls=0
*/
void sub_1713980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713980ULL || rel >= 0x1713a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713a20 size=16 callers=2 calls=0
*/
void sub_1713a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713a20ULL || rel >= 0x1713a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713a30 size=16 callers=0 calls=0
*/
void sub_1713a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713a30ULL || rel >= 0x1713a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713a40 size=128 callers=11 calls=0
*/
void sub_1713a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713a40ULL || rel >= 0x1713ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713ac0 size=240 callers=1 calls=0
*/
void sub_1713ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713ac0ULL || rel >= 0x1713bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713bb0 size=16 callers=0 calls=0
*/
void sub_1713bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713bb0ULL || rel >= 0x1713bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713bc0 size=16 callers=0 calls=0
*/
void sub_1713bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713bc0ULL || rel >= 0x1713bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713bd0 size=16 callers=0 calls=0
*/
void sub_1713bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713bd0ULL || rel >= 0x1713be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713be0 size=16 callers=0 calls=0
*/
void sub_1713be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713be0ULL || rel >= 0x1713bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713bf0 size=16 callers=0 calls=0
*/
void sub_1713bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713bf0ULL || rel >= 0x1713c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713c00 size=16 callers=0 calls=0
*/
void sub_1713c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713c00ULL || rel >= 0x1713c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713c10 size=16 callers=1 calls=0
*/
void sub_1713c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713c10ULL || rel >= 0x1713c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713c20 size=16 callers=1 calls=0
*/
void sub_1713c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713c20ULL || rel >= 0x1713c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713c30 size=16 callers=1 calls=0
*/
void sub_1713c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713c30ULL || rel >= 0x1713c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713c40 size=16 callers=3 calls=0
*/
void sub_1713c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713c40ULL || rel >= 0x1713c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713c50 size=16 callers=1 calls=0
*/
void sub_1713c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713c50ULL || rel >= 0x1713c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713c60 size=16 callers=1 calls=0
*/
void sub_1713c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713c60ULL || rel >= 0x1713c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713c70 size=16 callers=1 calls=0
*/
void sub_1713c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713c70ULL || rel >= 0x1713c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713c80 size=32 callers=6 calls=0
*/
void sub_1713c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713c80ULL || rel >= 0x1713ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713ca0 size=112 callers=1 calls=0
*/
void sub_1713ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713ca0ULL || rel >= 0x1713d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713d10 size=160 callers=0 calls=1
   calls: sub_165e060
*/
void sub_1713d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713d10ULL || rel >= 0x1713db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713db0 size=16 callers=0 calls=0
*/
void sub_1713db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713db0ULL || rel >= 0x1713dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713dc0 size=16 callers=1 calls=0
*/
void sub_1713dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713dc0ULL || rel >= 0x1713dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713dd0 size=16 callers=1 calls=0
*/
void sub_1713dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713dd0ULL || rel >= 0x1713de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713de0 size=16 callers=1 calls=0
*/
void sub_1713de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713de0ULL || rel >= 0x1713df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713df0 size=16 callers=3 calls=0
*/
void sub_1713df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713df0ULL || rel >= 0x1713e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713e00 size=16 callers=4 calls=0
*/
void sub_1713e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713e00ULL || rel >= 0x1713e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713e10 size=16 callers=1 calls=0
*/
void sub_1713e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713e10ULL || rel >= 0x1713e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713e20 size=64 callers=1 calls=0
*/
void sub_1713e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713e20ULL || rel >= 0x1713e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713e60 size=16 callers=1 calls=0
*/
void sub_1713e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713e60ULL || rel >= 0x1713e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713e70 size=16 callers=0 calls=0
*/
void sub_1713e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713e70ULL || rel >= 0x1713e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01713e80 size=1056 callers=4 calls=3
   calls: sub_1652c70, sub_16538d0, sub_1733d10
*/
void sub_1713e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713e80ULL || rel >= 0x17142a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017142a0 size=64 callers=6 calls=1
   calls: sub_1652d30
*/
void sub_17142a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17142a0ULL || rel >= 0x17142e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017142e0 size=64 callers=0 calls=2
   calls: sub_1652d30, sub_1733d30
*/
void sub_17142e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17142e0ULL || rel >= 0x1714320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01714320 size=480 callers=0 calls=2
   calls: sub_16538d0, sub_1733d70
*/
void sub_1714320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1714320ULL || rel >= 0x1714500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01714500 size=128 callers=2 calls=1
   calls: sub_165e060
*/
void sub_1714500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1714500ULL || rel >= 0x1714580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01714580 size=32 callers=2 calls=0
*/
void sub_1714580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1714580ULL || rel >= 0x17145a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017145a0 size=32 callers=2 calls=0
*/
void sub_17145a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17145a0ULL || rel >= 0x17145c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017145c0 size=192 callers=12 calls=1
   calls: sub_165e060
*/
void sub_17145c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17145c0ULL || rel >= 0x1714680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01714680 size=192 callers=12 calls=1
   calls: sub_165e060
*/
void sub_1714680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1714680ULL || rel >= 0x1714740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01714740 size=256 callers=1 calls=4
   calls: sub_165be70, sub_165bea0, sub_165c080, sub_165e060
*/
void sub_1714740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1714740ULL || rel >= 0x1714840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01714840 size=880 callers=1 calls=3
   calls: sub_1652cf0, sub_165bea0, sub_1733d50
*/
void sub_1714840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1714840ULL || rel >= 0x1714bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01714bb0 size=3568 callers=1 calls=44
   calls: sub_10ff360, sub_15a4e30, sub_15a6710, sub_15a6830, sub_15a6850, sub_15a6870, sub_15a6890, sub_15a68b0, sub_15a68d0, sub_15a68f0, sub_15a6910, sub_15a6a40
   ... +32 more
*/
void sub_1714bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1714bb0ULL || rel >= 0x17159a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017159a0 size=16 callers=1 calls=0
*/
void sub_17159a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17159a0ULL || rel >= 0x17159b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017159b0 size=16 callers=0 calls=0
*/
void sub_17159b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17159b0ULL || rel >= 0x17159c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017159c0 size=16 callers=1 calls=0
*/
void sub_17159c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17159c0ULL || rel >= 0x17159d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017159d0 size=16 callers=1 calls=0
*/
void sub_17159d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17159d0ULL || rel >= 0x17159e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017159e0 size=16 callers=2 calls=0
*/
void sub_17159e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17159e0ULL || rel >= 0x17159f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017159f0 size=16 callers=1 calls=0
*/
void sub_17159f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17159f0ULL || rel >= 0x1715a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715a00 size=16 callers=1 calls=0
*/
void sub_1715a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715a00ULL || rel >= 0x1715a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715a10 size=16 callers=1 calls=0
*/
void sub_1715a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715a10ULL || rel >= 0x1715a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715a20 size=16 callers=1 calls=0
*/
void sub_1715a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715a20ULL || rel >= 0x1715a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715a30 size=16 callers=2 calls=0
*/
void sub_1715a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715a30ULL || rel >= 0x1715a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715a40 size=16 callers=1 calls=0
*/
void sub_1715a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715a40ULL || rel >= 0x1715a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715a50 size=16 callers=1 calls=0
*/
void sub_1715a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715a50ULL || rel >= 0x1715a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715a60 size=16 callers=1 calls=0
*/
void sub_1715a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715a60ULL || rel >= 0x1715a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715a70 size=32 callers=6 calls=0
*/
void sub_1715a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715a70ULL || rel >= 0x1715a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715a90 size=16 callers=4 calls=0
*/
void sub_1715a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715a90ULL || rel >= 0x1715aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715aa0 size=16 callers=1 calls=0
*/
void sub_1715aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715aa0ULL || rel >= 0x1715ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715ab0 size=16 callers=3 calls=0
*/
void sub_1715ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715ab0ULL || rel >= 0x1715ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715ac0 size=448 callers=1 calls=2
   calls: sub_15b9340, sub_15b9390
*/
void sub_1715ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715ac0ULL || rel >= 0x1715c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715c80 size=16 callers=1 calls=0
*/
void sub_1715c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715c80ULL || rel >= 0x1715c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715c90 size=16 callers=1 calls=0
*/
void sub_1715c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715c90ULL || rel >= 0x1715ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715ca0 size=16 callers=1 calls=0
*/
void sub_1715ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715ca0ULL || rel >= 0x1715cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715cb0 size=16 callers=1 calls=0
*/
void sub_1715cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715cb0ULL || rel >= 0x1715cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715cc0 size=16 callers=1 calls=0
*/
void sub_1715cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715cc0ULL || rel >= 0x1715cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715cd0 size=16 callers=1 calls=0
*/
void sub_1715cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715cd0ULL || rel >= 0x1715ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715ce0 size=16 callers=2 calls=0
*/
void sub_1715ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715ce0ULL || rel >= 0x1715cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715cf0 size=16 callers=6 calls=0
*/
void sub_1715cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715cf0ULL || rel >= 0x1715d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715d00 size=32 callers=18 calls=0
*/
void sub_1715d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715d00ULL || rel >= 0x1715d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715d20 size=16 callers=3 calls=0
*/
void sub_1715d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715d20ULL || rel >= 0x1715d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715d30 size=16 callers=3 calls=0
*/
void sub_1715d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715d30ULL || rel >= 0x1715d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715d40 size=16 callers=1 calls=0
*/
void sub_1715d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715d40ULL || rel >= 0x1715d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715d50 size=16 callers=1 calls=0
*/
void sub_1715d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715d50ULL || rel >= 0x1715d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715d60 size=16 callers=1 calls=0
*/
void sub_1715d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715d60ULL || rel >= 0x1715d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715d70 size=16 callers=1 calls=0
*/
void sub_1715d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715d70ULL || rel >= 0x1715d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715d80 size=16 callers=2 calls=0
*/
void sub_1715d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715d80ULL || rel >= 0x1715d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715d90 size=16 callers=1 calls=0
*/
void sub_1715d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715d90ULL || rel >= 0x1715da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715da0 size=16 callers=2 calls=0
*/
void sub_1715da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715da0ULL || rel >= 0x1715db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715db0 size=16 callers=3 calls=0
*/
void sub_1715db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715db0ULL || rel >= 0x1715dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715dc0 size=16 callers=2 calls=0
*/
void sub_1715dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715dc0ULL || rel >= 0x1715dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715dd0 size=16 callers=3 calls=0
*/
void sub_1715dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715dd0ULL || rel >= 0x1715de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715de0 size=32 callers=1 calls=0
*/
void sub_1715de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715de0ULL || rel >= 0x1715e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715e00 size=16 callers=1 calls=0
*/
void sub_1715e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715e00ULL || rel >= 0x1715e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715e10 size=32 callers=2 calls=0
*/
void sub_1715e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715e10ULL || rel >= 0x1715e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715e30 size=32 callers=2 calls=0
*/
void sub_1715e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715e30ULL || rel >= 0x1715e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715e50 size=144 callers=1 calls=1
   calls: sub_165c080
*/
void sub_1715e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715e50ULL || rel >= 0x1715ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01715ee0 size=448 callers=1 calls=2
   calls: sub_15b9340, sub_15b9390
*/
void sub_1715ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715ee0ULL || rel >= 0x17160a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017160a0 size=32 callers=1 calls=0
*/
void sub_17160a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17160a0ULL || rel >= 0x17160c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017160c0 size=64 callers=1 calls=0
*/
void sub_17160c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17160c0ULL || rel >= 0x1716100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01716100 size=144 callers=1 calls=0
*/
void sub_1716100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1716100ULL || rel >= 0x1716190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01716190 size=80 callers=1 calls=0
*/
void sub_1716190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1716190ULL || rel >= 0x17161e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017161e0 size=224 callers=1 calls=0
*/
void sub_17161e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17161e0ULL || rel >= 0x17162c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017162c0 size=16 callers=8 calls=0
*/
void sub_17162c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17162c0ULL || rel >= 0x17162d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017162d0 size=96 callers=270 calls=1
   calls: sub_171ae70
*/
void sub_17162d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17162d0ULL || rel >= 0x1716330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01716330 size=96 callers=28 calls=1
   calls: sub_171ae70
*/
void sub_1716330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1716330ULL || rel >= 0x1716390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01716390 size=80 callers=254 calls=1
   calls: sub_171ab50
*/
void sub_1716390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1716390ULL || rel >= 0x17163e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017163e0 size=32 callers=124 calls=0
*/
void sub_17163e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17163e0ULL || rel >= 0x1716400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01716400 size=256 callers=5 calls=0
*/
void sub_1716400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1716400ULL || rel >= 0x1716500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01716500 size=128 callers=0 calls=1
   calls: sub_17166a0
*/
void sub_1716500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1716500ULL || rel >= 0x1716580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01716580 size=16 callers=2 calls=0
*/
void sub_1716580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1716580ULL || rel >= 0x1716590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01716590 size=144 callers=0 calls=1
   calls: sub_17166a0
*/
void sub_1716590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1716590ULL || rel >= 0x1716620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01716620 size=64 callers=0 calls=0
*/
void sub_1716620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1716620ULL || rel >= 0x1716660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01716660 size=32 callers=5 calls=0
*/
void sub_1716660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1716660ULL || rel >= 0x1716680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01716680 size=32 callers=10 calls=0
*/
void sub_1716680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1716680ULL || rel >= 0x17166a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017166a0 size=48 callers=15 calls=0
*/
void sub_17166a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17166a0ULL || rel >= 0x17166d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017166d0 size=48 callers=2 calls=0
*/
void sub_17166d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17166d0ULL || rel >= 0x1716700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01716700 size=240 callers=2 calls=0
*/
void sub_1716700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1716700ULL || rel >= 0x17167f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017167f0 size=64 callers=0 calls=1
   calls: sub_17195a0
*/
void sub_17167f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17167f0ULL || rel >= 0x1716830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01716830 size=64 callers=0 calls=2
   calls: sub_1719550, sub_17195a0
*/
void sub_1716830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1716830ULL || rel >= 0x1716870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01716870 size=16 callers=1 calls=0
*/
void sub_1716870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1716870ULL || rel >= 0x1716880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01716880 size=624 callers=0 calls=5
   calls: sub_1716c20, sub_1719410, sub_171ae70, sub_17215f0, sub_1721600
*/
void sub_1716880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1716880ULL || rel >= 0x1716af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01716af0 size=304 callers=1 calls=4
   calls: sub_1716c20, sub_1719410, sub_17215f0, sub_1721600
*/
void sub_1716af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1716af0ULL || rel >= 0x1716c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01716c20 size=432 callers=9 calls=2
   calls: sub_1716680, sub_17166a0
*/
void sub_1716c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1716c20ULL || rel >= 0x1716dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01716dd0 size=96 callers=0 calls=0
*/
void sub_1716dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1716dd0ULL || rel >= 0x1716e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01716e30 size=80 callers=0 calls=0
*/
void sub_1716e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1716e30ULL || rel >= 0x1716e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01716e80 size=224 callers=0 calls=5
   calls: sub_17166d0, sub_1716c20, sub_1719700, sub_17215f0, sub_1721600
*/
void sub_1716e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1716e80ULL || rel >= 0x1716f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01716f60 size=192 callers=0 calls=4
   calls: sub_1717020, sub_1717120, sub_17215f0, sub_1721600
*/
void sub_1716f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1716f60ULL || rel >= 0x1717020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01717020 size=256 callers=1 calls=2
   calls: sub_17166a0, sub_1716700
*/
void sub_1717020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1717020ULL || rel >= 0x1717120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01717120 size=272 callers=1 calls=2
   calls: sub_17166a0, sub_1716700
*/
void sub_1717120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1717120ULL || rel >= 0x1717230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01717230 size=448 callers=0 calls=6
   calls: sub_17173f0, sub_17174d0, sub_1717610, sub_17176e0, sub_17215f0, sub_1721600
*/
void sub_1717230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1717230ULL || rel >= 0x17173f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017173f0 size=224 callers=1 calls=5
   calls: sub_1716660, sub_1716680, sub_17166a0, sub_1716c20, sub_17177f0
*/
void sub_17173f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17173f0ULL || rel >= 0x17174d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017174d0 size=320 callers=1 calls=5
   calls: sub_1716660, sub_1716680, sub_17166a0, sub_1716c20, sub_1717900
*/
void sub_17174d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17174d0ULL || rel >= 0x1717610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01717610 size=208 callers=1 calls=4
   calls: sub_1716660, sub_1716680, sub_17166a0, sub_1717a60
*/
void sub_1717610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1717610ULL || rel >= 0x17176e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017176e0 size=272 callers=1 calls=4
   calls: sub_1716660, sub_1716680, sub_17166a0, sub_1717bb0
*/
void sub_17176e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17176e0ULL || rel >= 0x17177f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017177f0 size=272 callers=1 calls=0
*/
void sub_17177f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17177f0ULL || rel >= 0x1717900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01717900 size=352 callers=1 calls=0
*/
void sub_1717900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1717900ULL || rel >= 0x1717a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01717a60 size=336 callers=1 calls=0
*/
void sub_1717a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1717a60ULL || rel >= 0x1717bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01717bb0 size=384 callers=1 calls=0
*/
void sub_1717bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1717bb0ULL || rel >= 0x1717d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01717d30 size=432 callers=0 calls=4
   calls: sub_17166a0, sub_1716c20, sub_17215f0, sub_1721600
*/
void sub_1717d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1717d30ULL || rel >= 0x1717ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01717ee0 size=400 callers=0 calls=6
   calls: sub_1716660, sub_1716680, sub_17166a0, sub_1716c20, sub_17215f0, sub_1721600
*/
void sub_1717ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1717ee0ULL || rel >= 0x1718070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01718070 size=256 callers=0 calls=3
   calls: sub_1716c20, sub_17215f0, sub_1721600
*/
void sub_1718070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1718070ULL || rel >= 0x1718170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01718170 size=656 callers=0 calls=3
   calls: sub_1716c20, sub_17215f0, sub_1721600
*/
void sub_1718170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1718170ULL || rel >= 0x1718400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01718400 size=16 callers=0 calls=0
*/
void sub_1718400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1718400ULL || rel >= 0x1718410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01718410 size=16 callers=0 calls=0
*/
void sub_1718410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1718410ULL || rel >= 0x1718420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01718420 size=16 callers=0 calls=0
*/
void sub_1718420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1718420ULL || rel >= 0x1718430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01718430 size=176 callers=0 calls=2
   calls: sub_17215f0, sub_1721600
*/
void sub_1718430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1718430ULL || rel >= 0x17184e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017184e0 size=672 callers=0 calls=2
   calls: sub_17215f0, sub_1721600
*/
void sub_17184e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17184e0ULL || rel >= 0x1718780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01718780 size=32 callers=0 calls=0
*/
void sub_1718780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1718780ULL || rel >= 0x17187a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017187a0 size=1696 callers=0 calls=6
   calls: Reverse, sub_171b340, sub_171b440, sub_171e260, sub_17215f0, sub_1721600
   ref: Best Fit
   ref:   use_list_size: %d
   ref: First Fit
   ref:   heap_type: ExpHeap
   ref:   alloc_mode: %s
   ref:   free_list_size: %d
*/
void Best_Fit(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17187a0ULL || rel >= 0x1718e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01718e40 size=336 callers=0 calls=2
   calls: sub_17215f0, sub_1721600
*/
void sub_1718e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1718e40ULL || rel >= 0x1718f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01718f90 size=16 callers=0 calls=0
*/
void sub_1718f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1718f90ULL || rel >= 0x1718fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01718fa0 size=16 callers=0 calls=0
*/
void sub_1718fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1718fa0ULL || rel >= 0x1718fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01718fb0 size=16 callers=0 calls=0
*/
void sub_1718fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1718fb0ULL || rel >= 0x1718fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01718fc0 size=16 callers=0 calls=0
*/
void sub_1718fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1718fc0ULL || rel >= 0x1718fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01718fd0 size=256 callers=0 calls=0
*/
void sub_1718fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1718fd0ULL || rel >= 0x17190d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017190d0 size=112 callers=0 calls=0
*/
void sub_17190d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17190d0ULL || rel >= 0x1719140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01719140 size=16 callers=0 calls=0
*/
void sub_1719140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1719140ULL || rel >= 0x1719150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01719150 size=16 callers=0 calls=0
*/
void sub_1719150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1719150ULL || rel >= 0x1719160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01719160 size=144 callers=0 calls=0
*/
void sub_1719160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1719160ULL || rel >= 0x17191f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017191f0 size=16 callers=0 calls=0
*/
void sub_17191f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17191f0ULL || rel >= 0x1719200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01719200 size=16 callers=0 calls=0
*/
void sub_1719200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1719200ULL || rel >= 0x1719210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01719210 size=240 callers=0 calls=0
*/
void sub_1719210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1719210ULL || rel >= 0x1719300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01719300 size=16 callers=0 calls=0
*/
void sub_1719300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1719300ULL || rel >= 0x1719310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01719310 size=240 callers=0 calls=0
*/
void sub_1719310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1719310ULL || rel >= 0x1719400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01719400 size=16 callers=0 calls=0
*/
void sub_1719400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1719400ULL || rel >= 0x1719410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01719410 size=320 callers=3 calls=3
   calls: sub_171a850, sub_1721530, sub_17215f0
*/
void sub_1719410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1719410ULL || rel >= 0x1719550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01719550 size=64 callers=1 calls=1
   calls: sub_1721570
*/
void sub_1719550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1719550ULL || rel >= 0x1719590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01719590 size=16 callers=0 calls=0
*/
void sub_1719590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1719590ULL || rel >= 0x17195a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017195a0 size=352 callers=2 calls=4
   calls: sub_17166a0, sub_171ad30, sub_17215f0, sub_1721600
*/
void sub_17195a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17195a0ULL || rel >= 0x1719700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01719700 size=336 callers=1 calls=0
*/
void sub_1719700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1719700ULL || rel >= 0x1719850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01719850 size=128 callers=0 calls=2
   calls: sub_1716680, sub_17215f0
*/
void sub_1719850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1719850ULL || rel >= 0x17198d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017198d0 size=128 callers=2 calls=2
   calls: sub_17166a0, sub_17215f0
*/
void sub_17198d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17198d0ULL || rel >= 0x1719950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01719950 size=208 callers=5 calls=0
*/
void sub_1719950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1719950ULL || rel >= 0x1719a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01719a20 size=128 callers=0 calls=3
   calls: sub_1716680, sub_17215f0, sub_1721600
*/
void sub_1719a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1719a20ULL || rel >= 0x1719aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01719aa0 size=3136 callers=1 calls=5
   calls: sub_171b340, sub_171b440, sub_171e260, sub_17215f0, sub_1721600
   ref: Forward
   ref:   max_allocatable_size: %llu
   ref:   start_address: 0x%016llX
   ref:   parent: %s
   ref: Reverse
   ref:   end_address: 0x%016llX
   ref:   size: %llu
   ref:   free_size: %llu
*/
void Reverse(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1719aa0ULL || rel >= 0x171a6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171a6e0 size=128 callers=0 calls=0
*/
void sub_171a6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171a6e0ULL || rel >= 0x171a760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171a760 size=112 callers=0 calls=0
*/
void sub_171a760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171a760ULL || rel >= 0x171a7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171a7d0 size=16 callers=0 calls=0
*/
void sub_171a7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171a7d0ULL || rel >= 0x171a7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171a7e0 size=16 callers=0 calls=0
*/
void sub_171a7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171a7e0ULL || rel >= 0x171a7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171a7f0 size=96 callers=5 calls=1
   calls: sub_171ab50
*/
void sub_171a7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171a7f0ULL || rel >= 0x171a850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171a850 size=160 callers=3 calls=2
   calls: sub_171ab50, sub_171ae70
*/
void sub_171a850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171a850ULL || rel >= 0x171a8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171a8f0 size=96 callers=4 calls=1
   calls: sub_17198d0
*/
void sub_171a8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171a8f0ULL || rel >= 0x171a950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171a950 size=96 callers=0 calls=1
   calls: sub_17198d0
*/
void sub_171a950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171a950ULL || rel >= 0x171a9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171a9b0 size=16 callers=0 calls=0
*/
void sub_171a9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171a9b0ULL || rel >= 0x171a9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171a9c0 size=16 callers=0 calls=0
*/
void sub_171a9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171a9c0ULL || rel >= 0x171a9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171a9d0 size=160 callers=1 calls=1
   calls: sub_1716af0
   ref: RootHeap
*/
void RootHeap(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171a9d0ULL || rel >= 0x171aa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171aa70 size=224 callers=0 calls=1
   calls: sub_17215f0
*/
void sub_171aa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171aa70ULL || rel >= 0x171ab50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171ab50 size=480 callers=3 calls=3
   calls: sub_1719950, sub_17215f0, sub_1721600
*/
void sub_171ab50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171ab50ULL || rel >= 0x171ad30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171ad30 size=320 callers=1 calls=3
   calls: sub_17215f0, sub_1721600, sub_1721d90
*/
void sub_171ad30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171ad30ULL || rel >= 0x171ae70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171ae70 size=48 callers=4 calls=0
*/
void sub_171ae70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171ae70ULL || rel >= 0x171aea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171aea0 size=16 callers=2 calls=0
*/
void sub_171aea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171aea0ULL || rel >= 0x171aeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171aeb0 size=208 callers=0 calls=3
   calls: sub_171af80, sub_17214f0, sub_1c0
*/
void sub_171aeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171aeb0ULL || rel >= 0x171af80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171af80 size=32 callers=2 calls=0
*/
void sub_171af80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171af80ULL || rel >= 0x171afa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171afa0 size=224 callers=0 calls=0
*/
void sub_171afa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171afa0ULL || rel >= 0x171b080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171b080 size=64 callers=12 calls=0
*/
void sub_171b080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171b080ULL || rel >= 0x171b0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171b0c0 size=128 callers=1 calls=0
*/
void sub_171b0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171b0c0ULL || rel >= 0x171b140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171b140 size=16 callers=0 calls=0
*/
void sub_171b140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171b140ULL || rel >= 0x171b150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171b150 size=240 callers=0 calls=0
*/
void sub_171b150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171b150ULL || rel >= 0x171b240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171b240 size=16 callers=0 calls=0
*/
void sub_171b240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171b240ULL || rel >= 0x171b250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171b250 size=16 callers=1 calls=0
*/
void sub_171b250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171b250ULL || rel >= 0x171b260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171b260 size=16 callers=0 calls=0
*/
void sub_171b260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171b260ULL || rel >= 0x171b270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171b270 size=208 callers=0 calls=0
*/
void sub_171b270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171b270ULL || rel >= 0x171b340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171b340 size=32 callers=15 calls=0
*/
void sub_171b340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171b340ULL || rel >= 0x171b360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171b360 size=224 callers=9 calls=1
   calls: sub_171e060
*/
void sub_171b360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171b360ULL || rel >= 0x171b440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171b440 size=336 callers=16 calls=1
   calls: sub_171e060
*/
void sub_171b440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171b440ULL || rel >= 0x171b590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171b590 size=16 callers=0 calls=0
*/
void sub_171b590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171b590ULL || rel >= 0x171b5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171b5a0 size=16 callers=0 calls=0
*/
void sub_171b5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171b5a0ULL || rel >= 0x171b5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171b5b0 size=128 callers=0 calls=1
   calls: sub_1c0
*/
void sub_171b5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171b5b0ULL || rel >= 0x171b630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171b630 size=16 callers=5 calls=0
*/
void sub_171b630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171b630ULL || rel >= 0x171b640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171b640 size=1312 callers=0 calls=0
*/
void sub_171b640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171b640ULL || rel >= 0x171bb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171bb60 size=16 callers=1 calls=0
*/
void sub_171bb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171bb60ULL || rel >= 0x171bb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171bb70 size=1408 callers=0 calls=0
*/
void sub_171bb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171bb70ULL || rel >= 0x171c0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171c0f0 size=16 callers=1 calls=0
*/
void sub_171c0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171c0f0ULL || rel >= 0x171c100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171c100 size=1280 callers=0 calls=0
*/
void sub_171c100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171c100ULL || rel >= 0x171c600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0171c600 size=16 callers=1 calls=0
*/
void sub_171c600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171c600ULL || rel >= 0x171c610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

