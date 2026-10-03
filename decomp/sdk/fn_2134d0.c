/* sdk functions 002134d0..00230f80 (21 of 53). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 002134d0 size=432 callers=0 calls=0
   ref: MountRomOnFile
*/
void MountRomOnFile(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2134d0ULL || rel >= 0x213680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00213680 size=288 callers=0 calls=1
   calls: sub_214430
   ref: , name: "%s", userid: 0x%016llX%016llX
   ref: MountSaveData
*/
void MountSaveData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x213680ULL || rel >= 0x2137a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002137a0 size=336 callers=0 calls=1
   calls: sub_213ff0
   ref: MountSaveData
   ref: , name: "%s", applicationid: 0x%llX, userid: 0x%016llX%016llX
*/
void MountSaveData_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2137a0ULL || rel >= 0x2138f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002138f0 size=336 callers=0 calls=1
   calls: sub_213ff0
   ref: MountSaveDataReadOnly
   ref: , name: "%s", applicationid: 0x%llX, userid: 0x%016llX%016llX
*/
void MountSaveDataReadOnly(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2138f0ULL || rel >= 0x213a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00213a40 size=48 callers=0 calls=0
*/
void sub_213a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x213a40ULL || rel >= 0x213a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00213a70 size=304 callers=0 calls=0
*/
void sub_213a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x213a70ULL || rel >= 0x213ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00213ba0 size=304 callers=0 calls=1
   calls: sub_213ff0
   ref: , name: "%s"
   ref: MountTemporaryStorage
*/
void MountTemporaryStorage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x213ba0ULL || rel >= 0x213cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00213cd0 size=304 callers=0 calls=1
   calls: sub_213ff0
   ref: , name: "%s"
   ref: MountCacheStorage
*/
void MountCacheStorage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x213cd0ULL || rel >= 0x213e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00213e00 size=320 callers=0 calls=1
   calls: sub_213ff0
   ref: , name: "%s", index: %d
   ref: MountCacheStorage
*/
void MountCacheStorage_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x213e00ULL || rel >= 0x213f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00213f40 size=176 callers=0 calls=1
   calls: sub_213ff0
   ref: MountCacheStorage
*/
void MountCacheStorage_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x213f40ULL || rel >= 0x213ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00213ff0 size=416 callers=12 calls=0
*/
void sub_213ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x213ff0ULL || rel >= 0x214190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00214190 size=176 callers=0 calls=1
   calls: sub_213ff0
   ref: MountCacheStorage
*/
void MountCacheStorage_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x214190ULL || rel >= 0x214240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00214240 size=240 callers=0 calls=0
*/
void sub_214240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x214240ULL || rel >= 0x214330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00214330 size=256 callers=0 calls=0
   ref: MountSaveDataInternalStorage
*/
void MountSaveDataInternalStorage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x214330ULL || rel >= 0x214430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00214430 size=448 callers=2 calls=0
*/
void sub_214430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x214430ULL || rel >= 0x2145f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002145f0 size=464 callers=0 calls=0
   ref: SetSaveDataRootPath
   ref: , path: "%s"
*/
void SetSaveDataRootPath(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2145f0ULL || rel >= 0x2147c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002147c0 size=32 callers=0 calls=0
*/
void sub_2147c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2147c0ULL || rel >= 0x2147e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002147e0 size=208 callers=0 calls=0
   ref: ReadSaveDataFileSystemExtraData
*/
void ReadSaveDataFileSystemExtraData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2147e0ULL || rel >= 0x2148b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002148b0 size=224 callers=0 calls=0
   ref: ReadSaveDataFileSystemExtraData
*/
void ReadSaveDataFileSystemExtraData_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2148b0ULL || rel >= 0x214990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00214990 size=224 callers=0 calls=0
   ref: WriteSaveDataFileSystemExtraData
*/
void WriteSaveDataFileSystemExtraData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x214990ULL || rel >= 0x214a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00214a70 size=240 callers=0 calls=0
   ref: WriteSaveDataFileSystemExtraData
*/
void WriteSaveDataFileSystemExtraData_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x214a70ULL || rel >= 0x214b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00214b60 size=352 callers=0 calls=0
   ref: DeleteSaveData
   ref: , savedataid: 0x%llX
*/
void DeleteSaveData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x214b60ULL || rel >= 0x214cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00214cc0 size=400 callers=0 calls=0
   ref: DeleteSaveData
   ref: , savedataspaceid: %s, savedataid: 0x%llX
*/
void DeleteSaveData_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x214cc0ULL || rel >= 0x214e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00214e50 size=464 callers=0 calls=0
   ref: DeleteSystemSaveData
   ref: , savedataspaceid: %s, savedataid: 0x%llX, userid: 0x%016llX%016llX
*/
void DeleteSystemSaveData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x214e50ULL || rel >= 0x215020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00215020 size=208 callers=0 calls=0
   ref: RegisterSaveDataAtomicDeletion
*/
void RegisterSaveDataAtomicDeletion(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x215020ULL || rel >= 0x2150f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002150f0 size=416 callers=0 calls=0
   ref: , size: %lld
   ref: operator()
   ref: ReadSaveDataInfo
*/
void ReadSaveDataInfo(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2150f0ULL || rel >= 0x215290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00215290 size=32 callers=0 calls=0
*/
void sub_215290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x215290ULL || rel >= 0x2152b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002152b0 size=288 callers=0 calls=1
   calls: sub_218f90
   ref: , savedataspaceid: %s
   ref: OpenSaveDataIterator
*/
void OpenSaveDataIterator(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2152b0ULL || rel >= 0x2153d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002153d0 size=320 callers=0 calls=1
   calls: sub_2190b0
   ref: , savedataspaceid: %s
   ref: OpenSaveDataIterator
*/
void OpenSaveDataIterator_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2153d0ULL || rel >= 0x215510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00215510 size=704 callers=0 calls=0
   ref: FindSaveDataWithFilter
   ref: , savedataspaceid: %s
*/
void FindSaveDataWithFilter(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x215510ULL || rel >= 0x2157d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002157d0 size=544 callers=0 calls=0
   ref: CreateSaveData
   ref: , applicationid: 0x%llX, userid: 0x%016llX%016llX, save_data_owner_id: 0x%llX, save_data_size: %lld,
*/
void CreateSaveData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2157d0ULL || rel >= 0x2159f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002159f0 size=672 callers=0 calls=0
   ref: CreateSaveData
   ref: , applicationid: 0x%llX, userid: 0x%016llX%016llX, save_data_owner_id: 0x%llX, save_data_size: %lld,
*/
void CreateSaveData_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2159f0ULL || rel >= 0x215c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00215c90 size=496 callers=0 calls=0
   ref: CreateBcatSaveData
   ref: , applicationid: 0x%llX, save_data_size: %lld
*/
void CreateBcatSaveData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x215c90ULL || rel >= 0x215e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00215e80 size=512 callers=0 calls=0
   ref: CreateDeviceSaveData
   ref: , applicationid: 0x%llX, save_data_owner_id: 0x%llX, save_data_size: %lld, save_data_journal_size: %
*/
void CreateDeviceSaveData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x215e80ULL || rel >= 0x216080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00216080 size=512 callers=0 calls=0
   ref: CreateTemporaryStorage
   ref: , applicationid: 0x%llX, save_data_owner_id: 0x%llX, save_data_size: %lld, save_data_flags: 0x%08X
*/
void CreateTemporaryStorage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x216080ULL || rel >= 0x216280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00216280 size=576 callers=0 calls=0
   ref: CreateCacheStorage
   ref: , applicationid: 0x%llX, savedataspaceid: %s, save_data_owner_id: 0x%llX, save_data_size: %lld, save
*/
void CreateCacheStorage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x216280ULL || rel >= 0x2164c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002164c0 size=48 callers=0 calls=0
*/
void sub_2164c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2164c0ULL || rel >= 0x2164f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002164f0 size=48 callers=0 calls=0
*/
void sub_2164f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2164f0ULL || rel >= 0x216520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00216520 size=544 callers=0 calls=0
   ref: , savedataspaceid: %s, savedataid: 0x%llX, userid: 0x%016llX%016llX, save_data_owner_id: 0x%llX, sav
   ref: CreateSystemSaveData
*/
void CreateSystemSaveData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x216520ULL || rel >= 0x216740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00216740 size=64 callers=0 calls=0
*/
void sub_216740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x216740ULL || rel >= 0x216780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00216780 size=64 callers=0 calls=0
*/
void sub_216780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x216780ULL || rel >= 0x2167c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002167c0 size=64 callers=0 calls=0
*/
void sub_2167c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2167c0ULL || rel >= 0x216800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00216800 size=64 callers=0 calls=0
*/
void sub_216800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x216800ULL || rel >= 0x216840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00216840 size=48 callers=0 calls=0
*/
void sub_216840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x216840ULL || rel >= 0x216870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00216870 size=288 callers=0 calls=1
   calls: operator_fn
   ref: , savedataid: 0x%llX, save_data_size: %lld, save_data_flags: 0x%08X
   ref: CreateSystemBcatSaveData
*/
void CreateSystemBcatSaveData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x216870ULL || rel >= 0x216990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00216990 size=336 callers=0 calls=0
   ref: , savedataspaceid: %s, savedataid: 0x%llX, save_data_size: %lld, save_data_journal_size: %lld
   ref: ExtendSaveData
*/
void ExtendSaveData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x216990ULL || rel >= 0x216ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00216ae0 size=352 callers=0 calls=0
   ref: , save_data_size: %lld, save_data_journal_size: %lld
   ref: QuerySaveDataTotalSize
*/
void QuerySaveDataTotalSize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x216ae0ULL || rel >= 0x216c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00216c40 size=336 callers=0 calls=0
   ref: , save_data_size: %lld
   ref: GetSaveDataOwnerId
*/
void GetSaveDataOwnerId(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x216c40ULL || rel >= 0x216d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00216d90 size=368 callers=0 calls=0
   ref: , savedataspaceid: %s, savedataid: 0x%llX
   ref: GetSaveDataOwnerId
*/
void GetSaveDataOwnerId_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x216d90ULL || rel >= 0x216f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00216f00 size=336 callers=0 calls=0
   ref: , savedataid: 0x%llX
   ref: GetSaveDataFlags
*/
void GetSaveDataFlags(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x216f00ULL || rel >= 0x217050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00217050 size=368 callers=0 calls=0
   ref: , savedataspaceid: %s, savedataid: 0x%llX
   ref: GetSaveDataFlags
*/
void GetSaveDataFlags_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x217050ULL || rel >= 0x2171c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002171c0 size=416 callers=0 calls=0
   ref: , savedataid: 0x%llX, savedataspaceid: %s, save_data_flags: 0x%08X
   ref: SetSaveDataFlags
*/
void SetSaveDataFlags(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2171c0ULL || rel >= 0x217360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00217360 size=336 callers=0 calls=0
   ref: GetSaveDataTimeStamp
   ref: , savedataid: 0x%llX
*/
void GetSaveDataTimeStamp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x217360ULL || rel >= 0x2174b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002174b0 size=448 callers=0 calls=0
   ref: SetSaveDataTimeStamp
   ref: , savedataid: 0x%llX, savedataspaceid: %s, save_data_time_stamp: %lld
*/
void SetSaveDataTimeStamp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2174b0ULL || rel >= 0x217670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00217670 size=368 callers=0 calls=0
   ref: GetSaveDataTimeStamp
   ref: , savedataspaceid: %s, savedataid: 0x%llX
*/
void GetSaveDataTimeStamp_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x217670ULL || rel >= 0x2177e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002177e0 size=336 callers=0 calls=0
   ref: , savedataid: 0x%llX
   ref: GetSaveDataAvailableSize
*/
void GetSaveDataAvailableSize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2177e0ULL || rel >= 0x217930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00217930 size=368 callers=0 calls=0
   ref: , savedataspaceid: %s, savedataid: 0x%llX
   ref: GetSaveDataAvailableSize
*/
void GetSaveDataAvailableSize_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x217930ULL || rel >= 0x217aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00217aa0 size=336 callers=0 calls=0
   ref: GetSaveDataJournalSize
   ref: , savedataid: 0x%llX
*/
void GetSaveDataJournalSize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x217aa0ULL || rel >= 0x217bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00217bf0 size=368 callers=0 calls=0
   ref: , savedataspaceid: %s, savedataid: 0x%llX
   ref: GetSaveDataJournalSize
*/
void GetSaveDataJournalSize_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x217bf0ULL || rel >= 0x217d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00217d60 size=368 callers=0 calls=0
   ref: , savedataspaceid: %s, savedataid: 0x%llX
   ref: GetSaveDataCommitId
*/
void GetSaveDataCommitId(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x217d60ULL || rel >= 0x217ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00217ed0 size=448 callers=0 calls=0
   ref: SetSaveDataCommitId
   ref: , savedataid: 0x%llX, savedataspaceid: %s, save_data_commit_id: 0x%016llX
*/
void SetSaveDataCommitId(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x217ed0ULL || rel >= 0x218090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00218090 size=368 callers=0 calls=0
   ref: QuerySaveDataInternalStorageTotalSize
   ref: , savedataspaceid: %s, savedataid: 0x%llX
*/
void QuerySaveDataInternalStorageTotalSize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x218090ULL || rel >= 0x218200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00218200 size=48 callers=0 calls=0
*/
void sub_218200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x218200ULL || rel >= 0x218230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00218230 size=320 callers=0 calls=0
   ref: VerifySaveData
*/
void VerifySaveData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x218230ULL || rel >= 0x218370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00218370 size=192 callers=0 calls=0
   ref: CorruptSaveDataForDebug
*/
void CorruptSaveDataForDebug(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x218370ULL || rel >= 0x218430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00218430 size=208 callers=0 calls=0
   ref: CorruptSaveDataForDebug
*/
void CorruptSaveDataForDebug_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x218430ULL || rel >= 0x218500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00218500 size=224 callers=0 calls=0
   ref: CorruptSaveDataForDebug
*/
void CorruptSaveDataForDebug_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x218500ULL || rel >= 0x2185e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002185e0 size=160 callers=0 calls=0
   ref: DisableAutoSaveDataCreation
*/
void DisableAutoSaveDataCreation(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2185e0ULL || rel >= 0x218680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00218680 size=368 callers=0 calls=0
   ref: DeleteCacheStorage
   ref: , index: %d
*/
void DeleteCacheStorage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x218680ULL || rel >= 0x2187f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002187f0 size=400 callers=0 calls=0
   ref: , index: %d
   ref: GetCacheStorageSize
*/
void GetCacheStorageSize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2187f0ULL || rel >= 0x218980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00218980 size=352 callers=0 calls=1
   calls: sub_2192e0
   ref: OpenCacheStorageList
   ref: , cachestoragelist_handle: 0x%p
*/
void OpenCacheStorageList(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x218980ULL || rel >= 0x218ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00218ae0 size=512 callers=0 calls=0
   ref: , cachestoragelist_handle: 0x%p, infobuffercount: 0x%X
   ref: ReadCacheStorageList
*/
void ReadCacheStorageList(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x218ae0ULL || rel >= 0x218ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00218ce0 size=160 callers=0 calls=0
   ref: CloseCacheStorageList
   ref: , cachestoragelist_handle: 0x%p
*/
void CloseCacheStorageList(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x218ce0ULL || rel >= 0x218d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00218d80 size=208 callers=0 calls=0
   ref: UpdateSaveDataMacForDebug
*/
void UpdateSaveDataMacForDebug(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x218d80ULL || rel >= 0x218e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00218e50 size=320 callers=0 calls=0
   ref: ListApplicationAccessibleSaveDataOwnerId
*/
void ListApplicationAccessibleSaveDataOwnerId(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x218e50ULL || rel >= 0x218f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00218f90 size=288 callers=2 calls=0
*/
void sub_218f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x218f90ULL || rel >= 0x2190b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002190b0 size=288 callers=2 calls=0
*/
void sub_2190b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2190b0ULL || rel >= 0x2191d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002191d0 size=272 callers=2 calls=0
   ref: operator()
*/
void operator_fn(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2191d0ULL || rel >= 0x2192e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002192e0 size=1072 callers=2 calls=0
*/
void sub_2192e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2192e0ULL || rel >= 0x219710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00219710 size=336 callers=0 calls=0
   ref: OpenSaveDataThumbnailFile
*/
void OpenSaveDataThumbnailFile(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x219710ULL || rel >= 0x219860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00219860 size=560 callers=0 calls=1
   calls: ReadAndCheckHash
   ref: ReadSaveDataThumbnailFile
   ref: ReadMeta
*/
void ReadSaveDataThumbnailFile(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x219860ULL || rel >= 0x219a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00219a90 size=320 callers=3 calls=0
   ref: ReadAndCheckHash
*/
void ReadAndCheckHash(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x219a90ULL || rel >= 0x219bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00219bd0 size=416 callers=0 calls=1
   calls: ReadAndCheckHash
   ref: ReadMeta
   ref: ReadSaveDataThumbnailFileHeader
*/
void ReadSaveDataThumbnailFileHeader(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x219bd0ULL || rel >= 0x219d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00219d70 size=528 callers=0 calls=1
   calls: WriteAndCalcHash
   ref: WriteSaveDataThumbnailFile
*/
void WriteSaveDataThumbnailFile(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x219d70ULL || rel >= 0x219f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00219f80 size=272 callers=3 calls=0
   ref: WriteAndCalcHash
*/
void WriteAndCalcHash(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x219f80ULL || rel >= 0x21a090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021a090 size=544 callers=0 calls=1
   calls: WriteAndCalcHash
   ref: WriteSaveDataThumbnailFileHeader
   ref: ReadMeta
*/
void WriteSaveDataThumbnailFileHeader(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21a090ULL || rel >= 0x21a2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021a2b0 size=352 callers=0 calls=0
   ref: CorruptSaveDataThumbnailFileForDebug
*/
void CorruptSaveDataThumbnailFileForDebug(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21a2b0ULL || rel >= 0x21a410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021a410 size=784 callers=0 calls=0
   ref: , name: "%s"
   ref: MountSdCard
*/
void MountSdCard(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21a410ULL || rel >= 0x21a720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021a720 size=32 callers=0 calls=0
*/
void sub_21a720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21a720ULL || rel >= 0x21a740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021a740 size=336 callers=0 calls=0
   ref: OpenSdCardDetectionEventNotifier
*/
void OpenSdCardDetectionEventNotifier(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21a740ULL || rel >= 0x21a890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021a890 size=272 callers=0 calls=0
   ref: IsSdCardInserted
*/
void IsSdCardInserted(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21a890ULL || rel >= 0x21a9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021a9a0 size=368 callers=0 calls=0
   ref: GetSdCardSpeedMode
*/
void GetSdCardSpeedMode(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21a9a0ULL || rel >= 0x21ab10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021ab10 size=368 callers=0 calls=0
   ref: GetSdCardCid
*/
void GetSdCardCid(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21ab10ULL || rel >= 0x21ac80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021ac80 size=352 callers=0 calls=0
   ref: GetSdCardUserAreaSize
*/
void GetSdCardUserAreaSize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21ac80ULL || rel >= 0x21ade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021ade0 size=352 callers=0 calls=0
   ref: GetSdCardProtectedAreaSize
*/
void GetSdCardProtectedAreaSize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21ade0ULL || rel >= 0x21af40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021af40 size=400 callers=0 calls=0
   ref: GetAndClearSdCardErrorInfo
*/
void GetAndClearSdCardErrorInfo(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21af40ULL || rel >= 0x21b0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021b0d0 size=192 callers=0 calls=0
   ref: FormatSdCard
*/
void FormatSdCard(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21b0d0ULL || rel >= 0x21b190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021b190 size=192 callers=0 calls=0
   ref: FormatSdCardDryRun
*/
void FormatSdCardDryRun(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21b190ULL || rel >= 0x21b250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021b250 size=176 callers=0 calls=0
   ref: IsExFatSupported
*/
void IsExFatSupported(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21b250ULL || rel >= 0x21b300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021b300 size=192 callers=0 calls=0
   ref: SetSdCardEncryptionSeed
*/
void SetSdCardEncryptionSeed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21b300ULL || rel >= 0x21b3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021b3c0 size=240 callers=0 calls=0
   ref: SetSdCardAccessibility
*/
void SetSdCardAccessibility(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21b3c0ULL || rel >= 0x21b4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021b4b0 size=192 callers=0 calls=0
   ref: SetSdCardAccessibility
*/
void SetSdCardAccessibility_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21b4b0ULL || rel >= 0x21b570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021b570 size=176 callers=0 calls=0
   ref: IsSdCardAccessible
*/
void IsSdCardAccessible(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21b570ULL || rel >= 0x21b620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021b620 size=208 callers=0 calls=0
   ref: SimulateSdCardDetectionEvent
*/
void SimulateSdCardDetectionEvent(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21b620ULL || rel >= 0x21b6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021b6f0 size=160 callers=0 calls=1
   calls: SetSdCardSimulationEvent_2
   ref: SetSdCardSimulationEvent
*/
void SetSdCardSimulationEvent(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21b6f0ULL || rel >= 0x21b790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021b790 size=336 callers=3 calls=0
   ref: SetSdCardSimulationEvent
*/
void SetSdCardSimulationEvent_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21b790ULL || rel >= 0x21b8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021b8e0 size=160 callers=0 calls=1
   calls: SetSdCardSimulationEvent_2
   ref: SetSdCardSimulationEvent
*/
void SetSdCardSimulationEvent_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21b8e0ULL || rel >= 0x21b980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021b980 size=160 callers=0 calls=1
   calls: SetSdCardSimulationEvent_2
   ref: SetSdCardSimulationEvent
*/
void SetSdCardSimulationEvent_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21b980ULL || rel >= 0x21ba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021ba20 size=288 callers=0 calls=0
   ref: ClearSdCardSimulationEvent
*/
void ClearSdCardSimulationEvent(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21ba20ULL || rel >= 0x21bb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021bb40 size=352 callers=0 calls=0
   ref: GetSdmmcConnectionStatus
*/
void GetSdmmcConnectionStatus(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21bb40ULL || rel >= 0x21bca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021bca0 size=288 callers=0 calls=0
   ref: SuspendSdmmcControl
*/
void SuspendSdmmcControl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21bca0ULL || rel >= 0x21bdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021bdc0 size=288 callers=0 calls=0
   ref: ResumeSdmmcControl
*/
void ResumeSdmmcControl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21bdc0ULL || rel >= 0x21bee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021bee0 size=176 callers=0 calls=0
   ref: IsSignedSystemPartitionOnSdCardValid
*/
void IsSignedSystemPartitionOnSdCardValid(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21bee0ULL || rel >= 0x21bf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021bf90 size=304 callers=0 calls=0
   ref: SetSpeedEmulationMode
*/
void SetSpeedEmulationMode(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21bf90ULL || rel >= 0x21c0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021c0c0 size=368 callers=0 calls=0
   ref: GetSpeedEmulationMode
*/
void GetSpeedEmulationMode(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21c0c0ULL || rel >= 0x21c230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021c230 size=48 callers=0 calls=0
*/
void sub_21c230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21c230ULL || rel >= 0x21c260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021c260 size=48 callers=0 calls=0
*/
void sub_21c260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21c260ULL || rel >= 0x21c290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021c290 size=80 callers=0 calls=0
*/
void sub_21c290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21c290ULL || rel >= 0x21c2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021c2e0 size=64 callers=0 calls=0
*/
void sub_21c2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21c2e0ULL || rel >= 0x21c320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021c320 size=64 callers=0 calls=0
*/
void sub_21c320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21c320ULL || rel >= 0x21c360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021c360 size=48 callers=0 calls=0
*/
void sub_21c360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21c360ULL || rel >= 0x21c390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021c390 size=48 callers=0 calls=0
*/
void sub_21c390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21c390ULL || rel >= 0x21c3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021c3c0 size=48 callers=0 calls=0
*/
void sub_21c3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21c3c0ULL || rel >= 0x21c3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021c3f0 size=160 callers=0 calls=0
*/
void sub_21c3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21c3f0ULL || rel >= 0x21c490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021c490 size=288 callers=0 calls=0
   ref: QueryMountSystemDataCacheSize
   ref: , systemdataid: 0x%llX, size: %zu
*/
void QueryMountSystemDataCacheSize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21c490ULL || rel >= 0x21c5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021c5b0 size=144 callers=0 calls=0
   ref: MountSystemData
*/
void MountSystemData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21c5b0ULL || rel >= 0x21c640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021c640 size=160 callers=0 calls=0
   ref: MountSystemData
*/
void MountSystemData_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21c640ULL || rel >= 0x21c6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021c6e0 size=336 callers=0 calls=0
   ref: OpenSystemDataUpdateEventNotifier
*/
void OpenSystemDataUpdateEventNotifier(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21c6e0ULL || rel >= 0x21c830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021c830 size=192 callers=0 calls=0
   ref: NotifySystemDataUpdateEvent
*/
void NotifySystemDataUpdateEvent(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21c830ULL || rel >= 0x21c8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021c8f0 size=48 callers=0 calls=0
*/
void sub_21c8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21c8f0ULL || rel >= 0x21c920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021c920 size=48 callers=0 calls=0
*/
void sub_21c920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21c920ULL || rel >= 0x21c950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021c950 size=32 callers=0 calls=0
*/
void sub_21c950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21c950ULL || rel >= 0x21c970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021c970 size=416 callers=0 calls=0
   ref: MountSystemSaveData
*/
void MountSystemSaveData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21c970ULL || rel >= 0x21cb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021cb10 size=384 callers=0 calls=0
   ref: MountSystemBcatSaveData
*/
void MountSystemBcatSaveData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21cb10ULL || rel >= 0x21cc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021cc90 size=176 callers=0 calls=0
   ref: SaveDataTransferManager
*/
void SaveDataTransferManager(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21cc90ULL || rel >= 0x21cd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021cd40 size=160 callers=0 calls=0
   ref: GetChallenge
*/
void GetChallenge(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21cd40ULL || rel >= 0x21cde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021cde0 size=160 callers=0 calls=0
   ref: SetToken
*/
void SetToken(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21cde0ULL || rel >= 0x21ce80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021ce80 size=368 callers=0 calls=0
   ref: SaveDataExporter
   ref: OpenSaveDataExporter
*/
void OpenSaveDataExporter(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21ce80ULL || rel >= 0x21cff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021cff0 size=416 callers=0 calls=0
   ref: SaveDataImporter
   ref: OpenSaveDataImporter
*/
void OpenSaveDataImporter(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21cff0ULL || rel >= 0x21d190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021d190 size=192 callers=0 calls=0
   ref: QuerySaveDataExportSize
*/
void QuerySaveDataExportSize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21d190ULL || rel >= 0x21d250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021d250 size=48 callers=0 calls=0
*/
void sub_21d250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21d250ULL || rel >= 0x21d280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021d280 size=336 callers=0 calls=0
   ref: QuerySaveDataExportSize
*/
void QuerySaveDataExportSize_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21d280ULL || rel >= 0x21d3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021d3d0 size=80 callers=0 calls=0
*/
void sub_21d3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21d3d0ULL || rel >= 0x21d420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021d420 size=208 callers=0 calls=0
   ref: GetFreeSpaceSize
*/
void GetFreeSpaceSize_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21d420ULL || rel >= 0x21d4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021d4f0 size=144 callers=0 calls=0
   ref: SaveDataExporter
*/
void SaveDataExporter(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21d4f0ULL || rel >= 0x21d580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021d580 size=16 callers=0 calls=0
*/
void sub_21d580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21d580ULL || rel >= 0x21d590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021d590 size=160 callers=0 calls=0
   ref: PullInitialData
*/
void PullInitialData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21d590ULL || rel >= 0x21d630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021d630 size=176 callers=0 calls=0
*/
void sub_21d630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21d630ULL || rel >= 0x21d6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021d6e0 size=128 callers=0 calls=0
   ref: GetRestSize
*/
void GetRestSize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21d6e0ULL || rel >= 0x21d760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021d760 size=144 callers=0 calls=0
   ref: SaveDataImporter
*/
void SaveDataImporter(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21d760ULL || rel >= 0x21d7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021d7f0 size=160 callers=0 calls=0
   ref: Finalize
*/
void Finalize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21d7f0ULL || rel >= 0x21d890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021d890 size=16 callers=0 calls=0
*/
void sub_21d890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21d890ULL || rel >= 0x21d8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021d8a0 size=160 callers=0 calls=0
*/
void sub_21d8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21d8a0ULL || rel >= 0x21d940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021d940 size=128 callers=0 calls=0
   ref: GetRestSize
*/
void GetRestSize_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21d940ULL || rel >= 0x21d9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021d9c0 size=176 callers=0 calls=0
   ref: SaveDataTransferManagerVersion2
*/
void SaveDataTransferManagerVersion2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21d9c0ULL || rel >= 0x21da70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021da70 size=176 callers=0 calls=0
   ref: GetChallenge
*/
void GetChallenge_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21da70ULL || rel >= 0x21db20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021db20 size=176 callers=0 calls=0
   ref: SetKeySeedPackage
*/
void SetKeySeedPackage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21db20ULL || rel >= 0x21dbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021dbd0 size=304 callers=0 calls=0
   ref: OpenSaveDataFullExporter
*/
void OpenSaveDataFullExporter(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21dbd0ULL || rel >= 0x21dd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021dd00 size=320 callers=0 calls=0
   ref: OpenSaveDataDiffExporter
*/
void OpenSaveDataDiffExporter(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21dd00ULL || rel >= 0x21de40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021de40 size=320 callers=0 calls=0
   ref: OpenSaveDataExporterByContext
*/
void OpenSaveDataExporterByContext(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21de40ULL || rel >= 0x21df80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021df80 size=320 callers=0 calls=0
   ref: OpenSaveDataFullImporter
*/
void OpenSaveDataFullImporter(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21df80ULL || rel >= 0x21e0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021e0c0 size=320 callers=0 calls=0
   ref: OpenSaveDataDiffImporter
*/
void OpenSaveDataDiffImporter(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21e0c0ULL || rel >= 0x21e200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021e200 size=320 callers=0 calls=0
   ref: OpenSaveDataDuplicateDiffImporter
*/
void OpenSaveDataDuplicateDiffImporter(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21e200ULL || rel >= 0x21e340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021e340 size=320 callers=0 calls=0
   ref: OpenSaveDataImporterImpl
*/
void OpenSaveDataImporterImpl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21e340ULL || rel >= 0x21e480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021e480 size=320 callers=0 calls=0
   ref: OpenSaveDataImporterByContext
*/
void OpenSaveDataImporterByContext(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21e480ULL || rel >= 0x21e5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021e5c0 size=160 callers=0 calls=0
   ref: CancelSuspendingImport
*/
void CancelSuspendingImport(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21e5c0ULL || rel >= 0x21e660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021e660 size=144 callers=0 calls=0
   ref: OpenSaveDataExportProhibiter
*/
void OpenSaveDataExportProhibiter(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21e660ULL || rel >= 0x21e6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021e6f0 size=352 callers=0 calls=0
   ref: OpenSaveDataTransferProhibiterForCloudBackUp
*/
void OpenSaveDataTransferProhibiterForCloudBackUp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21e6f0ULL || rel >= 0x21e850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021e850 size=208 callers=0 calls=0
   ref: OpenSaveDataExportProhibiter
*/
void OpenSaveDataExportProhibiter_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21e850ULL || rel >= 0x21e920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021e920 size=144 callers=0 calls=0
*/
void sub_21e920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21e920ULL || rel >= 0x21e9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021e9b0 size=240 callers=0 calls=0
   ref: GetCountOfApplicationAccessibleSaveDataOwnerId
*/
void GetCountOfApplicationAccessibleSaveDataOwnerId(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21e9b0ULL || rel >= 0x21eaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021eaa0 size=368 callers=0 calls=0
   ref: GetOccupiedWorkSpaceSizeForCloudBackUp
*/
void GetOccupiedWorkSpaceSizeForCloudBackUp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21eaa0ULL || rel >= 0x21ec10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021ec10 size=48 callers=0 calls=0
*/
void sub_21ec10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21ec10ULL || rel >= 0x21ec40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021ec40 size=80 callers=0 calls=0
*/
void sub_21ec40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21ec40ULL || rel >= 0x21ec90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021ec90 size=160 callers=0 calls=0
   ref: SetDivisionCount
*/
void SetDivisionCount(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21ec90ULL || rel >= 0x21ed30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021ed30 size=304 callers=0 calls=0
   ref: OpenSaveDataDiffChunkIterator
*/
void OpenSaveDataDiffChunkIterator(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21ed30ULL || rel >= 0x21ee60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021ee60 size=304 callers=0 calls=0
   ref: OpenSaveDataChunkExporter
*/
void OpenSaveDataChunkExporter(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21ee60ULL || rel >= 0x21ef90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021ef90 size=160 callers=0 calls=0
   ref: GetKeySeed
*/
void GetKeySeed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21ef90ULL || rel >= 0x21f030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021f030 size=160 callers=0 calls=0
   ref: GetInitialDataMac
*/
void GetInitialDataMac(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21f030ULL || rel >= 0x21f0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021f0d0 size=160 callers=0 calls=0
   ref: FinalizeExport
*/
void FinalizeExport(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21f0d0ULL || rel >= 0x21f170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021f170 size=176 callers=0 calls=0
   ref: FinalizeFullExport
*/
void FinalizeFullExport(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21f170ULL || rel >= 0x21f220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021f220 size=160 callers=0 calls=0
   ref: FinalizeDiffExport
*/
void FinalizeDiffExport(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21f220ULL || rel >= 0x21f2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021f2c0 size=160 callers=0 calls=0
   ref: CancelExport
*/
void CancelExport(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21f2c0ULL || rel >= 0x21f360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021f360 size=176 callers=0 calls=0
   ref: SuspendExport
*/
void SuspendExport(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21f360ULL || rel >= 0x21f410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021f410 size=176 callers=0 calls=0
   ref: GetImportInitialDataAad
*/
void GetImportInitialDataAad(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21f410ULL || rel >= 0x21f4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021f4c0 size=160 callers=0 calls=0
   ref: SetExportInitialDataAad
*/
void SetExportInitialDataAad(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21f4c0ULL || rel >= 0x21f560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021f560 size=176 callers=0 calls=0
   ref: GetSaveDataCommitId
*/
void GetSaveDataCommitId_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21f560ULL || rel >= 0x21f610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021f610 size=176 callers=0 calls=0
   ref: GetSaveDataTimeStamp
*/
void GetSaveDataTimeStamp_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21f610ULL || rel >= 0x21f6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021f6c0 size=160 callers=0 calls=0
   ref: GetReportInfo
*/
void GetReportInfo(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21f6c0ULL || rel >= 0x21f760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021f760 size=48 callers=0 calls=0
*/
void sub_21f760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21f760ULL || rel >= 0x21f790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021f790 size=80 callers=0 calls=0
*/
void sub_21f790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21f790ULL || rel >= 0x21f7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021f7e0 size=128 callers=0 calls=0
*/
void sub_21f7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21f7e0ULL || rel >= 0x21f860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021f860 size=128 callers=0 calls=0
*/
void sub_21f860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21f860ULL || rel >= 0x21f8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021f8e0 size=128 callers=0 calls=0
*/
void sub_21f8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21f8e0ULL || rel >= 0x21f960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021f960 size=48 callers=0 calls=0
*/
void sub_21f960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21f960ULL || rel >= 0x21f990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021f990 size=80 callers=0 calls=0
*/
void sub_21f990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21f990ULL || rel >= 0x21f9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021f9e0 size=176 callers=0 calls=0
*/
void sub_21f9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21f9e0ULL || rel >= 0x21fa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021fa90 size=128 callers=0 calls=0
   ref: GetRestRawDataSize
*/
void GetRestRawDataSize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21fa90ULL || rel >= 0x21fb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021fb10 size=48 callers=0 calls=0
*/
void sub_21fb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21fb10ULL || rel >= 0x21fb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021fb40 size=80 callers=0 calls=0
*/
void sub_21fb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21fb40ULL || rel >= 0x21fb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021fb90 size=304 callers=0 calls=0
   ref: OpenSaveDataDiffChunkIterator
*/
void OpenSaveDataDiffChunkIterator_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21fb90ULL || rel >= 0x21fcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021fcc0 size=160 callers=0 calls=0
   ref: InitializeImport
*/
void InitializeImport(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21fcc0ULL || rel >= 0x21fd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021fd60 size=176 callers=0 calls=0
   ref: InitializeImport
*/
void InitializeImport_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21fd60ULL || rel >= 0x21fe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021fe10 size=160 callers=0 calls=0
   ref: FinalizeImport
*/
void FinalizeImport(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21fe10ULL || rel >= 0x21feb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021feb0 size=160 callers=0 calls=0
   ref: CancelImport
*/
void CancelImport(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21feb0ULL || rel >= 0x21ff50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021ff50 size=176 callers=0 calls=0
   ref: GetImportContext
*/
void GetImportContext(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21ff50ULL || rel >= 0x220000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00220000 size=160 callers=0 calls=0
   ref: SuspendImport
*/
void SuspendImport(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x220000ULL || rel >= 0x2200a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002200a0 size=304 callers=0 calls=0
   ref: OpenSaveDataChunkImporter
*/
void OpenSaveDataChunkImporter(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2200a0ULL || rel >= 0x2201d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002201d0 size=176 callers=0 calls=0
   ref: GetImportInitialDataAad
*/
void GetImportInitialDataAad_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2201d0ULL || rel >= 0x220280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00220280 size=176 callers=0 calls=0
   ref: GetSaveDataCommitId
*/
void GetSaveDataCommitId_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x220280ULL || rel >= 0x220330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00220330 size=176 callers=0 calls=0
   ref: GetSaveDataTimeStamp
*/
void GetSaveDataTimeStamp_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x220330ULL || rel >= 0x2203e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002203e0 size=160 callers=0 calls=0
   ref: GetReportInfo
*/
void GetReportInfo_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2203e0ULL || rel >= 0x220480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00220480 size=48 callers=0 calls=0
*/
void sub_220480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x220480ULL || rel >= 0x2204b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002204b0 size=80 callers=0 calls=0
*/
void sub_2204b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2204b0ULL || rel >= 0x220500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00220500 size=160 callers=0 calls=0
*/
void sub_220500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x220500ULL || rel >= 0x2205a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002205a0 size=16 callers=0 calls=0
*/
void sub_2205a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2205a0ULL || rel >= 0x2205b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002205b0 size=32 callers=0 calls=0
*/
void sub_2205b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2205b0ULL || rel >= 0x2205d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002205d0 size=144 callers=0 calls=0
*/
void sub_2205d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2205d0ULL || rel >= 0x220660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00220660 size=64 callers=0 calls=0
*/
void sub_220660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x220660ULL || rel >= 0x2206a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002206a0 size=208 callers=0 calls=1
   calls: sub_220830
   ref: , size: %zu
   ref: EnableGlobalFileDataCache
*/
void EnableGlobalFileDataCache(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2206a0ULL || rel >= 0x220770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00220770 size=192 callers=0 calls=0
   ref: DisableGlobalFileDataCache
*/
void DisableGlobalFileDataCache(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x220770ULL || rel >= 0x220830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00220830 size=320 callers=2 calls=0
*/
void sub_220830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x220830ULL || rel >= 0x220970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00220970 size=64 callers=0 calls=0
*/
void sub_220970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x220970ULL || rel >= 0x2209b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002209b0 size=144 callers=0 calls=0
*/
void sub_2209b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2209b0ULL || rel >= 0x220a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00220a40 size=80 callers=0 calls=0
*/
void sub_220a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x220a40ULL || rel >= 0x220a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00220a90 size=224 callers=0 calls=0
*/
void sub_220a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x220a90ULL || rel >= 0x220b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00220b70 size=480 callers=0 calls=0
*/
void sub_220b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x220b70ULL || rel >= 0x220d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00220d50 size=416 callers=0 calls=0
*/
void sub_220d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x220d50ULL || rel >= 0x220ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00220ef0 size=368 callers=0 calls=0
*/
void sub_220ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x220ef0ULL || rel >= 0x221060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00221060 size=256 callers=0 calls=0
*/
void sub_221060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x221060ULL || rel >= 0x221160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00221160 size=1280 callers=0 calls=0
*/
void sub_221160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x221160ULL || rel >= 0x221660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00221660 size=448 callers=0 calls=0
*/
void sub_221660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x221660ULL || rel >= 0x221820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00221820 size=176 callers=0 calls=0
*/
void sub_221820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x221820ULL || rel >= 0x2218d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002218d0 size=864 callers=0 calls=0
*/
void sub_2218d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2218d0ULL || rel >= 0x221c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00221c30 size=320 callers=0 calls=0
*/
void sub_221c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x221c30ULL || rel >= 0x221d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00221d70 size=2400 callers=0 calls=0
*/
void sub_221d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x221d70ULL || rel >= 0x2226d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002226d0 size=80 callers=0 calls=0
*/
void sub_2226d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2226d0ULL || rel >= 0x222720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00222720 size=272 callers=0 calls=0
*/
void sub_222720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x222720ULL || rel >= 0x222830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00222830 size=656 callers=0 calls=0
*/
void sub_222830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x222830ULL || rel >= 0x222ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00222ac0 size=848 callers=0 calls=0
*/
void sub_222ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x222ac0ULL || rel >= 0x222e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00222e10 size=1008 callers=0 calls=0
*/
void sub_222e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x222e10ULL || rel >= 0x223200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223200 size=544 callers=0 calls=0
*/
void sub_223200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223200ULL || rel >= 0x223420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223420 size=112 callers=0 calls=0
*/
void sub_223420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223420ULL || rel >= 0x223490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223490 size=16 callers=0 calls=0
*/
void sub_223490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223490ULL || rel >= 0x2234a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002234a0 size=96 callers=0 calls=0
*/
void sub_2234a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2234a0ULL || rel >= 0x223500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223500 size=464 callers=0 calls=0
*/
void sub_223500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223500ULL || rel >= 0x2236d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002236d0 size=16 callers=0 calls=0
*/
void sub_2236d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2236d0ULL || rel >= 0x2236e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002236e0 size=16 callers=0 calls=0
*/
void sub_2236e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2236e0ULL || rel >= 0x2236f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002236f0 size=112 callers=0 calls=0
*/
void sub_2236f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2236f0ULL || rel >= 0x223760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223760 size=1632 callers=0 calls=0
*/
void sub_223760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223760ULL || rel >= 0x223dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223dc0 size=144 callers=0 calls=0
*/
void sub_223dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223dc0ULL || rel >= 0x223e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223e50 size=32 callers=0 calls=0
*/
void sub_223e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223e50ULL || rel >= 0x223e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223e70 size=16 callers=0 calls=0
*/
void sub_223e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223e70ULL || rel >= 0x223e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223e80 size=64 callers=0 calls=0
*/
void sub_223e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223e80ULL || rel >= 0x223ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223ec0 size=80 callers=0 calls=0
*/
void sub_223ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223ec0ULL || rel >= 0x223f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223f10 size=176 callers=0 calls=0
*/
void sub_223f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223f10ULL || rel >= 0x223fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223fc0 size=432 callers=0 calls=0
*/
void sub_223fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223fc0ULL || rel >= 0x224170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224170 size=448 callers=0 calls=0
*/
void sub_224170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224170ULL || rel >= 0x224330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224330 size=256 callers=0 calls=0
*/
void sub_224330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224330ULL || rel >= 0x224430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224430 size=192 callers=0 calls=0
*/
void sub_224430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224430ULL || rel >= 0x2244f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002244f0 size=16 callers=0 calls=0
*/
void sub_2244f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2244f0ULL || rel >= 0x224500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224500 size=256 callers=0 calls=0
*/
void sub_224500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224500ULL || rel >= 0x224600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224600 size=240 callers=0 calls=0
*/
void sub_224600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224600ULL || rel >= 0x2246f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002246f0 size=96 callers=0 calls=0
*/
void sub_2246f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2246f0ULL || rel >= 0x224750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224750 size=368 callers=0 calls=0
*/
void sub_224750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224750ULL || rel >= 0x2248c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002248c0 size=336 callers=0 calls=0
*/
void sub_2248c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2248c0ULL || rel >= 0x224a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224a10 size=240 callers=0 calls=0
*/
void sub_224a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224a10ULL || rel >= 0x224b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224b00 size=304 callers=0 calls=0
*/
void sub_224b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224b00ULL || rel >= 0x224c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224c30 size=304 callers=0 calls=0
*/
void sub_224c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224c30ULL || rel >= 0x224d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224d60 size=16 callers=0 calls=0
*/
void sub_224d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224d60ULL || rel >= 0x224d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224d70 size=16 callers=0 calls=0
*/
void sub_224d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224d70ULL || rel >= 0x224d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224d80 size=224 callers=0 calls=1
   calls: sub_1c0
*/
void sub_224d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224d80ULL || rel >= 0x224e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224e60 size=144 callers=0 calls=1
   calls: sub_1c0
*/
void sub_224e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224e60ULL || rel >= 0x224ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224ef0 size=160 callers=0 calls=1
   calls: sub_1c0
*/
void sub_224ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224ef0ULL || rel >= 0x224f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224f90 size=160 callers=0 calls=1
   calls: sub_1c0
*/
void sub_224f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224f90ULL || rel >= 0x225030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225030 size=160 callers=0 calls=1
   calls: sub_1c0
*/
void sub_225030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225030ULL || rel >= 0x2250d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002250d0 size=192 callers=0 calls=1
   calls: sub_1c0
*/
void sub_2250d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2250d0ULL || rel >= 0x225190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225190 size=176 callers=0 calls=1
   calls: sub_1c0
*/
void sub_225190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225190ULL || rel >= 0x225240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225240 size=432 callers=0 calls=1
   calls: sub_1c0
*/
void sub_225240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225240ULL || rel >= 0x2253f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002253f0 size=432 callers=0 calls=1
   calls: sub_1c0
*/
void sub_2253f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2253f0ULL || rel >= 0x2255a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002255a0 size=416 callers=0 calls=1
   calls: sub_1c0
*/
void sub_2255a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2255a0ULL || rel >= 0x225740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225740 size=432 callers=0 calls=1
   calls: sub_1c0
*/
void sub_225740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225740ULL || rel >= 0x2258f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002258f0 size=288 callers=0 calls=1
   calls: sub_1c0
*/
void sub_2258f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2258f0ULL || rel >= 0x225a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225a10 size=288 callers=0 calls=1
   calls: sub_1c0
*/
void sub_225a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225a10ULL || rel >= 0x225b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225b30 size=480 callers=0 calls=1
   calls: sub_225e90
   ref: , path: "%s"
   ref: EnableIndividualFileDataCache
   ref: , path: "%s", buffer_size: %zu, file_size: %lld
*/
void EnableIndividualFileDataCache(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225b30ULL || rel >= 0x225d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225d10 size=384 callers=0 calls=1
   calls: sub_226330
   ref: DisableIndividualFileDataCache
   ref: , path: "%s"
*/
void DisableIndividualFileDataCache(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225d10ULL || rel >= 0x225e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225e90 size=1184 callers=2 calls=1
   calls: sub_1c0
*/
void sub_225e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225e90ULL || rel >= 0x226330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226330 size=432 callers=2 calls=1
   calls: sub_1c0
*/
void sub_226330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226330ULL || rel >= 0x2264e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002264e0 size=560 callers=0 calls=0
   ref: QueryMountAddOnContentCacheSize
   ref: , index: %d, size: %zu
*/
void QueryMountAddOnContentCacheSize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2264e0ULL || rel >= 0x226710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226710 size=608 callers=0 calls=0
   ref: , name: "%s", index: %d
   ref: MountAddOnContent
*/
void MountAddOnContent(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226710ULL || rel >= 0x226970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226970 size=80 callers=0 calls=0
*/
void sub_226970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226970ULL || rel >= 0x2269c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002269c0 size=256 callers=0 calls=0
*/
void sub_2269c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2269c0ULL || rel >= 0x226ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226ac0 size=640 callers=0 calls=1
   calls: sub_226d40
   ref: TryCreateCacheStorage
*/
void TryCreateCacheStorage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226ac0ULL || rel >= 0x226d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226d40 size=400 callers=5 calls=0
*/
void sub_226d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226d40ULL || rel >= 0x226ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226ed0 size=1200 callers=0 calls=0
   ref: EnsureApplicationCacheStorage
*/
void EnsureApplicationCacheStorage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226ed0ULL || rel >= 0x227380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00227380 size=96 callers=0 calls=0
*/
void sub_227380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x227380ULL || rel >= 0x2273e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002273e0 size=80 callers=0 calls=0
*/
void sub_2273e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2273e0ULL || rel >= 0x227430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00227430 size=96 callers=0 calls=0
*/
void sub_227430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x227430ULL || rel >= 0x227490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00227490 size=336 callers=0 calls=0
   ref: CleanUpTemporaryStorage
*/
void CleanUpTemporaryStorage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x227490ULL || rel >= 0x2275e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002275e0 size=208 callers=0 calls=1
   calls: sub_2276b0
   ref: EnsureApplicationBcatDeliveryCacheStorage
*/
void EnsureApplicationBcatDeliveryCacheStorage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2275e0ULL || rel >= 0x2276b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002276b0 size=512 callers=2 calls=1
   calls: sub_226d40
*/
void sub_2276b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2276b0ULL || rel >= 0x2278b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002278b0 size=1920 callers=0 calls=2
   calls: sub_226d40, sub_2276b0
   ref: EnsureApplicationSaveData
   ref: operator()
*/
void EnsureApplicationSaveData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2278b0ULL || rel >= 0x228030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228030 size=640 callers=0 calls=1
   calls: sub_226d40
   ref: ExtendApplicationSaveData
*/
void ExtendApplicationSaveData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228030ULL || rel >= 0x2282b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002282b0 size=544 callers=0 calls=0
   ref: GetApplicationSaveDataSize
*/
void GetApplicationSaveDataSize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2282b0ULL || rel >= 0x2284d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002284d0 size=64 callers=0 calls=0
*/
void sub_2284d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2284d0ULL || rel >= 0x228510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228510 size=64 callers=0 calls=0
*/
void sub_228510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228510ULL || rel >= 0x228550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228550 size=64 callers=0 calls=0
*/
void sub_228550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228550ULL || rel >= 0x228590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228590 size=128 callers=0 calls=0
*/
void sub_228590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228590ULL || rel >= 0x228610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228610 size=288 callers=0 calls=0
   ref: , userid: 0x%016llX%016llX
   ref: IsSaveDataExisting
*/
void IsSaveDataExisting(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228610ULL || rel >= 0x228730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228730 size=144 callers=0 calls=0
*/
void sub_228730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228730ULL || rel >= 0x2287c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002287c0 size=304 callers=0 calls=0
   ref: , applicationid: 0x%llX, userid: 0x%016llX%016llX
   ref: IsSaveDataExisting
*/
void IsSaveDataExisting_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2287c0ULL || rel >= 0x2288f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002288f0 size=256 callers=0 calls=1
   calls: sub_228d70
   ref: , userid: 0x%016llX%016llX
   ref: EnsureSaveData
*/
void EnsureSaveData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2288f0ULL || rel >= 0x2289f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002289f0 size=272 callers=0 calls=1
   calls: sub_228f20
   ref: , userid: 0x%016llX%016llX, save_data_size: %lld, save_data_journal_size: %lld
   ref: ExtendSaveData
*/
void ExtendSaveData_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2289f0ULL || rel >= 0x228b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228b00 size=336 callers=0 calls=0
   ref: , userid: 0x%016llX%016llX
   ref: GetSaveDataSize
*/
void GetSaveDataSize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228b00ULL || rel >= 0x228c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228c50 size=288 callers=0 calls=1
   calls: sub_229140
   ref: CreateCacheStorage
   ref: , index: %d, save_data_size: %lld, save_data_journal_size: %lld
*/
void CreateCacheStorage_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228c50ULL || rel >= 0x228d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228d70 size=432 callers=2 calls=0
*/
void sub_228d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228d70ULL || rel >= 0x228f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228f20 size=256 callers=2 calls=1
   calls: sub_229020
*/
void sub_228f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228f20ULL || rel >= 0x229020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229020 size=288 callers=2 calls=0
*/
void sub_229020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229020ULL || rel >= 0x229140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229140 size=448 callers=2 calls=0
*/
void sub_229140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229140ULL || rel >= 0x229300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229300 size=112 callers=0 calls=0
*/
void sub_229300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229300ULL || rel >= 0x229370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229370 size=96 callers=0 calls=0
*/
void sub_229370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229370ULL || rel >= 0x2293d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002293d0 size=112 callers=0 calls=0
*/
void sub_2293d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2293d0ULL || rel >= 0x229440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229440 size=96 callers=0 calls=0
*/
void sub_229440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229440ULL || rel >= 0x2294a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002294a0 size=64 callers=0 calls=0
*/
void sub_2294a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2294a0ULL || rel >= 0x2294e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002294e0 size=128 callers=0 calls=0
*/
void sub_2294e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2294e0ULL || rel >= 0x229560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229560 size=96 callers=0 calls=0
*/
void sub_229560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229560ULL || rel >= 0x2295c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002295c0 size=80 callers=0 calls=0
*/
void sub_2295c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2295c0ULL || rel >= 0x229610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229610 size=64 callers=0 calls=0
*/
void sub_229610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229610ULL || rel >= 0x229650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229650 size=96 callers=0 calls=0
*/
void sub_229650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229650ULL || rel >= 0x2296b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002296b0 size=80 callers=0 calls=0
*/
void sub_2296b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2296b0ULL || rel >= 0x229700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229700 size=16 callers=0 calls=0
*/
void sub_229700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229700ULL || rel >= 0x229710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229710 size=80 callers=0 calls=0
*/
void sub_229710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229710ULL || rel >= 0x229760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229760 size=240 callers=0 calls=0
   ref: GetFileTimeStampForDebug
*/
void GetFileTimeStampForDebug(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229760ULL || rel >= 0x229850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229850 size=32 callers=0 calls=0
*/
void sub_229850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229850ULL || rel >= 0x229870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229870 size=96 callers=0 calls=0
*/
void sub_229870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229870ULL || rel >= 0x2298d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002298d0 size=64 callers=0 calls=0
*/
void sub_2298d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2298d0ULL || rel >= 0x229910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229910 size=32 callers=0 calls=0
*/
void sub_229910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229910ULL || rel >= 0x229930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229930 size=256 callers=0 calls=0
*/
void sub_229930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229930ULL || rel >= 0x229a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229a30 size=144 callers=0 calls=0
*/
void sub_229a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229a30ULL || rel >= 0x229ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229ac0 size=128 callers=0 calls=0
*/
void sub_229ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229ac0ULL || rel >= 0x229b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229b40 size=176 callers=0 calls=0
*/
void sub_229b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229b40ULL || rel >= 0x229bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229bf0 size=32 callers=0 calls=0
*/
void sub_229bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229bf0ULL || rel >= 0x229c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229c10 size=48 callers=0 calls=0
*/
void sub_229c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229c10ULL || rel >= 0x229c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229c40 size=32 callers=0 calls=0
*/
void sub_229c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229c40ULL || rel >= 0x229c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229c60 size=928 callers=0 calls=0
*/
void sub_229c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229c60ULL || rel >= 0x22a000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022a000 size=144 callers=0 calls=0
*/
void sub_22a000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22a000ULL || rel >= 0x22a090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022a090 size=176 callers=0 calls=0
*/
void sub_22a090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22a090ULL || rel >= 0x22a140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022a140 size=176 callers=0 calls=0
*/
void sub_22a140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22a140ULL || rel >= 0x22a1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022a1f0 size=80 callers=0 calls=0
*/
void sub_22a1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22a1f0ULL || rel >= 0x22a240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022a240 size=160 callers=0 calls=0
*/
void sub_22a240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22a240ULL || rel >= 0x22a2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022a2e0 size=96 callers=0 calls=0
*/
void sub_22a2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22a2e0ULL || rel >= 0x22a340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022a340 size=192 callers=0 calls=0
*/
void sub_22a340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22a340ULL || rel >= 0x22a400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022a400 size=96 callers=0 calls=0
*/
void sub_22a400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22a400ULL || rel >= 0x22a460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022a460 size=96 callers=0 calls=0
*/
void sub_22a460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22a460ULL || rel >= 0x22a4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022a4c0 size=176 callers=0 calls=0
*/
void sub_22a4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22a4c0ULL || rel >= 0x22a570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022a570 size=192 callers=0 calls=0
*/
void sub_22a570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22a570ULL || rel >= 0x22a630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022a630 size=16 callers=0 calls=0
*/
void sub_22a630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22a630ULL || rel >= 0x22a640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022a640 size=192 callers=0 calls=0
*/
void sub_22a640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22a640ULL || rel >= 0x22a700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022a700 size=16 callers=0 calls=0
*/
void sub_22a700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22a700ULL || rel >= 0x22a710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022a710 size=16 callers=0 calls=0
*/
void sub_22a710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22a710ULL || rel >= 0x22a720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022a720 size=96 callers=0 calls=1
   calls: sub_1c0
*/
void sub_22a720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22a720ULL || rel >= 0x22a780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022a780 size=128 callers=0 calls=0
*/
void sub_22a780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22a780ULL || rel >= 0x22a800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022a800 size=144 callers=0 calls=0
*/
void sub_22a800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22a800ULL || rel >= 0x22a890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022a890 size=128 callers=0 calls=0
*/
void sub_22a890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22a890ULL || rel >= 0x22a910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022a910 size=144 callers=0 calls=0
*/
void sub_22a910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22a910ULL || rel >= 0x22a9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022a9a0 size=144 callers=0 calls=0
*/
void sub_22a9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22a9a0ULL || rel >= 0x22aa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022aa30 size=144 callers=0 calls=0
*/
void sub_22aa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22aa30ULL || rel >= 0x22aac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022aac0 size=144 callers=0 calls=0
*/
void sub_22aac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22aac0ULL || rel >= 0x22ab50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ab50 size=144 callers=0 calls=0
*/
void sub_22ab50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ab50ULL || rel >= 0x22abe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022abe0 size=144 callers=0 calls=0
*/
void sub_22abe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22abe0ULL || rel >= 0x22ac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ac70 size=144 callers=0 calls=0
*/
void sub_22ac70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ac70ULL || rel >= 0x22ad00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ad00 size=16 callers=0 calls=0
*/
void sub_22ad00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ad00ULL || rel >= 0x22ad10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ad10 size=32 callers=0 calls=0
*/
void sub_22ad10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ad10ULL || rel >= 0x22ad30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ad30 size=112 callers=0 calls=0
*/
void sub_22ad30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ad30ULL || rel >= 0x22ada0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ada0 size=208 callers=0 calls=0
*/
void sub_22ada0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ada0ULL || rel >= 0x22ae70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ae70 size=112 callers=0 calls=0
*/
void sub_22ae70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ae70ULL || rel >= 0x22aee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022aee0 size=192 callers=0 calls=0
*/
void sub_22aee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22aee0ULL || rel >= 0x22afa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022afa0 size=144 callers=0 calls=0
*/
void sub_22afa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22afa0ULL || rel >= 0x22b030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022b030 size=128 callers=0 calls=0
*/
void sub_22b030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22b030ULL || rel >= 0x22b0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022b0b0 size=112 callers=0 calls=0
*/
void sub_22b0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22b0b0ULL || rel >= 0x22b120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022b120 size=160 callers=0 calls=0
*/
void sub_22b120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22b120ULL || rel >= 0x22b1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022b1c0 size=144 callers=0 calls=0
*/
void sub_22b1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22b1c0ULL || rel >= 0x22b250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022b250 size=176 callers=0 calls=0
*/
void sub_22b250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22b250ULL || rel >= 0x22b300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022b300 size=192 callers=0 calls=0
*/
void sub_22b300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22b300ULL || rel >= 0x22b3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022b3c0 size=48 callers=0 calls=0
*/
void sub_22b3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22b3c0ULL || rel >= 0x22b3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022b3f0 size=128 callers=0 calls=1
   calls: sub_22b470
*/
void sub_22b3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22b3f0ULL || rel >= 0x22b470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022b470 size=656 callers=5 calls=0
*/
void sub_22b470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22b470ULL || rel >= 0x22b700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022b700 size=64 callers=0 calls=1
   calls: sub_22b470
*/
void sub_22b700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22b700ULL || rel >= 0x22b740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022b740 size=272 callers=0 calls=1
   calls: sub_22b470
*/
void sub_22b740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22b740ULL || rel >= 0x22b850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022b850 size=336 callers=0 calls=1
   calls: sub_22b470
*/
void sub_22b850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22b850ULL || rel >= 0x22b9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022b9a0 size=144 callers=0 calls=0
*/
void sub_22b9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22b9a0ULL || rel >= 0x22ba30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ba30 size=128 callers=0 calls=0
*/
void sub_22ba30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ba30ULL || rel >= 0x22bab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022bab0 size=80 callers=0 calls=1
   calls: sub_22b470
*/
void sub_22bab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22bab0ULL || rel >= 0x22bb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022bb00 size=48 callers=0 calls=0
*/
void sub_22bb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22bb00ULL || rel >= 0x22bb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022bb30 size=192 callers=0 calls=0
*/
void sub_22bb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22bb30ULL || rel >= 0x22bbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022bbf0 size=144 callers=0 calls=0
*/
void sub_22bbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22bbf0ULL || rel >= 0x22bc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022bc80 size=208 callers=0 calls=0
*/
void sub_22bc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22bc80ULL || rel >= 0x22bd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022bd50 size=208 callers=0 calls=0
*/
void sub_22bd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22bd50ULL || rel >= 0x22be20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022be20 size=176 callers=0 calls=0
*/
void sub_22be20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22be20ULL || rel >= 0x22bed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022bed0 size=432 callers=0 calls=0
*/
void sub_22bed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22bed0ULL || rel >= 0x22c080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022c080 size=128 callers=0 calls=0
*/
void sub_22c080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22c080ULL || rel >= 0x22c100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022c100 size=112 callers=0 calls=0
*/
void sub_22c100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22c100ULL || rel >= 0x22c170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022c170 size=48 callers=0 calls=0
*/
void sub_22c170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22c170ULL || rel >= 0x22c1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022c1a0 size=160 callers=0 calls=0
*/
void sub_22c1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22c1a0ULL || rel >= 0x22c240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022c240 size=144 callers=0 calls=0
*/
void sub_22c240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22c240ULL || rel >= 0x22c2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022c2d0 size=208 callers=0 calls=0
*/
void sub_22c2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22c2d0ULL || rel >= 0x22c3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022c3a0 size=144 callers=0 calls=0
*/
void sub_22c3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22c3a0ULL || rel >= 0x22c430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022c430 size=144 callers=0 calls=0
*/
void sub_22c430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22c430ULL || rel >= 0x22c4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022c4c0 size=16 callers=0 calls=0
*/
void sub_22c4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22c4c0ULL || rel >= 0x22c4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022c4d0 size=16 callers=0 calls=0
*/
void sub_22c4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22c4d0ULL || rel >= 0x22c4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022c4e0 size=192 callers=0 calls=0
*/
void sub_22c4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22c4e0ULL || rel >= 0x22c5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022c5a0 size=144 callers=0 calls=0
*/
void sub_22c5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22c5a0ULL || rel >= 0x22c630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022c630 size=176 callers=0 calls=0
*/
void sub_22c630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22c630ULL || rel >= 0x22c6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022c6e0 size=496 callers=0 calls=0
*/
void sub_22c6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22c6e0ULL || rel >= 0x22c8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022c8d0 size=272 callers=0 calls=0
*/
void sub_22c8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22c8d0ULL || rel >= 0x22c9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022c9e0 size=128 callers=0 calls=0
*/
void sub_22c9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22c9e0ULL || rel >= 0x22ca60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ca60 size=128 callers=0 calls=0
*/
void sub_22ca60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ca60ULL || rel >= 0x22cae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022cae0 size=496 callers=0 calls=0
*/
void sub_22cae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22cae0ULL || rel >= 0x22ccd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ccd0 size=208 callers=0 calls=0
*/
void sub_22ccd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ccd0ULL || rel >= 0x22cda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022cda0 size=128 callers=0 calls=0
*/
void sub_22cda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22cda0ULL || rel >= 0x22ce20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ce20 size=208 callers=0 calls=0
*/
void sub_22ce20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ce20ULL || rel >= 0x22cef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022cef0 size=224 callers=0 calls=0
*/
void sub_22cef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22cef0ULL || rel >= 0x22cfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022cfd0 size=144 callers=0 calls=0
*/
void sub_22cfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22cfd0ULL || rel >= 0x22d060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022d060 size=192 callers=0 calls=0
*/
void sub_22d060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22d060ULL || rel >= 0x22d120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022d120 size=48 callers=0 calls=0
*/
void sub_22d120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22d120ULL || rel >= 0x22d150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022d150 size=176 callers=0 calls=0
*/
void sub_22d150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22d150ULL || rel >= 0x22d200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022d200 size=144 callers=0 calls=0
*/
void sub_22d200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22d200ULL || rel >= 0x22d290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022d290 size=16 callers=0 calls=0
*/
void sub_22d290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22d290ULL || rel >= 0x22d2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022d2a0 size=16 callers=0 calls=0
*/
void sub_22d2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22d2a0ULL || rel >= 0x22d2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022d2b0 size=80 callers=0 calls=0
*/
void sub_22d2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22d2b0ULL || rel >= 0x22d300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022d300 size=208 callers=0 calls=0
*/
void sub_22d300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22d300ULL || rel >= 0x22d3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022d3d0 size=160 callers=0 calls=0
*/
void sub_22d3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22d3d0ULL || rel >= 0x22d470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022d470 size=368 callers=0 calls=0
*/
void sub_22d470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22d470ULL || rel >= 0x22d5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022d5e0 size=432 callers=0 calls=0
*/
void sub_22d5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22d5e0ULL || rel >= 0x22d790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022d790 size=128 callers=0 calls=0
*/
void sub_22d790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22d790ULL || rel >= 0x22d810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022d810 size=112 callers=0 calls=0
*/
void sub_22d810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22d810ULL || rel >= 0x22d880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022d880 size=48 callers=0 calls=0
*/
void sub_22d880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22d880ULL || rel >= 0x22d8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022d8b0 size=160 callers=0 calls=0
*/
void sub_22d8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22d8b0ULL || rel >= 0x22d950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022d950 size=144 callers=0 calls=0
*/
void sub_22d950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22d950ULL || rel >= 0x22d9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022d9e0 size=128 callers=0 calls=0
*/
void sub_22d9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22d9e0ULL || rel >= 0x22da60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022da60 size=96 callers=0 calls=0
*/
void sub_22da60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22da60ULL || rel >= 0x22dac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022dac0 size=96 callers=0 calls=0
*/
void sub_22dac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22dac0ULL || rel >= 0x22db20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022db20 size=128 callers=0 calls=0
*/
void sub_22db20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22db20ULL || rel >= 0x22dba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022dba0 size=112 callers=0 calls=0
*/
void sub_22dba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22dba0ULL || rel >= 0x22dc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022dc10 size=128 callers=0 calls=0
*/
void sub_22dc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22dc10ULL || rel >= 0x22dc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022dc90 size=480 callers=0 calls=0
*/
void sub_22dc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22dc90ULL || rel >= 0x22de70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022de70 size=144 callers=0 calls=0
*/
void sub_22de70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22de70ULL || rel >= 0x22df00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022df00 size=256 callers=0 calls=0
*/
void sub_22df00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22df00ULL || rel >= 0x22e000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e000 size=96 callers=0 calls=0
*/
void sub_22e000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e000ULL || rel >= 0x22e060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e060 size=96 callers=0 calls=0
*/
void sub_22e060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e060ULL || rel >= 0x22e0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e0c0 size=96 callers=0 calls=0
*/
void sub_22e0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e0c0ULL || rel >= 0x22e120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e120 size=112 callers=0 calls=0
*/
void sub_22e120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e120ULL || rel >= 0x22e190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e190 size=96 callers=0 calls=0
*/
void sub_22e190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e190ULL || rel >= 0x22e1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e1f0 size=112 callers=0 calls=0
*/
void sub_22e1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e1f0ULL || rel >= 0x22e260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e260 size=112 callers=0 calls=0
*/
void sub_22e260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e260ULL || rel >= 0x22e2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e2d0 size=144 callers=0 calls=0
*/
void sub_22e2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e2d0ULL || rel >= 0x22e360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e360 size=144 callers=0 calls=0
*/
void sub_22e360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e360ULL || rel >= 0x22e3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e3f0 size=112 callers=0 calls=0
*/
void sub_22e3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e3f0ULL || rel >= 0x22e460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e460 size=96 callers=0 calls=0
*/
void sub_22e460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e460ULL || rel >= 0x22e4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e4c0 size=224 callers=0 calls=0
*/
void sub_22e4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e4c0ULL || rel >= 0x22e5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e5a0 size=112 callers=0 calls=0
*/
void sub_22e5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e5a0ULL || rel >= 0x22e610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e610 size=144 callers=0 calls=0
*/
void sub_22e610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e610ULL || rel >= 0x22e6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e6a0 size=112 callers=0 calls=0
*/
void sub_22e6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e6a0ULL || rel >= 0x22e710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e710 size=144 callers=0 calls=0
*/
void sub_22e710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e710ULL || rel >= 0x22e7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e7a0 size=208 callers=0 calls=0
*/
void sub_22e7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e7a0ULL || rel >= 0x22e870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e870 size=176 callers=0 calls=0
*/
void sub_22e870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e870ULL || rel >= 0x22e920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e920 size=480 callers=0 calls=0
*/
void sub_22e920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e920ULL || rel >= 0x22eb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022eb00 size=48 callers=0 calls=0
*/
void sub_22eb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22eb00ULL || rel >= 0x22eb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022eb30 size=176 callers=0 calls=0
*/
void sub_22eb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22eb30ULL || rel >= 0x22ebe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ebe0 size=144 callers=0 calls=0
*/
void sub_22ebe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ebe0ULL || rel >= 0x22ec70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ec70 size=112 callers=0 calls=0
*/
void sub_22ec70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ec70ULL || rel >= 0x22ece0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ece0 size=112 callers=0 calls=0
*/
void sub_22ece0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ece0ULL || rel >= 0x22ed50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ed50 size=320 callers=0 calls=0
*/
void sub_22ed50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ed50ULL || rel >= 0x22ee90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ee90 size=224 callers=0 calls=0
*/
void sub_22ee90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ee90ULL || rel >= 0x22ef70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ef70 size=240 callers=0 calls=0
*/
void sub_22ef70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ef70ULL || rel >= 0x22f060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022f060 size=240 callers=0 calls=0
*/
void sub_22f060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22f060ULL || rel >= 0x22f150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022f150 size=240 callers=0 calls=0
*/
void sub_22f150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22f150ULL || rel >= 0x22f240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022f240 size=224 callers=0 calls=0
*/
void sub_22f240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22f240ULL || rel >= 0x22f320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022f320 size=144 callers=0 calls=0
*/
void sub_22f320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22f320ULL || rel >= 0x22f3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022f3b0 size=128 callers=0 calls=0
*/
void sub_22f3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22f3b0ULL || rel >= 0x22f430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022f430 size=144 callers=0 calls=0
*/
void sub_22f430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22f430ULL || rel >= 0x22f4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022f4c0 size=208 callers=0 calls=0
*/
void sub_22f4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22f4c0ULL || rel >= 0x22f590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022f590 size=208 callers=0 calls=0
*/
void sub_22f590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22f590ULL || rel >= 0x22f660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022f660 size=176 callers=0 calls=0
*/
void sub_22f660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22f660ULL || rel >= 0x22f710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022f710 size=432 callers=0 calls=0
*/
void sub_22f710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22f710ULL || rel >= 0x22f8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022f8c0 size=128 callers=0 calls=0
*/
void sub_22f8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22f8c0ULL || rel >= 0x22f940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022f940 size=112 callers=0 calls=0
*/
void sub_22f940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22f940ULL || rel >= 0x22f9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022f9b0 size=48 callers=0 calls=0
*/
void sub_22f9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22f9b0ULL || rel >= 0x22f9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022f9e0 size=160 callers=0 calls=0
*/
void sub_22f9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22f9e0ULL || rel >= 0x22fa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022fa80 size=144 callers=0 calls=0
*/
void sub_22fa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22fa80ULL || rel >= 0x22fb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022fb10 size=80 callers=0 calls=1
   calls: sub_22fb60
*/
void sub_22fb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22fb10ULL || rel >= 0x22fb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022fb60 size=288 callers=3 calls=0
*/
void sub_22fb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22fb60ULL || rel >= 0x22fc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022fc80 size=48 callers=0 calls=1
   calls: sub_22fb60
*/
void sub_22fc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22fc80ULL || rel >= 0x22fcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022fcb0 size=272 callers=0 calls=1
   calls: sub_22fb60
*/
void sub_22fcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22fcb0ULL || rel >= 0x22fdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022fdc0 size=208 callers=0 calls=0
*/
void sub_22fdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22fdc0ULL || rel >= 0x22fe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022fe90 size=48 callers=0 calls=0
*/
void sub_22fe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22fe90ULL || rel >= 0x22fec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022fec0 size=400 callers=0 calls=0
*/
void sub_22fec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22fec0ULL || rel >= 0x230050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00230050 size=272 callers=0 calls=0
*/
void sub_230050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x230050ULL || rel >= 0x230160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00230160 size=192 callers=0 calls=0
*/
void sub_230160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x230160ULL || rel >= 0x230220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00230220 size=192 callers=0 calls=0
*/
void sub_230220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x230220ULL || rel >= 0x2302e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002302e0 size=48 callers=0 calls=0
*/
void sub_2302e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2302e0ULL || rel >= 0x230310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00230310 size=224 callers=0 calls=1
   calls: sub_2303f0
*/
void sub_230310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x230310ULL || rel >= 0x2303f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002303f0 size=480 callers=7 calls=0
*/
void sub_2303f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2303f0ULL || rel >= 0x2305d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002305d0 size=224 callers=0 calls=1
   calls: sub_2303f0
*/
void sub_2305d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2305d0ULL || rel >= 0x2306b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002306b0 size=416 callers=0 calls=1
   calls: sub_2303f0
*/
void sub_2306b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2306b0ULL || rel >= 0x230850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00230850 size=432 callers=0 calls=1
   calls: sub_2303f0
*/
void sub_230850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x230850ULL || rel >= 0x230a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00230a00 size=512 callers=0 calls=1
   calls: sub_2303f0
*/
void sub_230a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x230a00ULL || rel >= 0x230c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00230c00 size=512 callers=0 calls=1
   calls: sub_2303f0
*/
void sub_230c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x230c00ULL || rel >= 0x230e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00230e00 size=240 callers=0 calls=1
   calls: sub_2303f0
*/
void sub_230e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x230e00ULL || rel >= 0x230ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00230ef0 size=64 callers=0 calls=0
*/
void sub_230ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x230ef0ULL || rel >= 0x230f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00230f30 size=80 callers=0 calls=0
*/
void sub_230f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x230f30ULL || rel >= 0x230f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00230f80 size=16 callers=0 calls=0
*/
void sub_230f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x230f80ULL || rel >= 0x230f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

