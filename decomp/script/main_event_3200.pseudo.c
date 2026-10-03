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
    var_8 = arg_8;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_7;
    var_40 = arg_6;
    var_48 = arg_3;
    var_56 = 0;
    pri = float(var_56)
    var_64 = pri;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    pri = MapChangeCore_(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0500
fun_0500() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0548
// lab_0548
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0588
    OP_JUMP lab_05F8
// lab_0588
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_05C8
    OP_JUMP lab_05F8
// lab_05C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0548
// lab_05F8
    pri = 0;
    return pri;
}
// fun_0610
fun_0610() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0640
fun_0640() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_0678
// lab_0678
    var_8 = 0;
    pri = fun_07C0()
    OP_JNZ lab_06B0
    OP_JUMP lab_06E0
// lab_06B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0678
// lab_06E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_0710
// lab_0710
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0750
    pri = 0;
    return pri;
// lab_0750
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0710
    pri = 0;
    return pri;
}
// fun_0790
fun_0790() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_07C0
fun_07C0() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_07E8
fun_07E8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = CreateAttachModel_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0840
fun_0840() {
    var_8 = arg_0;
    pri = DeleteAttachModel_(var_8)
    return pri;
}
// fun_0870
fun_0870() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08C8
fun_08C8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0908
fun_0908() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0940
fun_0940() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0980
fun_0980() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_09B8
fun_09B8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAttachModelPosAndRotationByFieldObject_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_09F8
fun_09F8() {
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
// fun_0A70
fun_0A70() {
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
// fun_0B30
fun_0B30() {
    var_8 = arg_4;
    var_16 = arg_5;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartPathMove_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0B88
fun_0B88() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0BD8
fun_0BD8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0C30
fun_0C30() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1D10(var_8)
    OP_JZER lab_0CA8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1D40(var_24)
    OP_JNZ lab_0CA8
    pri = 0;
    return pri;
// lab_0CA8
    OP_JUMP lab_0CB8
// lab_0CB8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0D18
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0D18
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0CB8
    pri = 0;
    return pri;
}
// fun_0D58
fun_0D58() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0D90
fun_0D90() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0DD0
fun_0DD0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0E08
fun_0E08() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0E50
    pri = 0;
    return pri;
// lab_0E50
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0E90
// lab_0E90
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1D10(var_8)
    OP_JNZ lab_0F18
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0F08
    pri = 0;
    return pri;
// lab_0F18
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0F60
    pri = 0;
    return pri;
// lab_0F60
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0FC0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1130(var_8)
    pri = 0;
    return pri;
// lab_0FC0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0E90
    pri = 0;
    return pri;
// lab_0F08
    OP_JUMP lab_0F60
}
// fun_1008
fun_1008() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_1050
// lab_1050
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_10A8
    pri = 0;
    return pri;
// lab_10A8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_10E8
    pri = 0;
    return pri;
// lab_10E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1050
    pri = 0;
    return pri;
}
// fun_1130
fun_1130() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_1168
fun_1168() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_11B8
    pri = 0;
    return pri;
// lab_11B8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1D10(var_8)
    OP_JZER lab_12E8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1210
    OP_ZERO_P_S 64
// lab_12E8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1320
    OP_CONST_S 64, 1
// lab_1320
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1358
    OP_CONST_S 72, 1
// lab_1358
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
// lab_1210
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1238
    OP_ZERO_P_S 72
// lab_1238
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
    OP_JUMP lab_13F8
