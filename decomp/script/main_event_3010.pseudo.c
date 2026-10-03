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
    pri = ABKeyWait_()
    return pri;
}
// fun_0190
fun_0190() {
    OP_ZERO_P_S -8
    OP_JUMP lab_01C0
// lab_01C0
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_02C0
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_0240
    pri = 0;
    return pri;
// lab_02C0
    pri = 0;
    return pri;
// lab_0240
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
    OP_JUMP lab_01B8
// lab_01B8
    OP_INC_P_S -8
}
// fun_02D8
fun_02D8() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0338
fun_0338() {
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
// fun_03A8
fun_03A8() {
    OP_JUMP lab_03C0
// lab_03C0
    pri = FadeWait_()
    OP_JZER lab_03F8
    pri = 0;
    return pri;
// lab_03F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_03C0
    pri = 0;
    return pri;
}
// fun_0438
fun_0438() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_0460
fun_0460() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_04A8
// lab_04A8
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_04E8
    OP_JUMP lab_0558
// lab_04E8
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0528
    OP_JUMP lab_0558
// lab_0528
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_04A8
// lab_0558
    pri = 0;
    return pri;
}
// fun_0570
fun_0570() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_05A0
fun_05A0() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_05D8
// lab_05D8
    var_8 = 0;
    pri = fun_06F0()
    OP_JNZ lab_0610
    OP_JUMP lab_0640
// lab_0610
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05D8
// lab_0640
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_0670
// lab_0670
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_06B0
    pri = 0;
    return pri;
// lab_06B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0670
    pri = 0;
    return pri;
}
// fun_06F0
fun_06F0() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0718
fun_0718() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0770
fun_0770() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_07A8
fun_07A8() {
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
// fun_0868
fun_0868() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08B8
fun_08B8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0910
fun_0910() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_18C0(var_8)
    OP_JZER lab_0988
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_18F0(var_24)
    OP_JNZ lab_0988
    pri = 0;
    return pri;
// lab_0988
    OP_JUMP lab_0998
// lab_0998
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_09F8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_09F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0998
    pri = 0;
    return pri;
}
// fun_0A38
fun_0A38() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0A70
fun_0A70() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0AB0
fun_0AB0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0AE8
fun_0AE8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0B30
    pri = 0;
    return pri;
// lab_0B30
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0B70
// lab_0B70
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_18C0(var_8)
    OP_JNZ lab_0BF8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0BE8
    pri = 0;
    return pri;
// lab_0BF8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0C40
    pri = 0;
    return pri;
// lab_0C40
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0CA0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E10(var_8)
    pri = 0;
    return pri;
// lab_0CA0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0B70
    pri = 0;
    return pri;
// lab_0BE8
    OP_JUMP lab_0C40
}
// fun_0CE8
fun_0CE8() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0D30
// lab_0D30
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0D88
    pri = 0;
    return pri;
// lab_0D88
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0DC8
    pri = 0;
    return pri;
// lab_0DC8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D30
    pri = 0;
    return pri;
}
// fun_0E10
fun_0E10() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0E48
fun_0E48() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E98
    pri = 0;
    return pri;
// lab_0E98
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_18C0(var_8)
    OP_JZER lab_0FC8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EF0
    OP_ZERO_P_S 64
// lab_0FC8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1000
    OP_CONST_S 64, 1
// lab_1000
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1038
    OP_CONST_S 72, 1
// lab_1038
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
// lab_0EF0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F18
    OP_ZERO_P_S 72
// lab_0F18
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
    OP_JUMP lab_10D8
