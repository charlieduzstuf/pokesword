/* sdk functions 004b39a8..004d6c50 (50 of 53). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 004b39a8 size=440 callers=0 calls=0
*/
void sub_4b39a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b39a8ULL || rel >= 0x4b3b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b3b60 size=216 callers=0 calls=0
*/
void sub_4b3b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b3b60ULL || rel >= 0x4b3c38ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b3c38 size=8 callers=0 calls=0
*/
void sub_4b3c38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b3c38ULL || rel >= 0x4b3c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b3c40 size=328 callers=0 calls=0
*/
void sub_4b3c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b3c40ULL || rel >= 0x4b3d88ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b3d88 size=8 callers=0 calls=0
*/
void sub_4b3d88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b3d88ULL || rel >= 0x4b3d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b3d90 size=40 callers=0 calls=0
*/
void sub_4b3d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b3d90ULL || rel >= 0x4b3db8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b3db8 size=816 callers=0 calls=0
   ref: objc_object
*/
void objc_object(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b3db8ULL || rel >= 0x4b40e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b40e8 size=320 callers=0 calls=0
   ref: objc_object
*/
void objc_object_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b40e8ULL || rel >= 0x4b4228ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4228 size=8 callers=0 calls=0
*/
void sub_4b4228(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4228ULL || rel >= 0x4b4230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4230 size=40 callers=0 calls=0
*/
void sub_4b4230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4230ULL || rel >= 0x4b4258ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4258 size=592 callers=0 calls=0
*/
void sub_4b4258(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4258ULL || rel >= 0x4b44a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b44a8 size=336 callers=0 calls=0
*/
void sub_4b44a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b44a8ULL || rel >= 0x4b45f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b45f8 size=8 callers=0 calls=0
*/
void sub_4b45f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b45f8ULL || rel >= 0x4b4600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4600 size=160 callers=0 calls=0
*/
void sub_4b4600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4600ULL || rel >= 0x4b46a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b46a0 size=8 callers=0 calls=0
*/
void sub_4b46a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b46a0ULL || rel >= 0x4b46a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b46a8 size=144 callers=0 calls=2
   calls: sub_4b58a0, sub_4b5a00
   ref: std::__libcpp_tls_set failure in __cxa_get_globals()
   ref: cannot allocate __cxa_eh_globals
   ref: execute once failure in __cxa_get_globals_fast()
*/
void cannot_allocate___cxa_eh_globals(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b46a8ULL || rel >= 0x4b4738ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4738 size=64 callers=0 calls=1
   calls: sub_4b58a0
   ref: execute once failure in __cxa_get_globals_fast()
*/
void execute_once_failure_in___cxa_get_globals_fast(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4738ULL || rel >= 0x4b4778ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4778 size=56 callers=0 calls=1
   calls: sub_4b58a0
   ref: cannot create thread specific key for __cxa_get_globals()
*/
void cannot_create_thread_specific_key_for___cxa_get_globals(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4778ULL || rel >= 0x4b47b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b47b0 size=56 callers=0 calls=2
   calls: sub_4b58a0, sub_4b5ba0
   ref: cannot zero out thread value for __cxa_get_globals()
*/
void cannot_zero_out_thread_value_for___cxa_get_globals(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b47b0ULL || rel >= 0x4b47e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b47e8 size=184 callers=0 calls=1
   calls: sub_4b58a0
   ref: __cxa_guard_acquire failed to release mutex
   ref: __cxa_guard_acquire failed to acquire mutex
   ref: __cxa_guard_acquire condition variable wait failed
*/
void cxa_guard_acquire_failed_to_release_mutex(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b47e8ULL || rel >= 0x4b48a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b48a0 size=128 callers=0 calls=1
   calls: sub_4b58a0
   ref: __cxa_guard_release failed to broadcast condition variable
   ref: __cxa_guard_release failed to acquire mutex
   ref: __cxa_guard_release failed to release mutex
*/
void cxa_guard_release_failed_to_release_mutex(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b48a0ULL || rel >= 0x4b4920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4920 size=120 callers=0 calls=1
   calls: sub_4b58a0
   ref: __cxa_guard_abort failed to release mutex
   ref: __cxa_guard_abort failed to broadcast condition variable
   ref: __cxa_guard_abort failed to acquire mutex
*/
void cxa_guard_abort_failed_to_release_mutex(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4920ULL || rel >= 0x4b4998ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4998 size=16 callers=0 calls=0
*/
void sub_4b4998(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4998ULL || rel >= 0x4b49a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b49a8 size=88 callers=0 calls=2
   calls: sub_44d288, terminate_handler_unexpectedly_threw_an_exception
*/
void sub_4b49a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b49a8ULL || rel >= 0x4b4a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4a00 size=24 callers=2 calls=1
   calls: sub_4b58a0
   ref: unexpected_handler unexpectedly returned
*/
void unexpected_handler_unexpectedly_returned(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4a00ULL || rel >= 0x4b4a18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4a18 size=24 callers=0 calls=1
   calls: unexpected_handler_unexpectedly_returned
*/
void sub_4b4a18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4a18ULL || rel >= 0x4b4a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4a30 size=16 callers=0 calls=0
*/
void sub_4b4a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4a30ULL || rel >= 0x4b4a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4a40 size=64 callers=9 calls=2
   calls: sub_44d288, sub_4b58a0
   ref: terminate_handler unexpectedly returned
   ref: terminate_handler unexpectedly threw an exception
*/
void terminate_handler_unexpectedly_threw_an_exception(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4a40ULL || rel >= 0x4b4a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4a80 size=32 callers=0 calls=0
*/
void sub_4b4a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4a80ULL || rel >= 0x4b4aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4aa0 size=16 callers=0 calls=0
*/
void sub_4b4aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4aa0ULL || rel >= 0x4b4ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4ab0 size=224 callers=0 calls=0
*/
void sub_4b4ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4ab0ULL || rel >= 0x4b4b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4b90 size=240 callers=0 calls=1
   calls: sub_44d288
*/
void sub_4b4b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4b90ULL || rel >= 0x4b4c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4c80 size=168 callers=0 calls=0
*/
void sub_4b4c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4c80ULL || rel >= 0x4b4d28ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4d28 size=264 callers=0 calls=1
   calls: sub_44d288
*/
void sub_4b4d28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4d28ULL || rel >= 0x4b4e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4e30 size=192 callers=0 calls=0
*/
void sub_4b4e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4e30ULL || rel >= 0x4b4ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4ef0 size=176 callers=0 calls=0
*/
void sub_4b4ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4ef0ULL || rel >= 0x4b4fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4fa0 size=88 callers=0 calls=0
*/
void sub_4b4fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4fa0ULL || rel >= 0x4b4ff8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4ff8 size=224 callers=0 calls=0
*/
void sub_4b4ff8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4ff8ULL || rel >= 0x4b50d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b50d8 size=224 callers=0 calls=1
   calls: sub_44d288
*/
void sub_4b50d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b50d8ULL || rel >= 0x4b51b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b51b8 size=240 callers=0 calls=1
   calls: sub_44d288
*/
void sub_4b51b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b51b8ULL || rel >= 0x4b52a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b52a8 size=24 callers=0 calls=1
   calls: sub_4b58a0
   ref: Pure virtual function called!
*/
void Pure_virtual_function_called(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b52a8ULL || rel >= 0x4b52c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b52c0 size=24 callers=0 calls=1
   calls: sub_4b58a0
   ref: Deleted virtual function called!
*/
void Deleted_virtual_function_called(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b52c0ULL || rel >= 0x4b52d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b52d8 size=8 callers=0 calls=0
*/
void sub_4b52d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b52d8ULL || rel >= 0x4b52e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b52e0 size=8 callers=0 calls=0
*/
void sub_4b52e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b52e0ULL || rel >= 0x4b52e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b52e8 size=16 callers=0 calls=0
   ref: std::exception
*/
void std_exception(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b52e8ULL || rel >= 0x4b52f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b52f8 size=8 callers=0 calls=0
*/
void sub_4b52f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b52f8ULL || rel >= 0x4b5300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5300 size=16 callers=0 calls=0
   ref: std::bad_exception
*/
void std_bad_exception(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5300ULL || rel >= 0x4b5310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5310 size=24 callers=0 calls=0
*/
void sub_4b5310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5310ULL || rel >= 0x4b5328ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5328 size=8 callers=0 calls=0
*/
void sub_4b5328(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5328ULL || rel >= 0x4b5330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5330 size=16 callers=0 calls=0
   ref: std::bad_alloc
*/
void std_bad_alloc(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5330ULL || rel >= 0x4b5340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5340 size=24 callers=0 calls=0
*/
void sub_4b5340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5340ULL || rel >= 0x4b5358ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5358 size=8 callers=0 calls=0
*/
void sub_4b5358(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5358ULL || rel >= 0x4b5360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5360 size=16 callers=0 calls=0
   ref: bad_array_new_length
*/
void bad_array_new_length(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5360ULL || rel >= 0x4b5370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5370 size=24 callers=0 calls=0
*/
void sub_4b5370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5370ULL || rel >= 0x4b5388ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5388 size=8 callers=0 calls=0
*/
void sub_4b5388(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5388ULL || rel >= 0x4b5390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5390 size=16 callers=0 calls=0
   ref: bad_array_length
*/
void bad_array_length(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5390ULL || rel >= 0x4b53a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b53a0 size=104 callers=0 calls=0
*/
void sub_4b53a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b53a0ULL || rel >= 0x4b5408ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5408 size=96 callers=0 calls=0
*/
void sub_4b5408(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5408ULL || rel >= 0x4b5468ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5468 size=8 callers=0 calls=0
*/
void sub_4b5468(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5468ULL || rel >= 0x4b5470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5470 size=104 callers=0 calls=0
*/
void sub_4b5470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5470ULL || rel >= 0x4b54d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b54d8 size=96 callers=0 calls=0
*/
void sub_4b54d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b54d8ULL || rel >= 0x4b5538ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5538 size=8 callers=0 calls=0
*/
void sub_4b5538(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5538ULL || rel >= 0x4b5540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5540 size=96 callers=0 calls=0
*/
void sub_4b5540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5540ULL || rel >= 0x4b55a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b55a0 size=96 callers=0 calls=0
*/
void sub_4b55a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b55a0ULL || rel >= 0x4b5600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5600 size=96 callers=0 calls=0
*/
void sub_4b5600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5600ULL || rel >= 0x4b5660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5660 size=96 callers=0 calls=0
*/
void sub_4b5660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5660ULL || rel >= 0x4b56c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b56c0 size=96 callers=0 calls=0
*/
void sub_4b56c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b56c0ULL || rel >= 0x4b5720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5720 size=96 callers=0 calls=0
*/
void sub_4b5720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5720ULL || rel >= 0x4b5780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5780 size=96 callers=0 calls=0
*/
void sub_4b5780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5780ULL || rel >= 0x4b57e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b57e0 size=8 callers=0 calls=0
*/
void sub_4b57e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b57e0ULL || rel >= 0x4b57e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b57e8 size=8 callers=0 calls=0
*/
void sub_4b57e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b57e8ULL || rel >= 0x4b57f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b57f0 size=24 callers=0 calls=0
*/
void sub_4b57f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b57f0ULL || rel >= 0x4b5808ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5808 size=8 callers=0 calls=0
*/
void sub_4b5808(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5808ULL || rel >= 0x4b5810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5810 size=40 callers=0 calls=0
*/
void sub_4b5810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5810ULL || rel >= 0x4b5838ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5838 size=16 callers=0 calls=0
   ref: std::bad_cast
*/
void std_bad_cast(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5838ULL || rel >= 0x4b5848ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5848 size=24 callers=0 calls=0
*/
void sub_4b5848(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5848ULL || rel >= 0x4b5860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5860 size=8 callers=0 calls=0
*/
void sub_4b5860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5860ULL || rel >= 0x4b5868ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5868 size=40 callers=0 calls=0
*/
void sub_4b5868(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5868ULL || rel >= 0x4b5890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5890 size=16 callers=0 calls=0
   ref: std::bad_typeid
*/
void std_bad_typeid(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5890ULL || rel >= 0x4b58a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b58a0 size=16 callers=21 calls=0
*/
void sub_4b58a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b58a0ULL || rel >= 0x4b58b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b58b0 size=80 callers=3 calls=1
   calls: sub_4b5900
*/
void sub_4b58b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b58b0ULL || rel >= 0x4b5900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5900 size=256 callers=2 calls=1
   calls: sub_44d288
*/
void sub_4b5900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5900ULL || rel >= 0x4b5a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5a00 size=96 callers=1 calls=1
   calls: sub_4b5900
*/
void sub_4b5a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5a00ULL || rel >= 0x4b5a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5a60 size=320 callers=10 calls=1
   calls: sub_44d288
*/
void sub_4b5a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5a60ULL || rel >= 0x4b5ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5ba0 size=320 callers=1 calls=1
   calls: sub_44d288
*/
void sub_4b5ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5ba0ULL || rel >= 0x4b5ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5ce0 size=8 callers=0 calls=0
*/
void sub_4b5ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5ce0ULL || rel >= 0x4b5ce8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5ce8 size=8 callers=0 calls=0
*/
void sub_4b5ce8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5ce8ULL || rel >= 0x4b5cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5cf0 size=8 callers=0 calls=0
*/
void sub_4b5cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5cf0ULL || rel >= 0x4b5cf8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5cf8 size=8 callers=0 calls=0
*/
void sub_4b5cf8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5cf8ULL || rel >= 0x4b5d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5d00 size=40 callers=0 calls=0
*/
void sub_4b5d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5d00ULL || rel >= 0x4b5d28ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5d28 size=40 callers=0 calls=0
*/
void sub_4b5d28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5d28ULL || rel >= 0x4b5d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5d50 size=40 callers=0 calls=0
*/
void sub_4b5d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5d50ULL || rel >= 0x4b5d78ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5d78 size=40 callers=0 calls=0
*/
void sub_4b5d78(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5d78ULL || rel >= 0x4b5da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5da0 size=40 callers=0 calls=0
*/
void sub_4b5da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5da0ULL || rel >= 0x4b5dc8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5dc8 size=40 callers=0 calls=0
*/
void sub_4b5dc8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5dc8ULL || rel >= 0x4b5df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5df0 size=40 callers=0 calls=0
*/
void sub_4b5df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5df0ULL || rel >= 0x4b5e18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5e18 size=40 callers=0 calls=0
*/
void sub_4b5e18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5e18ULL || rel >= 0x4b5e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5e40 size=40 callers=0 calls=0
*/
void sub_4b5e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5e40ULL || rel >= 0x4b5e68ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5e68 size=40 callers=0 calls=0
*/
void sub_4b5e68(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5e68ULL || rel >= 0x4b5e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5e90 size=16 callers=0 calls=0
*/
void sub_4b5e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5e90ULL || rel >= 0x4b5ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5ea0 size=8 callers=0 calls=0
*/
void sub_4b5ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5ea0ULL || rel >= 0x4b5ea8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5ea8 size=8 callers=0 calls=0
*/
void sub_4b5ea8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5ea8ULL || rel >= 0x4b5eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5eb0 size=16 callers=0 calls=0
*/
void sub_4b5eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5eb0ULL || rel >= 0x4b5ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5ec0 size=232 callers=0 calls=0
*/
void sub_4b5ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5ec0ULL || rel >= 0x4b5fa8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5fa8 size=104 callers=0 calls=0
*/
void sub_4b5fa8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5fa8ULL || rel >= 0x4b6010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b6010 size=120 callers=0 calls=0
*/
void sub_4b6010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b6010ULL || rel >= 0x4b6088ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b6088 size=392 callers=0 calls=0
*/
void sub_4b6088(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b6088ULL || rel >= 0x4b6210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b6210 size=136 callers=0 calls=0
*/
void sub_4b6210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b6210ULL || rel >= 0x4b6298ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b6298 size=728 callers=0 calls=0
*/
void sub_4b6298(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b6298ULL || rel >= 0x4b6570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b6570 size=408 callers=0 calls=0
*/
void sub_4b6570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b6570ULL || rel >= 0x4b6708ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b6708 size=440 callers=0 calls=0
*/
void sub_4b6708(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b6708ULL || rel >= 0x4b68c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b68c0 size=312 callers=0 calls=0
*/
void sub_4b68c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b68c0ULL || rel >= 0x4b69f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b69f8 size=952 callers=0 calls=0
*/
void sub_4b69f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b69f8ULL || rel >= 0x4b6db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b6db0 size=392 callers=0 calls=0
*/
void sub_4b6db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b6db0ULL || rel >= 0x4b6f38ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b6f38 size=272 callers=0 calls=0
*/
void sub_4b6f38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b6f38ULL || rel >= 0x4b7048ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b7048 size=560 callers=0 calls=0
*/
void sub_4b7048(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b7048ULL || rel >= 0x4b7278ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b7278 size=304 callers=0 calls=0
*/
void sub_4b7278(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b7278ULL || rel >= 0x4b73a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b73a8 size=280 callers=0 calls=0
*/
void sub_4b73a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b73a8ULL || rel >= 0x4b74c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b74c0 size=80 callers=0 calls=1
   calls: sub_4b58b0
*/
void sub_4b74c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b74c0ULL || rel >= 0x4b7510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b7510 size=32 callers=0 calls=1
   calls: sub_4b5a60
*/
void sub_4b7510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b7510ULL || rel >= 0x4b7530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b7530 size=56 callers=0 calls=1
   calls: sub_4b58b0
*/
void sub_4b7530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b7530ULL || rel >= 0x4b7568ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b7568 size=8 callers=0 calls=0
*/
void sub_4b7568(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b7568ULL || rel >= 0x4b7570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b7570 size=128 callers=0 calls=1
   calls: sub_4b7660
*/
void sub_4b7570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b7570ULL || rel >= 0x4b75f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b75f0 size=112 callers=0 calls=2
   calls: sub_4b5a60, terminate_handler_unexpectedly_threw_an_exception
*/
void sub_4b75f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b75f0ULL || rel >= 0x4b7660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b7660 size=32 callers=1 calls=1
   calls: terminate_handler_unexpectedly_threw_an_exception
*/
void sub_4b7660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b7660ULL || rel >= 0x4b7680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b7680 size=8 callers=0 calls=0
*/
void sub_4b7680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b7680ULL || rel >= 0x4b7688ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b7688 size=168 callers=0 calls=0
*/
void sub_4b7688(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b7688ULL || rel >= 0x4b7730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b7730 size=248 callers=0 calls=1
   calls: sub_4b5a60
*/
void sub_4b7730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b7730ULL || rel >= 0x4b7828ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b7828 size=96 callers=0 calls=1
   calls: sub_4b5a60
*/
void sub_4b7828(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b7828ULL || rel >= 0x4b7888ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b7888 size=96 callers=0 calls=0
*/
void sub_4b7888(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b7888ULL || rel >= 0x4b78e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b78e8 size=232 callers=0 calls=1
   calls: terminate_handler_unexpectedly_threw_an_exception
*/
void sub_4b78e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b78e8ULL || rel >= 0x4b79d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b79d0 size=32 callers=0 calls=0
*/
void sub_4b79d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b79d0ULL || rel >= 0x4b79f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b79f0 size=136 callers=0 calls=0
*/
void sub_4b79f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b79f0ULL || rel >= 0x4b7a78ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b7a78 size=312 callers=0 calls=1
   calls: sub_4b58b0
*/
void sub_4b7a78(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b7a78ULL || rel >= 0x4b7bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b7bb0 size=128 callers=0 calls=2
   calls: sub_4b5a60, terminate_handler_unexpectedly_threw_an_exception
*/
void sub_4b7bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b7bb0ULL || rel >= 0x4b7c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b7c30 size=40 callers=0 calls=0
*/
void sub_4b7c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b7c30ULL || rel >= 0x4b7c58ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b7c58 size=32 callers=0 calls=0
*/
void sub_4b7c58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b7c58ULL || rel >= 0x4b7c78ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b7c78 size=424 callers=0 calls=2
   calls: sub_4b7e20, sub_4b8480
*/
void sub_4b7c78(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b7c78ULL || rel >= 0x4b7e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b7e20 size=1632 callers=3 calls=2
   calls: sub_4b8480, sub_4b8a38
*/
void sub_4b7e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b7e20ULL || rel >= 0x4b8480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b8480 size=48 callers=10 calls=1
   calls: terminate_handler_unexpectedly_threw_an_exception
*/
void sub_4b8480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b8480ULL || rel >= 0x4b84b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b84b0 size=1416 callers=0 calls=5
   calls: sub_44d288, sub_4b8480, sub_4b8a38, terminate_handler_unexpectedly_threw_an_exception, unexpected_handler_unexpectedly_returned
*/
void sub_4b84b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b84b0ULL || rel >= 0x4b8a38ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b8a38 size=352 callers=15 calls=0
*/
void sub_4b8a38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b8a38ULL || rel >= 0x4b8b98ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b8b98 size=1448 callers=0 calls=1
   calls: sub_508f18
*/
void sub_4b8b98(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b8b98ULL || rel >= 0x4b9140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9140 size=56 callers=0 calls=0
*/
void sub_4b9140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9140ULL || rel >= 0x4b9178ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9178 size=8 callers=0 calls=0
*/
void sub_4b9178(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9178ULL || rel >= 0x4b9180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9180 size=8 callers=0 calls=0
*/
void sub_4b9180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9180ULL || rel >= 0x4b9188ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9188 size=120 callers=0 calls=1
   calls: sub_4bd268
*/
void sub_4b9188(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9188ULL || rel >= 0x4b9200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9200 size=152 callers=0 calls=0
*/
void sub_4b9200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9200ULL || rel >= 0x4b9298ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9298 size=168 callers=0 calls=2
   calls: sub_4bd258, sub_4bd260
*/
void sub_4b9298(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9298ULL || rel >= 0x4b9340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9340 size=64 callers=0 calls=1
   calls: sub_4bd258
*/
void sub_4b9340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9340ULL || rel >= 0x4b9380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9380 size=80 callers=0 calls=1
   calls: sub_4bd258
*/
void sub_4b9380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9380ULL || rel >= 0x4b93d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b93d0 size=8 callers=0 calls=0
*/
void sub_4b93d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b93d0ULL || rel >= 0x4b93d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b93d8 size=8 callers=0 calls=0
*/
void sub_4b93d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b93d8ULL || rel >= 0x4b93e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b93e0 size=8 callers=0 calls=0
*/
void sub_4b93e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b93e0ULL || rel >= 0x4b93e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b93e8 size=8 callers=0 calls=0
*/
void sub_4b93e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b93e8ULL || rel >= 0x4b93f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b93f0 size=80 callers=0 calls=1
   calls: _start
*/
void sub_4b93f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b93f0ULL || rel >= 0x4b9440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9440 size=32 callers=0 calls=0
*/
void sub_4b9440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9440ULL || rel >= 0x4b9460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9460 size=16 callers=0 calls=0
*/
void sub_4b9460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9460ULL || rel >= 0x4b9470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9470 size=8 callers=0 calls=0
*/
void sub_4b9470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9470ULL || rel >= 0x4b9478ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9478 size=16 callers=0 calls=0
*/
void sub_4b9478(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9478ULL || rel >= 0x4b9488ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9488 size=8 callers=0 calls=0
*/
void sub_4b9488(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9488ULL || rel >= 0x4b9490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9490 size=24 callers=0 calls=0
*/
void sub_4b9490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9490ULL || rel >= 0x4b94a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b94a8 size=8 callers=0 calls=0
*/
void sub_4b94a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b94a8ULL || rel >= 0x4b94b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b94b0 size=128 callers=0 calls=2
   calls: sub_4bd258, sub_4bd260
*/
void sub_4b94b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b94b0ULL || rel >= 0x4b9530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9530 size=112 callers=0 calls=2
   calls: sub_4bd258, sub_4bd260
*/
void sub_4b9530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9530ULL || rel >= 0x4b95a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b95a0 size=40 callers=0 calls=1
   calls: sub_170
*/
void sub_4b95a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b95a0ULL || rel >= 0x4b95c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b95c8 size=16 callers=0 calls=0
*/
void sub_4b95c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b95c8ULL || rel >= 0x4b95d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b95d8 size=272 callers=0 calls=0
*/
void sub_4b95d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b95d8ULL || rel >= 0x4b96e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b96e8 size=464 callers=0 calls=2
   calls: sub_4bd258, sub_4bd260
*/
void sub_4b96e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b96e8ULL || rel >= 0x4b98b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b98b8 size=1000 callers=0 calls=1
   calls: sub_4da358
   ref: Plural-Forms:
   ref: nplurals=
   ref: plural=
   ref: LC_CTYPE
*/
void LC_CTYPE(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b98b8ULL || rel >= 0x4b9ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9ca0 size=16 callers=0 calls=0
*/
void sub_4b9ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9ca0ULL || rel >= 0x4b9cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9cb0 size=8 callers=0 calls=0
*/
void sub_4b9cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9cb0ULL || rel >= 0x4b9cb8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9cb8 size=16 callers=0 calls=0
*/
void sub_4b9cb8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9cb8ULL || rel >= 0x4b9cc8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9cc8 size=64 callers=0 calls=0
*/
void sub_4b9cc8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9cc8ULL || rel >= 0x4b9d08ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9d08 size=960 callers=0 calls=2
   calls: sub_4bd258, sub_4bd260
   ref: LC_ALL
   ref: C.UTF-8
   ref: LC_CTYPE
*/
void LC_CTYPE_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9d08ULL || rel >= 0x4ba0c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ba0c8 size=1144 callers=0 calls=3
   calls: sub_4bd258, sub_4bd260, sub_4f7ef0
   ref: C.UTF-8
*/
void C_UTF_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ba0c8ULL || rel >= 0x4ba540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ba540 size=80 callers=0 calls=0
*/
void sub_4ba540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ba540ULL || rel >= 0x4ba590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ba590 size=208 callers=0 calls=1
   calls: sub_4bd258
*/
void sub_4ba590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ba590ULL || rel >= 0x4ba660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ba660 size=328 callers=0 calls=2
   calls: sub_4bd258, sub_4bd260
*/
void sub_4ba660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ba660ULL || rel >= 0x4ba7a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ba7a8 size=128 callers=0 calls=2
   calls: sub_4bd258, sub_4bd260
*/
void sub_4ba7a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ba7a8ULL || rel >= 0x4ba828ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ba828 size=176 callers=0 calls=2
   calls: sub_4bd258, sub_4bd260
*/
void sub_4ba828(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ba828ULL || rel >= 0x4ba8d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ba8d8 size=40 callers=0 calls=0
*/
void sub_4ba8d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ba8d8ULL || rel >= 0x4ba900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ba900 size=8 callers=0 calls=0
*/
void sub_4ba900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ba900ULL || rel >= 0x4ba908ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ba908 size=40 callers=0 calls=0
*/
void sub_4ba908(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ba908ULL || rel >= 0x4ba930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ba930 size=8 callers=0 calls=0
*/
void sub_4ba930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ba930ULL || rel >= 0x4ba938ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ba938 size=8 callers=0 calls=0
*/
void sub_4ba938(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ba938ULL || rel >= 0x4ba940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ba940 size=40 callers=0 calls=0
*/
void sub_4ba940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ba940ULL || rel >= 0x4ba968ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ba968 size=8 callers=0 calls=0
*/
void sub_4ba968(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ba968ULL || rel >= 0x4ba970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ba970 size=8 callers=0 calls=0
*/
void sub_4ba970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ba970ULL || rel >= 0x4ba978ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ba978 size=8 callers=0 calls=0
*/
void sub_4ba978(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ba978ULL || rel >= 0x4ba980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ba980 size=8 callers=0 calls=0
*/
void sub_4ba980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ba980ULL || rel >= 0x4ba988ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ba988 size=8 callers=0 calls=0
*/
void sub_4ba988(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ba988ULL || rel >= 0x4ba990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ba990 size=8 callers=0 calls=0
*/
void sub_4ba990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ba990ULL || rel >= 0x4ba998ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ba998 size=72 callers=0 calls=0
*/
void sub_4ba998(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ba998ULL || rel >= 0x4ba9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ba9e0 size=384 callers=0 calls=1
   calls: sub_4bca38
*/
void sub_4ba9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ba9e0ULL || rel >= 0x4bab60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bab60 size=176 callers=0 calls=0
*/
void sub_4bab60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bab60ULL || rel >= 0x4bac10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bac10 size=240 callers=1 calls=1
   calls: sub_4bac10
*/
void sub_4bac10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bac10ULL || rel >= 0x4bad00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bad00 size=128 callers=0 calls=0
*/
void sub_4bad00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bad00ULL || rel >= 0x4bad80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bad80 size=8 callers=0 calls=0
*/
void sub_4bad80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bad80ULL || rel >= 0x4bad88ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bad88 size=152 callers=0 calls=0
*/
void sub_4bad88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bad88ULL || rel >= 0x4bae20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bae20 size=336 callers=0 calls=1
   calls: sub_4bca38
*/
void sub_4bae20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bae20ULL || rel >= 0x4baf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004baf70 size=264 callers=0 calls=0
*/
void sub_4baf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4baf70ULL || rel >= 0x4bb078ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb078 size=168 callers=1 calls=1
   calls: sub_4bb078
*/
void sub_4bb078(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb078ULL || rel >= 0x4bb120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb120 size=136 callers=0 calls=0
*/
void sub_4bb120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb120ULL || rel >= 0x4bb1a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb1a8 size=32 callers=0 calls=0
*/
void sub_4bb1a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb1a8ULL || rel >= 0x4bb1c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb1c8 size=240 callers=0 calls=2
   calls: sub_4bca08, sub_4bca20
*/
void sub_4bb1c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb1c8ULL || rel >= 0x4bb2b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb2b8 size=72 callers=0 calls=0
*/
void sub_4bb2b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb2b8ULL || rel >= 0x4bb300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb300 size=8 callers=0 calls=0
*/
void sub_4bb300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb300ULL || rel >= 0x4bb308ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb308 size=40 callers=0 calls=1
   calls: sub_4bd258
*/
void sub_4bb308(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb308ULL || rel >= 0x4bb330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb330 size=16 callers=0 calls=0
*/
void sub_4bb330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb330ULL || rel >= 0x4bb340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb340 size=272 callers=0 calls=1
   calls: sub_4bca38
*/
void sub_4bb340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb340ULL || rel >= 0x4bb450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb450 size=240 callers=1 calls=1
   calls: sub_4bb450
*/
void sub_4bb450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb450ULL || rel >= 0x4bb540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb540 size=128 callers=0 calls=0
*/
void sub_4bb540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb540ULL || rel >= 0x4bb5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb5c0 size=8 callers=0 calls=0
*/
void sub_4bb5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb5c0ULL || rel >= 0x4bb5c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb5c8 size=256 callers=0 calls=1
   calls: sub_4bca38
*/
void sub_4bb5c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb5c8ULL || rel >= 0x4bb6c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb6c8 size=232 callers=0 calls=0
*/
void sub_4bb6c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb6c8ULL || rel >= 0x4bb7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb7b0 size=136 callers=0 calls=0
*/
void sub_4bb7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb7b0ULL || rel >= 0x4bb838ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb838 size=8 callers=0 calls=0
*/
void sub_4bb838(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb838ULL || rel >= 0x4bb840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb840 size=8 callers=0 calls=0
*/
void sub_4bb840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb840ULL || rel >= 0x4bb848ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb848 size=8 callers=0 calls=0
*/
void sub_4bb848(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb848ULL || rel >= 0x4bb850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb850 size=16 callers=0 calls=0
*/
void sub_4bb850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb850ULL || rel >= 0x4bb860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb860 size=16 callers=0 calls=0
*/
void sub_4bb860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb860ULL || rel >= 0x4bb870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb870 size=16 callers=0 calls=0
*/
void sub_4bb870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb870ULL || rel >= 0x4bb880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb880 size=16 callers=0 calls=0
*/
void sub_4bb880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb880ULL || rel >= 0x4bb890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb890 size=16 callers=0 calls=0
*/
void sub_4bb890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb890ULL || rel >= 0x4bb8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb8a0 size=16 callers=0 calls=0
*/
void sub_4bb8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb8a0ULL || rel >= 0x4bb8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb8b0 size=376 callers=0 calls=1
   calls: sub_4bba28
*/
void sub_4bb8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb8b0ULL || rel >= 0x4bba28ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bba28 size=296 callers=2 calls=1
   calls: sub_4bba28
*/
void sub_4bba28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bba28ULL || rel >= 0x4bbb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bbb50 size=3288 callers=0 calls=6
   calls: sub_4bc828, sub_4bca08, sub_4bca20, sub_4cc030, sub_4cc668, sub_4cc6a0
*/
void sub_4bbb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bbb50ULL || rel >= 0x4bc828ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bc828 size=160 callers=1 calls=0
*/
void sub_4bc828(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bc828ULL || rel >= 0x4bc8c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bc8c8 size=320 callers=0 calls=1
   calls: sub_4bca38
*/
void sub_4bc8c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bc8c8ULL || rel >= 0x4bca08ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bca08 size=24 callers=41 calls=0
*/
void sub_4bca08(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bca08ULL || rel >= 0x4bca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bca20 size=24 callers=44 calls=0
*/
void sub_4bca20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bca20ULL || rel >= 0x4bca38ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bca38 size=56 callers=5 calls=0
*/
void sub_4bca38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bca38ULL || rel >= 0x4bca70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bca70 size=56 callers=0 calls=0
*/
void sub_4bca70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bca70ULL || rel >= 0x4bcaa8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcaa8 size=8 callers=0 calls=0
*/
void sub_4bcaa8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcaa8ULL || rel >= 0x4bcab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcab0 size=8 callers=1 calls=0
*/
void sub_4bcab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcab0ULL || rel >= 0x4bcab8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcab8 size=40 callers=0 calls=1
   calls: sub_4bcab0
*/
void sub_4bcab8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcab8ULL || rel >= 0x4bcae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcae0 size=264 callers=0 calls=0
*/
void sub_4bcae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcae0ULL || rel >= 0x4bcbe8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcbe8 size=8 callers=0 calls=0
*/
void sub_4bcbe8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcbe8ULL || rel >= 0x4bcbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcbf0 size=344 callers=0 calls=0
*/
void sub_4bcbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcbf0ULL || rel >= 0x4bcd48ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcd48 size=8 callers=0 calls=0
*/
void sub_4bcd48(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcd48ULL || rel >= 0x4bcd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcd50 size=8 callers=0 calls=0
*/
void sub_4bcd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcd50ULL || rel >= 0x4bcd58ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcd58 size=296 callers=0 calls=0
*/
void sub_4bcd58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcd58ULL || rel >= 0x4bce80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bce80 size=16 callers=0 calls=0
*/
void sub_4bce80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bce80ULL || rel >= 0x4bce90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bce90 size=16 callers=0 calls=0
*/
void sub_4bce90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bce90ULL || rel >= 0x4bcea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcea0 size=16 callers=0 calls=0
*/
void sub_4bcea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcea0ULL || rel >= 0x4bceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bceb0 size=8 callers=0 calls=0
*/
void sub_4bceb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bceb0ULL || rel >= 0x4bceb8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bceb8 size=8 callers=0 calls=0
*/
void sub_4bceb8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bceb8ULL || rel >= 0x4bcec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcec0 size=8 callers=0 calls=0
*/
void sub_4bcec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcec0ULL || rel >= 0x4bcec8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcec8 size=24 callers=0 calls=0
*/
void sub_4bcec8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcec8ULL || rel >= 0x4bcee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcee0 size=24 callers=0 calls=0
*/
void sub_4bcee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcee0ULL || rel >= 0x4bcef8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcef8 size=72 callers=0 calls=0
*/
void sub_4bcef8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcef8ULL || rel >= 0x4bcf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcf40 size=32 callers=0 calls=0
*/
void sub_4bcf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcf40ULL || rel >= 0x4bcf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcf60 size=32 callers=0 calls=0
*/
void sub_4bcf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcf60ULL || rel >= 0x4bcf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcf80 size=8 callers=0 calls=0
*/
void sub_4bcf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcf80ULL || rel >= 0x4bcf88ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcf88 size=8 callers=0 calls=0
*/
void sub_4bcf88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcf88ULL || rel >= 0x4bcf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcf90 size=8 callers=0 calls=0
*/
void sub_4bcf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcf90ULL || rel >= 0x4bcf98ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcf98 size=8 callers=0 calls=0
*/
void sub_4bcf98(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcf98ULL || rel >= 0x4bcfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcfa0 size=8 callers=0 calls=0
*/
void sub_4bcfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcfa0ULL || rel >= 0x4bcfa8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcfa8 size=8 callers=0 calls=0
*/
void sub_4bcfa8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcfa8ULL || rel >= 0x4bcfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcfb0 size=8 callers=0 calls=0
*/
void sub_4bcfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcfb0ULL || rel >= 0x4bcfb8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcfb8 size=8 callers=0 calls=0
*/
void sub_4bcfb8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcfb8ULL || rel >= 0x4bcfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcfc0 size=8 callers=0 calls=0
*/
void sub_4bcfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcfc0ULL || rel >= 0x4bcfc8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcfc8 size=8 callers=0 calls=0
*/
void sub_4bcfc8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcfc8ULL || rel >= 0x4bcfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcfd0 size=8 callers=0 calls=0
*/
void sub_4bcfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcfd0ULL || rel >= 0x4bcfd8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcfd8 size=8 callers=0 calls=0
*/
void sub_4bcfd8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcfd8ULL || rel >= 0x4bcfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcfe0 size=8 callers=0 calls=0
*/
void sub_4bcfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcfe0ULL || rel >= 0x4bcfe8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcfe8 size=8 callers=0 calls=0
*/
void sub_4bcfe8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcfe8ULL || rel >= 0x4bcff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcff0 size=8 callers=0 calls=0
*/
void sub_4bcff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcff0ULL || rel >= 0x4bcff8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcff8 size=16 callers=0 calls=0
*/
void sub_4bcff8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcff8ULL || rel >= 0x4bd008ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd008 size=8 callers=0 calls=0
*/
void sub_4bd008(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd008ULL || rel >= 0x4bd010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd010 size=56 callers=0 calls=0
*/
void sub_4bd010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd010ULL || rel >= 0x4bd048ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd048 size=96 callers=0 calls=0
*/
void sub_4bd048(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd048ULL || rel >= 0x4bd0a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd0a8 size=8 callers=0 calls=0
*/
void sub_4bd0a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd0a8ULL || rel >= 0x4bd0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd0b0 size=8 callers=0 calls=0
*/
void sub_4bd0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd0b0ULL || rel >= 0x4bd0b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd0b8 size=8 callers=0 calls=0
*/
void sub_4bd0b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd0b8ULL || rel >= 0x4bd0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd0c0 size=8 callers=0 calls=0
*/
void sub_4bd0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd0c0ULL || rel >= 0x4bd0c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd0c8 size=8 callers=0 calls=0
*/
void sub_4bd0c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd0c8ULL || rel >= 0x4bd0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd0d0 size=8 callers=0 calls=0
*/
void sub_4bd0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd0d0ULL || rel >= 0x4bd0d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd0d8 size=8 callers=0 calls=0
*/
void sub_4bd0d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd0d8ULL || rel >= 0x4bd0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd0e0 size=8 callers=0 calls=0
*/
void sub_4bd0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd0e0ULL || rel >= 0x4bd0e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd0e8 size=8 callers=0 calls=0
*/
void sub_4bd0e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd0e8ULL || rel >= 0x4bd0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd0f0 size=8 callers=0 calls=0
*/
void sub_4bd0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd0f0ULL || rel >= 0x4bd0f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd0f8 size=8 callers=0 calls=0
*/
void sub_4bd0f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd0f8ULL || rel >= 0x4bd100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd100 size=8 callers=0 calls=0
*/
void sub_4bd100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd100ULL || rel >= 0x4bd108ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd108 size=8 callers=0 calls=0
*/
void sub_4bd108(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd108ULL || rel >= 0x4bd110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd110 size=8 callers=0 calls=0
*/
void sub_4bd110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd110ULL || rel >= 0x4bd118ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd118 size=8 callers=0 calls=0
*/
void sub_4bd118(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd118ULL || rel >= 0x4bd120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd120 size=8 callers=0 calls=0
*/
void sub_4bd120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd120ULL || rel >= 0x4bd128ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd128 size=8 callers=0 calls=0
*/
void sub_4bd128(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd128ULL || rel >= 0x4bd130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd130 size=8 callers=0 calls=0
*/
void sub_4bd130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd130ULL || rel >= 0x4bd138ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd138 size=8 callers=0 calls=0
*/
void sub_4bd138(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd138ULL || rel >= 0x4bd140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd140 size=8 callers=0 calls=0
*/
void sub_4bd140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd140ULL || rel >= 0x4bd148ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd148 size=8 callers=0 calls=0
*/
void sub_4bd148(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd148ULL || rel >= 0x4bd150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd150 size=48 callers=0 calls=0
*/
void sub_4bd150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd150ULL || rel >= 0x4bd180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd180 size=56 callers=0 calls=0
*/
void sub_4bd180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd180ULL || rel >= 0x4bd1b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd1b8 size=80 callers=0 calls=0
*/
void sub_4bd1b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd1b8ULL || rel >= 0x4bd208ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd208 size=8 callers=0 calls=0
*/
void sub_4bd208(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd208ULL || rel >= 0x4bd210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd210 size=8 callers=0 calls=0
*/
void sub_4bd210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd210ULL || rel >= 0x4bd218ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd218 size=8 callers=0 calls=0
*/
void sub_4bd218(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd218ULL || rel >= 0x4bd220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd220 size=8 callers=0 calls=0
*/
void sub_4bd220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd220ULL || rel >= 0x4bd228ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd228 size=8 callers=0 calls=0
*/
void sub_4bd228(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd228ULL || rel >= 0x4bd230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd230 size=8 callers=0 calls=0
*/
void sub_4bd230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd230ULL || rel >= 0x4bd238ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd238 size=8 callers=0 calls=0
*/
void sub_4bd238(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd238ULL || rel >= 0x4bd240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd240 size=8 callers=0 calls=0
*/
void sub_4bd240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd240ULL || rel >= 0x4bd248ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd248 size=8 callers=0 calls=0
*/
void sub_4bd248(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd248ULL || rel >= 0x4bd250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd250 size=8 callers=0 calls=0
*/
void sub_4bd250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd250ULL || rel >= 0x4bd258ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd258 size=8 callers=74 calls=0
*/
void sub_4bd258(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd258ULL || rel >= 0x4bd260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd260 size=8 callers=81 calls=0
*/
void sub_4bd260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd260ULL || rel >= 0x4bd268ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd268 size=8 callers=3 calls=0
*/
void sub_4bd268(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd268ULL || rel >= 0x4bd270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd270 size=8 callers=1 calls=0
*/
void sub_4bd270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd270ULL || rel >= 0x4bd278ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd278 size=8 callers=0 calls=0
*/
void sub_4bd278(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd278ULL || rel >= 0x4bd280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd280 size=48 callers=0 calls=0
*/
void sub_4bd280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd280ULL || rel >= 0x4bd2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd2b0 size=64 callers=3 calls=0
*/
void sub_4bd2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd2b0ULL || rel >= 0x4bd2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd2f0 size=96 callers=0 calls=0
*/
void sub_4bd2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd2f0ULL || rel >= 0x4bd350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd350 size=8 callers=0 calls=0
*/
void sub_4bd350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd350ULL || rel >= 0x4bd358ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd358 size=1416 callers=2 calls=3
   calls: sub_4bd8e0, sub_4bdae0, sub_4fac88
   ref: %+.2d%.2d
   ref: %m/%d/%y
   ref: %0*lld
   ref: %Y-%m-%d
   ref: %H:%M:%S
*/
void unnamed_36(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd358ULL || rel >= 0x4bd8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd8e0 size=512 callers=3 calls=0
*/
void sub_4bd8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd8e0ULL || rel >= 0x4bdae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bdae0 size=848 callers=1 calls=1
   calls: unnamed_36
*/
void sub_4bdae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bdae0ULL || rel >= 0x4bde30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bde30 size=80 callers=0 calls=0
*/
void sub_4bde30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bde30ULL || rel >= 0x4bde80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bde80 size=64 callers=0 calls=1
   calls: sub_4bd2b0
*/
void sub_4bde80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bde80ULL || rel >= 0x4bdec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bdec0 size=32 callers=3 calls=0
*/
void sub_4bdec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bdec0ULL || rel >= 0x4bdee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bdee0 size=32 callers=0 calls=0
*/
void sub_4bdee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bdee0ULL || rel >= 0x4bdf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bdf00 size=8 callers=0 calls=0
*/
void sub_4bdf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bdf00ULL || rel >= 0x4bdf08ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bdf08 size=8 callers=0 calls=0
*/
void sub_4bdf08(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bdf08ULL || rel >= 0x4bdf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bdf10 size=8 callers=0 calls=0
*/
void sub_4bdf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bdf10ULL || rel >= 0x4bdf18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bdf18 size=8 callers=0 calls=0
*/
void sub_4bdf18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bdf18ULL || rel >= 0x4bdf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bdf20 size=136 callers=0 calls=0
*/
void sub_4bdf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bdf20ULL || rel >= 0x4bdfa8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bdfa8 size=8 callers=0 calls=0
*/
void sub_4bdfa8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bdfa8ULL || rel >= 0x4bdfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bdfb0 size=8 callers=0 calls=0
*/
void sub_4bdfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bdfb0ULL || rel >= 0x4bdfb8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bdfb8 size=8 callers=0 calls=0
*/
void sub_4bdfb8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bdfb8ULL || rel >= 0x4bdfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bdfc0 size=8 callers=0 calls=0
*/
void sub_4bdfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bdfc0ULL || rel >= 0x4bdfc8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bdfc8 size=8 callers=0 calls=0
*/
void sub_4bdfc8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bdfc8ULL || rel >= 0x4bdfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bdfd0 size=8 callers=0 calls=0
*/
void sub_4bdfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bdfd0ULL || rel >= 0x4bdfd8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bdfd8 size=8 callers=0 calls=0
*/
void sub_4bdfd8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bdfd8ULL || rel >= 0x4bdfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bdfe0 size=8 callers=0 calls=0
*/
void sub_4bdfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bdfe0ULL || rel >= 0x4bdfe8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bdfe8 size=24 callers=0 calls=0
*/
void sub_4bdfe8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bdfe8ULL || rel >= 0x4be000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004be000 size=64 callers=0 calls=0
*/
void sub_4be000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4be000ULL || rel >= 0x4be040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004be040 size=4848 callers=0 calls=3
   calls: sub_4c0988, sub_4cc668, sub_4cc6a0
*/
void sub_4be040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4be040ULL || rel >= 0x4bf330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bf330 size=1456 callers=1 calls=3
   calls: sub_4c0988, sub_4cc668, sub_4cc6a0
*/
void sub_4bf330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bf330ULL || rel >= 0x4bf8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bf8e0 size=4264 callers=0 calls=4
   calls: sub_4bf330, sub_4c0988, sub_4cc668, sub_4cc6a0
*/
void sub_4bf8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bf8e0ULL || rel >= 0x4c0988ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c0988 size=576 callers=3 calls=1
   calls: sub_4cc6a0
*/
void sub_4c0988(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c0988ULL || rel >= 0x4c0bc8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c0bc8 size=864 callers=0 calls=0
   ref: UUUUUU
*/
void UUUUUU(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c0bc8ULL || rel >= 0x4c0f28ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c0f28 size=568 callers=0 calls=0
*/
void sub_4c0f28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c0f28ULL || rel >= 0x4c1160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c1160 size=712 callers=0 calls=0
   ref: UUUUUU
*/
void UUUUUU_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c1160ULL || rel >= 0x4c1428ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c1428 size=768 callers=0 calls=0
*/
void sub_4c1428(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c1428ULL || rel >= 0x4c1728ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c1728 size=728 callers=0 calls=0
*/
void sub_4c1728(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c1728ULL || rel >= 0x4c1a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c1a00 size=64 callers=0 calls=0
*/
void sub_4c1a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c1a00ULL || rel >= 0x4c1a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c1a40 size=64 callers=0 calls=0
*/
void sub_4c1a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c1a40ULL || rel >= 0x4c1a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c1a80 size=160 callers=0 calls=0
*/
void sub_4c1a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c1a80ULL || rel >= 0x4c1b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c1b20 size=160 callers=0 calls=0
*/
void sub_4c1b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c1b20ULL || rel >= 0x4c1bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c1bc0 size=248 callers=1 calls=1
   calls: sub_4c1bc0
*/
void sub_4c1bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c1bc0ULL || rel >= 0x4c1cb8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c1cb8 size=280 callers=0 calls=0
*/
void sub_4c1cb8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c1cb8ULL || rel >= 0x4c1dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c1dd0 size=744 callers=0 calls=0
*/
void sub_4c1dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c1dd0ULL || rel >= 0x4c20b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c20b8 size=632 callers=0 calls=0
*/
void sub_4c20b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c20b8ULL || rel >= 0x4c2330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2330 size=280 callers=0 calls=0
*/
void sub_4c2330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2330ULL || rel >= 0x4c2448ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2448 size=744 callers=1 calls=0
*/
void sub_4c2448(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2448ULL || rel >= 0x4c2730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2730 size=688 callers=0 calls=1
   calls: sub_4c2448
*/
void sub_4c2730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2730ULL || rel >= 0x4c29e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c29e0 size=248 callers=0 calls=0
*/
void sub_4c29e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c29e0ULL || rel >= 0x4c2ad8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2ad8 size=768 callers=0 calls=0
*/
void sub_4c2ad8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2ad8ULL || rel >= 0x4c2dd8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2dd8 size=616 callers=0 calls=0
*/
void sub_4c2dd8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2dd8ULL || rel >= 0x4c3040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3040 size=256 callers=0 calls=0
*/
void sub_4c3040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3040ULL || rel >= 0x4c3140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3140 size=784 callers=1 calls=0
*/
void sub_4c3140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3140ULL || rel >= 0x4c3450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3450 size=656 callers=0 calls=1
   calls: sub_4c3140
*/
void sub_4c3450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3450ULL || rel >= 0x4c36e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c36e0 size=944 callers=0 calls=0
*/
void sub_4c36e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c36e0ULL || rel >= 0x4c3a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3a90 size=472 callers=0 calls=0
*/
void sub_4c3a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3a90ULL || rel >= 0x4c3c68ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3c68 size=792 callers=0 calls=0
*/
void sub_4c3c68(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3c68ULL || rel >= 0x4c3f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3f80 size=280 callers=0 calls=0
*/
void sub_4c3f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3f80ULL || rel >= 0x4c4098ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c4098 size=2088 callers=0 calls=0
   ref: >UUUUU
   ref: UUUUUU
*/
void UUUUUU_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c4098ULL || rel >= 0x4c48c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c48c0 size=1872 callers=0 calls=0
*/
void sub_4c48c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c48c0ULL || rel >= 0x4c5010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c5010 size=72 callers=0 calls=0
*/
void sub_4c5010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c5010ULL || rel >= 0x4c5058ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c5058 size=1408 callers=0 calls=0
*/
void sub_4c5058(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c5058ULL || rel >= 0x4c55d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c55d8 size=32 callers=0 calls=0
*/
void sub_4c55d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c55d8ULL || rel >= 0x4c55f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c55f8 size=8 callers=0 calls=0
*/
void sub_4c55f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c55f8ULL || rel >= 0x4c5600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c5600 size=8 callers=0 calls=0
*/
void sub_4c5600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c5600ULL || rel >= 0x4c5608ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c5608 size=8 callers=0 calls=0
*/
void sub_4c5608(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c5608ULL || rel >= 0x4c5610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c5610 size=8 callers=0 calls=0
*/
void sub_4c5610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c5610ULL || rel >= 0x4c5618ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c5618 size=8 callers=0 calls=0
*/
void sub_4c5618(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c5618ULL || rel >= 0x4c5620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c5620 size=8 callers=0 calls=0
*/
void sub_4c5620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c5620ULL || rel >= 0x4c5628ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c5628 size=8 callers=0 calls=0
*/
void sub_4c5628(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c5628ULL || rel >= 0x4c5630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c5630 size=8 callers=0 calls=0
*/
void sub_4c5630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c5630ULL || rel >= 0x4c5638ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c5638 size=712 callers=0 calls=0
*/
void sub_4c5638(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c5638ULL || rel >= 0x4c5900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c5900 size=360 callers=0 calls=3
   calls: null_6, sub_4bca08, sub_4bca20
*/
void sub_4c5900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c5900ULL || rel >= 0x4c5a68ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c5a68 size=4216 callers=3 calls=3
   calls: f_0X_0X_0X_0x_0x_0x, f_0X_0X_0X_0x_0x_0x_2, sub_4c6ae0
   ref: -+   0X0x
   ref: (null)
*/
void null_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c5a68ULL || rel >= 0x4c6ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c6ae0 size=624 callers=10 calls=0
*/
void sub_4c6ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c6ae0ULL || rel >= 0x4c6d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c6d50 size=6512 callers=1 calls=0
   ref: -0X+0X 0X-0x+0x 0x
*/
void f_0X_0X_0X_0x_0x_0x(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c6d50ULL || rel >= 0x4c86c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c86c0 size=5904 callers=1 calls=0
   ref: -0X+0X 0X-0x+0x 0x
*/
void f_0X_0X_0X_0x_0x_0x_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c86c0ULL || rel >= 0x4c9dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c9dd0 size=216 callers=0 calls=3
   calls: null_7, sub_4bca08, sub_4bca20
*/
void sub_4c9dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c9dd0ULL || rel >= 0x4c9ea8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c9ea8 size=2832 callers=2 calls=2
   calls: sub_4ca9b8, sub_4cac58
   ref: %%%s%s%s%s%s*.*%c%c
   ref: (null)
*/
void null_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c9ea8ULL || rel >= 0x4ca9b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ca9b8 size=672 callers=10 calls=0
*/
void sub_4ca9b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ca9b8ULL || rel >= 0x4cac58ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cac58 size=872 callers=6 calls=0
*/
void sub_4cac58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cac58ULL || rel >= 0x4cafc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cafc0 size=192 callers=0 calls=1
   calls: sub_4cc668
*/
void sub_4cafc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cafc0ULL || rel >= 0x4cb080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cb080 size=192 callers=0 calls=1
   calls: sub_4cc668
*/
void sub_4cb080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cb080ULL || rel >= 0x4cb140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cb140 size=192 callers=0 calls=1
   calls: sub_4cc668
*/
void sub_4cb140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cb140ULL || rel >= 0x4cb200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cb200 size=248 callers=0 calls=1
   calls: sub_4cc668
*/
void sub_4cb200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cb200ULL || rel >= 0x4cb2f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cb2f8 size=240 callers=0 calls=1
   calls: sub_4cc668
*/
void sub_4cb2f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cb2f8ULL || rel >= 0x4cb3e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cb3e8 size=248 callers=0 calls=1
   calls: sub_4cc668
*/
void sub_4cb3e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cb3e8ULL || rel >= 0x4cb4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cb4e0 size=144 callers=0 calls=0
*/
void sub_4cb4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cb4e0ULL || rel >= 0x4cb570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cb570 size=208 callers=0 calls=0
*/
void sub_4cb570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cb570ULL || rel >= 0x4cb640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cb640 size=176 callers=0 calls=0
*/
void sub_4cb640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cb640ULL || rel >= 0x4cb6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cb6f0 size=128 callers=0 calls=0
*/
void sub_4cb6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cb6f0ULL || rel >= 0x4cb770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cb770 size=856 callers=0 calls=0
*/
void sub_4cb770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cb770ULL || rel >= 0x4cbac8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cbac8 size=200 callers=0 calls=0
*/
void sub_4cbac8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cbac8ULL || rel >= 0x4cbb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cbb90 size=472 callers=0 calls=0
*/
void sub_4cbb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cbb90ULL || rel >= 0x4cbd68ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cbd68 size=352 callers=0 calls=0
*/
void sub_4cbd68(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cbd68ULL || rel >= 0x4cbec8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cbec8 size=136 callers=0 calls=0
*/
void sub_4cbec8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cbec8ULL || rel >= 0x4cbf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cbf50 size=88 callers=0 calls=0
*/
void sub_4cbf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cbf50ULL || rel >= 0x4cbfa8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cbfa8 size=136 callers=0 calls=0
*/
void sub_4cbfa8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cbfa8ULL || rel >= 0x4cc030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cc030 size=1592 callers=13 calls=2
   calls: sub_4cc668, sub_4cc6a0
*/
void sub_4cc030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cc030ULL || rel >= 0x4cc668ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cc668 size=56 callers=28 calls=0
*/
void sub_4cc668(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cc668ULL || rel >= 0x4cc6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cc6a0 size=200 callers=67 calls=1
   calls: sub_4f5b68
*/
void sub_4cc6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cc6a0ULL || rel >= 0x4cc768ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cc768 size=8 callers=0 calls=0
*/
void sub_4cc768(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cc768ULL || rel >= 0x4cc770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cc770 size=8 callers=0 calls=0
*/
void sub_4cc770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cc770ULL || rel >= 0x4cc778ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cc778 size=8 callers=0 calls=0
*/
void sub_4cc778(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cc778ULL || rel >= 0x4cc780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cc780 size=40 callers=0 calls=0
*/
void sub_4cc780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cc780ULL || rel >= 0x4cc7a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cc7a8 size=40 callers=0 calls=0
*/
void sub_4cc7a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cc7a8ULL || rel >= 0x4cc7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cc7d0 size=40 callers=0 calls=0
*/
void sub_4cc7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cc7d0ULL || rel >= 0x4cc7f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cc7f8 size=40 callers=0 calls=0
*/
void sub_4cc7f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cc7f8ULL || rel >= 0x4cc820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cc820 size=48 callers=0 calls=0
*/
void sub_4cc820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cc820ULL || rel >= 0x4cc850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cc850 size=80 callers=0 calls=0
*/
void sub_4cc850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cc850ULL || rel >= 0x4cc8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cc8a0 size=16 callers=0 calls=0
*/
void sub_4cc8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cc8a0ULL || rel >= 0x4cc8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cc8b0 size=16 callers=0 calls=0
*/
void sub_4cc8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cc8b0ULL || rel >= 0x4cc8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cc8c0 size=16 callers=0 calls=0
*/
void sub_4cc8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cc8c0ULL || rel >= 0x4cc8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cc8d0 size=96 callers=0 calls=0
*/
void sub_4cc8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cc8d0ULL || rel >= 0x4cc930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cc930 size=104 callers=0 calls=0
*/
void sub_4cc930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cc930ULL || rel >= 0x4cc998ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cc998 size=48 callers=0 calls=0
*/
void sub_4cc998(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cc998ULL || rel >= 0x4cc9c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cc9c8 size=48 callers=0 calls=0
*/
void sub_4cc9c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cc9c8ULL || rel >= 0x4cc9f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cc9f8 size=80 callers=0 calls=0
*/
void sub_4cc9f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cc9f8ULL || rel >= 0x4cca48ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cca48 size=200 callers=0 calls=0
*/
void sub_4cca48(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cca48ULL || rel >= 0x4ccb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ccb10 size=208 callers=0 calls=0
*/
void sub_4ccb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ccb10ULL || rel >= 0x4ccbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ccbe0 size=280 callers=0 calls=0
*/
void sub_4ccbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ccbe0ULL || rel >= 0x4cccf8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cccf8 size=48 callers=0 calls=0
*/
void sub_4cccf8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cccf8ULL || rel >= 0x4ccd28ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ccd28 size=48 callers=0 calls=0
*/
void sub_4ccd28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ccd28ULL || rel >= 0x4ccd58ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ccd58 size=80 callers=0 calls=0
*/
void sub_4ccd58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ccd58ULL || rel >= 0x4ccda8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ccda8 size=544 callers=0 calls=0
*/
void sub_4ccda8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ccda8ULL || rel >= 0x4ccfc8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ccfc8 size=24 callers=0 calls=0
*/
void sub_4ccfc8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ccfc8ULL || rel >= 0x4ccfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ccfe0 size=24 callers=0 calls=0
*/
void sub_4ccfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ccfe0ULL || rel >= 0x4ccff8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ccff8 size=656 callers=0 calls=0
*/
void sub_4ccff8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ccff8ULL || rel >= 0x4cd288ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd288 size=592 callers=0 calls=0
*/
void sub_4cd288(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd288ULL || rel >= 0x4cd4d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd4d8 size=96 callers=0 calls=0
*/
void sub_4cd4d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd4d8ULL || rel >= 0x4cd538ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd538 size=48 callers=0 calls=0
*/
void sub_4cd538(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd538ULL || rel >= 0x4cd568ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd568 size=272 callers=0 calls=0
*/
void sub_4cd568(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd568ULL || rel >= 0x4cd678ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd678 size=256 callers=0 calls=0
*/
void sub_4cd678(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd678ULL || rel >= 0x4cd778ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd778 size=96 callers=0 calls=0
*/
void sub_4cd778(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd778ULL || rel >= 0x4cd7d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd7d8 size=8 callers=0 calls=0
*/
void sub_4cd7d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd7d8ULL || rel >= 0x4cd7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd7e0 size=8 callers=0 calls=0
*/
void sub_4cd7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd7e0ULL || rel >= 0x4cd7e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd7e8 size=8 callers=0 calls=0
*/
void sub_4cd7e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd7e8ULL || rel >= 0x4cd7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd7f0 size=80 callers=0 calls=0
*/
void sub_4cd7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd7f0ULL || rel >= 0x4cd840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd840 size=80 callers=0 calls=0
*/
void sub_4cd840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd840ULL || rel >= 0x4cd890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd890 size=64 callers=0 calls=0
*/
void sub_4cd890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd890ULL || rel >= 0x4cd8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd8d0 size=8 callers=0 calls=0
*/
void sub_4cd8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd8d0ULL || rel >= 0x4cd8d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd8d8 size=8 callers=0 calls=0
*/
void sub_4cd8d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd8d8ULL || rel >= 0x4cd8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd8e0 size=48 callers=0 calls=0
*/
void sub_4cd8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd8e0ULL || rel >= 0x4cd910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd910 size=104 callers=0 calls=0
*/
void sub_4cd910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd910ULL || rel >= 0x4cd978ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd978 size=104 callers=0 calls=0
*/
void sub_4cd978(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd978ULL || rel >= 0x4cd9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd9e0 size=200 callers=0 calls=0
*/
void sub_4cd9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd9e0ULL || rel >= 0x4cdaa8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdaa8 size=64 callers=0 calls=0
*/
void sub_4cdaa8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdaa8ULL || rel >= 0x4cdae8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdae8 size=64 callers=0 calls=0
*/
void sub_4cdae8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdae8ULL || rel >= 0x4cdb28ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdb28 size=120 callers=0 calls=0
*/
void sub_4cdb28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdb28ULL || rel >= 0x4cdba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdba0 size=8 callers=0 calls=0
*/
void sub_4cdba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdba0ULL || rel >= 0x4cdba8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdba8 size=8 callers=0 calls=0
*/
void sub_4cdba8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdba8ULL || rel >= 0x4cdbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdbb0 size=8 callers=0 calls=0
*/
void sub_4cdbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdbb0ULL || rel >= 0x4cdbb8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdbb8 size=48 callers=0 calls=0
*/
void sub_4cdbb8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdbb8ULL || rel >= 0x4cdbe8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdbe8 size=48 callers=0 calls=0
*/
void sub_4cdbe8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdbe8ULL || rel >= 0x4cdc18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdc18 size=672 callers=0 calls=0
*/
void sub_4cdc18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdc18ULL || rel >= 0x4cdeb8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdeb8 size=624 callers=0 calls=0
*/
void sub_4cdeb8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdeb8ULL || rel >= 0x4ce128ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce128 size=96 callers=0 calls=0
*/
void sub_4ce128(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce128ULL || rel >= 0x4ce188ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce188 size=80 callers=0 calls=0
*/
void sub_4ce188(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce188ULL || rel >= 0x4ce1d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce1d8 size=456 callers=0 calls=0
*/
void sub_4ce1d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce1d8ULL || rel >= 0x4ce3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce3a0 size=360 callers=0 calls=0
*/
void sub_4ce3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce3a0ULL || rel >= 0x4ce508ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce508 size=96 callers=0 calls=0
*/
void sub_4ce508(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce508ULL || rel >= 0x4ce568ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce568 size=48 callers=0 calls=0
*/
void sub_4ce568(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce568ULL || rel >= 0x4ce598ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce598 size=48 callers=0 calls=0
*/
void sub_4ce598(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce598ULL || rel >= 0x4ce5c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce5c8 size=416 callers=0 calls=0
*/
void sub_4ce5c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce5c8ULL || rel >= 0x4ce768ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce768 size=400 callers=0 calls=0
*/
void sub_4ce768(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce768ULL || rel >= 0x4ce8f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce8f8 size=96 callers=0 calls=0
*/
void sub_4ce8f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce8f8ULL || rel >= 0x4ce958ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce958 size=80 callers=0 calls=0
*/
void sub_4ce958(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce958ULL || rel >= 0x4ce9a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce9a8 size=200 callers=0 calls=0
*/
void sub_4ce9a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce9a8ULL || rel >= 0x4cea70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cea70 size=184 callers=0 calls=0
*/
void sub_4cea70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cea70ULL || rel >= 0x4ceb28ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ceb28 size=16 callers=0 calls=0
*/
void sub_4ceb28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ceb28ULL || rel >= 0x4ceb38ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ceb38 size=432 callers=0 calls=2
   calls: ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123, sub_4cf4c8
   ref: $2a$00$abcdefghijklmnopqrstuu
   ref: VUrPmXD6q/nVSSp7pNDhCR9071IfIRe
*/
void nVSSp7pNDhCR9071IfIRe(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ceb38ULL || rel >= 0x4cece8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cece8 size=2016 callers=2 calls=2
   calls: sub_4cf4c8, sub_4cf618
   ref: ./ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789
*/
void ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cece8ULL || rel >= 0x4cf4c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cf4c8 size=336 callers=3 calls=0
*/
void sub_4cf4c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cf4c8ULL || rel >= 0x4cf618ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cf618 size=912 callers=11 calls=0
*/
void sub_4cf618(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cf618ULL || rel >= 0x4cf9a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cf9a8 size=728 callers=3 calls=0
*/
void sub_4cf9a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cf9a8ULL || rel >= 0x4cfc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cfc80 size=1032 callers=3 calls=0
*/
void sub_4cfc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cfc80ULL || rel >= 0x4d0088ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d0088 size=176 callers=0 calls=1
   calls: f_0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqr
   ref: _0.../9ZzX7iSJNd21sU
   ref: _0.../9Zz
*/
void f_9ZzX7iSJNd21sU(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d0088ULL || rel >= 0x4d0138ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d0138 size=1688 callers=2 calls=2
   calls: sub_4cf9a8, sub_4cfc80
   ref: ./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz
*/
void f_0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqr(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d0138ULL || rel >= 0x4d07d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d07d0 size=128 callers=0 calls=1
   calls: f_0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqr_2
   ref: Xy01@#
   ref: $1$abcd0123$
   ref: $1$abcd0123$9Qcg8DyviekV3tDGMZynJ1
*/
void Xy01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d07d0ULL || rel >= 0x4d0850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d0850 size=3368 callers=2 calls=2
   calls: sub_4d1578, sub_4d16e0
   ref: ./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz
*/
void f_0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqr_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d0850ULL || rel >= 0x4d1578ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d1578 size=360 callers=3 calls=1
   calls: sub_4d16e0
*/
void sub_4d1578(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d1578ULL || rel >= 0x4d16e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d16e0 size=3304 callers=27 calls=0
*/
void sub_4d16e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d16e0ULL || rel >= 0x4d23c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d23c8 size=120 callers=0 calls=0
*/
void sub_4d23c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d23c8ULL || rel >= 0x4d2440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d2440 size=128 callers=0 calls=1
   calls: f_0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqr_3
   ref: Xy01@#
   ref: $5$rounds=1234$abc0123456789$
   ref: $5$rounds=1234$abc0123456789$3VfDjPt05VHFn47C/ojFZ6KRPYrOjj1lLbH.dkF3bZ6
*/
void ojFZ6KRPYrOjj1lLbH_dkF3bZ6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d2440ULL || rel >= 0x4d24c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d24c0 size=6552 callers=2 calls=2
   calls: sub_4d3e58, sub_4d4050
   ref: ./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz
   ref: rounds=%u$
   ref: $5$%s%.*s$
   ref: rounds=
*/
void f_0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqr_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d24c0ULL || rel >= 0x4d3e58ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d3e58 size=504 callers=5 calls=1
   calls: sub_4d4050
*/
void sub_4d3e58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d3e58ULL || rel >= 0x4d4050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d4050 size=1128 callers=38 calls=0
*/
void sub_4d4050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d4050ULL || rel >= 0x4d44b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d44b8 size=128 callers=0 calls=1
   calls: f_0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqr_4
   ref: Xy01@#
   ref: $6$rounds=1234$abc0123456789$
   ref: $6$rounds=1234$abc0123456789$BCpt8zLrc/RcyuXmCDOE1ALqMXB2MH6n1g891HhFj8.w7LxGv.FTkqq6Vxc/km3Y0jE0j24
*/
void oOu6reg1(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d44b8ULL || rel >= 0x4d4538ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d4538 size=6392 callers=2 calls=2
   calls: sub_4d5e30, sub_4d6188
   ref: ./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz
   ref: rounds=%u$
   ref: $6$%s%.*s$
   ref: rounds=
*/
void f_0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqr_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d4538ULL || rel >= 0x4d5e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d5e30 size=856 callers=5 calls=1
   calls: sub_4d6188
*/
void sub_4d5e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d5e30ULL || rel >= 0x4d6188ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6188 size=432 callers=38 calls=0
*/
void sub_4d6188(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6188ULL || rel >= 0x4d6338ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6338 size=824 callers=0 calls=1
   calls: sub_4cf9a8
*/
void sub_4d6338(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6338ULL || rel >= 0x4d6670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6670 size=1312 callers=0 calls=1
   calls: sub_4cfc80
*/
void sub_4d6670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6670ULL || rel >= 0x4d6b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6b90 size=40 callers=0 calls=0
*/
void sub_4d6b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6b90ULL || rel >= 0x4d6bb8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6bb8 size=40 callers=0 calls=0
*/
void sub_4d6bb8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6bb8ULL || rel >= 0x4d6be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6be0 size=24 callers=0 calls=0
*/
void sub_4d6be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6be0ULL || rel >= 0x4d6bf8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6bf8 size=24 callers=0 calls=0
*/
void sub_4d6bf8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6bf8ULL || rel >= 0x4d6c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6c10 size=16 callers=0 calls=0
*/
void sub_4d6c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6c10ULL || rel >= 0x4d6c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6c20 size=24 callers=0 calls=0
*/
void sub_4d6c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6c20ULL || rel >= 0x4d6c38ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6c38 size=24 callers=0 calls=0
*/
void sub_4d6c38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6c38ULL || rel >= 0x4d6c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6c50 size=24 callers=0 calls=0
*/
void sub_4d6c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6c50ULL || rel >= 0x4d6c68ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

