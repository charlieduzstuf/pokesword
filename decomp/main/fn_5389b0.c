/* main functions 005389b0..00554ae0 (32 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 005389b0 size=16 callers=0 calls=0
*/
void sub_5389b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5389b0ULL || rel >= 0x5389c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005389c0 size=32 callers=0 calls=0
*/
void sub_5389c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5389c0ULL || rel >= 0x5389e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005389e0 size=256 callers=0 calls=2
   calls: sub_4cbec0, sub_4ce9d0
   ref: ../../../../Libsrc/SiGfx/Source\NX/SiGfx_NX_Buffer_Impl.h
*/
void SiGfx_NX_Buffer_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5389e0ULL || rel >= 0x538ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00538ae0 size=16 callers=0 calls=0
*/
void sub_538ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x538ae0ULL || rel >= 0x538af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00538af0 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_205(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x538af0ULL || rel >= 0x538b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00538b50 size=416 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_206(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x538b50ULL || rel >= 0x538cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00538cf0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_538cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x538cf0ULL || rel >= 0x538d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00538d70 size=80 callers=5 calls=1
   calls: sub_4bc640
*/
void sub_538d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x538d70ULL || rel >= 0x538dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00538dc0 size=16 callers=6 calls=0
*/
void sub_538dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x538dc0ULL || rel >= 0x538dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00538dd0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_538dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x538dd0ULL || rel >= 0x538e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00538e50 size=64 callers=1 calls=1
   calls: sub_534000
*/
void sub_538e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x538e50ULL || rel >= 0x538e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00538e90 size=64 callers=0 calls=1
   calls: sub_534430
*/
void sub_538e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x538e90ULL || rel >= 0x538ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00538ed0 size=64 callers=0 calls=2
   calls: sub_5341b0, sub_534430
*/
void sub_538ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x538ed0ULL || rel >= 0x538f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00538f10 size=64 callers=0 calls=2
   calls: SiCore_Array_179, sub_534420
*/
void sub_538f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x538f10ULL || rel >= 0x538f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00538f50 size=16 callers=0 calls=0
*/
void sub_538f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x538f50ULL || rel >= 0x538f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00538f60 size=512 callers=1 calls=7
   calls: sub_4c5a90, sub_4fb6d0, sub_4fbb10, sub_4fef10, sub_4ff090, sub_596640, sub_596680
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_CanvasPool.cpp
   ref: Canvas_%d
*/
void SiGfx_NX_CanvasPool(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x538f60ULL || rel >= 0x539160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00539160 size=144 callers=1 calls=4
   calls: sub_534810, sub_534870, sub_596640, sub_596680
*/
void sub_539160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539160ULL || rel >= 0x5391f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005391f0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_5391f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5391f0ULL || rel >= 0x539270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00539270 size=160 callers=1 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4bf660
*/
void sub_539270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539270ULL || rel >= 0x539310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00539310 size=112 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_81(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539310ULL || rel >= 0x539380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00539380 size=112 callers=0 calls=1
   calls: sub_4bf6a0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_82(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539380ULL || rel >= 0x5393f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005393f0 size=16 callers=1 calls=0
*/
void sub_5393f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5393f0ULL || rel >= 0x539400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00539400 size=16 callers=0 calls=0
*/
void sub_539400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539400ULL || rel >= 0x539410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00539410 size=16 callers=0 calls=0
*/
void sub_539410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539410ULL || rel >= 0x539420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00539420 size=16 callers=0 calls=0
*/
void sub_539420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539420ULL || rel >= 0x539430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00539430 size=16 callers=0 calls=0
*/
void sub_539430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539430ULL || rel >= 0x539440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00539440 size=256 callers=0 calls=0
*/
void sub_539440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539440ULL || rel >= 0x539540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00539540 size=16 callers=0 calls=0
*/
void sub_539540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539540ULL || rel >= 0x539550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00539550 size=16 callers=0 calls=0
*/
void sub_539550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539550ULL || rel >= 0x539560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00539560 size=16 callers=0 calls=0
*/
void sub_539560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539560ULL || rel >= 0x539570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00539570 size=16 callers=0 calls=0
*/
void sub_539570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539570ULL || rel >= 0x539580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00539580 size=16 callers=0 calls=0
*/
void sub_539580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539580ULL || rel >= 0x539590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00539590 size=16 callers=0 calls=0
*/
void sub_539590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539590ULL || rel >= 0x5395a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005395a0 size=16 callers=0 calls=0
*/
void sub_5395a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5395a0ULL || rel >= 0x5395b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005395b0 size=16 callers=0 calls=0
*/
void sub_5395b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5395b0ULL || rel >= 0x5395c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005395c0 size=16 callers=0 calls=0
*/
void sub_5395c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5395c0ULL || rel >= 0x5395d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005395d0 size=16 callers=0 calls=0
*/
void sub_5395d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5395d0ULL || rel >= 0x5395e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005395e0 size=16 callers=0 calls=0
*/
void sub_5395e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5395e0ULL || rel >= 0x5395f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005395f0 size=16 callers=0 calls=0
*/
void sub_5395f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5395f0ULL || rel >= 0x539600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00539600 size=16 callers=0 calls=0
*/
void sub_539600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539600ULL || rel >= 0x539610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00539610 size=16 callers=0 calls=0
*/
void sub_539610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539610ULL || rel >= 0x539620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00539620 size=16 callers=0 calls=0
*/
void sub_539620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539620ULL || rel >= 0x539630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00539630 size=16 callers=0 calls=0
*/
void sub_539630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539630ULL || rel >= 0x539640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00539640 size=16 callers=0 calls=0
*/
void sub_539640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539640ULL || rel >= 0x539650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00539650 size=176 callers=1 calls=0
*/
void sub_539650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539650ULL || rel >= 0x539700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00539700 size=16 callers=1 calls=0
*/
void sub_539700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539700ULL || rel >= 0x539710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00539710 size=32 callers=0 calls=0
*/
void sub_539710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539710ULL || rel >= 0x539730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00539730 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source\NX/SiGfx_NX_DeviceInfo_Impl.h
*/
void SiGfx_NX_DeviceInfo_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539730ULL || rel >= 0x5397b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005397b0 size=16 callers=0 calls=0
*/
void sub_5397b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5397b0ULL || rel >= 0x5397c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005397c0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_5397c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5397c0ULL || rel >= 0x539840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00539840 size=80 callers=1 calls=1
   calls: nvnVertexAttribStateSetStreamIndex
   ref: nvnDeviceGetProcAddress
*/
void nvnDeviceGetProcAddress(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539840ULL || rel >= 0x539890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00539890 size=16 callers=0 calls=0
*/
void sub_539890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539890ULL || rel >= 0x5398a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005398a0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_5398a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5398a0ULL || rel >= 0x539920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00539920 size=352 callers=3 calls=4
   calls: sub_4bc640, sub_4bc690, sub_4bf660, sub_596530
*/
void sub_539920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539920ULL || rel >= 0x539a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00539a80 size=448 callers=1 calls=2
   calls: SiGfx_NX_CommandList_Impl, sub_596570
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_83(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539a80ULL || rel >= 0x539c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00539c40 size=592 callers=3 calls=1
   calls: SiGfx_NX_MemoryHeap_Impl_6
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_CommandList_Impl.cpp
*/
void SiGfx_NX_CommandList_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539c40ULL || rel >= 0x539e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00539e90 size=160 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_207(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539e90ULL || rel >= 0x539f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00539f30 size=160 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_208(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539f30ULL || rel >= 0x539fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00539fd0 size=48 callers=0 calls=1
   calls: SiCore_String_83
*/
void sub_539fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539fd0ULL || rel >= 0x53a000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053a000 size=784 callers=3 calls=2
   calls: SiGfx_NX_CommandList_Impl, SiGfx_NX_MemoryHeap_Impl_5
   ref: ../../../../Include\SiCore/SiCore_Array.h
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_CommandList_Impl.cpp
*/
void SiGfx_NX_CommandList_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53a000ULL || rel >= 0x53a310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053a310 size=816 callers=0 calls=5
   calls: SiCore_Array_172, SiCore_Array_212, SiGfx_NX_MemoryHeap_Impl_5, sub_5965f0, sub_596610
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_CommandList_Impl.cpp
*/
void SiGfx_NX_CommandList_Impl_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53a310ULL || rel >= 0x53a640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053a640 size=16 callers=0 calls=0
*/
void sub_53a640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53a640ULL || rel >= 0x53a650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053a650 size=16 callers=0 calls=0
*/
void sub_53a650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53a650ULL || rel >= 0x53a660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053a660 size=32 callers=0 calls=1
   calls: sub_4c4700
*/
void sub_53a660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53a660ULL || rel >= 0x53a680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053a680 size=16 callers=0 calls=0
*/
void sub_53a680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53a680ULL || rel >= 0x53a690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053a690 size=16 callers=0 calls=0
*/
void sub_53a690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53a690ULL || rel >= 0x53a6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053a6a0 size=16 callers=0 calls=0
*/
void sub_53a6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53a6a0ULL || rel >= 0x53a6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053a6b0 size=16 callers=0 calls=0
*/
void sub_53a6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53a6b0ULL || rel >= 0x53a6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053a6c0 size=16 callers=0 calls=0
*/
void sub_53a6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53a6c0ULL || rel >= 0x53a6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053a6d0 size=16 callers=0 calls=0
*/
void sub_53a6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53a6d0ULL || rel >= 0x53a6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053a6e0 size=16 callers=0 calls=0
*/
void sub_53a6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53a6e0ULL || rel >= 0x53a6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053a6f0 size=160 callers=0 calls=1
   calls: sub_5965f0
*/
void sub_53a6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53a6f0ULL || rel >= 0x53a790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053a790 size=816 callers=3 calls=1
   calls: SiCore_Array_211
   ref: iIndex<m_itemCount
   ref: ../../../../Include\SiCore/SiCore_Array.h
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_CommandList_Impl.cpp
   ref: RemoveByIndex
*/
void RemoveByIndex(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53a790ULL || rel >= 0x53aac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053aac0 size=96 callers=0 calls=1
   calls: SiGfx_NX_CommandList_Impl
*/
void sub_53aac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53aac0ULL || rel >= 0x53ab20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053ab20 size=32 callers=0 calls=0
*/
void sub_53ab20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53ab20ULL || rel >= 0x53ab40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053ab40 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source\NX/SiGfx_NX_CommandList_Impl.h
*/
void SiGfx_NX_CommandList_Impl_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53ab40ULL || rel >= 0x53abc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053abc0 size=16 callers=0 calls=0
*/
void sub_53abc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53abc0ULL || rel >= 0x53abd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053abd0 size=16 callers=0 calls=0
*/
void sub_53abd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53abd0ULL || rel >= 0x53abe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053abe0 size=16 callers=0 calls=0
*/
void sub_53abe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53abe0ULL || rel >= 0x53abf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053abf0 size=144 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_209(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53abf0ULL || rel >= 0x53ac80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053ac80 size=144 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53ac80ULL || rel >= 0x53ad10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053ad10 size=592 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_211(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53ad10ULL || rel >= 0x53af60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053af60 size=544 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_212(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53af60ULL || rel >= 0x53b180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053b180 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_53b180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53b180ULL || rel >= 0x53b200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053b200 size=496 callers=1 calls=7
   calls: sub_4bc640, sub_4bf660, sub_53b3f0, sub_543280, sub_546990, sub_55b740, sub_55ba30
*/
void sub_53b200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53b200ULL || rel >= 0x53b3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053b3f0 size=352 callers=1 calls=0
*/
void sub_53b3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53b3f0ULL || rel >= 0x53b550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053b550 size=224 callers=1 calls=7
   calls: SiCore_Array_216, SiCore_Array_221, SiGfx_PrimitiveDrawHelper, SiGfx_PrimitiveDrawHelper_2, sub_53ba70, sub_5436d0, sub_55ba20
*/
void sub_53b550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53b550ULL || rel >= 0x53b630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053b630 size=32 callers=0 calls=0
*/
void sub_53b630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53b630ULL || rel >= 0x53b650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053b650 size=48 callers=0 calls=1
   calls: sub_53b550
*/
void sub_53b650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53b650ULL || rel >= 0x53b680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053b680 size=208 callers=1 calls=3
   calls: SiCore_Array_213, SiCore_Array_226, SiGfx_PrimitiveDrawHelper_4
*/
void sub_53b680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53b680ULL || rel >= 0x53b750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053b750 size=800 callers=1 calls=1
   calls: SiCore_Array_219
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_213(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53b750ULL || rel >= 0x53ba70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053ba70 size=224 callers=1 calls=1
   calls: SiCore_Array_214
*/
void sub_53ba70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53ba70ULL || rel >= 0x53bb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053bb50 size=16 callers=0 calls=0
*/
void sub_53bb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53bb50ULL || rel >= 0x53bb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053bb60 size=16 callers=0 calls=0
*/
void sub_53bb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53bb60ULL || rel >= 0x53bb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053bb70 size=16 callers=0 calls=0
*/
void sub_53bb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53bb70ULL || rel >= 0x53bb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053bb80 size=544 callers=0 calls=2
   calls: sub_4fb320, sub_55ba30
*/
void sub_53bb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53bb80ULL || rel >= 0x53bda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053bda0 size=144 callers=0 calls=1
   calls: RemoveByIndex
*/
void sub_53bda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53bda0ULL || rel >= 0x53be30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053be30 size=16 callers=0 calls=0
*/
void sub_53be30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53be30ULL || rel >= 0x53be40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053be40 size=1280 callers=0 calls=1
   calls: sub_53c340
*/
void sub_53be40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53be40ULL || rel >= 0x53c340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053c340 size=1664 callers=6 calls=2
   calls: sub_53f7d0, sub_53fe70
*/
void sub_53c340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53c340ULL || rel >= 0x53c9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053c9c0 size=48 callers=0 calls=1
   calls: sub_53c340
*/
void sub_53c9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53c9c0ULL || rel >= 0x53c9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053c9f0 size=128 callers=0 calls=0
*/
void sub_53c9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53c9f0ULL || rel >= 0x53ca70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053ca70 size=112 callers=0 calls=0
*/
void sub_53ca70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53ca70ULL || rel >= 0x53cae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053cae0 size=848 callers=0 calls=0
*/
void sub_53cae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53cae0ULL || rel >= 0x53ce30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053ce30 size=384 callers=0 calls=0
*/
void sub_53ce30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53ce30ULL || rel >= 0x53cfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053cfb0 size=16 callers=0 calls=0
*/
void sub_53cfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53cfb0ULL || rel >= 0x53cfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053cfc0 size=1232 callers=0 calls=0
*/
void sub_53cfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53cfc0ULL || rel >= 0x53d490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053d490 size=304 callers=0 calls=0
*/
void sub_53d490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53d490ULL || rel >= 0x53d5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053d5c0 size=128 callers=0 calls=0
*/
void sub_53d5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53d5c0ULL || rel >= 0x53d640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053d640 size=32 callers=0 calls=0
*/
void sub_53d640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53d640ULL || rel >= 0x53d660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053d660 size=576 callers=0 calls=4
   calls: sub_53d8a0, sub_53da20, sub_53e0c0, sub_53ee60
*/
void sub_53d660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53d660ULL || rel >= 0x53d8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053d8a0 size=384 callers=1 calls=0
*/
void sub_53d8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53d8a0ULL || rel >= 0x53da20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053da20 size=1696 callers=1 calls=0
*/
void sub_53da20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53da20ULL || rel >= 0x53e0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053e0c0 size=3168 callers=1 calls=0
*/
void sub_53e0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53e0c0ULL || rel >= 0x53ed20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053ed20 size=320 callers=0 calls=2
   calls: sub_53f2f0, sub_53f490
*/
void sub_53ed20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53ed20ULL || rel >= 0x53ee60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053ee60 size=1168 callers=1 calls=0
*/
void sub_53ee60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53ee60ULL || rel >= 0x53f2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053f2f0 size=416 callers=1 calls=1
   calls: sub_53f490
*/
void sub_53f2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53f2f0ULL || rel >= 0x53f490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053f490 size=416 callers=2 calls=1
   calls: sub_53f630
*/
void sub_53f490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53f490ULL || rel >= 0x53f630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053f630 size=416 callers=3 calls=0
*/
void sub_53f630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53f630ULL || rel >= 0x53f7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053f7d0 size=1696 callers=1 calls=9
   calls: sub_562ee0, sub_5630e0, sub_563150, sub_563160, sub_563190, sub_5631d0, sub_5631f0, sub_563220, sub_563250
*/
void sub_53f7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53f7d0ULL || rel >= 0x53fe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0053fe70 size=528 callers=1 calls=0
*/
void sub_53fe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53fe70ULL || rel >= 0x540080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00540080 size=320 callers=0 calls=1
   calls: sub_53c340
*/
void sub_540080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x540080ULL || rel >= 0x5401c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005401c0 size=352 callers=0 calls=1
   calls: sub_53c340
*/
void sub_5401c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5401c0ULL || rel >= 0x540320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00540320 size=160 callers=0 calls=1
   calls: sub_53c340
*/
void sub_540320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x540320ULL || rel >= 0x5403c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005403c0 size=112 callers=0 calls=1
   calls: sub_53c340
*/
void sub_5403c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5403c0ULL || rel >= 0x540430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00540430 size=16 callers=0 calls=0
*/
void sub_540430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x540430ULL || rel >= 0x540440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00540440 size=384 callers=0 calls=0
*/
void sub_540440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x540440ULL || rel >= 0x5405c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005405c0 size=96 callers=0 calls=1
   calls: sub_4c4cf0
*/
void sub_5405c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5405c0ULL || rel >= 0x540620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00540620 size=16 callers=0 calls=0
*/
void sub_540620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x540620ULL || rel >= 0x540630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00540630 size=16 callers=0 calls=0
*/
void sub_540630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x540630ULL || rel >= 0x540640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00540640 size=16 callers=0 calls=0
*/
void sub_540640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x540640ULL || rel >= 0x540650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00540650 size=16 callers=0 calls=0
*/
void sub_540650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x540650ULL || rel >= 0x540660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00540660 size=16 callers=0 calls=0
*/
void sub_540660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x540660ULL || rel >= 0x540670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00540670 size=16 callers=0 calls=0
*/
void sub_540670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x540670ULL || rel >= 0x540680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00540680 size=16 callers=0 calls=0
*/
void sub_540680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x540680ULL || rel >= 0x540690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00540690 size=16 callers=0 calls=0
*/
void sub_540690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x540690ULL || rel >= 0x5406a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005406a0 size=16 callers=0 calls=0
*/
void sub_5406a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5406a0ULL || rel >= 0x5406b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005406b0 size=16 callers=0 calls=0
*/
void sub_5406b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5406b0ULL || rel >= 0x5406c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005406c0 size=16 callers=0 calls=0
*/
void sub_5406c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5406c0ULL || rel >= 0x5406d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005406d0 size=16 callers=0 calls=0
*/
void sub_5406d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5406d0ULL || rel >= 0x5406e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005406e0 size=16 callers=0 calls=0
*/
void sub_5406e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5406e0ULL || rel >= 0x5406f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005406f0 size=16 callers=0 calls=0
*/
void sub_5406f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5406f0ULL || rel >= 0x540700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00540700 size=16 callers=0 calls=0
*/
void sub_540700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x540700ULL || rel >= 0x540710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00540710 size=16 callers=0 calls=0
*/
void sub_540710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x540710ULL || rel >= 0x540720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00540720 size=16 callers=0 calls=0
*/
void sub_540720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x540720ULL || rel >= 0x540730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00540730 size=16 callers=0 calls=0
*/
void sub_540730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x540730ULL || rel >= 0x540740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00540740 size=16 callers=0 calls=0
*/
void sub_540740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x540740ULL || rel >= 0x540750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00540750 size=16 callers=0 calls=0
*/
void sub_540750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x540750ULL || rel >= 0x540760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00540760 size=64 callers=0 calls=0
*/
void sub_540760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x540760ULL || rel >= 0x5407a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005407a0 size=16 callers=0 calls=0
*/
void sub_5407a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5407a0ULL || rel >= 0x5407b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005407b0 size=16 callers=0 calls=0
*/
void sub_5407b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5407b0ULL || rel >= 0x5407c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005407c0 size=16 callers=0 calls=0
*/
void sub_5407c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5407c0ULL || rel >= 0x5407d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005407d0 size=16 callers=0 calls=0
*/
void sub_5407d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5407d0ULL || rel >= 0x5407e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005407e0 size=16 callers=0 calls=0
*/
void sub_5407e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5407e0ULL || rel >= 0x5407f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005407f0 size=16 callers=0 calls=0
*/
void sub_5407f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5407f0ULL || rel >= 0x540800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00540800 size=16 callers=0 calls=0
*/
void sub_540800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x540800ULL || rel >= 0x540810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00540810 size=16 callers=0 calls=0
*/
void sub_540810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x540810ULL || rel >= 0x540820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00540820 size=16 callers=0 calls=0
*/
void sub_540820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x540820ULL || rel >= 0x540830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00540830 size=16 callers=0 calls=0
*/
void sub_540830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x540830ULL || rel >= 0x540840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00540840 size=80 callers=0 calls=0
*/
void sub_540840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x540840ULL || rel >= 0x540890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00540890 size=64 callers=0 calls=0
*/
void sub_540890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x540890ULL || rel >= 0x5408d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005408d0 size=16 callers=0 calls=0
*/
void sub_5408d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5408d0ULL || rel >= 0x5408e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005408e0 size=112 callers=0 calls=0
*/
void sub_5408e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5408e0ULL || rel >= 0x540950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00540950 size=16 callers=0 calls=0
*/
void sub_540950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x540950ULL || rel >= 0x540960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00540960 size=16 callers=0 calls=0
*/
void sub_540960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x540960ULL || rel >= 0x540970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00540970 size=16 callers=0 calls=0
*/
void sub_540970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x540970ULL || rel >= 0x540980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00540980 size=16 callers=0 calls=0
*/
void sub_540980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x540980ULL || rel >= 0x540990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00540990 size=736 callers=0 calls=0
*/
void sub_540990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x540990ULL || rel >= 0x540c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00540c70 size=400 callers=0 calls=0
*/
void sub_540c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x540c70ULL || rel >= 0x540e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00540e00 size=1040 callers=0 calls=3
   calls: RemoveByIndex, sub_538910, sub_55d3b0
*/
void sub_540e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x540e00ULL || rel >= 0x541210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00541210 size=1248 callers=3 calls=5
   calls: SiCore_Array_215, sub_4bc640, sub_4bc690, sub_4c9090, sub_563620
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_DrawContext_Impl.cpp
   ref: DirectMapBuffer::CB_%d_%d
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: DirectMapBuffer::IB_%d_%d
   ref: DirectMapBuffer::VB_%d_%d
*/
void SiGfx_NX_DrawContext_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x541210ULL || rel >= 0x5416f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005416f0 size=736 callers=0 calls=1
   calls: SiGfx_NX_DrawContext_Impl
*/
void sub_5416f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5416f0ULL || rel >= 0x5419d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005419d0 size=32 callers=0 calls=0
*/
void sub_5419d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5419d0ULL || rel >= 0x5419f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005419f0 size=624 callers=0 calls=1
   calls: SiGfx_NX_DrawContext_Impl
*/
void sub_5419f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5419f0ULL || rel >= 0x541c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00541c60 size=32 callers=0 calls=0
*/
void sub_541c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x541c60ULL || rel >= 0x541c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00541c80 size=272 callers=0 calls=2
   calls: SiGfx_NX_DrawContext_Impl, sub_4ed0c0
*/
void sub_541c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x541c80ULL || rel >= 0x541d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00541d90 size=32 callers=0 calls=0
*/
void sub_541d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x541d90ULL || rel >= 0x541db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00541db0 size=80 callers=0 calls=0
*/
void sub_541db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x541db0ULL || rel >= 0x541e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00541e00 size=32 callers=0 calls=0
*/
void sub_541e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x541e00ULL || rel >= 0x541e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00541e20 size=32 callers=0 calls=0
*/
void sub_541e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x541e20ULL || rel >= 0x541e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00541e40 size=16 callers=0 calls=0
*/
void sub_541e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x541e40ULL || rel >= 0x541e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00541e50 size=16 callers=0 calls=0
*/
void sub_541e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x541e50ULL || rel >= 0x541e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00541e60 size=960 callers=0 calls=0
*/
void sub_541e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x541e60ULL || rel >= 0x542220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00542220 size=16 callers=0 calls=0
*/
void sub_542220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x542220ULL || rel >= 0x542230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00542230 size=16 callers=0 calls=0
*/
void sub_542230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x542230ULL || rel >= 0x542240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00542240 size=16 callers=0 calls=0
*/
void sub_542240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x542240ULL || rel >= 0x542250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00542250 size=16 callers=0 calls=0
*/
void sub_542250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x542250ULL || rel >= 0x542260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00542260 size=48 callers=0 calls=0
*/
void sub_542260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x542260ULL || rel >= 0x542290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00542290 size=16 callers=0 calls=0
*/
void sub_542290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x542290ULL || rel >= 0x5422a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005422a0 size=16 callers=0 calls=0
*/
void sub_5422a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5422a0ULL || rel >= 0x5422b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005422b0 size=16 callers=0 calls=0
*/
void sub_5422b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5422b0ULL || rel >= 0x5422c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005422c0 size=16 callers=0 calls=0
*/
void sub_5422c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5422c0ULL || rel >= 0x5422d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005422d0 size=16 callers=0 calls=0
*/
void sub_5422d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5422d0ULL || rel >= 0x5422e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005422e0 size=16 callers=0 calls=0
*/
void sub_5422e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5422e0ULL || rel >= 0x5422f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005422f0 size=16 callers=0 calls=0
*/
void sub_5422f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5422f0ULL || rel >= 0x542300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00542300 size=624 callers=0 calls=0
*/
void sub_542300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x542300ULL || rel >= 0x542570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00542570 size=544 callers=0 calls=0
*/
void sub_542570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x542570ULL || rel >= 0x542790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00542790 size=16 callers=0 calls=0
*/
void sub_542790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x542790ULL || rel >= 0x5427a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005427a0 size=160 callers=0 calls=0
*/
void sub_5427a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5427a0ULL || rel >= 0x542840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00542840 size=64 callers=0 calls=0
*/
void sub_542840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x542840ULL || rel >= 0x542880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00542880 size=32 callers=0 calls=0
*/
void sub_542880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x542880ULL || rel >= 0x5428a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005428a0 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source\NX/SiGfx_NX_DrawContext_Impl.h
*/
void SiGfx_NX_DrawContext_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5428a0ULL || rel >= 0x542920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00542920 size=16 callers=0 calls=0
*/
void sub_542920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x542920ULL || rel >= 0x542930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00542930 size=16 callers=0 calls=0
*/
void sub_542930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x542930ULL || rel >= 0x542940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00542940 size=16 callers=0 calls=0
*/
void sub_542940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x542940ULL || rel >= 0x542950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00542950 size=336 callers=4 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_214(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x542950ULL || rel >= 0x542aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00542aa0 size=416 callers=4 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_215(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x542aa0ULL || rel >= 0x542c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00542c40 size=64 callers=0 calls=1
   calls: SiCore_Array_216
*/
void sub_542c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x542c40ULL || rel >= 0x542c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00542c80 size=288 callers=6 calls=1
   calls: SiCore_Array_214
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_216(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x542c80ULL || rel >= 0x542da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00542da0 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_217(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x542da0ULL || rel >= 0x542e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00542e20 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_218(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x542e20ULL || rel >= 0x542e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00542e80 size=352 callers=3 calls=4
   calls: SiCore_Array_216, SiCore_Array_220, sub_4bc640, sub_4cbf40
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_219(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x542e80ULL || rel >= 0x542fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00542fe0 size=416 callers=1 calls=1
   calls: SiCore_Array_215
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x542fe0ULL || rel >= 0x543180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00543180 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_543180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x543180ULL || rel >= 0x543200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00543200 size=32 callers=0 calls=0
*/
void sub_543200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x543200ULL || rel >= 0x543220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00543220 size=64 callers=0 calls=1
   calls: sub_4bf6a0
*/
void sub_543220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x543220ULL || rel >= 0x543260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00543260 size=16 callers=0 calls=0
*/
void sub_543260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x543260ULL || rel >= 0x543270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00543270 size=16 callers=0 calls=0
*/
void sub_543270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x543270ULL || rel >= 0x543280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00543280 size=560 callers=1 calls=2
   calls: sub_4bc640, sub_4bf660
*/
void sub_543280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x543280ULL || rel >= 0x5434b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005434b0 size=544 callers=2 calls=3
   calls: sub_4bf6a0, sub_4cbf40, sub_544090
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_221(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5434b0ULL || rel >= 0x5436d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005436d0 size=64 callers=1 calls=1
   calls: sub_4cbf40
*/
void sub_5436d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5436d0ULL || rel >= 0x543710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00543710 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_222(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x543710ULL || rel >= 0x543790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00543790 size=160 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_223(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x543790ULL || rel >= 0x543830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00543830 size=160 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_224(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x543830ULL || rel >= 0x5438d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005438d0 size=160 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_225(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5438d0ULL || rel >= 0x543970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00543970 size=48 callers=0 calls=1
   calls: SiCore_Array_221
*/
void sub_543970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x543970ULL || rel >= 0x5439a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005439a0 size=1648 callers=1 calls=3
   calls: SiCore_Array_231, SiCore_Array_232, sub_4cbf40
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_226(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5439a0ULL || rel >= 0x544010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00544010 size=128 callers=0 calls=0
*/
void sub_544010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x544010ULL || rel >= 0x544090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00544090 size=496 callers=1 calls=0
*/
void sub_544090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x544090ULL || rel >= 0x544280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00544280 size=16 callers=0 calls=0
*/
void sub_544280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x544280ULL || rel >= 0x544290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00544290 size=688 callers=0 calls=3
   calls: sub_4c4d10, sub_4c4d90, sub_4ffbe0
*/
void sub_544290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x544290ULL || rel >= 0x544540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00544540 size=208 callers=0 calls=1
   calls: sub_4ee020
*/
void sub_544540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x544540ULL || rel >= 0x544610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00544610 size=1264 callers=0 calls=3
   calls: sub_4c4d10, sub_4c4d90, sub_4ffbe0
*/
void sub_544610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x544610ULL || rel >= 0x544b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00544b00 size=3600 callers=0 calls=3
   calls: sub_4c4d10, sub_4c4d90, sub_4ffbe0
*/
void sub_544b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x544b00ULL || rel >= 0x545910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00545910 size=1312 callers=0 calls=1
   calls: sub_4ffbd0
*/
void sub_545910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x545910ULL || rel >= 0x545e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00545e30 size=32 callers=0 calls=0
*/
void sub_545e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x545e30ULL || rel >= 0x545e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00545e50 size=128 callers=0 calls=0
   ref: ../../../../Include\SiGfx/SiGfx_Kernel.h
*/
void SiGfx_Kernel(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x545e50ULL || rel >= 0x545ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00545ed0 size=16 callers=0 calls=0
*/
void sub_545ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x545ed0ULL || rel >= 0x545ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00545ee0 size=32 callers=0 calls=0
*/
void sub_545ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x545ee0ULL || rel >= 0x545f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00545f00 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source/SiGfx_FontDrawHelper.h
*/
void SiGfx_FontDrawHelper(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x545f00ULL || rel >= 0x545f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00545f80 size=16 callers=0 calls=0
*/
void sub_545f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x545f80ULL || rel >= 0x545f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00545f90 size=32 callers=0 calls=0
*/
void sub_545f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x545f90ULL || rel >= 0x545fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00545fb0 size=16 callers=0 calls=0
*/
void sub_545fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x545fb0ULL || rel >= 0x545fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00545fc0 size=144 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_227(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x545fc0ULL || rel >= 0x546050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00546050 size=144 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_228(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x546050ULL || rel >= 0x5460e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005460e0 size=144 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_229(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5460e0ULL || rel >= 0x546170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00546170 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x546170ULL || rel >= 0x5461d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005461d0 size=704 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_231(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5461d0ULL || rel >= 0x546490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00546490 size=608 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_232(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x546490ULL || rel >= 0x5466f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005466f0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_5466f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5466f0ULL || rel >= 0x546770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00546770 size=32 callers=0 calls=0
*/
void sub_546770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x546770ULL || rel >= 0x546790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00546790 size=64 callers=0 calls=1
   calls: sub_4bf6a0
*/
void sub_546790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x546790ULL || rel >= 0x5467d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005467d0 size=224 callers=0 calls=1
   calls: sub_546e80
*/
void sub_5467d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5467d0ULL || rel >= 0x5468b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005468b0 size=224 callers=0 calls=1
   calls: sub_546e80
*/
void sub_5468b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5468b0ULL || rel >= 0x546990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00546990 size=176 callers=1 calls=1
   calls: sub_4bf660
*/
void sub_546990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x546990ULL || rel >= 0x546a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00546a40 size=192 callers=1 calls=2
   calls: sub_4bf6a0, sub_4cbf40
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_PrimitiveDrawHelper.cpp
*/
void SiGfx_PrimitiveDrawHelper(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x546a40ULL || rel >= 0x546b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00546b00 size=144 callers=1 calls=1
   calls: sub_4cbf40
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_PrimitiveDrawHelper.cpp
*/
void SiGfx_PrimitiveDrawHelper_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x546b00ULL || rel >= 0x546b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00546b90 size=208 callers=0 calls=2
   calls: sub_4bf6a0, sub_4cbf40
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_PrimitiveDrawHelper.cpp
*/
void SiGfx_PrimitiveDrawHelper_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x546b90ULL || rel >= 0x546c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00546c60 size=544 callers=1 calls=2
   calls: sub_4cbf40, sub_546e80
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_PrimitiveDrawHelper.cpp
*/
void SiGfx_PrimitiveDrawHelper_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x546c60ULL || rel >= 0x546e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00546e80 size=1104 callers=3 calls=1
   calls: sub_4ecf40
*/
void sub_546e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x546e80ULL || rel >= 0x5472d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005472d0 size=144 callers=0 calls=1
   calls: sub_547360
*/
void sub_5472d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5472d0ULL || rel >= 0x547360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00547360 size=336 callers=18 calls=1
   calls: sub_4ed0c0
*/
void sub_547360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x547360ULL || rel >= 0x5474b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005474b0 size=80 callers=0 calls=1
   calls: sub_547500
*/
void sub_5474b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5474b0ULL || rel >= 0x547500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00547500 size=608 callers=79 calls=1
   calls: sub_4c9380
*/
void sub_547500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x547500ULL || rel >= 0x547760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00547760 size=176 callers=0 calls=2
   calls: sub_4c9380, sub_547500
*/
void sub_547760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x547760ULL || rel >= 0x547810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00547810 size=224 callers=0 calls=1
   calls: sub_547500
*/
void sub_547810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x547810ULL || rel >= 0x5478f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005478f0 size=64 callers=0 calls=1
   calls: sub_4c9380
*/
void sub_5478f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5478f0ULL || rel >= 0x547930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00547930 size=272 callers=131 calls=0
*/
void sub_547930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x547930ULL || rel >= 0x547a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00547a40 size=288 callers=0 calls=0
*/
void sub_547a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x547a40ULL || rel >= 0x547b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00547b60 size=320 callers=0 calls=0
*/
void sub_547b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x547b60ULL || rel >= 0x547ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00547ca0 size=336 callers=0 calls=0
*/
void sub_547ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x547ca0ULL || rel >= 0x547df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00547df0 size=352 callers=0 calls=0
*/
void sub_547df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x547df0ULL || rel >= 0x547f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00547f50 size=368 callers=0 calls=0
*/
void sub_547f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x547f50ULL || rel >= 0x5480c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005480c0 size=368 callers=0 calls=0
*/
void sub_5480c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5480c0ULL || rel >= 0x548230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00548230 size=336 callers=0 calls=0
*/
void sub_548230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x548230ULL || rel >= 0x548380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00548380 size=368 callers=0 calls=0
*/
void sub_548380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x548380ULL || rel >= 0x5484f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005484f0 size=336 callers=0 calls=0
*/
void sub_5484f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5484f0ULL || rel >= 0x548640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00548640 size=1072 callers=0 calls=5
   calls: sub_4ee020, sub_548a70, sub_548f70, sub_54bb60, sub_54c070
*/
void sub_548640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x548640ULL || rel >= 0x548a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00548a70 size=1280 callers=1 calls=5
   calls: sub_4c9380, sub_4ed720, sub_547360, sub_547500, sub_547930
*/
void sub_548a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x548a70ULL || rel >= 0x548f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00548f70 size=11248 callers=1 calls=5
   calls: sub_4c9380, sub_4ed720, sub_547360, sub_547500, sub_547930
*/
void sub_548f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x548f70ULL || rel >= 0x54bb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054bb60 size=1296 callers=1 calls=5
   calls: sub_4c9380, sub_4ed720, sub_547360, sub_547500, sub_547930
*/
void sub_54bb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54bb60ULL || rel >= 0x54c070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054c070 size=2624 callers=1 calls=5
   calls: sub_4c9380, sub_4ed720, sub_547360, sub_547500, sub_547930
*/
void sub_54c070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54c070ULL || rel >= 0x54cab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054cab0 size=2128 callers=0 calls=6
   calls: sub_4c9380, sub_4ed720, sub_4ee020, sub_547360, sub_547500, sub_547930
*/
void sub_54cab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54cab0ULL || rel >= 0x54d300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054d300 size=32 callers=0 calls=0
*/
void sub_54d300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54d300ULL || rel >= 0x54d320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054d320 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source/SiGfx_PrimitiveDrawHelper.h
*/
void SiGfx_PrimitiveDrawHelper_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54d320ULL || rel >= 0x54d3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054d3a0 size=16 callers=0 calls=0
*/
void sub_54d3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54d3a0ULL || rel >= 0x54d3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054d3b0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_54d3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54d3b0ULL || rel >= 0x54d430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054d430 size=112 callers=1 calls=1
   calls: sub_4bf660
*/
void sub_54d430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54d430ULL || rel >= 0x54d4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054d4a0 size=224 callers=0 calls=1
   calls: SiGfx_NX_MemoryHeap_Impl_6
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_CommandCache_Impl.cpp
*/
void SiGfx_NX_CommandCache_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54d4a0ULL || rel >= 0x54d580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054d580 size=224 callers=0 calls=2
   calls: SiGfx_NX_MemoryHeap_Impl_6, sub_4bf6a0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_CommandCache_Impl.cpp
*/
void SiGfx_NX_CommandCache_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54d580ULL || rel >= 0x54d660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054d660 size=496 callers=1 calls=1
   calls: SiGfx_NX_MemoryHeap_Impl_5
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_CommandCache_Impl.cpp
*/
void SiGfx_NX_CommandCache_Impl_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54d660ULL || rel >= 0x54d850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054d850 size=16 callers=0 calls=0
*/
void sub_54d850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54d850ULL || rel >= 0x54d860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054d860 size=16 callers=0 calls=0
*/
void sub_54d860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54d860ULL || rel >= 0x54d870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054d870 size=16 callers=0 calls=0
*/
void sub_54d870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54d870ULL || rel >= 0x54d880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054d880 size=32 callers=0 calls=0
*/
void sub_54d880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54d880ULL || rel >= 0x54d8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054d8a0 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source\NX/SiGfx_NX_CommandCache_Impl.h
*/
void SiGfx_NX_CommandCache_Impl_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54d8a0ULL || rel >= 0x54d920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054d920 size=16 callers=0 calls=0
*/
void sub_54d920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54d920ULL || rel >= 0x54d930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054d930 size=16 callers=0 calls=0
*/
void sub_54d930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54d930ULL || rel >= 0x54d940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054d940 size=16 callers=0 calls=0
*/
void sub_54d940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54d940ULL || rel >= 0x54d950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054d950 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_54d950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54d950ULL || rel >= 0x54d9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054d9d0 size=160 callers=2 calls=2
   calls: sub_4bc640, sub_4bf660
*/
void sub_54d9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54d9d0ULL || rel >= 0x54da70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054da70 size=192 callers=0 calls=1
   calls: SiGfx_NX_CommandQueue_Impl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_233(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54da70ULL || rel >= 0x54db30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054db30 size=400 callers=2 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_CommandQueue_Impl.cpp
*/
void SiGfx_NX_CommandQueue_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54db30ULL || rel >= 0x54dcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054dcc0 size=160 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_234(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54dcc0ULL || rel >= 0x54dd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054dd60 size=208 callers=0 calls=2
   calls: SiGfx_NX_CommandQueue_Impl, sub_4bf6a0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_235(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54dd60ULL || rel >= 0x54de30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054de30 size=576 callers=2 calls=1
   calls: SiCore_Array_236
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_CommandQueue_Impl.cpp
*/
void SiGfx_NX_CommandQueue_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54de30ULL || rel >= 0x54e070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054e070 size=608 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_236(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54e070ULL || rel >= 0x54e2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054e2d0 size=16 callers=0 calls=0
*/
void sub_54e2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54e2d0ULL || rel >= 0x54e2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054e2e0 size=16 callers=0 calls=0
*/
void sub_54e2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54e2e0ULL || rel >= 0x54e2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054e2f0 size=16 callers=0 calls=0
*/
void sub_54e2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54e2f0ULL || rel >= 0x54e300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054e300 size=32 callers=0 calls=0
*/
void sub_54e300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54e300ULL || rel >= 0x54e320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054e320 size=16 callers=0 calls=0
*/
void sub_54e320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54e320ULL || rel >= 0x54e330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054e330 size=352 callers=0 calls=0
*/
void sub_54e330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54e330ULL || rel >= 0x54e490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054e490 size=16 callers=0 calls=0
*/
void sub_54e490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54e490ULL || rel >= 0x54e4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054e4a0 size=128 callers=0 calls=0
*/
void sub_54e4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54e4a0ULL || rel >= 0x54e520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054e520 size=112 callers=0 calls=0
*/
void sub_54e520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54e520ULL || rel >= 0x54e590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054e590 size=16 callers=0 calls=0
*/
void sub_54e590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54e590ULL || rel >= 0x54e5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054e5a0 size=32 callers=0 calls=0
*/
void sub_54e5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54e5a0ULL || rel >= 0x54e5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054e5c0 size=32 callers=0 calls=0
*/
void sub_54e5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54e5c0ULL || rel >= 0x54e5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054e5e0 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source\NX/SiGfx_NX_CommandQueue_Impl.h
*/
void SiGfx_NX_CommandQueue_Impl_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54e5e0ULL || rel >= 0x54e660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054e660 size=16 callers=0 calls=0
*/
void sub_54e660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54e660ULL || rel >= 0x54e670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054e670 size=16 callers=0 calls=0
*/
void sub_54e670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54e670ULL || rel >= 0x54e680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054e680 size=144 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_237(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54e680ULL || rel >= 0x54e710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054e710 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_54e710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54e710ULL || rel >= 0x54e790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054e790 size=128 callers=1 calls=2
   calls: sub_4bc640, sub_4bf660
*/
void sub_54e790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54e790ULL || rel >= 0x54e810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054e810 size=176 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_238(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54e810ULL || rel >= 0x54e8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054e8c0 size=160 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_239(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54e8c0ULL || rel >= 0x54e960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054e960 size=192 callers=0 calls=1
   calls: sub_4bf6a0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54e960ULL || rel >= 0x54ea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054ea20 size=16 callers=1 calls=0
*/
void sub_54ea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54ea20ULL || rel >= 0x54ea30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054ea30 size=16 callers=0 calls=0
*/
void sub_54ea30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54ea30ULL || rel >= 0x54ea40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054ea40 size=16 callers=0 calls=0
*/
void sub_54ea40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54ea40ULL || rel >= 0x54ea50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054ea50 size=16 callers=0 calls=0
*/
void sub_54ea50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54ea50ULL || rel >= 0x54ea60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054ea60 size=32 callers=0 calls=0
*/
void sub_54ea60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54ea60ULL || rel >= 0x54ea80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054ea80 size=176 callers=0 calls=1
   calls: SiCore_Array_242
*/
void sub_54ea80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54ea80ULL || rel >= 0x54eb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054eb30 size=80 callers=0 calls=0
*/
void sub_54eb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54eb30ULL || rel >= 0x54eb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054eb80 size=80 callers=0 calls=0
*/
void sub_54eb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54eb80ULL || rel >= 0x54ebd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054ebd0 size=80 callers=0 calls=0
*/
void sub_54ebd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54ebd0ULL || rel >= 0x54ec20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054ec20 size=80 callers=0 calls=0
*/
void sub_54ec20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54ec20ULL || rel >= 0x54ec70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054ec70 size=32 callers=0 calls=0
*/
void sub_54ec70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54ec70ULL || rel >= 0x54ec90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054ec90 size=32 callers=0 calls=0
*/
void sub_54ec90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54ec90ULL || rel >= 0x54ecb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054ecb0 size=64 callers=0 calls=0
*/
void sub_54ecb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54ecb0ULL || rel >= 0x54ecf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054ecf0 size=16 callers=0 calls=0
*/
void sub_54ecf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54ecf0ULL || rel >= 0x54ed00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054ed00 size=16 callers=0 calls=0
*/
void sub_54ed00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54ed00ULL || rel >= 0x54ed10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054ed10 size=16 callers=0 calls=0
*/
void sub_54ed10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54ed10ULL || rel >= 0x54ed20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054ed20 size=32 callers=0 calls=0
*/
void sub_54ed20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54ed20ULL || rel >= 0x54ed40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054ed40 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source\NX/SiGfx_NX_DescriptorSet_Impl.h
*/
void SiGfx_NX_DescriptorSet_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54ed40ULL || rel >= 0x54edc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054edc0 size=16 callers=0 calls=0
*/
void sub_54edc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54edc0ULL || rel >= 0x54edd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054edd0 size=144 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_241(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54edd0ULL || rel >= 0x54ee60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054ee60 size=656 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_242(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54ee60ULL || rel >= 0x54f0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054f0f0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_54f0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54f0f0ULL || rel >= 0x54f170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054f170 size=128 callers=1 calls=2
   calls: sub_4bc640, sub_4bf660
*/
void sub_54f170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54f170ULL || rel >= 0x54f1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054f1f0 size=208 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_243(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54f1f0ULL || rel >= 0x54f2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054f2c0 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_244(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54f2c0ULL || rel >= 0x54f340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054f340 size=224 callers=0 calls=1
   calls: sub_4bf6a0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_245(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54f340ULL || rel >= 0x54f420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054f420 size=16 callers=1 calls=0
*/
void sub_54f420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54f420ULL || rel >= 0x54f430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054f430 size=16 callers=0 calls=0
*/
void sub_54f430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54f430ULL || rel >= 0x54f440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054f440 size=16 callers=0 calls=0
*/
void sub_54f440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54f440ULL || rel >= 0x54f450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054f450 size=16 callers=0 calls=0
*/
void sub_54f450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54f450ULL || rel >= 0x54f460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054f460 size=368 callers=0 calls=3
   calls: SiCore_Array_247, SiGfx_NX_CommandList_Impl_2, sub_539920
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_CommandListPool_Impl.cpp
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiGfx_NX_CommandListPool_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54f460ULL || rel >= 0x54f5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054f5d0 size=64 callers=0 calls=0
*/
void sub_54f5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54f5d0ULL || rel >= 0x54f610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054f610 size=16 callers=0 calls=0
*/
void sub_54f610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54f610ULL || rel >= 0x54f620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054f620 size=48 callers=0 calls=0
*/
void sub_54f620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54f620ULL || rel >= 0x54f650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054f650 size=112 callers=0 calls=1
   calls: sub_596760
*/
void sub_54f650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54f650ULL || rel >= 0x54f6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054f6c0 size=16 callers=0 calls=0
*/
void sub_54f6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54f6c0ULL || rel >= 0x54f6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054f6d0 size=32 callers=0 calls=0
*/
void sub_54f6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54f6d0ULL || rel >= 0x54f6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054f6f0 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source\NX/SiGfx_NX_CommandListPool_Impl.h
*/
void SiGfx_NX_CommandListPool_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54f6f0ULL || rel >= 0x54f770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054f770 size=16 callers=0 calls=0
*/
void sub_54f770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54f770ULL || rel >= 0x54f780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054f780 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_246(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54f780ULL || rel >= 0x54f7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054f7e0 size=416 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_247(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54f7e0ULL || rel >= 0x54f980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054f980 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_54f980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54f980ULL || rel >= 0x54fa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054fa00 size=320 callers=1 calls=3
   calls: sub_4bc640, sub_4bf660, sub_4cbf40
*/
void sub_54fa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54fa00ULL || rel >= 0x54fb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054fb40 size=640 callers=1 calls=1
   calls: SiCore_Array_249
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_248(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54fb40ULL || rel >= 0x54fdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0054fdc0 size=576 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_249(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54fdc0ULL || rel >= 0x550000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00550000 size=48 callers=0 calls=1
   calls: SiCore_Array_248
*/
void sub_550000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x550000ULL || rel >= 0x550030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00550030 size=480 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x550030ULL || rel >= 0x550210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00550210 size=16 callers=0 calls=0
*/
void sub_550210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x550210ULL || rel >= 0x550220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00550220 size=16 callers=0 calls=0
*/
void sub_550220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x550220ULL || rel >= 0x550230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00550230 size=16 callers=0 calls=0
*/
void sub_550230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x550230ULL || rel >= 0x550240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00550240 size=608 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_251(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x550240ULL || rel >= 0x5504a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005504a0 size=112 callers=0 calls=0
*/
void sub_5504a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5504a0ULL || rel >= 0x550510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00550510 size=320 callers=0 calls=1
   calls: SiCore_Array_254
*/
void sub_550510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x550510ULL || rel >= 0x550650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00550650 size=16 callers=0 calls=0
*/
void sub_550650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x550650ULL || rel >= 0x550660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00550660 size=32 callers=0 calls=0
*/
void sub_550660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x550660ULL || rel >= 0x550680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00550680 size=16 callers=0 calls=0
*/
void sub_550680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x550680ULL || rel >= 0x550690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00550690 size=320 callers=0 calls=1
   calls: SiCore_Array_254
*/
void sub_550690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x550690ULL || rel >= 0x5507d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005507d0 size=16 callers=0 calls=0
*/
void sub_5507d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5507d0ULL || rel >= 0x5507e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005507e0 size=32 callers=0 calls=0
*/
void sub_5507e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5507e0ULL || rel >= 0x550800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00550800 size=16 callers=0 calls=0
*/
void sub_550800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x550800ULL || rel >= 0x550810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00550810 size=320 callers=0 calls=1
   calls: SiCore_Array_254
*/
void sub_550810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x550810ULL || rel >= 0x550950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00550950 size=16 callers=0 calls=0
*/
void sub_550950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x550950ULL || rel >= 0x550960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00550960 size=32 callers=0 calls=0
*/
void sub_550960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x550960ULL || rel >= 0x550980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00550980 size=16 callers=0 calls=0
*/
void sub_550980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x550980ULL || rel >= 0x550990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00550990 size=320 callers=0 calls=1
   calls: SiCore_Array_254
*/
void sub_550990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x550990ULL || rel >= 0x550ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00550ad0 size=16 callers=0 calls=0
*/
void sub_550ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x550ad0ULL || rel >= 0x550ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00550ae0 size=32 callers=0 calls=0
*/
void sub_550ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x550ae0ULL || rel >= 0x550b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00550b00 size=16 callers=0 calls=0
*/
void sub_550b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x550b00ULL || rel >= 0x550b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00550b10 size=272 callers=0 calls=0
*/
void sub_550b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x550b10ULL || rel >= 0x550c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00550c20 size=272 callers=0 calls=0
*/
void sub_550c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x550c20ULL || rel >= 0x550d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00550d30 size=272 callers=0 calls=0
*/
void sub_550d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x550d30ULL || rel >= 0x550e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00550e40 size=224 callers=0 calls=0
*/
void sub_550e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x550e40ULL || rel >= 0x550f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00550f20 size=16 callers=0 calls=0
*/
void sub_550f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x550f20ULL || rel >= 0x550f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00550f30 size=16 callers=0 calls=0
*/
void sub_550f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x550f30ULL || rel >= 0x550f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00550f40 size=16 callers=0 calls=0
*/
void sub_550f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x550f40ULL || rel >= 0x550f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00550f50 size=32 callers=0 calls=0
*/
void sub_550f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x550f50ULL || rel >= 0x550f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00550f70 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source\NX/SiGfx_NX_DescriptorTable_Impl.h
*/
void SiGfx_NX_DescriptorTable_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x550f70ULL || rel >= 0x550ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00550ff0 size=16 callers=0 calls=0
*/
void sub_550ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x550ff0ULL || rel >= 0x551000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00551000 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_252(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x551000ULL || rel >= 0x551080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00551080 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_253(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x551080ULL || rel >= 0x5510e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005510e0 size=416 callers=4 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_254(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5510e0ULL || rel >= 0x551280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00551280 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_551280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x551280ULL || rel >= 0x551300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00551300 size=64 callers=2 calls=1
   calls: sub_50aee0
*/
void sub_551300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x551300ULL || rel >= 0x551340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00551340 size=128 callers=0 calls=1
   calls: sub_50b0d0
*/
void sub_551340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x551340ULL || rel >= 0x5513c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005513c0 size=144 callers=0 calls=2
   calls: SiCore_Map_6, sub_50b0d0
*/
void sub_5513c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5513c0ULL || rel >= 0x551450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00551450 size=16 callers=0 calls=0
*/
void sub_551450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x551450ULL || rel >= 0x551460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00551460 size=96 callers=0 calls=0
*/
void sub_551460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x551460ULL || rel >= 0x5514c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005514c0 size=688 callers=0 calls=2
   calls: SiCore_Array_203, sub_564560
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_FreeType_Manager.cpp
*/
void SiGfx_NX_FreeType_Manager(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5514c0ULL || rel >= 0x551770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00551770 size=64 callers=0 calls=1
   calls: sub_50c2b0
*/
void sub_551770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x551770ULL || rel >= 0x5517b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005517b0 size=96 callers=0 calls=0
*/
void sub_5517b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5517b0ULL || rel >= 0x551810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00551810 size=16 callers=0 calls=0
*/
void sub_551810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x551810ULL || rel >= 0x551820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00551820 size=16 callers=0 calls=0
*/
void sub_551820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x551820ULL || rel >= 0x551830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00551830 size=16 callers=0 calls=0
*/
void sub_551830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x551830ULL || rel >= 0x551840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00551840 size=16 callers=0 calls=0
*/
void sub_551840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x551840ULL || rel >= 0x551850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00551850 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_551850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x551850ULL || rel >= 0x5518d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005518d0 size=64 callers=2 calls=1
   calls: sub_596410
*/
void sub_5518d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5518d0ULL || rel >= 0x551910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00551910 size=48 callers=1 calls=1
   calls: SiGfx_NX_DescriptorHeap
*/
void sub_551910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x551910ULL || rel >= 0x551940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00551940 size=272 callers=1 calls=4
   calls: SiGfx_NX_MemoryHeap_Impl_6, sub_4cbf40, sub_596520, sub_596760
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_DescriptorHeap.cpp
*/
void SiGfx_NX_DescriptorHeap(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x551940ULL || rel >= 0x551a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00551a50 size=1152 callers=2 calls=5
   calls: SiGfx_NX_MemoryHeap_Impl_5, sub_4cbf40, sub_563620, sub_596640, sub_596680
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_DescriptorHeap.cpp
*/
void SiGfx_NX_DescriptorHeap_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x551a50ULL || rel >= 0x551ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00551ed0 size=256 callers=0 calls=2
   calls: sub_596640, sub_596680
*/
void sub_551ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x551ed0ULL || rel >= 0x551fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00551fd0 size=176 callers=0 calls=2
   calls: sub_596640, sub_596680
*/
void sub_551fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x551fd0ULL || rel >= 0x552080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00552080 size=16 callers=1 calls=0
*/
void sub_552080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x552080ULL || rel >= 0x552090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00552090 size=32 callers=1 calls=0
*/
void sub_552090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x552090ULL || rel >= 0x5520b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005520b0 size=64 callers=1 calls=1
   calls: sub_596410
*/
void sub_5520b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5520b0ULL || rel >= 0x5520f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005520f0 size=48 callers=1 calls=1
   calls: SiGfx_NX_DescriptorHeap_3
*/
void sub_5520f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5520f0ULL || rel >= 0x552120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00552120 size=272 callers=1 calls=4
   calls: SiGfx_NX_MemoryHeap_Impl_6, sub_4cbf40, sub_596520, sub_596760
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_DescriptorHeap.cpp
*/
void SiGfx_NX_DescriptorHeap_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x552120ULL || rel >= 0x552230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00552230 size=1152 callers=1 calls=5
   calls: SiGfx_NX_MemoryHeap_Impl_5, sub_4cbf40, sub_563620, sub_596640, sub_596680
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_DescriptorHeap.cpp
*/
void SiGfx_NX_DescriptorHeap_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x552230ULL || rel >= 0x5526b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005526b0 size=224 callers=0 calls=2
   calls: sub_596640, sub_596680
*/
void sub_5526b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5526b0ULL || rel >= 0x552790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00552790 size=176 callers=0 calls=2
   calls: sub_596640, sub_596680
*/
void sub_552790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x552790ULL || rel >= 0x552840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00552840 size=16 callers=1 calls=0
*/
void sub_552840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x552840ULL || rel >= 0x552850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00552850 size=32 callers=0 calls=0
*/
void sub_552850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x552850ULL || rel >= 0x552870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00552870 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_552870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x552870ULL || rel >= 0x5528f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005528f0 size=176 callers=7 calls=4
   calls: sub_4bc640, sub_4bc690, sub_4bca60, sub_4bf660
*/
void sub_5528f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5528f0ULL || rel >= 0x5529a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005529a0 size=224 callers=2 calls=2
   calls: sub_4bcc40, sub_4bd550
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_MemoryHeap_Impl.cpp
*/
void SiGfx_NX_MemoryHeap_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5529a0ULL || rel >= 0x552a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00552a80 size=16 callers=0 calls=0
*/
void sub_552a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x552a80ULL || rel >= 0x552a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00552a90 size=48 callers=0 calls=1
   calls: SiGfx_NX_MemoryHeap_Impl
*/
void sub_552a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x552a90ULL || rel >= 0x552ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00552ac0 size=48 callers=0 calls=1
   calls: SiGfx_NX_MemoryHeap_Impl
*/
void sub_552ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x552ac0ULL || rel >= 0x552af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00552af0 size=16 callers=1 calls=0
*/
void sub_552af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x552af0ULL || rel >= 0x552b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00552b00 size=64 callers=0 calls=2
   calls: sub_4c3510, sub_4c4700
*/
void sub_552b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x552b00ULL || rel >= 0x552b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00552b40 size=64 callers=0 calls=2
   calls: sub_4c3510, sub_4c4700
*/
void sub_552b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x552b40ULL || rel >= 0x552b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00552b80 size=16 callers=0 calls=0
*/
void sub_552b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x552b80ULL || rel >= 0x552b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00552b90 size=16 callers=0 calls=0
*/
void sub_552b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x552b90ULL || rel >= 0x552ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00552ba0 size=16 callers=0 calls=0
*/
void sub_552ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x552ba0ULL || rel >= 0x552bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00552bb0 size=16 callers=0 calls=0
*/
void sub_552bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x552bb0ULL || rel >= 0x552bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00552bc0 size=16 callers=0 calls=0
*/
void sub_552bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x552bc0ULL || rel >= 0x552bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00552bd0 size=16 callers=0 calls=0
*/
void sub_552bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x552bd0ULL || rel >= 0x552be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00552be0 size=16 callers=0 calls=0
*/
void sub_552be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x552be0ULL || rel >= 0x552bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00552bf0 size=640 callers=0 calls=3
   calls: sub_4bcdd0, sub_4cbf40, sub_563620
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_MemoryHeap_Impl.cpp
*/
void SiGfx_NX_MemoryHeap_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x552bf0ULL || rel >= 0x552e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00552e70 size=128 callers=0 calls=1
   calls: sub_4bd550
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_MemoryHeap_Impl.cpp
*/
void SiGfx_NX_MemoryHeap_Impl_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x552e70ULL || rel >= 0x552ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00552ef0 size=16 callers=0 calls=0
*/
void sub_552ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x552ef0ULL || rel >= 0x552f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00552f00 size=16 callers=0 calls=0
*/
void sub_552f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x552f00ULL || rel >= 0x552f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00552f10 size=16 callers=0 calls=0
*/
void sub_552f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x552f10ULL || rel >= 0x552f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00552f20 size=16 callers=0 calls=0
*/
void sub_552f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x552f20ULL || rel >= 0x552f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00552f30 size=16 callers=0 calls=0
*/
void sub_552f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x552f30ULL || rel >= 0x552f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00552f40 size=16 callers=0 calls=0
*/
void sub_552f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x552f40ULL || rel >= 0x552f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00552f50 size=112 callers=6 calls=1
   calls: sub_4bd8e0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_MemoryHeap_Impl.cpp
*/
void SiGfx_NX_MemoryHeap_Impl_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x552f50ULL || rel >= 0x552fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00552fc0 size=80 callers=13 calls=1
   calls: sub_4bd8e0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_MemoryHeap_Impl.cpp
*/
void SiGfx_NX_MemoryHeap_Impl_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x552fc0ULL || rel >= 0x553010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00553010 size=48 callers=13 calls=0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_MemoryHeap_Impl.cpp
*/
void SiGfx_NX_MemoryHeap_Impl_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x553010ULL || rel >= 0x553040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00553040 size=16 callers=0 calls=0
*/
void sub_553040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x553040ULL || rel >= 0x553050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00553050 size=32 callers=0 calls=0
*/
void sub_553050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x553050ULL || rel >= 0x553070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00553070 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source\NX/SiGfx_NX_MemoryHeap_Impl.h
*/
void SiGfx_NX_MemoryHeap_Impl_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x553070ULL || rel >= 0x5530f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005530f0 size=16 callers=0 calls=0
*/
void sub_5530f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5530f0ULL || rel >= 0x553100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00553100 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_553100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x553100ULL || rel >= 0x553180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00553180 size=432 callers=1 calls=1
   calls: sub_4bf660
*/
void sub_553180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x553180ULL || rel >= 0x553330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00553330 size=64 callers=0 calls=1
   calls: sub_553370
*/
void sub_553330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x553330ULL || rel >= 0x553370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00553370 size=720 callers=2 calls=0
*/
void sub_553370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x553370ULL || rel >= 0x553640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00553640 size=64 callers=0 calls=2
   calls: sub_4bf6a0, sub_553370
*/
void sub_553640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x553640ULL || rel >= 0x553680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00553680 size=16 callers=1 calls=0
*/
void sub_553680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x553680ULL || rel >= 0x553690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00553690 size=16 callers=0 calls=0
*/
void sub_553690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x553690ULL || rel >= 0x5536a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005536a0 size=16 callers=0 calls=0
*/
void sub_5536a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5536a0ULL || rel >= 0x5536b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005536b0 size=16 callers=0 calls=0
*/
void sub_5536b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5536b0ULL || rel >= 0x5536c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005536c0 size=32 callers=0 calls=0
*/
void sub_5536c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5536c0ULL || rel >= 0x5536e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005536e0 size=3040 callers=0 calls=11
   calls: sub_4ed0c0, sub_562ee0, sub_5630e0, sub_563150, sub_563160, sub_563190, sub_5631d0, sub_5631f0, sub_563220, sub_563250, sub_563600
*/
void sub_5536e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5536e0ULL || rel >= 0x5542c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005542c0 size=16 callers=0 calls=0
*/
void sub_5542c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5542c0ULL || rel >= 0x5542d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005542d0 size=16 callers=0 calls=0
*/
void sub_5542d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5542d0ULL || rel >= 0x5542e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005542e0 size=16 callers=0 calls=0
*/
void sub_5542e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5542e0ULL || rel >= 0x5542f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005542f0 size=32 callers=0 calls=0
*/
void sub_5542f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5542f0ULL || rel >= 0x554310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554310 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source\NX/SiGfx_NX_PipelineState_Impl.h
*/
void SiGfx_NX_PipelineState_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554310ULL || rel >= 0x554390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554390 size=16 callers=0 calls=0
*/
void sub_554390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554390ULL || rel >= 0x5543a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005543a0 size=16 callers=0 calls=0
*/
void sub_5543a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5543a0ULL || rel >= 0x5543b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005543b0 size=16 callers=0 calls=0
*/
void sub_5543b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5543b0ULL || rel >= 0x5543c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005543c0 size=16 callers=0 calls=0
*/
void sub_5543c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5543c0ULL || rel >= 0x5543d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005543d0 size=16 callers=0 calls=0
*/
void sub_5543d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5543d0ULL || rel >= 0x5543e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005543e0 size=16 callers=0 calls=0
*/
void sub_5543e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5543e0ULL || rel >= 0x5543f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005543f0 size=16 callers=0 calls=0
*/
void sub_5543f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5543f0ULL || rel >= 0x554400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554400 size=16 callers=0 calls=0
*/
void sub_554400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554400ULL || rel >= 0x554410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554410 size=16 callers=0 calls=0
*/
void sub_554410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554410ULL || rel >= 0x554420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554420 size=16 callers=0 calls=0
*/
void sub_554420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554420ULL || rel >= 0x554430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554430 size=16 callers=0 calls=0
*/
void sub_554430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554430ULL || rel >= 0x554440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554440 size=16 callers=0 calls=0
*/
void sub_554440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554440ULL || rel >= 0x554450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554450 size=16 callers=0 calls=0
*/
void sub_554450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554450ULL || rel >= 0x554460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554460 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_554460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554460ULL || rel >= 0x5544e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005544e0 size=64 callers=1 calls=1
   calls: sub_534000
*/
void sub_5544e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5544e0ULL || rel >= 0x554520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554520 size=64 callers=0 calls=1
   calls: sub_534430
*/
void sub_554520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554520ULL || rel >= 0x554560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554560 size=64 callers=0 calls=2
   calls: sub_5341b0, sub_534430
*/
void sub_554560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554560ULL || rel >= 0x5545a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005545a0 size=64 callers=0 calls=2
   calls: SiCore_Array_179, sub_534420
*/
void sub_5545a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5545a0ULL || rel >= 0x5545e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005545e0 size=16 callers=0 calls=0
*/
void sub_5545e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5545e0ULL || rel >= 0x5545f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005545f0 size=512 callers=1 calls=7
   calls: sub_4c5a90, sub_4fef10, sub_4ff090, sub_554870, sub_554b80, sub_596640, sub_596680
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_QueryPool.cpp
   ref: Query_%d
*/
void SiGfx_NX_QueryPool(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5545f0ULL || rel >= 0x5547f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005547f0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_5547f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5547f0ULL || rel >= 0x554870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554870 size=144 callers=1 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4bf660
*/
void sub_554870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554870ULL || rel >= 0x554900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554900 size=160 callers=0 calls=1
   calls: sub_4f9640
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_84(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554900ULL || rel >= 0x5549a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005549a0 size=160 callers=0 calls=1
   calls: sub_4f9640
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_85(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5549a0ULL || rel >= 0x554a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554a40 size=160 callers=0 calls=2
   calls: sub_4bf6a0, sub_4f9640
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_86(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554a40ULL || rel >= 0x554ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554ae0 size=160 callers=0 calls=2
   calls: sub_4bf6a0, sub_4f9640
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_87(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554ae0ULL || rel >= 0x554b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