// lab_10D8
    pri = 0;
    return pri;
}
// fun_10E8
fun_10E8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1128
fun_1128() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1168
fun_1168() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11C0
fun_11C0() {
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
// fun_1220
fun_1220() {
    OP_CONST_S -8, 4631530004285489152
    pri = arg_1;
    switch (pri) {
// switch_15E0
        case default:
        {
// switch_15E0_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_15E0_case_0x0
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
            pri = fun_11C0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_15E0_case_default
        }
        case 0x1:
        {
// switch_15E0_case_0x1
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_11C0(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_15E0_case_default
        }
        case 0x2:
        {
// switch_15E0_case_0x2
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
            pri = fun_11C0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_15E0_case_default
        }
        case 0x3:
        {
// switch_15E0_case_0x3
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 0;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_11C0(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_15E0_case_default
        }
        case 0x4:
        {
// switch_15E0_case_0x4
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
            pri = fun_11C0(var_80, var_72, var_64, var_56, var_48, var_40)
            OP_JUMP switch_15E0_case_default
        }
        case 0x5:
        {
// switch_15E0_case_0x5
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
            pri = fun_11C0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_15E0_case_default
        }
        case 0x6:
        {
// switch_15E0_case_0x6
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
            pri = fun_11C0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_15E0_case_default
        }
        case 0x7:
        {
// switch_15E0_case_0x7
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_11C0(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_15E0_case_default
        }
    }
}
// fun_1690
fun_1690() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_16D0
fun_16D0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = ResetFieldObjectEyeLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1710
fun_1710() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1750
fun_1750() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1788
fun_1788() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_17C8
fun_17C8() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1800
fun_1800() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1710(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1788(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1868
fun_1868() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1750(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_17C8(var_24)
    pri = 0;
    return pri;
}
// fun_18C0
fun_18C0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_18F0
fun_18F0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1920
fun_1920() {
    OP_JUMP lab_1938
// lab_1938
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_19C8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_19B8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AE8(var_8)
    pri = 0;
    return pri;
// lab_19C8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1A58
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1A48
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AE8(var_8)
    pri = 0;
    return pri;
// lab_1A58
    pri = 0;
    return pri;
// lab_1A48
    OP_JUMP lab_1A68
// lab_1A68
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1938
    pri = 0;
    return pri;
// lab_19B8
    OP_JUMP lab_1A68
}
// fun_1AA8
fun_1AA8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AE8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1920(var_40)
    pri = 0;
    return pri;
}
// fun_1B30
fun_1B30() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1B68
fun_1B68() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1B90
fun_1B90() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1BC0
fun_1BC0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1BF8
fun_1BF8() {
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
// switch_2210
        case default:
        {
// switch_2210_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_2258
// lab_2258
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
            OP_JNZ lab_2300
            var_88 = 0;
            pri = fun_25D0()
// lab_2300
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_2210_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1DF8
                case default:
                {
// switch_1DF8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1E70
// lab_1E70
                    OP_JUMP lab_2258
                }
                case 0x0:
                {
// switch_1DF8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1E70
                }
                case 0x1:
                {
// switch_1DF8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1E70
                }
                case 0x2:
                {
// switch_1DF8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1E70
                }
                case 0x3:
                {
// switch_1DF8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1E70
                }
                case 0x4:
                {
// switch_1DF8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1E70
                }
                case 0x5:
                {
// switch_1DF8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1E70
                }
            }
        }
        case 0x65:
        {
// switch_2210_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1FB0
                case default:
                {
// switch_1FB0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_2028
// lab_2028
                    OP_JUMP lab_2258
                }
                case 0x0:
                {
// switch_1FB0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_2028
                }
                case 0x1:
                {
// switch_1FB0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_2028
                }
                case 0x2:
                {
// switch_1FB0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_2028
                }
                case 0x3:
                {
// switch_1FB0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_2028
                }
                case 0x4:
                {
// switch_1FB0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_2028
                }
                case 0x5:
                {
// switch_1FB0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_2028
                }
            }
        }
        case 0x66:
        {
// switch_2210_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_2168
                case default:
                {
// switch_2168_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_21E0
// lab_21E0
                    OP_JUMP lab_2258
                }
                case 0x0:
                {
// switch_2168_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_21E0
                }
                case 0x1:
                {
// switch_2168_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_21E0
                }
                case 0x2:
                {
// switch_2168_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_21E0
                }
                case 0x3:
                {
// switch_2168_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_21E0
                }
                case 0x4:
                {
// switch_2168_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_21E0
                }
                case 0x5:
                {
// switch_2168_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_21E0
                }
            }
        }
    }
}
// fun_2318
fun_2318() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1BF8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2380
fun_2380() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0AB0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2428
    pri = 1;
    return pri;
// lab_2428
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2470
fun_2470() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_24C0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2380(var_8)
    arg_2 = pri;
// lab_24C0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1BF8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2520
fun_2520() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2318(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2570
fun_2570() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_2520(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_25D0
fun_25D0() {
    OP_JUMP lab_25E8
// lab_25E8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2628
    pri = 0;
    return pri;
// lab_2628
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_25E8
    pri = 0;
    return pri;
}
// fun_2668
fun_2668() {
    var_8 = 0;
    pri = fun_25D0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2718
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_2718
    pri = 0;
    return pri;
}
// fun_2728
fun_2728() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2758
fun_2758() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_2788
// lab_2788
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_27C8
    OP_JUMP lab_27F8
// lab_27C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2788
// lab_27F8
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2840
fun_2840() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = 0;
    var_40 = arg_0;
    pri = ListMenuStart_Seq(var_40, var_32, var_24, var_16, var_8)
    var_48 = 12;
    pri = TempWorkGet(var_48)
    return pri;
}
// fun_28B0
fun_28B0() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_28E8
fun_28E8() {
    OP_JUMP lab_2900
// lab_2900
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_2948
    OP_JUMP lab_2978
    OP_JUMP lab_2968
// lab_2948
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_2978
    pri = 0;
    return pri;
// lab_2968
    OP_JUMP lab_2900
}
// fun_2988
fun_2988() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_29B8
fun_29B8() {
    var_8 = 0;
    var_16 = 8;
    pri = fun_2A18(var_8)
    var_24 = 0;
    var_32 = 1;
    var_40 = 16;
    pri = fun_2BA8(var_32, var_24)
    pri = 0;
    return pri;
}
// fun_2A18
fun_2A18() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2A68
fun_2A68() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 3;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2AB8
fun_2AB8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2B08
fun_2B08() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2B58
fun_2B58() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2BA8
fun_2BA8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 25;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2BF8
fun_2BF8() {
    pri = arg_1;
    OP_JNZ lab_2C40
    var_8 = 648;
    pri = GetFnvHash64(var_8)
    arg_1 = pri;
// lab_2C40
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
// fun_2C98
fun_2C98() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2D10
fun_2D10() {
    var_8 = 0;
    pri = fun_2C98()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2D90
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2D90
    pri = 1;
    return pri;
// lab_2D90
    var_8 = 0;
    pri = fun_2C98()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2DD0
    pri = 1;
    return pri;
// lab_2DD0
    var_8 = 0;
    pri = fun_2C98()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2E00
fun_2E00() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    pri = 0;
    return pri;
}
// fun_2E50
fun_2E50() {
    OP_JUMP lab_2E68
// lab_2E68
    pri = EvCameraMoveWait_()
    OP_JZER lab_2EA0
    pri = 0;
    return pri;
// lab_2EA0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2E68
    pri = 0;
    return pri;
}
// fun_2EE0
fun_2EE0() {
    var_8 = arg_3;
    var_16 = 1;
    var_24 = -1;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 0;
    pri = StartBlur_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_3048()
    var_72 = arg_3;
    var_80 = arg_2;
    var_88 = -1;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = arg_5;
    var_120 = arg_4;
    pri = StartBlur_(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    pri = 0;
    return pri;
}
// fun_2FB0
fun_2FB0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = -1;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 0;
    pri = StartBlur_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_3048()
    pri = EndBlur_()
    pri = 0;
    return pri;
}
// fun_3048
fun_3048() {
    OP_JUMP lab_3060
// lab_3060
    pri = IsEasingRunningBlur_()
    OP_JZER lab_30B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_30C8
// lab_30B8
    pri = 0;
    return pri;
// lab_30C8
    OP_JUMP lab_3060
    pri = 0;
    return pri;
}
// fun_30E8
fun_30E8() {
    pri = arg_6;
    OP_JNZ lab_3120
    var_8 = 0;
    pri = fun_10E8()
// lab_3120
    pri = arg_1;
    switch (pri) {
// switch_4688
        case default:
        {
// switch_4688_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_49D8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_49D8
            pri = 1;
            OP_JUMP lab_49E0
// lab_49D8
            pri = 0;
// lab_49E0
            OP_JZER lab_4B38
            var_16 = 8328;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AB0(var_24, var_16)
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
            var_64 = 8432;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_4B98
// lab_4B38
            var_8 = 64;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
// lab_4B98
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4BF8
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4C58
// lab_4BF8
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4C58
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4C58
            pri = arg_2;
            OP_JZER lab_4C98
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4C98
            var_8 = 0;
            pri = fun_1128()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4688_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4688_case_default
        }
        case 0x1:
        {
// switch_4688_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4688_case_default
        }
        case 0x2:
        {
// switch_4688_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4688_case_default
        }
        case 0x3:
        {
// switch_4688_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4688_case_default
        }
        case 0x4:
        {
// switch_4688_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4688_case_default
        }
        case 0x5:
        {
// switch_4688_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5616;
            var_72 = 5608;
            var_80 = 5600;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4688_case_default
        }
        case 0x6:
        {
// switch_4688_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5640;
            var_72 = 5632;
            var_80 = 5624;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4688_case_default
        }
        case 0x7:
        {
// switch_4688_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5664;
            var_72 = 5656;
            var_80 = 5648;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4688_case_default
        }
        case 0x8:
        {
// switch_4688_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4688_case_default
        }
        case 0x9:
        {
// switch_4688_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5688;
            var_72 = 5680;
            var_80 = 5672;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4688_case_default
        }
        case 0xa:
        {
// switch_4688_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5712;
            var_72 = 5704;
            var_80 = 5696;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4688_case_default
        }
        case 0xb:
        {
// switch_4688_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5736;
            var_72 = 5728;
            var_80 = 5720;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4688_case_default
        }
        case 0xc:
        {
// switch_4688_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5760;
            var_72 = 5752;
            var_80 = 5744;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4688_case_default
        }
        case 0xd:
        {
// switch_4688_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5784;
            var_72 = 5776;
            var_80 = 5768;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4688_case_default
        }
        case 0xe:
        {
// switch_4688_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5808;
            var_72 = 5800;
            var_80 = 5792;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4688_case_default
        }
        case 0xf:
        {
// switch_4688_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4688_case_default
        }
        case 0x10:
        {
// switch_4688_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4688_case_default
        }
        case 0x11:
        {
// switch_4688_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5832;
            var_72 = 5824;
            var_80 = 5816;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4688_case_default
        }
        case 0x12:
        {
// switch_4688_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5856;
            var_72 = 5848;
            var_80 = 5840;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4688_case_default
        }
        case 0x13:
        {
// switch_4688_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4688_case_default
        }
        case 0x14:
        {
// switch_4688_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4688_case_default
        }
        case 0x15:
        {
// switch_4688_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4688_case_default
        }
        case 0x16:
        {
// switch_4688_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4688_case_default
        }
        case 0x17:
        {
// switch_4688_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4688_case_default
        }
        case 0x18:
        {
// switch_4688_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4688_case_default
        }
        case 0x19:
        {
// switch_4688_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5880;
            var_72 = 5872;
            var_80 = 5864;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4688_case_default
        }
        case 0x1a:
        {
// switch_4688_case_0x1a
            var_8 = 1;
            var_16 = 5888;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A70(var_24, var_16, var_8)
            var_40 = 6024;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A38(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6104;
            var_88 = 6096;
            var_96 = 6088;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0E48(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4688_case_default
        }
        case 0x1b:
        {
// switch_4688_case_0x1b
            var_8 = 3;
            var_16 = 6112;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A70(var_24, var_16, var_8)
            var_40 = 6248;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A38(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6328;
            var_88 = 6320;
            var_96 = 6312;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0E48(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4688_case_default
        }
        case 0x1c:
        {
// switch_4688_case_0x1c
            var_8 = 2;
            var_16 = 6336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A70(var_24, var_16, var_8)
            var_40 = 6472;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A38(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6552;
            var_88 = 6544;
            var_96 = 6536;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0E48(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4688_case_default
        }
        case 0x1d:
        {
// switch_4688_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6560;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4688_case_default
        }
        case 0x1e:
        {
// switch_4688_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6696;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4688_case_default
        }
        case 0x1f:
        {
// switch_4688_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6832;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4688_case_default
        }
        case 0x20:
        {
// switch_4688_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6968;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4688_case_default
        }
        case 0x21:
        {
// switch_4688_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7088;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4688_case_default
        }
        case 0x22:
        {
// switch_4688_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7208;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4688_case_default
        }
        case 0x23:
        {
// switch_4688_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7344;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4688_case_default
        }
        case 0x24:
        {
// switch_4688_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7480;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4688_case_default
        }
        case 0x25:
        {
// switch_4688_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7616;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4688_case_default
        }
        case 0x26:
        {
// switch_4688_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7752;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4688_case_default
        }
        case 0x27:
        {
// switch_4688_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7896;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4688_case_default
        }
        case 0x28:
        {
// switch_4688_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8040;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4688_case_default
        }
        case 0x29:
        {
// switch_4688_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8184;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4688_case_default
        }
    }
}
// fun_4CC8
fun_4CC8() {
    pri = arg_5;
    OP_JNZ lab_4D00
    var_8 = 0;
    pri = fun_10E8()
// lab_4D00
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4D50
    OP_CONST_S -8, -1
// lab_4D50
    pri = arg_1;
    switch (pri) {
// switch_6808
        case default:
        {
// switch_6808_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6CB0
            var_520 = 28192;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0AB0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6CB0
            pri = 1;
            OP_JUMP lab_6CB8
// lab_6CB0
            pri = 0;
// lab_6CB8
            OP_JZER lab_6D08
            var_8 = 64;
            var_16 = 28288;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_6F60
// lab_6D08
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6D70
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6D70
            pri = 1;
            OP_JUMP lab_6D78
// lab_6D70
            pri = 0;
// lab_6D78
            OP_JZER lab_6F00
            var_16 = 28464;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AB0(var_24, var_16)
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
            var_176 = 28568;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 28584;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 8448;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_6F60
// lab_6F00
            var_8 = 64;
            alt = 8448;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
// lab_6F60
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6FD0
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6FD0
            var_8 = 0;
            pri = fun_1128()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6808_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x1:
        {
// switch_6808_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x2:
        {
// switch_6808_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x3:
        {
// switch_6808_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x4:
        {
// switch_6808_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x5:
        {
// switch_6808_case_0x5
            var_8 = 2;
            var_16 = 18448;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A70(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0E10(var_40)
            OP_JUMP switch_6808_case_default
        }
        case 0x6:
        {
// switch_6808_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x7:
        {
// switch_6808_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x8:
        {
// switch_6808_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x9:
        {
// switch_6808_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0xa:
        {
// switch_6808_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0xb:
        {
// switch_6808_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0xc:
        {
// switch_6808_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0xd:
        {
// switch_6808_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19096;
            var_72 = 18920;
            var_80 = 18736;
            var_88 = 18544;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6808_case_default
        }
        case 0xe:
        {
// switch_6808_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19752;
            var_72 = 19544;
            var_80 = 19328;
            var_88 = 19104;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6808_case_default
        }
        case 0xf:
        {
// switch_6808_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20144;
            var_72 = 20024;
            var_80 = 19896;
            var_88 = 19760;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6808_case_default
        }
        case 0x10:
        {
// switch_6808_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20488;
            var_72 = 20384;
            var_80 = 20272;
            var_88 = 20152;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6808_case_default
        }
        case 0x11:
        {
// switch_6808_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20832;
            var_72 = 20728;
            var_80 = 20616;
            var_88 = 20496;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6808_case_default
        }
        case 0x12:
        {
// switch_6808_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x13:
        {
// switch_6808_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x14:
        {
// switch_6808_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21392;
            var_72 = 21216;
            var_80 = 21032;
            var_88 = 20840;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6808_case_default
        }
        case 0x15:
        {
// switch_6808_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x16:
        {
// switch_6808_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x17:
        {
// switch_6808_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x18:
        {
// switch_6808_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x19:
        {
// switch_6808_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x1a:
        {
// switch_6808_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x1b:
        {
// switch_6808_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x1c:
        {
// switch_6808_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 21784;
            var_72 = 21664;
            var_80 = 21536;
            var_88 = 21400;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6808_case_default
        }
        case 0x1d:
        {
// switch_6808_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x1e:
        {
// switch_6808_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 22248;
            var_72 = 22104;
            var_80 = 21952;
            var_88 = 21792;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6808_case_default
        }
        case 0x1f:
        {
// switch_6808_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x20:
        {
// switch_6808_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x21:
        {
// switch_6808_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x22:
        {
// switch_6808_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x23:
        {
// switch_6808_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x24:
        {
// switch_6808_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22616;
            var_72 = 22504;
            var_80 = 22384;
            var_88 = 22256;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6808_case_default
        }
        case 0x25:
        {
// switch_6808_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22984;
            var_72 = 22872;
            var_80 = 22752;
            var_88 = 22624;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6808_case_default
        }
        case 0x26:
        {
// switch_6808_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x27:
        {
// switch_6808_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x28:
        {
// switch_6808_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x29:
        {
// switch_6808_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23424;
            var_72 = 23288;
            var_80 = 23144;
            var_88 = 22992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6808_case_default
        }
        case 0x2a:
        {
// switch_6808_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23816;
            var_72 = 23696;
            var_80 = 23568;
            var_88 = 23432;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6808_case_default
        }
        case 0x2b:
        {
// switch_6808_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24232;
            var_72 = 24104;
            var_80 = 23968;
            var_88 = 23824;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6808_case_default
        }
        case 0x2c:
        {
// switch_6808_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24672;
            var_72 = 24536;
            var_80 = 24392;
            var_88 = 24240;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6808_case_default
        }
        case 0x2d:
        {
// switch_6808_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x2e:
        {
// switch_6808_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24992;
            var_72 = 24896;
            var_80 = 24792;
            var_88 = 24680;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6808_case_default
        }
        case 0x2f:
        {
// switch_6808_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25384;
            var_72 = 25264;
            var_80 = 25136;
            var_88 = 25000;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6808_case_default
        }
        case 0x30:
        {
// switch_6808_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25776;
            var_72 = 25656;
            var_80 = 25528;
            var_88 = 25392;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6808_case_default
        }
        case 0x31:
        {
// switch_6808_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x32:
        {
// switch_6808_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x33:
        {
// switch_6808_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26168;
            var_72 = 26048;
            var_80 = 25920;
            var_88 = 25784;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6808_case_default
        }
        case 0x34:
        {
// switch_6808_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26536;
            var_72 = 26424;
            var_80 = 26304;
            var_88 = 26176;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6808_case_default
        }
        case 0x35:
        {
// switch_6808_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27024;
            var_72 = 26872;
            var_80 = 26712;
            var_88 = 26544;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6808_case_default
        }
        case 0x36:
        {
// switch_6808_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27392;
            var_72 = 27280;
            var_80 = 27160;
            var_88 = 27032;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6808_case_default
        }
        case 0x37:
        {
// switch_6808_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x38:
        {
// switch_6808_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27760;
            var_72 = 27648;
            var_80 = 27528;
            var_88 = 27400;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6808_case_default
        }
        case 0x39:
        {
// switch_6808_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x3a:
        {
// switch_6808_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x3b:
        {
// switch_6808_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x3c:
        {
// switch_6808_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27768;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x3d:
        {
// switch_6808_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27944;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
        case 0x3e:
        {
// switch_6808_case_0x3e
            var_8 = 4;
            var_16 = 28088;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A70(var_24, var_16, var_8)
            OP_JUMP switch_6808_case_default
        }
    }
}
// fun_7000
fun_7000() {
    pri = arg_4;
    OP_JNZ lab_7038
    var_8 = 0;
    pri = fun_10E8()
// lab_7038
    pri = arg_1;
    switch (pri) {
// switch_8410
        case default:
        {
// switch_8410_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29160;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_18C0(var_264)
            OP_JZER lab_89D8
            pri = arg_3;
            switch (pri) {
// switch_8980
                case default:
                {
// switch_8980_case_default
                    OP_JUMP lab_8C90
// lab_8C90
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8D00
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8D00
                    var_8 = 0;
                    pri = fun_1128()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_8980_case_0x1
                    var_8 = 32;
                    var_16 = 29312;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_8980_case_default
                }
                case 0x2:
                {
// switch_8980_case_0x2
                    var_8 = 32;
                    var_16 = 29416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_8980_case_default
                }
                case 0x3:
                {
// switch_8980_case_0x3
                    var_8 = 32;
                    var_16 = 29216;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_8980_case_default
                }
            }
// lab_89D8
            pri = arg_1;
            OP_JZER lab_8A28
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_8A28
            pri = 0;
            OP_JUMP lab_8A30
// lab_8A28
            pri = 1;
// lab_8A30
            OP_JZER lab_8A98
            var_8 = 29512;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0AB0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_8A98
            pri = 1;
            OP_JUMP lab_8AA0
// lab_8A98
            pri = 0;
// lab_8AA0
            OP_JZER lab_8AF0
            var_8 = 32;
            var_16 = 29608;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_8C90
// lab_8AF0
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8B58
            var_8 = 32;
            var_16 = 29768;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_8C90
// lab_8B58
            var_16 = 29888;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AB0(var_24, var_16)
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
            var_176 = 29992;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 30008;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_8410_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x1:
        {
// switch_8410_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x2:
        {
// switch_8410_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x3:
        {
// switch_8410_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x4:
        {
// switch_8410_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x5:
        {
// switch_8410_case_0x5
            var_8 = 1;
            var_16 = 28640;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A70(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0E10(var_40)
            OP_JUMP switch_8410_case_default
        }
        case 0x6:
        {
// switch_8410_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x7:
        {
// switch_8410_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x8:
        {
// switch_8410_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x9:
        {
// switch_8410_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0xa:
        {
// switch_8410_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0xb:
        {
// switch_8410_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0xc:
        {
// switch_8410_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0xd:
        {
// switch_8410_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0xe:
        {
// switch_8410_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0xf:
        {
// switch_8410_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x10:
        {
// switch_8410_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x11:
        {
// switch_8410_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x12:
        {
// switch_8410_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x13:
        {
// switch_8410_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x14:
        {
// switch_8410_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x15:
        {
// switch_8410_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x16:
        {
// switch_8410_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x17:
        {
// switch_8410_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x18:
        {
// switch_8410_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x19:
        {
// switch_8410_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x1a:
        {
// switch_8410_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x1b:
        {
// switch_8410_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x1c:
        {
// switch_8410_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x1d:
        {
// switch_8410_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x1e:
        {
// switch_8410_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x1f:
        {
// switch_8410_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x20:
        {
// switch_8410_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x21:
        {
// switch_8410_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x22:
        {
// switch_8410_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x23:
        {
// switch_8410_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x24:
        {
// switch_8410_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x25:
        {
// switch_8410_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x26:
        {
// switch_8410_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x27:
        {
// switch_8410_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x28:
        {
// switch_8410_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x29:
        {
// switch_8410_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x2a:
        {
// switch_8410_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x2b:
        {
// switch_8410_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x2c:
        {
// switch_8410_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x2d:
        {
// switch_8410_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x2e:
        {
// switch_8410_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x2f:
        {
// switch_8410_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x30:
        {
// switch_8410_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x31:
        {
// switch_8410_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x32:
        {
// switch_8410_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x33:
        {
// switch_8410_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x34:
        {
// switch_8410_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x35:
        {
// switch_8410_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x36:
        {
// switch_8410_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x37:
        {
// switch_8410_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x38:
        {
// switch_8410_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x39:
        {
// switch_8410_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x3a:
        {
// switch_8410_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x3b:
        {
// switch_8410_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x3c:
        {
// switch_8410_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28736;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x3d:
        {
// switch_8410_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28912;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
        case 0x3e:
        {
// switch_8410_case_0x3e
            var_8 = 3;
            var_16 = 29056;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A70(var_24, var_16, var_8)
            OP_JUMP switch_8410_case_default
        }
    }
}
// fun_8D30
fun_8D30() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8F40(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 30056;
    OP_ADDR_ALT -256
    OP_MOVS 56
    pri = 0;
    OP_ADDR_ALT -384
    OP_FILL 128
    OP_PUSH_P_ADR -384
    pri = arg_1;
    OP_ADD_P_C 1
    var_416 = pri;
    pri = NumericToString(var_416, var_408)
    OP_PUSH_P_ADR -384
    OP_PUSH_P_ADR -384
    var_424 = 30112;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 30128;
    OP_PUSH_P_ADR -384
    pri = ConcatString(var_432, var_424, var_416)
    OP_PUSH_P_ADR -256
    OP_PUSH_P_ADR -384
    OP_PUSH_P_ADR -256
    pri = ConcatString(var_432, var_424, var_416)
    var_440 = 0;
    OP_PUSH_P_ADR -256
    var_448 = arg_0;
    pri = AddParallelCommandMonitorState_(var_448, var_440, var_432)
    pri = arg_2;
    OP_JZER lab_8F28
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_8F28
    pri = 0;
    return pri;
}
// fun_8F40
fun_8F40() {
    var_8 = arg_1;
    var_16 = 30176;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0A70(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8F88
fun_8F88() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_9088
        case default:
        {
// switch_9088_case_default
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
// switch_9088_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_9088_case_default
        }
        case 0x1:
        {
// switch_9088_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_9088_case_default
        }
        case 0x2:
        {
// switch_9088_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_9088_case_default
        }
        case 0x3:
        {
// switch_9088_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_9088_case_default
        }
    }
}
// fun_9148
fun_9148() {
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
    pri = fun_2470(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_25D0()
    pri = 0;
    return pri;
}
// fun_91E0
fun_91E0() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8F88(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_9148(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_9288
fun_9288() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_92D8
// lab_92D8
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30280;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_9350
    OP_JUMP lab_9380
// lab_9350
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_92D8
// lab_9380
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_9408
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_7000(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1B90(var_56)
// lab_9408
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_9470
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1690(var_24, var_16)
// lab_9470
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1690(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_9530
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0AE8(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0868(var_88, var_80, var_72, var_64, var_56)
// lab_9530
    pri = IsPlayerRideBicycle()
    OP_JZER lab_9570
    pri = 0;
    return pri;
// lab_9570
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_96B8
    var_16 = 1;
    var_24 = 8;
    pri = fun_0090(var_16)
    var_32 = 30400;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0A38(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_9680
    var_72 = 12;
    var_80 = 8;
    pri = fun_0090(var_72)
// lab_96B8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0910(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0910(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0AE8(var_40)
    pri = 0;
    return pri;
// lab_9680
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1690(var_16, var_8)
}
// fun_9740
fun_9740() {
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
    pri = fun_91E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_2668(var_112)
    var_128 = 0;
    pri = fun_2728()
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
    pri = fun_9288(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_98B8
fun_98B8() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_9950
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0AE8(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_30E8(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_9950
    var_8 = 8;
    var_16 = 8;
    pri = fun_0090(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_9AA8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_9A10
    var_24 = 30536;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_9A10
    pri = 1;
    OP_JUMP lab_9A18
// lab_9AA8
    pri = 0;
    return pri;
// lab_9A10
    pri = 0;
// lab_9A18
    OP_JZER lab_9AA8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AE8(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_30E8(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_9AB8
fun_9AB8() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_98B8(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_9B40(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_9B40
fun_9B40() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_9CD8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9BA8
fun_9BA8() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_9C18
    OP_CONST_S -8, 1
// lab_9C18
    pri = arg_0;
    OP_JNZ lab_9C38
    OP_ZERO_P_S -8
// lab_9C38
    pri = var_8;
    OP_JZER lab_9CC0
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0090(var_16)
    var_32 = 0;
    pri = fun_0168()
    pri = ItemCloseDescWindow()
// lab_9CC0
    pri = 0;
    return pri;
}
// fun_9CD8
fun_9CD8() {
    var_8 = 30640;
    var_16 = 8;
    pri = fun_28B0(var_8)
    var_24 = 0;
    pri = fun_28E8()
    pri = arg_3;
    OP_JNZ lab_9DF8
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_9DC0
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_9E68(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_9DE8
// lab_9DF8
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_A008(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_9DC0
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_9F30(var_16, var_8)
// lab_9DE8
    OP_JUMP lab_9E40
// lab_9E40
    var_8 = 0;
    pri = fun_2988()
    pri = 0;
    return pri;
}
// fun_9E68
fun_9E68() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_A008(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_9F18
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_9F18
    pri = 0;
    return pri;
}
// fun_9F30
fun_9F30() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_2AB8(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_2570(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_2668(var_72)
    var_88 = 0;
    pri = fun_2728()
    var_96 = 0;
    var_104 = 8;
    pri = fun_2A18(var_96)
    pri = 0;
    return pri;
}
// fun_A008
fun_A008() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_A050
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_A310(var_8)
// lab_A050
    pri = arg_4;
    OP_JNZ lab_A0B8
    var_8 = 0;
    var_16 = 8;
    pri = fun_2A18(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2AB8(var_40, var_32, var_24)
// lab_A0B8
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_A158
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_2B08(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_2570(var_56, var_48, var_40)
    OP_JUMP lab_A248
// lab_A158
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_A210
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_A210
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_A210
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_2570(var_24, var_16, var_8)
// lab_A248
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_A288
    var_8 = 0;
    var_16 = 8;
    pri = fun_0460(var_8)
// lab_A288
    var_8 = 1;
    var_16 = 8;
    pri = fun_2668(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_A518(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_9BA8(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_A310
fun_A310() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_A370
    var_16 = 30800;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_A370
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_A4B0
        case default:
        {
// switch_A4B0_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_A4A0
            var_16 = 31344;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_A4A0
            OP_JUMP lab_A4E8
// lab_A4E8
            var_8 = 31560;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_A4B0_case_0x1
            var_8 = 31016;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_A4E8
        }
        case 0x2:
        {
// switch_A4B0_case_0x2
            var_8 = 31144;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_A4E8
        }
    }
}
// fun_A518
fun_A518() {
    pri = arg_2;
    OP_JNZ lab_A600
    var_8 = 0;
    var_16 = 8;
    pri = fun_2A18(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2AB8(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_2B58(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_A600
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_2570(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_2668(var_40)
    var_56 = 0;
    pri = fun_2728()
    pri = 0;
    return pri;
}
// fun_A678
fun_A678() {
    pri = 31744;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_A700
// lab_A700
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_A880
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_A870
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_A7C0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_A7C0
    pri = 0;
    OP_JUMP lab_A7C8
// lab_A880
    pri = 0;
    return pri;
// lab_A870
    OP_JUMP lab_A6F8
// lab_A6F8
    OP_INC_P_S -936
// lab_A7C0
    pri = 1;
// lab_A7C8
    OP_JZER lab_A840
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_A838
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_A840
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_A838
}
// fun_A8A0
fun_A8A0() {
    var_8 = -4562270413023387603;
    pri = WorkGet(var_8)
    return pri;
}
// fun_A8D8
fun_A8D8() {
    var_8 = 0;
    pri = fun_A8A0()
    switch (pri) {
// switch_A988
        case default:
        {
// switch_A988_case_default
            pri = arg_1;
            return pri;
            OP_JUMP lab_A9D0
// lab_A9D0
            pri = arg_1;
            return pri;
        }
        case 0x0:
        {
// switch_A988_case_0x0
            pri = arg_0;
            return pri;
            OP_JUMP lab_A9D0
        }
        case 0x1:
        {
// switch_A988_case_0x1
            pri = arg_1;
            return pri;
            OP_JUMP lab_A9D0
        }
        case 0x2:
        {
// switch_A988_case_0x2
            pri = arg_2;
            return pri;
            OP_JUMP lab_A9D0
        }
    }
}
// fun_A9E0
fun_A9E0() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_AA28
    pri = arg_0;
    return pri;
// lab_AA28
    pri = arg_1;
    return pri;
}
// fun_AA38
fun_AA38() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_AAD0
    var_8 = 1;
    var_16 = 0;
    var_24 = 32664;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0338(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03A8()
    var_56 = 0;
    pri = fun_1B68()
// lab_AAD0
    pri = arg_4;
    OP_JZER lab_AB08
    var_8 = 1;
    var_16 = 8;
    pri = fun_1BC0(var_8)
// lab_AB08
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_AB60
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_AB60
    pri = 0;
    OP_JUMP lab_AB68
// lab_AB60
    pri = 1;
// lab_AB68
    OP_JZER lab_AC30
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_AC30
    var_16 = 0;
    pri = fun_0438()
    OP_JZER lab_AC08
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1AA8(var_32, var_24)
    OP_JUMP lab_AC30
// lab_AC30
    pri = arg_2;
    OP_JZER lab_AD08
    var_8 = 0;
    pri = fun_0438()
    OP_JZER lab_ACD8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1690(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0770(var_40)
    OP_JUMP lab_AD08
// lab_AD08
    pri = arg_3;
    OP_JZER lab_AD40
    var_8 = 1;
    var_16 = 8;
    pri = fun_1B30(var_8)
// lab_AD40
    pri = 0;
    return pri;
// lab_ACD8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1690(var_16, var_8)
// lab_AC08
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1AA8(var_16, var_8)
}
// fun_AD50
fun_AD50() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_A678(var_24)
    pri = 0;
    return pri;
}
// fun_ADB8
fun_ADB8() {
    pri = g_mode;
    switch (pri) {
// switch_AEF0
        case default:
        {
// switch_AEF0_case_default
            pri = CommandNOP()
            OP_JUMP lab_AF68
// lab_AF68
            pri = 0;
            return pri;
        }
        case 0xa03f4d3a601de7ae:
        {
// switch_AEF0_case_0xa03f4d3a601de7ae
            var_8 = 0;
            pri = fun_E608()
            OP_JUMP lab_AF68
        }
        case 0xcc504988a9c9b552:
        {
// switch_AEF0_case_0xcc504988a9c9b552
            var_8 = 0;
            pri = fun_ED00()
            OP_JUMP lab_AF68
        }
        case 0x0:
        {
// switch_AEF0_case_0x0
            var_8 = 0;
            pri = fun_AF78()
            OP_JUMP lab_AF68
        }
        case 0x16a6ff17fcfc6e68:
        {
// switch_AEF0_case_0x16a6ff17fcfc6e68
            var_8 = 0;
            pri = fun_E5C0()
            OP_JUMP lab_AF68
        }
        case 0x256a908ab2eacbfb:
        {
// switch_AEF0_case_0x256a908ab2eacbfb
            var_8 = 0;
            pri = fun_EC28()
            OP_JUMP lab_AF68
        }
        case 0x3406691b86f146f4:
        {
// switch_AEF0_case_0x3406691b86f146f4
            var_8 = 0;
            pri = fun_E4D0()
            OP_JUMP lab_AF68
        }
    }
}
// fun_AF78
fun_AF78() {
    pri = 0;
    return pri;
}
// fun_AF90
fun_AF90() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_AA38(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_AFE8
fun_AFE8() {
    var_8 = 8868142065411558194;
    var_16 = 8;
    pri = fun_0570(var_8)
    pri = 0;
    return pri;
}
// fun_B028
fun_B028() {
    var_8 = 0;
    pri = fun_05A0()
    pri = 0;
    return pri;
}
// fun_B058
fun_B058() {
    var_8 = 0;
    var_16 = 4631952216750555136;
    var_24 = 0;
    OP_PUSH5_C 4659855952693742797, -4590247476826220790, 4657925694060484362, 4661326846364032696, 4638978535856694886
    var_32 = 4658920774073854198;
    var_40 = 1;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 0;
    pri = fun_2E50()
    var_56 = 1;
    var_64 = 8;
    pri = fun_0090(var_56)
    var_72 = 0;
    pri = fun_29B8()
    var_80 = 8;
    var_88 = -3181508942575245480;
    var_96 = 16;
    pri = fun_1710(var_88, var_80)
    var_104 = 32712;
    var_112 = 8;
    var_120 = 16;
    pri = fun_02D8(var_112, var_104)
    var_128 = 0;
    pri = fun_03A8()
    var_136 = 1;
    var_144 = -1;
    var_152 = -1;
    var_160 = 3;
    var_168 = 0;
    var_176 = 1;
    var_184 = -3181508942575245480;
    var_192 = 56;
    pri = fun_30E8(var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_200 = 0;
    var_208 = 3;
    var_216 = 0;
    var_224 = 100;
    var_232 = -1;
    OP_PUSH2_C 2637065912791186164, -3181508942575245480
    var_240 = 56;
    pri = fun_2470(var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_248 = -3181508942575245480;
    var_256 = 8;
    pri = fun_0AE8(var_248)
    var_264 = 1;
    var_272 = 8;
    pri = fun_2668(var_264)
    var_280 = 0;
    pri = fun_2728()
    var_288 = 0;
    var_296 = 4631952216750555136;
    var_304 = 3;
    OP_PUSH5_C 4660473768277390131, -4590619023795478856, 4657619721964706857, 4661319985411475374, 4638194628046555709
    var_312 = 4659234728624049357;
    var_320 = 70;
    pri = EvCameraMove(var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248)
    var_328 = -3181508942575245480;
    var_336 = 8;
    pri = fun_1750(var_328)
    var_344 = 1;
    var_352 = 1;
    var_360 = 30;
    OP_PUSH2_C 8868142065411558194, -3181508942575245480
    var_368 = 40;
    pri = fun_1168(var_360, var_352, var_344, var_336, var_328)
    var_376 = 1;
    var_384 = 1;
    var_392 = 30;
    OP_PUSH2_C 8868142065411558194, 8802641224559852288
    var_400 = 40;
    pri = fun_1168(var_392, var_384, var_376, var_368, var_360)
    var_408 = 1;
    var_416 = 0;
    OP_PUSH5_C 4641240890982006784, -3181508942575245480, 4661073881723830272, 4658556000096223232, 4607182418800017408
    var_424 = 8868142065411558194;
    var_432 = 64;
    pri = fun_07A8(var_424, var_416, var_408, var_400, var_392, var_384, var_376, var_368)
    var_440 = 0;
    var_448 = 3;
    var_456 = 0;
    var_464 = 100;
    var_472 = -1;
    OP_PUSH2_C 6456764982269649408, 8868142065411558194
    var_480 = 56;
    pri = fun_2470(var_472, var_464, var_456, var_448, var_440, var_432, var_424)
    var_488 = 8868142065411558194;
    var_496 = 8;
    pri = fun_0910(var_488)
    var_504 = 1;
    var_512 = 8;
    pri = fun_2668(var_504)
    var_520 = 0;
    pri = fun_2728()
    var_528 = 0;
    var_536 = 0;
    var_544 = 0;
    var_552 = 0;
    OP_PUSH2_C 8868142065411558194, -3181508942575245480
    var_560 = 48;
    pri = fun_08B8(var_552, var_544, var_536, var_528, var_520, var_512)
    var_568 = 0;
    var_576 = 0;
    var_584 = 0;
    var_592 = 0;
    OP_PUSH2_C 8868142065411558194, 8802641224559852288
    var_600 = 48;
    pri = fun_08B8(var_592, var_584, var_576, var_568, var_560, var_552)
    var_608 = 0;
    var_616 = 3;
    var_624 = 0;
    var_632 = 100;
    var_640 = -1;
    OP_PUSH2_C 2637067012302814375, -3181508942575245480
    var_648 = 56;
    pri = fun_2470(var_640, var_632, var_624, var_616, var_608, var_600, var_592)
    var_656 = -3181508942575245480;
    var_664 = 8;
    pri = fun_0910(var_656)
    var_672 = 8802641224559852288;
    var_680 = 8;
    pri = fun_0910(var_672)
    var_688 = 1;
    var_696 = 8;
    pri = fun_2668(var_688)
    var_704 = 0;
    pri = fun_2728()
    var_712 = 1;
    pri = SetCascadeShadowMapLevel(var_712)
    var_720 = 5;
    var_728 = 8868142065411558194;
    var_736 = 16;
    pri = fun_1710(var_728, var_720)
    var_744 = 0;
    var_752 = 4631952216750555136;
    var_760 = 0;
    OP_PUSH5_C 4660143167121150444, -4601192631295614648, 4657120653636859331, 4661173871311260221, 4639504542219422925
    var_768 = 4658686512126440243;
    var_776 = 1;
    pri = EvCameraMove(var_776, var_768, var_760, var_752, var_744, var_736, var_728, var_720, var_712, var_704)
    var_784 = 0;
    pri = fun_2E50()
    var_792 = -1;
    var_800 = 8802641224559852288;
    var_808 = 16;
    pri = fun_1690(var_800, var_792)
    var_816 = 0;
    var_824 = 0;
    var_832 = 0;
    var_840 = 0;
    OP_PUSH2_C 8868142065411558194, 8802641224559852288
    var_848 = 48;
    pri = fun_08B8(var_840, var_832, var_824, var_816, var_808, var_800)
    var_856 = 0;
    var_864 = 0;
    var_872 = 0;
    var_880 = 0;
    OP_PUSH2_C 8868142065411558194, -3181508942575245480
    var_888 = 48;
    pri = fun_08B8(var_880, var_872, var_864, var_856, var_848, var_840)
    var_896 = 0;
    var_904 = 0;
    var_912 = 0;
    var_920 = 0;
    OP_PUSH2_C 8802641224559852288, 8868142065411558194
    var_928 = 48;
    pri = fun_08B8(var_920, var_912, var_904, var_896, var_888, var_880)
    var_936 = 0;
    var_944 = 3;
    var_952 = 0;
    var_960 = 100;
    var_968 = -1;
    OP_PUSH2_C 6456770479827790463, 8868142065411558194
    var_976 = 56;
    pri = fun_2470(var_968, var_960, var_952, var_944, var_936, var_928, var_920)
    var_984 = 8868142065411558194;
    var_992 = 8;
    pri = fun_0910(var_984)
    var_1000 = 8802641224559852288;
    var_1008 = 8;
    pri = fun_0910(var_1000)
    var_1016 = -3181508942575245480;
    var_1024 = 8;
    pri = fun_0910(var_1016)
    var_1032 = 1;
    var_1040 = 8;
    pri = fun_2668(var_1032)
    var_1048 = 0;
    var_1056 = 8764403631264059527;
    var_1064 = 0;
    var_1072 = 24;
    pri = fun_2758(var_1064, var_1056, var_1048)
    var_1080 = 0;
    var_1088 = 8764400332729174894;
    var_1096 = 1;
    var_1104 = 24;
    pri = fun_2758(var_1096, var_1088, var_1080)
    var_1120 = 0;
    var_1128 = 0;
    var_1136 = 0;
    var_1144 = 1;
    var_1152 = 32;
    pri = fun_2840(var_1144, var_1136, var_1128, var_1120)
    var_8 = pri;
    var_1160 = 0;
    var_1168 = 4630207071894949069;
    var_1176 = 0;
    OP_PUSH5_C 4661264339127993631, 4633852172843352064, 4657313134142417797, 4661189990151723418, 4638840261274385777
    var_1184 = 4659104700378948567;
    var_1192 = 1;
    pri = EvCameraMove(var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136, var_1128, var_1120)
    pri = var_8;
    switch (pri) {
// switch_BD90
        case default:
        {
// switch_BD90_case_default
            var_8 = 0;
            var_16 = 4631952216750555136;
            var_24 = 3;
            OP_PUSH5_C 4660642081517370081, 4627704759351991337, 4657358258099621724, 4661253190080087982, 4636899843153686692
            var_32 = 4659148021137082941;
            var_40 = 25;
            pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
            var_48 = 15;
            var_56 = 8;
            pri = fun_0090(var_48)
            var_64 = 1;
            var_72 = 1;
            var_80 = -1;
            var_88 = -1;
            var_96 = 0;
            var_104 = 1;
            var_112 = -3181508942575245480;
            var_120 = 56;
            pri = fun_4CC8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            var_128 = 0;
            var_136 = 3;
            var_144 = 0;
            var_152 = 100;
            var_160 = -1;
            OP_PUSH2_C 2637068111814442586, -3181508942575245480
            var_168 = 56;
            pri = fun_2470(var_160, var_152, var_144, var_136, var_128, var_120, var_112)
            var_176 = 1;
            var_184 = 8;
            pri = fun_2668(var_176)
            var_192 = 0;
            pri = fun_2728()
            var_200 = 0;
            var_208 = 1;
            var_216 = 70;
            var_224 = 7;
            var_232 = 8868142065411558194;
            var_240 = 40;
            pri = fun_1220(var_232, var_224, var_216, var_208, var_200)
            var_248 = 0;
            var_256 = 0;
            var_264 = 0;
            OP_PUSH2_C 4635351027094336307, 8868142065411558194
            var_272 = 40;
            pri = fun_0868(var_264, var_256, var_248, var_240, var_232)
            var_280 = 7;
            var_288 = 8868142065411558194;
            var_296 = 16;
            pri = fun_1710(var_288, var_280)
            var_304 = 1;
            var_312 = 3;
            var_320 = 0;
            var_328 = 1;
            var_336 = -3181508942575245480;
            var_344 = 40;
            pri = fun_7000(var_336, var_328, var_320, var_312, var_304)
            var_352 = 0;
            var_360 = 3;
            var_368 = 0;
            var_376 = 100;
            var_384 = -1;
            OP_PUSH2_C 6456771579339418674, 8868142065411558194
            var_392 = 56;
            pri = fun_2470(var_384, var_376, var_368, var_360, var_352, var_344, var_336)
            var_400 = -3181508942575245480;
            var_408 = 8;
            pri = fun_0AE8(var_400)
            var_416 = 8868142065411558194;
            var_424 = 8;
            pri = fun_0910(var_416)
            var_432 = 1;
            var_440 = 8;
            pri = fun_2668(var_432)
            var_448 = 0;
            pri = fun_2728()
            var_456 = 32760;
            pri = SoundPostEvent(var_456)
            var_464 = -1;
            var_472 = 8868142065411558194;
            var_480 = 16;
            pri = fun_1690(var_472, var_464)
            var_488 = 5;
            var_496 = 8;
            var_504 = 8868142065411558194;
            var_512 = 24;
            pri = fun_1800(var_504, var_496, var_488)
            var_520 = 0;
            var_528 = 2;
            var_536 = 8868142065411558194;
            var_544 = 24;
            pri = fun_8D30(var_536, var_528, var_520)
            var_552 = 15;
            var_560 = 8868142065411558194;
            var_568 = 16;
            pri = fun_16D0(var_560, var_552)
            var_576 = 0;
            var_584 = 0;
            var_592 = 3;
            var_600 = 10;
            OP_PUSH2_C 4600877379321698714, 4596373779694328218
            var_608 = 48;
            pri = fun_2EE0(var_600, var_592, var_584, var_576, var_568, var_560)
            var_616 = 0;
            var_624 = 4631952216750555136;
            var_632 = 24;
            OP_PUSH5_C 4660641641712718971, 4635158920422731284, 4657347416914971853, 4661143392848938271, 4639072829973892956
            var_640 = 4658755671407827354;
            var_648 = 15;
            pri = EvCameraMove(var_648, var_640, var_632, var_624, var_616, var_608, var_600, var_592, var_584, var_576)
            var_656 = 0;
            pri = fun_3048()
            var_664 = 3;
            var_672 = 10;
            var_680 = 16;
            pri = fun_2FB0(var_672, var_664)
            var_688 = 0;
            var_696 = 3;
            var_704 = 0;
            var_712 = 100;
            var_720 = -1;
            OP_PUSH2_C 6456774877874303307, 8868142065411558194
            var_728 = 56;
            pri = fun_2470(var_720, var_712, var_704, var_696, var_688, var_680, var_672)
            var_736 = 8868142065411558194;
            var_744 = 8;
            pri = fun_0AE8(var_736)
            var_752 = 1;
            var_760 = 8;
            pri = fun_2668(var_752)
            var_768 = 0;
            pri = fun_2728()
            var_776 = 0;
            var_784 = 4631952216750555136;
            var_792 = 3;
            OP_PUSH5_C 4660642081517370081, 4627704759351991337, 4657358258099621724, 4661253190080087982, 4636899843153686692
            var_800 = 4659148021137082941;
            var_808 = 40;
            pri = EvCameraMove(var_808, var_800, var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736)
            var_816 = 10;
            var_824 = 8;
            pri = fun_0090(var_816)
            var_832 = 4;
            var_840 = 4;
            var_848 = -3181508942575245480;
            var_856 = 24;
            pri = fun_1800(var_848, var_840, var_832)
            var_864 = 1;
            var_872 = 1;
            var_880 = -1;
            var_888 = -1;
            var_896 = 0;
            var_904 = 22;
            var_912 = -3181508942575245480;
            var_920 = 56;
            pri = fun_4CC8(var_912, var_904, var_896, var_888, var_880, var_872, var_864)
            var_928 = 0;
            var_936 = 3;
            var_944 = 0;
            var_952 = 100;
            var_960 = -1;
            OP_PUSH2_C 2637069211326070797, -3181508942575245480
            var_968 = 56;
            pri = fun_2470(var_960, var_952, var_944, var_936, var_928, var_920, var_912)
            var_976 = 1;
            var_984 = 8;
            pri = fun_2668(var_976)
            var_992 = 0;
            pri = fun_2728()
            var_1000 = 0;
            var_1008 = 0;
            var_1016 = 8868142065411558194;
            var_1024 = 24;
            pri = fun_8D30(var_1016, var_1008, var_1000)
            var_1032 = 8868142065411558194;
            var_1040 = 8;
            pri = fun_1868(var_1032)
            var_1048 = -3181508942575245480;
            var_1056 = 8;
            pri = fun_1868(var_1048)
            var_1064 = 0;
            var_1072 = 1;
            var_1080 = 70;
            OP_PUSH2_C -3181508942575245480, 8868142065411558194
            var_1088 = 40;
            pri = fun_1168(var_1080, var_1072, var_1064, var_1056, var_1048)
            var_1096 = 32920;
            var_1104 = -3181508942575245480;
            var_1112 = 16;
            pri = fun_0CE8(var_1104, var_1096)
            var_1120 = 1;
            var_1128 = 3;
            var_1136 = 0;
            var_1144 = 22;
            var_1152 = -3181508942575245480;
            var_1160 = 40;
            pri = fun_7000(var_1152, var_1144, var_1136, var_1128, var_1120)
            var_1168 = 0;
            var_1176 = 3;
            var_1184 = 0;
            var_1192 = 100;
            var_1200 = -1;
            OP_PUSH2_C 6456773778362675096, 8868142065411558194
            var_1208 = 56;
            pri = fun_2470(var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152)
            var_1216 = -3181508942575245480;
            var_1224 = 8;
            pri = fun_0AE8(var_1216)
            var_1232 = 1;
            var_1240 = 8;
            pri = fun_2668(var_1232)
            var_1248 = 0;
            pri = fun_2728()
            var_1256 = 0;
            var_1264 = 1;
            var_1272 = 30;
            OP_PUSH2_C 8802641224559852288, 8868142065411558194
            var_1280 = 40;
            pri = fun_1168(var_1272, var_1264, var_1256, var_1248, var_1240)
            var_1288 = 0;
            var_1296 = 3;
            var_1304 = 0;
            var_1312 = 100;
            var_1320 = -1;
            OP_PUSH2_C 6455809506664923274, 8868142065411558194
            var_1328 = 56;
            pri = fun_2470(var_1320, var_1312, var_1304, var_1296, var_1288, var_1280, var_1272)
            var_1336 = 1;
            var_1344 = 8;
            pri = fun_2668(var_1336)
            var_1352 = 0;
            pri = fun_2728()
            var_1360 = 5;
            var_1368 = 8868142065411558194;
            var_1376 = 16;
            pri = fun_1710(var_1368, var_1360)
            var_1384 = 1;
            var_1392 = 1;
            var_1400 = -1;
            var_1408 = -1;
            var_1416 = 0;
            var_1424 = 8;
            var_1432 = 8868142065411558194;
            var_1440 = 56;
            pri = fun_4CC8(var_1432, var_1424, var_1416, var_1408, var_1400, var_1392, var_1384)
            var_1448 = 0;
            var_1456 = 3;
            var_1464 = 0;
            var_1472 = 100;
            var_1480 = -1;
            OP_PUSH2_C 6455810606176551485, 8868142065411558194
            var_1488 = 56;
            pri = fun_2470(var_1480, var_1472, var_1464, var_1456, var_1448, var_1440, var_1432)
            var_1496 = 1;
            var_1504 = 8;
            pri = fun_2668(var_1496)
            var_1512 = 0;
            pri = fun_2728()
            var_1520 = 8868142065411558194;
            var_1528 = 8;
            pri = fun_1750(var_1520)
            var_1536 = 1;
            var_1544 = 3;
            var_1552 = 0;
            var_1560 = 8;
            var_1568 = 8868142065411558194;
            var_1576 = 40;
            pri = fun_7000(var_1568, var_1560, var_1552, var_1544, var_1536)
            var_1584 = 8868142065411558194;
            var_1592 = 8;
            pri = fun_0AE8(var_1584)
            var_1600 = 0;
            var_1608 = 0;
            var_1616 = 0;
            var_1624 = 0;
            OP_PUSH2_C 8802641224559852288, 8868142065411558194
            var_1632 = 48;
            pri = fun_08B8(var_1624, var_1616, var_1608, var_1600, var_1592, var_1584)
            var_1640 = 0;
            var_1648 = 3;
            var_1656 = 0;
            var_1664 = 100;
            var_1672 = -1;
            OP_PUSH2_C 6455807307641666852, 8868142065411558194
            var_1680 = 56;
            pri = fun_2470(var_1672, var_1664, var_1656, var_1648, var_1640, var_1632, var_1624)
            var_1688 = 8868142065411558194;
            var_1696 = 8;
            pri = fun_0910(var_1688)
            var_1704 = 1;
            var_1712 = 8;
            pri = fun_2668(var_1704)
            var_1720 = 0;
            pri = fun_2728()
            var_1728 = 6;
            var_1736 = 4;
            var_1744 = 2;
            var_1752 = 1;
            var_1760 = 9;
            var_1768 = 1;
            var_1776 = 1271;
            var_1784 = 8868142065411558194;
            var_1792 = 64;
            pri = fun_9AB8(var_1784, var_1776, var_1768, var_1760, var_1752, var_1744, var_1736, var_1728)
            var_1800 = 2;
            pri = SetCascadeShadowMapLevel(var_1800)
            var_1808 = 0;
            var_1816 = 4630755948099534848;
            var_1824 = 0;
            OP_PUSH5_C 4659415224452865065, 4633864839217304044, 4658429534268796436, 4661263855342877409, 4639071774442730291
            var_1832 = 4658656473468769403;
            var_1840 = 1;
            pri = EvCameraMove(var_1840, var_1832, var_1824, var_1816, var_1808, var_1800, var_1792, var_1784, var_1776, var_1768)
            var_1848 = 0;
            pri = fun_2E50()
            var_1856 = 0;
            var_1864 = 4630755948099534848;
            var_1872 = 3;
            OP_PUSH5_C 4659466065870533427, 4634156165818199572, 4658435647553446871, 4661289265056595313, 4639144606092954173
            var_1880 = 4658662586753419837;
            var_1888 = 80;
            pri = EvCameraMove(var_1888, var_1880, var_1872, var_1864, var_1856, var_1848, var_1840, var_1832, var_1824, var_1816)
            var_1896 = 0;
            var_1904 = 3;
            var_1912 = -3181508942575245480;
            var_1920 = 24;
            pri = fun_8D30(var_1912, var_1904, var_1896)
            var_1928 = 1;
            var_1936 = 8;
            pri = fun_0090(var_1928)
            var_1944 = 0;
            var_1952 = 3;
            var_1960 = 0;
            var_1968 = 100;
            var_1976 = -1;
            OP_PUSH2_C 2637052718651647632, -3181508942575245480
            var_1984 = 56;
            pri = fun_2470(var_1976, var_1968, var_1960, var_1952, var_1944, var_1936, var_1928)
            var_1992 = -3181508942575245480;
            var_2000 = 8;
            pri = fun_0AE8(var_1992)
            var_2008 = 1;
            var_2016 = 8;
            pri = fun_2668(var_2008)
            var_2024 = 0;
            pri = fun_2728()
            var_2032 = 2;
            var_2040 = 2;
            var_2048 = 8868142065411558194;
            var_2056 = 24;
            pri = fun_1800(var_2048, var_2040, var_2032)
            var_2064 = 0;
            var_2072 = 1;
            var_2080 = 40;
            OP_PUSH2_C -3181508942575245480, 8868142065411558194
            var_2088 = 40;
            pri = fun_1168(var_2080, var_2072, var_2064, var_2056, var_2048)
            var_2096 = 0;
            var_2104 = 3;
            var_2112 = 0;
            var_2120 = 100;
            var_2128 = -1;
            OP_PUSH2_C 6455805108618410430, 8868142065411558194
            var_2136 = 56;
            pri = fun_2470(var_2128, var_2120, var_2112, var_2104, var_2096, var_2088, var_2080)
            var_2144 = 1;
            var_2152 = 8;
            pri = fun_2668(var_2144)
            var_2160 = 0;
            pri = fun_2728()
            var_2168 = 0;
            var_2176 = 4630755948099534848;
            var_2184 = 0;
            OP_PUSH5_C 4660449381109486060, 4624386169376572703, 4657578908093083812, 4661342415448682004, 4637714713211264041
            var_2192 = 4659182853665450885;
            var_2200 = 1;
            pri = EvCameraMove(var_2200, var_2192, var_2184, var_2176, var_2168, var_2160, var_2152, var_2144, var_2136, var_2128)
            var_2208 = 0;
            pri = fun_2E50()
            var_2216 = 0;
            var_2224 = 4630755948099534848;
            var_2232 = 3;
            OP_PUSH5_C 4660449381109486060, 4624386169376572703, 4657578908093083812, 4661320919996358984, 4637706268961962721
            var_2240 = 4659209175973819843;
            var_2248 = 120;
            pri = EvCameraMove(var_2248, var_2240, var_2232, var_2224, var_2216, var_2208, var_2200, var_2192, var_2184, var_2176)
            var_2256 = 5;
            var_2264 = 8868142065411558194;
            var_2272 = 16;
            pri = fun_1710(var_2264, var_2256)
            var_2280 = 1;
            var_2288 = 1;
            var_2296 = 30;
            OP_PUSH2_C 8802641224559852288, 8868142065411558194
            var_2304 = 40;
            pri = fun_1168(var_2296, var_2288, var_2280, var_2272, var_2264)
            var_2312 = 0;
            var_2320 = 3;
            var_2328 = 8868142065411558194;
            var_2336 = 24;
            pri = fun_8D30(var_2328, var_2320, var_2312)
            var_2344 = 0;
            var_2352 = 0;
            var_2360 = -3181508942575245480;
            var_2368 = 24;
            pri = fun_8D30(var_2360, var_2352, var_2344)
            var_2376 = 1;
            var_2384 = 8;
            pri = fun_0090(var_2376)
            var_2392 = 0;
            var_2400 = 3;
            var_2408 = 0;
            var_2416 = 100;
            var_2424 = -1;
            OP_PUSH2_C 6455806208130038641, 8868142065411558194
            var_2432 = 56;
            pri = fun_2470(var_2424, var_2416, var_2408, var_2400, var_2392, var_2384, var_2376)
            var_2440 = 8868142065411558194;
            var_2448 = 8;
            pri = fun_0AE8(var_2440)
            var_2456 = -3181508942575245480;
            var_2464 = 8;
            pri = fun_0AE8(var_2456)
            var_2472 = 1;
            var_2480 = 8;
            pri = fun_2668(var_2472)
            var_2488 = 0;
            pri = fun_2728()
            var_2496 = 33096;
            pri = SoundPostEvent(var_2496)
            var_2504 = 8868142065411558194;
            var_2512 = 8;
            pri = fun_1868(var_2504)
            var_2520 = 0;
            var_2528 = 0;
            var_2536 = 8868142065411558194;
            var_2544 = 24;
            pri = fun_8D30(var_2536, var_2528, var_2520)
            var_2552 = 0;
            var_2560 = 4631952216750555136;
            var_2568 = 0;
            OP_PUSH5_C 4659802494438400328, -4601772469747638600, 4658248004899050619, 4661102183153129226, 4639318416891073004
            var_2576 = 4658800905316194058;
            var_2584 = 1;
            pri = EvCameraMove(var_2584, var_2576, var_2568, var_2560, var_2552, var_2544, var_2536, var_2528, var_2520, var_2512)
            var_2592 = 0;
            pri = fun_2E50()
            var_2600 = 0;
            var_2608 = 4631952216750555136;
            var_2616 = 3;
            OP_PUSH5_C 4659793522423517676, -4601772469747638600, 4658269115522303918, 4661093211138246574, 4639318416891073004
            var_2624 = 4658822015939447357;
            var_2632 = 120;
            pri = EvCameraMove(var_2632, var_2624, var_2616, var_2608, var_2600, var_2592, var_2584, var_2576, var_2568, var_2560)
            var_2640 = 8;
            var_2648 = 8;
            var_2656 = -3181508942575245480;
            var_2664 = 24;
            pri = fun_1800(var_2656, var_2648, var_2640)
            var_2672 = 0;
            var_2680 = 1;
            var_2688 = 50;
            var_2696 = 3;
            var_2704 = -3181508942575245480;
            var_2712 = 40;
            pri = fun_1220(var_2704, var_2696, var_2688, var_2680, var_2672)
            var_2720 = 0;
            var_2728 = 3;
            var_2736 = 0;
            var_2744 = 100;
            var_2752 = -1;
            OP_PUSH2_C 2637053818163275843, -3181508942575245480
            var_2760 = 56;
            pri = fun_2470(var_2752, var_2744, var_2736, var_2728, var_2720, var_2712, var_2704)
            var_2768 = 8868142065411558194;
            var_2776 = 8;
            pri = fun_0AE8(var_2768)
            var_2784 = 1;
            var_2792 = 8;
            pri = fun_2668(var_2784)
            var_2800 = 0;
            pri = fun_2728()
            var_2808 = 0;
            var_2816 = 4631952216750555136;
            var_2824 = 0;
            OP_PUSH5_C 4660376087664378511, -4590333326694117540, 4657774753104223273, 4661438677691693793, 4640101972857491292
            var_2832 = 4659473696481230193;
            var_2840 = 1;
            pri = EvCameraMove(var_2840, var_2832, var_2824, var_2816, var_2808, var_2800, var_2792, var_2784, var_2776, var_2768)
            var_2848 = 0;
            pri = fun_2E50()
            var_2856 = 0;
            var_2864 = 4631952216750555136;
            var_2872 = 3;
            OP_PUSH5_C 4660386555015074939, -4589809783237435720, 4657769277536316948, 4661506495568895017, 4640738106304857375
            var_2880 = 4659635192749117932;
            var_2888 = 120;
            pri = EvCameraMove(var_2888, var_2880, var_2872, var_2864, var_2856, var_2848, var_2840, var_2832, var_2824, var_2816)
            var_2896 = 1;
            var_2904 = 1;
            var_2912 = -1;
            var_2920 = -1;
            var_2928 = 0;
            var_2936 = 6;
            var_2944 = 8868142065411558194;
            var_2952 = 56;
            pri = fun_4CC8(var_2944, var_2936, var_2928, var_2920, var_2912, var_2904, var_2896)
            var_2960 = 0;
            var_2968 = 3;
            var_2976 = 0;
            var_2984 = 100;
            var_2992 = -1;
            OP_PUSH2_C 6455802909595154008, 8868142065411558194
            var_3000 = 56;
            pri = fun_2470(var_2992, var_2984, var_2976, var_2968, var_2960, var_2952, var_2944)
            var_3008 = 1;
            var_3016 = 8;
            pri = fun_2668(var_3008)
            var_3024 = 0;
            pri = fun_2728()
            var_3032 = 15;
            var_3040 = -3181508942575245480;
            var_3048 = 16;
            pri = fun_16D0(var_3040, var_3032)
            var_3056 = -1;
            var_3064 = -3181508942575245480;
            var_3072 = 16;
            pri = fun_1690(var_3064, var_3056)
            var_3080 = -3181508942575245480;
            var_3088 = 8;
            pri = fun_1868(var_3080)
            var_3096 = 1;
            var_3104 = 1;
            var_3112 = -1;
            var_3120 = -1;
            var_3128 = 0;
            var_3136 = 6;
            var_3144 = -3181508942575245480;
            var_3152 = 56;
            pri = fun_4CC8(var_3144, var_3136, var_3128, var_3120, var_3112, var_3104, var_3096)
            var_3160 = 0;
            var_3168 = 3;
            var_3176 = 0;
            var_3184 = 100;
            var_3192 = -1;
            OP_PUSH2_C 2637912536744719409, -3181508942575245480
            var_3200 = 56;
            pri = fun_2470(var_3192, var_3184, var_3176, var_3168, var_3160, var_3152, var_3144)
            var_3208 = 1;
            var_3216 = 8;
            pri = fun_2668(var_3208)
            var_3224 = 0;
            pri = fun_2728()
            var_3232 = 1;
            var_3240 = 3;
            var_3248 = 0;
            var_3256 = 6;
            var_3264 = 8868142065411558194;
            var_3272 = 40;
            pri = fun_7000(var_3264, var_3256, var_3248, var_3240, var_3232)
            var_3280 = 0;
            var_3288 = 3;
            var_3296 = 0;
            var_3304 = 100;
            var_3312 = -1;
            OP_PUSH2_C 6455804009106782219, 8868142065411558194
            var_3320 = 56;
            pri = fun_2470(var_3312, var_3304, var_3296, var_3288, var_3280, var_3272, var_3264)
            var_3328 = 1;
            var_3336 = 8;
            pri = fun_2668(var_3328)
            var_3344 = 0;
            pri = fun_2728()
            var_3352 = 1;
            var_3360 = 3;
            var_3368 = 0;
            var_3376 = 6;
            var_3384 = -3181508942575245480;
            var_3392 = 40;
            pri = fun_7000(var_3384, var_3376, var_3368, var_3360, var_3352)
            var_3400 = 0;
            var_3408 = 3;
            var_3416 = 0;
            var_3424 = 100;
            var_3432 = -1;
            OP_PUSH2_C 6455800710571897586, 8868142065411558194
            var_3440 = 56;
            pri = fun_2470(var_3432, var_3424, var_3416, var_3408, var_3400, var_3392, var_3384)
            var_3448 = -3181508942575245480;
            var_3456 = 8;
            pri = fun_0AE8(var_3448)
            var_3464 = 1;
            var_3472 = 8;
            pri = fun_2668(var_3464)
            var_3480 = 0;
            pri = fun_2728()
            var_3488 = 0;
            var_3496 = 4631952216750555136;
            var_3504 = 0;
            OP_PUSH5_C 4659953655296986972, 4620287893715665551, 4658928712547806740, 4661198984156838625, 4639142846874349732
            var_3512 = 4658698804666438779;
            var_3520 = 1;
            pri = EvCameraMove(var_3520, var_3512, var_3504, var_3496, var_3488, var_3480, var_3472, var_3464, var_3456, var_3448)
            var_3528 = 0;
            pri = fun_2E50()
            var_3536 = 0;
            var_3544 = 4631952216750555136;
            var_3552 = 3;
            OP_PUSH5_C 4659951720156522086, 4622680431017706127, 4658929064391527629, 4661094112737781350, 4638893741519960801
            var_3560 = 4658718178061320192;
            var_3568 = 15;
            pri = EvCameraMove(var_3568, var_3560, var_3552, var_3544, var_3536, var_3528, var_3520, var_3512, var_3504, var_3496)
            var_3576 = 4;
            var_3584 = 4;
            var_3592 = -3181508942575245480;
            var_3600 = 24;
            pri = fun_1800(var_3592, var_3584, var_3576)
            var_3608 = 1;
            var_3616 = 1;
            var_3624 = -1;
            var_3632 = -1;
            var_3640 = 0;
            var_3648 = 12;
            var_3656 = -3181508942575245480;
            var_3664 = 56;
            pri = fun_4CC8(var_3656, var_3648, var_3640, var_3632, var_3624, var_3616, var_3608)
            var_3672 = 0;
            var_3680 = 3;
            var_3688 = 0;
            var_3696 = 100;
            var_3704 = -1;
            OP_PUSH2_C 2637911437233091198, -3181508942575245480
            var_3712 = 56;
            pri = fun_2470(var_3704, var_3696, var_3688, var_3680, var_3672, var_3664, var_3656)
            var_3720 = 1;
            var_3728 = 8;
            pri = fun_2668(var_3720)
            var_3736 = 0;
            pri = fun_2728()
            var_3744 = 0;
            var_3752 = 4631952216750555136;
            var_3760 = 0;
            OP_PUSH5_C 4659982836335588147, -4588769733198489846, 4658752130980385915, 4661452938357506048, 4639205123212946964
            var_3768 = 4658669381735279493;
            var_3776 = 1;
            pri = EvCameraMove(var_3776, var_3768, var_3760, var_3752, var_3744, var_3736, var_3728, var_3720, var_3712, var_3704)
            var_3784 = 0;
            pri = fun_2E50()
            var_3792 = 0;
            var_3800 = 4631952216750555136;
            var_3808 = 3;
            OP_PUSH5_C 4659984749485820477, -4588548071654330204, 4658752043019455693, 4661517919494707610, 4639656538706846679
            var_3816 = 4658663048548303503;
            var_3824 = 150;
            pri = EvCameraMove(var_3824, var_3816, var_3808, var_3800, var_3792, var_3784, var_3776, var_3768, var_3760, var_3752)
            var_3832 = 7;
            var_3840 = 8;
            var_3848 = 8868142065411558194;
            var_3856 = 24;
            pri = fun_1800(var_3848, var_3840, var_3832)
            var_3864 = 1;
            var_3872 = 1;
            var_3880 = -1;
            var_3888 = -1;
            var_3896 = 0;
            var_3904 = 9;
            var_3912 = 8868142065411558194;
            var_3920 = 56;
            pri = fun_4CC8(var_3912, var_3904, var_3896, var_3888, var_3880, var_3872, var_3864)
            var_3928 = 0;
            var_3936 = 3;
            var_3944 = 0;
            var_3952 = 100;
            var_3960 = -1;
            OP_PUSH2_C 6455801810083525797, 8868142065411558194
            var_3968 = 56;
            pri = fun_2470(var_3960, var_3952, var_3944, var_3936, var_3928, var_3920, var_3912)
            var_3976 = 1;
            var_3984 = 8;
            pri = fun_2668(var_3976)
            var_3992 = 0;
            pri = fun_2728()
            var_4000 = 1;
            var_4008 = 3;
            var_4016 = 0;
            var_4024 = 12;
            var_4032 = -3181508942575245480;
            var_4040 = 40;
            pri = fun_7000(var_4032, var_4024, var_4016, var_4008, var_4000)
            var_4048 = -3181508942575245480;
            var_4056 = 8;
            pri = fun_0AE8(var_4048)
            var_4064 = -3181508942575245480;
            var_4072 = 8;
            pri = fun_1868(var_4064)
            var_4080 = 0;
            var_4088 = 0;
            var_4096 = 0;
            var_4104 = 0;
            OP_PUSH2_C 8802641224559852288, -3181508942575245480
            var_4112 = 48;
            pri = fun_08B8(var_4104, var_4096, var_4088, var_4080, var_4072, var_4064)
            var_4120 = 0;
            var_4128 = 3;
            var_4136 = 0;
            var_4144 = 100;
            var_4152 = -1;
            OP_PUSH2_C 2637910337721462987, -3181508942575245480
            var_4160 = 56;
            pri = fun_2470(var_4152, var_4144, var_4136, var_4128, var_4120, var_4112, var_4104)
            var_4168 = -3181508942575245480;
            var_4176 = 8;
            pri = fun_0910(var_4168)
            var_4184 = 1;
            var_4192 = 8;
            pri = fun_2668(var_4184)
            var_4200 = 0;
            pri = fun_2728()
            var_4208 = 8868142065411558194;
            var_4216 = 8;
            pri = fun_1868(var_4208)
            var_4224 = 1;
            var_4232 = 3;
            var_4240 = 0;
            var_4248 = 9;
            var_4256 = 8868142065411558194;
            var_4264 = 40;
            pri = fun_7000(var_4256, var_4248, var_4240, var_4232, var_4224)
            var_4272 = 1;
            var_4280 = 0;
            OP_PUSH5_C 4641240890982006784, 8802641224559852288, 4659267604021719859, 4658968756761290342, 4611686018427387904
            var_4288 = -3181508942575245480;
            var_4296 = 64;
            pri = fun_07A8(var_4288, var_4280, var_4272, var_4264, var_4256, var_4248, var_4240, var_4232)
            var_4304 = 0;
            var_4312 = 1;
            var_4320 = 60;
            var_4328 = 1;
            var_4336 = 8868142065411558194;
            var_4344 = 40;
            pri = fun_1220(var_4336, var_4328, var_4320, var_4312, var_4304)
            var_4352 = 0;
            var_4360 = 1;
            var_4368 = 60;
            var_4376 = 0;
            var_4384 = 8802641224559852288;
            var_4392 = 40;
            pri = fun_1220(var_4384, var_4376, var_4368, var_4360, var_4352)
            var_4400 = 0;
            var_4408 = 3;
            var_4416 = 0;
            var_4424 = 100;
            var_4432 = -1;
            OP_PUSH2_C 2637909238209834776, -3181508942575245480
            var_4440 = 56;
            pri = fun_2470(var_4432, var_4424, var_4416, var_4408, var_4400, var_4392, var_4384)
            var_4448 = -3181508942575245480;
            var_4456 = 8;
            pri = fun_0910(var_4448)
            var_4464 = 8868142065411558194;
            var_4472 = 8;
            pri = fun_0AE8(var_4464)
            var_4480 = 1;
            var_4488 = 8;
            pri = fun_2668(var_4480)
            var_4496 = 0;
            pri = fun_2728()
            var_4504 = -1;
            var_4512 = 8802641224559852288;
            var_4520 = 16;
            pri = fun_1690(var_4512, var_4504)
            var_4528 = -1;
            var_4536 = 8868142065411558194;
            var_4544 = 16;
            pri = fun_1690(var_4536, var_4528)
            var_4552 = 0;
            var_4560 = 0;
            var_4568 = 0;
            var_4576 = 0;
            OP_PUSH2_C 8802641224559852288, 8868142065411558194
            var_4584 = 48;
            pri = fun_08B8(var_4576, var_4568, var_4560, var_4552, var_4544, var_4536)
            var_4592 = 3;
            var_4600 = 70;
            pri = EvCameraEnd(var_4600, var_4592)
            var_4608 = 8868142065411558194;
            var_4616 = 8;
            pri = fun_0910(var_4608)
            var_4624 = 35;
            var_4632 = 8;
            pri = fun_0090(var_4624)
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_BD90_case_0x0
            var_8 = 0;
            pri = fun_2E50()
            var_16 = 8868142065411558194;
            var_24 = 8;
            pri = fun_1750(var_16)
            var_32 = 1;
            var_40 = -1;
            var_48 = -1;
            var_56 = 3;
            var_64 = 0;
            var_72 = 0;
            var_80 = 8868142065411558194;
            var_88 = 56;
            pri = fun_30E8(var_80, var_72, var_64, var_56, var_48, var_40, var_32)
            var_96 = 0;
            var_104 = 3;
            var_112 = 0;
            var_120 = 100;
            var_128 = -1;
            OP_PUSH2_C 6456769380316162252, 8868142065411558194
            var_136 = 56;
            pri = fun_2470(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
            var_144 = 8868142065411558194;
            var_152 = 8;
            pri = fun_0AE8(var_144)
            var_160 = 1;
            var_168 = 8;
            pri = fun_2668(var_160)
            var_176 = 0;
            pri = fun_2728()
            OP_JUMP switch_BD90_case_default
        }
        case 0x1:
        {
// switch_BD90_case_0x1
            var_8 = 0;
            pri = fun_2E50()
            var_16 = 8868142065411558194;
            var_24 = 8;
            pri = fun_1750(var_16)
            var_32 = 1;
            var_40 = -1;
            var_48 = -1;
            var_56 = 3;
            var_64 = 0;
            var_72 = 0;
            var_80 = 8868142065411558194;
            var_88 = 56;
            pri = fun_30E8(var_80, var_72, var_64, var_56, var_48, var_40, var_32)
            var_96 = 0;
            var_104 = 3;
            var_112 = 0;
            var_120 = 100;
            var_128 = -1;
            OP_PUSH2_C 6456772678851046885, 8868142065411558194
            var_136 = 56;
            pri = fun_2470(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
            var_144 = 8868142065411558194;
            var_152 = 8;
            pri = fun_0AE8(var_144)
            var_160 = 1;
            var_168 = 8;
            pri = fun_2668(var_160)
            var_176 = 0;
            pri = fun_2728()
            OP_JUMP switch_BD90_case_default
        }
    }
}
// fun_E3A0
fun_E3A0() {
    pri = 0;
    return pri;
}
// fun_E3B8
fun_E3B8() {
    var_8 = -8930991717109470278;
    var_16 = 8;
    pri = fun_0570(var_8)
    var_24 = 3030;
    var_32 = 8;
    pri = fun_AD50(var_24)
    var_40 = 1;
    var_48 = 1271;
    pri = ItemAdd(var_48, var_40)
    pri = 0;
    return pri;
}
// fun_E440
fun_E440() {
    var_8 = 0;
    pri = fun_05A0()
    OP_PUSH2_C -3181508942575245480, 1444660981325485401
    pri = SetBamiriInfoToChara(var_8, var_0)
    OP_PUSH2_C 8868142065411558194, 8887341410777676554
    pri = SetBamiriInfoToChara(var_8, var_0)
    pri = 0;
    return pri;
}
// fun_E4D0
fun_E4D0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_AF90()
    var_16 = 0;
    pri = fun_AFE8()
    var_24 = 0;
    pri = fun_B028()
    var_32 = 0;
    pri = fun_B058()
    var_40 = 0;
    pri = fun_E3A0()
    var_48 = 0;
    pri = fun_E3B8()
    var_56 = 0;
    pri = fun_E440()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_E5C0
fun_E5C0() {
    var_8 = 0;
    pri = fun_AFE8()
    var_16 = 0;
    pri = fun_E3B8()
    pri = 0;
    return pri;
}
// fun_E608
fun_E608() {
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    alt = 3010;
    OP_JSLEQ lab_E660
    pri = 0;
    return pri;
// lab_E660
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = var_8;
    var_64 = 48;
    pri = fun_8F88(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    var_112 = 2637062614256301531;
    var_120 = var_8;
    var_128 = 56;
    pri = fun_2470(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = 0;
    var_144 = 8764405830287315949;
    var_152 = 0;
    var_160 = 24;
    pri = fun_2758(var_152, var_144, var_136)
    var_168 = 0;
    var_176 = 8764402531752431316;
    var_184 = 1;
    var_192 = 24;
    pri = fun_2758(var_184, var_176, var_168)
    var_208 = 0;
    var_216 = 1;
    var_224 = 0;
    var_232 = 1;
    var_240 = 32;
    pri = fun_2840(var_232, var_224, var_216, var_208)
    var_16 = pri;
    var_248 = 0;
    pri = fun_2728()
    pri = var_16;
    OP_JNZ lab_EB48
    var_256 = 1;
    var_264 = 1;
    var_272 = 1;
    var_280 = 1;
    var_288 = 0;
    var_296 = 40;
    pri = fun_AA38(var_288, var_280, var_272, var_264, var_256)
    var_304 = 0;
    var_312 = 3;
    var_320 = 0;
    var_328 = 100;
    var_336 = -1;
    var_344 = 2637064813279557953;
    var_352 = var_8;
    var_360 = 56;
    pri = fun_2470(var_352, var_344, var_336, var_328, var_320, var_312, var_304)
    var_368 = 1;
    var_376 = 8;
    pri = fun_2668(var_368)
    var_384 = 0;
    pri = fun_2728()
    var_392 = 0;
    var_400 = 0;
    var_408 = 0;
    var_416 = var_8;
    var_424 = 32;
    pri = fun_9288(var_416, var_408, var_400, var_392)
    var_440 = 216;
    var_448 = 215;
    var_456 = 214;
    var_464 = 24;
    pri = fun_A8D8(var_456, var_448, var_440)
    var_24 = pri;
    var_472 = -1;
    var_480 = 0;
    var_488 = 0;
    var_496 = 0;
    var_504 = var_24;
    var_512 = 40;
    pri = fun_2BF8(var_504, var_496, var_488, var_480, var_472)
    var_520 = 0;
    pri = fun_2D10()
    OP_JZER lab_E9D8
    var_528 = 0;
    pri = fun_2E00()
// lab_EB48
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 2637063713767929742;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_2470(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_2668(var_72)
    var_88 = 0;
    pri = fun_2728()
    var_96 = 0;
    var_104 = 0;
    var_112 = 0;
    var_120 = var_8;
    var_128 = 32;
    pri = fun_9288(var_120, var_112, var_104, var_96)
// lab_E9D8
    var_8 = 8868142065411558194;
    var_16 = 8;
    pri = fun_0570(var_8)
    var_24 = 0;
    pri = fun_05A0()
    var_32 = 1;
    var_40 = 1;
    OP_PUSH4_C 4640537203540230144, 4661369650351702016, 4658556000096223232, 8868142065411558194
    var_48 = 48;
    pri = fun_0718(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 1;
    var_64 = 1;
    var_72 = 0;
    OP_PUSH3_C 4660916871463383859, 4658797232947357286, -3181508942575245480
    var_80 = 48;
    pri = fun_0718(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 1;
    var_96 = 1;
    OP_PUSH4_C 4640537203540230144, 4661264866893574963, 4658793274705497293, 8802641224559852288
    var_104 = 48;
    pri = fun_0718(var_96, var_88, var_80, var_72, var_64, var_56)
    var_112 = 3748799306781509364;
    pri = ReserveScript(var_112)
    OP_JUMP lab_EC10
// lab_EC10
    pri = 0;
    return pri;
}
// fun_EC28
fun_EC28() {
    var_8 = 889;
    var_16 = 888;
    var_24 = 16;
    pri = fun_A9E0(var_16, var_8)
    var_32 = pri;
    var_40 = 1;
    var_48 = 16;
    pri = fun_2A68(var_40, var_32)
    var_56 = 1;
    var_64 = 3;
    var_72 = 0;
    var_80 = 100;
    var_88 = -1;
    var_96 = 0;
    var_104 = 0;
    var_112 = 1;
    var_120 = 1;
    var_128 = 6454958484664877185;
    var_136 = 80;
    pri = fun_9740(var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    pri = 0;
    return pri;
}
// fun_ED00
fun_ED00() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 2637909238209834776;
    var_88 = 80;
    pri = fun_9740(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
