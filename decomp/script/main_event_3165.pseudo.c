// fun_0008
fun_0008() {
    var_8 = arg_0;
    pri = _Suspend(var_8)
    pri = 0;
    OP_ZERO_ALT 
    OP_HALT 12
    pri = 0;
    return pri;
}
// fun_0060
fun_0060() {
    pri = arg_0;
    alt = -9223372036854775808;
    OP_XOR 
    return pri;
}
// fun_0090
fun_0090() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSLESS lab_00D0
    pri = 0;
    return pri;
// lab_00D0
    OP_ZERO_P_S -8
    OP_JUMP lab_00F8
// lab_00F8
    OP_LOAD_S_BOTH -8, 24
    OP_JSGEQ lab_0150
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_00F0
// lab_0150
    pri = 0;
    return pri;
// lab_00F0
    OP_INC_P_S -8
}
// fun_0168
fun_0168() {
    OP_ZERO_P_S -8
    OP_JUMP lab_0198
// lab_0198
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_0298
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_0218
    pri = 0;
    return pri;
// lab_0298
    pri = 0;
    return pri;
// lab_0218
    pri = arg_0;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    var_16 = pri;
    pri = arg_1;
    var_24 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_POP_ALT 
    OP_STOR_I 
    OP_JUMP lab_0190
// lab_0190
    OP_INC_P_S -8
}
// fun_02B0
fun_02B0() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0310
fun_0310() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    pri = GetFnvHash64(var_24)
    var_32 = pri;
    var_40 = arg_0;
    pri = FadeOut_(var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0380
fun_0380() {
    OP_JUMP lab_0398
// lab_0398
    pri = FadeWait_()
    OP_JZER lab_03D0
    pri = 0;
    return pri;
// lab_03D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0398
    pri = 0;
    return pri;
}
// fun_0410
fun_0410() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_0438
fun_0438() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0468
fun_0468() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_04C0
fun_04C0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_04F8
fun_04F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0538
fun_0538() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0570
fun_0570() {
    var_8 = 0;
    var_16 = arg_8;
    var_24 = arg_6;
    var_32 = arg_7;
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = arg_0;
    pri = StartForceMove_(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05E8
fun_05E8() {
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    pri = GetAnglePositionToFieldObject_(var_32, var_24, var_16)
    var_8 = pri;
    var_40 = 0;
    var_48 = arg_7;
    var_56 = arg_5;
    var_64 = arg_6;
    var_72 = var_8;
    var_80 = 1;
    var_88 = arg_3;
    var_96 = arg_2;
    var_104 = arg_1;
    var_112 = arg_0;
    pri = StartForceMove_(var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    return pri;
}
// fun_06A8
fun_06A8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_06F8
fun_06F8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1790(var_8)
    OP_JZER lab_0770
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_17C0(var_24)
    OP_JNZ lab_0770
    pri = 0;
    return pri;
// lab_0770
    OP_JUMP lab_0780
// lab_0780
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_07E0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_07E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0780
    pri = 0;
    return pri;
}
// fun_0820
fun_0820() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0858
fun_0858() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0898
fun_0898() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_08D0
fun_08D0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0918
    pri = 0;
    return pri;
// lab_0918
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0958
// lab_0958
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1790(var_8)
    OP_JNZ lab_09E0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_09D0
    pri = 0;
    return pri;
// lab_09E0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0A28
    pri = 0;
    return pri;
// lab_0A28
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0A88
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0AD0(var_8)
    pri = 0;
    return pri;
// lab_0A88
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0958
    pri = 0;
    return pri;
// lab_09D0
    OP_JUMP lab_0A28
}
// fun_0AD0
fun_0AD0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0B08
fun_0B08() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0B58
    pri = 0;
    return pri;
// lab_0B58
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1790(var_8)
    OP_JZER lab_0C88
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0BB0
    OP_ZERO_P_S 64
// lab_0C88
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0CC0
    OP_CONST_S 64, 1
// lab_0CC0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0CF8
    OP_CONST_S 72, 1
// lab_0CF8
    var_8 = 1;
    var_16 = 0;
    var_24 = 256;
    var_32 = -1;
    var_40 = -1;
    var_48 = 248;
    var_56 = arg_6;
    var_64 = 0;
    var_72 = 200;
    var_80 = arg_5;
    var_88 = 0;
    var_96 = 160;
    var_104 = arg_4;
    var_112 = arg_3;
    var_120 = arg_2;
    var_128 = arg_1;
    var_136 = arg_0;
    pri = AddParallelCommandControlFacial_(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_0BB0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0BD8
    OP_ZERO_P_S 72
// lab_0BD8
    var_8 = 0;
    var_16 = 0;
    var_24 = 152;
    var_32 = -1;
    var_40 = -1;
    var_48 = 144;
    var_56 = arg_6;
    var_64 = 0;
    var_72 = 80;
    var_80 = arg_5;
    var_88 = 0;
    var_96 = 32;
    var_104 = arg_4;
    var_112 = arg_3;
    var_120 = arg_2;
    var_128 = arg_1;
    var_136 = arg_0;
    pri = AddParallelCommandControlFacial_(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    OP_JUMP lab_0D98
// lab_0D98
    pri = 0;
    return pri;
}
// fun_0DA8
fun_0DA8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DE8
fun_0DE8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E28
fun_0E28() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = EnableFieldObjectLookAtAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E88
fun_0E88() {
    OP_CONST_S -8, 4631530004285489152
    pri = arg_1;
    switch (pri) {
// switch_1248
        case default:
        {
// switch_1248_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_1248_case_0x0
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = 8;
            pri = fun_0060(var_40)
            var_56 = pri;
            var_64 = arg_0;
            var_72 = 48;
            pri = fun_0E28(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1248_case_default
        }
        case 0x1:
        {
// switch_1248_case_0x1
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_0E28(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1248_case_default
        }
        case 0x2:
        {
// switch_1248_case_0x2
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 8;
            pri = fun_0060(var_32)
            var_48 = pri;
            var_56 = 0;
            var_64 = arg_0;
            var_72 = 48;
            pri = fun_0E28(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1248_case_default
        }
        case 0x3:
        {
// switch_1248_case_0x3
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 0;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_0E28(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1248_case_default
        }
        case 0x4:
        {
// switch_1248_case_0x4
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 8;
            pri = fun_0060(var_32)
            var_48 = pri;
            var_56 = var_8;
            var_64 = 8;
            pri = fun_0060(var_56)
            var_72 = pri;
            var_80 = arg_0;
            var_88 = 48;
            pri = fun_0E28(var_80, var_72, var_64, var_56, var_48, var_40)
            OP_JUMP switch_1248_case_default
        }
        case 0x5:
        {
// switch_1248_case_0x5
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 8;
            pri = fun_0060(var_32)
            var_48 = pri;
            var_56 = var_8;
            var_64 = arg_0;
            var_72 = 48;
            pri = fun_0E28(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1248_case_default
        }
        case 0x6:
        {
// switch_1248_case_0x6
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = 8;
            pri = fun_0060(var_40)
            var_56 = pri;
            var_64 = arg_0;
            var_72 = 48;
            pri = fun_0E28(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1248_case_default
        }
        case 0x7:
        {
// switch_1248_case_0x7
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_0E28(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1248_case_default
        }
    }
}
// fun_12F8
fun_12F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1338
fun_1338() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1378
fun_1378() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_13B0
fun_13B0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13F0
fun_13F0() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1428
fun_1428() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1338(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_13B0(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1490
fun_1490() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1378(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_13F0(var_24)
    pri = 0;
    return pri;
}
// fun_14E8
fun_14E8() {
    var_8 = arg_1;
    var_16 = 8;
    pri = fun_1790(var_8)
    OP_JZER lab_1588
    var_24 = arg_5;
    var_32 = arg_4;
    var_40 = arg_3;
    var_48 = 0;
    var_56 = arg_2;
    var_64 = 0;
    var_72 = 344;
    var_80 = arg_1;
    var_88 = arg_0;
    pri = PlayParticleVfx_(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    return pri;
// lab_1588
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = 0;
    var_40 = arg_2;
    var_48 = 0;
    var_56 = 456;
    var_64 = arg_1;
    var_72 = arg_0;
    pri = PlayParticleVfx_(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_15F0
fun_15F0() {
    pri = 0;
    OP_ADDR_ALT -1376
    OP_FILL 1376
    pri = 560;
    OP_ADDR_ALT -1376
    OP_MOVS 1368
    pri = 0;
    OP_ADDR_ALT -2560
    OP_FILL 1184
    pri = 1928;
    OP_ADDR_ALT -2560
    OP_MOVS 1176
    OP_ADDR_P_ALT -2560
    pri = arg_0;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_2568 = pri;
    pri = SoundPostEvent(var_2568)
    var_2576 = arg_3;
    var_2584 = arg_5;
    var_2592 = arg_2;
    var_2600 = arg_4;
    var_2608 = arg_1;
    OP_ADDR_P_ALT -1376
    pri = arg_0;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_2616 = pri;
    var_2624 = 48;
    pri = fun_14E8(var_2616, var_2608, var_2600, var_2592, var_2584, var_2576)
    return pri;
}
// fun_1790
fun_1790() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_17C0
fun_17C0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_17F0
fun_17F0() {
    OP_JUMP lab_1808
// lab_1808
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1898
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1888
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_08D0(var_8)
    pri = 0;
    return pri;
// lab_1898
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1928
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1918
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_08D0(var_8)
    pri = 0;
    return pri;
// lab_1928
    pri = 0;
    return pri;
// lab_1918
    OP_JUMP lab_1938
// lab_1938
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1808
    pri = 0;
    return pri;
// lab_1888
    OP_JUMP lab_1938
}
// fun_1978
fun_1978() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_08D0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_17F0(var_40)
    pri = 0;
    return pri;
}
// fun_1A00
fun_1A00() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1A38
fun_1A38() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1A60
fun_1A60() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1A90
fun_1A90() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1AC8
fun_1AC8() {
    pri = arg_4;
    alt = 1;
    OP_AND 
    var_8 = pri;
    pri = arg_4;
    alt = 4;
    OP_AND 
    var_16 = pri;
    pri = arg_4;
    alt = 16;
    OP_AND 
    var_24 = pri;
    pri = arg_4;
    alt = 8;
    OP_AND 
    var_32 = pri;
    OP_ZERO_P_S -40
    pri = arg_2;
    switch (pri) {
// switch_20E0
        case default:
        {
// switch_20E0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_2128
// lab_2128
            var_8 = arg_6;
            var_16 = arg_5;
            var_24 = var_32;
            var_32 = var_24;
            var_40 = var_16;
            var_48 = var_8;
            var_56 = var_40;
            var_64 = arg_1;
            var_72 = 0;
            var_80 = arg_0;
            pri = MsgWin_(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            pri = arg_4;
            alt = 2;
            OP_AND 
            OP_JNZ lab_21D0
            var_88 = 0;
            pri = fun_23F0()
// lab_21D0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_20E0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1CC8
                case default:
                {
// switch_1CC8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1D40
// lab_1D40
                    OP_JUMP lab_2128
                }
                case 0x0:
                {
// switch_1CC8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1D40
                }
                case 0x1:
                {
// switch_1CC8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1D40
                }
                case 0x2:
                {
// switch_1CC8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1D40
                }
                case 0x3:
                {
// switch_1CC8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1D40
                }
                case 0x4:
                {
// switch_1CC8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1D40
                }
                case 0x5:
                {
// switch_1CC8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1D40
                }
            }
        }
        case 0x65:
        {
// switch_20E0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1E80
                case default:
                {
// switch_1E80_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1EF8
// lab_1EF8
                    OP_JUMP lab_2128
                }
                case 0x0:
                {
// switch_1E80_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1EF8
                }
                case 0x1:
                {
// switch_1E80_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1EF8
                }
                case 0x2:
                {
// switch_1E80_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1EF8
                }
                case 0x3:
                {
// switch_1E80_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1EF8
                }
                case 0x4:
                {
// switch_1E80_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1EF8
                }
                case 0x5:
                {
// switch_1E80_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1EF8
                }
            }
        }
        case 0x66:
        {
// switch_20E0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_2038
                case default:
                {
// switch_2038_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_20B0
// lab_20B0
                    OP_JUMP lab_2128
                }
                case 0x0:
                {
// switch_2038_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_20B0
                }
                case 0x1:
                {
// switch_2038_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_20B0
                }
                case 0x2:
                {
// switch_2038_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_20B0
                }
                case 0x3:
                {
// switch_2038_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_20B0
                }
                case 0x4:
                {
// switch_2038_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_20B0
                }
                case 0x5:
                {
// switch_2038_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_20B0
                }
            }
        }
    }
}
// fun_21E8
fun_21E8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1AC8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2250
fun_2250() {
    pri = 3104;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 3184;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0898(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_22F8
    pri = 1;
    return pri;
// lab_22F8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2340
fun_2340() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2390
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2250(var_8)
    arg_2 = pri;
// lab_2390
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1AC8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_23F0
fun_23F0() {
    OP_JUMP lab_2408
// lab_2408
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2448
    pri = 0;
    return pri;
// lab_2448
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2408
    pri = 0;
    return pri;
}
// fun_2488
fun_2488() {
    var_8 = 0;
    pri = fun_23F0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2538
    var_32 = 3232;
    pri = SoundPostEvent(var_32)
// lab_2538
    pri = 0;
    return pri;
}
// fun_2548
fun_2548() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2578
fun_2578() {
    pri = arg_1;
    OP_JNZ lab_25C0
    var_8 = 3408;
    pri = GetFnvHash64(var_8)
    arg_1 = pri;
// lab_25C0
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = 0;
    var_48 = arg_0;
    var_56 = 0;
    pri = CallTrainerBattleCore(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_2618
fun_2618() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2690
fun_2690() {
    var_8 = 0;
    pri = fun_2618()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2710
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2710
    pri = 1;
    return pri;
// lab_2710
    var_8 = 0;
    pri = fun_2618()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2750
    pri = 1;
    return pri;
// lab_2750
    var_8 = 0;
    pri = fun_2618()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2780
fun_2780() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    pri = 0;
    return pri;
}
// fun_27D0
fun_27D0() {
    OP_JUMP lab_27E8
// lab_27E8
    pri = EvCameraMoveWait_()
    OP_JZER lab_2820
    pri = 0;
    return pri;
// lab_2820
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_27E8
    pri = 0;
    return pri;
}
// fun_2860
fun_2860() {
    var_8 = arg_8;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = arg_7;
    var_64 = arg_6;
    var_72 = arg_5;
    var_80 = 0;
    var_88 = 4607182418800017408;
    var_96 = 0;
    pri = EvCameraShake_(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_28F8
fun_28F8() {
    pri = EvCameraShakeEnd()
    var_8 = arg_0;
    pri = EvCameraHandShakeEnd(var_8)
    pri = 0;
    return pri;
}
// fun_2948
fun_2948() {
    pri = arg_6;
    OP_JNZ lab_2980
    var_8 = 0;
    pri = fun_0DA8()
// lab_2980
    pri = arg_1;
    switch (pri) {
// switch_3EE8
        case default:
        {
// switch_3EE8_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4238
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4238
            pri = 1;
            OP_JUMP lab_4240
// lab_4238
            pri = 0;
// lab_4240
            OP_JZER lab_4398
            var_16 = 11088;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0898(var_24, var_16)
            var_520 = pri;
            pri = 0;
            OP_ADDR_ALT -536
            OP_FILL 16
            OP_PUSH_P_ADR -536
            pri = var_520;
            OP_ADD_P_C 1
            var_56 = pri;
            pri = NumericToString(var_56, var_48)
            OP_PUSH_P_ADR -536
            OP_PUSH_P_ADR -536
            var_64 = 11192;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_43F8
// lab_4398
            var_8 = 64;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
// lab_43F8
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4458
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_44B8
// lab_4458
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_44B8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_44B8
            pri = arg_2;
            OP_JZER lab_44F8
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_44F8
            var_8 = 0;
            pri = fun_0DE8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3EE8_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x1:
        {
// switch_3EE8_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x2:
        {
// switch_3EE8_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x3:
        {
// switch_3EE8_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x4:
        {
// switch_3EE8_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x5:
        {
// switch_3EE8_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8376;
            var_72 = 8368;
            var_80 = 8360;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x6:
        {
// switch_3EE8_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8400;
            var_72 = 8392;
            var_80 = 8384;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x7:
        {
// switch_3EE8_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8424;
            var_72 = 8416;
            var_80 = 8408;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x8:
        {
// switch_3EE8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x9:
        {
// switch_3EE8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8448;
            var_72 = 8440;
            var_80 = 8432;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EE8_case_default
        }
        case 0xa:
        {
// switch_3EE8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8472;
            var_72 = 8464;
            var_80 = 8456;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EE8_case_default
        }
        case 0xb:
        {
// switch_3EE8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8496;
            var_72 = 8488;
            var_80 = 8480;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EE8_case_default
        }
        case 0xc:
        {
// switch_3EE8_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8520;
            var_72 = 8512;
            var_80 = 8504;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EE8_case_default
        }
        case 0xd:
        {
// switch_3EE8_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8544;
            var_72 = 8536;
            var_80 = 8528;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EE8_case_default
        }
        case 0xe:
        {
// switch_3EE8_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8568;
            var_72 = 8560;
            var_80 = 8552;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EE8_case_default
        }
        case 0xf:
        {
// switch_3EE8_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x10:
        {
// switch_3EE8_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x11:
        {
// switch_3EE8_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8592;
            var_72 = 8584;
            var_80 = 8576;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x12:
        {
// switch_3EE8_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8616;
            var_72 = 8608;
            var_80 = 8600;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x13:
        {
// switch_3EE8_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x14:
        {
// switch_3EE8_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x15:
        {
// switch_3EE8_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x16:
        {
// switch_3EE8_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x17:
        {
// switch_3EE8_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x18:
        {
// switch_3EE8_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x19:
        {
// switch_3EE8_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8640;
            var_72 = 8632;
            var_80 = 8624;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x1a:
        {
// switch_3EE8_case_0x1a
            var_8 = 1;
            var_16 = 8648;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0858(var_24, var_16, var_8)
            var_40 = 8784;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0820(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 8864;
            var_88 = 8856;
            var_96 = 8848;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0B08(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x1b:
        {
// switch_3EE8_case_0x1b
            var_8 = 3;
            var_16 = 8872;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0858(var_24, var_16, var_8)
            var_40 = 9008;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0820(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 9088;
            var_88 = 9080;
            var_96 = 9072;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0B08(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x1c:
        {
// switch_3EE8_case_0x1c
            var_8 = 2;
            var_16 = 9096;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0858(var_24, var_16, var_8)
            var_40 = 9232;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0820(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 9312;
            var_88 = 9304;
            var_96 = 9296;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0B08(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x1d:
        {
// switch_3EE8_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9320;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x1e:
        {
// switch_3EE8_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9456;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x1f:
        {
// switch_3EE8_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9592;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x20:
        {
// switch_3EE8_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9728;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x21:
        {
// switch_3EE8_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9848;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x22:
        {
// switch_3EE8_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9968;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x23:
        {
// switch_3EE8_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10104;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x24:
        {
// switch_3EE8_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10240;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x25:
        {
// switch_3EE8_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10376;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x26:
        {
// switch_3EE8_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10512;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x27:
        {
// switch_3EE8_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10656;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x28:
        {
// switch_3EE8_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10800;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EE8_case_default
        }
        case 0x29:
        {
// switch_3EE8_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10944;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EE8_case_default
        }
    }
}
// fun_4528
fun_4528() {
    pri = arg_5;
    OP_JNZ lab_4560
    var_8 = 0;
    pri = fun_0DA8()
// lab_4560
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_45B0
    OP_CONST_S -8, -1
// lab_45B0
    pri = arg_1;
    switch (pri) {
// switch_6068
        case default:
        {
// switch_6068_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6510
            var_520 = 30952;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0898(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6510
            pri = 1;
            OP_JUMP lab_6518
// lab_6510
            pri = 0;
// lab_6518
            OP_JZER lab_6568
            var_8 = 64;
            var_16 = 31048;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_67C0
// lab_6568
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_65D0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_65D0
            pri = 1;
            OP_JUMP lab_65D8
// lab_65D0
            pri = 0;
// lab_65D8
            OP_JZER lab_6760
            var_16 = 31224;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0898(var_24, var_16)
            var_528 = pri;
            pri = 0;
            OP_ADDR_ALT -656
            OP_FILL 128
            OP_PUSH_P_ADR -656
            pri = var_528;
            OP_ADD_P_C 1
            var_168 = pri;
            pri = NumericToString(var_168, var_160)
            OP_PUSH_P_ADR -656
            OP_PUSH_P_ADR -656
            var_176 = 31328;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 31344;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 11208;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_67C0
// lab_6760
            var_8 = 64;
            alt = 11208;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
// lab_67C0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6830
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6830
            var_8 = 0;
            pri = fun_0DE8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6068_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x1:
        {
// switch_6068_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x2:
        {
// switch_6068_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x3:
        {
// switch_6068_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x4:
        {
// switch_6068_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x5:
        {
// switch_6068_case_0x5
            var_8 = 2;
            var_16 = 21208;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0858(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0AD0(var_40)
            OP_JUMP switch_6068_case_default
        }
        case 0x6:
        {
// switch_6068_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x7:
        {
// switch_6068_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x8:
        {
// switch_6068_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x9:
        {
// switch_6068_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0xa:
        {
// switch_6068_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0xb:
        {
// switch_6068_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0xc:
        {
// switch_6068_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0xd:
        {
// switch_6068_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21856;
            var_72 = 21680;
            var_80 = 21496;
            var_88 = 21304;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6068_case_default
        }
        case 0xe:
        {
// switch_6068_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22512;
            var_72 = 22304;
            var_80 = 22088;
            var_88 = 21864;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6068_case_default
        }
        case 0xf:
        {
// switch_6068_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22904;
            var_72 = 22784;
            var_80 = 22656;
            var_88 = 22520;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6068_case_default
        }
        case 0x10:
        {
// switch_6068_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23248;
            var_72 = 23144;
            var_80 = 23032;
            var_88 = 22912;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6068_case_default
        }
        case 0x11:
        {
// switch_6068_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23592;
            var_72 = 23488;
            var_80 = 23376;
            var_88 = 23256;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6068_case_default
        }
        case 0x12:
        {
// switch_6068_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x13:
        {
// switch_6068_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x14:
        {
// switch_6068_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24152;
            var_72 = 23976;
            var_80 = 23792;
            var_88 = 23600;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6068_case_default
        }
        case 0x15:
        {
// switch_6068_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x16:
        {
// switch_6068_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x17:
        {
// switch_6068_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x18:
        {
// switch_6068_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x19:
        {
// switch_6068_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x1a:
        {
// switch_6068_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x1b:
        {
// switch_6068_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x1c:
        {
// switch_6068_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 24544;
            var_72 = 24424;
            var_80 = 24296;
            var_88 = 24160;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6068_case_default
        }
        case 0x1d:
        {
// switch_6068_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x1e:
        {
// switch_6068_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 25008;
            var_72 = 24864;
            var_80 = 24712;
            var_88 = 24552;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6068_case_default
        }
        case 0x1f:
        {
// switch_6068_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x20:
        {
// switch_6068_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x21:
        {
// switch_6068_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x22:
        {
// switch_6068_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x23:
        {
// switch_6068_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x24:
        {
// switch_6068_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25376;
            var_72 = 25264;
            var_80 = 25144;
            var_88 = 25016;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6068_case_default
        }
        case 0x25:
        {
// switch_6068_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25744;
            var_72 = 25632;
            var_80 = 25512;
            var_88 = 25384;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6068_case_default
        }
        case 0x26:
        {
// switch_6068_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x27:
        {
// switch_6068_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x28:
        {
// switch_6068_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x29:
        {
// switch_6068_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26184;
            var_72 = 26048;
            var_80 = 25904;
            var_88 = 25752;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6068_case_default
        }
        case 0x2a:
        {
// switch_6068_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26576;
            var_72 = 26456;
            var_80 = 26328;
            var_88 = 26192;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6068_case_default
        }
        case 0x2b:
        {
// switch_6068_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26992;
            var_72 = 26864;
            var_80 = 26728;
            var_88 = 26584;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6068_case_default
        }
        case 0x2c:
        {
// switch_6068_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27432;
            var_72 = 27296;
            var_80 = 27152;
            var_88 = 27000;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6068_case_default
        }
        case 0x2d:
        {
// switch_6068_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x2e:
        {
// switch_6068_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27752;
            var_72 = 27656;
            var_80 = 27552;
            var_88 = 27440;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6068_case_default
        }
        case 0x2f:
        {
// switch_6068_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28144;
            var_72 = 28024;
            var_80 = 27896;
            var_88 = 27760;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6068_case_default
        }
        case 0x30:
        {
// switch_6068_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28536;
            var_72 = 28416;
            var_80 = 28288;
            var_88 = 28152;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6068_case_default
        }
        case 0x31:
        {
// switch_6068_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x32:
        {
// switch_6068_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x33:
        {
// switch_6068_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28928;
            var_72 = 28808;
            var_80 = 28680;
            var_88 = 28544;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6068_case_default
        }
        case 0x34:
        {
// switch_6068_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 29296;
            var_72 = 29184;
            var_80 = 29064;
            var_88 = 28936;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6068_case_default
        }
        case 0x35:
        {
// switch_6068_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 29784;
            var_72 = 29632;
            var_80 = 29472;
            var_88 = 29304;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6068_case_default
        }
        case 0x36:
        {
// switch_6068_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 30152;
            var_72 = 30040;
            var_80 = 29920;
            var_88 = 29792;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6068_case_default
        }
        case 0x37:
        {
// switch_6068_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x38:
        {
// switch_6068_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 30520;
            var_72 = 30408;
            var_80 = 30288;
            var_88 = 30160;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6068_case_default
        }
        case 0x39:
        {
// switch_6068_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x3a:
        {
// switch_6068_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x3b:
        {
// switch_6068_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x3c:
        {
// switch_6068_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 30528;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x3d:
        {
// switch_6068_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 30704;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
        case 0x3e:
        {
// switch_6068_case_0x3e
            var_8 = 4;
            var_16 = 30848;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0858(var_24, var_16, var_8)
            OP_JUMP switch_6068_case_default
        }
    }
}
// fun_6860
fun_6860() {
    pri = arg_4;
    OP_JNZ lab_6898
    var_8 = 0;
    pri = fun_0DA8()
// lab_6898
    pri = arg_1;
    switch (pri) {
// switch_7C70
        case default:
        {
// switch_7C70_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 31920;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1790(var_264)
            OP_JZER lab_8238
            pri = arg_3;
            switch (pri) {
// switch_81E0
                case default:
                {
// switch_81E0_case_default
                    OP_JUMP lab_84F0
// lab_84F0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8560
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8560
                    var_8 = 0;
                    pri = fun_0DE8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_81E0_case_0x1
                    var_8 = 32;
                    var_16 = 32072;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_81E0_case_default
                }
                case 0x2:
                {
// switch_81E0_case_0x2
                    var_8 = 32;
                    var_16 = 32176;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_81E0_case_default
                }
                case 0x3:
                {
// switch_81E0_case_0x3
                    var_8 = 32;
                    var_16 = 31976;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_81E0_case_default
                }
            }
// lab_8238
            pri = arg_1;
            OP_JZER lab_8288
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_8288
            pri = 0;
            OP_JUMP lab_8290
// lab_8288
            pri = 1;
// lab_8290
            OP_JZER lab_82F8
            var_8 = 32272;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0898(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_82F8
            pri = 1;
            OP_JUMP lab_8300
// lab_82F8
            pri = 0;
// lab_8300
            OP_JZER lab_8350
            var_8 = 32;
            var_16 = 32368;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_84F0
// lab_8350
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_83B8
            var_8 = 32;
            var_16 = 32528;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_84F0
// lab_83B8
            var_16 = 32648;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0898(var_24, var_16)
            var_264 = pri;
            pri = 0;
            OP_ADDR_ALT -392
            OP_FILL 128
            OP_PUSH_P_ADR -392
            pri = var_264;
            OP_ADD_P_C 1
            var_168 = pri;
            pri = NumericToString(var_168, var_160)
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -392
            var_176 = 32752;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 32768;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_7C70_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x1:
        {
// switch_7C70_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x2:
        {
// switch_7C70_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x3:
        {
// switch_7C70_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x4:
        {
// switch_7C70_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x5:
        {
// switch_7C70_case_0x5
            var_8 = 1;
            var_16 = 31400;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0858(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0AD0(var_40)
            OP_JUMP switch_7C70_case_default
        }
        case 0x6:
        {
// switch_7C70_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x7:
        {
// switch_7C70_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x8:
        {
// switch_7C70_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x9:
        {
// switch_7C70_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0xa:
        {
// switch_7C70_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0xb:
        {
// switch_7C70_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0xc:
        {
// switch_7C70_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0xd:
        {
// switch_7C70_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0xe:
        {
// switch_7C70_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0xf:
        {
// switch_7C70_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x10:
        {
// switch_7C70_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x11:
        {
// switch_7C70_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x12:
        {
// switch_7C70_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x13:
        {
// switch_7C70_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x14:
        {
// switch_7C70_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x15:
        {
// switch_7C70_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x16:
        {
// switch_7C70_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x17:
        {
// switch_7C70_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x18:
        {
// switch_7C70_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x19:
        {
// switch_7C70_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x1a:
        {
// switch_7C70_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x1b:
        {
// switch_7C70_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x1c:
        {
// switch_7C70_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x1d:
        {
// switch_7C70_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x1e:
        {
// switch_7C70_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x1f:
        {
// switch_7C70_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x20:
        {
// switch_7C70_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x21:
        {
// switch_7C70_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x22:
        {
// switch_7C70_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x23:
        {
// switch_7C70_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x24:
        {
// switch_7C70_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x25:
        {
// switch_7C70_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x26:
        {
// switch_7C70_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x27:
        {
// switch_7C70_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x28:
        {
// switch_7C70_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x29:
        {
// switch_7C70_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x2a:
        {
// switch_7C70_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x2b:
        {
// switch_7C70_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x2c:
        {
// switch_7C70_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x2d:
        {
// switch_7C70_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x2e:
        {
// switch_7C70_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x2f:
        {
// switch_7C70_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x30:
        {
// switch_7C70_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x31:
        {
// switch_7C70_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x32:
        {
// switch_7C70_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x33:
        {
// switch_7C70_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x34:
        {
// switch_7C70_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x35:
        {
// switch_7C70_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x36:
        {
// switch_7C70_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x37:
        {
// switch_7C70_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x38:
        {
// switch_7C70_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x39:
        {
// switch_7C70_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x3a:
        {
// switch_7C70_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x3b:
        {
// switch_7C70_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x3c:
        {
// switch_7C70_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31496;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x3d:
        {
// switch_7C70_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31672;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
        case 0x3e:
        {
// switch_7C70_case_0x3e
            var_8 = 3;
            var_16 = 31816;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0858(var_24, var_16, var_8)
            OP_JUMP switch_7C70_case_default
        }
    }
}
// fun_8590
fun_8590() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_8690
        case default:
        {
// switch_8690_case_default
            var_8 = arg_5;
            var_16 = var_8;
            var_24 = arg_4;
            var_32 = arg_2;
            var_40 = 8802641224559852288;
            var_48 = arg_0;
            pri = EasyTalkCharacter(var_48, var_40, var_32, var_24, var_16, var_8)
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_8690_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_8690_case_default
        }
        case 0x1:
        {
// switch_8690_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_8690_case_default
        }
        case 0x2:
        {
// switch_8690_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_8690_case_default
        }
        case 0x3:
        {
// switch_8690_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_8690_case_default
        }
    }
}
// fun_8750
fun_8750() {
    var_8 = 0;
    var_16 = arg_5;
    pri = arg_4;
    alt = 2;
    pri |= alt;
    var_24 = pri;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_2340(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_23F0()
    pri = 0;
    return pri;
}
// fun_87E8
fun_87E8() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8590(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_8750(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_8890
fun_8890() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_88E0
// lab_88E0
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 32816;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_8958
    OP_JUMP lab_8988
// lab_8958
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_88E0
// lab_8988
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_8A10
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_6860(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1A60(var_56)
// lab_8A10
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_8A78
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_12F8(var_24, var_16)
// lab_8A78
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_12F8(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_8B38
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_08D0(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_06A8(var_88, var_80, var_72, var_64, var_56)
// lab_8B38
    pri = IsPlayerRideBicycle()
    OP_JZER lab_8B78
    pri = 0;
    return pri;
// lab_8B78
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8CC0
    var_16 = 1;
    var_24 = 8;
    pri = fun_0090(var_16)
    var_32 = 32936;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0820(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_8C88
    var_72 = 12;
    var_80 = 8;
    pri = fun_0090(var_72)
// lab_8CC0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_06F8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_06F8(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_08D0(var_40)
    pri = 0;
    return pri;
// lab_8C88
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_12F8(var_16, var_8)
}
// fun_8D48
fun_8D48() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = arg_9;
    var_32 = arg_8;
    var_40 = arg_7;
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = var_8;
    var_104 = 88;
    pri = fun_87E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_2488(var_112)
    var_128 = 0;
    pri = fun_2548()
    var_144 = 13;
    pri = TempWorkGet(var_144)
    var_152 = pri;
    pri = float(var_152)
    var_16 = pri;
    var_160 = arg_4;
    var_168 = var_16;
    var_176 = arg_3;
    var_184 = var_8;
    var_192 = 32;
    pri = fun_8890(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_8EC0
fun_8EC0() {
    pri = 33072;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_8F48
// lab_8F48
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_90C8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_90B8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_9008
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_9008
    pri = 0;
    OP_JUMP lab_9010
// lab_90C8
    pri = 0;
    return pri;
// lab_90B8
    OP_JUMP lab_8F40
// lab_8F40
    OP_INC_P_S -936
// lab_9008
    pri = 1;
// lab_9010
    OP_JZER lab_9088
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_9080
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_9088
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_9080
}
// fun_90E8
fun_90E8() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_9130
    pri = arg_0;
    return pri;
// lab_9130
    pri = arg_1;
    return pri;
}
// fun_9140
fun_9140() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_91D8
    var_8 = 1;
    var_16 = 0;
    var_24 = 33992;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0310(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0380()
    var_56 = 0;
    pri = fun_1A38()
// lab_91D8
    pri = arg_4;
    OP_JZER lab_9210
    var_8 = 1;
    var_16 = 8;
    pri = fun_1A90(var_8)
// lab_9210
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_9268
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_9268
    pri = 0;
    OP_JUMP lab_9270
// lab_9268
    pri = 1;
// lab_9270
    OP_JZER lab_9338
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_9338
    var_16 = 0;
    pri = fun_0410()
    OP_JZER lab_9310
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1978(var_32, var_24)
    OP_JUMP lab_9338
// lab_9338
    pri = arg_2;
    OP_JZER lab_9410
    var_8 = 0;
    pri = fun_0410()
    OP_JZER lab_93E0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_12F8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0538(var_40)
    OP_JUMP lab_9410
// lab_9410
    pri = arg_3;
    OP_JZER lab_9448
    var_8 = 1;
    var_16 = 8;
    pri = fun_1A00(var_8)
// lab_9448
    pri = 0;
    return pri;
// lab_93E0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_12F8(var_16, var_8)
// lab_9310
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1978(var_16, var_8)
}
// fun_9458
fun_9458() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_8EC0(var_24)
    pri = 0;
    return pri;
}
// fun_94C0
fun_94C0() {
    pri = g_mode;
    switch (pri) {
// switch_95D0
        case default:
        {
// switch_95D0_case_default
            pri = CommandNOP()
            OP_JUMP lab_9638
// lab_9638
            pri = 0;
            return pri;
        }
        case 0x9a08cc9e51611ee5:
        {
// switch_95D0_case_0x9a08cc9e51611ee5
            var_8 = 0;
            pri = fun_B718()
            OP_JUMP lab_9638
        }
        case 0x0:
        {
// switch_95D0_case_0x0
            var_8 = 0;
            pri = fun_9648()
            OP_JUMP lab_9638
        }
        case 0xd7fcb17f7a9a34f:
        {
// switch_95D0_case_0xd7fcb17f7a9a34f
            var_8 = 0;
            pri = fun_B6D0()
            OP_JUMP lab_9638
        }
        case 0x2cad3d1b8326e5ab:
        {
// switch_95D0_case_0x2cad3d1b8326e5ab
            var_8 = 0;
            pri = fun_B5E0()
            OP_JUMP lab_9638
        }
        case 0x780778da818bc665:
        {
// switch_95D0_case_0x780778da818bc665
            var_8 = 0;
            pri = fun_B7A0()
            OP_JUMP lab_9638
        }
    }
}
// fun_9648
fun_9648() {
    pri = 0;
    return pri;
}
// fun_9660
fun_9660() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_9140(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_96B8
fun_96B8() {
    pri = 0;
    return pri;
}
// fun_96D0
fun_96D0() {
    pri = 0;
    return pri;
}
// fun_96E8
fun_96E8() {
    pri = EvCameraStart()
    OP_ZERO_P_S -8
    OP_ZERO_P_S -16
    OP_ZERO_P_S -24
    OP_ZERO_P_S -32
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_97E8
    OP_CONST_S -8, 7816440442768909182
    OP_CONST_S -16, 6845678924896213970
    OP_CONST_S -24, 6845677825384585759
    OP_CONST_S -32, 6845676725872957548
    OP_JUMP lab_9848
// lab_97E8
    OP_CONST_S -8, 387792121742723038
    OP_CONST_S -16, 899378583111772448
    OP_CONST_S -24, 899381881646657081
    OP_CONST_S -32, 899380782135028870
// lab_9848
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    var_32 = -1;
    var_40 = 0;
    var_48 = 9;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_4528(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    var_112 = var_16;
    var_120 = var_8;
    var_128 = 56;
    pri = fun_2340(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = 1;
    var_144 = 8;
    pri = fun_2488(var_136)
    var_152 = 0;
    pri = fun_2548()
    var_168 = 233;
    var_176 = 232;
    var_184 = 16;
    pri = fun_90E8(var_176, var_168)
    var_40 = pri;
    var_200 = 46;
    var_208 = 45;
    var_216 = 16;
    pri = fun_90E8(var_208, var_200)
    var_48 = pri;
    var_224 = var_48;
    var_232 = 0;
    var_240 = 0;
    var_248 = 0;
    var_256 = var_40;
    var_264 = 40;
    pri = fun_2578(var_256, var_248, var_240, var_232, var_224)
    var_272 = 0;
    pri = fun_2690()
    OP_JZER lab_9A10
    var_280 = 0;
    pri = fun_2780()
// lab_9A10
    var_8 = 1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_04F8(var_16, var_8)
    var_32 = 1;
    var_40 = 1514373463937579588;
    var_48 = 16;
    pri = fun_04F8(var_40, var_32)
    var_56 = 1;
    var_64 = 3012735517485661393;
    var_72 = 16;
    pri = fun_04F8(var_64, var_56)
    var_80 = 1;
    var_88 = 6718143717892348318;
    var_96 = 16;
    pri = fun_04F8(var_88, var_80)
    var_104 = 1;
    var_112 = var_8;
    var_120 = 16;
    pri = fun_04F8(var_112, var_104)
    var_128 = 0;
    var_136 = 1139048380943932808;
    var_144 = 16;
    pri = fun_04C0(var_136, var_128)
    var_152 = 0;
    var_160 = -7785343324082770324;
    var_168 = 16;
    pri = fun_04C0(var_160, var_152)
    var_176 = 0;
    var_184 = -164538243036851154;
    var_192 = 16;
    pri = fun_04C0(var_184, var_176)
    var_200 = 0;
    var_208 = -5321351475360329479;
    var_216 = 16;
    pri = fun_04C0(var_208, var_200)
    var_224 = 1;
    var_232 = 1;
    OP_PUSH4_C -4587338432941916160, 4666317287749949850, 4661950852198144410, 8802641224559852288
    var_240 = 48;
    pri = fun_0468(var_232, var_224, var_216, var_208, var_200, var_192)
    var_248 = 1;
    var_256 = 1;
    OP_PUSH4_C 4636033603912859648, 4666379245230175027, 4661536776119123968, 1514373463937579588
    var_264 = 48;
    pri = fun_0468(var_256, var_248, var_240, var_232, var_224, var_216)
    var_272 = 1;
    var_280 = 1;
    OP_PUSH4_C 4636033603912859648, 4666251097149957734, 4661336665002868736, 3012735517485661393
    var_288 = 48;
    pri = fun_0468(var_280, var_272, var_264, var_256, var_248, var_240)
    var_296 = 1;
    var_304 = 1;
    OP_PUSH4_C -4594347159862011494, 4666180508503454515, 4661930291330704998, 6718143717892348318
    var_312 = 48;
    pri = fun_0468(var_304, var_296, var_288, var_280, var_272, var_264)
    var_320 = 0;
    var_328 = 4627307879634829312;
    var_336 = 0;
    OP_PUSH5_C 4666294115542394470, -4584467388179467469, 4661893105847453614, 4666673502029558579, -4583558575848412938
    var_344 = 4661927773449077391;
    var_352 = 1;
    pri = EvCameraMove(var_352, var_344, var_336, var_328, var_320, var_312, var_304, var_296, var_288, var_280)
    var_360 = 0;
    pri = fun_27D0()
    var_368 = 1;
    var_376 = 1;
    var_384 = -1;
    var_392 = -1;
    var_400 = 0;
    var_408 = 10;
    var_416 = var_8;
    var_424 = 56;
    pri = fun_4528(var_416, var_408, var_400, var_392, var_384, var_376, var_368)
    var_432 = 10;
    var_440 = 8;
    pri = fun_0090(var_432)
    var_448 = 34040;
    var_456 = 8;
    var_464 = 16;
    pri = fun_02B0(var_456, var_448)
    var_472 = 0;
    pri = fun_0380()
    var_480 = 0;
    var_488 = 4627307879634829312;
    var_496 = 3;
    OP_PUSH5_C 4666293593274371277, -4578479711737390039, 4661883100291640852, 4666640252797934633, -4579594176723303793
    var_504 = 4662186598486255862;
    var_512 = 150;
    pri = EvCameraMove(var_512, var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440)
    var_520 = 40;
    var_528 = 8;
    pri = fun_0090(var_520)
    var_536 = 0;
    var_544 = 3;
    var_552 = 0;
    var_560 = 100;
    var_568 = -1;
    var_576 = var_24;
    var_584 = var_8;
    var_592 = 56;
    pri = fun_2340(var_584, var_576, var_568, var_560, var_552, var_544, var_536)
    var_600 = 1;
    var_608 = 8;
    pri = fun_2488(var_600)
    var_616 = 0;
    pri = fun_2548()
    var_624 = 0;
    var_632 = 4627307879634829312;
    var_640 = 3;
    OP_PUSH5_C 4666244225202284134, -4578565737527147233, 4661770180447468257, 4666569097902943109, -4579679498825619210
    var_648 = 4662158297056956908;
    var_656 = 30;
    pri = EvCameraMove(var_656, var_648, var_640, var_632, var_624, var_616, var_608, var_600, var_592, var_584)
    var_664 = 1;
    var_672 = 0;
    OP_PUSH5_C 4641240890982006784, 8802641224559852288, 4666379245230175027, 4661755578933051392, 4611686018427387904
    var_680 = 1514373463937579588;
    var_688 = 64;
    pri = fun_05E8(var_680, var_672, var_664, var_656, var_648, var_640, var_632, var_624)
    var_696 = 1;
    var_704 = 0;
    OP_PUSH5_C 4641240890982006784, 8802641224559852288, 4666251097149957734, 4661644528258646016, 4607182418800017408
    var_712 = 3012735517485661393;
    var_720 = 64;
    pri = fun_05E8(var_712, var_704, var_696, var_688, var_680, var_672, var_664, var_656)
    var_728 = 0;
    var_736 = 3;
    var_744 = 0;
    var_752 = 100;
    var_760 = -1;
    OP_PUSH2_C 4139864794346312202, 1514373463937579588
    var_768 = 56;
    pri = fun_2340(var_760, var_752, var_744, var_736, var_728, var_720, var_712)
    var_776 = 1514373463937579588;
    var_784 = 8;
    pri = fun_06F8(var_776)
    var_792 = 3012735517485661393;
    var_800 = 8;
    pri = fun_06F8(var_792)
    var_808 = 1;
    var_816 = 8;
    pri = fun_2488(var_808)
    var_824 = 0;
    pri = fun_2548()
    OP_PUSH2_C -4597893744568565760, 4627307879634829312
    var_832 = 0;
    OP_PUSH5_C 4666687685729556890, 4646016289883763507, 4662341838532981555, 4666928253376156140, 4650974295676661268
    var_840 = 4662628888033645036;
    var_848 = 1;
    pri = EvCameraMove(var_848, var_840, var_832, var_824, var_816, var_808, var_800, var_792, var_784, var_776)
    var_856 = 0;
    pri = fun_27D0()
    var_864 = 6;
    var_872 = 4;
    var_880 = 6718143717892348318;
    var_888 = 24;
    pri = fun_1428(var_880, var_872, var_864)
    var_896 = 4;
    var_904 = 6;
    var_912 = 1514373463937579588;
    var_920 = 24;
    pri = fun_1428(var_912, var_904, var_896)
    var_928 = 6;
    var_936 = 6;
    var_944 = 3012735517485661393;
    var_952 = 24;
    pri = fun_1428(var_944, var_936, var_928)
    var_960 = 0;
    var_968 = 0;
    pri = float(var_968)
    var_976 = pri;
    var_984 = 1;
    pri = float(var_984)
    var_992 = pri;
    var_1000 = 0;
    pri = float(var_1000)
    var_1008 = pri;
    var_1016 = 1;
    var_1024 = 30;
    var_1032 = 2;
    var_1040 = 3;
    pri = float(var_1040)
    var_1048 = pri;
    var_1056 = 2;
    var_1064 = 72;
    pri = fun_2860(var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992)
    var_1072 = 0;
    var_1080 = 0;
    var_1088 = 0;
    var_1096 = 888;
    var_1104 = 889;
    var_1112 = 16;
    pri = fun_90E8(var_1104, var_1096)
    var_1120 = pri;
    pri = SoundPlayPokeVoice(var_1120, var_1112, var_1104, var_1096)
    var_1128 = 3;
    var_1136 = 0;
    var_1144 = 101;
    var_1152 = 1824238827794051298;
    var_1160 = 32;
    pri = fun_21E8(var_1152, var_1144, var_1136, var_1128)
    var_1168 = 1;
    var_1176 = 0;
    var_1184 = 1;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_1192 = 0;
    var_1200 = 48;
    pri = fun_15F0(var_1192, var_1184, var_1176, var_1168, var_1160, var_1152)
    var_1208 = 6;
    var_1216 = 8;
    pri = fun_0090(var_1208)
    var_1224 = 1;
    var_1232 = 0;
    var_1240 = 2;
    OP_PUSH2_C 4607182418800017408, 3012735517485661393
    var_1248 = 0;
    var_1256 = 48;
    pri = fun_15F0(var_1248, var_1240, var_1232, var_1224, var_1216, var_1208)
    var_1264 = 3;
    var_1272 = 8;
    pri = fun_0090(var_1264)
    var_1280 = 1;
    var_1288 = 0;
    var_1296 = 3;
    OP_PUSH2_C 4607182418800017408, 6718143717892348318
    var_1304 = 0;
    var_1312 = 48;
    pri = fun_15F0(var_1304, var_1296, var_1288, var_1280, var_1272, var_1264)
    var_1320 = 2;
    var_1328 = 8;
    pri = fun_0090(var_1320)
    var_1336 = 1;
    var_1344 = 0;
    var_1352 = 4;
    OP_PUSH2_C 4607182418800017408, 1514373463937579588
    var_1360 = 0;
    var_1368 = 48;
    pri = fun_15F0(var_1360, var_1352, var_1344, var_1336, var_1328, var_1320)
    var_1376 = 1;
    var_1384 = 1;
    var_1392 = -1;
    var_1400 = -1;
    var_1408 = 0;
    var_1416 = 3;
    var_1424 = 1514373463937579588;
    var_1432 = 56;
    pri = fun_4528(var_1424, var_1416, var_1408, var_1400, var_1392, var_1384, var_1376)
    var_1440 = 4;
    var_1448 = 8;
    pri = fun_0090(var_1440)
    var_1456 = 1;
    var_1464 = 1;
    var_1472 = -1;
    var_1480 = -1;
    var_1488 = 0;
    var_1496 = 3;
    var_1504 = 3012735517485661393;
    var_1512 = 56;
    pri = fun_4528(var_1504, var_1496, var_1488, var_1480, var_1472, var_1464, var_1456)
    var_1520 = 2;
    var_1528 = 8;
    pri = fun_0090(var_1520)
    var_1536 = 1;
    var_1544 = 1;
    var_1552 = -1;
    var_1560 = -1;
    var_1568 = 0;
    var_1576 = 3;
    var_1584 = 6718143717892348318;
    var_1592 = 56;
    pri = fun_4528(var_1584, var_1576, var_1568, var_1560, var_1552, var_1544, var_1536)
    var_1600 = 1;
    var_1608 = 3;
    var_1616 = 0;
    var_1624 = 10;
    var_1632 = var_8;
    var_1640 = 40;
    pri = fun_6860(var_1632, var_1624, var_1616, var_1608, var_1600)
    var_1648 = var_8;
    var_1656 = 8;
    pri = fun_08D0(var_1648)
    var_1664 = 45;
    var_1672 = 8;
    pri = fun_0090(var_1664)
    pri = EvCameraShakeEnd()
    var_1680 = 1;
    var_1688 = 8;
    pri = fun_2488(var_1680)
    var_1696 = 0;
    pri = fun_2548()
    var_1704 = 20;
    var_1712 = 8;
    pri = fun_28F8(var_1704)
    OP_PUSH2_C -4604818028995647898, 4627307879634829312
    var_1720 = 0;
    OP_PUSH5_C 4665922843451043348, -4579130798542893875, 4661888674815593677, 4666300476217161155, -4580040490483250627
    var_1728 = 4661952061660934963;
    var_1736 = 1;
    pri = EvCameraMove(var_1736, var_1728, var_1720, var_1712, var_1704, var_1696, var_1688, var_1680, var_1672, var_1664)
    var_1744 = 0;
    pri = fun_27D0()
    var_1752 = 0;
    var_1760 = 3;
    var_1768 = 0;
    var_1776 = 100;
    var_1784 = -1;
    OP_PUSH2_C 3412248408605374773, 6718143717892348318
    var_1792 = 56;
    pri = fun_2340(var_1784, var_1776, var_1768, var_1760, var_1752, var_1744, var_1736)
    var_1800 = 1;
    var_1808 = 8;
    pri = fun_2488(var_1800)
    var_1816 = 0;
    pri = fun_2548()
    OP_PUSH2_C -9223372036854775808, 4627307879634829312
    var_1824 = 0;
    OP_PUSH5_C 4666252224149376205, -4577466401821231677, 4661567331547259863, 4666390966024127119, -4583944548410227425
    var_1832 = 4662214262198810706;
    var_1840 = 1;
    pri = EvCameraMove(var_1840, var_1832, var_1824, var_1816, var_1808, var_1800, var_1792, var_1784, var_1776, var_1768)
    var_1848 = 0;
    pri = fun_27D0()
    OP_PUSH2_C -9223372036854775808, 4627307879634829312
    var_1856 = 3;
    OP_PUSH5_C 4666282020914488934, -4578451388317858529, 4661706287826778194, 4666420762789239849, -4587164622143797330
    var_1864 = 4662353218478329037;
    var_1872 = 100;
    pri = EvCameraMove(var_1872, var_1864, var_1856, var_1848, var_1840, var_1832, var_1824, var_1816, var_1808, var_1800)
    var_1880 = 1;
    var_1888 = 3;
    var_1896 = 0;
    var_1904 = 3;
    var_1912 = 1514373463937579588;
    var_1920 = 40;
    pri = fun_6860(var_1912, var_1904, var_1896, var_1888, var_1880)
    var_1928 = 4;
    var_1936 = 8;
    pri = fun_0090(var_1928)
    var_1944 = 1;
    var_1952 = 3;
    var_1960 = 0;
    var_1968 = 3;
    var_1976 = 3012735517485661393;
    var_1984 = 40;
    pri = fun_6860(var_1976, var_1968, var_1960, var_1952, var_1944)
    var_1992 = 2;
    var_2000 = 8;
    pri = fun_0090(var_1992)
    var_2008 = 1;
    var_2016 = 3;
    var_2024 = 0;
    var_2032 = 3;
    var_2040 = 6718143717892348318;
    var_2048 = 40;
    pri = fun_6860(var_2040, var_2032, var_2024, var_2016, var_2008)
    var_2056 = 1;
    var_2064 = 1;
    var_2072 = -1;
    var_2080 = 2;
    var_2088 = var_8;
    var_2096 = 40;
    pri = fun_0E88(var_2088, var_2080, var_2072, var_2064, var_2056)
    var_2104 = 0;
    var_2112 = 3;
    var_2120 = 0;
    var_2128 = 100;
    var_2136 = -1;
    var_2144 = var_32;
    var_2152 = var_8;
    var_2160 = 56;
    pri = fun_2340(var_2152, var_2144, var_2136, var_2128, var_2120, var_2112, var_2104)
    var_2168 = 1514373463937579588;
    var_2176 = 8;
    pri = fun_08D0(var_2168)
    var_2184 = 3012735517485661393;
    var_2192 = 8;
    pri = fun_08D0(var_2184)
    var_2200 = 6718143717892348318;
    var_2208 = 8;
    pri = fun_08D0(var_2200)
    var_2216 = 1;
    var_2224 = 8;
    pri = fun_2488(var_2216)
    var_2232 = 0;
    pri = fun_2548()
    var_2240 = 1;
    var_2248 = -1;
    var_2256 = -1;
    var_2264 = 3;
    var_2272 = 0;
    var_2280 = 0;
    var_2288 = 3012735517485661393;
    var_2296 = 56;
    pri = fun_2948(var_2288, var_2280, var_2272, var_2264, var_2256, var_2248, var_2240)
    var_2304 = 0;
    var_2312 = 3;
    var_2320 = 0;
    var_2328 = 100;
    var_2336 = -1;
    OP_PUSH2_C 4095647092600431164, 3012735517485661393
    var_2344 = 56;
    pri = fun_2340(var_2336, var_2328, var_2320, var_2312, var_2304, var_2296, var_2288)
    var_2352 = 3012735517485661393;
    var_2360 = 8;
    pri = fun_08D0(var_2352)
    var_2368 = 1;
    var_2376 = 8;
    pri = fun_2488(var_2368)
    var_2384 = 0;
    pri = fun_2548()
    var_2392 = 1;
    var_2400 = 0;
    var_2408 = 4641240890982006784;
    var_2416 = 0;
    var_2424 = 0;
    OP_PUSH4_C 4666257749195305779, 4661380645467979776, 4607182418800017408, 1514373463937579588
    var_2432 = 72;
    pri = fun_0570(var_2424, var_2416, var_2408, var_2400, var_2392, var_2384, var_2376, var_2368, var_2360)
    var_2440 = 1;
    var_2448 = 0;
    var_2456 = 4641240890982006784;
    var_2464 = 0;
    var_2472 = 0;
    OP_PUSH4_C 4666226358138332774, 4661336665002868736, 4607182418800017408, 3012735517485661393
    var_2480 = 72;
    pri = fun_0570(var_2472, var_2464, var_2456, var_2448, var_2440, var_2432, var_2424, var_2416, var_2408)
    var_2488 = 40;
    var_2496 = 8;
    pri = fun_0090(var_2488)
    var_2504 = 1;
    var_2512 = 0;
    var_2520 = 33992;
    var_2528 = 8;
    var_2536 = 32;
    pri = fun_0310(var_2528, var_2520, var_2512, var_2504)
    var_2544 = 0;
    pri = fun_0380()
    var_2552 = 34088;
    pri = SoundPostEvent(var_2552)
    var_2560 = 1514373463937579588;
    var_2568 = 8;
    pri = fun_1490(var_2560)
    var_2576 = 3012735517485661393;
    var_2584 = 8;
    pri = fun_1490(var_2576)
    var_2592 = 6718143717892348318;
    var_2600 = 8;
    pri = fun_1490(var_2592)
    var_2608 = 3012735517485661393;
    var_2616 = 8;
    pri = fun_06F8(var_2608)
    var_2624 = 1514373463937579588;
    var_2632 = 8;
    pri = fun_06F8(var_2624)
    var_2640 = -1;
    var_2648 = var_8;
    var_2656 = 16;
    pri = fun_12F8(var_2648, var_2640)
    var_2664 = 0;
    var_2672 = 8802641224559852288;
    var_2680 = 16;
    pri = fun_04F8(var_2672, var_2664)
    var_2688 = 0;
    var_2696 = 1514373463937579588;
    var_2704 = 16;
    pri = fun_04F8(var_2696, var_2688)
    var_2712 = 0;
    var_2720 = 3012735517485661393;
    var_2728 = 16;
    pri = fun_04F8(var_2720, var_2712)
    var_2736 = 0;
    var_2744 = 6718143717892348318;
    var_2752 = 16;
    pri = fun_04F8(var_2744, var_2736)
    var_2760 = 0;
    var_2768 = var_8;
    var_2776 = 16;
    pri = fun_04F8(var_2768, var_2760)
    var_2784 = 3;
    var_2792 = 1;
    pri = EvCameraEnd(var_2792, var_2784)
    pri = 0;
    return pri;
}
// fun_B160
fun_B160() {
    pri = 0;
    return pri;
}
// fun_B178
fun_B178() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_B1C0
    OP_JUMP lab_B1C0
// lab_B1C0
    var_8 = 1139048380943932808;
    var_16 = 8;
    pri = fun_0438(var_8)
    var_24 = -7785343324082770324;
    var_32 = 8;
    pri = fun_0438(var_24)
    var_40 = -164538243036851154;
    var_48 = 8;
    pri = fun_0438(var_40)
    var_56 = -5321351475360329479;
    var_64 = 8;
    pri = fun_0438(var_56)
    var_72 = 3012735517485661393;
    var_80 = 8;
    pri = fun_0438(var_72)
    var_88 = 1514373463937579588;
    var_96 = 8;
    pri = fun_0438(var_88)
    var_104 = 6718143717892348318;
    var_112 = 8;
    pri = fun_0438(var_104)
    var_120 = 1139048380943932808;
    var_128 = 8;
    pri = fun_0438(var_120)
    var_136 = -7785343324082770324;
    var_144 = 8;
    pri = fun_0438(var_136)
    var_152 = -164538243036851154;
    var_160 = 8;
    pri = fun_0438(var_152)
    var_168 = -5321351475360329479;
    var_176 = 8;
    pri = fun_0438(var_168)
    var_184 = 3170;
    var_192 = 8;
    pri = fun_9458(var_184)
    var_200 = -8218456393840537451;
    pri = FlagReset(var_200)
    var_208 = 6513469414483989899;
    pri = FlagReset(var_208)
    var_216 = 7694382768399930019;
    pri = FlagReset(var_216)
    var_224 = 387838090113935797;
    pri = FlagReset(var_224)
    var_232 = 1688300219790732716;
    pri = FlagReset(var_232)
    var_240 = -4893233655299320911;
    pri = FlagReset(var_240)
    var_248 = -1349778034395884683;
    pri = FlagReset(var_248)
    var_256 = 7473960101546429514;
    pri = FlagReset(var_256)
    pri = 0;
    return pri;
}
// fun_B4E8
fun_B4E8() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_B560
    OP_PUSH2_C 7816440442768909182, 856779275486177900
    pri = SetBamiriInfoToChara(var_0, var_-8)
    OP_JUMP lab_B590
// lab_B560
    OP_PUSH2_C 387792121742723038, 7696785856888167116
    pri = SetBamiriInfoToChara(var_0, var_-8)
// lab_B590
    var_8 = 34040;
    var_16 = 8;
    var_24 = 16;
    pri = fun_02B0(var_16, var_8)
    var_32 = 0;
    pri = fun_0380()
    pri = 0;
    return pri;
}
// fun_B5E0
fun_B5E0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_9660()
    var_16 = 0;
    pri = fun_96B8()
    var_24 = 0;
    pri = fun_96D0()
    var_32 = 0;
    pri = fun_96E8()
    var_40 = 0;
    pri = fun_B160()
    var_48 = 0;
    pri = fun_B178()
    var_56 = 0;
    pri = fun_B4E8()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_B6D0
fun_B6D0() {
    var_8 = 0;
    pri = fun_96B8()
    var_16 = 0;
    pri = fun_B178()
    pri = 0;
    return pri;
}
// fun_B718
fun_B718() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 6845676725872957548;
    var_88 = 80;
    pri = fun_8D48(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_B7A0
fun_B7A0() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 899380782135028870;
    var_88 = 80;
    pri = fun_8D48(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
