/* main functions 00582b50..0059f730 (35 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00582b50 size=80 callers=2 calls=0
*/
void sub_582b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x582b50ULL || rel >= 0x582ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00582ba0 size=16 callers=0 calls=0
*/
void sub_582ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x582ba0ULL || rel >= 0x582bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00582bb0 size=16 callers=0 calls=0
*/
void sub_582bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x582bb0ULL || rel >= 0x582bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00582bc0 size=16 callers=0 calls=0
*/
void sub_582bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x582bc0ULL || rel >= 0x582bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00582bd0 size=16 callers=0 calls=0
*/
void sub_582bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x582bd0ULL || rel >= 0x582be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00582be0 size=16 callers=0 calls=0
*/
void sub_582be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x582be0ULL || rel >= 0x582bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00582bf0 size=16 callers=0 calls=0
*/
void sub_582bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x582bf0ULL || rel >= 0x582c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00582c00 size=16 callers=0 calls=0
*/
void sub_582c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x582c00ULL || rel >= 0x582c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00582c10 size=32 callers=0 calls=0
*/
void sub_582c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x582c10ULL || rel >= 0x582c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00582c30 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiIO/Source/SiIO_MemoryStream_Impl.h
*/
void SiIO_MemoryStream_Impl_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x582c30ULL || rel >= 0x582cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00582cb0 size=16 callers=0 calls=0
*/
void sub_582cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x582cb0ULL || rel >= 0x582cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00582cc0 size=16 callers=0 calls=0
*/
void sub_582cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x582cc0ULL || rel >= 0x582cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00582cd0 size=16 callers=0 calls=0
*/
void sub_582cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x582cd0ULL || rel >= 0x582ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00582ce0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_582ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x582ce0ULL || rel >= 0x582d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00582d60 size=16 callers=2 calls=0
*/
void sub_582d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x582d60ULL || rel >= 0x582d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00582d70 size=16 callers=4 calls=0
*/
void sub_582d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x582d70ULL || rel >= 0x582d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00582d80 size=176 callers=9 calls=4
   calls: sub_4c4d00, sub_57cfb0, sub_57d840, sub_583b70
*/
void sub_582d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x582d80ULL || rel >= 0x582e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00582e30 size=128 callers=1 calls=5
   calls: sub_4c4d00, sub_4cbbb0, sub_57cfb0, sub_57d840, sub_583be0
*/
void sub_582e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x582e30ULL || rel >= 0x582eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00582eb0 size=96 callers=1 calls=4
   calls: sub_4bc640, sub_4bc690, sub_4c4290, sub_4c9eb0
