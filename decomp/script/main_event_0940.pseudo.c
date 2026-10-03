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
    pri = fun_0720()
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
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0720
fun_0720() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0748
fun_0748() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07A0
fun_07A0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_07D8
fun_07D8() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0810
fun_0810() {
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
// fun_0888
fun_0888() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08D8
fun_08D8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0930
fun_0930() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1938(var_8)
    OP_JZER lab_09A8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1968(var_24)
    OP_JNZ lab_09A8
    pri = 0;
    return pri;
// lab_09A8
    OP_JUMP lab_09B8
// lab_09B8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0A18
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0A18
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_09B8
    pri = 0;
    return pri;
}
// fun_0A58
fun_0A58() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0A90
fun_0A90() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0AD0
fun_0AD0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0B08
fun_0B08() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0B50
    pri = 0;
    return pri;
// lab_0B50
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0B90
// lab_0B90
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1938(var_8)
    OP_JNZ lab_0C18
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0C08
    pri = 0;
    return pri;
// lab_0C18
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0C60
    pri = 0;
    return pri;
// lab_0C60
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0CC0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E30(var_8)
    pri = 0;
    return pri;
// lab_0CC0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0B90
    pri = 0;
    return pri;
// lab_0C08
    OP_JUMP lab_0C60
}
// fun_0D08
fun_0D08() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0D50
// lab_0D50
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0DA8
    pri = 0;
    return pri;
// lab_0DA8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0DE8
    pri = 0;
    return pri;
// lab_0DE8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D50
    pri = 0;
    return pri;
}
// fun_0E30
fun_0E30() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0E68
fun_0E68() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0EB8
    pri = 0;
    return pri;
// lab_0EB8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1938(var_8)
    OP_JZER lab_0FE8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F10
    OP_ZERO_P_S 64
// lab_0FE8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1020
    OP_CONST_S 64, 1
// lab_1020
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1058
    OP_CONST_S 72, 1
// lab_1058
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
// lab_0F10
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F38
    OP_ZERO_P_S 72
// lab_0F38
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
    OP_JUMP lab_10F8