// lab_13F8
    pri = 0;
    return pri;
}
// fun_1408
fun_1408() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1448
fun_1448() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1488
fun_1488() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_14D0
// lab_14D0
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = IsAttachModelAnimationStateName_(var_24, var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1530
    pri = 0;
    return pri;
// lab_1530
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_1570
    pri = 0;
    return pri;
// lab_1570
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_14D0
    pri = 0;
    return pri;
}
// fun_15B8
fun_15B8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1610
fun_1610() {
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
// fun_1670
fun_1670() {
    OP_CONST_S -8, 4631530004285489152
    pri = arg_1;
    switch (pri) {
// switch_1A30
        case default:
        {
// switch_1A30_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_1A30_case_0x0
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
            pri = fun_1610(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1A30_case_default
        }
        case 0x1:
        {
// switch_1A30_case_0x1
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_1610(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1A30_case_default
        }
        case 0x2:
        {
// switch_1A30_case_0x2
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
            pri = fun_1610(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1A30_case_default
        }
        case 0x3:
        {
// switch_1A30_case_0x3
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 0;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_1610(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1A30_case_default
        }
        case 0x4:
        {
// switch_1A30_case_0x4
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
            pri = fun_1610(var_80, var_72, var_64, var_56, var_48, var_40)
            OP_JUMP switch_1A30_case_default
        }
        case 0x5:
        {
// switch_1A30_case_0x5
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
            pri = fun_1610(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1A30_case_default
        }
        case 0x6:
        {
// switch_1A30_case_0x6
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
            pri = fun_1610(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1A30_case_default
        }
        case 0x7:
        {
// switch_1A30_case_0x7
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_1610(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1A30_case_default
        }
    }
}
// fun_1AE0
fun_1AE0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B20
fun_1B20() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = ResetFieldObjectEyeLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B60
fun_1B60() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1BA0
fun_1BA0() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1BD8
fun_1BD8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1C18
fun_1C18() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1C50
fun_1C50() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1B60(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1BD8(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1CB8
fun_1CB8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1BA0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1C18(var_24)
    pri = 0;
    return pri;
}
// fun_1D10
fun_1D10() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1D40
fun_1D40() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1D70
fun_1D70() {
    OP_JUMP lab_1D88
// lab_1D88
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1E18
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1E08
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0E08(var_8)
    pri = 0;
    return pri;
// lab_1E18
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1EA8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1E98
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0E08(var_8)
    pri = 0;
    return pri;
// lab_1EA8
    pri = 0;
    return pri;
// lab_1E98
    OP_JUMP lab_1EB8
// lab_1EB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1D88
    pri = 0;
    return pri;
// lab_1E08
    OP_JUMP lab_1EB8
}
// fun_1EF8
fun_1EF8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0E08(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1D70(var_40)
    pri = 0;
    return pri;
}
// fun_1F80
fun_1F80() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1FB8
fun_1FB8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1FE0
fun_1FE0() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_2010
fun_2010() {
    var_8 = arg_20;
    var_16 = arg_19;
    var_24 = arg_18;
    var_32 = arg_17;
    var_40 = arg_16;
    var_48 = arg_15;
    var_56 = arg_14;
    var_64 = arg_13;
    var_72 = arg_12;
    var_80 = arg_11;
    var_88 = arg_10;
    var_96 = arg_9;
    var_104 = arg_8;
    var_112 = arg_7;
    var_120 = arg_6;
    var_128 = arg_5;
    var_136 = arg_4;
    var_144 = arg_3;
    var_152 = arg_2;
    var_160 = arg_1;
    var_168 = arg_0;
    pri = CreatePathObject_(var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_20E0
fun_20E0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_2118
fun_2118() {
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
// switch_2730
        case default:
        {
// switch_2730_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_2778
// lab_2778
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
            OP_JNZ lab_2820
            var_88 = 0;
            pri = fun_2AF0()
// lab_2820
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_2730_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_2318
                case default:
                {
// switch_2318_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_2390
// lab_2390
                    OP_JUMP lab_2778
                }
                case 0x0:
                {
// switch_2318_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_2390
                }
                case 0x1:
                {
// switch_2318_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_2390
                }
                case 0x2:
                {
// switch_2318_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_2390
                }
                case 0x3:
                {
// switch_2318_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_2390
                }
                case 0x4:
                {
// switch_2318_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_2390
                }
                case 0x5:
                {
// switch_2318_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_2390
                }
            }
        }
        case 0x65:
        {
// switch_2730_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_24D0
                case default:
                {
// switch_24D0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_2548
// lab_2548
                    OP_JUMP lab_2778
                }
                case 0x0:
                {
// switch_24D0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_2548
                }
                case 0x1:
                {
// switch_24D0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_2548
                }
                case 0x2:
                {
// switch_24D0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_2548
                }
                case 0x3:
                {
// switch_24D0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_2548
                }
                case 0x4:
                {
// switch_24D0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_2548
                }
                case 0x5:
                {
// switch_24D0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_2548
                }
            }
        }
        case 0x66:
        {
// switch_2730_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_2688
                case default:
                {
// switch_2688_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_2700
// lab_2700
                    OP_JUMP lab_2778
                }
                case 0x0:
                {
// switch_2688_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_2700
                }
                case 0x1:
                {
// switch_2688_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_2700
                }
                case 0x2:
                {
// switch_2688_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_2700
                }
                case 0x3:
                {
// switch_2688_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_2700
                }
                case 0x4:
                {
// switch_2688_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_2700
                }
                case 0x5:
                {
// switch_2688_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_2700
                }
            }
        }
    }
}
// fun_2838
fun_2838() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_2118(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_28A0
fun_28A0() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0DD0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2948
    pri = 1;
    return pri;
// lab_2948
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2990
fun_2990() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_29E0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_28A0(var_8)
    arg_2 = pri;
// lab_29E0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_2118(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2A40
fun_2A40() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2838(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2A90
fun_2A90() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_2A40(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2AF0
fun_2AF0() {
    OP_JUMP lab_2B08
// lab_2B08
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2B48
    pri = 0;
    return pri;
// lab_2B48
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2B08
    pri = 0;
    return pri;
}
// fun_2B88
fun_2B88() {
    var_8 = 0;
    pri = fun_2AF0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2C38
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_2C38
    pri = 0;
    return pri;
}
// fun_2C48
fun_2C48() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2C78
fun_2C78() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_2CA8
// lab_2CA8
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2CE8
    OP_JUMP lab_2D18
// lab_2CE8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2CA8
// lab_2D18
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2D60
fun_2D60() {
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
// fun_2DD0
fun_2DD0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2E48()
    return pri;
}
// fun_2E48
fun_2E48() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2E88
fun_2E88() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_2EC0
fun_2EC0() {
    OP_JUMP lab_2ED8
// lab_2ED8
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_2F20
    OP_JUMP lab_2F50
    OP_JUMP lab_2F40
// lab_2F20
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_2F50
    pri = 0;
    return pri;
// lab_2F40
    OP_JUMP lab_2ED8
}
// fun_2F60
fun_2F60() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2F90
fun_2F90() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2FE0
fun_2FE0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_3030
fun_3030() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_3080
fun_3080() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_30D0
fun_30D0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_3120
fun_3120() {
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    pri = PlayDemoScene_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_3188
fun_3188() {
    pri = arg_1;
    OP_JNZ lab_31D0
    var_8 = 648;
    pri = GetFnvHash64(var_8)
    arg_1 = pri;
// lab_31D0
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
// fun_3228
fun_3228() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_32A0
fun_32A0() {
    var_8 = 0;
    pri = fun_3228()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_3320
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_3320
    pri = 1;
    return pri;
// lab_3320
    var_8 = 0;
    pri = fun_3228()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_3360
    pri = 1;
    return pri;
// lab_3360
    var_8 = 0;
    pri = fun_3228()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_3390
fun_3390() {
    OP_JUMP lab_33A8
// lab_33A8
    pri = EvCameraMoveWait_()
    OP_JZER lab_33E0
    pri = 0;
    return pri;
// lab_33E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_33A8
    pri = 0;
    return pri;
}
// fun_3420
fun_3420() {
    var_8 = arg_0;
    pri = SetNpcLicenseCardFlag(var_8)
    pri = 0;
    return pri;
}
// fun_3458
fun_3458() {
    pri = arg_6;
    OP_JNZ lab_3490
    var_8 = 0;
    pri = fun_1408()
// lab_3490
    pri = arg_1;
    switch (pri) {
// switch_49F8
        case default:
        {
// switch_49F8_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4D48
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4D48
            pri = 1;
            OP_JUMP lab_4D50
// lab_4D48
            pri = 0;
// lab_4D50
            OP_JZER lab_4EA8
            var_16 = 8328;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0DD0(var_24, var_16)
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
            OP_JUMP lab_4F08
// lab_4EA8
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
// lab_4F08
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4F68
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4FC8
// lab_4F68
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4FC8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4FC8
            pri = arg_2;
            OP_JZER lab_5008
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_5008
            var_8 = 0;
            pri = fun_1448()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_49F8_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49F8_case_default
        }
        case 0x1:
        {
// switch_49F8_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49F8_case_default
        }
        case 0x2:
        {
// switch_49F8_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49F8_case_default
        }
        case 0x3:
        {
// switch_49F8_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49F8_case_default
        }
        case 0x4:
        {
// switch_49F8_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49F8_case_default
        }
        case 0x5:
        {
// switch_49F8_case_0x5
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_49F8_case_default
        }
        case 0x6:
        {
// switch_49F8_case_0x6
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_49F8_case_default
        }
        case 0x7:
        {
// switch_49F8_case_0x7
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_49F8_case_default
        }
        case 0x8:
        {
// switch_49F8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49F8_case_default
        }
        case 0x9:
        {
// switch_49F8_case_0x9
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_49F8_case_default
        }
        case 0xa:
        {
// switch_49F8_case_0xa
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_49F8_case_default
        }
        case 0xb:
        {
// switch_49F8_case_0xb
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_49F8_case_default
        }
        case 0xc:
        {
// switch_49F8_case_0xc
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_49F8_case_default
        }
        case 0xd:
        {
// switch_49F8_case_0xd
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_49F8_case_default
        }
        case 0xe:
        {
// switch_49F8_case_0xe
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_49F8_case_default
        }
        case 0xf:
        {
// switch_49F8_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49F8_case_default
        }
        case 0x10:
        {
// switch_49F8_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49F8_case_default
        }
        case 0x11:
        {
// switch_49F8_case_0x11
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_49F8_case_default
        }
        case 0x12:
        {
// switch_49F8_case_0x12
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_49F8_case_default
        }
        case 0x13:
        {
// switch_49F8_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49F8_case_default
        }
        case 0x14:
        {
// switch_49F8_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49F8_case_default
        }
        case 0x15:
        {
// switch_49F8_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49F8_case_default
        }
        case 0x16:
        {
// switch_49F8_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49F8_case_default
        }
        case 0x17:
        {
// switch_49F8_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49F8_case_default
        }
        case 0x18:
        {
// switch_49F8_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49F8_case_default
        }
        case 0x19:
        {
// switch_49F8_case_0x19
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_49F8_case_default
        }
        case 0x1a:
        {
// switch_49F8_case_0x1a
            var_8 = 1;
            var_16 = 5888;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D90(var_24, var_16, var_8)
            var_40 = 6024;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0D58(var_48, var_40)
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
            pri = fun_1168(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_49F8_case_default
        }
        case 0x1b:
        {
// switch_49F8_case_0x1b
            var_8 = 3;
            var_16 = 6112;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D90(var_24, var_16, var_8)
            var_40 = 6248;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0D58(var_48, var_40)
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
            pri = fun_1168(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_49F8_case_default
        }
        case 0x1c:
        {
// switch_49F8_case_0x1c
            var_8 = 2;
            var_16 = 6336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D90(var_24, var_16, var_8)
            var_40 = 6472;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0D58(var_48, var_40)
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
            pri = fun_1168(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_49F8_case_default
        }
        case 0x1d:
        {
// switch_49F8_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6560;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49F8_case_default
        }
        case 0x1e:
        {
// switch_49F8_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6696;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49F8_case_default
        }
        case 0x1f:
        {
// switch_49F8_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6832;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49F8_case_default
        }
        case 0x20:
        {
// switch_49F8_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6968;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49F8_case_default
        }
        case 0x21:
        {
// switch_49F8_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7088;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49F8_case_default
        }
        case 0x22:
        {
// switch_49F8_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7208;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49F8_case_default
        }
        case 0x23:
        {
// switch_49F8_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7344;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49F8_case_default
        }
        case 0x24:
        {
// switch_49F8_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7480;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49F8_case_default
        }
        case 0x25:
        {
// switch_49F8_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7616;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49F8_case_default
        }
        case 0x26:
        {
// switch_49F8_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7752;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49F8_case_default
        }
        case 0x27:
        {
// switch_49F8_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7896;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49F8_case_default
        }
        case 0x28:
        {
// switch_49F8_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8040;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49F8_case_default
        }
        case 0x29:
        {
// switch_49F8_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8184;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49F8_case_default
        }
    }
}
// fun_5038
fun_5038() {
    pri = arg_5;
    OP_JNZ lab_5070
    var_8 = 0;
    pri = fun_1408()
// lab_5070
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_50C0
    OP_CONST_S -8, -1
// lab_50C0
    pri = arg_1;
    switch (pri) {
// switch_6B78
        case default:
        {
// switch_6B78_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_7020
            var_520 = 28192;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0DD0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7020
            pri = 1;
            OP_JUMP lab_7028
// lab_7020
            pri = 0;
// lab_7028
            OP_JZER lab_7078
            var_8 = 64;
            var_16 = 28288;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_72D0
// lab_7078
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_70E0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_70E0
            pri = 1;
            OP_JUMP lab_70E8
// lab_70E0
            pri = 0;
// lab_70E8
            OP_JZER lab_7270
            var_16 = 28464;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0DD0(var_24, var_16)
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
            OP_JUMP lab_72D0
// lab_7270
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
// lab_72D0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_7340
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_7340
            var_8 = 0;
            pri = fun_1448()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6B78_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x1:
        {
// switch_6B78_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x2:
        {
// switch_6B78_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x3:
        {
// switch_6B78_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x4:
        {
// switch_6B78_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x5:
        {
// switch_6B78_case_0x5
            var_8 = 2;
            var_16 = 18448;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D90(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_1130(var_40)
            OP_JUMP switch_6B78_case_default
        }
        case 0x6:
        {
// switch_6B78_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x7:
        {
// switch_6B78_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x8:
        {
// switch_6B78_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x9:
        {
// switch_6B78_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0xa:
        {
// switch_6B78_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0xb:
        {
// switch_6B78_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0xc:
        {
// switch_6B78_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0xd:
        {
// switch_6B78_case_0xd
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6B78_case_default
        }
        case 0xe:
        {
// switch_6B78_case_0xe
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6B78_case_default
        }
        case 0xf:
        {
// switch_6B78_case_0xf
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6B78_case_default
        }
        case 0x10:
        {
// switch_6B78_case_0x10
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6B78_case_default
        }
        case 0x11:
        {
// switch_6B78_case_0x11
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6B78_case_default
        }
        case 0x12:
        {
// switch_6B78_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x13:
        {
// switch_6B78_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x14:
        {
// switch_6B78_case_0x14
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6B78_case_default
        }
        case 0x15:
        {
// switch_6B78_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x16:
        {
// switch_6B78_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x17:
        {
// switch_6B78_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x18:
        {
// switch_6B78_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x19:
        {
// switch_6B78_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x1a:
        {
// switch_6B78_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x1b:
        {
// switch_6B78_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x1c:
        {
// switch_6B78_case_0x1c
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6B78_case_default
        }
        case 0x1d:
        {
// switch_6B78_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x1e:
        {
// switch_6B78_case_0x1e
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6B78_case_default
        }
        case 0x1f:
        {
// switch_6B78_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x20:
        {
// switch_6B78_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x21:
        {
// switch_6B78_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x22:
        {
// switch_6B78_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x23:
        {
// switch_6B78_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x24:
        {
// switch_6B78_case_0x24
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6B78_case_default
        }
        case 0x25:
        {
// switch_6B78_case_0x25
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6B78_case_default
        }
        case 0x26:
        {
// switch_6B78_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x27:
        {
// switch_6B78_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x28:
        {
// switch_6B78_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x29:
        {
// switch_6B78_case_0x29
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6B78_case_default
        }
        case 0x2a:
        {
// switch_6B78_case_0x2a
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6B78_case_default
        }
        case 0x2b:
        {
// switch_6B78_case_0x2b
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6B78_case_default
        }
        case 0x2c:
        {
// switch_6B78_case_0x2c
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6B78_case_default
        }
        case 0x2d:
        {
// switch_6B78_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x2e:
        {
// switch_6B78_case_0x2e
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6B78_case_default
        }
        case 0x2f:
        {
// switch_6B78_case_0x2f
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6B78_case_default
        }
        case 0x30:
        {
// switch_6B78_case_0x30
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6B78_case_default
        }
        case 0x31:
        {
// switch_6B78_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x32:
        {
// switch_6B78_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x33:
        {
// switch_6B78_case_0x33
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6B78_case_default
        }
        case 0x34:
        {
// switch_6B78_case_0x34
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6B78_case_default
        }
        case 0x35:
        {
// switch_6B78_case_0x35
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6B78_case_default
        }
        case 0x36:
        {
// switch_6B78_case_0x36
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6B78_case_default
        }
        case 0x37:
        {
// switch_6B78_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x38:
        {
// switch_6B78_case_0x38
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
            pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6B78_case_default
        }
        case 0x39:
        {
// switch_6B78_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x3a:
        {
// switch_6B78_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x3b:
        {
// switch_6B78_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x3c:
        {
// switch_6B78_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27768;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x3d:
        {
// switch_6B78_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27944;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
        case 0x3e:
        {
// switch_6B78_case_0x3e
            var_8 = 4;
            var_16 = 28088;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D90(var_24, var_16, var_8)
            OP_JUMP switch_6B78_case_default
        }
    }
}
// fun_7370
fun_7370() {
    pri = arg_4;
    OP_JNZ lab_73A8
    var_8 = 0;
    pri = fun_1408()
// lab_73A8
    pri = arg_1;
    switch (pri) {
// switch_8780
        case default:
        {
// switch_8780_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29160;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1D10(var_264)
            OP_JZER lab_8D48
            pri = arg_3;
            switch (pri) {
// switch_8CF0
                case default:
                {
// switch_8CF0_case_default
                    OP_JUMP lab_9000
// lab_9000
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_9070
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_9070
                    var_8 = 0;
                    pri = fun_1448()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_8CF0_case_0x1
                    var_8 = 32;
                    var_16 = 29312;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_8CF0_case_default
                }
                case 0x2:
                {
// switch_8CF0_case_0x2
                    var_8 = 32;
                    var_16 = 29416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_8CF0_case_default
                }
                case 0x3:
                {
// switch_8CF0_case_0x3
                    var_8 = 32;
                    var_16 = 29216;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_8CF0_case_default
                }
            }
// lab_8D48
            pri = arg_1;
            OP_JZER lab_8D98
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_8D98
            pri = 0;
            OP_JUMP lab_8DA0
// lab_8D98
            pri = 1;
// lab_8DA0
            OP_JZER lab_8E08
            var_8 = 29512;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0DD0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_8E08
            pri = 1;
            OP_JUMP lab_8E10
// lab_8E08
            pri = 0;
// lab_8E10
            OP_JZER lab_8E60
            var_8 = 32;
            var_16 = 29608;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_9000
// lab_8E60
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8EC8
            var_8 = 32;
            var_16 = 29768;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_9000
// lab_8EC8
            var_16 = 29888;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0DD0(var_24, var_16)
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
// switch_8780_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x1:
        {
// switch_8780_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x2:
        {
// switch_8780_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x3:
        {
// switch_8780_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x4:
        {
// switch_8780_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x5:
        {
// switch_8780_case_0x5
            var_8 = 1;
            var_16 = 28640;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D90(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_1130(var_40)
            OP_JUMP switch_8780_case_default
        }
        case 0x6:
        {
// switch_8780_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x7:
        {
// switch_8780_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x8:
        {
// switch_8780_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x9:
        {
// switch_8780_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0xa:
        {
// switch_8780_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0xb:
        {
// switch_8780_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0xc:
        {
// switch_8780_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0xd:
        {
// switch_8780_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0xe:
        {
// switch_8780_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0xf:
        {
// switch_8780_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x10:
        {
// switch_8780_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x11:
        {
// switch_8780_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x12:
        {
// switch_8780_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x13:
        {
// switch_8780_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x14:
        {
// switch_8780_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x15:
        {
// switch_8780_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x16:
        {
// switch_8780_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x17:
        {
// switch_8780_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x18:
        {
// switch_8780_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x19:
        {
// switch_8780_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x1a:
        {
// switch_8780_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x1b:
        {
// switch_8780_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x1c:
        {
// switch_8780_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x1d:
        {
// switch_8780_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x1e:
        {
// switch_8780_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x1f:
        {
// switch_8780_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x20:
        {
// switch_8780_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x21:
        {
// switch_8780_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x22:
        {
// switch_8780_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x23:
        {
// switch_8780_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x24:
        {
// switch_8780_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x25:
        {
// switch_8780_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x26:
        {
// switch_8780_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x27:
        {
// switch_8780_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x28:
        {
// switch_8780_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x29:
        {
// switch_8780_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x2a:
        {
// switch_8780_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x2b:
        {
// switch_8780_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x2c:
        {
// switch_8780_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x2d:
        {
// switch_8780_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x2e:
        {
// switch_8780_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x2f:
        {
// switch_8780_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x30:
        {
// switch_8780_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x31:
        {
// switch_8780_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x32:
        {
// switch_8780_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x33:
        {
// switch_8780_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x34:
        {
// switch_8780_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x35:
        {
// switch_8780_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x36:
        {
// switch_8780_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x37:
        {
// switch_8780_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x38:
        {
// switch_8780_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x39:
        {
// switch_8780_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x3a:
        {
// switch_8780_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x3b:
        {
// switch_8780_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x3c:
        {
// switch_8780_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28736;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x3d:
        {
// switch_8780_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28912;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
        case 0x3e:
        {
// switch_8780_case_0x3e
            var_8 = 3;
            var_16 = 29056;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D90(var_24, var_16, var_8)
            OP_JUMP switch_8780_case_default
        }
    }
}
// fun_90A0
fun_90A0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_9810(var_16, var_8)
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
    OP_JZER lab_9298
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_9298
    pri = 0;
    return pri;
}
// fun_92B0
fun_92B0() {
    pri = arg_4;
    OP_JNZ lab_92E8
    var_8 = 0;
    pri = fun_1408()
// lab_92E8
    pri = arg_1;
    OP_JNZ lab_9390
    var_8 = 0;
    var_16 = -1;
    var_24 = 1;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 30480;
    var_72 = 30472;
    var_80 = 30328;
    var_88 = 30176;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_9390
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_93F0
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_93F0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_94A0
    var_8 = 0;
    var_16 = -1;
    var_24 = 3;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 30936;
    var_72 = 30792;
    var_80 = 30640;
    var_88 = 30488;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_94A0
    pri = arg_1;
    OP_EQ_P_C_PRI 3
    OP_JZER lab_9550
    var_8 = 0;
    var_16 = -1;
    var_24 = 4;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 31568;
    var_72 = 31416;
    var_80 = 31248;
    var_88 = 31072;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_9550
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_9600
    var_8 = 0;
    var_16 = -1;
    var_24 = 6;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 31768;
    var_72 = 31760;
    var_80 = 31752;
    var_88 = 31576;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_9600
    pri = arg_1;
    OP_EQ_P_C_PRI 5
    OP_JZER lab_96B0
    var_8 = 0;
    var_16 = -1;
    var_24 = 1;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 32184;
    var_72 = 32056;
    var_80 = 31920;
    var_88 = 31776;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_1168(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_96B0
    pri = arg_1;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_9710
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_9710
    pri = arg_1;
    OP_EQ_P_C_PRI 7
    OP_JZER lab_9770
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_9770
    var_8 = 0;
    pri = fun_1448()
    pri = 0;
    return pri;
}
// fun_9798
fun_9798() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_97D0(var_8)
    pri = 0;
    return pri;
}
// fun_97D0
fun_97D0() {
    var_8 = 32352;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0D58(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9810
fun_9810() {
    var_8 = arg_1;
    var_16 = 32536;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0D90(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9858
fun_9858() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_9958
        case default:
        {
// switch_9958_case_default
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
// switch_9958_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_9958_case_default
        }
        case 0x1:
        {
// switch_9958_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_9958_case_default
        }
        case 0x2:
        {
// switch_9958_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_9958_case_default
        }
        case 0x3:
        {
// switch_9958_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_9958_case_default
        }
    }
}
// fun_9A18
fun_9A18() {
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
    pri = fun_2990(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_2AF0()
    pri = 0;
    return pri;
}
// fun_9AB0
fun_9AB0() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_9858(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_9A18(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_9B58
fun_9B58() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_9BA8
// lab_9BA8
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 32640;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_9C20
    OP_JUMP lab_9C50
// lab_9C20
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_9BA8
// lab_9C50
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_9CD8
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_7370(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1FE0(var_56)
// lab_9CD8
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_9D40
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1AE0(var_24, var_16)
// lab_9D40
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1AE0(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_9E00
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0E08(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0B88(var_88, var_80, var_72, var_64, var_56)
// lab_9E00
    pri = IsPlayerRideBicycle()
    OP_JZER lab_9E40
    pri = 0;
    return pri;
// lab_9E40
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9F88
    var_16 = 1;
    var_24 = 8;
    pri = fun_0090(var_16)
    var_32 = 32760;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0D58(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_9F50
    var_72 = 12;
    var_80 = 8;
    pri = fun_0090(var_72)
// lab_9F88
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C30(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0C30(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0E08(var_40)
    pri = 0;
    return pri;
// lab_9F50
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1AE0(var_16, var_8)
}
// fun_A010
fun_A010() {
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
    pri = fun_9AB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_2B88(var_112)
    var_128 = 0;
    pri = fun_2C48()
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
    pri = fun_9B58(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_A188
fun_A188() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_A220
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E08(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_3458(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_A220
    var_8 = 8;
    var_16 = 8;
    pri = fun_0090(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_A378
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_A2E0
    var_24 = 32896;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_A2E0
    pri = 1;
    OP_JUMP lab_A2E8
// lab_A378
    pri = 0;
    return pri;
// lab_A2E0
    pri = 0;
// lab_A2E8
    OP_JZER lab_A378
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0E08(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_3458(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_A388
fun_A388() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_A708(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_A3F0
fun_A3F0() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_A460
    OP_CONST_S -8, 1
// lab_A460
    pri = arg_0;
    OP_JNZ lab_A480
    OP_ZERO_P_S -8
// lab_A480
    pri = var_8;
    OP_JZER lab_A508
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0090(var_16)
    var_32 = 0;
    pri = fun_0168()
    pri = ItemCloseDescWindow()
// lab_A508
    pri = 0;
    return pri;
}
// fun_A520
fun_A520() {
    var_8 = 33000;
    var_16 = 8;
    pri = fun_2E88(var_8)
    var_24 = 0;
    pri = fun_2EC0()
    var_32 = 0;
    var_40 = 8;
    pri = fun_2F90(var_32)
    var_48 = 1;
    var_56 = arg_1;
    var_64 = 1;
    var_72 = 24;
    pri = fun_30D0(var_64, var_56, var_48)
    OP_CONST_S -8, 6088246355923164688
    OP_CONST_S -16, -3980990967343358874
    pri = arg_3;
    OP_JZER lab_A638
    OP_CONST_S -8, 6088249654458049321
    OP_CONST_S -16, -3980992066854987085
// lab_A638
    var_8 = 6;
    var_16 = 4;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_A188(var_24, var_16, var_8)
    var_40 = 2;
    var_48 = 1;
    var_56 = 9;
    var_64 = var_16;
    var_72 = var_8;
    var_80 = 0;
    var_88 = 0;
    var_96 = 56;
    pri = fun_A388(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 0;
    pri = fun_2F60()
    var_112 = arg_2;
    var_120 = 8;
    pri = fun_3420(var_112)
    pri = 0;
    return pri;
}
// fun_A708
fun_A708() {
    var_8 = 33160;
    var_16 = 8;
    pri = fun_2E88(var_8)
    var_24 = 0;
    pri = fun_2EC0()
    pri = arg_3;
    OP_JNZ lab_A828
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_A7F0
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_A898(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_A818
// lab_A828
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_AA38(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_A7F0
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_A960(var_16, var_8)
// lab_A818
    OP_JUMP lab_A870
// lab_A870
    var_8 = 0;
    pri = fun_2F60()
    pri = 0;
    return pri;
}
// fun_A898
fun_A898() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_AA38(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_A948
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_A948
    pri = 0;
    return pri;
}
// fun_A960
fun_A960() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_2FE0(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_2A90(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_2B88(var_72)
    var_88 = 0;
    pri = fun_2C48()
    var_96 = 0;
    var_104 = 8;
    pri = fun_2F90(var_96)
    pri = 0;
    return pri;
}
// fun_AA38
fun_AA38() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_AA80
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_AD40(var_8)
// lab_AA80
    pri = arg_4;
    OP_JNZ lab_AAE8
    var_8 = 0;
    var_16 = 8;
    pri = fun_2F90(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2FE0(var_40, var_32, var_24)
// lab_AAE8
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_AB88
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_3030(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_2A90(var_56, var_48, var_40)
    OP_JUMP lab_AC78
// lab_AB88
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_AC40
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_AC40
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_AC40
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_2A90(var_24, var_16, var_8)
// lab_AC78
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_ACB8
    var_8 = 0;
    var_16 = 8;
    pri = fun_0500(var_8)
// lab_ACB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_2B88(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_AF48(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_A3F0(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_AD40
fun_AD40() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_ADA0
    var_16 = 33320;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_ADA0
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_AEE0
        case default:
        {
// switch_AEE0_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_AED0
            var_16 = 33864;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_AED0
            OP_JUMP lab_AF18
// lab_AF18
            var_8 = 34080;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_AEE0_case_0x1
            var_8 = 33536;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_AF18
        }
        case 0x2:
        {
// switch_AEE0_case_0x2
            var_8 = 33664;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_AF18
        }
    }
}
// fun_AF48
fun_AF48() {
    pri = arg_2;
    OP_JNZ lab_B030
    var_8 = 0;
    var_16 = 8;
    pri = fun_2F90(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2FE0(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_3080(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_B030
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_2A90(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_2B88(var_40)
    var_56 = 0;
    pri = fun_2C48()
    pri = 0;
    return pri;
}
// fun_B0A8
fun_B0A8() {
    pri = 34264;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_B130
// lab_B130
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_B2B0
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_B2A0
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_B1F0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_B1F0
    pri = 0;
    OP_JUMP lab_B1F8
// lab_B2B0
    pri = 0;
    return pri;
// lab_B2A0
    OP_JUMP lab_B128
// lab_B128
    OP_INC_P_S -936
// lab_B1F0
    pri = 1;
// lab_B1F8
    OP_JZER lab_B270
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_B268
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_B270
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_B268
}
// fun_B2D0
fun_B2D0() {
    var_8 = -4562270413023387603;
    pri = WorkGet(var_8)
    return pri;
}
// fun_B308
fun_B308() {
    var_8 = 0;
    pri = fun_B2D0()
    switch (pri) {
// switch_B3B8
        case default:
        {
// switch_B3B8_case_default
            pri = arg_1;
            return pri;
            OP_JUMP lab_B400
// lab_B400
            pri = arg_1;
            return pri;
        }
        case 0x0:
        {
// switch_B3B8_case_0x0
            pri = arg_0;
            return pri;
            OP_JUMP lab_B400
        }
        case 0x1:
        {
// switch_B3B8_case_0x1
            pri = arg_1;
            return pri;
            OP_JUMP lab_B400
        }
        case 0x2:
        {
// switch_B3B8_case_0x2
            pri = arg_2;
            return pri;
            OP_JUMP lab_B400
        }
    }
}
// fun_B410
fun_B410() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_B458
    pri = arg_0;
    return pri;
// lab_B458
    pri = arg_1;
    return pri;
}
// fun_B468
fun_B468() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_B500
    var_8 = 1;
    var_16 = 0;
    var_24 = 35184;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0338(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03A8()
    var_56 = 0;
    pri = fun_1FB8()
// lab_B500
    pri = arg_4;
    OP_JZER lab_B538
    var_8 = 1;
    var_16 = 8;
    pri = fun_20E0(var_8)
// lab_B538
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_B590
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_B590
    pri = 0;
    OP_JUMP lab_B598
// lab_B590
    pri = 1;
// lab_B598
    OP_JZER lab_B660
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_B660
    var_16 = 0;
    pri = fun_0438()
    OP_JZER lab_B638
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1EF8(var_32, var_24)
    OP_JUMP lab_B660
// lab_B660
    pri = arg_2;
    OP_JZER lab_B738
    var_8 = 0;
    pri = fun_0438()
    OP_JZER lab_B708
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1AE0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0980(var_40)
    OP_JUMP lab_B738
// lab_B738
    pri = arg_3;
    OP_JZER lab_B770
    var_8 = 1;
    var_16 = 8;
    pri = fun_1F80(var_8)
// lab_B770
    pri = 0;
    return pri;
// lab_B708
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1AE0(var_16, var_8)
// lab_B638
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1EF8(var_16, var_8)
}
// fun_B780
fun_B780() {
    var_8 = 35440;
    var_16 = 35432;
    var_24 = 8802641224559852288;
    var_32 = 35384;
    var_40 = 35280;
    var_48 = 35232;
    var_56 = 48;
    pri = fun_07E8(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 8802641224559852288;
    var_72 = 35448;
    var_80 = 16;
    pri = fun_09B8(var_72, var_64)
    pri = arg_0;
    OP_JZER lab_B838
    var_88 = 0;
    pri = fun_B848()
// lab_B838
    pri = 0;
    return pri;
}
// fun_B848
fun_B848() {
    var_8 = 1;
    var_16 = 35544;
    var_24 = 35496;
    pri = SetAttachModelAnimationStateIntParameter_(var_24, var_16, var_8)
    var_32 = 1;
    var_40 = 35672;
    var_48 = 35624;
    pri = SetAttachModelAnimationStateIntParameter_(var_48, var_40, var_32)
    pri = 0;
    return pri;
}
// fun_B8C0
fun_B8C0() {
    var_8 = 0;
    var_16 = 35848;
    var_24 = 35800;
    pri = SetAttachModelAnimationStateIntParameter_(var_24, var_16, var_8)
    var_32 = 0;
    var_40 = 36024;
    var_48 = 35976;
    var_56 = 24;
    pri = fun_1488(var_48, var_40, var_32)
    pri = 0;
    return pri;
}
// fun_B938
fun_B938() {
    pri = arg_0;
    OP_JZER lab_B970
    var_8 = 0;
    pri = fun_B8C0()
// lab_B970
    var_8 = 36144;
    var_16 = 8;
    pri = fun_0840(var_8)
    pri = 0;
    return pri;
}
// fun_B9A0
fun_B9A0() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_BB20
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_BA38
    var_8 = 1;
    var_16 = 0;
    var_24 = 35184;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0338(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03A8()
// lab_BB20
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_BA38
    pri = arg_0;
    OP_JNZ lab_BA80
    var_8 = 36192;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_BAA0
// lab_BA80
    var_8 = 36368;
    pri = SoundPostEvent(var_8)
// lab_BAA0
    var_8 = 0;
    var_16 = 8;
    pri = fun_0500(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_BB20
    var_24 = 36632;
    var_32 = 8;
    var_40 = 16;
    pri = fun_02D8(var_32, var_24)
    var_48 = 0;
    pri = fun_03A8()
}
// fun_BB60
fun_BB60() {
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_B9A0(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_BBA0
fun_BBA0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_B0A8(var_24)
    pri = 0;
    return pri;
}
// fun_BC08
fun_BC08() {
    pri = g_mode;
    switch (pri) {
// switch_BD18
        case default:
        {
// switch_BD18_case_default
            pri = CommandNOP()
            OP_JUMP lab_BD80
// lab_BD80
            pri = 0;
            return pri;
        }
        case 0xc61428ccf1ac1c1c:
        {
// switch_BD18_case_0xc61428ccf1ac1c1c
            var_8 = 0;
            pri = fun_15060()
            OP_JUMP lab_BD80
        }
        case 0x0:
        {
// switch_BD18_case_0x0
            var_8 = 0;
            pri = fun_BD90()
            OP_JUMP lab_BD80
        }
        case 0x211df9a038839da:
        {
// switch_BD18_case_0x211df9a038839da
            var_8 = 0;
            pri = fun_150E8()
            OP_JUMP lab_BD80
        }
        case 0x630af17f3e7b1bb:
        {
// switch_BD18_case_0x630af17f3e7b1bb
            var_8 = 0;
            pri = fun_14FF8()
            OP_JUMP lab_BD80
        }
        case 0x23fd191b7e395c27:
        {
// switch_BD18_case_0x23fd191b7e395c27
            var_8 = 0;
            pri = fun_14EA0()
            OP_JUMP lab_BD80
        }
    }
}
// fun_BD90
fun_BD90() {
    pri = 0;
    return pri;
}
// fun_BDA8
fun_BDA8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_B468(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_BE00
fun_BE00() {
    pri = 0;
    return pri;
}
// fun_BE18
fun_BE18() {
    var_8 = 0;
    pri = fun_0640()
    pri = 0;
    return pri;
}
// fun_BE48
fun_BE48() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    OP_PUSH2_C 8802641224559852288, -3181508942575245480
    var_40 = 48;
    pri = fun_0BD8(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = 0;
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    OP_PUSH2_C -3181508942575245480, 8802641224559852288
    var_80 = 48;
    pri = fun_0BD8(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 0;
    var_96 = 3;
    var_104 = 0;
    var_112 = 100;
    var_120 = -1;
    OP_PUSH2_C -253508747256029482, -3181508942575245480
    var_128 = 56;
    pri = fun_2990(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = -3181508942575245480;
    var_144 = 8;
    pri = fun_0C30(var_136)
    var_152 = 8802641224559852288;
    var_160 = 8;
    pri = fun_0C30(var_152)
    var_168 = 0;
    var_176 = 0;
    var_184 = 1;
    var_192 = 0;
    var_200 = 0;
    var_208 = 0;
    var_216 = 48;
    pri = fun_2DD0(var_208, var_200, var_192, var_184, var_176, var_168)
    OP_JNZ lab_C110
    var_224 = 1;
    var_232 = -1;
    var_240 = -1;
    var_248 = 3;
    var_256 = 0;
    var_264 = 0;
    var_272 = -3181508942575245480;
    var_280 = 56;
    pri = fun_3458(var_272, var_264, var_256, var_248, var_240, var_232, var_224)
    var_288 = 0;
    var_296 = 3;
    var_304 = 0;
    var_312 = 100;
    var_320 = -1;
    OP_PUSH2_C -253509846767657693, -3181508942575245480
    var_328 = 56;
    pri = fun_2990(var_320, var_312, var_304, var_296, var_288, var_280, var_272)
    var_336 = -3181508942575245480;
    var_344 = 8;
    pri = fun_0E08(var_336)
    var_352 = 1;
    var_360 = 8;
    pri = fun_2B88(var_352)
    var_368 = 0;
    pri = fun_2C48()
    pri = 0;
    return pri;
// lab_C110
    pri = EvCameraStart()
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C -253510946279285904, -3181508942575245480
    var_48 = 56;
    pri = fun_2990(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_2B88(var_56)
    var_72 = 0;
    pri = fun_2C48()
    var_88 = 239;
    var_96 = 238;
    var_104 = 16;
    pri = fun_B410(var_96, var_88)
    var_112 = pri;
    var_120 = 237;
    var_128 = 236;
    var_136 = 16;
    pri = fun_B410(var_128, var_120)
    var_144 = pri;
    var_152 = 235;
    var_160 = 234;
    var_168 = 16;
    pri = fun_B410(var_160, var_152)
    var_176 = pri;
    var_184 = 24;
    pri = fun_B308(var_176, var_168, var_160)
    var_8 = pri;
    var_192 = 47;
    var_200 = 0;
    var_208 = 132;
    var_216 = 0;
    var_224 = var_8;
    var_232 = 40;
    pri = fun_3188(var_224, var_216, var_208, var_200, var_192)
    var_240 = 0;
    pri = fun_32A0()
    OP_JZER lab_C540
    var_248 = 0;
    pri = fun_BB60()
    var_256 = 1;
    var_264 = 1;
    OP_PUSH4_C -4582834833314545664, 4659567770696102707, 4658801850896193946, 8802641224559852288
    var_272 = 48;
    pri = fun_0870(var_264, var_256, var_248, var_240, var_232, var_224)
    var_280 = 1;
    var_288 = 1;
    var_296 = 0;
    OP_PUSH3_C 4659237697305444352, 4658800091677589504, -3181508942575245480
    var_304 = 48;
    pri = fun_0870(var_296, var_288, var_280, var_272, var_264, var_256)
    var_312 = 36632;
    var_320 = 8;
    var_328 = 16;
    pri = fun_02D8(var_320, var_312)
    var_336 = 0;
    pri = fun_03A8()
    var_344 = 1;
    var_352 = 1;
    var_360 = -1;
    var_368 = -1;
    var_376 = 0;
    var_384 = 1;
    var_392 = -3181508942575245480;
    var_400 = 56;
    pri = fun_5038(var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_408 = 0;
    var_416 = 3;
    var_424 = 0;
    var_432 = 100;
    var_440 = -1;
    OP_PUSH2_C -251525228279115288, -3181508942575245480
    var_448 = 56;
    pri = fun_2990(var_440, var_432, var_424, var_416, var_408, var_400, var_392)
    var_456 = 1;
    var_464 = 8;
    pri = fun_2B88(var_456)
    var_472 = 0;
    pri = fun_2C48()
    var_480 = 1;
    var_488 = 3;
    var_496 = 0;
    var_504 = 1;
    var_512 = -3181508942575245480;
    var_520 = 40;
    pri = fun_7370(var_512, var_504, var_496, var_488, var_480)
    var_528 = -3181508942575245480;
    var_536 = 8;
    pri = fun_0E08(var_528)
    pri = 0;
    return pri;
// lab_C540
    var_8 = 36680;
    pri = SoundPostEvent(var_8)
    var_16 = 5862401268159596619;
    var_24 = 8;
    pri = fun_0610(var_16)
    var_32 = -3639666256585418915;
    var_40 = 8;
    pri = fun_0610(var_32)
    var_48 = -3319423182739788766;
    var_56 = 8;
    pri = fun_0610(var_48)
    var_64 = 3178397703945784922;
    var_72 = 8;
    pri = fun_0610(var_64)
    var_80 = 0;
    pri = fun_0640()
    var_88 = 1;
    var_96 = 8802641224559852288;
    var_104 = 16;
    pri = fun_0940(var_96, var_88)
    var_112 = 1;
    var_120 = -3181508942575245480;
    var_128 = 16;
    pri = fun_0940(var_120, var_112)
    var_136 = 1;
    var_144 = 8868142065411558194;
    var_152 = 16;
    pri = fun_0940(var_144, var_136)
    var_160 = 1;
    var_168 = 5862401268159596619;
    var_176 = 16;
    pri = fun_0940(var_168, var_160)
    var_184 = 1;
    var_192 = -3639666256585418915;
    var_200 = 16;
    pri = fun_0940(var_192, var_184)
    var_208 = 1;
    var_216 = -3319423182739788766;
    var_224 = 16;
    pri = fun_0940(var_216, var_208)
    var_232 = 1;
    var_240 = 3178397703945784922;
    var_248 = 16;
    pri = fun_0940(var_240, var_232)
    var_256 = 0;
    var_264 = 5862401268159596619;
    var_272 = 16;
    pri = fun_0908(var_264, var_256)
    var_280 = 0;
    var_288 = -3639666256585418915;
    var_296 = 16;
    pri = fun_0908(var_288, var_280)
    var_304 = 0;
    var_312 = -3319423182739788766;
    var_320 = 16;
    pri = fun_0908(var_312, var_304)
    var_328 = 0;
    var_336 = 3178397703945784922;
    var_344 = 16;
    pri = fun_0908(var_336, var_328)
    var_352 = 0;
    var_360 = 8868142065411558194;
    var_368 = 16;
    pri = fun_0908(var_360, var_352)
    var_376 = 1;
    var_384 = 1;
    OP_PUSH4_C -4582834833314545664, 4659567770696102707, 4658801850896193946, 8802641224559852288
    var_392 = 48;
    pri = fun_0870(var_384, var_376, var_368, var_360, var_352, var_344)
    var_400 = 1;
    var_408 = 1;
    var_416 = 0;
    OP_PUSH3_C 4659237697305444352, 4658800091677589504, -3181508942575245480
    var_424 = 48;
    pri = fun_0870(var_416, var_408, var_400, var_392, var_384, var_376)
    var_432 = 1;
    var_440 = 1;
    OP_PUSH4_C -4582834833314545664, 4659944903184429875, 4658574911696220979, 8868142065411558194
    var_448 = 48;
    pri = fun_0870(var_440, var_432, var_424, var_416, var_408, var_400)
    var_456 = 1;
    var_464 = 1;
    OP_PUSH4_C -4582834833314545664, 4660348204049498112, 4658679805105510810, 3178397703945784922
    var_472 = 48;
    pri = fun_0870(var_464, var_456, var_448, var_440, var_432, var_424)
    var_480 = 1;
    var_488 = 1;
    OP_PUSH4_C -4582834833314545664, 4660348204049498112, 4658932692779899290, -3319423182739788766
    var_496 = 48;
    pri = fun_0870(var_488, var_480, var_472, var_464, var_456, var_448)
    var_504 = 1;
    var_512 = 1;
    OP_PUSH4_C -4582834833314545664, 4660403179630886912, 4659114552003133440, 5862401268159596619
    var_520 = 48;
    pri = fun_0870(var_512, var_504, var_496, var_488, var_480, var_472)
    var_528 = 1;
    var_536 = 1;
    OP_PUSH4_C -4582834833314545664, 4660403179630886912, 4658457044049723392, -3639666256585418915
    var_544 = 48;
    pri = fun_0870(var_536, var_528, var_520, var_512, var_504, var_496)
    var_552 = 0;
    var_560 = 4627786387095237427;
    var_568 = 0;
    OP_PUSH5_C 4658382475171127624, 4647259529671522386, 4658128597936274145, 4660344993475545006, 4643622697050560266
    var_576 = 4659024436030120919;
    var_584 = 1;
    pri = EvCameraMove(var_584, var_576, var_568, var_560, var_552, var_544, var_536, var_528, var_520, var_512)
    var_592 = 0;
    pri = fun_3390()
    var_600 = 0;
    var_608 = 4627786387095237427;
    var_616 = 3;
    OP_PUSH5_C 4658338692618109583, 4634907000318575247, 4658054952647445709, 4660056459634184028, 4641425608935473152
    var_624 = 4659209197964052398;
    var_632 = 160;
    pri = EvCameraMove(var_632, var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560)
    var_640 = 1;
    var_648 = 1;
    var_656 = -1;
    var_664 = -1;
    var_672 = 0;
    var_680 = 1;
    var_688 = -3181508942575245480;
    var_696 = 56;
    pri = fun_5038(var_688, var_680, var_672, var_664, var_656, var_648, var_640)
    var_704 = 36632;
    var_712 = 8;
    var_720 = 16;
    pri = fun_02D8(var_712, var_704)
    var_728 = 0;
    pri = fun_03A8()
    var_736 = 75;
    var_744 = 8;
    pri = fun_0090(var_736)
    var_752 = 5;
    var_760 = 5;
    var_768 = -3181508942575245480;
    var_776 = 24;
    pri = fun_1C50(var_768, var_760, var_752)
    var_784 = 0;
    var_792 = 3;
    var_800 = 0;
    var_808 = 100;
    var_816 = -1;
    OP_PUSH2_C -253503249697888427, -3181508942575245480
    var_824 = 56;
    pri = fun_2990(var_816, var_808, var_800, var_792, var_784, var_776, var_768)
    var_832 = 1;
    var_840 = 8;
    pri = fun_2B88(var_832)
    var_848 = 0;
    pri = fun_2C48()
    var_856 = 1;
    var_864 = 3;
    var_872 = 0;
    var_880 = 1;
    var_888 = -3181508942575245480;
    var_896 = 40;
    pri = fun_7370(var_888, var_880, var_872, var_864, var_856)
    var_904 = -3181508942575245480;
    var_912 = 8;
    pri = fun_1CB8(var_904)
    var_920 = 0;
    var_928 = 3;
    var_936 = 0;
    var_944 = 100;
    var_952 = -1;
    OP_PUSH2_C -253504349209516638, -3181508942575245480
    var_960 = 56;
    pri = fun_2990(var_952, var_944, var_936, var_928, var_920, var_912, var_904)
    var_968 = -3181508942575245480;
    var_976 = 8;
    pri = fun_0E08(var_968)
    var_984 = 1;
    var_992 = 8;
    pri = fun_2B88(var_984)
    var_1000 = 0;
    pri = fun_2C48()
    var_1008 = 0;
    var_1016 = 4627786387095237427;
    var_1024 = 0;
    OP_PUSH5_C 4657889608088860754, 4630397067504228762, 4657621898997729853, 4659468990571463311, 4641915727238670582
    var_1032 = 4658930009971527516;
    var_1040 = 1;
    pri = EvCameraMove(var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968)
    var_1048 = 0;
    pri = fun_3390()
    var_1056 = 0;
    var_1064 = 4627786387095237427;
    var_1072 = 3;
    OP_PUSH5_C 4657881185829791990, 4630397067504228762, 4657632058485170504, 4659460590302627103, 4641915727238670582
    var_1080 = 4658940191449200722;
    var_1088 = 150;
    pri = EvCameraMove(var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016)
    var_1096 = 8;
    var_1104 = -3181508942575245480;
    var_1112 = 16;
    pri = fun_1B60(var_1104, var_1096)
    var_1120 = 0;
    var_1128 = 1;
    var_1136 = 70;
    var_1144 = 3;
    var_1152 = -3181508942575245480;
    var_1160 = 40;
    pri = fun_1670(var_1152, var_1144, var_1136, var_1128, var_1120)
    var_1168 = 0;
    var_1176 = 3;
    var_1184 = 0;
    var_1192 = 100;
    var_1200 = -1;
    OP_PUSH2_C -253505448721144849, -3181508942575245480
    var_1208 = 56;
    pri = fun_2990(var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152)
    var_1216 = 1;
    var_1224 = 8;
    pri = fun_2B88(var_1216)
    var_1232 = 0;
    pri = fun_2C48()
    var_1240 = 36792;
    pri = SoundPostEvent(var_1240)
    var_1248 = 0;
    var_1256 = 8802641224559852288;
    var_1264 = 16;
    pri = fun_0908(var_1256, var_1248)
    var_1272 = 5;
    var_1280 = 6;
    var_1288 = -3181508942575245480;
    var_1296 = 24;
    pri = fun_1C50(var_1288, var_1280, var_1272)
    var_1304 = 0;
    var_1312 = 4627758239597566362;
    var_1320 = 0;
    OP_PUSH5_C 4657563998715411169, 4638251626729339617, 4658718156071087636, 4659644582578419139, 4641208521359685059
    var_1328 = 4658808799809681490;
    var_1336 = 1;
    pri = EvCameraMove(var_1336, var_1328, var_1320, var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264)
    var_1344 = 0;
    pri = fun_3390()
    var_1352 = 0;
    var_1360 = 4627758239597566362;
    var_1368 = 3;
    OP_PUSH5_C 4657496532681930834, 4638675950256730931, 4658720201162715300, 4659577138535171359, 4641420683123380716
    var_1376 = 4658810844901309153;
    var_1384 = 150;
    pri = EvCameraMove(var_1384, var_1376, var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312)
    var_1392 = -1;
    var_1400 = -3181508942575245480;
    var_1408 = 16;
    pri = fun_1AE0(var_1400, var_1392)
    var_1416 = 15;
    var_1424 = -3181508942575245480;
    var_1432 = 16;
    pri = fun_1B20(var_1424, var_1416)
    var_1440 = 1;
    var_1448 = 1;
    var_1456 = -1;
    var_1464 = -1;
    var_1472 = 0;
    var_1480 = 24;
    var_1488 = -3181508942575245480;
    var_1496 = 56;
    pri = fun_5038(var_1488, var_1480, var_1472, var_1464, var_1456, var_1448, var_1440)
    var_1504 = 0;
    var_1512 = 3;
    var_1520 = 0;
    var_1528 = 100;
    var_1536 = -1;
    OP_PUSH2_C -253506548232773060, -3181508942575245480
    var_1544 = 56;
    pri = fun_2990(var_1536, var_1528, var_1520, var_1512, var_1504, var_1496, var_1488)
    var_1552 = 1;
    var_1560 = 8;
    pri = fun_2B88(var_1552)
    var_1568 = 0;
    pri = fun_2C48()
    var_1576 = -3181508942575245480;
    var_1584 = 8;
    pri = fun_1C18(var_1576)
    var_1592 = 0;
    var_1600 = 3;
    var_1608 = 0;
    var_1616 = 100;
    var_1624 = -1;
    OP_PUSH2_C -253498851651375583, -3181508942575245480
    var_1632 = 56;
    pri = fun_2990(var_1624, var_1616, var_1608, var_1600, var_1592, var_1584, var_1576)
    var_1640 = 1;
    var_1648 = 8;
    pri = fun_2B88(var_1640)
    var_1656 = 0;
    pri = fun_2C48()
    var_1664 = 1;
    var_1672 = 8802641224559852288;
    var_1680 = 16;
    pri = fun_0908(var_1672, var_1664)
    var_1688 = -3181508942575245480;
    var_1696 = 8;
    pri = fun_1CB8(var_1688)
    var_1704 = 0;
    var_1712 = 4627758239597566362;
    var_1720 = 0;
    OP_PUSH5_C 4658173040196268851, 4637626752281041961, 4658190236558127268, 4660049466740231373, 4640883417761584251
    var_1728 = 4659093837204066140;
    var_1736 = 1;
    pri = EvCameraMove(var_1736, var_1728, var_1720, var_1712, var_1704, var_1696, var_1688, var_1680, var_1672, var_1664)
    var_1744 = 0;
    pri = fun_3390()
    var_1752 = 0;
    var_1760 = 4627758239597566362;
    var_1768 = 3;
    OP_PUSH5_C 4658253194593933722, 4637626752281041961, 4658045057042795725, 4660014656202095985, 4640874973512282931
    var_1776 = 4659156289464523817;
    var_1784 = 150;
    pri = EvCameraMove(var_1784, var_1776, var_1768, var_1760, var_1752, var_1744, var_1736, var_1728, var_1720, var_1712)
    var_1792 = 0;
    var_1800 = 3;
    var_1808 = 0;
    var_1816 = 100;
    var_1824 = -1;
    OP_PUSH2_C -253499951163003794, -3181508942575245480
    var_1832 = 56;
    pri = fun_2990(var_1824, var_1816, var_1808, var_1800, var_1792, var_1784, var_1776)
    var_1840 = 1;
    var_1848 = 8;
    pri = fun_2B88(var_1840)
    var_1856 = 0;
    pri = fun_2C48()
    var_1864 = 1;
    var_1872 = 3;
    var_1880 = 0;
    var_1888 = 24;
    var_1896 = -3181508942575245480;
    var_1904 = 40;
    pri = fun_7370(var_1896, var_1888, var_1880, var_1872, var_1864)
    var_1912 = 0;
    var_1920 = 3;
    var_1928 = 0;
    var_1936 = 100;
    var_1944 = -1;
    OP_PUSH2_C -251521929744230655, -3181508942575245480
    var_1952 = 56;
    pri = fun_2990(var_1944, var_1936, var_1928, var_1920, var_1912, var_1904, var_1896)
    var_1960 = -3181508942575245480;
    var_1968 = 8;
    pri = fun_0E08(var_1960)
    var_1976 = 1;
    var_1984 = 8;
    pri = fun_2B88(var_1976)
    var_1992 = 0;
    pri = fun_2C48()
    var_2000 = 1;
    var_2008 = -1;
    var_2016 = -1;
    var_2024 = 3;
    var_2032 = 0;
    var_2040 = 1;
    var_2048 = -3181508942575245480;
    var_2056 = 56;
    pri = fun_3458(var_2048, var_2040, var_2032, var_2024, var_2016, var_2008, var_2000)
    var_2064 = 0;
    var_2072 = 3;
    var_2080 = 0;
    var_2088 = 100;
    var_2096 = -1;
    OP_PUSH2_C -254499407232858368, -3181508942575245480
    var_2104 = 56;
    pri = fun_2990(var_2096, var_2088, var_2080, var_2072, var_2064, var_2056, var_2048)
    var_2112 = -3181508942575245480;
    var_2120 = 8;
    pri = fun_0E08(var_2112)
    var_2128 = 1;
    var_2136 = 8;
    pri = fun_2B88(var_2128)
    var_2144 = 0;
    var_2152 = -5060629143991027830;
    var_2160 = 0;
    var_2168 = 24;
    pri = fun_2C78(var_2160, var_2152, var_2144)
    var_2176 = 0;
    var_2184 = -5060630243502656041;
    var_2192 = 1;
    var_2200 = 24;
    pri = fun_2C78(var_2192, var_2184, var_2176)
    OP_CONST_S -16, -254498307721230157
    var_2216 = 0;
    var_2224 = 0;
    var_2232 = 0;
    var_2240 = 1;
    var_2248 = 32;
    pri = fun_2D60(var_2240, var_2232, var_2224, var_2216)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_D8F8
    OP_CONST_S -16, -254497208209601946
// lab_D8F8
    var_8 = 1;
    var_16 = 0;
    var_24 = 4641240890982006784;
    var_32 = 0;
    var_40 = 0;
    OP_PUSH4_C 4659457819533325107, 4658801850896193946, 4607182418800017408, 8802641224559852288
    var_48 = 72;
    pri = fun_09F8(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_56 = 8802641224559852288;
    var_64 = 8;
    pri = fun_0C30(var_56)
    var_72 = 15;
    var_80 = 8;
    pri = fun_0090(var_72)
    var_88 = 36952;
    pri = SoundPostEvent(var_88)
    var_96 = 1;
    var_104 = -1;
    var_112 = -1;
    var_120 = 1;
    var_128 = 8802641224559852288;
    var_136 = 40;
    pri = fun_92B0(var_128, var_120, var_112, var_104, var_96)
    var_144 = 1;
    var_152 = 1;
    var_160 = -1;
    var_168 = -1;
    var_176 = 0;
    var_184 = 27;
    var_192 = -3181508942575245480;
    var_200 = 56;
    pri = fun_5038(var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_208 = 15;
    var_216 = 8;
    pri = fun_0090(var_208)
    var_224 = 0;
    var_232 = 4627786387095237427;
    var_240 = 0;
    OP_PUSH5_C 4658725039013877514, 4619938864744544338, 4657607759278196654, 4659422437249143276, 4640725791774626284
    var_248 = 4658950614819432038;
    var_256 = 1;
    pri = EvCameraMove(var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_264 = 0;
    pri = fun_3390()
    var_272 = 0;
    var_280 = 4627786387095237427;
    var_288 = 3;
    OP_PUSH5_C 4658900828932926341, 4633824025345680998, 4657906210714440172, 4659598249158424658, 4642624692336260547
    var_296 = 4659249066255675556;
    var_304 = 80;
    pri = EvCameraMove(var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232)
    var_312 = 37152;
    var_320 = -3181508942575245480;
    var_328 = 16;
    pri = fun_1008(var_320, var_312)
    var_336 = 5;
    var_344 = 5;
    var_352 = -3181508942575245480;
    var_360 = 24;
    pri = fun_1C50(var_352, var_344, var_336)
    var_368 = 0;
    var_376 = 3;
    var_384 = 0;
    var_392 = 100;
    var_400 = -1;
    var_408 = var_16;
    var_416 = -3181508942575245480;
    var_424 = 56;
    pri = fun_2990(var_416, var_408, var_400, var_392, var_384, var_376, var_368)
    var_432 = 0;
    pri = fun_3390()
    var_440 = 1;
    var_448 = 8;
    pri = fun_2B88(var_440)
    var_456 = 0;
    pri = fun_2C48()
    var_464 = -3181508942575245480;
    var_472 = 8;
    pri = fun_1CB8(var_464)
    var_480 = 6;
    var_488 = 7;
    var_496 = 8868142065411558194;
    var_504 = 24;
    pri = fun_1C50(var_496, var_488, var_480)
    var_512 = 1;
    var_520 = 8868142065411558194;
    var_528 = 16;
    pri = fun_0908(var_520, var_512)
    var_536 = 0;
    var_544 = 4627786387095237427;
    var_552 = 0;
    OP_PUSH5_C 4659640382444001034, -4592590756007337001, 4657845473692121825, 4659424196467747717, 4645165179922934661
    var_560 = 4659592883541681111;
    var_568 = 1;
    pri = EvCameraMove(var_568, var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496)
    var_576 = 0;
    pri = fun_3390()
    var_584 = 0;
    var_592 = 4627786387095237427;
    var_600 = 3;
    OP_PUSH5_C 4659469870180765532, -4592936970228691108, 4657821592299566531, 4659253420321721549, 4645209864075487478
    var_608 = 4659568870207730483;
    var_616 = 80;
    pri = EvCameraMove(var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544)
    var_624 = 1;
    var_632 = 0;
    OP_PUSH5_C 4641240890982006784, -3181508942575245480, 4659434729789141811, 4658574911696220979, 4607182418800017408
    var_640 = 8868142065411558194;
    var_648 = 64;
    pri = fun_0A70(var_640, var_632, var_624, var_616, var_608, var_600, var_592, var_584)
    var_656 = 8802641224559852288;
    var_664 = 8;
    pri = fun_9798(var_656)
    var_672 = 1;
    var_680 = 3;
    var_688 = 0;
    var_696 = 27;
    var_704 = -3181508942575245480;
    var_712 = 40;
    pri = fun_7370(var_704, var_696, var_688, var_680, var_672)
    var_720 = 1;
    var_728 = 1;
    var_736 = 70;
    OP_PUSH2_C 8868142065411558194, 8802641224559852288
    var_744 = 40;
    pri = fun_15B8(var_736, var_728, var_720, var_712, var_704)
    var_752 = 1;
    var_760 = 1;
    var_768 = 70;
    OP_PUSH2_C 8868142065411558194, -3181508942575245480
    var_776 = 40;
    pri = fun_15B8(var_768, var_760, var_752, var_744, var_736)
    var_784 = 0;
    var_792 = 3;
    var_800 = 0;
    var_808 = 100;
    var_816 = -1;
    OP_PUSH2_C -7752361846671991593, 8868142065411558194
    var_824 = 56;
    pri = fun_2990(var_816, var_808, var_800, var_792, var_784, var_776, var_768)
    var_832 = 8868142065411558194;
    var_840 = 8;
    pri = fun_0C30(var_832)
    var_848 = 8802641224559852288;
    var_856 = 8;
    pri = fun_0E08(var_848)
    var_864 = -3181508942575245480;
    var_872 = 8;
    pri = fun_0E08(var_864)
    var_880 = 1;
    var_888 = 8;
    pri = fun_2B88(var_880)
    var_896 = 0;
    pri = fun_2C48()
    var_904 = 7;
    var_912 = 8868142065411558194;
    var_920 = 16;
    pri = fun_1BD8(var_912, var_904)
    var_928 = 0;
    var_936 = 3;
    var_944 = 0;
    var_952 = 100;
    var_960 = -1;
    OP_PUSH2_C -7752360747160363382, 8868142065411558194
    var_968 = 56;
    pri = fun_2990(var_960, var_952, var_944, var_936, var_928, var_920, var_912)
    var_976 = 1;
    var_984 = 8;
    pri = fun_2B88(var_976)
    var_992 = 0;
    pri = fun_2C48()
    var_1000 = -1;
    var_1008 = 8802641224559852288;
    var_1016 = 16;
    pri = fun_1AE0(var_1008, var_1000)
    var_1024 = -1;
    var_1032 = -3181508942575245480;
    var_1040 = 16;
    pri = fun_1AE0(var_1032, var_1024)
    var_1048 = 0;
    var_1056 = 0;
    var_1064 = 0;
    var_1072 = 0;
    OP_PUSH2_C 8868142065411558194, -3181508942575245480
    var_1080 = 48;
    pri = fun_0BD8(var_1072, var_1064, var_1056, var_1048, var_1040, var_1032)
    var_1088 = 0;
    var_1096 = 3;
    var_1104 = 0;
    var_1112 = 100;
    var_1120 = -1;
    OP_PUSH2_C -254496108697973735, -3181508942575245480
    var_1128 = 56;
    pri = fun_2990(var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072)
    var_1136 = -3181508942575245480;
    var_1144 = 8;
    pri = fun_0C30(var_1136)
    var_1152 = 1;
    var_1160 = 8;
    pri = fun_2B88(var_1152)
    var_1168 = 0;
    pri = fun_2C48()
    var_1176 = 6;
    var_1184 = 6;
    var_1192 = 8868142065411558194;
    var_1200 = 24;
    pri = fun_1C50(var_1192, var_1184, var_1176)
    var_1208 = 1;
    var_1216 = 1;
    var_1224 = -1;
    var_1232 = -1;
    var_1240 = 0;
    var_1248 = 11;
    var_1256 = 8868142065411558194;
    var_1264 = 56;
    pri = fun_5038(var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208)
    var_1272 = 0;
    var_1280 = 3;
    var_1288 = 0;
    var_1296 = 100;
    var_1304 = -1;
    OP_PUSH2_C -7752359647648735171, 8868142065411558194
    var_1312 = 56;
    pri = fun_2990(var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256)
    var_1320 = 1;
    var_1328 = 8;
    pri = fun_2B88(var_1320)
    var_1336 = 0;
    pri = fun_2C48()
    var_1344 = 8868142065411558194;
    var_1352 = 8;
    pri = fun_1CB8(var_1344)
    var_1360 = 0;
    var_1368 = 4627786387095237427;
    var_1376 = 0;
    OP_PUSH5_C 4660034975176977285, 4634654376526977434, 4657107217604767908, 4659269055377068524, 4642485010379067884
    var_1384 = 4658891021289206579;
    var_1392 = 1;
    pri = EvCameraMove(var_1392, var_1384, var_1376, var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320)
    var_1400 = 0;
    pri = fun_3390()
    var_1408 = 0;
    var_1416 = 4627786387095237427;
    var_1424 = 3;
    OP_PUSH5_C 4660047091795115377, 4634654376526977434, 4657112407299651011, 4659281171995206615, 4642485010379067884
    var_1432 = 4658896232974322237;
    var_1440 = 80;
    pri = EvCameraMove(var_1440, var_1432, var_1424, var_1416, var_1408, var_1400, var_1392, var_1384, var_1376, var_1368)
    var_1448 = 1;
    var_1456 = 3;
    var_1464 = 0;
    var_1472 = 11;
    var_1480 = 8868142065411558194;
    var_1488 = 40;
    pri = fun_7370(var_1480, var_1472, var_1464, var_1456, var_1448)
    var_1496 = 0;
    var_1504 = 3;
    var_1512 = 0;
    var_1520 = 100;
    var_1528 = -1;
    OP_PUSH2_C -7752371742276645492, 8868142065411558194
    var_1536 = 56;
    pri = fun_2990(var_1528, var_1520, var_1512, var_1504, var_1496, var_1488, var_1480)
    var_1544 = 8868142065411558194;
    var_1552 = 8;
    pri = fun_0E08(var_1544)
    var_1560 = 1;
    var_1568 = 8;
    pri = fun_2B88(var_1560)
    var_1576 = 0;
    pri = fun_2C48()
    var_1584 = 4;
    var_1592 = 4;
    var_1600 = -3181508942575245480;
    var_1608 = 24;
    pri = fun_1C50(var_1600, var_1592, var_1584)
    var_1616 = 0;
    var_1624 = 4627786387095237427;
    var_1632 = 0;
    OP_PUSH5_C 4657857436378632028, 4623023830489293128, 4659112418950575555, 4659683703202135409, 4642637006866491638
    var_1640 = 4658551602049712128;
    var_1648 = 1;
    pri = EvCameraMove(var_1648, var_1640, var_1632, var_1624, var_1616, var_1608, var_1600, var_1592, var_1584, var_1576)
    var_1656 = 0;
    pri = fun_3390()
    var_1664 = 1;
    var_1672 = 1;
    var_1680 = -1;
    var_1688 = -1;
    var_1696 = 0;
    var_1704 = 12;
    var_1712 = -3181508942575245480;
    var_1720 = 56;
    pri = fun_5038(var_1712, var_1704, var_1696, var_1688, var_1680, var_1672, var_1664)
    var_1728 = 0;
    var_1736 = 3;
    var_1744 = 0;
    var_1752 = 100;
    var_1760 = -1;
    OP_PUSH2_C -251523029255858866, -3181508942575245480
    var_1768 = 56;
    pri = fun_2990(var_1760, var_1752, var_1744, var_1736, var_1728, var_1720, var_1712)
    var_1776 = 1;
    var_1784 = 8;
    pri = fun_2B88(var_1776)
    var_1792 = 0;
    pri = fun_2C48()
    var_1800 = 8;
    var_1808 = 8868142065411558194;
    var_1816 = 16;
    pri = fun_1B60(var_1808, var_1800)
    var_1824 = 0;
    var_1832 = 4627786387095237427;
    var_1840 = 0;
    OP_PUSH5_C 4659559656300289720, 4625343184297388933, 4657704692223301386, 4659198906535216415, 4644135157430034104
    var_1848 = 4659537094321687757;
    var_1856 = 1;
    pri = EvCameraMove(var_1856, var_1848, var_1840, var_1832, var_1824, var_1816, var_1808, var_1800, var_1792, var_1784)
    var_1864 = 0;
    pri = fun_3390()
    var_1872 = 0;
    var_1880 = 4627786387095237427;
    var_1888 = 3;
    OP_PUSH5_C 4659730146573292667, 4620749512677471027, 4657761009208876073, 4659060302099418972, 4643986679379819233
    var_1896 = 4659504306884947476;
    var_1904 = 350;
    pri = EvCameraMove(var_1904, var_1896, var_1888, var_1880, var_1872, var_1864, var_1856, var_1848, var_1840, var_1832)
    var_1912 = 0;
    var_1920 = 1;
    var_1928 = 8868142065411558194;
    var_1936 = 24;
    pri = fun_90A0(var_1928, var_1920, var_1912)
    var_1944 = 0;
    var_1952 = 3;
    var_1960 = 0;
    var_1968 = 100;
    var_1976 = -1;
    OP_PUSH2_C -7752370642765017281, 8868142065411558194
    var_1984 = 56;
    pri = fun_2990(var_1976, var_1968, var_1960, var_1952, var_1944, var_1936, var_1928)
    var_1992 = 8868142065411558194;
    var_2000 = 8;
    pri = fun_0E08(var_1992)
    var_2008 = 1;
    var_2016 = 8;
    pri = fun_2B88(var_2008)
    var_2024 = 0;
    pri = fun_2C48()
    var_2032 = -3181508942575245480;
    var_2040 = 8;
    pri = fun_1BA0(var_2032)
    var_2048 = 0;
    var_2056 = 3;
    var_2064 = 0;
    var_2072 = 100;
    var_2080 = -1;
    OP_PUSH2_C -7751371186695162707, 8868142065411558194
    var_2088 = 56;
    pri = fun_2990(var_2080, var_2072, var_2064, var_2056, var_2048, var_2040, var_2032)
    var_2096 = 1;
    var_2104 = 8;
    pri = fun_2B88(var_2096)
    var_2112 = 0;
    pri = fun_2C48()
    var_2120 = 1;
    var_2128 = 3;
    var_2136 = 0;
    var_2144 = 12;
    var_2152 = -3181508942575245480;
    var_2160 = 40;
    pri = fun_7370(var_2152, var_2144, var_2136, var_2128, var_2120)
    var_2168 = -3181508942575245480;
    var_2176 = 8;
    pri = fun_0E08(var_2168)
    var_2184 = -3181508942575245480;
    var_2192 = 8;
    pri = fun_1CB8(var_2184)
    var_2200 = 0;
    var_2208 = 4627786387095237427;
    var_2216 = 0;
    OP_PUSH5_C 4657758920136783299, 4628509777785383813, 4659366340165894144, 4659548111428198072, 4642151814375386644
    var_2224 = 4658652823090165187;
    var_2232 = 1;
    pri = EvCameraMove(var_2232, var_2224, var_2216, var_2208, var_2200, var_2192, var_2184, var_2176, var_2168, var_2160)
    var_2240 = 0;
    pri = fun_3390()
    var_2248 = 0;
    var_2256 = 0;
    var_2264 = 8868142065411558194;
    var_2272 = 24;
    pri = fun_90A0(var_2264, var_2256, var_2248)
    var_2280 = 1;
    var_2288 = -1;
    var_2296 = -1;
    var_2304 = 3;
    var_2312 = 0;
    var_2320 = 0;
    var_2328 = -3181508942575245480;
    var_2336 = 56;
    pri = fun_3458(var_2328, var_2320, var_2312, var_2304, var_2296, var_2288, var_2280)
    var_2344 = 0;
    var_2352 = 3;
    var_2360 = 0;
    var_2368 = 100;
    var_2376 = -1;
    OP_PUSH2_C -251519730720974233, -3181508942575245480
    var_2384 = 56;
    pri = fun_2990(var_2376, var_2368, var_2360, var_2352, var_2344, var_2336, var_2328)
    var_2392 = 8868142065411558194;
    var_2400 = 8;
    pri = fun_0E08(var_2392)
    var_2408 = 1;
    var_2416 = 8;
    pri = fun_2B88(var_2408)
    var_2424 = 0;
    pri = fun_2C48()
    var_2432 = 5;
    var_2440 = 5;
    var_2448 = 8868142065411558194;
    var_2456 = 24;
    pri = fun_1C50(var_2448, var_2440, var_2432)
    var_2464 = 1;
    var_2472 = 1;
    OP_PUSH4_C -4595782682243235840, 4659237697305444352, 4658800091677589504, -3181508942575245480
    var_2480 = 48;
    pri = fun_0870(var_2472, var_2464, var_2456, var_2448, var_2440, var_2432)
    var_2488 = 1;
    var_2496 = 1;
    OP_PUSH4_C 4637011729456929178, 4659434729789141811, 4658574911696220979, 8868142065411558194
    var_2504 = 48;
    pri = fun_0870(var_2496, var_2488, var_2480, var_2472, var_2464, var_2456)
    var_2512 = 0;
    var_2520 = 4627786387095237427;
    var_2528 = 0;
    OP_PUSH5_C 4658831911544097341, 4631411784795270676, 4657947046576295772, 4659927992695594680, 4643551448697080381
    var_2536 = 4659509078765412024;
    var_2544 = 1;
    pri = EvCameraMove(var_2544, var_2536, var_2528, var_2520, var_2512, var_2504, var_2496, var_2488, var_2480, var_2472)
    var_2552 = 0;
    pri = fun_3390()
    var_2560 = 0;
    var_2568 = 4627786387095237427;
    var_2576 = 3;
    OP_PUSH5_C 4658924798286411858, 4634168832192151552, 4658079405786047447, 4660020879437909197, 4643896079621690491
    var_2584 = 4659641437975163699;
    var_2592 = 280;
    pri = EvCameraMove(var_2592, var_2584, var_2576, var_2568, var_2560, var_2552, var_2544, var_2536, var_2528, var_2520)
    var_2600 = 1;
    var_2608 = 1;
    var_2616 = -1;
    var_2624 = -1;
    var_2632 = 0;
    var_2640 = 8;
    var_2648 = 8868142065411558194;
    var_2656 = 56;
    pri = fun_5038(var_2648, var_2640, var_2632, var_2624, var_2616, var_2608, var_2600)
    var_2664 = 0;
    var_2672 = 3;
    var_2680 = 0;
    var_2688 = 100;
    var_2696 = -1;
    OP_PUSH2_C -7751372286206790918, 8868142065411558194
    var_2704 = 56;
    pri = fun_2990(var_2696, var_2688, var_2680, var_2672, var_2664, var_2656, var_2648)
    var_2712 = 1;
    var_2720 = 8;
    pri = fun_2B88(var_2712)
    var_2728 = 0;
    pri = fun_2C48()
    var_2736 = 5;
    var_2744 = 5;
    var_2752 = -3181508942575245480;
    var_2760 = 24;
    pri = fun_1C50(var_2752, var_2744, var_2736)
    var_2768 = 0;
    var_2776 = 3;
    var_2784 = -3181508942575245480;
    var_2792 = 24;
    pri = fun_90A0(var_2784, var_2776, var_2768)
    var_2800 = 0;
    var_2808 = 3;
    var_2816 = 0;
    var_2824 = 100;
    var_2832 = -1;
    OP_PUSH2_C -251520830232602444, -3181508942575245480
    var_2840 = 56;
    pri = fun_2990(var_2832, var_2824, var_2816, var_2808, var_2800, var_2792, var_2784)
    var_2848 = -3181508942575245480;
    var_2856 = 8;
    pri = fun_0E08(var_2848)
    var_2864 = 1;
    var_2872 = 8;
    pri = fun_2B88(var_2864)
    var_2880 = 0;
    pri = fun_2C48()
    var_2888 = 0;
    var_2896 = 0;
    var_2904 = -3181508942575245480;
    var_2912 = 24;
    pri = fun_90A0(var_2904, var_2896, var_2888)
    var_2920 = -3181508942575245480;
    var_2928 = 8;
    pri = fun_0E08(var_2920)
    var_2936 = 2;
    var_2944 = 2;
    var_2952 = -3181508942575245480;
    var_2960 = 24;
    pri = fun_1C50(var_2952, var_2944, var_2936)
    var_2968 = 0;
    var_2976 = 0;
    var_2984 = 0;
    var_2992 = 0;
    OP_PUSH2_C 8802641224559852288, -3181508942575245480
    var_3000 = 48;
    pri = fun_0BD8(var_2992, var_2984, var_2976, var_2968, var_2960, var_2952)
    var_3008 = 0;
    var_3016 = 3;
    var_3024 = 0;
    var_3032 = 100;
    var_3040 = -1;
    OP_PUSH2_C -251517531697717811, -3181508942575245480
    var_3048 = 56;
    pri = fun_2990(var_3040, var_3032, var_3024, var_3016, var_3008, var_3000, var_2992)
    var_3056 = -3181508942575245480;
    var_3064 = 8;
    pri = fun_0C30(var_3056)
    var_3072 = 1;
    var_3080 = 8;
    pri = fun_2B88(var_3072)
    var_3088 = 0;
    pri = fun_2C48()
    var_3096 = 1;
    var_3104 = 3;
    var_3112 = 0;
    var_3120 = 8;
    var_3128 = 8868142065411558194;
    var_3136 = 40;
    pri = fun_7370(var_3128, var_3120, var_3112, var_3104, var_3096)
    var_3144 = 1;
    var_3152 = 1;
    OP_PUSH2_C -3251299048254230129, -3181508942575245480
    var_3160 = 32;
    pri = fun_A520(var_3152, var_3144, var_3136, var_3128)
    var_3168 = 8868142065411558194;
    var_3176 = 8;
    pri = fun_0E08(var_3168)
    var_3184 = 37312;
    pri = SoundPostEvent(var_3184)
    var_3192 = 8868142065411558194;
    var_3200 = 8;
    pri = fun_1CB8(var_3192)
    var_3208 = -3181508942575245480;
    var_3216 = 8;
    pri = fun_1CB8(var_3208)
    var_3224 = 1;
    var_3232 = 5862401268159596619;
    var_3240 = 16;
    pri = fun_0908(var_3232, var_3224)
    var_3248 = 1;
    var_3256 = -3639666256585418915;
    var_3264 = 16;
    pri = fun_0908(var_3256, var_3248)
    var_3272 = 1;
    var_3280 = -3319423182739788766;
    var_3288 = 16;
    pri = fun_0908(var_3280, var_3272)
    var_3296 = 1;
    var_3304 = 3178397703945784922;
    var_3312 = 16;
    pri = fun_0908(var_3304, var_3296)
    var_3320 = 0;
    var_3328 = 1;
    var_3336 = 50;
    var_3344 = 0;
    var_3352 = 8868142065411558194;
    var_3360 = 40;
    pri = fun_1670(var_3352, var_3344, var_3336, var_3328, var_3320)
    var_3368 = 1;
    var_3376 = 1;
    OP_PUSH4_C -4582834833314545664, 4659567770696102707, 4658801850896193946, 8802641224559852288
    var_3384 = 48;
    pri = fun_0870(var_3376, var_3368, var_3360, var_3352, var_3344, var_3336)
    var_3392 = 0;
    var_3400 = 4627786387095237427;
    var_3408 = 0;
    OP_PUSH5_C 4658583004101801411, 4639267751395265085, 4658448797712515072, 4660632405815045652, 4639432414256640819
    var_3416 = 4658856320702233969;
    var_3424 = 1;
    pri = EvCameraMove(var_3424, var_3416, var_3408, var_3400, var_3392, var_3384, var_3376, var_3368, var_3360, var_3352)
    var_3432 = 0;
    pri = fun_3390()
    var_3440 = 0;
    var_3448 = 4627786387095237427;
    var_3456 = 3;
    OP_PUSH5_C 4658646731795747308, 4639273029051078410, 4658461464086467052, 4660696133508991549, 4639437340068733256
    var_3464 = 4658868987076185948;
    var_3472 = 60;
    pri = EvCameraMove(var_3472, var_3464, var_3456, var_3448, var_3440, var_3432, var_3424, var_3416, var_3408, var_3400)
    var_3480 = 3;
    var_3488 = 2;
    var_3496 = -3411693888349895875;
    var_3504 = 24;
    pri = fun_2A40(var_3496, var_3488, var_3480)
    var_3512 = 0;
    pri = fun_3390()
    var_3520 = 0;
    pri = fun_2AF0()
    var_3528 = 30;
    var_3536 = 8;
    pri = fun_0090(var_3528)
    var_3544 = 0;
    pri = fun_2C48()
    var_3552 = 37488;
    pri = SoundPostEvent(var_3552)
    var_3560 = 15;
    var_3568 = 8868142065411558194;
    var_3576 = 16;
    pri = fun_1B20(var_3568, var_3560)
    var_3584 = 3;
    var_3592 = 7;
    var_3600 = -3319423182739788766;
    var_3608 = 24;
    pri = fun_1C50(var_3600, var_3592, var_3584)
    var_3616 = 3;
    var_3624 = 7;
    var_3632 = 3178397703945784922;
    var_3640 = 24;
    pri = fun_1C50(var_3632, var_3624, var_3616)
    var_3648 = 0;
    var_3656 = 0;
    var_3664 = 0;
    var_3672 = 0;
    pri = float(var_3672)
    var_3680 = pri;
    var_3688 = 8802641224559852288;
    var_3696 = 40;
    pri = fun_0B88(var_3688, var_3680, var_3672, var_3664, var_3656)
    var_3704 = 0;
    var_3712 = 0;
    var_3720 = 0;
    var_3728 = 0;
    pri = float(var_3728)
    var_3736 = pri;
    var_3744 = -3181508942575245480;
    var_3752 = 40;
    pri = fun_0B88(var_3744, var_3736, var_3728, var_3720, var_3712)
    var_3760 = 0;
    var_3768 = 0;
    var_3776 = 0;
    var_3784 = 0;
    pri = float(var_3784)
    var_3792 = pri;
    var_3800 = 8868142065411558194;
    var_3808 = 40;
    pri = fun_0B88(var_3800, var_3792, var_3784, var_3776, var_3768)
    var_3816 = -1;
    var_3824 = 8868142065411558194;
    var_3832 = 16;
    pri = fun_1AE0(var_3824, var_3816)
    var_3840 = 1;
    var_3848 = 0;
    OP_PUSH5_C 4641240890982006784, 8802641224559852288, 4660029345677443072, 4658932692779899290, 4607182418800017408
    var_3856 = -3319423182739788766;
    var_3864 = 64;
    pri = fun_0A70(var_3856, var_3848, var_3840, var_3832, var_3824, var_3816, var_3808, var_3800)
    var_3872 = 1;
    var_3880 = 0;
    OP_PUSH5_C 4641240890982006784, 8802641224559852288, 4660029345677443072, 4658679805105510810, 4607182418800017408
    var_3888 = 3178397703945784922;
    var_3896 = 64;
    pri = fun_0A70(var_3888, var_3880, var_3872, var_3864, var_3856, var_3848, var_3840, var_3832)
    var_3904 = 1;
    var_3912 = 0;
    OP_PUSH5_C 4641240890982006784, 8802641224559852288, 4660148092933242880, 4659114552003133440, 4607182418800017408
    var_3920 = 5862401268159596619;
    var_3928 = 64;
    pri = fun_0A70(var_3920, var_3912, var_3904, var_3896, var_3888, var_3880, var_3872, var_3864)
    var_3936 = 1;
    var_3944 = 0;
    OP_PUSH5_C 4641240890982006784, 8802641224559852288, 4660134898793709568, 4658457044049723392, 4607182418800017408
    var_3952 = -3639666256585418915;
    var_3960 = 64;
    pri = fun_0A70(var_3952, var_3944, var_3936, var_3928, var_3920, var_3912, var_3904, var_3896)
    var_3968 = 0;
    var_3976 = 4627786387095237427;
    var_3984 = 0;
    OP_PUSH5_C 4659953457384893972, 4635383396716658033, 4658748656523642143, 4658323959162297385, 4646987202631554826
    var_3992 = 4659736523740733768;
    var_4000 = 1;
    pri = EvCameraMove(var_4000, var_3992, var_3984, var_3976, var_3968, var_3960, var_3952, var_3944, var_3936, var_3928)
    var_4008 = 0;
    pri = fun_3390()
    var_4016 = 0;
    var_4024 = 4627786387095237427;
    var_4032 = 3;
    OP_PUSH5_C 4660326081875547259, 4614883574162820956, 4658545026970178028, 4658583663808778076, 4645610614073579274
    var_4040 = 4659318731312411443;
    var_4048 = 120;
    pri = EvCameraMove(var_4048, var_4040, var_4032, var_4024, var_4016, var_4008, var_4000, var_3992, var_3984, var_3976)
    var_4056 = 0;
    var_4064 = 3;
    var_4072 = 0;
    var_4080 = 100;
    var_4088 = -1;
    OP_PUSH2_C -175165476695353099, -3319423182739788766
    var_4096 = 56;
    pri = fun_2990(var_4088, var_4080, var_4072, var_4064, var_4056, var_4048, var_4040)
    var_4104 = 8802641224559852288;
    var_4112 = 8;
    pri = fun_0C30(var_4104)
    var_4120 = -3181508942575245480;
    var_4128 = 8;
    pri = fun_0C30(var_4120)
    var_4136 = 8868142065411558194;
    var_4144 = 8;
    pri = fun_0C30(var_4136)
    var_4152 = 1;
    var_4160 = 8;
    pri = fun_2B88(var_4152)
    var_4168 = 0;
    pri = fun_2C48()
    var_4176 = 0;
    var_4184 = 3;
    var_4192 = 0;
    var_4200 = 100;
    var_4208 = -1;
    OP_PUSH2_C -690986335775794059, 3178397703945784922
    var_4216 = 56;
    pri = fun_2990(var_4208, var_4200, var_4192, var_4184, var_4176, var_4168, var_4160)
    var_4224 = 5862401268159596619;
    var_4232 = 8;
    pri = fun_0C30(var_4224)
    var_4240 = -3639666256585418915;
    var_4248 = 8;
    pri = fun_0C30(var_4240)
    var_4256 = -3319423182739788766;
    var_4264 = 8;
    pri = fun_0C30(var_4256)
    var_4272 = 3178397703945784922;
    var_4280 = 8;
    pri = fun_0C30(var_4272)
    var_4288 = 1;
    var_4296 = 8;
    pri = fun_2B88(var_4288)
    var_4304 = 0;
    pri = fun_2C48()
    var_4312 = 1;
    var_4320 = 0;
    var_4328 = 50;
    pri = float(var_4328)
    var_4336 = pri;
    OP_PUSH5_C 5862401268159596619, 4659457599630999552, 4659041984235700224, 4607182418800017408, -3181508942575245480
    var_4344 = 64;
    pri = fun_0A70(var_4336, var_4328, var_4320, var_4312, var_4304, var_4296, var_4288, var_4280)
    var_4352 = 0;
    var_4360 = 3;
    var_4368 = 0;
    var_4376 = 100;
    var_4384 = -1;
    OP_PUSH2_C -254495009186345524, -3181508942575245480
    var_4392 = 56;
    pri = fun_2990(var_4384, var_4376, var_4368, var_4360, var_4352, var_4344, var_4336)
    var_4400 = 1;
    var_4408 = 1;
    var_4416 = 50;
    var_4424 = 0;
    var_4432 = 5862401268159596619;
    var_4440 = 40;
    pri = fun_1670(var_4432, var_4424, var_4416, var_4408, var_4400)
    var_4448 = -3181508942575245480;
    var_4456 = 8;
    pri = fun_0C30(var_4448)
    var_4464 = 5;
    var_4472 = 5;
    var_4480 = 5862401268159596619;
    var_4488 = 24;
    pri = fun_1C50(var_4480, var_4472, var_4464)
    var_4496 = 1;
    var_4504 = 8;
    pri = fun_2B88(var_4496)
    var_4512 = 0;
    pri = fun_2C48()
    var_4520 = 1;
    var_4528 = 1;
    var_4536 = -1;
    var_4544 = -1;
    var_4552 = 0;
    var_4560 = 1;
    var_4568 = 8868142065411558194;
    var_4576 = 56;
    pri = fun_5038(var_4568, var_4560, var_4552, var_4544, var_4536, var_4528, var_4520)
    var_4584 = 0;
    var_4592 = 3;
    var_4600 = 0;
    var_4608 = 100;
    var_4616 = -1;
    OP_PUSH2_C -7752367344230132648, 8868142065411558194
    var_4624 = 56;
    pri = fun_2990(var_4616, var_4608, var_4600, var_4592, var_4584, var_4576, var_4568)
    var_4632 = 1;
    var_4640 = 8;
    pri = fun_2B88(var_4632)
    var_4648 = 0;
    pri = fun_2C48()
    var_4656 = 5862401268159596619;
    var_4664 = 8;
    pri = fun_1CB8(var_4656)
    var_4672 = -3319423182739788766;
    var_4680 = 8;
    pri = fun_1CB8(var_4672)
    var_4688 = 3178397703945784922;
    var_4696 = 8;
    pri = fun_1CB8(var_4688)
    var_4704 = -1;
    var_4712 = 5862401268159596619;
    var_4720 = 16;
    pri = fun_1AE0(var_4712, var_4704)
    var_4728 = 0;
    var_4736 = 4627786387095237427;
    var_4744 = 0;
    OP_PUSH5_C 4661396643362163917, -4585012745946844365, 4658345135756248351, 4659752532630034186, 4642373475919546286
    var_4752 = 4659024260108260475;
    var_4760 = 1;
    pri = EvCameraMove(var_4760, var_4752, var_4744, var_4736, var_4728, var_4720, var_4712, var_4704, var_4696, var_4688)
    var_4768 = 0;
    pri = fun_3390()
    var_4776 = 0;
    var_4784 = 4627786387095237427;
    var_4792 = 3;
    OP_PUSH5_C 4661392509198443479, -4585012745946844365, 4658323057562762609, 4659744264302593311, 4642373475919546286
    var_4800 = 4659002181914774733;
    var_4808 = 200;
    pri = EvCameraMove(var_4808, var_4800, var_4792, var_4784, var_4776, var_4768, var_4760, var_4752, var_4744, var_4736)
    var_4816 = 1;
    var_4824 = 3;
    var_4832 = 0;
    var_4840 = 1;
    var_4848 = 8868142065411558194;
    var_4856 = 40;
    pri = fun_7370(var_4848, var_4840, var_4832, var_4824, var_4816)
    var_4864 = 1;
    var_4872 = -1;
    var_4880 = -1;
    var_4888 = 3;
    var_4896 = 0;
    var_4904 = 1;
    var_4912 = -3319423182739788766;
    var_4920 = 56;
    pri = fun_3458(var_4912, var_4904, var_4896, var_4888, var_4880, var_4872, var_4864)
    var_4928 = 0;
    var_4936 = 3;
    var_4944 = 0;
    var_4952 = 100;
    var_4960 = -1;
    OP_PUSH2_C -175168775230237732, -3319423182739788766
    var_4968 = 56;
    pri = fun_2990(var_4960, var_4952, var_4944, var_4936, var_4928, var_4920, var_4912)
    var_4976 = 8868142065411558194;
    var_4984 = 8;
    pri = fun_0E08(var_4976)
    var_4992 = -3319423182739788766;
    var_5000 = 8;
    pri = fun_0E08(var_4992)
    var_5008 = 1;
    var_5016 = 8;
    pri = fun_2B88(var_5008)
    var_5024 = 0;
    pri = fun_2C48()
    var_5032 = 0;
    var_5040 = 4627786387095237427;
    var_5048 = 0;
    OP_PUSH5_C 4661359710766586921, -4585895873686274048, 4658122374700460933, 4659678689429112750, 4642815039789261128
    var_5056 = 4658801499052473057;
    var_5064 = 10;
    pri = EvCameraMove(var_5064, var_5056, var_5048, var_5040, var_5032, var_5024, var_5016, var_5008, var_5000, var_4992)
    var_5072 = 0;
    pri = fun_3390()
    var_5080 = 0;
    var_5088 = 4627786387095237427;
    var_5096 = 3;
    OP_PUSH5_C 4661351541395192545, -4585895873686274048, 4658078724088838226, 4659662350686323999, 4642815039789261128
    var_5104 = 4658757870431082906;
    var_5112 = 200;
    pri = EvCameraMove(var_5112, var_5104, var_5096, var_5088, var_5080, var_5072, var_5064, var_5056, var_5048, var_5040)
    var_5120 = 1;
    var_5128 = -1;
    var_5136 = -1;
    var_5144 = 3;
    var_5152 = 0;
    var_5160 = 0;
    var_5168 = 3178397703945784922;
    var_5176 = 56;
    pri = fun_3458(var_5168, var_5160, var_5152, var_5144, var_5136, var_5128, var_5120)
    var_5184 = 0;
    var_5192 = 3;
    var_5200 = 0;
    var_5208 = 100;
    var_5216 = -1;
    OP_PUSH2_C -690989634310678692, 3178397703945784922
    var_5224 = 56;
    pri = fun_2990(var_5216, var_5208, var_5200, var_5192, var_5184, var_5176, var_5168)
    var_5232 = 3178397703945784922;
    var_5240 = 8;
    pri = fun_0E08(var_5232)
    var_5248 = 1;
    var_5256 = 8;
    pri = fun_2B88(var_5248)
    var_5264 = 0;
    pri = fun_2C48()
    var_5272 = 1;
    var_5280 = 1;
    var_5288 = 70;
    OP_PUSH2_C 3178397703945784922, -3639666256585418915
    var_5296 = 40;
    pri = fun_15B8(var_5288, var_5280, var_5272, var_5264, var_5256)
    var_5304 = 0;
    var_5312 = 3;
    var_5320 = 0;
    var_5328 = 100;
    var_5336 = -1;
    OP_PUSH2_C 9080755723995931259, -3639666256585418915
    var_5344 = 56;
    pri = fun_2990(var_5336, var_5328, var_5320, var_5312, var_5304, var_5296, var_5288)
    var_5352 = 1;
    var_5360 = 8;
    pri = fun_2B88(var_5352)
    var_5368 = 0;
    pri = fun_2C48()
    var_5376 = 1;
    var_5384 = 1;
    OP_PUSH4_C -4583830551044659610, 4660148092933242880, 4659151935398477824, 5862401268159596619
    var_5392 = 48;
    pri = fun_0870(var_5384, var_5376, var_5368, var_5360, var_5352, var_5344)
    var_5400 = 1;
    var_5408 = 1;
    var_5416 = -1;
    var_5424 = -1;
    var_5432 = 0;
    var_5440 = 1;
    var_5448 = 5862401268159596619;
    var_5456 = 56;
    pri = fun_5038(var_5448, var_5440, var_5432, var_5424, var_5416, var_5408, var_5400)
    var_5464 = 0;
    var_5472 = 4627786387095237427;
    var_5480 = 0;
    OP_PUSH5_C 4660896046713153782, -4593879911400671805, 4658684994800393912, 4658999389155240182, 4644172101020727378
    var_5488 = 4659136212382200627;
    var_5496 = 1;
    pri = EvCameraMove(var_5496, var_5488, var_5480, var_5472, var_5464, var_5456, var_5448, var_5440, var_5432, var_5424)
    var_5504 = 0;
    pri = fun_3390()
    var_5512 = 0;
    var_5520 = 3;
    var_5528 = 0;
    var_5536 = 100;
    var_5544 = -1;
    OP_PUSH2_C 570745417090864026, 5862401268159596619
    var_5552 = 56;
    pri = fun_2990(var_5544, var_5536, var_5528, var_5520, var_5512, var_5504, var_5496)
    var_5560 = 1;
    var_5568 = 8;
    pri = fun_2B88(var_5560)
    var_5576 = 0;
    pri = fun_2C48()
    var_5584 = 5;
    var_5592 = 5;
    var_5600 = 5862401268159596619;
    var_5608 = 24;
    pri = fun_1C50(var_5600, var_5592, var_5584)
    var_5616 = -1;
    var_5624 = -3639666256585418915;
    var_5632 = 16;
    pri = fun_1AE0(var_5624, var_5616)
    var_5640 = 0;
    var_5648 = 4627786387095237427;
    var_5656 = 0;
    OP_PUSH5_C 4661021896814069023, 4627898977085921690, 4659167680404987576, 4659805221227237212, 4642635951335328973
    var_5664 = 4659119521795690988;
    var_5672 = 1;
    pri = EvCameraMove(var_5672, var_5664, var_5656, var_5648, var_5640, var_5632, var_5624, var_5616, var_5608, var_5600)
    var_5680 = 0;
    pri = fun_3390()
    var_5688 = 0;
    var_5696 = 4627786387095237427;
    var_5704 = 3;
    OP_PUSH5_C 4661024535641975685, 4628768734763957617, 4659167768365917798, 4659849531545836585, 4642486769597672325
    var_5712 = 4659121259024062874;
    var_5720 = 120;
    pri = EvCameraMove(var_5720, var_5712, var_5704, var_5696, var_5688, var_5680, var_5672, var_5664, var_5656, var_5648)
    var_5728 = 1;
    var_5736 = 3;
    var_5744 = 0;
    var_5752 = 1;
    var_5760 = 5862401268159596619;
    var_5768 = 40;
    pri = fun_7370(var_5760, var_5752, var_5744, var_5736, var_5728)
    var_5776 = 0;
    var_5784 = 3;
    var_5792 = 0;
    var_5800 = 100;
    var_5808 = -1;
    OP_PUSH2_C 570744317579235815, 5862401268159596619
    var_5816 = 56;
    pri = fun_2990(var_5808, var_5800, var_5792, var_5784, var_5776, var_5768, var_5760)
    var_5824 = 5862401268159596619;
    var_5832 = 8;
    pri = fun_0E08(var_5824)
    var_5840 = 1;
    var_5848 = 8;
    pri = fun_2B88(var_5840)
    var_5856 = 0;
    pri = fun_2C48()
    var_5864 = 5862401268159596619;
    var_5872 = 8;
    pri = fun_1BA0(var_5864)
    var_5880 = 7;
    var_5888 = 4;
    var_5896 = -3181508942575245480;
    var_5904 = 24;
    pri = fun_1C50(var_5896, var_5888, var_5880)
    var_5912 = 5862401268159596619;
    var_5920 = 8;
    pri = fun_1CB8(var_5912)
    var_5928 = 0;
    var_5936 = 4627786387095237427;
    var_5944 = 0;
    OP_PUSH5_C 4659815820519328973, 4639162550122719478, 4658856078809675858, 4660901324368967107, 4644646562278345277
    var_5952 = 4659534675396106650;
    var_5960 = 1;
    pri = EvCameraMove(var_5960, var_5952, var_5944, var_5936, var_5928, var_5920, var_5912, var_5904, var_5896, var_5888)
    var_5968 = 0;
    pri = fun_3390()
    var_5976 = 0;
    var_5984 = 4627786387095237427;
    var_5992 = 3;
    OP_PUSH5_C 4659866793878392668, 4639162550122719478, 4658774561017592545, 4660952451659658691, 4644642691997415506
    var_6000 = 4659453201584488448;
    var_6008 = 200;
    pri = EvCameraMove(var_6008, var_6000, var_5992, var_5984, var_5976, var_5968, var_5960, var_5952, var_5944, var_5936)
    var_6016 = 1;
    var_6024 = 1;
    var_6032 = -1;
    var_6040 = -1;
    var_6048 = 0;
    var_6056 = 22;
    var_6064 = -3181508942575245480;
    var_6072 = 56;
    pri = fun_5038(var_6064, var_6056, var_6048, var_6040, var_6032, var_6024, var_6016)
    var_6080 = 0;
    var_6088 = 3;
    var_6096 = 0;
    var_6104 = 100;
    var_6112 = -1;
    OP_PUSH2_C -254493909674717313, -3181508942575245480
    var_6120 = 56;
    pri = fun_2990(var_6112, var_6104, var_6096, var_6088, var_6080, var_6072, var_6064)
    var_6128 = 1;
    var_6136 = 8;
    pri = fun_2B88(var_6128)
    var_6144 = 0;
    pri = fun_2C48()
    var_6152 = 37664;
    var_6160 = -3181508942575245480;
    var_6168 = 16;
    pri = fun_1008(var_6160, var_6152)
    var_6176 = 1;
    var_6184 = 3;
    var_6192 = 0;
    var_6200 = 22;
    var_6208 = -3181508942575245480;
    var_6216 = 40;
    pri = fun_7370(var_6208, var_6200, var_6192, var_6184, var_6176)
    var_6224 = 1;
    var_6232 = 1;
    var_6240 = -1;
    var_6248 = -1;
    var_6256 = 0;
    var_6264 = 6;
    var_6272 = -3319423182739788766;
    var_6280 = 56;
    pri = fun_5038(var_6272, var_6264, var_6256, var_6248, var_6240, var_6232, var_6224)
    var_6288 = 0;
    var_6296 = 3;
    var_6304 = 0;
    var_6312 = 100;
    var_6320 = -1;
    OP_PUSH2_C -175173173276750576, -3319423182739788766
    var_6328 = 56;
    pri = fun_2990(var_6320, var_6312, var_6304, var_6296, var_6288, var_6280, var_6272)
    var_6336 = -3181508942575245480;
    var_6344 = 8;
    pri = fun_0E08(var_6336)
    var_6352 = 1;
    var_6360 = 8;
    pri = fun_2B88(var_6352)
    var_6368 = 0;
    pri = fun_2C48()
    var_6376 = 1;
    var_6384 = 1;
    var_6392 = -1;
    var_6400 = -1;
    var_6408 = 0;
    var_6416 = 6;
    var_6424 = 3178397703945784922;
    var_6432 = 56;
    pri = fun_5038(var_6424, var_6416, var_6408, var_6400, var_6392, var_6384, var_6376)
    var_6440 = 0;
    var_6448 = 3;
    var_6456 = 0;
    var_6464 = 100;
    var_6472 = -1;
    OP_PUSH2_C -690994032357191536, 3178397703945784922
    var_6480 = 56;
    pri = fun_2990(var_6472, var_6464, var_6456, var_6448, var_6440, var_6432, var_6424)
    var_6488 = 1;
    var_6496 = 8;
    pri = fun_2B88(var_6488)
    var_6504 = 0;
    pri = fun_2C48()
    var_6512 = 0;
    var_6520 = 4627786387095237427;
    var_6528 = 0;
    OP_PUSH5_C 4660310270898339840, 4636096935782619546, 4658721762469226742, 4659295971421716480, 4643493394483133809
    var_6536 = 4658950768751059927;
    var_6544 = 1;
    pri = EvCameraMove(var_6544, var_6536, var_6528, var_6520, var_6512, var_6504, var_6496, var_6488, var_6480, var_6472)
    var_6552 = 0;
    pri = fun_3390()
    var_6560 = 0;
    var_6568 = 4627786387095237427;
    var_6576 = 3;
    OP_PUSH5_C 4660303190043456963, 4635491764582691635, 4658723367756203295, 4659124359646853202, 4643859136030997217
    var_6584 = 4658989515540822753;
    var_6592 = 150;
    pri = EvCameraMove(var_6592, var_6584, var_6576, var_6568, var_6560, var_6552, var_6544, var_6536, var_6528, var_6520)
    var_6600 = 1;
    var_6608 = 3;
    var_6616 = 0;
    var_6624 = 6;
    var_6632 = -3319423182739788766;
    var_6640 = 40;
    pri = fun_7370(var_6632, var_6624, var_6616, var_6608, var_6600)
    var_6648 = 1;
    var_6656 = 3;
    var_6664 = 0;
    var_6672 = 6;
    var_6680 = 3178397703945784922;
    var_6688 = 40;
    pri = fun_7370(var_6680, var_6672, var_6664, var_6656, var_6648)
    var_6696 = -3319423182739788766;
    var_6704 = 8;
    pri = fun_0E08(var_6696)
    var_6712 = 3178397703945784922;
    var_6720 = 8;
    pri = fun_0E08(var_6712)
    var_6728 = 5;
    var_6736 = 5;
    var_6744 = -3319423182739788766;
    var_6752 = 24;
    pri = fun_1C50(var_6744, var_6736, var_6728)
    var_6760 = 1;
    var_6768 = -1;
    var_6776 = -1;
    var_6784 = 3;
    var_6792 = 0;
    var_6800 = 0;
    var_6808 = -3319423182739788766;
    var_6816 = 56;
    pri = fun_3458(var_6808, var_6800, var_6792, var_6784, var_6776, var_6768, var_6760)
    var_6824 = 0;
    var_6832 = 3;
    var_6840 = 0;
    var_6848 = 100;
    var_6856 = -1;
    OP_PUSH2_C -175167675718609521, -3319423182739788766
    var_6864 = 56;
    pri = fun_2990(var_6856, var_6848, var_6840, var_6832, var_6824, var_6816, var_6808)
    var_6872 = -3319423182739788766;
    var_6880 = 8;
    pri = fun_0E08(var_6872)
    var_6888 = 1;
    var_6896 = 8;
    pri = fun_2B88(var_6888)
    var_6904 = 0;
    pri = fun_2C48()
    var_6912 = 5;
    var_6920 = 5;
    var_6928 = 3178397703945784922;
    var_6936 = 24;
    pri = fun_1C50(var_6928, var_6920, var_6912)
    var_6944 = 1;
    var_6952 = -1;
    var_6960 = -1;
    var_6968 = 3;
    var_6976 = 0;
    var_6984 = 0;
    var_6992 = 3178397703945784922;
    var_7000 = 56;
    pri = fun_3458(var_6992, var_6984, var_6976, var_6968, var_6960, var_6952, var_6944)
    var_7008 = 0;
    var_7016 = 3;
    var_7024 = 0;
    var_7032 = 100;
    var_7040 = -1;
    OP_PUSH2_C -690988534799050481, 3178397703945784922
    var_7048 = 56;
    pri = fun_2990(var_7040, var_7032, var_7024, var_7016, var_7008, var_7000, var_6992)
    var_7056 = 3178397703945784922;
    var_7064 = 8;
    pri = fun_0E08(var_7056)
    var_7072 = 1;
    var_7080 = 8;
    pri = fun_2B88(var_7072)
    var_7088 = 0;
    pri = fun_2C48()
    var_7096 = 8;
    var_7104 = 8868142065411558194;
    var_7112 = 16;
    pri = fun_1B60(var_7104, var_7096)
    var_7120 = 1;
    var_7128 = 1;
    OP_PUSH4_C 4626632339690723738, 4659434729789141811, 4658574911696220979, 8868142065411558194
    var_7136 = 48;
    pri = fun_0870(var_7128, var_7120, var_7112, var_7104, var_7096, var_7088)
    var_7144 = 0;
    var_7152 = 4627786387095237427;
    var_7160 = 0;
    OP_PUSH5_C 4659065755677092741, 4638229812418644541, 4658113094822322504, 4659936986700709888, 4642840020693444198
    var_7168 = 4658995914698496410;
    var_7176 = 1;
    pri = EvCameraMove(var_7176, var_7168, var_7160, var_7152, var_7144, var_7136, var_7128, var_7120, var_7112, var_7104)
    var_7184 = 0;
    pri = fun_3390()
    var_7192 = 0;
    var_7200 = 4627786387095237427;
    var_7208 = 3;
    OP_PUSH5_C 4659046206360350884, 4638229812418644541, 4658132380256273695, 4659917437383968031, 4642840020693444198
    var_7216 = 4659015200132447601;
    var_7224 = 100;
    pri = EvCameraMove(var_7224, var_7216, var_7208, var_7200, var_7192, var_7184, var_7176, var_7168, var_7160, var_7152)
    var_7232 = 1;
    var_7240 = 1;
    var_7248 = -1;
    var_7256 = -1;
    var_7264 = 0;
    var_7272 = 9;
    var_7280 = 8868142065411558194;
    var_7288 = 56;
    pri = fun_5038(var_7280, var_7272, var_7264, var_7256, var_7248, var_7240, var_7232)
    var_7296 = 0;
    var_7304 = 3;
    var_7312 = 0;
    var_7320 = 100;
    var_7328 = -1;
    OP_PUSH2_C -7752366244718504437, 8868142065411558194
    var_7336 = 56;
    pri = fun_2990(var_7328, var_7320, var_7312, var_7304, var_7296, var_7288, var_7280)
    var_7344 = 1;
    var_7352 = 8;
    pri = fun_2B88(var_7344)
    var_7360 = 0;
    pri = fun_2C48()
    var_7368 = 6;
    var_7376 = 6;
    var_7384 = -3319423182739788766;
    var_7392 = 24;
    pri = fun_1C50(var_7384, var_7376, var_7368)
    var_7400 = 1;
    var_7408 = 1;
    OP_PUSH4_C -4584143691956250214, 4660029345677443072, 4658932692779899290, -3319423182739788766
    var_7416 = 48;
    pri = fun_0870(var_7408, var_7400, var_7392, var_7384, var_7376, var_7368)
    OP_PUSH2_C -4605943928902490522, 4627786387095237427
    var_7424 = 0;
    OP_PUSH5_C 4660598408915514819, 4619330878794849321, 4658614933919472026, 4658912901570599322, 4644179665660726477
    var_7432 = 4658843258504095990;
    var_7440 = 1;
    pri = EvCameraMove(var_7440, var_7432, var_7424, var_7416, var_7408, var_7400, var_7392, var_7384, var_7376, var_7368)
    var_7448 = 0;
    pri = fun_3390()
    OP_PUSH2_C -4605943928902490522, 4627786387095237427
    var_7456 = 3;
    OP_PUSH5_C 4660592229660166717, 4619330878794849321, 4658569370157616988, 4658906744305483776, 4644179665660726477
    var_7464 = 4658797694742240952;
    var_7472 = 150;
    pri = EvCameraMove(var_7472, var_7464, var_7456, var_7448, var_7440, var_7432, var_7424, var_7416, var_7408, var_7400)
    var_7480 = 1;
    var_7488 = 1;
    var_7496 = -1;
    var_7504 = -1;
    var_7512 = 0;
    var_7520 = 11;
    var_7528 = -3319423182739788766;
    var_7536 = 56;
    pri = fun_5038(var_7528, var_7520, var_7512, var_7504, var_7496, var_7488, var_7480)
    var_7544 = 0;
    var_7552 = 3;
    var_7560 = 0;
    var_7568 = 100;
    var_7576 = -1;
    OP_PUSH2_C -175170974253494154, -3319423182739788766
    var_7584 = 56;
    pri = fun_2990(var_7576, var_7568, var_7560, var_7552, var_7544, var_7536, var_7528)
    var_7592 = 1;
    var_7600 = 8;
    pri = fun_2B88(var_7592)
    var_7608 = 0;
    pri = fun_2C48()
    var_7616 = 2;
    var_7624 = 2;
    var_7632 = 3178397703945784922;
    var_7640 = 24;
    pri = fun_1C50(var_7632, var_7624, var_7616)
    var_7648 = 1;
    var_7656 = 1;
    var_7664 = -1;
    var_7672 = -1;
    var_7680 = 0;
    var_7688 = 2;
    var_7696 = 3178397703945784922;
    var_7704 = 56;
    pri = fun_5038(var_7696, var_7688, var_7680, var_7672, var_7664, var_7656, var_7648)
    var_7712 = 0;
    var_7720 = 3;
    var_7728 = 0;
    var_7736 = 100;
    var_7744 = -1;
    OP_PUSH2_C -690991833333935114, 3178397703945784922
    var_7752 = 56;
    pri = fun_2990(var_7744, var_7736, var_7728, var_7720, var_7712, var_7704, var_7696)
    var_7760 = 1;
    var_7768 = 8;
    pri = fun_2B88(var_7760)
    var_7776 = 0;
    pri = fun_2C48()
    var_7784 = 2;
    var_7792 = 3;
    var_7800 = -3181508942575245480;
    var_7808 = 24;
    pri = fun_1C50(var_7800, var_7792, var_7784)
    var_7816 = 0;
    var_7824 = 4627786387095237427;
    var_7832 = 0;
    OP_PUSH5_C 4658629579414354002, 4626345235214478868, 4658307290566020301, 4660086652223482757, 4644045437281207583
    var_7840 = 4659217972066842051;
    var_7848 = 1;
    pri = EvCameraMove(var_7848, var_7840, var_7832, var_7824, var_7816, var_7808, var_7800, var_7792, var_7784, var_7776)
    var_7856 = 0;
    pri = fun_3390()
    var_7864 = 0;
    var_7872 = 0;
    var_7880 = 0;
    var_7888 = 0;
    OP_PUSH2_C 8802641224559852288, -3181508942575245480
    var_7896 = 48;
    pri = fun_0BD8(var_7888, var_7880, var_7872, var_7864, var_7856, var_7848)
    var_7904 = 0;
    var_7912 = 3;
    var_7920 = 0;
    var_7928 = 100;
    var_7936 = -1;
    OP_PUSH2_C -254492810163089102, -3181508942575245480
    var_7944 = 56;
    pri = fun_2990(var_7936, var_7928, var_7920, var_7912, var_7904, var_7896, var_7888)
    var_7952 = -3181508942575245480;
    var_7960 = 8;
    pri = fun_0C30(var_7952)
    var_7968 = 1;
    var_7976 = 8;
    pri = fun_2B88(var_7968)
    var_7984 = 0;
    pri = fun_2C48()
    var_7992 = 1;
    var_8000 = 1;
    OP_PUSH4_C -4583608889500499968, 4660029345677443072, 4658932692779899290, -3319423182739788766
    var_8008 = 48;
    pri = fun_0870(var_8000, var_7992, var_7984, var_7976, var_7968, var_7960)
    var_8016 = 1;
    var_8024 = 1;
    OP_PUSH4_C 4640238136377475072, 4660029345677443072, 4658679805105510810, 3178397703945784922
    var_8032 = 48;
    pri = fun_0870(var_8024, var_8016, var_8008, var_8000, var_7992, var_7984)
    var_8040 = 0;
    var_8048 = 4627786387095237427;
    var_8056 = 0;
    OP_PUSH5_C 4659450452805419008, 4641307389445254676, 4658929460215713628, 4658004792926986568, 4648470751680680428
    var_8064 = 4659631036595164938;
    var_8072 = 1;
    pri = EvCameraMove(var_8072, var_8064, var_8056, var_8048, var_8040, var_8032, var_8024, var_8016, var_8008, var_8000)
    var_8080 = 0;
    pri = fun_3390()
    var_8088 = 0;
    var_8096 = 4627786387095237427;
    var_8104 = 3;
    OP_PUSH5_C 4659450452805419008, 4641307389445254676, 4658929460215713628, 4657927607210716692, 4648463890728123105
    var_8112 = 4659445241120303350;
    var_8120 = 200;
    pri = EvCameraMove(var_8120, var_8112, var_8104, var_8096, var_8088, var_8080, var_8072, var_8064, var_8056, var_8048)
    var_8128 = 1;
    var_8136 = 3;
    var_8144 = 0;
    var_8152 = 11;
    var_8160 = -3319423182739788766;
    var_8168 = 40;
    pri = fun_7370(var_8160, var_8152, var_8144, var_8136, var_8128)
    var_8176 = 1;
    var_8184 = 3;
    var_8192 = 0;
    var_8200 = 2;
    var_8208 = 3178397703945784922;
    var_8216 = 40;
    pri = fun_7370(var_8208, var_8200, var_8192, var_8184, var_8176)
    var_8224 = -3319423182739788766;
    var_8232 = 8;
    pri = fun_0E08(var_8224)
    var_8240 = 3178397703945784922;
    var_8248 = 8;
    pri = fun_0E08(var_8240)
    var_8256 = -3319423182739788766;
    var_8264 = 8;
    pri = fun_1CB8(var_8256)
    var_8272 = 3178397703945784922;
    var_8280 = 8;
    pri = fun_1CB8(var_8272)
    var_8288 = 0;
    var_8296 = 0;
    var_8304 = 0;
    var_8312 = 0;
    OP_PUSH2_C 3178397703945784922, -3181508942575245480
    var_8320 = 48;
    pri = fun_0BD8(var_8312, var_8304, var_8296, var_8288, var_8280, var_8272)
    var_8328 = 1;
    var_8336 = 1;
    var_8344 = -1;
    var_8352 = -1;
    var_8360 = 0;
    var_8368 = 9;
    var_8376 = -3319423182739788766;
    var_8384 = 56;
    pri = fun_5038(var_8376, var_8368, var_8360, var_8352, var_8344, var_8336, var_8328)
    var_8392 = 1;
    var_8400 = 1;
    var_8408 = -1;
    var_8416 = -1;
    var_8424 = 0;
    var_8432 = 9;
    var_8440 = 3178397703945784922;
    var_8448 = 56;
    pri = fun_5038(var_8440, var_8432, var_8424, var_8416, var_8408, var_8400, var_8392)
    var_8456 = 0;
    var_8464 = 3;
    var_8472 = 0;
    var_8480 = 100;
    var_8488 = -1;
    OP_PUSH2_C -175169874741865943, -3319423182739788766
    var_8496 = 56;
    pri = fun_2990(var_8488, var_8480, var_8472, var_8464, var_8456, var_8448, var_8440)
    var_8504 = 8868142065411558194;
    var_8512 = 8;
    pri = fun_1BA0(var_8504)
    var_8520 = 1;
    var_8528 = 3;
    var_8536 = 0;
    var_8544 = 9;
    var_8552 = 8868142065411558194;
    var_8560 = 40;
    pri = fun_7370(var_8552, var_8544, var_8536, var_8528, var_8520)
    var_8568 = 8868142065411558194;
    var_8576 = 8;
    pri = fun_0E08(var_8568)
    var_8584 = -3181508942575245480;
    var_8592 = 8;
    pri = fun_0C30(var_8584)
    var_8600 = 1;
    var_8608 = 8;
    pri = fun_2B88(var_8600)
    var_8616 = 0;
    pri = fun_2C48()
    var_8624 = 0;
    var_8632 = 3;
    var_8640 = 0;
    var_8648 = 100;
    var_8656 = -1;
    OP_PUSH2_C -690990733822306903, 3178397703945784922
    var_8664 = 56;
    pri = fun_2990(var_8656, var_8648, var_8640, var_8632, var_8624, var_8616, var_8608)
    var_8672 = 1;
    var_8680 = 8;
    pri = fun_2B88(var_8672)
    var_8688 = 0;
    pri = fun_2C48()
    var_8696 = 1;
    var_8704 = 3;
    var_8712 = 0;
    var_8720 = 9;
    var_8728 = -3319423182739788766;
    var_8736 = 40;
    pri = fun_7370(var_8728, var_8720, var_8712, var_8704, var_8696)
    var_8744 = 1;
    var_8752 = 3;
    var_8760 = 0;
    var_8768 = 9;
    var_8776 = 3178397703945784922;
    var_8784 = 40;
    pri = fun_7370(var_8776, var_8768, var_8760, var_8752, var_8744)
    var_8792 = -3319423182739788766;
    var_8800 = 8;
    pri = fun_0E08(var_8792)
    var_8808 = 3178397703945784922;
    var_8816 = 8;
    pri = fun_0E08(var_8808)
    var_8824 = -3181508942575245480;
    var_8832 = 8;
    pri = fun_1CB8(var_8824)
    var_8840 = 0;
    var_8848 = 4627786387095237427;
    var_8856 = 0;
    OP_PUSH5_C 4659610365776562749, 4635489653520366305, 4658777991493871206, 4661257280263343309, 4645935189906098749
    var_8864 = 4658802774485961277;
    var_8872 = 1;
    pri = EvCameraMove(var_8872, var_8864, var_8856, var_8848, var_8840, var_8832, var_8824, var_8816, var_8808, var_8800)
    var_8880 = 0;
    pri = fun_3390()
    var_8888 = 0;
    var_8896 = 4627786387095237427;
    var_8904 = 3;
    OP_PUSH5_C 4660033369890000732, 4639222011711549604, 4658784236719916974, 4661468793315178578, 4646996878333879255
    var_8912 = 4658808997721774490;
    var_8920 = 50;
    pri = EvCameraMove(var_8920, var_8912, var_8904, var_8896, var_8888, var_8880, var_8872, var_8864, var_8856, var_8848)
    var_8928 = 1;
    var_8936 = 0;
    var_8944 = 4641240890982006784;
    var_8952 = 0;
    var_8960 = 0;
    OP_PUSH4_C 4661559865863307264, 4658932692779899290, 4611686018427387904, -3319423182739788766
    var_8968 = 72;
    pri = fun_09F8(var_8960, var_8952, var_8944, var_8936, var_8928, var_8920, var_8912, var_8904, var_8896)
    var_8976 = 1;
    var_8984 = 0;
    var_8992 = 4641240890982006784;
    var_9000 = 0;
    var_9008 = 0;
    OP_PUSH4_C 4661559865863307264, 4658679805105510810, 4611686018427387904, 3178397703945784922
    var_9016 = 72;
    pri = fun_09F8(var_9008, var_9000, var_8992, var_8984, var_8976, var_8968, var_8960, var_8952, var_8944)
    var_9024 = 0;
    var_9032 = 3;
    var_9040 = 0;
    var_9048 = 100;
    var_9056 = -1;
    OP_PUSH2_C 7430846112762910330, -3319423182739788766
    var_9064 = 56;
    pri = fun_2990(var_9056, var_9048, var_9040, var_9032, var_9024, var_9016, var_9008)
    var_9072 = 0;
    var_9080 = 0;
    var_9088 = 0;
    var_9096 = 25;
    pri = float(var_9096)
    var_9104 = pri;
    var_9112 = -3639666256585418915;
    var_9120 = 40;
    pri = fun_0B88(var_9112, var_9104, var_9096, var_9088, var_9080)
    var_9128 = 0;
    var_9136 = 0;
    var_9144 = 0;
    var_9152 = -25;
    pri = float(var_9152)
    var_9160 = pri;
    var_9168 = 5862401268159596619;
    var_9176 = 40;
    pri = fun_0B88(var_9168, var_9160, var_9152, var_9144, var_9136)
    var_9184 = -3639666256585418915;
    var_9192 = 8;
    pri = fun_0C30(var_9184)
    var_9200 = 5862401268159596619;
    var_9208 = 8;
    pri = fun_0C30(var_9200)
    var_9216 = 1;
    var_9224 = 8;
    pri = fun_2B88(var_9216)
    var_9232 = 0;
    pri = fun_2C48()
    var_9248 = 37840;
    var_9256 = 1;
    var_9264 = 0;
    var_9272 = 1;
    var_9280 = -1;
    var_9288 = 0;
    var_9296 = 0;
    var_9304 = 0;
    var_9312 = 0;
    var_9320 = 0;
    var_9328 = 0;
    var_9336 = 4661199665854047846;
    var_9344 = 0;
    OP_PUSH5_C 4658771064570616218, 4660496198314596762, 4616302208045442662, 4658727743812481843, 4660134898793709568
    OP_PUSH2_C 4630826316843712512, 4658457044049723392
    var_9352 = 3;
    var_9360 = 168;
    pri = fun_2010(var_9352, var_9344, var_9336, var_9328, var_9320, var_9312, var_9304, var_9296, var_9288, var_9280, var_9272, var_9264, var_9256, var_9248, var_9240, var_9232, var_9224, var_9216, var_9208, var_9200, var_9192)
    var_24 = pri;
    var_9368 = 1;
    var_9376 = 4596373779694328218;
    var_9384 = -1;
    var_9392 = 4607182418800017408;
    var_9400 = var_24;
    var_9408 = -3639666256585418915;
    var_9416 = 48;
    pri = fun_0B30(var_9408, var_9400, var_9392, var_9384, var_9376, var_9368)
    var_9424 = 0;
    var_9432 = 3;
    var_9440 = 0;
    var_9448 = 100;
    var_9456 = -1;
    OP_PUSH2_C 9080756823507559470, -3639666256585418915
    var_9464 = 56;
    pri = fun_2990(var_9456, var_9448, var_9440, var_9432, var_9424, var_9416, var_9408)
    var_9472 = 1;
    var_9480 = 8;
    pri = fun_2B88(var_9472)
    var_9488 = 0;
    pri = fun_2C48()
    var_9496 = 0;
    var_9504 = 0;
    var_9512 = 0;
    var_9520 = 0;
    OP_PUSH2_C -3181508942575245480, 5862401268159596619
    var_9528 = 48;
    pri = fun_0BD8(var_9520, var_9512, var_9504, var_9496, var_9488, var_9480)
    var_9536 = 0;
    var_9544 = 3;
    var_9552 = 0;
    var_9560 = 100;
    var_9568 = -1;
    OP_PUSH2_C 570743218067607604, 5862401268159596619
    var_9576 = 56;
    pri = fun_2990(var_9568, var_9560, var_9552, var_9544, var_9536, var_9528, var_9520)
    var_9584 = 5862401268159596619;
    var_9592 = 8;
    pri = fun_0C30(var_9584)
    var_9600 = 1;
    var_9608 = 8;
    pri = fun_2B88(var_9600)
    var_9616 = 0;
    pri = fun_2C48()
    var_9624 = 0;
    var_9632 = 0;
    var_9640 = 0;
    var_9648 = 0;
    OP_PUSH2_C 5862401268159596619, -3181508942575245480
    var_9656 = 48;
    pri = fun_0BD8(var_9648, var_9640, var_9632, var_9624, var_9616, var_9608)
    var_9664 = 0;
    var_9672 = 3;
    var_9680 = 0;
    var_9688 = 100;
    var_9696 = -1;
    OP_PUSH2_C -254491710651460891, -3181508942575245480
    var_9704 = 56;
    pri = fun_2990(var_9696, var_9688, var_9680, var_9672, var_9664, var_9656, var_9648)
    var_9712 = -3181508942575245480;
    var_9720 = 8;
    pri = fun_0C30(var_9712)
    var_9728 = 1;
    var_9736 = 8;
    pri = fun_2B88(var_9728)
    var_9744 = 0;
    pri = fun_2C48()
    var_9752 = -3639666256585418915;
    var_9760 = 8;
    pri = fun_0C30(var_9752)
    var_9768 = 0;
    var_9776 = -3639666256585418915;
    var_9784 = 16;
    pri = fun_0908(var_9776, var_9768)
    var_9792 = 0;
    var_9800 = -3319423182739788766;
    var_9808 = 16;
    pri = fun_0908(var_9800, var_9792)
    var_9816 = 0;
    var_9824 = 3178397703945784922;
    var_9832 = 16;
    pri = fun_0908(var_9824, var_9816)
    var_9840 = 0;
    var_9848 = 4627786387095237427;
    var_9856 = 0;
    OP_PUSH5_C 4660277461471367004, 4630589877863275561, 4659389605831937884, 4658912395795250545, 4644806123405768131
    var_9864 = 4658381133766941737;
    var_9872 = 1;
    pri = EvCameraMove(var_9872, var_9864, var_9856, var_9848, var_9840, var_9832, var_9824, var_9816, var_9808, var_9800)
    var_9880 = 0;
    pri = fun_3390()
    var_9888 = 0;
    var_9896 = 0;
    var_9904 = 0;
    var_9912 = 0;
    OP_PUSH2_C 5862401268159596619, 8802641224559852288
    var_9920 = 48;
    pri = fun_0BD8(var_9912, var_9904, var_9896, var_9888, var_9880, var_9872)
    var_9928 = 0;
    var_9936 = 0;
    var_9944 = 0;
    var_9952 = 0;
    OP_PUSH2_C 5862401268159596619, 8868142065411558194
    var_9960 = 48;
    pri = fun_0BD8(var_9952, var_9944, var_9936, var_9928, var_9920, var_9912)
    var_9968 = 1;
    var_9976 = -1;
    var_9984 = -1;
    var_9992 = 3;
    var_10000 = 0;
    var_10008 = 0;
    var_10016 = 5862401268159596619;
    var_10024 = 56;
    pri = fun_3458(var_10016, var_10008, var_10000, var_9992, var_9984, var_9976, var_9968)
    var_10032 = 0;
    var_10040 = 3;
    var_10048 = 0;
    var_10056 = 100;
    var_10064 = -1;
    OP_PUSH2_C 570742118555979393, 5862401268159596619
    var_10072 = 56;
    pri = fun_2990(var_10064, var_10056, var_10048, var_10040, var_10032, var_10024, var_10016)
    var_10080 = 5862401268159596619;
    var_10088 = 8;
    pri = fun_0E08(var_10080)
    var_10096 = 8802641224559852288;
    var_10104 = 8;
    pri = fun_0C30(var_10096)
    var_10112 = 8868142065411558194;
    var_10120 = 8;
    pri = fun_0C30(var_10112)
    var_10128 = 1;
    var_10136 = 8;
    pri = fun_2B88(var_10128)
    var_10144 = 0;
    pri = fun_2C48()
    var_10152 = 5;
    var_10160 = 5;
    var_10168 = 5862401268159596619;
    var_10176 = 24;
    pri = fun_1C50(var_10168, var_10160, var_10152)
    var_10184 = 1;
    var_10192 = 1;
    var_10200 = -1;
    var_10208 = -1;
    var_10216 = 0;
    var_10224 = 4;
    var_10232 = 5862401268159596619;
    var_10240 = 56;
    pri = fun_5038(var_10232, var_10224, var_10216, var_10208, var_10200, var_10192, var_10184)
    var_10248 = 0;
    var_10256 = 3;
    var_10264 = 0;
    var_10272 = 100;
    var_10280 = -1;
    OP_PUSH2_C 570741019044351182, 5862401268159596619
    var_10288 = 56;
    pri = fun_2990(var_10280, var_10272, var_10264, var_10256, var_10248, var_10240, var_10232)
    var_10296 = 1;
    var_10304 = 8;
    pri = fun_2B88(var_10296)
    var_10312 = 0;
    pri = fun_2C48()
    var_10320 = 1;
    var_10328 = 3;
    var_10336 = 0;
    var_10344 = 4;
    var_10352 = 5862401268159596619;
    var_10360 = 40;
    pri = fun_7370(var_10352, var_10344, var_10336, var_10328, var_10320)
    var_10368 = 5862401268159596619;
    var_10376 = 8;
    pri = fun_0E08(var_10368)
    var_10384 = 1;
    pri = SetCascadeShadowMapLevel(var_10384)
    var_10392 = 0;
    var_10400 = 4627786387095237427;
    var_10408 = 0;
    OP_PUSH5_C 4661296741735664189, 4642949092246919578, 4659868553096997110, 4659782945121658470, 4640081214077958881
    var_10416 = 4658976255430591775;
    var_10424 = 1;
    pri = EvCameraMove(var_10424, var_10416, var_10408, var_10400, var_10392, var_10384, var_10376, var_10368, var_10360, var_10352)
    var_10432 = 0;
    pri = fun_3390()
    var_10440 = 0;
    var_10448 = 4627786387095237427;
    var_10456 = 3;
    OP_PUSH5_C 4661324064599614423, 4643200660507354726, 4659899339422574838, 4659837568859326382, 4640333837869556695
    var_10464 = 4659007085736634614;
    var_10472 = 150;
    pri = EvCameraMove(var_10472, var_10464, var_10456, var_10448, var_10440, var_10432, var_10424, var_10416, var_10408, var_10400)
    var_10480 = 5862401268159596619;
    var_10488 = 8;
    pri = fun_1CB8(var_10480)
    var_10496 = 0;
    var_10504 = 3;
    var_10512 = 0;
    var_10520 = 100;
    var_10528 = -1;
    OP_PUSH2_C 570739919532722971, 5862401268159596619
    var_10536 = 56;
    pri = fun_2990(var_10528, var_10520, var_10512, var_10504, var_10496, var_10488, var_10480)
    var_10544 = 1;
    var_10552 = 8;
    pri = fun_2B88(var_10544)
    var_10560 = 0;
    pri = fun_2C48()
    var_10568 = 0;
    var_10576 = 4627786387095237427;
    var_10584 = 0;
    OP_PUSH5_C 4660847228396880527, 4639652668425916908, 4659779646586775142, 4659258983850558095, 4641073765214584832
    var_10592 = 4658879762290138153;
    var_10600 = 1;
    pri = EvCameraMove(var_10600, var_10592, var_10584, var_10576, var_10568, var_10560, var_10552, var_10544, var_10536, var_10528)
    var_10608 = 0;
    pri = fun_3390()
    var_10616 = 0;
    var_10624 = 4627786387095237427;
    var_10632 = 3;
    OP_PUSH5_C 4660765248809913549, 4639726203763582566, 4659733203215617884, 4659177004263591117, 4641147300552250491
    var_10640 = 4658833318918980895;
    var_10648 = 120;
    pri = EvCameraMove(var_10648, var_10640, var_10632, var_10624, var_10616, var_10608, var_10600, var_10592, var_10584, var_10576)
    var_10656 = 8;
    var_10664 = 5862401268159596619;
    var_10672 = 16;
    pri = fun_1B60(var_10664, var_10656)
    var_10680 = 1;
    var_10688 = -1;
    var_10696 = -1;
    var_10704 = 3;
    var_10712 = 0;
    var_10720 = 1;
    var_10728 = 5862401268159596619;
    var_10736 = 56;
    pri = fun_3458(var_10728, var_10720, var_10712, var_10704, var_10696, var_10688, var_10680)
    var_10744 = 0;
    var_10752 = 3;
    var_10760 = 0;
    var_10768 = 100;
    var_10776 = -1;
    OP_PUSH2_C 570738820021094760, 5862401268159596619
    var_10784 = 56;
    pri = fun_2990(var_10776, var_10768, var_10760, var_10752, var_10744, var_10736, var_10728)
    var_10792 = 5862401268159596619;
    var_10800 = 8;
    pri = fun_0E08(var_10792)
    var_10808 = 5862401268159596619;
    var_10816 = 8;
    pri = fun_1BA0(var_10808)
    var_10824 = 1;
    var_10832 = 8;
    pri = fun_2B88(var_10824)
    var_10840 = 0;
    pri = fun_2C48()
    var_10848 = 2;
    pri = SetCascadeShadowMapLevel(var_10848)
    var_10856 = 0;
    var_10864 = 4627786387095237427;
    var_10872 = 0;
    OP_PUSH5_C 4658547467885991690, 4637660529278247240, 4659229341017073254, 4660355658738334433, 4641481903930815283
    var_10880 = 4659061181708721193;
    var_10888 = 1;
    pri = EvCameraMove(var_10888, var_10880, var_10872, var_10864, var_10856, var_10848, var_10840, var_10832, var_10824, var_10816)
    var_10896 = 0;
    pri = fun_3390()
    var_10904 = 0;
    var_10912 = 4627786387095237427;
    var_10920 = 3;
    OP_PUSH5_C 4658053281389771489, 4637860376511711805, 4659197477170100306, 4659861494232346788, 4641581827547547566
    var_10928 = 4659029317861748244;
    var_10936 = 90;
    pri = EvCameraMove(var_10936, var_10928, var_10920, var_10912, var_10904, var_10896, var_10888, var_10880, var_10872, var_10864)
    var_10944 = 1;
    var_10952 = -1;
    var_10960 = -1;
    var_10968 = 3;
    var_10976 = 0;
    var_10984 = 0;
    var_10992 = -3181508942575245480;
    var_11000 = 56;
    pri = fun_3458(var_10992, var_10984, var_10976, var_10968, var_10960, var_10952, var_10944)
    var_11008 = 12;
    var_11016 = 8;
    pri = fun_0090(var_11008)
    var_11024 = 0;
    var_11032 = 3;
    var_11040 = 0;
    var_11048 = 100;
    var_11056 = -1;
    OP_PUSH2_C -254490611139832680, -3181508942575245480
    var_11064 = 56;
    pri = fun_2990(var_11056, var_11048, var_11040, var_11032, var_11024, var_11016, var_11008)
    var_11072 = -3181508942575245480;
    var_11080 = 8;
    pri = fun_0E08(var_11072)
    var_11088 = -3181508942575245480;
    var_11096 = 8;
    pri = fun_1CB8(var_11088)
    var_11104 = 0;
    pri = fun_3390()
    var_11112 = 1;
    var_11120 = 8;
    pri = fun_2B88(var_11112)
    var_11128 = 0;
    pri = fun_2C48()
    var_11136 = 0;
    var_11144 = 4627786387095237427;
    var_11152 = 0;
    OP_PUSH5_C 4659198466730565304, 4636298190390967665, 4658934561949666509, 4660997575616862618, 4642084260380976087
    var_11160 = 4659080928937556050;
    var_11168 = 1;
    pri = EvCameraMove(var_11168, var_11160, var_11152, var_11144, var_11136, var_11128, var_11120, var_11112, var_11104, var_11096)
    var_11176 = 0;
    pri = fun_3390()
    var_11184 = -3181508942575245480;
    var_11192 = 8;
    pri = fun_1CB8(var_11184)
    var_11200 = 1;
    var_11208 = 1;
    var_11216 = -1;
    var_11224 = -1;
    var_11232 = 0;
    var_11240 = 20;
    var_11248 = 5862401268159596619;
    var_11256 = 56;
    pri = fun_5038(var_11248, var_11240, var_11232, var_11224, var_11216, var_11208, var_11200)
    var_11264 = 90;
    var_11272 = 8;
    pri = fun_0090(var_11264)
    var_11280 = 37888;
    var_11288 = 5862401268159596619;
    var_11296 = 16;
    pri = fun_1008(var_11288, var_11280)
    var_11304 = 1;
    var_11312 = 3;
    var_11320 = 0;
    var_11328 = 20;
    var_11336 = 5862401268159596619;
    var_11344 = 40;
    pri = fun_7370(var_11336, var_11328, var_11320, var_11312, var_11304)
    var_11352 = 5862401268159596619;
    var_11360 = 8;
    pri = fun_0E08(var_11352)
    var_11368 = 5;
    var_11376 = 8;
    pri = fun_0090(var_11368)
    var_11384 = 1;
    var_11392 = 0;
    var_11400 = 4641240890982006784;
    var_11408 = 0;
    var_11416 = 0;
    OP_PUSH4_C 4661730400116775322, 4658808228063635046, 4607182418800017408, 5862401268159596619
    var_11424 = 72;
    pri = fun_09F8(var_11416, var_11408, var_11400, var_11392, var_11384, var_11376, var_11368, var_11360, var_11352)
    var_11432 = 5;
    var_11440 = 5;
    var_11448 = 8868142065411558194;
    var_11456 = 24;
    pri = fun_1C50(var_11448, var_11440, var_11432)
    var_11464 = 0;
    var_11472 = 4627786387095237427;
    var_11480 = 3;
    OP_PUSH5_C 4658566599388314993, 4636798512162070856, 4658716990588762194, 4660365708274612306, 4642334421266527683
    var_11488 = 4658863379566884291;
    var_11496 = 100;
    pri = EvCameraMove(var_11496, var_11488, var_11480, var_11472, var_11464, var_11456, var_11448, var_11440, var_11432, var_11424)
    var_11504 = 0;
    var_11512 = 0;
    var_11520 = 0;
    var_11528 = 0;
    OP_PUSH2_C -3181508942575245480, 8868142065411558194
    var_11536 = 48;
    pri = fun_0BD8(var_11528, var_11520, var_11512, var_11504, var_11496, var_11488)
    var_11544 = 1;
    var_11552 = 1;
    var_11560 = 50;
    OP_PUSH2_C 8868142065411558194, 8802641224559852288
    var_11568 = 40;
    pri = fun_15B8(var_11560, var_11552, var_11544, var_11536, var_11528)
    var_11576 = 0;
    var_11584 = 3;
    var_11592 = 0;
    var_11600 = 100;
    var_11608 = -1;
    OP_PUSH2_C -7752364045695248015, 8868142065411558194
    var_11616 = 56;
    pri = fun_2990(var_11608, var_11600, var_11592, var_11584, var_11576, var_11568, var_11560)
    var_11624 = 8868142065411558194;
    var_11632 = 8;
    pri = fun_0C30(var_11624)
    var_11640 = 1;
    var_11648 = 8;
    pri = fun_2B88(var_11640)
    var_11656 = 0;
    pri = fun_2C48()
    var_11664 = 5;
    var_11672 = -3181508942575245480;
    var_11680 = 16;
    pri = fun_1BD8(var_11672, var_11664)
    var_11688 = 0;
    var_11696 = 0;
    var_11704 = 0;
    var_11712 = 0;
    OP_PUSH2_C 8868142065411558194, -3181508942575245480
    var_11720 = 48;
    pri = fun_0BD8(var_11712, var_11704, var_11696, var_11688, var_11680, var_11672)
    var_11728 = 1;
    var_11736 = 1;
    var_11744 = 50;
    OP_PUSH2_C -3181508942575245480, 8802641224559852288
    var_11752 = 40;
    pri = fun_15B8(var_11744, var_11736, var_11728, var_11720, var_11712)
    var_11760 = 0;
    var_11768 = 3;
    var_11776 = 0;
    var_11784 = 100;
    var_11792 = -1;
    OP_PUSH2_C -254489511628204469, -3181508942575245480
    var_11800 = 56;
    pri = fun_2990(var_11792, var_11784, var_11776, var_11768, var_11760, var_11752, var_11744)
    var_11808 = -3181508942575245480;
    var_11816 = 8;
    pri = fun_0C30(var_11808)
    var_11824 = 1;
    var_11832 = 8;
    pri = fun_2B88(var_11824)
    var_11840 = 0;
    pri = fun_2C48()
    var_11848 = 8868142065411558194;
    var_11856 = 8;
    pri = fun_1CB8(var_11848)
    var_11864 = 0;
    var_11872 = 0;
    var_11880 = 0;
    var_11888 = 0;
    OP_PUSH2_C 8802641224559852288, 8868142065411558194
    var_11896 = 48;
    pri = fun_0BD8(var_11888, var_11880, var_11872, var_11864, var_11856, var_11848)
    var_11904 = 1;
    var_11912 = 1;
    var_11920 = 70;
    OP_PUSH2_C 8868142065411558194, 8802641224559852288
    var_11928 = 40;
    pri = fun_15B8(var_11920, var_11912, var_11904, var_11896, var_11888)
    var_11936 = 0;
    var_11944 = 3;
    var_11952 = 0;
    var_11960 = 100;
    var_11968 = -1;
    OP_PUSH2_C -7752365145206876226, 8868142065411558194
    var_11976 = 56;
    pri = fun_2990(var_11968, var_11960, var_11952, var_11944, var_11936, var_11928, var_11920)
    var_11984 = 8868142065411558194;
    var_11992 = 8;
    pri = fun_0C30(var_11984)
    var_12000 = 1;
    var_12008 = 8;
    pri = fun_2B88(var_12000)
    var_12016 = 0;
    pri = fun_2C48()
    var_12024 = 0;
    var_12032 = 5862401268159596619;
    var_12040 = 16;
    pri = fun_0908(var_12032, var_12024)
    var_12048 = -3181508942575245480;
    var_12056 = 8;
    pri = fun_1BA0(var_12048)
    var_12064 = 2;
    var_12072 = -3181508942575245480;
    var_12080 = 16;
    pri = fun_1BD8(var_12072, var_12064)
    var_12088 = 1;
    var_12096 = 1;
    var_12104 = 70;
    OP_PUSH2_C -3181508942575245480, 8802641224559852288
    var_12112 = 40;
    pri = fun_15B8(var_12104, var_12096, var_12088, var_12080, var_12072)
    var_12120 = 0;
    var_12128 = 0;
    var_12136 = 0;
    var_12144 = 0;
    OP_PUSH2_C 8802641224559852288, -3181508942575245480
    var_12152 = 48;
    pri = fun_0BD8(var_12144, var_12136, var_12128, var_12120, var_12112, var_12104)
    var_12160 = 0;
    var_12168 = 3;
    var_12176 = 0;
    var_12184 = 100;
    var_12192 = -1;
    OP_PUSH2_C -251524128767487077, -3181508942575245480
    var_12200 = 56;
    pri = fun_2990(var_12192, var_12184, var_12176, var_12168, var_12160, var_12152, var_12144)
    var_12208 = -3181508942575245480;
    var_12216 = 8;
    pri = fun_0C30(var_12208)
    var_12224 = 5862401268159596619;
    var_12232 = 8;
    pri = fun_0C30(var_12224)
    var_12240 = 1;
    var_12248 = 8;
    pri = fun_2B88(var_12240)
    var_12256 = 0;
    pri = fun_2C48()
    var_12264 = -1;
    var_12272 = 8802641224559852288;
    var_12280 = 16;
    pri = fun_1AE0(var_12272, var_12264)
    var_12288 = 1;
    var_12296 = 0;
    var_12304 = 50;
    pri = float(var_12304)
    var_12312 = pri;
    var_12320 = 0;
    var_12328 = 0;
    OP_PUSH4_C 4661464208351690752, 4659041984235700224, 4611686018427387904, -3181508942575245480
    var_12336 = 72;
    pri = fun_09F8(var_12328, var_12320, var_12312, var_12304, var_12296, var_12288, var_12280, var_12272, var_12264)
    var_12344 = 5;
    var_12352 = 8;
    pri = fun_0090(var_12344)
    var_12360 = 1;
    var_12368 = 0;
    var_12376 = 50;
    pri = float(var_12376)
    var_12384 = pri;
    var_12392 = 0;
    var_12400 = 0;
    OP_PUSH4_C 4661434631488903578, 4658801850896193946, 4611686018427387904, 8802641224559852288
    var_12408 = 72;
    pri = fun_09F8(var_12400, var_12392, var_12384, var_12376, var_12368, var_12360, var_12352, var_12344, var_12336)
    var_12416 = 5;
    var_12424 = 8;
    pri = fun_0090(var_12416)
    var_12432 = 1;
    var_12440 = 0;
    var_12448 = 50;
    pri = float(var_12448)
    var_12456 = pri;
    var_12464 = 0;
    var_12472 = 0;
    OP_PUSH4_C 4661425285640067482, 4658574911696220979, 4611686018427387904, 8868142065411558194
    var_12480 = 72;
    pri = fun_09F8(var_12472, var_12464, var_12456, var_12448, var_12440, var_12432, var_12424, var_12416, var_12408)
    var_12488 = 0;
    var_12496 = 4627786387095237427;
    var_12504 = 3;
    OP_PUSH5_C 4661403735212163072, 4645939060187028521, 4658926667456179077, 4662297561199731016, 4643041275301792317
    var_12512 = 4659071055323138621;
    var_12520 = 80;
    pri = EvCameraMove(var_12520, var_12512, var_12504, var_12496, var_12488, var_12480, var_12472, var_12464, var_12456, var_12448)
    var_12528 = 0;
    pri = fun_3390()
    var_12536 = 75;
    var_12544 = 8;
    pri = fun_0090(var_12536)
    var_12552 = 0;
    var_12560 = 8802641224559852288;
    var_12568 = 16;
    pri = fun_0940(var_12560, var_12552)
    var_12576 = 0;
    var_12584 = -3181508942575245480;
    var_12592 = 16;
    pri = fun_0940(var_12584, var_12576)
    var_12600 = 0;
    var_12608 = 8868142065411558194;
    var_12616 = 16;
    pri = fun_0940(var_12608, var_12600)
    var_12624 = 0;
    var_12632 = 5862401268159596619;
    var_12640 = 16;
    pri = fun_0940(var_12632, var_12624)
    var_12648 = 0;
    var_12656 = -3639666256585418915;
    var_12664 = 16;
    pri = fun_0940(var_12656, var_12648)
    var_12672 = 0;
    var_12680 = -3319423182739788766;
    var_12688 = 16;
    pri = fun_0940(var_12680, var_12672)
    var_12696 = 0;
    var_12704 = 3178397703945784922;
    var_12712 = 16;
    pri = fun_0940(var_12704, var_12696)
    var_12720 = 0;
    var_12728 = 5862401268159596619;
    var_12736 = 16;
    pri = fun_0908(var_12728, var_12720)
    var_12744 = 0;
    var_12752 = -3639666256585418915;
    var_12760 = 16;
    pri = fun_0908(var_12752, var_12744)
    var_12768 = 0;
    var_12776 = -3319423182739788766;
    var_12784 = 16;
    pri = fun_0908(var_12776, var_12768)
    var_12792 = 0;
    var_12800 = 3178397703945784922;
    var_12808 = 16;
    pri = fun_0908(var_12800, var_12792)
    pri = 1;
    return pri;
}
// fun_145B8
fun_145B8() {
    pri = 0;
    return pri;
}
// fun_145D0
fun_145D0() {
    pri = 0;
    return pri;
}
// fun_145E8
fun_145E8() {
    var_8 = 5862401268159596619;
    var_16 = 8;
    pri = fun_0790(var_8)
    var_24 = -3639666256585418915;
    var_32 = 8;
    pri = fun_0790(var_24)
    var_40 = -3319423182739788766;
    var_48 = 8;
    pri = fun_0790(var_40)
    var_56 = 3178397703945784922;
    var_64 = 8;
    pri = fun_0790(var_56)
    var_72 = -3181508942575245480;
    var_80 = 8;
    pri = fun_0790(var_72)
    var_88 = 8868142065411558194;
    var_96 = 8;
    pri = fun_0790(var_88)
    var_104 = -303377521461947352;
    pri = FlagReset(var_104)
    var_112 = -5766348188344541335;
    pri = FlagSet(var_112)
    var_120 = 10000;
    var_128 = 8;
    pri = fun_BBA0(var_120)
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_147B8
    var_136 = -5225704462842025352;
    pri = FlagSet(var_136)
    OP_JUMP lab_147E0
// lab_147B8
    var_8 = -1787470995557921022;
    pri = FlagSet(var_8)
// lab_147E0
    var_8 = 2610993506854619934;
    pri = FlagReset(var_8)
    var_16 = 2556148519277313732;
    pri = FlagReset(var_16)
    var_24 = -1180051137964617721;
    pri = VanishFlagReset(var_24)
    var_32 = 3891752725908598821;
    pri = VanishFlagReset(var_32)
    var_40 = -2880323008892522216;
    pri = VanishFlagReset(var_40)
    var_48 = -2880319710357637583;
    pri = VanishFlagReset(var_48)
    var_56 = 3891749427373714188;
    pri = VanishFlagReset(var_56)
    var_64 = 3891750526885342399;
    pri = VanishFlagReset(var_64)
    var_72 = 3891747228350457766;
    pri = VanishFlagReset(var_72)
    var_80 = -2880320809869265794;
    pri = VanishFlagReset(var_80)
    var_88 = -2880318610846009372;
    pri = VanishFlagReset(var_88)
    var_96 = -2880315312311124739;
    pri = VanishFlagReset(var_96)
    var_104 = 3891748327862085977;
    pri = VanishFlagReset(var_104)
    var_112 = 1451426230526205437;
    pri = VanishFlagReset(var_112)
    var_120 = 5853608284009014273;
    pri = VanishFlagReset(var_120)
    var_128 = 1451246788605109846;
    pri = VanishFlagReset(var_128)
    var_136 = 1451425131014577226;
    pri = VanishFlagReset(var_136)
    var_144 = -4275866473915358187;
    pri = VanishFlagReset(var_144)
    var_152 = 1476555257056289401;
    pri = FlagSet(var_152)
    pri = 0;
    return pri;
}
// fun_14AE8
fun_14AE8() {
    pri = 0;
    return pri;
}
// fun_14B00
fun_14B00() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 35184;
    var_32 = 60;
    var_40 = 32;
    pri = fun_0338(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03A8()
    var_56 = 38072;
    pri = SoundPostEvent(var_56)
    var_64 = 1;
    var_72 = 8;
    pri = fun_0090(var_64)
    var_80 = 0;
    var_88 = 1;
    var_96 = 1;
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 38232;
    var_136 = 56;
    pri = fun_3120(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_144 = 1;
    var_152 = 8;
    pri = fun_0090(var_144)
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    var_184 = 0;
    var_192 = 0;
    OP_PUSH4_C 4677762763990446899, 4671092109408101990, 115789295882128190, -7332432130569991359
    var_200 = 72;
    pri = fun_0460(var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128)
    var_208 = 1;
    var_216 = 143;
    pri = float(var_216)
    var_224 = pri;
    var_232 = 8802641224559852288;
    var_240 = 24;
    pri = fun_08C8(var_232, var_224, var_216)
    var_248 = 36632;
    var_256 = 8;
    var_264 = 16;
    pri = fun_02D8(var_256, var_248)
    var_272 = 0;
    pri = fun_03A8()
    var_280 = 10;
    var_288 = 8;
    pri = fun_0090(var_280)
    var_296 = 38272;
    pri = SoundPostEvent(var_296)
    var_304 = 30;
    var_312 = 8;
    pri = fun_0090(var_304)
    var_320 = 38448;
    pri = SoundPostEvent(var_320)
    var_328 = 1;
    var_336 = 8;
    pri = fun_B780(var_328)
    var_344 = 3;
    var_352 = 0;
    var_360 = -3411697186884780508;
    var_368 = 24;
    pri = fun_2A40(var_360, var_352, var_344)
    var_376 = 1;
    var_384 = 8;
    pri = fun_2B88(var_376)
    var_392 = 0;
    pri = fun_2C48()
    var_400 = 38648;
    pri = SoundPostEvent(var_400)
    var_408 = 1;
    var_416 = 8;
    pri = fun_B938(var_408)
    var_424 = 10;
    var_432 = 8;
    pri = fun_0090(var_424)
    pri = 0;
    return pri;
}
// fun_14E88
fun_14E88() {
    pri = 0;
    return pri;
}
// fun_14EA0
fun_14EA0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_BDA8()
    var_16 = 0;
    pri = fun_BE00()
    var_24 = 0;
    pri = fun_BE18()
    var_32 = 0;
    pri = fun_BE48()
    OP_JZER lab_14F88
    var_40 = 0;
    pri = fun_145B8()
    var_48 = 0;
    pri = fun_145E8()
    var_56 = 0;
    pri = fun_14B00()
    OP_JUMP lab_14FD0
// lab_14F88
    var_8 = 0;
    pri = fun_145D0()
    var_16 = 0;
    pri = fun_14AE8()
    var_24 = 0;
    pri = fun_14E88()
// lab_14FD0
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_14FF8
fun_14FF8() {
    var_8 = 0;
    pri = fun_BE00()
    var_16 = 0;
    pri = fun_145E8()
    var_24 = 1;
    pri = SetNpcLicenseCardFlag(var_24)
    pri = 0;
    return pri;
}
// fun_15060
fun_15060() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -1061322471557881176;
    var_88 = 80;
    pri = fun_A010(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_150E8
fun_150E8() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -3314334883703108143;
    var_88 = 80;
    pri = fun_A010(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