*/
void sub_582eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x582eb0ULL || rel >= 0x582f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00582f10 size=96 callers=60 calls=0
*/
void sub_582f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x582f10ULL || rel >= 0x582f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00582f70 size=128 callers=65 calls=0
*/
void sub_582f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x582f70ULL || rel >= 0x582ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00582ff0 size=336 callers=1 calls=0
*/
void sub_582ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x582ff0ULL || rel >= 0x583140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00583140 size=256 callers=1 calls=0
*/
void sub_583140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x583140ULL || rel >= 0x583240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00583240 size=128 callers=1 calls=0
*/
void sub_583240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x583240ULL || rel >= 0x5832c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005832c0 size=128 callers=1 calls=0
*/
void sub_5832c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5832c0ULL || rel >= 0x583340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00583340 size=208 callers=1 calls=0
*/
void sub_583340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x583340ULL || rel >= 0x583410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00583410 size=368 callers=1 calls=1
   calls: sub_57d030
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_Utility.cpp
*/
void SiIO_Utility(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x583410ULL || rel >= 0x583580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00583580 size=224 callers=1 calls=1
   calls: sub_57d030
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_Utility.cpp
*/
void SiIO_Utility_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x583580ULL || rel >= 0x583660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00583660 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_583660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x583660ULL || rel >= 0x5836e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005836e0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_5836e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5836e0ULL || rel >= 0x583760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00583760 size=96 callers=1 calls=2
   calls: sub_4bc640, sub_4bf660
*/
void sub_583760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x583760ULL || rel >= 0x5837c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005837c0 size=208 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_LinkedList.h
*/
void SiCore_LinkedList_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5837c0ULL || rel >= 0x583890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00583890 size=224 callers=0 calls=1
   calls: sub_4bf6a0
   ref: ../../../../Include\SiCore/SiCore_LinkedList.h
*/
void SiCore_LinkedList_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x583890ULL || rel >= 0x583970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00583970 size=16 callers=1 calls=0
*/
void sub_583970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x583970ULL || rel >= 0x583980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00583980 size=256 callers=1 calls=2
   calls: sub_583d80, sub_584410
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_VFSManager_Impl.cpp
   ref: ../../../../Include\SiCore/SiCore_LinkedList.h
*/
void SiIO_VFSManager_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x583980ULL || rel >= 0x583a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00583a80 size=240 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_LinkedList.h
*/
void SiCore_LinkedList_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x583a80ULL || rel >= 0x583b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00583b70 size=112 callers=2 calls=0
*/
void sub_583b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x583b70ULL || rel >= 0x583be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00583be0 size=112 callers=1 calls=0
*/
void sub_583be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x583be0ULL || rel >= 0x583c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00583c50 size=32 callers=0 calls=0
*/
void sub_583c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x583c50ULL || rel >= 0x583c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00583c70 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiIO/Source/SiIO_VFSManager_Impl.h
*/
void SiIO_VFSManager_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x583c70ULL || rel >= 0x583cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00583cf0 size=16 callers=0 calls=0
*/
void sub_583cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x583cf0ULL || rel >= 0x583d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00583d00 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_583d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x583d00ULL || rel >= 0x583d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00583d80 size=384 callers=1 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4bf660
*/
void sub_583d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x583d80ULL || rel >= 0x583f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00583f00 size=912 callers=1 calls=3
   calls: SiCore_LinkedList_4, sub_57cfb0, sub_57d840
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_142(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x583f00ULL || rel >= 0x584290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00584290 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_337(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x584290ULL || rel >= 0x584310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00584310 size=208 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_338(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x584310ULL || rel >= 0x5843e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005843e0 size=48 callers=0 calls=1
   calls: SiCore_String_142
*/
void sub_5843e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5843e0ULL || rel >= 0x584410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00584410 size=16 callers=1 calls=0
*/
void sub_584410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x584410ULL || rel >= 0x584420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00584420 size=448 callers=0 calls=10
   calls: SiCore_LinkedList, SiIOVFS, SiIO_MemoryStream_Impl, sub_4c4700, sub_4c8020, sub_4e4230, sub_57d030, sub_580550, sub_582b50, sub_584750
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_143(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x584420ULL || rel >= 0x5845e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005845e0 size=368 callers=1 calls=1
   calls: sub_4c5630
   ref: SiIOVFS
*/
void SiIOVFS(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5845e0ULL || rel >= 0x584750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00584750 size=368 callers=1 calls=4
   calls: SiCore_Array_342, SiCore_Array_344, SiCore_String_146, sub_5848c0
*/
void sub_584750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x584750ULL || rel >= 0x5848c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005848c0 size=880 callers=1 calls=1
   calls: SiCore_Array_344
*/
void sub_5848c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5848c0ULL || rel >= 0x584c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00584c30 size=336 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_339(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x584c30ULL || rel >= 0x584d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00584d80 size=16 callers=0 calls=0
*/
void sub_584d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x584d80ULL || rel >= 0x584d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00584d90 size=32 callers=0 calls=0
*/
void sub_584d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x584d90ULL || rel >= 0x584db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00584db0 size=16 callers=0 calls=0
*/
void sub_584db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x584db0ULL || rel >= 0x584dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00584dc0 size=16 callers=0 calls=0
*/
void sub_584dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x584dc0ULL || rel >= 0x584dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00584dd0 size=16 callers=0 calls=0
*/
void sub_584dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x584dd0ULL || rel >= 0x584de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00584de0 size=16 callers=0 calls=0
*/
void sub_584de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x584de0ULL || rel >= 0x584df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00584df0 size=1120 callers=0 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4c4700
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_144(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x584df0ULL || rel >= 0x585250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00585250 size=1104 callers=0 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4c4700
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_145(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x585250ULL || rel >= 0x5856a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005856a0 size=16 callers=0 calls=0
*/
void sub_5856a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5856a0ULL || rel >= 0x5856b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005856b0 size=16 callers=0 calls=0
*/
void sub_5856b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5856b0ULL || rel >= 0x5856c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005856c0 size=16 callers=0 calls=0
*/
void sub_5856c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5856c0ULL || rel >= 0x5856d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005856d0 size=16 callers=0 calls=0
*/
void sub_5856d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5856d0ULL || rel >= 0x5856e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005856e0 size=16 callers=0 calls=0
*/
void sub_5856e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5856e0ULL || rel >= 0x5856f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005856f0 size=16 callers=0 calls=0
*/
void sub_5856f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5856f0ULL || rel >= 0x585700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00585700 size=128 callers=0 calls=2
   calls: sub_587260, sub_587510
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_VFS_Impl.cpp
*/
void SiIO_VFS_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x585700ULL || rel >= 0x585780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00585780 size=1312 callers=0 calls=8
   calls: SiCore_String_146, sub_4bc640, sub_4c5520, sub_57d030, sub_585ca0, sub_585d70, sub_585e70, sub_586260
   ref: ../../../../Include\SiCore/SiCore_Array.h
   ref: SiIOVFS
*/
void SiIOVFS_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x585780ULL || rel >= 0x585ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00585ca0 size=208 callers=1 calls=2
   calls: SiCore_Array_344, sub_586750
*/
void sub_585ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x585ca0ULL || rel >= 0x585d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00585d70 size=256 callers=1 calls=2
   calls: SiCore_Array_344, sub_586910
*/
void sub_585d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x585d70ULL || rel >= 0x585e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00585e70 size=816 callers=1 calls=0
*/
void sub_585e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x585e70ULL || rel >= 0x5861a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005861a0 size=160 callers=0 calls=1
   calls: sub_587260
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_VFS_Impl.cpp
*/
void SiIO_VFS_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5861a0ULL || rel >= 0x586240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00586240 size=32 callers=0 calls=0
*/
void sub_586240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x586240ULL || rel >= 0x586260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00586260 size=176 callers=2 calls=1
   calls: sub_586260
*/
void sub_586260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x586260ULL || rel >= 0x586310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00586310 size=1088 callers=3 calls=5
   calls: SiCore_String_11, SiCore_String_146, sub_4c3510, sub_4c45c0, sub_4c8020
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_146(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x586310ULL || rel >= 0x586750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00586750 size=448 callers=2 calls=2
   calls: SiCore_Array_344, sub_586750
*/
void sub_586750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x586750ULL || rel >= 0x586910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00586910 size=320 callers=2 calls=1
   calls: sub_586910
*/
void sub_586910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x586910ULL || rel >= 0x586a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00586a50 size=32 callers=0 calls=0
*/
void sub_586a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x586a50ULL || rel >= 0x586a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00586a70 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiIO/Source/SiIO_VFS_Impl.h
*/
void SiIO_VFS_Impl_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x586a70ULL || rel >= 0x586af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00586af0 size=16 callers=0 calls=0
*/
void sub_586af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x586af0ULL || rel >= 0x586b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00586b00 size=192 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x586b00ULL || rel >= 0x586bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00586bc0 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_341(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x586bc0ULL || rel >= 0x586c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00586c20 size=640 callers=1 calls=3
   calls: SiCore_Array_343, sub_4c8020, sub_587260
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_342(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x586c20ULL || rel >= 0x586ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00586ea0 size=416 callers=2 calls=1
   calls: SiCore_Array_344
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_343(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x586ea0ULL || rel >= 0x587040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00587040 size=416 callers=11 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_344(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x587040ULL || rel >= 0x5871e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005871e0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_5871e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5871e0ULL || rel >= 0x587260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00587260 size=304 callers=3 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4bf660
*/
void sub_587260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x587260ULL || rel >= 0x587390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00587390 size=336 callers=1 calls=1
   calls: SiCore_Array_345
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_147(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x587390ULL || rel >= 0x5874e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005874e0 size=48 callers=0 calls=1
   calls: SiCore_String_147
*/
void sub_5874e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5874e0ULL || rel >= 0x587510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00587510 size=16 callers=1 calls=0
*/
void sub_587510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x587510ULL || rel >= 0x587520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00587520 size=304 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_345(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x587520ULL || rel >= 0x587650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00587650 size=16 callers=0 calls=0
*/
void sub_587650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x587650ULL || rel >= 0x587660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00587660 size=16 callers=0 calls=0
*/
void sub_587660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x587660ULL || rel >= 0x587670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00587670 size=16 callers=0 calls=0
*/
void sub_587670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x587670ULL || rel >= 0x587680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00587680 size=16 callers=0 calls=0
*/
void sub_587680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x587680ULL || rel >= 0x587690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00587690 size=16 callers=0 calls=0
*/
void sub_587690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x587690ULL || rel >= 0x5876a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005876a0 size=16 callers=0 calls=0
*/
void sub_5876a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5876a0ULL || rel >= 0x5876b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005876b0 size=16 callers=0 calls=0
*/
void sub_5876b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5876b0ULL || rel >= 0x5876c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005876c0 size=16 callers=0 calls=0
*/
void sub_5876c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5876c0ULL || rel >= 0x5876d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005876d0 size=16 callers=0 calls=0
*/
void sub_5876d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5876d0ULL || rel >= 0x5876e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005876e0 size=16 callers=0 calls=0
*/
void sub_5876e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5876e0ULL || rel >= 0x5876f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005876f0 size=16 callers=0 calls=0
*/
void sub_5876f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5876f0ULL || rel >= 0x587700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00587700 size=16 callers=0 calls=0
*/
void sub_587700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x587700ULL || rel >= 0x587710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00587710 size=16 callers=0 calls=0
*/
void sub_587710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x587710ULL || rel >= 0x587720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00587720 size=16 callers=0 calls=0
*/
void sub_587720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x587720ULL || rel >= 0x587730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00587730 size=112 callers=0 calls=1
   calls: sub_580550
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_VFSEntry_Impl.cpp
*/
void SiIO_VFSEntry_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x587730ULL || rel >= 0x5877a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005877a0 size=48 callers=0 calls=1
   calls: sub_4c4700
*/
void sub_5877a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5877a0ULL || rel >= 0x5877d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005877d0 size=192 callers=0 calls=1
   calls: SiCore_Array_344
*/
void sub_5877d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5877d0ULL || rel >= 0x587890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00587890 size=192 callers=0 calls=1
   calls: SiCore_Array_344
*/
void sub_587890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x587890ULL || rel >= 0x587950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00587950 size=96 callers=0 calls=1
   calls: sub_4c4700
*/
void sub_587950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x587950ULL || rel >= 0x5879b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005879b0 size=32 callers=0 calls=0
*/
void sub_5879b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5879b0ULL || rel >= 0x5879d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005879d0 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiIO/Source/SiIO_VFSEntry_Impl.h
*/
void SiIO_VFSEntry_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5879d0ULL || rel >= 0x587a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00587a50 size=16 callers=0 calls=0
*/
void sub_587a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x587a50ULL || rel >= 0x587a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00587a60 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_587a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x587a60ULL || rel >= 0x587ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00587ae0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_587ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x587ae0ULL || rel >= 0x587b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00587b60 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_587b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x587b60ULL || rel >= 0x587be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00587be0 size=1200 callers=2 calls=5
   calls: sub_4bc640, sub_4bc690, sub_4bf7b0, sub_4c4700, sub_4c9390
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: neutral
*/
void neutral_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x587be0ULL || rel >= 0x588090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00588090 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_588090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x588090ULL || rel >= 0x588110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00588110 size=240 callers=1 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4bf660
*/
void sub_588110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x588110ULL || rel >= 0x588200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00588200 size=192 callers=0 calls=1
   calls: SiIO_NX_FileStream_Impl_2
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_148(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x588200ULL || rel >= 0x5882c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005882c0 size=176 callers=0 calls=2
   calls: SiIO_NX_FileStream_Impl_2, sub_4bf6a0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_149(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5882c0ULL || rel >= 0x588370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00588370 size=848 callers=0 calls=7
   calls: sub_4c4700, sub_4c8020, sub_4e4400, sub_57cfb0, sub_57d840, sub_582d60, sub_583b70
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/NX/SiIO_NX_FileStream_Impl.cpp
*/
void SiIO_NX_FileStream_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x588370ULL || rel >= 0x5886c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005886c0 size=16 callers=0 calls=0
*/
void sub_5886c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5886c0ULL || rel >= 0x5886d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005886d0 size=112 callers=0 calls=1
   calls: sub_4c4c40
*/
void sub_5886d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5886d0ULL || rel >= 0x588740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00588740 size=304 callers=2 calls=1
   calls: sub_582d70
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/NX/SiIO_NX_FileStream_Impl.cpp
*/
void SiIO_NX_FileStream_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x588740ULL || rel >= 0x588870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00588870 size=208 callers=0 calls=0
*/
void sub_588870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x588870ULL || rel >= 0x588940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00588940 size=16 callers=0 calls=0
*/
void sub_588940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x588940ULL || rel >= 0x588950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00588950 size=16 callers=0 calls=0
*/
void sub_588950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x588950ULL || rel >= 0x588960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00588960 size=32 callers=0 calls=0
*/
void sub_588960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x588960ULL || rel >= 0x588980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00588980 size=32 callers=0 calls=0
*/
void sub_588980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x588980ULL || rel >= 0x5889a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005889a0 size=32 callers=0 calls=0
*/
void sub_5889a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5889a0ULL || rel >= 0x5889c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005889c0 size=32 callers=0 calls=0
*/
void sub_5889c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5889c0ULL || rel >= 0x5889e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005889e0 size=48 callers=0 calls=0
*/
void sub_5889e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5889e0ULL || rel >= 0x588a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00588a10 size=304 callers=0 calls=0
*/
void sub_588a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x588a10ULL || rel >= 0x588b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00588b40 size=144 callers=0 calls=0
*/
void sub_588b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x588b40ULL || rel >= 0x588bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00588bd0 size=128 callers=0 calls=0
*/
void sub_588bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x588bd0ULL || rel >= 0x588c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00588c50 size=112 callers=0 calls=1
   calls: sub_588cc0
*/
void sub_588c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x588c50ULL || rel >= 0x588cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00588cc0 size=512 callers=29 calls=0
*/
void sub_588cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x588cc0ULL || rel >= 0x588ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00588ec0 size=112 callers=0 calls=1
   calls: sub_588cc0
*/
void sub_588ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x588ec0ULL || rel >= 0x588f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00588f30 size=96 callers=0 calls=1
   calls: sub_588cc0
*/
void sub_588f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x588f30ULL || rel >= 0x588f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00588f90 size=160 callers=0 calls=1
   calls: sub_588cc0
*/
void sub_588f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x588f90ULL || rel >= 0x589030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00589030 size=16 callers=0 calls=0
*/
void sub_589030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x589030ULL || rel >= 0x589040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00589040 size=128 callers=0 calls=1
   calls: sub_588cc0
*/
void sub_589040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x589040ULL || rel >= 0x5890c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005890c0 size=144 callers=0 calls=1
   calls: sub_588cc0
*/
void sub_5890c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5890c0ULL || rel >= 0x589150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00589150 size=176 callers=0 calls=1
   calls: sub_588cc0
*/
void sub_589150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x589150ULL || rel >= 0x589200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00589200 size=80 callers=0 calls=1
   calls: sub_588cc0
*/
void sub_589200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x589200ULL || rel >= 0x589250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00589250 size=128 callers=0 calls=1
   calls: sub_588cc0
*/
void sub_589250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x589250ULL || rel >= 0x5892d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005892d0 size=144 callers=0 calls=1
   calls: sub_588cc0
*/
void sub_5892d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5892d0ULL || rel >= 0x589360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00589360 size=176 callers=0 calls=1
   calls: sub_588cc0
*/
void sub_589360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x589360ULL || rel >= 0x589410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00589410 size=176 callers=0 calls=1
   calls: sub_588cc0
*/
void sub_589410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x589410ULL || rel >= 0x5894c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005894c0 size=192 callers=0 calls=1
   calls: sub_588cc0
*/
void sub_5894c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5894c0ULL || rel >= 0x589580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00589580 size=464 callers=0 calls=3
   calls: SiCore_String_11, sub_4c4700, sub_588cc0
*/
void sub_589580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x589580ULL || rel >= 0x589750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00589750 size=464 callers=0 calls=3
   calls: SiCore_String_12, sub_4c42b0, sub_588cc0
*/
void sub_589750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x589750ULL || rel >= 0x589920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00589920 size=496 callers=0 calls=3
   calls: SiCore_String_11, sub_4c4700, sub_588cc0
*/
void sub_589920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x589920ULL || rel >= 0x589b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00589b10 size=480 callers=0 calls=3
   calls: SiCore_String_12, sub_4c42b0, sub_588cc0
*/
void sub_589b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x589b10ULL || rel >= 0x589cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00589cf0 size=432 callers=0 calls=3
   calls: SiCore_String_11, sub_4c4700, sub_588cc0
*/
void sub_589cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x589cf0ULL || rel >= 0x589ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00589ea0 size=512 callers=0 calls=5
   calls: SiCore_String_12, SiCore_String_9, sub_4bf7b0, sub_4c42b0, sub_588cc0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/NX/SiIO_NX_FileStream_Impl.cpp
*/
void SiIO_NX_FileStream_Impl_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x589ea0ULL || rel >= 0x58a0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058a0a0 size=432 callers=0 calls=3
   calls: sub_4c4700, sub_4c5b50, sub_588cc0
*/
void sub_58a0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58a0a0ULL || rel >= 0x58a250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058a250 size=432 callers=0 calls=3
   calls: sub_4c42b0, sub_4c5c60, sub_588cc0
*/
void sub_58a250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58a250ULL || rel >= 0x58a400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058a400 size=224 callers=0 calls=0
*/
void sub_58a400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58a400ULL || rel >= 0x58a4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058a4e0 size=64 callers=0 calls=1
   calls: sub_58a520
*/
void sub_58a4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58a4e0ULL || rel >= 0x58a520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058a520 size=496 callers=17 calls=0
*/
void sub_58a520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58a520ULL || rel >= 0x58a710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058a710 size=64 callers=0 calls=1
   calls: sub_58a520
*/
void sub_58a710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58a710ULL || rel >= 0x58a750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058a750 size=64 callers=0 calls=1
   calls: sub_58a520
*/
void sub_58a750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58a750ULL || rel >= 0x58a790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058a790 size=80 callers=0 calls=1
   calls: sub_58a520
*/
void sub_58a790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58a790ULL || rel >= 0x58a7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058a7e0 size=16 callers=0 calls=0
*/
void sub_58a7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58a7e0ULL || rel >= 0x58a7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058a7f0 size=80 callers=0 calls=1
   calls: sub_58a520
*/
void sub_58a7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58a7f0ULL || rel >= 0x58a840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058a840 size=96 callers=0 calls=1
   calls: sub_58a520
*/
void sub_58a840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58a840ULL || rel >= 0x58a8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058a8a0 size=128 callers=0 calls=1
   calls: sub_58a520
*/
void sub_58a8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58a8a0ULL || rel >= 0x58a920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058a920 size=64 callers=0 calls=1
   calls: sub_58a520
*/
void sub_58a920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58a920ULL || rel >= 0x58a960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058a960 size=80 callers=0 calls=1
   calls: sub_58a520
*/
void sub_58a960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58a960ULL || rel >= 0x58a9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058a9b0 size=96 callers=0 calls=1
   calls: sub_58a520
*/
void sub_58a9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58a9b0ULL || rel >= 0x58aa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058aa10 size=128 callers=0 calls=1
   calls: sub_58a520
*/
void sub_58aa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58aa10ULL || rel >= 0x58aa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058aa90 size=96 callers=0 calls=1
   calls: sub_58a520
*/
void sub_58aa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58aa90ULL || rel >= 0x58aaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058aaf0 size=128 callers=0 calls=1
   calls: sub_58a520
*/
void sub_58aaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58aaf0ULL || rel >= 0x58ab70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058ab70 size=192 callers=0 calls=2
   calls: sub_4c4290, sub_58a520
*/
void sub_58ab70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58ab70ULL || rel >= 0x58ac30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058ac30 size=208 callers=0 calls=2
   calls: sub_4c45a0, sub_58a520
*/
void sub_58ac30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58ac30ULL || rel >= 0x58ad00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058ad00 size=208 callers=0 calls=2
   calls: sub_4c4290, sub_58a520
*/
void sub_58ad00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58ad00ULL || rel >= 0x58add0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058add0 size=208 callers=0 calls=2
   calls: sub_4c45a0, sub_58a520
*/
void sub_58add0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58add0ULL || rel >= 0x58aea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058aea0 size=368 callers=0 calls=5
   calls: sub_4bf7b0, sub_4c4290, sub_4c5170, sub_4c51e0, sub_4c5480
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/NX/SiIO_NX_FileStream_Impl.cpp
*/
void SiIO_NX_FileStream_Impl_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58aea0ULL || rel >= 0x58b010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058b010 size=368 callers=0 calls=5
   calls: sub_4bf7b0, sub_4c45a0, sub_4c4e80, sub_4c5170, sub_4c5480
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/NX/SiIO_NX_FileStream_Impl.cpp
*/
void SiIO_NX_FileStream_Impl_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58b010ULL || rel >= 0x58b180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058b180 size=320 callers=0 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4c5b30
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58b180ULL || rel >= 0x58b2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058b2c0 size=320 callers=0 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4c5b70
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_151(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58b2c0ULL || rel >= 0x58b400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058b400 size=160 callers=0 calls=0
*/
void sub_58b400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58b400ULL || rel >= 0x58b4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058b4a0 size=64 callers=0 calls=0
*/
void sub_58b4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58b4a0ULL || rel >= 0x58b4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058b4e0 size=160 callers=0 calls=0
*/
void sub_58b4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58b4e0ULL || rel >= 0x58b580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058b580 size=160 callers=0 calls=0
*/
void sub_58b580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58b580ULL || rel >= 0x58b620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058b620 size=16 callers=0 calls=0
*/
void sub_58b620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58b620ULL || rel >= 0x58b630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058b630 size=16 callers=0 calls=0
*/
void sub_58b630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58b630ULL || rel >= 0x58b640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058b640 size=16 callers=0 calls=0
*/
void sub_58b640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58b640ULL || rel >= 0x58b650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058b650 size=16 callers=0 calls=0
*/
void sub_58b650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58b650ULL || rel >= 0x58b660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058b660 size=16 callers=0 calls=0
*/
void sub_58b660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58b660ULL || rel >= 0x58b670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058b670 size=192 callers=0 calls=0
*/
void sub_58b670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58b670ULL || rel >= 0x58b730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058b730 size=16 callers=0 calls=0
*/
void sub_58b730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58b730ULL || rel >= 0x58b740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058b740 size=16 callers=0 calls=0
*/
void sub_58b740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58b740ULL || rel >= 0x58b750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058b750 size=16 callers=0 calls=0
*/
void sub_58b750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58b750ULL || rel >= 0x58b760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058b760 size=16 callers=0 calls=0
*/
void sub_58b760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58b760ULL || rel >= 0x58b770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058b770 size=16 callers=0 calls=0
*/
void sub_58b770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58b770ULL || rel >= 0x58b780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058b780 size=32 callers=0 calls=0
*/
void sub_58b780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58b780ULL || rel >= 0x58b7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058b7a0 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiIO/Source\NX/SiIO_NX_FileStream_Impl.h
*/
void SiIO_NX_FileStream_Impl_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58b7a0ULL || rel >= 0x58b820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058b820 size=16 callers=0 calls=0
*/
void sub_58b820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58b820ULL || rel >= 0x58b830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058b830 size=16 callers=0 calls=0
*/
void sub_58b830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58b830ULL || rel >= 0x58b840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058b840 size=16 callers=0 calls=0
*/
void sub_58b840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58b840ULL || rel >= 0x58b850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058b850 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_58b850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58b850ULL || rel >= 0x58b8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058b8d0 size=176 callers=1 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4bf660
*/
void sub_58b8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58b8d0ULL || rel >= 0x58b980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058b980 size=256 callers=1 calls=1
   calls: sub_582d70
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/NX/SiIO_NX_MemoryMappedFile_Impl.cpp
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiIO_NX_MemoryMappedFile_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58b980ULL || rel >= 0x58ba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058ba80 size=48 callers=0 calls=1
   calls: SiIO_NX_MemoryMappedFile_Impl
*/
void sub_58ba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58ba80ULL || rel >= 0x58bab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058bab0 size=448 callers=0 calls=5
   calls: sub_4c4700, sub_4c8020, sub_4e4400, sub_582d60, sub_582d70
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/NX/SiIO_NX_MemoryMappedFile_Impl.cpp
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiIO_NX_MemoryMappedFile_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58bab0ULL || rel >= 0x58bc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058bc70 size=96 callers=0 calls=1
   calls: sub_582d70
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/NX/SiIO_NX_MemoryMappedFile_Impl.cpp
*/
void SiIO_NX_MemoryMappedFile_Impl_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58bc70ULL || rel >= 0x58bcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058bcd0 size=16 callers=0 calls=0
*/
void sub_58bcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58bcd0ULL || rel >= 0x58bce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058bce0 size=16 callers=0 calls=0
*/
void sub_58bce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58bce0ULL || rel >= 0x58bcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058bcf0 size=16 callers=0 calls=0
*/
void sub_58bcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58bcf0ULL || rel >= 0x58bd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058bd00 size=16 callers=0 calls=0
*/
void sub_58bd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58bd00ULL || rel >= 0x58bd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058bd10 size=16 callers=0 calls=0
*/
void sub_58bd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58bd10ULL || rel >= 0x58bd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058bd20 size=32 callers=0 calls=0
*/
void sub_58bd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58bd20ULL || rel >= 0x58bd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058bd40 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiIO/Source\NX/SiIO_NX_MemoryMappedFile_Impl.h
*/
void SiIO_NX_MemoryMappedFile_Impl_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58bd40ULL || rel >= 0x58bdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058bdc0 size=16 callers=0 calls=0
*/
void sub_58bdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58bdc0ULL || rel >= 0x58bdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058bdd0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_58bdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58bdd0ULL || rel >= 0x58be50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058be50 size=224 callers=1 calls=3
   calls: sub_58bf30, sub_58c1e0, sub_58c460
*/
void sub_58be50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58be50ULL || rel >= 0x58bf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058bf30 size=32 callers=1 calls=0
*/
void sub_58bf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58bf30ULL || rel >= 0x58bf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058bf50 size=656 callers=1 calls=1
   calls: sub_58c1e0
*/
void sub_58bf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58bf50ULL || rel >= 0x58c1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058c1e0 size=272 callers=4 calls=0
*/
void sub_58c1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58c1e0ULL || rel >= 0x58c2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058c2f0 size=368 callers=0 calls=3
   calls: sub_58ee80, sub_58f250, sub_58f540
*/
void sub_58c2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58c2f0ULL || rel >= 0x58c460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058c460 size=5296 callers=3 calls=6
   calls: sub_58e8a0, sub_58ee80, sub_58f250, sub_58f690, sub_58f870, sub_58fb40
*/
void sub_58c460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58c460ULL || rel >= 0x58d910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058d910 size=320 callers=1 calls=0
*/
void sub_58d910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58d910ULL || rel >= 0x58da50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058da50 size=848 callers=0 calls=2
   calls: sub_58e8a0, sub_58fb40
*/
void sub_58da50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58da50ULL || rel >= 0x58dda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058dda0 size=1184 callers=0 calls=3
   calls: sub_58e8a0, sub_58ec10, sub_58fb40
*/
void sub_58dda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58dda0ULL || rel >= 0x58e240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058e240 size=1632 callers=0 calls=3
   calls: sub_58e8a0, sub_58ec10, sub_58fb40
*/
void sub_58e240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58e240ULL || rel >= 0x58e8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058e8a0 size=880 callers=5 calls=2
   calls: sub_58ee80, sub_58f250
*/
void sub_58e8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58e8a0ULL || rel >= 0x58ec10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058ec10 size=624 callers=2 calls=0
*/
void sub_58ec10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58ec10ULL || rel >= 0x58ee80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058ee80 size=976 callers=7 calls=0
*/
void sub_58ee80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58ee80ULL || rel >= 0x58f250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058f250 size=752 callers=23 calls=0
*/
void sub_58f250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58f250ULL || rel >= 0x58f540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058f540 size=80 callers=1 calls=0
*/
void sub_58f540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58f540ULL || rel >= 0x58f590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058f590 size=256 callers=3 calls=0
*/
void sub_58f590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58f590ULL || rel >= 0x58f690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058f690 size=480 callers=2 calls=0
*/
void sub_58f690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58f690ULL || rel >= 0x58f870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058f870 size=720 callers=1 calls=0
*/
void sub_58f870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58f870ULL || rel >= 0x58fb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0058fb40 size=2288 callers=11 calls=5
   calls: sub_58f590, sub_58f690, sub_590430, sub_590da0, sub_591190
*/
void sub_58fb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58fb40ULL || rel >= 0x590430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00590430 size=2416 callers=3 calls=0
*/
void sub_590430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x590430ULL || rel >= 0x590da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00590da0 size=1008 callers=2 calls=0
*/
void sub_590da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x590da0ULL || rel >= 0x591190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00591190 size=1280 callers=2 calls=0
*/
void sub_591190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x591190ULL || rel >= 0x591690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00591690 size=208 callers=1 calls=3
   calls: lengths_set, sub_5918f0, sub_593530
*/
void sub_591690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x591690ULL || rel >= 0x591760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00591760 size=400 callers=3 calls=0
*/
void sub_591760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x591760ULL || rel >= 0x5918f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005918f0 size=16 callers=3 calls=0
*/
void sub_5918f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5918f0ULL || rel >= 0x591900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00591900 size=6896 callers=3 calls=5
   calls: length_code, sub_58ee80, sub_58f250, sub_5933f0, sub_593d80
   ref: invalid block type
   ref: incorrect header check
   ref: too many length or distance symbols
   ref: invalid code -- missing end-of-block
   ref: incorrect length check
   ref: invalid distance too far back
   ref: invalid literal/lengths set
   ref: invalid distance code
*/
void lengths_set(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x591900ULL || rel >= 0x5933f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005933f0 size=320 callers=1 calls=0
*/
void sub_5933f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5933f0ULL || rel >= 0x593530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00593530 size=144 callers=12 calls=0
*/
void sub_593530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x593530ULL || rel >= 0x5935c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005935c0 size=1984 callers=1 calls=0
   ref: invalid distance too far back
   ref: invalid distance code
   ref: invalid literal/length code
*/
void length_code(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5935c0ULL || rel >= 0x593d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00593d80 size=1728 callers=3 calls=0
*/
void sub_593d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x593d80ULL || rel >= 0x594440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00594440 size=16 callers=3 calls=0
*/
void sub_594440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x594440ULL || rel >= 0x594450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00594450 size=16 callers=0 calls=0
*/
void sub_594450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x594450ULL || rel >= 0x594460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00594460 size=16 callers=0 calls=0
*/
void sub_594460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x594460ULL || rel >= 0x594470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00594470 size=64 callers=1 calls=2
   calls: sub_4cad50, sub_5947c0
*/
void sub_594470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x594470ULL || rel >= 0x5944b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005944b0 size=32 callers=1 calls=2
   calls: sub_5947c0, sub_594b10
*/
void sub_5944b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5944b0ULL || rel >= 0x5944d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005944d0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_5944d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5944d0ULL || rel >= 0x594550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00594550 size=48 callers=1 calls=0
*/
void sub_594550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x594550ULL || rel >= 0x594580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00594580 size=16 callers=1 calls=0
*/
void sub_594580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x594580ULL || rel >= 0x594590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00594590 size=432 callers=1 calls=0
*/
void sub_594590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x594590ULL || rel >= 0x594740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00594740 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_594740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x594740ULL || rel >= 0x5947c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005947c0 size=128 callers=2 calls=2
   calls: sub_1c0, sub_594840
*/
void sub_5947c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5947c0ULL || rel >= 0x594840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00594840 size=192 callers=1 calls=2
   calls: sub_4bf660, sub_4bf7b0
*/
void sub_594840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x594840ULL || rel >= 0x594900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00594900 size=32 callers=0 calls=0
*/
void sub_594900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x594900ULL || rel >= 0x594920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00594920 size=64 callers=0 calls=1
   calls: sub_4bf6a0
*/
void sub_594920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x594920ULL || rel >= 0x594960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00594960 size=192 callers=0 calls=3
   calls: sub_4bf7b0, sub_4c5930, sub_594a20
*/
void sub_594960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x594960ULL || rel >= 0x594a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00594a20 size=240 callers=1 calls=2
   calls: neutral_4, sub_4bf7b0
*/
void sub_594a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x594a20ULL || rel >= 0x594b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00594b10 size=128 callers=1 calls=1
   calls: sub_4bf7b0
*/
void sub_594b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x594b10ULL || rel >= 0x594b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00594b90 size=80 callers=0 calls=0
*/
void sub_594b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x594b90ULL || rel >= 0x594be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00594be0 size=16 callers=0 calls=0
*/
void sub_594be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x594be0ULL || rel >= 0x594bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00594bf0 size=16 callers=0 calls=0
*/
void sub_594bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x594bf0ULL || rel >= 0x594c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00594c00 size=32 callers=0 calls=0
*/
void sub_594c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x594c00ULL || rel >= 0x594c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00594c20 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiMath/Source/SiMath_Kernel_Impl.h
*/
void SiMath_Kernel_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x594c20ULL || rel >= 0x594ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00594ca0 size=16 callers=0 calls=0
*/
void sub_594ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x594ca0ULL || rel >= 0x594cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00594cb0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_594cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x594cb0ULL || rel >= 0x594d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00594d30 size=336 callers=1 calls=0
*/
void sub_594d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x594d30ULL || rel >= 0x594e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00594e80 size=320 callers=1 calls=0
*/
void sub_594e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x594e80ULL || rel >= 0x594fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00594fc0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_594fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x594fc0ULL || rel >= 0x595040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00595040 size=672 callers=0 calls=2
   calls: sub_1c0, sub_4bc640
*/
void sub_595040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x595040ULL || rel >= 0x5952e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005952e0 size=1200 callers=2 calls=5
   calls: sub_4bc640, sub_4bc690, sub_4bf7b0, sub_4c4700, sub_4c9390
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: neutral
*/
void neutral_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5952e0ULL || rel >= 0x595790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00595790 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_595790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x595790ULL || rel >= 0x595810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00595810 size=112 callers=1 calls=5
   calls: sub_4cad50, sub_595960, sub_595c00, sub_596640, sub_596680
*/
void sub_595810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x595810ULL || rel >= 0x595880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00595880 size=64 callers=1 calls=5
   calls: sub_4cadb0, sub_595960, sub_595ae0, sub_596640, sub_596680
*/
void sub_595880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x595880ULL || rel >= 0x5958c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005958c0 size=160 callers=0 calls=3
   calls: sub_1c0, sub_4bc640, sub_596410
*/
void sub_5958c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5958c0ULL || rel >= 0x595960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00595960 size=128 callers=2 calls=2
   calls: sub_1c0, sub_5959e0
*/
void sub_595960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x595960ULL || rel >= 0x5959e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005959e0 size=192 callers=1 calls=2
   calls: sub_4bf660, sub_4bf7b0
*/
void sub_5959e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5959e0ULL || rel >= 0x595aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00595aa0 size=64 callers=0 calls=1
   calls: sub_595ae0
*/
void sub_595aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x595aa0ULL || rel >= 0x595ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00595ae0 size=208 callers=3 calls=1
   calls: sub_4bf7b0
*/
void sub_595ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x595ae0ULL || rel >= 0x595bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00595bb0 size=80 callers=0 calls=2
   calls: sub_4bf6a0, sub_595ae0
*/
void sub_595bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x595bb0ULL || rel >= 0x595c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00595c00 size=192 callers=1 calls=3
   calls: sub_4bf7b0, sub_4c5930, sub_595cc0
*/
void sub_595c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x595c00ULL || rel >= 0x595cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00595cc0 size=240 callers=1 calls=2
   calls: neutral_5, sub_4bf7b0
*/
void sub_595cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x595cc0ULL || rel >= 0x595db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00595db0 size=80 callers=0 calls=0
*/
void sub_595db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x595db0ULL || rel >= 0x595e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00595e00 size=16 callers=0 calls=0
*/
void sub_595e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x595e00ULL || rel >= 0x595e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00595e10 size=16 callers=0 calls=0
*/
void sub_595e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x595e10ULL || rel >= 0x595e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00595e20 size=112 callers=0 calls=1
   calls: sub_5960d0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiOS/Source/SiOS_Kernel_Impl.cpp
*/
void SiOS_Kernel_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x595e20ULL || rel >= 0x595e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00595e90 size=80 callers=0 calls=0
*/
void sub_595e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x595e90ULL || rel >= 0x595ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00595ee0 size=16 callers=0 calls=0
*/
void sub_595ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x595ee0ULL || rel >= 0x595ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00595ef0 size=128 callers=0 calls=0
*/
void sub_595ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x595ef0ULL || rel >= 0x595f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00595f70 size=48 callers=0 calls=0
*/
void sub_595f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x595f70ULL || rel >= 0x595fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00595fa0 size=32 callers=0 calls=0
*/
void sub_595fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x595fa0ULL || rel >= 0x595fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00595fc0 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiOS/Source/SiOS_Kernel_Impl.h
*/
void SiOS_Kernel_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x595fc0ULL || rel >= 0x596040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00596040 size=16 callers=0 calls=0
*/
void sub_596040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x596040ULL || rel >= 0x596050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00596050 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_596050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x596050ULL || rel >= 0x5960d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005960d0 size=64 callers=1 calls=1
   calls: sub_4bf660
*/
void sub_5960d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5960d0ULL || rel >= 0x596110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00596110 size=64 callers=0 calls=0
*/
void sub_596110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x596110ULL || rel >= 0x596150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00596150 size=96 callers=0 calls=1
   calls: sub_4bf6a0
*/
void sub_596150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x596150ULL || rel >= 0x5961b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005961b0 size=16 callers=0 calls=0
*/
void sub_5961b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5961b0ULL || rel >= 0x5961c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005961c0 size=16 callers=0 calls=0
*/
void sub_5961c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5961c0ULL || rel >= 0x5961d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005961d0 size=32 callers=0 calls=0
*/
void sub_5961d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5961d0ULL || rel >= 0x5961f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005961f0 size=16 callers=0 calls=0
*/
void sub_5961f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5961f0ULL || rel >= 0x596200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00596200 size=48 callers=0 calls=0
*/
void sub_596200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x596200ULL || rel >= 0x596230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00596230 size=64 callers=0 calls=0
*/
void sub_596230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x596230ULL || rel >= 0x596270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00596270 size=16 callers=0 calls=0
*/
void sub_596270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x596270ULL || rel >= 0x596280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00596280 size=32 callers=0 calls=0
*/
void sub_596280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x596280ULL || rel >= 0x5962a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005962a0 size=32 callers=0 calls=0
*/
void sub_5962a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5962a0ULL || rel >= 0x5962c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005962c0 size=16 callers=0 calls=0
*/
void sub_5962c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5962c0ULL || rel >= 0x5962d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005962d0 size=16 callers=0 calls=0
*/
void sub_5962d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5962d0ULL || rel >= 0x5962e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005962e0 size=32 callers=0 calls=0
*/
void sub_5962e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5962e0ULL || rel >= 0x596300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00596300 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiOS/Source/SiOS_SharedMemory_Impl.h
*/
void SiOS_SharedMemory_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x596300ULL || rel >= 0x596380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00596380 size=16 callers=0 calls=0
*/
void sub_596380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x596380ULL || rel >= 0x596390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00596390 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_596390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x596390ULL || rel >= 0x596410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00596410 size=80 callers=15 calls=0
*/
void sub_596410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x596410ULL || rel >= 0x596460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00596460 size=48 callers=12 calls=0
*/
void sub_596460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x596460ULL || rel >= 0x596490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00596490 size=80 callers=0 calls=0
*/
void sub_596490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x596490ULL || rel >= 0x5964e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005964e0 size=32 callers=1 calls=0
*/
void sub_5964e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5964e0ULL || rel >= 0x596500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00596500 size=32 callers=3 calls=0
*/
void sub_596500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x596500ULL || rel >= 0x596520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00596520 size=16 callers=4 calls=0
*/
void sub_596520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x596520ULL || rel >= 0x596530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00596530 size=64 callers=1 calls=0
*/
void sub_596530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x596530ULL || rel >= 0x596570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00596570 size=48 callers=1 calls=0
*/
void sub_596570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x596570ULL || rel >= 0x5965a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005965a0 size=80 callers=0 calls=0
*/
void sub_5965a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5965a0ULL || rel >= 0x5965f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005965f0 size=32 callers=3 calls=0
*/
void sub_5965f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5965f0ULL || rel >= 0x596610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00596610 size=32 callers=1 calls=0
*/
void sub_596610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x596610ULL || rel >= 0x596630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00596630 size=16 callers=0 calls=0
*/
void sub_596630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x596630ULL || rel >= 0x596640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00596640 size=64 callers=77 calls=0
*/
void sub_596640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x596640ULL || rel >= 0x596680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00596680 size=64 callers=93 calls=0
*/
void sub_596680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x596680ULL || rel >= 0x5966c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005966c0 size=16 callers=0 calls=0
*/
void sub_5966c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5966c0ULL || rel >= 0x5966d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005966d0 size=16 callers=0 calls=0
*/
void sub_5966d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5966d0ULL || rel >= 0x5966e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005966e0 size=128 callers=0 calls=2
   calls: sub_1c0, sub_4bc640
*/
void sub_5966e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5966e0ULL || rel >= 0x596760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00596760 size=16 callers=3 calls=0
*/
void sub_596760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x596760ULL || rel >= 0x596770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00596770 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_596770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x596770ULL || rel >= 0x5967f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005967f0 size=1200 callers=2 calls=5
   calls: sub_4bc640, sub_4bc690, sub_4bf7b0, sub_4c4700, sub_4c9390
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: neutral
*/
void neutral_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5967f0ULL || rel >= 0x596ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00596ca0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_596ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x596ca0ULL || rel >= 0x596d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00596d20 size=16 callers=1 calls=0
*/
void sub_596d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x596d20ULL || rel >= 0x596d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00596d30 size=16 callers=6 calls=0
*/
void sub_596d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x596d30ULL || rel >= 0x596d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00596d40 size=288 callers=3 calls=2
   calls: sub_596e90, sub_597b80
*/
void sub_596d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x596d40ULL || rel >= 0x596e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00596e60 size=16 callers=4 calls=0
*/
void sub_596e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x596e60ULL || rel >= 0x596e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00596e70 size=16 callers=5 calls=0
*/
void sub_596e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x596e70ULL || rel >= 0x596e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00596e80 size=16 callers=3 calls=0
*/
void sub_596e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x596e80ULL || rel >= 0x596e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00596e90 size=864 callers=9 calls=5
   calls: sub_597350, sub_597720, sub_597860, sub_597920, sub_65d700
*/
void sub_596e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x596e90ULL || rel >= 0x5971f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005971f0 size=352 callers=21 calls=0
*/
void sub_5971f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5971f0ULL || rel >= 0x597350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00597350 size=272 callers=4 calls=0
*/
void sub_597350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x597350ULL || rel >= 0x597460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00597460 size=704 callers=0 calls=0
*/
void sub_597460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x597460ULL || rel >= 0x597720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00597720 size=320 callers=1 calls=0
*/
void sub_597720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x597720ULL || rel >= 0x597860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00597860 size=192 callers=1 calls=0
*/
void sub_597860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x597860ULL || rel >= 0x597920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00597920 size=16 callers=1 calls=0
*/
void sub_597920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x597920ULL || rel >= 0x597930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00597930 size=32 callers=0 calls=0
*/
void sub_597930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x597930ULL || rel >= 0x597950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00597950 size=16 callers=1 calls=0
*/
void sub_597950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x597950ULL || rel >= 0x597960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00597960 size=16 callers=1 calls=0
*/
void sub_597960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x597960ULL || rel >= 0x597970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00597970 size=464 callers=2 calls=1
   calls: sub_596e90
*/
void sub_597970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x597970ULL || rel >= 0x597b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00597b40 size=16 callers=1 calls=0
*/
void sub_597b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x597b40ULL || rel >= 0x597b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00597b50 size=16 callers=4 calls=0
*/
void sub_597b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x597b50ULL || rel >= 0x597b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00597b60 size=16 callers=5 calls=0
*/
void sub_597b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x597b60ULL || rel >= 0x597b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00597b70 size=16 callers=5 calls=0
*/
void sub_597b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x597b70ULL || rel >= 0x597b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00597b80 size=896 callers=2 calls=6
   calls: sub_597970, sub_597b40, sub_598020, sub_5983f0, sub_5e09f0, sub_65d700
*/
void sub_597b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x597b80ULL || rel >= 0x597f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00597f00 size=288 callers=5 calls=1
   calls: sub_597960
*/
void sub_597f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x597f00ULL || rel >= 0x598020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00598020 size=272 callers=2 calls=0
*/
void sub_598020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x598020ULL || rel >= 0x598130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00598130 size=704 callers=0 calls=0
*/
void sub_598130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x598130ULL || rel >= 0x5983f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005983f0 size=288 callers=1 calls=1
   calls: sub_598510
*/
void sub_5983f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5983f0ULL || rel >= 0x598510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00598510 size=656 callers=3 calls=2
   calls: sub_597350, sub_5987a0
*/
void sub_598510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x598510ULL || rel >= 0x5987a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005987a0 size=304 callers=1 calls=0
*/
void sub_5987a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5987a0ULL || rel >= 0x5988d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005988d0 size=400 callers=2 calls=3
   calls: sub_5db1b0, sub_65ccf0, sub_65d700
*/
void sub_5988d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5988d0ULL || rel >= 0x598a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00598a60 size=416 callers=3 calls=3
   calls: sub_5db1b0, sub_65ccf0, sub_65d700
*/
void sub_598a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x598a60ULL || rel >= 0x598c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00598c00 size=480 callers=0 calls=5
   calls: sub_59bee0, sub_65cd50, sub_65cd70, sub_65cd90, sub_967240
*/
void sub_598c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x598c00ULL || rel >= 0x598de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00598de0 size=3232 callers=23 calls=24
   calls: SetTriggerParameter, sub_596d40, sub_599a80, sub_59bcb0, sub_59c030, sub_59c2b0, sub_59c410, sub_59c6a0, sub_59d200, sub_5ac6e0, sub_5affa0, sub_5b4c20
   ... +12 more
*/
void sub_598de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x598de0ULL || rel >= 0x599a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00599a80 size=704 callers=4 calls=4
   calls: sub_59c410, sub_59c6a0, sub_5e0bd0, sub_5e2bc0
*/
void sub_599a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x599a80ULL || rel >= 0x599d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00599d40 size=208 callers=3 calls=1
   calls: sub_5b4dc0
*/
void sub_599d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x599d40ULL || rel >= 0x599e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00599e10 size=880 callers=1 calls=2
   calls: sub_59a260, sub_5cfad0
   ref: System/SetIntParameter
   ref: System/SetFloatParameter
   ref: System/SetBoolParameter
   ref: System/SetTriggerParameter
*/
void SetTriggerParameter(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x599e10ULL || rel >= 0x59a180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059a180 size=208 callers=9 calls=0
*/
void sub_59a180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59a180ULL || rel >= 0x59a250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059a250 size=16 callers=6 calls=0
*/
void sub_59a250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59a250ULL || rel >= 0x59a260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059a260 size=656 callers=14 calls=1
   calls: sub_59c7d0
*/
void sub_59a260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59a260ULL || rel >= 0x59a4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059a4f0 size=16 callers=36 calls=0
*/
void sub_59a4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59a4f0ULL || rel >= 0x59a500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059a500 size=16 callers=3 calls=0
*/
void sub_59a500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59a500ULL || rel >= 0x59a510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059a510 size=16 callers=2 calls=0
*/
void sub_59a510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59a510ULL || rel >= 0x59a520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059a520 size=16 callers=45 calls=0
*/
void sub_59a520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59a520ULL || rel >= 0x59a530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059a530 size=16 callers=1 calls=0
*/
void sub_59a530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59a530ULL || rel >= 0x59a540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059a540 size=96 callers=2 calls=3
   calls: sub_65cd50, sub_65cd70, sub_65cd90
*/
void sub_59a540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59a540ULL || rel >= 0x59a5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059a5a0 size=32 callers=11 calls=0
*/
void sub_59a5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59a5a0ULL || rel >= 0x59a5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059a5c0 size=144 callers=10 calls=1
   calls: sub_5acc80
*/
void sub_59a5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59a5c0ULL || rel >= 0x59a650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059a650 size=32 callers=14 calls=0
*/
void sub_59a650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59a650ULL || rel >= 0x59a670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059a670 size=48 callers=14 calls=0
*/
void sub_59a670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59a670ULL || rel >= 0x59a6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059a6a0 size=48 callers=2 calls=0
*/
void sub_59a6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59a6a0ULL || rel >= 0x59a6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059a6d0 size=32 callers=8 calls=0
*/
void sub_59a6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59a6d0ULL || rel >= 0x59a6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059a6f0 size=176 callers=5 calls=0
*/
void sub_59a6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59a6f0ULL || rel >= 0x59a7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059a7a0 size=16 callers=1 calls=0
*/
void sub_59a7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59a7a0ULL || rel >= 0x59a7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059a7b0 size=16 callers=5 calls=0
*/
void sub_59a7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59a7b0ULL || rel >= 0x59a7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059a7c0 size=48 callers=2 calls=1
   calls: sub_59a7f0
*/
void sub_59a7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59a7c0ULL || rel >= 0x59a7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059a7f0 size=320 callers=2 calls=4
   calls: sub_5b4ee0, sub_5b50c0, sub_5b9220, sub_5bc980
*/
void sub_59a7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59a7f0ULL || rel >= 0x59a930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059a930 size=48 callers=20 calls=0
*/
void sub_59a930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59a930ULL || rel >= 0x59a960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059a960 size=320 callers=0 calls=6
   calls: sub_59aaa0, sub_59d590, sub_5b4ee0, sub_5b4fb0, sub_5bc940, sub_5bc980
*/
void sub_59a960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59a960ULL || rel >= 0x59aaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059aaa0 size=1040 callers=1 calls=7
   calls: sub_59d590, sub_59d960, sub_5b5030, sub_65cd50, sub_65cd70, sub_65cd90, sub_967240
*/
void sub_59aaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59aaa0ULL || rel >= 0x59aeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059aeb0 size=16 callers=0 calls=0
*/
void sub_59aeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59aeb0ULL || rel >= 0x59aec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059aec0 size=192 callers=0 calls=3
   calls: sub_59b970, sub_5acc90, sub_5c23a0
*/
void sub_59aec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59aec0ULL || rel >= 0x59af80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059af80 size=208 callers=0 calls=3
   calls: sub_59d980, sub_5b5130, sub_5c3f60
*/
void sub_59af80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59af80ULL || rel >= 0x59b050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b050 size=16 callers=0 calls=0
*/
void sub_59b050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b050ULL || rel >= 0x59b060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b060 size=16 callers=8 calls=0
*/
void sub_59b060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b060ULL || rel >= 0x59b070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b070 size=32 callers=4 calls=0
*/
void sub_59b070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b070ULL || rel >= 0x59b090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b090 size=16 callers=24 calls=0
*/
void sub_59b090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b090ULL || rel >= 0x59b0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b0a0 size=32 callers=1 calls=0
*/
void sub_59b0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b0a0ULL || rel >= 0x59b0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b0c0 size=16 callers=22 calls=0
*/
void sub_59b0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b0c0ULL || rel >= 0x59b0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b0d0 size=16 callers=7 calls=0
*/
void sub_59b0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b0d0ULL || rel >= 0x59b0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b0e0 size=32 callers=4 calls=0
*/
void sub_59b0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b0e0ULL || rel >= 0x59b100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b100 size=16 callers=23 calls=0
*/
void sub_59b100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b100ULL || rel >= 0x59b110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b110 size=32 callers=1 calls=0
*/
void sub_59b110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b110ULL || rel >= 0x59b130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b130 size=16 callers=19 calls=0
*/
void sub_59b130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b130ULL || rel >= 0x59b140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b140 size=16 callers=5 calls=0
*/
void sub_59b140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b140ULL || rel >= 0x59b150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b150 size=32 callers=4 calls=0
*/
void sub_59b150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b150ULL || rel >= 0x59b170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b170 size=16 callers=22 calls=0
*/
void sub_59b170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b170ULL || rel >= 0x59b180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b180 size=32 callers=1 calls=0
*/
void sub_59b180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b180ULL || rel >= 0x59b1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b1a0 size=32 callers=20 calls=0
*/
void sub_59b1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b1a0ULL || rel >= 0x59b1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b1c0 size=16 callers=4 calls=0
*/
void sub_59b1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b1c0ULL || rel >= 0x59b1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b1d0 size=32 callers=4 calls=0
*/
void sub_59b1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b1d0ULL || rel >= 0x59b1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b1f0 size=16 callers=16 calls=0
*/
void sub_59b1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b1f0ULL || rel >= 0x59b200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b200 size=32 callers=14 calls=0
*/
void sub_59b200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b200ULL || rel >= 0x59b220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b220 size=16 callers=1 calls=0
*/
void sub_59b220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b220ULL || rel >= 0x59b230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b230 size=32 callers=1 calls=0
*/
void sub_59b230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b230ULL || rel >= 0x59b250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b250 size=48 callers=74 calls=0
*/
void sub_59b250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b250ULL || rel >= 0x59b280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b280 size=64 callers=7 calls=1
   calls: sub_5b50f0
*/
void sub_59b280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b280ULL || rel >= 0x59b2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b2c0 size=16 callers=4 calls=0
*/
void sub_59b2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b2c0ULL || rel >= 0x59b2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b2d0 size=16 callers=3 calls=0
*/
void sub_59b2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b2d0ULL || rel >= 0x59b2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b2e0 size=16 callers=11 calls=0
*/
void sub_59b2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b2e0ULL || rel >= 0x59b2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b2f0 size=64 callers=3 calls=0
*/
void sub_59b2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b2f0ULL || rel >= 0x59b330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b330 size=48 callers=8 calls=0
*/
void sub_59b330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b330ULL || rel >= 0x59b360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b360 size=1136 callers=0 calls=5
   calls: sub_59bcb0, sub_59c410, sub_59c6a0, sub_5e0bd0, sub_5e2bc0
*/
void sub_59b360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b360ULL || rel >= 0x59b7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b7d0 size=16 callers=0 calls=0
*/
void sub_59b7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b7d0ULL || rel >= 0x59b7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b7e0 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_59b7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b7e0ULL || rel >= 0x59b850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b850 size=16 callers=0 calls=0
*/
void sub_59b850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b850ULL || rel >= 0x59b860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b860 size=16 callers=0 calls=0
*/
void sub_59b860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b860ULL || rel >= 0x59b870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b870 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_59b870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b870ULL || rel >= 0x59b8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b8e0 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_59b8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b8e0ULL || rel >= 0x59b950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b950 size=16 callers=0 calls=0
*/
void sub_59b950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b950ULL || rel >= 0x59b960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b960 size=16 callers=0 calls=0
*/
void sub_59b960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b960ULL || rel >= 0x59b970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059b970 size=832 callers=10 calls=2
   calls: sub_65cdb0, sub_967240
*/
void sub_59b970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59b970ULL || rel >= 0x59bcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059bcb0 size=496 callers=2 calls=1
   calls: sub_5e2bc0
*/
void sub_59bcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59bcb0ULL || rel >= 0x59bea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059bea0 size=32 callers=0 calls=0
*/
void sub_59bea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59bea0ULL || rel >= 0x59bec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059bec0 size=32 callers=0 calls=0
*/
void sub_59bec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59bec0ULL || rel >= 0x59bee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059bee0 size=336 callers=72 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_96ccf0
*/
void sub_59bee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59bee0ULL || rel >= 0x59c030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059c030 size=640 callers=1 calls=0
*/
void sub_59c030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59c030ULL || rel >= 0x59c2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059c2b0 size=352 callers=1 calls=1
   calls: sub_65d700
*/
void sub_59c2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59c2b0ULL || rel >= 0x59c410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059c410 size=352 callers=3 calls=2
   calls: sub_59c570, sub_5e2bc0
*/
void sub_59c410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59c410ULL || rel >= 0x59c570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059c570 size=304 callers=3 calls=0
*/
void sub_59c570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59c570ULL || rel >= 0x59c6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059c6a0 size=304 callers=3 calls=0
*/
void sub_59c6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59c6a0ULL || rel >= 0x59c7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059c7d0 size=720 callers=1 calls=1
   calls: sub_59caa0
*/
void sub_59c7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59c7d0ULL || rel >= 0x59caa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059caa0 size=416 callers=1 calls=0
*/
void sub_59caa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59caa0ULL || rel >= 0x59cc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059cc40 size=352 callers=0 calls=4
   calls: sub_5a0150, sub_5a0250, sub_5a03d0, sub_5cfad0
   ref: Parameter
*/
void Parameter(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59cc40ULL || rel >= 0x59cda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059cda0 size=16 callers=0 calls=0
*/
void sub_59cda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59cda0ULL || rel >= 0x59cdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059cdb0 size=16 callers=0 calls=0
*/
void sub_59cdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59cdb0ULL || rel >= 0x59cdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059cdc0 size=16 callers=0 calls=0
*/
void sub_59cdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59cdc0ULL || rel >= 0x59cdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059cdd0 size=336 callers=0 calls=4
   calls: sub_5a0150, sub_5a02d0, sub_5a03d0, sub_5cfad0
   ref: Parameter
*/
void Parameter_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59cdd0ULL || rel >= 0x59cf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059cf20 size=16 callers=0 calls=0
*/
void sub_59cf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59cf20ULL || rel >= 0x59cf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059cf30 size=16 callers=0 calls=0
*/
void sub_59cf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59cf30ULL || rel >= 0x59cf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059cf40 size=16 callers=0 calls=0
*/
void sub_59cf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59cf40ULL || rel >= 0x59cf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059cf50 size=352 callers=0 calls=4
   calls: sub_5a0150, sub_5a0340, sub_5a03d0, sub_5cfad0
   ref: Parameter
*/
void Parameter_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59cf50ULL || rel >= 0x59d0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059d0b0 size=16 callers=0 calls=0
*/
void sub_59d0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59d0b0ULL || rel >= 0x59d0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059d0c0 size=16 callers=0 calls=0
*/
void sub_59d0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59d0c0ULL || rel >= 0x59d0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059d0d0 size=16 callers=0 calls=0
*/
void sub_59d0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59d0d0ULL || rel >= 0x59d0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059d0e0 size=240 callers=0 calls=3
   calls: sub_5a0150, sub_5a03d0, sub_5cfad0
   ref: Parameter
*/
void Parameter_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59d0e0ULL || rel >= 0x59d1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059d1d0 size=16 callers=0 calls=0
*/
void sub_59d1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59d1d0ULL || rel >= 0x59d1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059d1e0 size=16 callers=0 calls=0
*/
void sub_59d1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59d1e0ULL || rel >= 0x59d1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059d1f0 size=16 callers=0 calls=0
*/
void sub_59d1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59d1f0ULL || rel >= 0x59d200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059d200 size=912 callers=1 calls=5
   calls: sub_59d990, sub_5a99b0, sub_5a9a80, sub_5ab900, sub_5abb20
*/
void sub_59d200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59d200ULL || rel >= 0x59d590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059d590 size=16 callers=3 calls=0
*/
void sub_59d590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59d590ULL || rel >= 0x59d5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059d5a0 size=240 callers=2 calls=0
*/
void sub_59d5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59d5a0ULL || rel >= 0x59d690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059d690 size=16 callers=2 calls=0
*/
void sub_59d690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59d690ULL || rel >= 0x59d6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059d6a0 size=256 callers=0 calls=0
*/
void sub_59d6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59d6a0ULL || rel >= 0x59d7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059d7a0 size=224 callers=2 calls=0
*/
void sub_59d7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59d7a0ULL || rel >= 0x59d880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059d880 size=224 callers=1 calls=0
*/
void sub_59d880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59d880ULL || rel >= 0x59d960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059d960 size=32 callers=1 calls=1
   calls: sub_5abb00
*/
void sub_59d960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59d960ULL || rel >= 0x59d980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059d980 size=16 callers=1 calls=0
*/
void sub_59d980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59d980ULL || rel >= 0x59d990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059d990 size=208 callers=1 calls=2
   calls: sub_59e440, sub_65d700
*/
void sub_59d990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59d990ULL || rel >= 0x59da60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059da60 size=304 callers=0 calls=6
   calls: sub_596e60, sub_5971f0, sub_65ccf0, sub_65cd50, sub_65cd70, sub_65cd90
*/
void sub_59da60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59da60ULL || rel >= 0x59db90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059db90 size=224 callers=0 calls=1
   calls: sub_59f2c0
*/
void sub_59db90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59db90ULL || rel >= 0x59dc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059dc70 size=240 callers=0 calls=0
*/
void sub_59dc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59dc70ULL || rel >= 0x59dd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059dd60 size=640 callers=0 calls=5
   calls: sub_596e60, sub_5971f0, sub_65cd50, sub_65cd70, sub_65cd90
*/
void sub_59dd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59dd60ULL || rel >= 0x59dfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059dfe0 size=64 callers=0 calls=0
*/
void sub_59dfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59dfe0ULL || rel >= 0x59e020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059e020 size=96 callers=0 calls=0
*/
void sub_59e020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59e020ULL || rel >= 0x59e080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059e080 size=640 callers=0 calls=1
   calls: sub_65ccf0
*/
void sub_59e080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59e080ULL || rel >= 0x59e300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059e300 size=240 callers=0 calls=3
   calls: sub_65cd50, sub_65cd70, sub_65cd90
*/
void sub_59e300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59e300ULL || rel >= 0x59e3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059e3f0 size=80 callers=0 calls=0
*/
void sub_59e3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59e3f0ULL || rel >= 0x59e440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059e440 size=32 callers=5 calls=0
*/
void sub_59e440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59e440ULL || rel >= 0x59e460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059e460 size=16 callers=0 calls=0
*/
void sub_59e460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59e460ULL || rel >= 0x59e470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059e470 size=16 callers=0 calls=0
*/
void sub_59e470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59e470ULL || rel >= 0x59e480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059e480 size=1024 callers=4 calls=6
   calls: sub_59e880, sub_5a0610, sub_5a0900, sub_5a30c0, sub_5a8320, sub_5a8750
*/
void sub_59e480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59e480ULL || rel >= 0x59e880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059e880 size=240 callers=1 calls=1
   calls: sub_65d700
*/
void sub_59e880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59e880ULL || rel >= 0x59e970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059e970 size=16 callers=1 calls=0
*/
void sub_59e970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59e970ULL || rel >= 0x59e980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059e980 size=16 callers=1 calls=0
*/
void sub_59e980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59e980ULL || rel >= 0x59e990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059e990 size=240 callers=3 calls=4
   calls: sub_596d30, sub_59ea80, sub_5a96c0, sub_5e2bc0
*/
void sub_59e990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59e990ULL || rel >= 0x59ea80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059ea80 size=672 callers=3 calls=8
   calls: sub_5a0630, sub_5a0790, sub_5a07b0, sub_5a07d0, sub_5a97c0, sub_5a9800, sub_5a9890, sub_5a9920
*/
void sub_59ea80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59ea80ULL || rel >= 0x59ed20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059ed20 size=416 callers=1 calls=4
   calls: sub_596d30, sub_59ea80, sub_5a97c0, sub_5e2bc0
*/
void sub_59ed20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59ed20ULL || rel >= 0x59eec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059eec0 size=288 callers=3 calls=1
   calls: sub_5a97c0
*/
void sub_59eec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59eec0ULL || rel >= 0x59efe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059efe0 size=240 callers=2 calls=1
   calls: sub_5a97c0
*/
void sub_59efe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59efe0ULL || rel >= 0x59f0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059f0d0 size=336 callers=1 calls=3
   calls: sub_5a0650, sub_5a0870, sub_5a97c0
*/
void sub_59f0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59f0d0ULL || rel >= 0x59f220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059f220 size=16 callers=16 calls=0
*/
void sub_59f220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59f220ULL || rel >= 0x59f230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059f230 size=16 callers=2 calls=0
*/
void sub_59f230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59f230ULL || rel >= 0x59f240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059f240 size=112 callers=0 calls=2
   calls: sub_5a0870, sub_5a97c0
*/
void sub_59f240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59f240ULL || rel >= 0x59f2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059f2b0 size=16 callers=1 calls=0
*/
void sub_59f2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59f2b0ULL || rel >= 0x59f2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059f2c0 size=32 callers=1 calls=0
*/
void sub_59f2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59f2c0ULL || rel >= 0x59f2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059f2e0 size=16 callers=0 calls=0
*/
void sub_59f2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59f2e0ULL || rel >= 0x59f2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059f2f0 size=16 callers=0 calls=0
*/
void sub_59f2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59f2f0ULL || rel >= 0x59f300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059f300 size=16 callers=0 calls=0
*/
void sub_59f300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59f300ULL || rel >= 0x59f310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059f310 size=16 callers=1 calls=0
*/
void sub_59f310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59f310ULL || rel >= 0x59f320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059f320 size=16 callers=0 calls=0
*/
void sub_59f320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59f320ULL || rel >= 0x59f330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059f330 size=480 callers=0 calls=3
   calls: sub_59f510, sub_59fe00, sub_5a04c0
*/
void sub_59f330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59f330ULL || rel >= 0x59f510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059f510 size=544 callers=1 calls=0
*/
void sub_59f510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59f510ULL || rel >= 0x59f730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059f730 size=320 callers=0 calls=6
   calls: sub_59f870, sub_5a00c0, sub_5a0600, sub_5a07a0, sub_5a0870, sub_5a08f0
*/
void sub_59f730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59f730ULL || rel >= 0x59f870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