// lab_10F8
    pri = 0;
    return pri;
}
// fun_1108
fun_1108() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1148
fun_1148() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1188
fun_1188() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11E0
fun_11E0() {
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
// fun_1240
fun_1240() {
    OP_CONST_S -8, 4631530004285489152
    pri = arg_1;
    switch (pri) {
// switch_1600
        case default:
        {
// switch_1600_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_1600_case_0x0
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
            pri = fun_11E0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1600_case_default
        }
        case 0x1:
        {
// switch_1600_case_0x1
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_11E0(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1600_case_default
        }
        case 0x2:
        {
// switch_1600_case_0x2
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
            pri = fun_11E0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1600_case_default
        }
        case 0x3:
        {
// switch_1600_case_0x3
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 0;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_11E0(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1600_case_default
        }
        case 0x4:
        {
// switch_1600_case_0x4
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
            pri = fun_11E0(var_80, var_72, var_64, var_56, var_48, var_40)
            OP_JUMP switch_1600_case_default
        }
        case 0x5:
        {
// switch_1600_case_0x5
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
            pri = fun_11E0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1600_case_default
        }
        case 0x6:
        {
// switch_1600_case_0x6
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
            pri = fun_11E0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1600_case_default
        }
        case 0x7:
        {
// switch_1600_case_0x7
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_11E0(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1600_case_default
        }
    }
}
// fun_16B0
fun_16B0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_16F0
fun_16F0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartFieldObjectEyeLookAt_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1748
fun_1748() {
    var_8 = 344;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1788
fun_1788() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_17C8
fun_17C8() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1800
fun_1800() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1840
fun_1840() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1878
fun_1878() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1788(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1800(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_18E0
fun_18E0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_17C8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1840(var_24)
    pri = 0;
    return pri;
}
// fun_1938
fun_1938() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1968
fun_1968() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1998
fun_1998() {
    OP_JUMP lab_19B0
// lab_19B0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1A40
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1A30
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B08(var_8)
    pri = 0;
    return pri;
// lab_1A40
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1AD0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1AC0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B08(var_8)
    pri = 0;
    return pri;
// lab_1AD0
    pri = 0;
    return pri;
// lab_1AC0
    OP_JUMP lab_1AE0
// lab_1AE0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_19B0
    pri = 0;
    return pri;
// lab_1A30
    OP_JUMP lab_1AE0
}
// fun_1B20
fun_1B20() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B08(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1998(var_40)
    pri = 0;
    return pri;
}
// fun_1BA8
fun_1BA8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1BE0
fun_1BE0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1C08
fun_1C08() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1C40
fun_1C40() {
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
// switch_2258
        case default:
        {
// switch_2258_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_22A0
// lab_22A0
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
            OP_JNZ lab_2348
            var_88 = 0;
            pri = fun_26E0()
// lab_2348
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_2258_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1E40
                case default:
                {
// switch_1E40_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1EB8
// lab_1EB8
                    OP_JUMP lab_22A0
                }
                case 0x0:
                {
// switch_1E40_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1EB8
                }
                case 0x1:
                {
// switch_1E40_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1EB8
                }
                case 0x2:
                {
// switch_1E40_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1EB8
                }
                case 0x3:
                {
// switch_1E40_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1EB8
                }
                case 0x4:
                {
// switch_1E40_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1EB8
                }
                case 0x5:
                {
// switch_1E40_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1EB8
                }
            }
        }
        case 0x65:
        {
// switch_2258_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1FF8
                case default:
                {
// switch_1FF8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_2070
// lab_2070
                    OP_JUMP lab_22A0
                }
                case 0x0:
                {
// switch_1FF8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_2070
                }
                case 0x1:
                {
// switch_1FF8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_2070
                }
                case 0x2:
                {
// switch_1FF8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_2070
                }
                case 0x3:
                {
// switch_1FF8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_2070
                }
                case 0x4:
                {
// switch_1FF8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_2070
                }
                case 0x5:
                {
// switch_1FF8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_2070
                }
            }
        }
        case 0x66:
        {
// switch_2258_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_21B0
                case default:
                {
// switch_21B0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_2228
// lab_2228
                    OP_JUMP lab_22A0
                }
                case 0x0:
                {
// switch_21B0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_2228
                }
                case 0x1:
                {
// switch_21B0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_2228
                }
                case 0x2:
                {
// switch_21B0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_2228
                }
                case 0x3:
                {
// switch_21B0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_2228
                }
                case 0x4:
                {
// switch_21B0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_2228
                }
                case 0x5:
                {
// switch_21B0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_2228
                }
            }
        }
    }
}
// fun_2360
fun_2360() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1C40(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_23C8
fun_23C8() {
    pri = 392;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 472;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0AD0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2470
    pri = 1;
    return pri;
// lab_2470
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_24B8
fun_24B8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2508
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_23C8(var_8)
    arg_2 = pri;
// lab_2508
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1C40(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2568
fun_2568() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_25B8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_23C8(var_8)
    arg_2 = pri;
// lab_25B8
    var_8 = arg_6;
    var_16 = arg_5;
    pri = arg_4;
    alt = 1;
    pri |= alt;
    var_24 = pri;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_24B8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2630
fun_2630() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2360(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2680
fun_2680() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_2630(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_26E0
fun_26E0() {
    OP_JUMP lab_26F8
// lab_26F8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2738
    pri = 0;
    return pri;
// lab_2738
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_26F8
    pri = 0;
    return pri;
}
// fun_2778
fun_2778() {
    var_8 = 0;
    pri = fun_26E0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2828
    var_32 = 520;
    pri = SoundPostEvent(var_32)
// lab_2828
    pri = 0;
    return pri;
}
// fun_2838
fun_2838() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2868
fun_2868() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_2898
// lab_2898
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_28D8
    OP_JUMP lab_2908
// lab_28D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2898
// lab_2908
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2950
fun_2950() {
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
// fun_29C0
fun_29C0() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_29F8
fun_29F8() {
    OP_JUMP lab_2A10
// lab_2A10
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_2A58
    OP_JUMP lab_2A88
    OP_JUMP lab_2A78
// lab_2A58
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_2A88
    pri = 0;
    return pri;
// lab_2A78
    OP_JUMP lab_2A10
}
// fun_2A98
fun_2A98() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2AC8
fun_2AC8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2B18
fun_2B18() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2B68
fun_2B68() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2BB8
fun_2BB8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2C08
fun_2C08() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2C58
fun_2C58() {
    pri = arg_1;
    OP_JNZ lab_2CA0
    var_8 = 696;
    pri = GetFnvHash64(var_8)
    arg_1 = pri;
// lab_2CA0
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
// fun_2CF8
fun_2CF8() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2D70
fun_2D70() {
    var_8 = 0;
    pri = fun_2CF8()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2DF0
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2DF0
    pri = 1;
    return pri;
// lab_2DF0
    var_8 = 0;
    pri = fun_2CF8()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2E30
    pri = 1;
    return pri;
// lab_2E30
    var_8 = 0;
    pri = fun_2CF8()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2E60
fun_2E60() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    pri = 0;
    return pri;
}
// fun_2EB0
fun_2EB0() {
    OP_JUMP lab_2EC8
// lab_2EC8
    pri = EvCameraMoveWait_()
    OP_JZER lab_2F00
    pri = 0;
    return pri;
// lab_2F00
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2EC8
    pri = 0;
    return pri;
}
// fun_2F40
fun_2F40() {
    var_8 = arg_0;
    pri = SetNpcLicenseCardFlag(var_8)
    pri = 0;
    return pri;
}
// fun_2F78
fun_2F78() {
    pri = arg_6;
    OP_JNZ lab_2FB0
    var_8 = 0;
    pri = fun_1108()
// lab_2FB0
    pri = arg_1;
    switch (pri) {
// switch_4518
        case default:
        {
// switch_4518_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4868
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4868
            pri = 1;
            OP_JUMP lab_4870
// lab_4868
            pri = 0;
// lab_4870
            OP_JZER lab_49C8
            var_16 = 8376;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AD0(var_24, var_16)
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
            var_64 = 8480;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_4A28
// lab_49C8
            var_8 = 64;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
// lab_4A28
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4A88
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4AE8
// lab_4A88
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4AE8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4AE8
            pri = arg_2;
            OP_JZER lab_4B28
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4B28
            var_8 = 0;
            pri = fun_1148()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4518_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x1:
        {
// switch_4518_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x2:
        {
// switch_4518_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x3:
        {
// switch_4518_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x4:
        {
// switch_4518_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x5:
        {
// switch_4518_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5664;
            var_72 = 5656;
            var_80 = 5648;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4518_case_default
        }
        case 0x6:
        {
// switch_4518_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5688;
            var_72 = 5680;
            var_80 = 5672;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4518_case_default
        }
        case 0x7:
        {
// switch_4518_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5712;
            var_72 = 5704;
            var_80 = 5696;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4518_case_default
        }
        case 0x8:
        {
// switch_4518_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x9:
        {
// switch_4518_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5736;
            var_72 = 5728;
            var_80 = 5720;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4518_case_default
        }
        case 0xa:
        {
// switch_4518_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5760;
            var_72 = 5752;
            var_80 = 5744;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4518_case_default
        }
        case 0xb:
        {
// switch_4518_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5784;
            var_72 = 5776;
            var_80 = 5768;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4518_case_default
        }
        case 0xc:
        {
// switch_4518_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5808;
            var_72 = 5800;
            var_80 = 5792;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4518_case_default
        }
        case 0xd:
        {
// switch_4518_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5832;
            var_72 = 5824;
            var_80 = 5816;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4518_case_default
        }
        case 0xe:
        {
// switch_4518_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5856;
            var_72 = 5848;
            var_80 = 5840;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4518_case_default
        }
        case 0xf:
        {
// switch_4518_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x10:
        {
// switch_4518_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x11:
        {
// switch_4518_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5880;
            var_72 = 5872;
            var_80 = 5864;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4518_case_default
        }
        case 0x12:
        {
// switch_4518_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5904;
            var_72 = 5896;
            var_80 = 5888;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4518_case_default
        }
        case 0x13:
        {
// switch_4518_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x14:
        {
// switch_4518_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x15:
        {
// switch_4518_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x16:
        {
// switch_4518_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x17:
        {
// switch_4518_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x18:
        {
// switch_4518_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x19:
        {
// switch_4518_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5928;
            var_72 = 5920;
            var_80 = 5912;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4518_case_default
        }
        case 0x1a:
        {
// switch_4518_case_0x1a
            var_8 = 1;
            var_16 = 5936;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A90(var_24, var_16, var_8)
            var_40 = 6072;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A58(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6152;
            var_88 = 6144;
            var_96 = 6136;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0E68(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4518_case_default
        }
        case 0x1b:
        {
// switch_4518_case_0x1b
            var_8 = 3;
            var_16 = 6160;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A90(var_24, var_16, var_8)
            var_40 = 6296;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A58(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6376;
            var_88 = 6368;
            var_96 = 6360;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0E68(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4518_case_default
        }
        case 0x1c:
        {
// switch_4518_case_0x1c
            var_8 = 2;
            var_16 = 6384;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A90(var_24, var_16, var_8)
            var_40 = 6520;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A58(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6600;
            var_88 = 6592;
            var_96 = 6584;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0E68(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4518_case_default
        }
        case 0x1d:
        {
// switch_4518_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6608;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x1e:
        {
// switch_4518_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6744;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x1f:
        {
// switch_4518_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6880;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x20:
        {
// switch_4518_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7016;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x21:
        {
// switch_4518_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7136;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x22:
        {
// switch_4518_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7256;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x23:
        {
// switch_4518_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7392;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x24:
        {
// switch_4518_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7528;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x25:
        {
// switch_4518_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7664;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x26:
        {
// switch_4518_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7800;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x27:
        {
// switch_4518_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7944;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x28:
        {
// switch_4518_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8088;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x29:
        {
// switch_4518_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8232;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
    }
}
// fun_4B58
fun_4B58() {
    pri = arg_5;
    OP_JNZ lab_4B90
    var_8 = 0;
    pri = fun_1108()
// lab_4B90
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4BE0
    OP_CONST_S -8, -1
// lab_4BE0
    pri = arg_1;
    switch (pri) {
// switch_6698
        case default:
        {
// switch_6698_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6B40
            var_520 = 28240;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0AD0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6B40
            pri = 1;
            OP_JUMP lab_6B48
// lab_6B40
            pri = 0;
// lab_6B48
            OP_JZER lab_6B98
            var_8 = 64;
            var_16 = 28336;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_6DF0
// lab_6B98
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6C00
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6C00
            pri = 1;
            OP_JUMP lab_6C08
// lab_6C00
            pri = 0;
// lab_6C08
            OP_JZER lab_6D90
            var_16 = 28512;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AD0(var_24, var_16)
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
            var_176 = 28616;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 28632;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 8496;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_6DF0
// lab_6D90
            var_8 = 64;
            alt = 8496;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
// lab_6DF0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6E60
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6E60
            var_8 = 0;
            pri = fun_1148()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6698_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x1:
        {
// switch_6698_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x2:
        {
// switch_6698_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x3:
        {
// switch_6698_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x4:
        {
// switch_6698_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x5:
        {
// switch_6698_case_0x5
            var_8 = 2;
            var_16 = 18496;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A90(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0E30(var_40)
            OP_JUMP switch_6698_case_default
        }
        case 0x6:
        {
// switch_6698_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x7:
        {
// switch_6698_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x8:
        {
// switch_6698_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x9:
        {
// switch_6698_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0xa:
        {
// switch_6698_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0xb:
        {
// switch_6698_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0xc:
        {
// switch_6698_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0xd:
        {
// switch_6698_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19144;
            var_72 = 18968;
            var_80 = 18784;
            var_88 = 18592;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0xe:
        {
// switch_6698_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19800;
            var_72 = 19592;
            var_80 = 19376;
            var_88 = 19152;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0xf:
        {
// switch_6698_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20192;
            var_72 = 20072;
            var_80 = 19944;
            var_88 = 19808;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x10:
        {
// switch_6698_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20536;
            var_72 = 20432;
            var_80 = 20320;
            var_88 = 20200;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x11:
        {
// switch_6698_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20880;
            var_72 = 20776;
            var_80 = 20664;
            var_88 = 20544;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x12:
        {
// switch_6698_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x13:
        {
// switch_6698_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x14:
        {
// switch_6698_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21440;
            var_72 = 21264;
            var_80 = 21080;
            var_88 = 20888;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x15:
        {
// switch_6698_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x16:
        {
// switch_6698_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x17:
        {
// switch_6698_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x18:
        {
// switch_6698_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x19:
        {
// switch_6698_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x1a:
        {
// switch_6698_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x1b:
        {
// switch_6698_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x1c:
        {
// switch_6698_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 21832;
            var_72 = 21712;
            var_80 = 21584;
            var_88 = 21448;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x1d:
        {
// switch_6698_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x1e:
        {
// switch_6698_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 22296;
            var_72 = 22152;
            var_80 = 22000;
            var_88 = 21840;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x1f:
        {
// switch_6698_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x20:
        {
// switch_6698_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x21:
        {
// switch_6698_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x22:
        {
// switch_6698_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x23:
        {
// switch_6698_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x24:
        {
// switch_6698_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22664;
            var_72 = 22552;
            var_80 = 22432;
            var_88 = 22304;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x25:
        {
// switch_6698_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23032;
            var_72 = 22920;
            var_80 = 22800;
            var_88 = 22672;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x26:
        {
// switch_6698_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x27:
        {
// switch_6698_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x28:
        {
// switch_6698_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x29:
        {
// switch_6698_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23472;
            var_72 = 23336;
            var_80 = 23192;
            var_88 = 23040;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x2a:
        {
// switch_6698_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23864;
            var_72 = 23744;
            var_80 = 23616;
            var_88 = 23480;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x2b:
        {
// switch_6698_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24280;
            var_72 = 24152;
            var_80 = 24016;
            var_88 = 23872;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x2c:
        {
// switch_6698_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24720;
            var_72 = 24584;
            var_80 = 24440;
            var_88 = 24288;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x2d:
        {
// switch_6698_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x2e:
        {
// switch_6698_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25040;
            var_72 = 24944;
            var_80 = 24840;
            var_88 = 24728;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x2f:
        {
// switch_6698_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25432;
            var_72 = 25312;
            var_80 = 25184;
            var_88 = 25048;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x30:
        {
// switch_6698_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25824;
            var_72 = 25704;
            var_80 = 25576;
            var_88 = 25440;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x31:
        {
// switch_6698_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x32:
        {
// switch_6698_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x33:
        {
// switch_6698_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26216;
            var_72 = 26096;
            var_80 = 25968;
            var_88 = 25832;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x34:
        {
// switch_6698_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26584;
            var_72 = 26472;
            var_80 = 26352;
            var_88 = 26224;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x35:
        {
// switch_6698_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27072;
            var_72 = 26920;
            var_80 = 26760;
            var_88 = 26592;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x36:
        {
// switch_6698_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27440;
            var_72 = 27328;
            var_80 = 27208;
            var_88 = 27080;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x37:
        {
// switch_6698_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x38:
        {
// switch_6698_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27808;
            var_72 = 27696;
            var_80 = 27576;
            var_88 = 27448;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x39:
        {
// switch_6698_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x3a:
        {
// switch_6698_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x3b:
        {
// switch_6698_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x3c:
        {
// switch_6698_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27816;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x3d:
        {
// switch_6698_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27992;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x3e:
        {
// switch_6698_case_0x3e
            var_8 = 4;
            var_16 = 28136;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A90(var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
    }
}
// fun_6E90
fun_6E90() {
    pri = arg_4;
    OP_JNZ lab_6EC8
    var_8 = 0;
    pri = fun_1108()
// lab_6EC8
    pri = arg_1;
    switch (pri) {
// switch_82A0
        case default:
        {
// switch_82A0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29208;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1938(var_264)
            OP_JZER lab_8868
            pri = arg_3;
            switch (pri) {
// switch_8810
                case default:
                {
// switch_8810_case_default
                    OP_JUMP lab_8B20
// lab_8B20
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8B90
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8B90
                    var_8 = 0;
                    pri = fun_1148()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_8810_case_0x1
                    var_8 = 32;
                    var_16 = 29360;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_8810_case_default
                }
                case 0x2:
                {
// switch_8810_case_0x2
                    var_8 = 32;
                    var_16 = 29464;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_8810_case_default
                }
                case 0x3:
                {
// switch_8810_case_0x3
                    var_8 = 32;
                    var_16 = 29264;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_8810_case_default
                }
            }
// lab_8868
            pri = arg_1;
            OP_JZER lab_88B8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_88B8
            pri = 0;
            OP_JUMP lab_88C0
// lab_88B8
            pri = 1;
// lab_88C0
            OP_JZER lab_8928
            var_8 = 29560;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0AD0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_8928
            pri = 1;
            OP_JUMP lab_8930
// lab_8928
            pri = 0;
// lab_8930
            OP_JZER lab_8980
            var_8 = 32;
            var_16 = 29656;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_8B20
// lab_8980
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_89E8
            var_8 = 32;
            var_16 = 29816;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_8B20
// lab_89E8
            var_16 = 29936;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AD0(var_24, var_16)
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
            var_176 = 30040;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 30056;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_82A0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x1:
        {
// switch_82A0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x2:
        {
// switch_82A0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x3:
        {
// switch_82A0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x4:
        {
// switch_82A0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x5:
        {
// switch_82A0_case_0x5
            var_8 = 1;
            var_16 = 28688;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A90(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0E30(var_40)
            OP_JUMP switch_82A0_case_default
        }
        case 0x6:
        {
// switch_82A0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x7:
        {
// switch_82A0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x8:
        {
// switch_82A0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x9:
        {
// switch_82A0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0xa:
        {
// switch_82A0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0xb:
        {
// switch_82A0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0xc:
        {
// switch_82A0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0xd:
        {
// switch_82A0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0xe:
        {
// switch_82A0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0xf:
        {
// switch_82A0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x10:
        {
// switch_82A0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x11:
        {
// switch_82A0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x12:
        {
// switch_82A0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x13:
        {
// switch_82A0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x14:
        {
// switch_82A0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x15:
        {
// switch_82A0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x16:
        {
// switch_82A0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x17:
        {
// switch_82A0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x18:
        {
// switch_82A0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x19:
        {
// switch_82A0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x1a:
        {
// switch_82A0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x1b:
        {
// switch_82A0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x1c:
        {
// switch_82A0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x1d:
        {
// switch_82A0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x1e:
        {
// switch_82A0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x1f:
        {
// switch_82A0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x20:
        {
// switch_82A0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x21:
        {
// switch_82A0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x22:
        {
// switch_82A0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x23:
        {
// switch_82A0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x24:
        {
// switch_82A0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x25:
        {
// switch_82A0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x26:
        {
// switch_82A0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x27:
        {
// switch_82A0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x28:
        {
// switch_82A0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x29:
        {
// switch_82A0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x2a:
        {
// switch_82A0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x2b:
        {
// switch_82A0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x2c:
        {
// switch_82A0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x2d:
        {
// switch_82A0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x2e:
        {
// switch_82A0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x2f:
        {
// switch_82A0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x30:
        {
// switch_82A0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x31:
        {
// switch_82A0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x32:
        {
// switch_82A0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x33:
        {
// switch_82A0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x34:
        {
// switch_82A0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x35:
        {
// switch_82A0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x36:
        {
// switch_82A0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x37:
        {
// switch_82A0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x38:
        {
// switch_82A0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x39:
        {
// switch_82A0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x3a:
        {
// switch_82A0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x3b:
        {
// switch_82A0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x3c:
        {
// switch_82A0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28784;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x3d:
        {
// switch_82A0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28960;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x3e:
        {
// switch_82A0_case_0x3e
            var_8 = 3;
            var_16 = 29104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A90(var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
    }
}
// fun_8BC0
fun_8BC0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8DD0(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 30104;
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
    var_424 = 30160;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 30176;
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
    OP_JZER lab_8DB8
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_8DB8
    pri = 0;
    return pri;
}
// fun_8DD0
fun_8DD0() {
    var_8 = arg_1;
    var_16 = 30224;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0A90(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8E18
fun_8E18() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_8EB0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B08(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_2F78(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_8EB0
    var_8 = 8;
    var_16 = 8;
    pri = fun_0090(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_9008
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_8F70
    var_24 = 30328;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_8F70
    pri = 1;
    OP_JUMP lab_8F78
// lab_9008
    pri = 0;
    return pri;
// lab_8F70
    pri = 0;
// lab_8F78
    OP_JZER lab_9008
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B08(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_2F78(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_9018
fun_9018() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_9398(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9080
fun_9080() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_90F0
    OP_CONST_S -8, 1
// lab_90F0
    pri = arg_0;
    OP_JNZ lab_9110
    OP_ZERO_P_S -8
// lab_9110
    pri = var_8;
    OP_JZER lab_9198
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0090(var_16)
    var_32 = 0;
    pri = fun_0168()
    pri = ItemCloseDescWindow()
// lab_9198
    pri = 0;
    return pri;
}
// fun_91B0
fun_91B0() {
    var_8 = 30432;
    var_16 = 8;
    pri = fun_29C0(var_8)
    var_24 = 0;
    pri = fun_29F8()
    var_32 = 0;
    var_40 = 8;
    pri = fun_2AC8(var_32)
    var_48 = 1;
    var_56 = arg_1;
    var_64 = 1;
    var_72 = 24;
    pri = fun_2C08(var_64, var_56, var_48)
    OP_CONST_S -8, 6088246355923164688
    OP_CONST_S -16, -3980990967343358874
    pri = arg_3;
    OP_JZER lab_92C8
    OP_CONST_S -8, 6088249654458049321
    OP_CONST_S -16, -3980992066854987085
// lab_92C8
    var_8 = 6;
    var_16 = 4;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_8E18(var_24, var_16, var_8)
    var_40 = 2;
    var_48 = 1;
    var_56 = 9;
    var_64 = var_16;
    var_72 = var_8;
    var_80 = 0;
    var_88 = 0;
    var_96 = 56;
    pri = fun_9018(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 0;
    pri = fun_2A98()
    var_112 = arg_2;
    var_120 = 8;
    pri = fun_2F40(var_112)
    pri = 0;
    return pri;
}
// fun_9398
fun_9398() {
    var_8 = 30592;
    var_16 = 8;
    pri = fun_29C0(var_8)
    var_24 = 0;
    pri = fun_29F8()
    pri = arg_3;
    OP_JNZ lab_94B8
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_9480
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_9528(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_94A8
// lab_94B8
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_96C8(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_9480
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_95F0(var_16, var_8)
// lab_94A8
    OP_JUMP lab_9500
// lab_9500
    var_8 = 0;
    pri = fun_2A98()
    pri = 0;
    return pri;
}
// fun_9528
fun_9528() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_96C8(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_95D8
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_95D8
    pri = 0;
    return pri;
}
// fun_95F0
fun_95F0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_2B18(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_2680(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_2778(var_72)
    var_88 = 0;
    pri = fun_2838()
    var_96 = 0;
    var_104 = 8;
    pri = fun_2AC8(var_96)
    pri = 0;
    return pri;
}
// fun_96C8
fun_96C8() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_9710
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_99D0(var_8)
// lab_9710
    pri = arg_4;
    OP_JNZ lab_9778
    var_8 = 0;
    var_16 = 8;
    pri = fun_2AC8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2B18(var_40, var_32, var_24)
// lab_9778
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_9818
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_2B68(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_2680(var_56, var_48, var_40)
    OP_JUMP lab_9908
// lab_9818
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_98D0
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_98D0
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_98D0
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_2680(var_24, var_16, var_8)
// lab_9908
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_9948
    var_8 = 0;
    var_16 = 8;
    pri = fun_0460(var_8)
// lab_9948
    var_8 = 1;
    var_16 = 8;
    pri = fun_2778(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_9BD8(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_9080(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_99D0
fun_99D0() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_9A30
    var_16 = 30752;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_9A30
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_9B70
        case default:
        {
// switch_9B70_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_9B60
            var_16 = 31296;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_9B60
            OP_JUMP lab_9BA8
// lab_9BA8
            var_8 = 31512;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_9B70_case_0x1
            var_8 = 30968;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9BA8
        }
        case 0x2:
        {
// switch_9B70_case_0x2
            var_8 = 31096;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9BA8
        }
    }
}
// fun_9BD8
fun_9BD8() {
    pri = arg_2;
    OP_JNZ lab_9CC0
    var_8 = 0;
    var_16 = 8;
    pri = fun_2AC8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2B18(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_2BB8(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_9CC0
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_2680(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_2778(var_40)
    var_56 = 0;
    pri = fun_2838()
    pri = 0;
    return pri;
}
// fun_9D38
fun_9D38() {
    pri = 31696;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_9DC0
// lab_9DC0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_9F40
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_9F30
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_9E80
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_9E80
    pri = 0;
    OP_JUMP lab_9E88
// lab_9F40
    pri = 0;
    return pri;
// lab_9F30
    OP_JUMP lab_9DB8
// lab_9DB8
    OP_INC_P_S -936
// lab_9E80
    pri = 1;
// lab_9E88
    OP_JZER lab_9F00
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_9EF8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_9F00
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_9EF8
}
// fun_9F60
fun_9F60() {
    var_8 = -4562270413023387603;
    pri = WorkGet(var_8)
    return pri;
}
// fun_9F98
fun_9F98() {
    var_8 = 0;
    pri = fun_9F60()
    switch (pri) {
// switch_A048
        case default:
        {
// switch_A048_case_default
            pri = arg_1;
            return pri;
            OP_JUMP lab_A090
// lab_A090
            pri = arg_1;
            return pri;
        }
        case 0x0:
        {
// switch_A048_case_0x0
            pri = arg_0;
            return pri;
            OP_JUMP lab_A090
        }
        case 0x1:
        {
// switch_A048_case_0x1
            pri = arg_1;
            return pri;
            OP_JUMP lab_A090
        }
        case 0x2:
        {
// switch_A048_case_0x2
            pri = arg_2;
            return pri;
            OP_JUMP lab_A090
        }
    }
}
// fun_A0A0
fun_A0A0() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_A0E8
    pri = arg_0;
    return pri;
// lab_A0E8
    pri = arg_1;
    return pri;
}
// fun_A0F8
fun_A0F8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_A190
    var_8 = 1;
    var_16 = 0;
    var_24 = 32616;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0338(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03A8()
    var_56 = 0;
    pri = fun_1BE0()
// lab_A190
    pri = arg_4;
    OP_JZER lab_A1C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1C08(var_8)
// lab_A1C8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_A220
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_A220
    pri = 0;
    OP_JUMP lab_A228
// lab_A220
    pri = 1;
// lab_A228
    OP_JZER lab_A2F0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_A2F0
    var_16 = 0;
    pri = fun_0438()
    OP_JZER lab_A2C8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1B20(var_32, var_24)
    OP_JUMP lab_A2F0
// lab_A2F0
    pri = arg_2;
    OP_JZER lab_A3C8
    var_8 = 0;
    pri = fun_0438()
    OP_JZER lab_A398
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_16B0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_07D8(var_40)
    OP_JUMP lab_A3C8
// lab_A3C8
    pri = arg_3;
    OP_JZER lab_A400
    var_8 = 1;
    var_16 = 8;
    pri = fun_1BA8(var_8)
// lab_A400
    pri = 0;
    return pri;
// lab_A398
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_16B0(var_16, var_8)
// lab_A2C8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1B20(var_16, var_8)
}
// fun_A410
fun_A410() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_9D38(var_24)
    pri = 0;
    return pri;
}
// fun_A478
fun_A478() {
    pri = g_mode;
    switch (pri) {
// switch_A538
        case default:
        {
// switch_A538_case_default
            pri = CommandNOP()
            OP_JUMP lab_A580
// lab_A580
            pri = 0;
            return pri;
        }
        case 0xc491ec1ea7f59041:
        {
// switch_A538_case_0xc491ec1ea7f59041
            var_8 = 0;
            pri = fun_C9D8()
            OP_JUMP lab_A580
        }
        case 0x0:
        {
// switch_A538_case_0x0
            var_8 = 0;
            pri = fun_A590()
            OP_JUMP lab_A580
        }
        case 0x58bab621e49623a5:
        {
// switch_A538_case_0x58bab621e49623a5
            var_8 = 0;
            pri = fun_C880()
            OP_JUMP lab_A580
        }
    }
}
// fun_A590
fun_A590() {
    pri = 0;
    return pri;
}
// fun_A5A8
fun_A5A8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_A0F8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_A600
fun_A600() {
    pri = 0;
    return pri;
}
// fun_A618
fun_A618() {
    pri = 0;
    return pri;
}
// fun_A630
fun_A630() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    var_24 = 0;
    var_32 = 4630347809383304397;
    var_40 = 0;
    OP_PUSH5_C 4672456133296951132, 4655852169062126715, 4671120072737575404, 4672461386213752832, 4655869805228636242
    var_48 = 4671121254712575263;
    var_56 = 1;
    pri = EvCameraMove(var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16)
    var_64 = 0;
    pri = fun_2EB0()
    var_72 = 10;
    var_80 = 8;
    pri = fun_0090(var_72)
    var_88 = 1;
    var_96 = 1;
    OP_PUSH4_C -4583257045779611648, 4672483074080610714, 4671099558599380173, 8802641224559852288
    var_104 = 48;
    pri = fun_0748(var_96, var_88, var_80, var_72, var_64, var_56)
    var_112 = 1;
    var_120 = 8;
    pri = fun_0090(var_112)
    var_128 = 0;
    var_136 = 1106296903455206425;
    var_144 = 16;
    pri = fun_1800(var_136, var_128)
    var_152 = 1;
    var_160 = 1;
    var_168 = -1;
    OP_PUSH2_C 8802641224559852288, 1106296903455206425
    var_176 = 40;
    pri = fun_1188(var_168, var_160, var_152, var_144, var_136)
    var_184 = 0;
    var_192 = 4630347809383304397;
    var_200 = 3;
    OP_PUSH5_C 4672478458880553124, 4655811003346782781, 4671112821458390221, 4672488203302354289, 4655843724812825395
    var_208 = 4671115014984087634;
    var_216 = 20;
    pri = EvCameraMove(var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_224 = 1;
    var_232 = 0;
    var_240 = 4641240890982006784;
    var_248 = 0;
    var_256 = 0;
    OP_PUSH4_C 4672455311412009370, 4671099558599380173, 4607182418800017408, 8802641224559852288
    var_264 = 72;
    pri = fun_0810(var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_272 = 0;
    var_280 = 3;
    var_288 = 0;
    var_296 = 100;
    var_304 = -1;
    OP_PUSH2_C -5515017848441545026, 1106296903455206425
    var_312 = 56;
    pri = fun_24B8(var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    var_320 = 1;
    var_328 = 8;
    pri = fun_2778(var_320)
    var_336 = 0;
    pri = fun_2838()
    var_344 = 8802641224559852288;
    var_352 = 8;
    pri = fun_0930(var_344)
    var_360 = 0;
    pri = fun_2EB0()
    var_368 = 0;
    var_376 = 1;
    var_384 = 1106296903455206425;
    var_392 = 24;
    pri = fun_8BC0(var_384, var_376, var_368)
    var_400 = 1;
    var_408 = 8;
    pri = fun_0090(var_400)
    var_416 = 1106296903455206425;
    var_424 = 8;
    pri = fun_0B08(var_416)
    var_432 = 15;
    var_440 = 8;
    pri = fun_0090(var_432)
    var_448 = 1106296903455206425;
    var_456 = 8;
    pri = fun_1748(var_448)
    var_464 = 0;
    var_472 = 10;
    OP_PUSH3_C -4618891777831180697, -4620693217682128896, 1106296903455206425
    var_480 = 40;
    pri = fun_16F0(var_472, var_464, var_456, var_448, var_440)
    var_488 = 1;
    var_496 = 1;
    var_504 = 30;
    var_512 = 6;
    var_520 = 1106296903455206425;
    var_528 = 40;
    pri = fun_1240(var_520, var_512, var_504, var_496, var_488)
    var_536 = 40;
    var_544 = 8;
    pri = fun_0090(var_536)
    var_552 = 0;
    var_560 = 3;
    var_568 = 0;
    var_576 = 100;
    var_584 = -1;
    OP_PUSH2_C -5515018947953173237, 1106296903455206425
    var_592 = 56;
    pri = fun_24B8(var_584, var_576, var_568, var_560, var_552, var_544, var_536)
    var_600 = 1;
    var_608 = 8;
    pri = fun_2778(var_600)
    var_616 = 0;
    pri = fun_2838()
    var_624 = 15;
    var_632 = 8;
    pri = fun_0090(var_624)
    var_640 = 1106296903455206425;
    var_648 = 8;
    pri = fun_1748(var_640)
    var_656 = 8;
    var_664 = 5;
    var_672 = 0;
    var_680 = 0;
    var_688 = 1106296903455206425;
    var_696 = 40;
    pri = fun_16F0(var_688, var_680, var_672, var_664, var_656)
    var_704 = 1;
    var_712 = 1;
    var_720 = -1;
    OP_PUSH2_C 8802641224559852288, 1106296903455206425
    var_728 = 40;
    pri = fun_1188(var_720, var_712, var_704, var_696, var_688)
    var_736 = 15;
    var_744 = 8;
    pri = fun_0090(var_736)
    var_752 = 0;
    var_760 = 3;
    var_768 = 0;
    var_776 = 100;
    var_784 = -1;
    OP_PUSH2_C -5515020047464801448, 1106296903455206425
    var_792 = 56;
    pri = fun_24B8(var_784, var_776, var_768, var_760, var_752, var_744, var_736)
    var_800 = 1106296903455206425;
    var_808 = 8;
    pri = fun_0B08(var_800)
    var_816 = 1;
    var_824 = 8;
    pri = fun_2778(var_816)
    var_832 = 0;
    var_840 = 8079526073693503026;
    var_848 = 0;
    var_856 = 24;
    pri = fun_2868(var_848, var_840, var_832)
    var_864 = 0;
    var_872 = 8079524974181874815;
    var_880 = 1;
    var_888 = 24;
    pri = fun_2868(var_880, var_872, var_864)
    var_904 = 0;
    var_912 = 1;
    var_920 = 0;
    var_928 = 1;
    var_936 = 32;
    pri = fun_2950(var_928, var_920, var_912, var_904)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_C5B8
        case default:
        {
// switch_C5B8_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_C5B8_case_0x0
            var_8 = 1106296903455206425;
            var_16 = 8;
            pri = fun_1748(var_8)
            var_24 = 2;
            var_32 = 2;
            var_40 = 1106296903455206425;
            var_48 = 24;
            pri = fun_1878(var_40, var_32, var_24)
            var_56 = 0;
            var_64 = 0;
            var_72 = 1106296903455206425;
            var_80 = 24;
            pri = fun_8BC0(var_72, var_64, var_56)
            var_88 = 1;
            var_96 = 8;
            pri = fun_0090(var_88)
            var_104 = 1106296903455206425;
            var_112 = 8;
            pri = fun_0B08(var_104)
            var_120 = 0;
            var_128 = 3;
            var_136 = 0;
            var_144 = 100;
            var_152 = -1;
            OP_PUSH2_C -5515012350883403971, 1106296903455206425
            var_160 = 56;
            pri = fun_24B8(var_152, var_144, var_136, var_128, var_120, var_112, var_104)
            var_168 = 1;
            var_176 = 8;
            pri = fun_2778(var_168)
            var_184 = 0;
            pri = fun_2838()
            var_200 = 126;
            var_208 = 125;
            var_216 = 124;
            var_224 = 24;
            pri = fun_9F98(var_216, var_208, var_200)
            var_16 = pri;
            var_232 = 8;
            var_240 = 0;
            var_248 = 0;
            var_256 = 0;
            var_264 = var_16;
            var_272 = 40;
            pri = fun_2C58(var_264, var_256, var_248, var_240, var_232)
            var_280 = 0;
            pri = fun_2D70()
            OP_JZER lab_B070
            var_288 = 0;
            pri = fun_2E60()
// lab_B070
            var_8 = 8316871755620665972;
            var_16 = 8;
            pri = fun_0570(var_8)
            var_24 = 0;
            pri = fun_05A0()
            var_32 = 1;
            var_40 = 1;
            OP_PUSH4_C -4583844624793495142, 4672486097737587098, 4671067947640081613, 8316871755620665972
            var_48 = 48;
            pri = fun_0748(var_40, var_32, var_24, var_16, var_8, var_0)
            var_56 = 8;
            var_64 = 1;
            var_72 = 0;
            var_80 = 0;
            var_88 = 1106296903455206425;
            var_96 = 40;
            pri = fun_16F0(var_88, var_80, var_72, var_64, var_56)
            var_104 = 0;
            var_112 = 1;
            var_120 = 1106296903455206425;
            var_128 = 24;
            pri = fun_8BC0(var_120, var_112, var_104)
            var_136 = 1;
            var_144 = 8;
            pri = fun_0090(var_136)
            var_152 = 1106296903455206425;
            var_160 = 8;
            pri = fun_0B08(var_152)
            var_168 = 3;
            var_176 = 3;
            var_184 = 1106296903455206425;
            var_192 = 24;
            pri = fun_1878(var_184, var_176, var_168)
            var_200 = 1;
            var_208 = 1;
            var_216 = 1;
            OP_PUSH2_C 8802641224559852288, 1106296903455206425
            var_224 = 40;
            pri = fun_1188(var_216, var_208, var_200, var_192, var_184)
            var_232 = 15;
            var_240 = 8;
            pri = fun_0090(var_232)
            var_248 = 0;
            var_256 = 4630347809383304397;
            var_264 = 3;
            OP_PUSH5_C 4672478458880553124, 4655811003346782781, 4671112821458390221, 4672488203302354289, 4655843724812825395
            var_272 = 4671115014984087634;
            var_280 = 1;
            pri = EvCameraMove(var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208)
            var_288 = 0;
            pri = fun_2EB0()
            var_296 = 32664;
            var_304 = 8;
            var_312 = 16;
            pri = fun_02D8(var_304, var_296)
            var_320 = 0;
            pri = fun_03A8()
            var_328 = 1;
            var_336 = 0;
            var_344 = 30;
            var_352 = 6;
            var_360 = 1106296903455206425;
            var_368 = 40;
            pri = fun_1240(var_360, var_352, var_344, var_336, var_328)
            var_376 = 0;
            var_384 = 10;
            var_392 = -4618891777831180697;
            var_400 = 0;
            var_408 = 1106296903455206425;
            var_416 = 40;
            pri = fun_16F0(var_408, var_400, var_392, var_384, var_376)
            var_424 = 30;
            var_432 = 8;
            pri = fun_0090(var_424)
            var_440 = 0;
            var_448 = 3;
            var_456 = 0;
            var_464 = 100;
            var_472 = -1;
            OP_PUSH2_C -5515014549906660393, 1106296903455206425
            var_480 = 56;
            pri = fun_24B8(var_472, var_464, var_456, var_448, var_440, var_432, var_424)
            var_488 = 1;
            var_496 = 8;
            pri = fun_2778(var_488)
            var_504 = 0;
            pri = fun_2838()
            var_512 = 0;
            var_520 = 7;
            var_528 = 1106296903455206425;
            var_536 = 24;
            pri = fun_1878(var_528, var_520, var_512)
            var_544 = 30;
            var_552 = 8;
            pri = fun_0090(var_544)
            var_560 = 2;
            var_568 = 1106296903455206425;
            var_576 = 16;
            pri = fun_1788(var_568, var_560)
            var_584 = 8;
            var_592 = 5;
            var_600 = 0;
            var_608 = 0;
            var_616 = 1106296903455206425;
            var_624 = 40;
            pri = fun_16F0(var_616, var_608, var_600, var_592, var_584)
            var_632 = 1;
            var_640 = 1;
            var_648 = -1;
            OP_PUSH2_C 8802641224559852288, 1106296903455206425
            var_656 = 40;
            pri = fun_1188(var_648, var_640, var_632, var_624, var_616)
            var_664 = 0;
            var_672 = 3;
            var_680 = 0;
            var_688 = 100;
            var_696 = -1;
            OP_PUSH2_C -5515015649418288604, 1106296903455206425
            var_704 = 56;
            pri = fun_24B8(var_696, var_688, var_680, var_672, var_664, var_656, var_648)
            var_712 = 1;
            var_720 = 8;
            pri = fun_2778(var_712)
            var_728 = 0;
            pri = fun_2838()
            var_736 = 1;
            var_744 = 1;
            var_752 = -1;
            var_760 = -1;
            var_768 = 0;
            var_776 = 8;
            var_784 = 1106296903455206425;
            var_792 = 56;
            pri = fun_4B58(var_784, var_776, var_768, var_760, var_752, var_744, var_736)
            var_800 = 1106296903455206425;
            var_808 = 8;
            pri = fun_1748(var_800)
            var_816 = 6;
            var_824 = 1106296903455206425;
            var_832 = 16;
            pri = fun_1788(var_824, var_816)
            var_840 = 1106296903455206425;
            var_848 = 8;
            pri = fun_1840(var_840)
            var_856 = 0;
            var_864 = 3;
            var_872 = 0;
            var_880 = 100;
            var_888 = -1;
            OP_PUSH2_C -5515025545022942503, 1106296903455206425
            var_896 = 56;
            pri = fun_24B8(var_888, var_880, var_872, var_864, var_856, var_848, var_840)
            var_904 = 1;
            var_912 = 8;
            pri = fun_2778(var_904)
            var_920 = 0;
            pri = fun_2838()
            var_928 = 32712;
            var_936 = 1106296903455206425;
            var_944 = 16;
            pri = fun_0D08(var_936, var_928)
            var_952 = 1;
            var_960 = 3;
            var_968 = 0;
            var_976 = 8;
            var_984 = 1106296903455206425;
            var_992 = 40;
            pri = fun_6E90(var_984, var_976, var_968, var_960, var_952)
            var_1000 = -1;
            var_1008 = 1106296903455206425;
            var_1016 = 16;
            pri = fun_16B0(var_1008, var_1000)
            var_1024 = 1;
            var_1032 = 0;
            var_1040 = 30;
            pri = float(var_1040)
            var_1048 = pri;
            var_1056 = 0;
            pri = float(var_1056)
            var_1064 = pri;
            var_1072 = 0;
            OP_PUSH4_C 4672493684367818752, 4671148157013327872, 4611686018427387904, 1106296903455206425
            var_1080 = 72;
            pri = fun_0810(var_1072, var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008)
            var_1088 = 50;
            var_1096 = 8;
            pri = fun_0090(var_1088)
            var_1104 = 0;
            var_1112 = 0;
            var_1120 = 0;
            var_1128 = 60;
            pri = float(var_1128)
            var_1136 = pri;
            var_1144 = 8802641224559852288;
            var_1152 = 40;
            pri = fun_0888(var_1144, var_1136, var_1128, var_1120, var_1112)
            var_1160 = 8802641224559852288;
            var_1168 = 8;
            pri = fun_0930(var_1160)
            var_1176 = 1106296903455206425;
            var_1184 = 8;
            pri = fun_0930(var_1176)
            var_1192 = 80;
            var_1200 = 8;
            pri = fun_0090(var_1192)
            var_1208 = 32888;
            var_1216 = 8;
            pri = fun_29C0(var_1208)
            var_1224 = 0;
            pri = fun_29F8()
            var_1232 = 1;
            var_1240 = 1;
            var_1248 = 40;
            pri = float(var_1248)
            var_1256 = pri;
            OP_PUSH3_C 4672452012877126042, 4671068497395895501, 8316871755620665972
            var_1264 = 48;
            pri = fun_0748(var_1256, var_1248, var_1240, var_1232, var_1224, var_1216)
            var_1272 = 0;
            var_1280 = 4630347809383304397;
            var_1288 = 3;
            OP_PUSH5_C 4672491988371132908, 4655839326766314291, 4671092106659322921, 4672501732792934072, 4655872048232356905
            var_1296 = 4671094300185020334;
            var_1304 = 15;
            pri = EvCameraMove(var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256, var_1248, var_1240, var_1232)
            var_1312 = 0;
            var_1320 = 0;
            var_1328 = 0;
            var_1336 = 0;
            OP_PUSH2_C 8316871755620665972, 8802641224559852288
            var_1344 = 48;
            pri = fun_08D8(var_1336, var_1328, var_1320, var_1312, var_1304, var_1296)
            var_1352 = 0;
            var_1360 = 3;
            var_1368 = 0;
            var_1376 = 100;
            var_1384 = -1;
            OP_PUSH2_C -8154079275173996371, 8316871755620665972
            var_1392 = 56;
            pri = fun_2568(var_1384, var_1376, var_1368, var_1360, var_1352, var_1344, var_1336)
            var_1400 = 1;
            var_1408 = 8;
            pri = fun_2778(var_1400)
            var_1416 = 0;
            pri = fun_2838()
            var_1424 = 8802641224559852288;
            var_1432 = 8;
            pri = fun_0930(var_1424)
            var_1440 = 0;
            pri = fun_2EB0()
            var_1448 = 0;
            var_1456 = 3;
            var_1464 = 0;
            var_1472 = 100;
            var_1480 = -1;
            OP_PUSH2_C -8154080374685624582, 8316871755620665972
            var_1488 = 56;
            pri = fun_2568(var_1480, var_1472, var_1464, var_1456, var_1448, var_1440, var_1432)
            var_1496 = 1;
            var_1504 = 8;
            pri = fun_2778(var_1496)
            var_1512 = 0;
            pri = fun_2838()
            var_1520 = 30;
            var_1528 = 8;
            pri = fun_0090(var_1520)
            var_1536 = 0;
            var_1544 = 0;
            var_1552 = 0;
            var_1560 = 0;
            OP_PUSH2_C 8802641224559852288, 8316871755620665972
            var_1568 = 48;
            pri = fun_08D8(var_1560, var_1552, var_1544, var_1536, var_1528, var_1520)
            var_1576 = 0;
            var_1584 = 3;
            var_1592 = 0;
            var_1600 = 100;
            var_1608 = -1;
            OP_PUSH2_C -8154094668336791325, 8316871755620665972
            var_1616 = 56;
            pri = fun_2568(var_1608, var_1600, var_1592, var_1584, var_1576, var_1568, var_1560)
            var_1624 = 1;
            var_1632 = 8;
            pri = fun_2778(var_1624)
            var_1640 = 0;
            pri = fun_2838()
            var_1648 = 8316871755620665972;
            var_1656 = 8;
            pri = fun_0930(var_1648)
            var_1664 = 0;
            pri = fun_2A98()
            OP_PUSH2_C 2272013230295110087, -992265296180185582
            var_1680 = 16;
            pri = fun_A0A0(var_1672, var_1664)
            var_24 = pri;
            var_1696 = 12;
            var_1704 = 10;
            var_1712 = 16;
            pri = fun_A0A0(var_1704, var_1696)
            var_32 = pri;
            var_1720 = 0;
            var_1728 = var_32;
            var_1736 = var_24;
            var_1744 = 8316871755620665972;
            var_1752 = 32;
            pri = fun_91B0(var_1744, var_1736, var_1728, var_1720)
            var_1760 = 33104;
            var_1768 = 8;
            pri = fun_29C0(var_1760)
            var_1776 = 0;
            pri = fun_29F8()
            var_1784 = 0;
            var_1792 = 3;
            var_1800 = 0;
            var_1808 = 100;
            var_1816 = -1;
            OP_PUSH2_C -8154095767848419536, 8316871755620665972
            var_1824 = 56;
            pri = fun_2568(var_1816, var_1808, var_1800, var_1792, var_1784, var_1776, var_1768)
            var_1832 = 1;
            var_1840 = 8;
            pri = fun_2778(var_1832)
            var_1848 = 0;
            pri = fun_2838()
            var_1856 = 1;
            var_1864 = 0;
            var_1872 = 4641240890982006784;
            var_1880 = 0;
            var_1888 = 0;
            OP_PUSH4_C 4672348383906208154, 4671067947640081613, 4607182418800017408, 8316871755620665972
            var_1896 = 72;
            pri = fun_0810(var_1888, var_1880, var_1872, var_1864, var_1856, var_1848, var_1840, var_1832, var_1824)
            var_1904 = 50;
            var_1912 = 8;
            pri = fun_0090(var_1904)
            var_1920 = 0;
            var_1928 = 0;
            var_1936 = 0;
            OP_PUSH2_C -4584224616012054528, 8802641224559852288
            var_1944 = 40;
            pri = fun_0888(var_1936, var_1928, var_1920, var_1912, var_1904)
            var_1952 = 8802641224559852288;
            var_1960 = 8;
            pri = fun_0930(var_1952)
            var_1968 = 120;
            var_1976 = 8;
            pri = fun_0090(var_1968)
            var_1984 = 1;
            var_1992 = 0;
            var_2000 = 32616;
            var_2008 = 8;
            var_2016 = 32;
            pri = fun_0338(var_2008, var_2000, var_1992, var_1984)
            var_2024 = 0;
            pri = fun_03A8()
            var_2032 = 0;
            var_2040 = 1106296903455206425;
            var_2048 = 16;
            pri = fun_07A0(var_2040, var_2032)
            var_2056 = 0;
            var_2064 = 8316871755620665972;
            var_2072 = 16;
            pri = fun_07A0(var_2064, var_2056)
            var_2080 = 8316871755620665972;
            var_2088 = 8;
            pri = fun_0930(var_2080)
            var_2096 = 3;
            var_2104 = 1;
            pri = EvCameraEnd(var_2104, var_2096)
            var_2112 = 0;
            pri = fun_2A98()
            pri = 1;
            return pri;
            OP_JUMP switch_C5B8_case_default
        }
        case 0x1:
        {
// switch_C5B8_case_0x1
            var_8 = 1106296903455206425;
            var_16 = 8;
            pri = fun_1748(var_8)
            var_24 = 2;
            var_32 = 1106296903455206425;
            var_40 = 16;
            pri = fun_1788(var_32, var_24)
            var_48 = 0;
            var_56 = 0;
            var_64 = 1106296903455206425;
            var_72 = 24;
            pri = fun_8BC0(var_64, var_56, var_48)
            var_80 = 1;
            var_88 = 8;
            pri = fun_0090(var_80)
            var_96 = 1106296903455206425;
            var_104 = 8;
            pri = fun_0B08(var_96)
            var_112 = 0;
            var_120 = 3;
            var_128 = 0;
            var_136 = 100;
            var_144 = -1;
            OP_PUSH2_C -5515013450395032182, 1106296903455206425
            var_152 = 56;
            pri = fun_24B8(var_144, var_136, var_128, var_120, var_112, var_104, var_96)
            var_160 = 1;
            var_168 = 8;
            pri = fun_2778(var_160)
            var_176 = 0;
            pri = fun_2838()
            var_184 = 1;
            var_192 = 0;
            var_200 = 32616;
            var_208 = 8;
            var_216 = 32;
            pri = fun_0338(var_208, var_200, var_192, var_184)
            var_224 = 0;
            pri = fun_03A8()
            var_232 = 1;
            var_240 = 1;
            var_248 = 0;
            pri = float(var_248)
            var_256 = pri;
            var_264 = 24746;
            pri = float(var_264)
            var_272 = pri;
            var_280 = 19611;
            pri = float(var_280)
            var_288 = pri;
            var_296 = 8802641224559852288;
            var_304 = 48;
            pri = fun_0748(var_296, var_288, var_280, var_272, var_264, var_256)
            var_312 = 3;
            var_320 = 1;
            pri = EvCameraEnd(var_320, var_312)
            var_328 = 15;
            var_336 = 8;
            pri = fun_0090(var_328)
            var_344 = 1106296903455206425;
            var_352 = 8;
            pri = fun_18E0(var_344)
            var_360 = 8802641224559852288;
            var_368 = 8;
            pri = fun_0930(var_360)
            var_376 = 1;
            var_384 = 1106296903455206425;
            var_392 = 16;
            pri = fun_16B0(var_384, var_376)
            var_400 = 8;
            var_408 = 1;
            var_416 = 0;
            var_424 = 0;
            var_432 = 1106296903455206425;
            var_440 = 40;
            pri = fun_16F0(var_432, var_424, var_416, var_408, var_400)
            var_448 = 32664;
            var_456 = 8;
            var_464 = 16;
            pri = fun_02D8(var_456, var_448)
            var_472 = 0;
            pri = fun_03A8()
            pri = 0;
            return pri;
            OP_JUMP switch_C5B8_case_default
        }
    }
}
// fun_C608
fun_C608() {
    pri = 0;
    return pri;
}
// fun_C620
fun_C620() {
    pri = 0;
    return pri;
}
// fun_C638
fun_C638() {
    var_8 = 8316871755620665972;
    var_16 = 8;
    pri = fun_06F0(var_8)
    var_24 = 1106296903455206425;
    var_32 = 8;
    pri = fun_06F0(var_24)
    var_40 = -8918209179425425563;
    var_48 = 8;
    pri = fun_0570(var_40)
    var_56 = -3512005172569892056;
    var_64 = 8;
    pri = fun_0570(var_56)
    var_72 = 8003305528381221656;
    var_80 = 8;
    pri = fun_0570(var_72)
    var_88 = 5238682974890618049;
    var_96 = 8;
    pri = fun_0570(var_88)
    var_104 = 960;
    var_112 = 8;
    pri = fun_A410(var_104)
    var_120 = 10;
    var_128 = -2225298751995199961;
    pri = WorkSet(var_128, var_120)
    var_136 = 1551124569145526424;
    pri = VanishFlagReset(var_136)
    var_144 = 4416541122757820847;
    pri = VanishFlagReset(var_144)
    pri = 0;
    return pri;
}
// fun_C7E0
fun_C7E0() {
    pri = 0;
    return pri;
}
// fun_C7F8
fun_C7F8() {
    var_8 = 0;
    pri = fun_05A0()
    var_16 = 32664;
    var_24 = 8;
    var_32 = 16;
    pri = fun_02D8(var_24, var_16)
    var_40 = 0;
    pri = fun_03A8()
    pri = 0;
    return pri;
}
// fun_C868
fun_C868() {
    pri = 0;
    return pri;
}
// fun_C880
fun_C880() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_A5A8()
    var_16 = 0;
    pri = fun_A600()
    var_24 = 0;
    pri = fun_A618()
    var_32 = 0;
    pri = fun_A630()
    OP_JZER lab_C968
    var_40 = 0;
    pri = fun_C608()
    var_48 = 0;
    pri = fun_C638()
    var_56 = 0;
    pri = fun_C7F8()
    OP_JUMP lab_C9B0
// lab_C968
    var_8 = 0;
    pri = fun_C620()
    var_16 = 0;
    pri = fun_C7E0()
    var_24 = 0;
    pri = fun_C868()
// lab_C9B0
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_C9D8
fun_C9D8() {
    var_8 = 0;
    pri = fun_A600()
    var_16 = 0;
    pri = fun_C638()
    var_24 = 12;
    var_32 = 10;
    var_40 = 16;
    pri = fun_A0A0(var_32, var_24)
    var_48 = pri;
    pri = SetNpcLicenseCardFlag(var_48)
    pri = 0;
    return pri;
}
