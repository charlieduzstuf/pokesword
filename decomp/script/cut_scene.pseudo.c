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
    pri = DisplayPlaceName_()
    pri = 0;
    return pri;
}
// fun_0468
fun_0468() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_04B0
// lab_04B0
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_04F0
    OP_JUMP lab_0560
// lab_04F0
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0530
    OP_JUMP lab_0560
// lab_0530
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_04B0
// lab_0560
    pri = 0;
    return pri;
}
// fun_0578
fun_0578() {
    pri = IsFieldObjectNotSetupAny_()
    return pri;
}
// fun_05A0
fun_05A0() {
    OP_JUMP lab_05B8
// lab_05B8
    var_8 = 0;
    pri = fun_0578()
    OP_JNZ lab_05F0
    pri = 0;
    return pri;
// lab_05F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05B8
    pri = 0;
    return pri;
}
// fun_0630
fun_0630() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0680
fun_0680() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_06D8
fun_06D8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXYZ_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0730
fun_0730() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0770
fun_0770() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngleToTargetObject_(var_24, var_16, var_8)
    return pri;
}
// fun_07B0
fun_07B0() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = arg_0;
    pri = SetFieldObjectAngleToTargetPosition_(var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07F8
fun_07F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0830
fun_0830() {
    pri = arg_1;
    OP_NOT 
    var_8 = pri;
    var_16 = arg_0;
    pri = SetFieldObjectTerrainHieghtAdjustFlag_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0880
fun_0880() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectActiveDynamicCollision_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_08C0
fun_08C0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectActiveStaticCollision_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0900
fun_0900() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetCharaShadowEnabled(var_16, var_8)
    return pri;
}
// fun_0938
fun_0938() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0978
fun_0978() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetPlacementSelectParam_(var_24, var_16, var_8)
    var_32 = 1;
    var_40 = 8;
    pri = fun_0090(var_32)
    var_48 = 0;
    pri = fun_05A0()
    pri = 0;
    return pri;
}
// fun_09F8
fun_09F8() {
    pri = ResetPlacementSelectParam_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    var_24 = 0;
    pri = fun_05A0()
    pri = 0;
    return pri;
}
// fun_0A60
fun_0A60() {
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
// fun_0AD8
fun_0AD8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartForceMoveFrame_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0B30
fun_0B30() {
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
// fun_0BF0
fun_0BF0() {
    var_8 = arg_4;
    var_16 = arg_5;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartPathMove_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0C48
fun_0C48() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0C98
fun_0C98() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0CF0
fun_0CF0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetPosition_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0D48
fun_0D48() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_0C98(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = arg_2;
    var_96 = arg_0;
    var_104 = arg_1;
    var_112 = 48;
    pri = fun_0C98(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_0DF0
fun_0DF0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2BC0(var_8)
    OP_JZER lab_0E68
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_2BF0(var_24)
    OP_JNZ lab_0E68
    pri = 0;
    return pri;
// lab_0E68
    OP_JUMP lab_0E78
// lab_0E78
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0ED8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0ED8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0E78
    pri = 0;
    return pri;
}
// fun_0F18
fun_0F18() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0F50
fun_0F50() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateBoolParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0F90
fun_0F90() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0FD0
fun_0FD0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateFloatParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_1010
fun_1010() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_1048
fun_1048() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_1090
    pri = 0;
    return pri;
// lab_1090
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_10D0
// lab_10D0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2BC0(var_8)
    OP_JNZ lab_1158
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_1148
    pri = 0;
    return pri;
// lab_1158
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_11A0
    pri = 0;
    return pri;
// lab_11A0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_1200
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1370(var_8)
    pri = 0;
    return pri;
// lab_1200
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_10D0
    pri = 0;
    return pri;
// lab_1148
    OP_JUMP lab_11A0
}
// fun_1248
fun_1248() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_1290
// lab_1290
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_12E8
    pri = 0;
    return pri;
// lab_12E8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_1328
    pri = 0;
    return pri;
// lab_1328
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1290
    pri = 0;
    return pri;
}
// fun_1370
fun_1370() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_13A8
fun_13A8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_13F8
    pri = 0;
    return pri;
// lab_13F8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2BC0(var_8)
    OP_JZER lab_1528
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1450
    OP_ZERO_P_S 64
// lab_1528
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1560
    OP_CONST_S 64, 1
// lab_1560
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1598
    OP_CONST_S 72, 1
// lab_1598
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
// lab_1450
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1478
    OP_ZERO_P_S 72
// lab_1478
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
    OP_JUMP lab_1638
// lab_1638
    pri = 0;
    return pri;
}
// fun_1648
fun_1648() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1688
fun_1688() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_16C8
fun_16C8() {
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
// fun_1728
fun_1728() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = EnableFieldObjectLookAtAngleSpeed_(var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1788
fun_1788() {
    OP_CONST_S -8, 4631530004285489152
    pri = arg_1;
    switch (pri) {
// switch_1B48
        case default:
        {
// switch_1B48_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_1B48_case_0x0
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
            pri = fun_16C8(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1B48_case_default
        }
        case 0x1:
        {
// switch_1B48_case_0x1
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_16C8(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1B48_case_default
        }
        case 0x2:
        {
// switch_1B48_case_0x2
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
            pri = fun_16C8(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1B48_case_default
        }
        case 0x3:
        {
// switch_1B48_case_0x3
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 0;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_16C8(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1B48_case_default
        }
        case 0x4:
        {
// switch_1B48_case_0x4
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
            pri = fun_16C8(var_80, var_72, var_64, var_56, var_48, var_40)
            OP_JUMP switch_1B48_case_default
        }
        case 0x5:
        {
// switch_1B48_case_0x5
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
            pri = fun_16C8(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1B48_case_default
        }
        case 0x6:
        {
// switch_1B48_case_0x6
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
            pri = fun_16C8(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1B48_case_default
        }
        case 0x7:
        {
// switch_1B48_case_0x7
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_16C8(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1B48_case_default
        }
    }
}
// fun_1BF8
fun_1BF8() {
    OP_CONST_S -8, 4631530004285489152
    pri = arg_1;
    switch (pri) {
// switch_1FB8
        case default:
        {
// switch_1FB8_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_1FB8_case_0x0
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
            pri = fun_1728(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1FB8_case_default
        }
        case 0x1:
        {
// switch_1FB8_case_0x1
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_1728(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1FB8_case_default
        }
        case 0x2:
        {
// switch_1FB8_case_0x2
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
            pri = fun_1728(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1FB8_case_default
        }
        case 0x3:
        {
// switch_1FB8_case_0x3
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 0;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_1728(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1FB8_case_default
        }
        case 0x4:
        {
// switch_1FB8_case_0x4
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
            pri = fun_1728(var_80, var_72, var_64, var_56, var_48, var_40)
            OP_JUMP switch_1FB8_case_default
        }
        case 0x5:
        {
// switch_1FB8_case_0x5
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
            pri = fun_1728(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1FB8_case_default
        }
        case 0x6:
        {
// switch_1FB8_case_0x6
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
            pri = fun_1728(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1FB8_case_default
        }
        case 0x7:
        {
// switch_1FB8_case_0x7
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_1728(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1FB8_case_default
        }
    }
}
// fun_2068
fun_2068() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartFieldObjectEyeLookAt_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_20C0
fun_20C0() {
    OP_ZERO_P_S -8
    pri = arg_2;
    OP_JNZ lab_2118
    OP_CONST_S -8, 4602678819172646912
    OP_JUMP lab_2130
// lab_2118
    OP_CONST_S -8, 4607182418800017408
// lab_2130
    pri = arg_1;
    switch (pri) {
// switch_2488
        case default:
        {
// switch_2488_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_2488_case_0x0
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = 0;
            var_32 = var_8;
            var_40 = arg_0;
            var_48 = 40;
            pri = fun_2068(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2488_case_default
        }
        case 0x1:
        {
// switch_2488_case_0x1
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = 0;
            var_32 = var_8;
            var_40 = 8;
            pri = fun_0060(var_32)
            var_48 = pri;
            var_56 = arg_0;
            var_64 = 40;
            pri = fun_2068(var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_2488_case_default
        }
        case 0x2:
        {
// switch_2488_case_0x2
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = var_8;
            var_32 = 0;
            var_40 = arg_0;
            var_48 = 40;
            pri = fun_2068(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2488_case_default
        }
        case 0x3:
        {
// switch_2488_case_0x3
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = var_8;
            var_32 = 8;
            pri = fun_0060(var_24)
            var_40 = pri;
            var_48 = 0;
            var_56 = arg_0;
            var_64 = 40;
            pri = fun_2068(var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_2488_case_default
        }
        case 0x4:
        {
// switch_2488_case_0x4
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = var_8;
            var_32 = var_8;
            var_40 = arg_0;
            var_48 = 40;
            pri = fun_2068(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2488_case_default
        }
        case 0x5:
        {
// switch_2488_case_0x5
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = var_8;
            var_32 = var_8;
            var_40 = 8;
            pri = fun_0060(var_32)
            var_48 = pri;
            var_56 = arg_0;
            var_64 = 40;
            pri = fun_2068(var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_2488_case_default
        }
        case 0x6:
        {
// switch_2488_case_0x6
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = var_8;
            var_32 = 8;
            pri = fun_0060(var_24)
            var_40 = pri;
            var_48 = var_8;
            var_56 = arg_0;
            var_64 = 40;
            pri = fun_2068(var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_2488_case_default
        }
        case 0x7:
        {
// switch_2488_case_0x7
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = var_8;
            var_32 = 8;
            pri = fun_0060(var_24)
            var_40 = pri;
            var_48 = var_8;
            var_56 = 8;
            pri = fun_0060(var_48)
            var_64 = pri;
            var_72 = arg_0;
            var_80 = 40;
            pri = fun_2068(var_72, var_64, var_56, var_48, var_40)
            OP_JUMP switch_2488_case_default
        }
    }
}
// fun_2538
fun_2538() {
    var_8 = 344;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2578
fun_2578() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_25B8
fun_25B8() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_25F0
fun_25F0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2630
fun_2630() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_2668
fun_2668() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_2578(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_25F0(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_26D0
fun_26D0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_25B8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_2630(var_24)
    pri = 0;
    return pri;
}
// fun_2728
fun_2728() {
    var_8 = arg_8;
    var_16 = arg_6;
    var_24 = arg_5;
    var_32 = arg_4;
    var_40 = arg_3;
    var_48 = arg_2;
    var_56 = arg_7;
    var_64 = arg_1;
    var_72 = arg_0;
    pri = PlayParticleVfx_(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_2798
fun_2798() {
    var_8 = arg_1;
    var_16 = 8;
    pri = fun_2BC0(var_8)
    OP_JZER lab_2838
    var_24 = arg_5;
    var_32 = arg_4;
    var_40 = arg_3;
    var_48 = 0;
    var_56 = arg_2;
    var_64 = 0;
    var_72 = 392;
    var_80 = arg_1;
    var_88 = arg_0;
    pri = PlayParticleVfx_(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    return pri;
// lab_2838
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = 0;
    var_40 = arg_2;
    var_48 = 0;
    var_56 = 504;
    var_64 = arg_1;
    var_72 = arg_0;
    pri = PlayParticleVfx_(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_28A0
fun_28A0() {
    var_8 = arg_8;
    var_16 = arg_7;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = arg_1;
    var_72 = arg_0;
    pri = PlayParticleVfxOnCamera_(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_2910
fun_2910() {
    var_8 = arg_5;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = 608;
    var_64 = 0;
    var_72 = arg_0;
    pri = PlayParticleVfx_(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_2980
fun_2980() {
    pri = 0;
    OP_ADDR_ALT -1376
    OP_FILL 1376
    pri = 616;
    OP_ADDR_ALT -1376
    OP_MOVS 1368
    pri = 0;
    OP_ADDR_ALT -2560
    OP_FILL 1184
    pri = 1984;
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
    pri = fun_2798(var_2616, var_2608, var_2600, var_2592, var_2584, var_2576)
    return pri;
}
// fun_2B20
fun_2B20() {
    OP_JUMP lab_2B38
// lab_2B38
    var_8 = arg_0;
    pri = IsEndParticleVfx_(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2B80
    OP_JUMP lab_2BB0
// lab_2B80
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2B38
// lab_2BB0
    pri = 0;
    return pri;
}
// fun_2BC0
fun_2BC0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_2BF0
fun_2BF0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_2C20
fun_2C20() {
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
// switch_3238
        case default:
        {
// switch_3238_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_3280
// lab_3280
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
            OP_JNZ lab_3328
            var_88 = 0;
            pri = fun_36B8()
// lab_3328
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_3238_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_2E20
                case default:
                {
// switch_2E20_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_2E98
// lab_2E98
                    OP_JUMP lab_3280
                }
                case 0x0:
                {
// switch_2E20_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_2E98
                }
                case 0x1:
                {
// switch_2E20_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_2E98
                }
                case 0x2:
                {
// switch_2E20_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_2E98
                }
                case 0x3:
                {
// switch_2E20_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_2E98
                }
                case 0x4:
                {
// switch_2E20_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_2E98
                }
                case 0x5:
                {
// switch_2E20_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_2E98
                }
            }
        }
        case 0x65:
        {
// switch_3238_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_2FD8
                case default:
                {
// switch_2FD8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_3050
// lab_3050
                    OP_JUMP lab_3280
                }
                case 0x0:
                {
// switch_2FD8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_3050
                }
                case 0x1:
                {
// switch_2FD8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_3050
                }
                case 0x2:
                {
// switch_2FD8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_3050
                }
                case 0x3:
                {
// switch_2FD8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_3050
                }
                case 0x4:
                {
// switch_2FD8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_3050
                }
                case 0x5:
                {
// switch_2FD8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_3050
                }
            }
        }
        case 0x66:
        {
// switch_3238_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_3190
                case default:
                {
// switch_3190_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_3208
// lab_3208
                    OP_JUMP lab_3280
                }
                case 0x0:
                {
// switch_3190_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_3208
                }
                case 0x1:
                {
// switch_3190_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_3208
                }
                case 0x2:
                {
// switch_3190_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_3208
                }
                case 0x3:
                {
// switch_3190_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_3208
                }
                case 0x4:
                {
// switch_3190_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_3208
                }
                case 0x5:
                {
// switch_3190_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_3208
                }
            }
        }
    }
}
// fun_3340
fun_3340() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_2C20(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_33A8
fun_33A8() {
    pri = 3160;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 3240;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_1010(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_3450
    pri = 1;
    return pri;
// lab_3450
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_3498
fun_3498() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_34E8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_33A8(var_8)
    arg_2 = pri;
// lab_34E8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_2C20(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_3548
fun_3548() {
    pri = arg_2;
    var_8 = pri;
    pri = PlayerGetSex()
    OP_JNZ lab_35A0
    pri = arg_1;
    var_8 = pri;
// lab_35A0
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_5;
    var_32 = arg_4;
    var_40 = arg_3;
    var_48 = var_8;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_3498(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_3608
fun_3608() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_3340(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_3658
fun_3658() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_3608(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_36B8
fun_36B8() {
    OP_JUMP lab_36D0
// lab_36D0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_3710
    pri = 0;
    return pri;
// lab_3710
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_36D0
    pri = 0;
    return pri;
}
// fun_3750
fun_3750() {
    var_8 = 0;
    pri = fun_36B8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_3800
    var_32 = 3288;
    pri = SoundPostEvent(var_32)
// lab_3800
    pri = 0;
    return pri;
}
// fun_3810
fun_3810() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_3840
fun_3840() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_3870
// lab_3870
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_38B0
    OP_JUMP lab_38E0
// lab_38B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_3870
// lab_38E0
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_3928
fun_3928() {
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
// fun_3998
fun_3998() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_3A10()
    return pri;
}
// fun_3A10
fun_3A10() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_3A50
fun_3A50() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_3A88
fun_3A88() {
    OP_JUMP lab_3AA0
// lab_3AA0
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_3AE8
    OP_JUMP lab_3B18
    OP_JUMP lab_3B08
// lab_3AE8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_3B18
    pri = 0;
    return pri;
// lab_3B08
    OP_JUMP lab_3AA0
}
// fun_3B28
fun_3B28() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_3B58
fun_3B58() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_3BA8
fun_3BA8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 3;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_3BF8
fun_3BF8() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_3C78
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 3;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    OP_JUMP lab_3CB0
// lab_3C78
    var_8 = 0;
    var_16 = arg_2;
    var_24 = arg_0;
    var_32 = 3;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
// lab_3CB0
    pri = 0;
    return pri;
}
// fun_3CC0
fun_3CC0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_3D10
fun_3D10() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_3D60
fun_3D60() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_3DB0
fun_3DB0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_3E00
fun_3E00() {
    OP_JUMP lab_3E18
// lab_3E18
    pri = EvCameraMoveWait_()
    OP_JZER lab_3E50
    pri = 0;
    return pri;
// lab_3E50
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_3E18
    pri = 0;
    return pri;
}
// fun_3E90
fun_3E90() {
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
    var_88 = 0;
    var_96 = 4607182418800017408;
    pri = EvCameraShake_(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_3F28
fun_3F28() {
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
// fun_3FC0
fun_3FC0() {
    var_8 = arg_8;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = arg_7;
    var_64 = arg_6;
    var_72 = arg_5;
    var_80 = 4607182418800017408;
    var_88 = 0;
    var_96 = 0;
    pri = EvCameraShake_(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4058
fun_4058() {
    OP_JUMP lab_4070
// lab_4070
    pri = EvCameraIsShake()
    OP_JNZ lab_40A8
    pri = 0;
    return pri;
// lab_40A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_4070
    pri = 0;
    return pri;
}
// fun_40E8
fun_40E8() {
    pri = EvCameraShakeEnd()
    var_8 = arg_0;
    pri = EvCameraHandShakeEnd(var_8)
    pri = 0;
    return pri;
}
// fun_4138
fun_4138() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_41A0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_4278()
    pri = 0;
    return pri;
}
// fun_41A0
fun_41A0() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_41F8
fun_41F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_41A0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_4278()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_4278
fun_4278() {
    OP_JUMP lab_4290
// lab_4290
    pri = IsEasingRunningDof_()
    OP_JZER lab_42E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_42F8
// lab_42E8
    pri = 0;
    return pri;
// lab_42F8
    OP_JUMP lab_4290
    pri = 0;
    return pri;
}
// fun_4318
fun_4318() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDofChara_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4370
fun_4370() {
    var_8 = arg_0;
    pri = SetNpcLicenseCardFlag(var_8)
    pri = 0;
    return pri;
}
// fun_43A8
fun_43A8() {
    pri = arg_6;
    OP_JNZ lab_43E0
    var_8 = 0;
    pri = fun_1648()
// lab_43E0
    pri = arg_1;
    switch (pri) {
// switch_5948
        case default:
        {
// switch_5948_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5C98
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5C98
            pri = 1;
            OP_JUMP lab_5CA0
// lab_5C98
            pri = 0;
// lab_5CA0
            OP_JZER lab_5DF8
            var_16 = 11136;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_1010(var_24, var_16)
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
            var_64 = 11240;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 3464;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_5E58
// lab_5DF8
            var_8 = 64;
            alt = 3464;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
// lab_5E58
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_5EB8
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_5F18
// lab_5EB8
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_5F18
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_5F18
            pri = arg_2;
            OP_JZER lab_5F58
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_5F58
            var_8 = 0;
            pri = fun_1688()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5948_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5948_case_default
        }
        case 0x1:
        {
// switch_5948_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5948_case_default
        }
        case 0x2:
        {
// switch_5948_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5948_case_default
        }
        case 0x3:
        {
// switch_5948_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5948_case_default
        }
        case 0x4:
        {
// switch_5948_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5948_case_default
        }
        case 0x5:
        {
// switch_5948_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8424;
            var_72 = 8416;
            var_80 = 8408;
            alt = 3464;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5948_case_default
        }
        case 0x6:
        {
// switch_5948_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8448;
            var_72 = 8440;
            var_80 = 8432;
            alt = 3464;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5948_case_default
        }
        case 0x7:
        {
// switch_5948_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8472;
            var_72 = 8464;
            var_80 = 8456;
            alt = 3464;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5948_case_default
        }
        case 0x8:
        {
// switch_5948_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5948_case_default
        }
        case 0x9:
        {
// switch_5948_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8496;
            var_72 = 8488;
            var_80 = 8480;
            alt = 3464;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5948_case_default
        }
        case 0xa:
        {
// switch_5948_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8520;
            var_72 = 8512;
            var_80 = 8504;
            alt = 3464;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5948_case_default
        }
        case 0xb:
        {
// switch_5948_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8544;
            var_72 = 8536;
            var_80 = 8528;
            alt = 3464;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5948_case_default
        }
        case 0xc:
        {
// switch_5948_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8568;
            var_72 = 8560;
            var_80 = 8552;
            alt = 3464;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5948_case_default
        }
        case 0xd:
        {
// switch_5948_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8592;
            var_72 = 8584;
            var_80 = 8576;
            alt = 3464;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5948_case_default
        }
        case 0xe:
        {
// switch_5948_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8616;
            var_72 = 8608;
            var_80 = 8600;
            alt = 3464;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5948_case_default
        }
        case 0xf:
        {
// switch_5948_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5948_case_default
        }
        case 0x10:
        {
// switch_5948_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5948_case_default
        }
        case 0x11:
        {
// switch_5948_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8640;
            var_72 = 8632;
            var_80 = 8624;
            alt = 3464;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5948_case_default
        }
        case 0x12:
        {
// switch_5948_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8664;
            var_72 = 8656;
            var_80 = 8648;
            alt = 3464;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5948_case_default
        }
        case 0x13:
        {
// switch_5948_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5948_case_default
        }
        case 0x14:
        {
// switch_5948_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5948_case_default
        }
        case 0x15:
        {
// switch_5948_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5948_case_default
        }
        case 0x16:
        {
// switch_5948_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5948_case_default
        }
        case 0x17:
        {
// switch_5948_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5948_case_default
        }
        case 0x18:
        {
// switch_5948_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5948_case_default
        }
        case 0x19:
        {
// switch_5948_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8688;
            var_72 = 8680;
            var_80 = 8672;
            alt = 3464;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5948_case_default
        }
        case 0x1a:
        {
// switch_5948_case_0x1a
            var_8 = 1;
            var_16 = 8696;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0F90(var_24, var_16, var_8)
            var_40 = 8832;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0F18(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 8912;
            var_88 = 8904;
            var_96 = 8896;
            alt = 3464;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_13A8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_5948_case_default
        }
        case 0x1b:
        {
// switch_5948_case_0x1b
            var_8 = 3;
            var_16 = 8920;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0F90(var_24, var_16, var_8)
            var_40 = 9056;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0F18(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 9136;
            var_88 = 9128;
            var_96 = 9120;
            alt = 3464;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_13A8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_5948_case_default
        }
        case 0x1c:
        {
// switch_5948_case_0x1c
            var_8 = 2;
            var_16 = 9144;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0F90(var_24, var_16, var_8)
            var_40 = 9280;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0F18(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 9360;
            var_88 = 9352;
            var_96 = 9344;
            alt = 3464;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_13A8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_5948_case_default
        }
        case 0x1d:
        {
// switch_5948_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9368;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5948_case_default
        }
        case 0x1e:
        {
// switch_5948_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9504;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5948_case_default
        }
        case 0x1f:
        {
// switch_5948_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9640;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5948_case_default
        }
        case 0x20:
        {
// switch_5948_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9776;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5948_case_default
        }
        case 0x21:
        {
// switch_5948_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9896;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5948_case_default
        }
        case 0x22:
        {
// switch_5948_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10016;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5948_case_default
        }
        case 0x23:
        {
// switch_5948_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10152;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5948_case_default
        }
        case 0x24:
        {
// switch_5948_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10288;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5948_case_default
        }
        case 0x25:
        {
// switch_5948_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10424;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5948_case_default
        }
        case 0x26:
        {
// switch_5948_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10560;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5948_case_default
        }
        case 0x27:
        {
// switch_5948_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10704;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5948_case_default
        }
        case 0x28:
        {
// switch_5948_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10848;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5948_case_default
        }
        case 0x29:
        {
// switch_5948_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10992;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5948_case_default
        }
    }
}
// fun_5F88
fun_5F88() {
    pri = arg_5;
    OP_JNZ lab_5FC0
    var_8 = 0;
    pri = fun_1648()
// lab_5FC0
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_6010
    OP_CONST_S -8, -1
// lab_6010
    pri = arg_1;
    switch (pri) {
// switch_7AC8
        case default:
        {
// switch_7AC8_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_7F70
            var_520 = 31000;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_1010(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7F70
            pri = 1;
            OP_JUMP lab_7F78
// lab_7F70
            pri = 0;
// lab_7F78
            OP_JZER lab_7FC8
            var_8 = 64;
            var_16 = 31096;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_8220
// lab_7FC8
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_8030
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_8030
            pri = 1;
            OP_JUMP lab_8038
// lab_8030
            pri = 0;
// lab_8038
            OP_JZER lab_81C0
            var_16 = 31272;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_1010(var_24, var_16)
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
            var_176 = 31376;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 31392;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 11256;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_8220
// lab_81C0
            var_8 = 64;
            alt = 11256;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
// lab_8220
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_8290
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_8290
            var_8 = 0;
            pri = fun_1688()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_7AC8_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x1:
        {
// switch_7AC8_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x2:
        {
// switch_7AC8_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x3:
        {
// switch_7AC8_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x4:
        {
// switch_7AC8_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x5:
        {
// switch_7AC8_case_0x5
            var_8 = 2;
            var_16 = 21256;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0F90(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_1370(var_40)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x6:
        {
// switch_7AC8_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x7:
        {
// switch_7AC8_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x8:
        {
// switch_7AC8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x9:
        {
// switch_7AC8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0xa:
        {
// switch_7AC8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0xb:
        {
// switch_7AC8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0xc:
        {
// switch_7AC8_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0xd:
        {
// switch_7AC8_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21904;
            var_72 = 21728;
            var_80 = 21544;
            var_88 = 21352;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_7AC8_case_default
        }
        case 0xe:
        {
// switch_7AC8_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22560;
            var_72 = 22352;
            var_80 = 22136;
            var_88 = 21912;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_7AC8_case_default
        }
        case 0xf:
        {
// switch_7AC8_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22952;
            var_72 = 22832;
            var_80 = 22704;
            var_88 = 22568;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x10:
        {
// switch_7AC8_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23296;
            var_72 = 23192;
            var_80 = 23080;
            var_88 = 22960;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x11:
        {
// switch_7AC8_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23640;
            var_72 = 23536;
            var_80 = 23424;
            var_88 = 23304;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x12:
        {
// switch_7AC8_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x13:
        {
// switch_7AC8_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x14:
        {
// switch_7AC8_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24200;
            var_72 = 24024;
            var_80 = 23840;
            var_88 = 23648;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x15:
        {
// switch_7AC8_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x16:
        {
// switch_7AC8_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x17:
        {
// switch_7AC8_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x18:
        {
// switch_7AC8_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x19:
        {
// switch_7AC8_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x1a:
        {
// switch_7AC8_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x1b:
        {
// switch_7AC8_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x1c:
        {
// switch_7AC8_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 24592;
            var_72 = 24472;
            var_80 = 24344;
            var_88 = 24208;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x1d:
        {
// switch_7AC8_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x1e:
        {
// switch_7AC8_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 25056;
            var_72 = 24912;
            var_80 = 24760;
            var_88 = 24600;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x1f:
        {
// switch_7AC8_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x20:
        {
// switch_7AC8_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x21:
        {
// switch_7AC8_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x22:
        {
// switch_7AC8_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x23:
        {
// switch_7AC8_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x24:
        {
// switch_7AC8_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25424;
            var_72 = 25312;
            var_80 = 25192;
            var_88 = 25064;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x25:
        {
// switch_7AC8_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25792;
            var_72 = 25680;
            var_80 = 25560;
            var_88 = 25432;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x26:
        {
// switch_7AC8_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x27:
        {
// switch_7AC8_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x28:
        {
// switch_7AC8_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x29:
        {
// switch_7AC8_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26232;
            var_72 = 26096;
            var_80 = 25952;
            var_88 = 25800;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x2a:
        {
// switch_7AC8_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26624;
            var_72 = 26504;
            var_80 = 26376;
            var_88 = 26240;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x2b:
        {
// switch_7AC8_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27040;
            var_72 = 26912;
            var_80 = 26776;
            var_88 = 26632;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x2c:
        {
// switch_7AC8_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27480;
            var_72 = 27344;
            var_80 = 27200;
            var_88 = 27048;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x2d:
        {
// switch_7AC8_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x2e:
        {
// switch_7AC8_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27800;
            var_72 = 27704;
            var_80 = 27600;
            var_88 = 27488;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x2f:
        {
// switch_7AC8_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28192;
            var_72 = 28072;
            var_80 = 27944;
            var_88 = 27808;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x30:
        {
// switch_7AC8_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28584;
            var_72 = 28464;
            var_80 = 28336;
            var_88 = 28200;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x31:
        {
// switch_7AC8_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x32:
        {
// switch_7AC8_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x33:
        {
// switch_7AC8_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28976;
            var_72 = 28856;
            var_80 = 28728;
            var_88 = 28592;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x34:
        {
// switch_7AC8_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 29344;
            var_72 = 29232;
            var_80 = 29112;
            var_88 = 28984;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x35:
        {
// switch_7AC8_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 29832;
            var_72 = 29680;
            var_80 = 29520;
            var_88 = 29352;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x36:
        {
// switch_7AC8_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 30200;
            var_72 = 30088;
            var_80 = 29968;
            var_88 = 29840;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x37:
        {
// switch_7AC8_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x38:
        {
// switch_7AC8_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 30568;
            var_72 = 30456;
            var_80 = 30336;
            var_88 = 30208;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_13A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x39:
        {
// switch_7AC8_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x3a:
        {
// switch_7AC8_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x3b:
        {
// switch_7AC8_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x3c:
        {
// switch_7AC8_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 30576;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x3d:
        {
// switch_7AC8_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 30752;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
        case 0x3e:
        {
// switch_7AC8_case_0x3e
            var_8 = 4;
            var_16 = 30896;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0F90(var_24, var_16, var_8)
            OP_JUMP switch_7AC8_case_default
        }
    }
}
// fun_82C0
fun_82C0() {
    pri = arg_4;
    OP_JNZ lab_82F8
    var_8 = 0;
    pri = fun_1648()
// lab_82F8
    pri = arg_1;
    switch (pri) {
// switch_96D0
        case default:
        {
// switch_96D0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 31968;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_2BC0(var_264)
            OP_JZER lab_9C98
            pri = arg_3;
            switch (pri) {
// switch_9C40
                case default:
                {
// switch_9C40_case_default
                    OP_JUMP lab_9F50
// lab_9F50
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_9FC0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_9FC0
                    var_8 = 0;
                    pri = fun_1688()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_9C40_case_0x1
                    var_8 = 32;
                    var_16 = 32120;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_9C40_case_default
                }
                case 0x2:
                {
// switch_9C40_case_0x2
                    var_8 = 32;
                    var_16 = 32224;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_9C40_case_default
                }
                case 0x3:
                {
// switch_9C40_case_0x3
                    var_8 = 32;
                    var_16 = 32024;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_9C40_case_default
                }
            }
// lab_9C98
            pri = arg_1;
            OP_JZER lab_9CE8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_9CE8
            pri = 0;
            OP_JUMP lab_9CF0
// lab_9CE8
            pri = 1;
// lab_9CF0
            OP_JZER lab_9D58
            var_8 = 32320;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_1010(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_9D58
            pri = 1;
            OP_JUMP lab_9D60
// lab_9D58
            pri = 0;
// lab_9D60
            OP_JZER lab_9DB0
            var_8 = 32;
            var_16 = 32416;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_9F50
// lab_9DB0
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_9E18
            var_8 = 32;
            var_16 = 32576;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_9F50
// lab_9E18
            var_16 = 32696;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_1010(var_24, var_16)
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
            var_176 = 32800;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 32816;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_96D0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x1:
        {
// switch_96D0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x2:
        {
// switch_96D0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x3:
        {
// switch_96D0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x4:
        {
// switch_96D0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x5:
        {
// switch_96D0_case_0x5
            var_8 = 1;
            var_16 = 31448;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0F90(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_1370(var_40)
            OP_JUMP switch_96D0_case_default
        }
        case 0x6:
        {
// switch_96D0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x7:
        {
// switch_96D0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x8:
        {
// switch_96D0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x9:
        {
// switch_96D0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0xa:
        {
// switch_96D0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0xb:
        {
// switch_96D0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0xc:
        {
// switch_96D0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0xd:
        {
// switch_96D0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0xe:
        {
// switch_96D0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0xf:
        {
// switch_96D0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x10:
        {
// switch_96D0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x11:
        {
// switch_96D0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x12:
        {
// switch_96D0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x13:
        {
// switch_96D0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x14:
        {
// switch_96D0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x15:
        {
// switch_96D0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x16:
        {
// switch_96D0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x17:
        {
// switch_96D0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x18:
        {
// switch_96D0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x19:
        {
// switch_96D0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x1a:
        {
// switch_96D0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x1b:
        {
// switch_96D0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x1c:
        {
// switch_96D0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x1d:
        {
// switch_96D0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x1e:
        {
// switch_96D0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x1f:
        {
// switch_96D0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x20:
        {
// switch_96D0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x21:
        {
// switch_96D0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x22:
        {
// switch_96D0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x23:
        {
// switch_96D0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x24:
        {
// switch_96D0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x25:
        {
// switch_96D0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x26:
        {
// switch_96D0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x27:
        {
// switch_96D0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x28:
        {
// switch_96D0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x29:
        {
// switch_96D0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x2a:
        {
// switch_96D0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x2b:
        {
// switch_96D0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x2c:
        {
// switch_96D0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x2d:
        {
// switch_96D0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x2e:
        {
// switch_96D0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x2f:
        {
// switch_96D0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x30:
        {
// switch_96D0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x31:
        {
// switch_96D0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x32:
        {
// switch_96D0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x33:
        {
// switch_96D0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x34:
        {
// switch_96D0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x35:
        {
// switch_96D0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x36:
        {
// switch_96D0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x37:
        {
// switch_96D0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x38:
        {
// switch_96D0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x39:
        {
// switch_96D0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x3a:
        {
// switch_96D0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x3b:
        {
// switch_96D0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x3c:
        {
// switch_96D0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31544;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x3d:
        {
// switch_96D0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31720;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
        case 0x3e:
        {
// switch_96D0_case_0x3e
            var_8 = 3;
            var_16 = 31864;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0F90(var_24, var_16, var_8)
            OP_JUMP switch_96D0_case_default
        }
    }
}
// fun_9FF0
fun_9FF0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_A200(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 32864;
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
    var_424 = 32920;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 32936;
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
    OP_JZER lab_A1E8
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_A1E8
    pri = 0;
    return pri;
}
// fun_A200
fun_A200() {
    var_8 = arg_1;
    var_16 = 32984;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0F90(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_A248
fun_A248() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_A2E0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1048(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_43A8(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_A2E0
    var_8 = 8;
    var_16 = 8;
    pri = fun_0090(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_A438
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_A3A0
    var_24 = 33088;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_A3A0
    pri = 1;
    OP_JUMP lab_A3A8
// lab_A438
    pri = 0;
    return pri;
// lab_A3A0
    pri = 0;
// lab_A3A8
    OP_JZER lab_A438
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_1048(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_43A8(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_A448
fun_A448() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_A248(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_A4D0(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_A4D0
fun_A4D0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_A8B8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_A538
fun_A538() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_A8B8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_A5A0
fun_A5A0() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_A610
    OP_CONST_S -8, 1
// lab_A610
    pri = arg_0;
    OP_JNZ lab_A630
    OP_ZERO_P_S -8
// lab_A630
    pri = var_8;
    OP_JZER lab_A6B8
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0090(var_16)
    var_32 = 0;
    pri = fun_0168()
    pri = ItemCloseDescWindow()
// lab_A6B8
    pri = 0;
    return pri;
}
// fun_A6D0
fun_A6D0() {
    var_8 = 33192;
    var_16 = 8;
    pri = fun_3A50(var_8)
    var_24 = 0;
    pri = fun_3A88()
    var_32 = 0;
    var_40 = 8;
    pri = fun_3B58(var_32)
    var_48 = 1;
    var_56 = arg_1;
    var_64 = 1;
    var_72 = 24;
    pri = fun_3DB0(var_64, var_56, var_48)
    OP_CONST_S -8, 6088246355923164688
    OP_CONST_S -16, -3980990967343358874
    pri = arg_3;
    OP_JZER lab_A7E8
    OP_CONST_S -8, 6088249654458049321
    OP_CONST_S -16, -3980992066854987085
// lab_A7E8
    var_8 = 6;
    var_16 = 4;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_A248(var_24, var_16, var_8)
    var_40 = 2;
    var_48 = 1;
    var_56 = 9;
    var_64 = var_16;
    var_72 = var_8;
    var_80 = 0;
    var_88 = 0;
    var_96 = 56;
    pri = fun_A538(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 0;
    pri = fun_3B28()
    var_112 = arg_2;
    var_120 = 8;
    pri = fun_4370(var_112)
    pri = 0;
    return pri;
}
// fun_A8B8
fun_A8B8() {
    var_8 = 33352;
    var_16 = 8;
    pri = fun_3A50(var_8)
    var_24 = 0;
    pri = fun_3A88()
    pri = arg_3;
    OP_JNZ lab_A9D8
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_A9A0
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_AA48(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_A9C8
// lab_A9D8
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_ABE8(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_A9A0
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_AB10(var_16, var_8)
// lab_A9C8
    OP_JUMP lab_AA20
// lab_AA20
    var_8 = 0;
    pri = fun_3B28()
    pri = 0;
    return pri;
}
// fun_AA48
fun_AA48() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_ABE8(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_AAF8
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_AAF8
    pri = 0;
    return pri;
}
// fun_AB10
fun_AB10() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_3CC0(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_3658(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_3750(var_72)
    var_88 = 0;
    pri = fun_3810()
    var_96 = 0;
    var_104 = 8;
    pri = fun_3B58(var_96)
    pri = 0;
    return pri;
}
// fun_ABE8
fun_ABE8() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_AC30
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_AEF0(var_8)
// lab_AC30
    pri = arg_4;
    OP_JNZ lab_AC98
    var_8 = 0;
    var_16 = 8;
    pri = fun_3B58(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_3CC0(var_40, var_32, var_24)
// lab_AC98
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_AD38
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_3D10(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_3658(var_56, var_48, var_40)
    OP_JUMP lab_AE28
// lab_AD38
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_ADF0
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_ADF0
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_ADF0
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_3658(var_24, var_16, var_8)
// lab_AE28
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_AE68
    var_8 = 0;
    var_16 = 8;
    pri = fun_0468(var_8)
// lab_AE68
    var_8 = 1;
    var_16 = 8;
    pri = fun_3750(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_B0F8(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_A5A0(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_AEF0
fun_AEF0() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_AF50
    var_16 = 33512;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_AF50
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_B090
        case default:
        {
// switch_B090_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_B080
            var_16 = 34056;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_B080
            OP_JUMP lab_B0C8
// lab_B0C8
            var_8 = 34272;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_B090_case_0x1
            var_8 = 33728;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_B0C8
        }
        case 0x2:
        {
// switch_B090_case_0x2
            var_8 = 33856;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_B0C8
        }
    }
}
// fun_B0F8
fun_B0F8() {
    pri = arg_2;
    OP_JNZ lab_B1E0
    var_8 = 0;
    var_16 = 8;
    pri = fun_3B58(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_3CC0(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_3D60(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_B1E0
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_3658(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_3750(var_40)
    var_56 = 0;
    pri = fun_3810()
    pri = 0;
    return pri;
}
// fun_B258
fun_B258() {
    OP_ZERO_P_S -8
    OP_ZERO_P_S -16
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_B2E0
    pri = arg_0;
    var_8 = pri;
    pri = arg_2;
    var_16 = pri;
    OP_JUMP lab_B300
// lab_B2E0
    pri = arg_1;
    var_8 = pri;
    pri = arg_3;
    var_16 = pri;
// lab_B300
    var_8 = 0;
    var_16 = arg_7;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = var_16;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_3498(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_9EEFA62
public fun_9EEFA62() {
    var_8 = 1;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_0630(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_26162C76
public fun_26162C76() {
    var_8 = 1;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_0680(var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_7E7C7147
public fun_7E7C7147() {
    var_8 = 1;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_06D8(var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_9EB2ADC
public fun_9EB2ADC() {
    var_8 = 1;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0730(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_57E2023F
public fun_57E2023F() {
    var_8 = 1;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0770(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_7CEED08B
public fun_7CEED08B() {
    var_8 = 1;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_07B0(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_588B25D0
public fun_588B25D0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_07F8(var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_953936CA
public fun_953936CA() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0830(var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_4E710A0A
public fun_4E710A0A() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0880(var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_F3A16A5C
public fun_F3A16A5C() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_08C0(var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_124993AD
public fun_124993AD() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0900(var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_356738EE
public fun_356738EE() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0938(var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_BAA0314B
public fun_BAA0314B() {
    var_8 = arg_8;
    var_16 = arg_7;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = arg_1;
    var_72 = arg_0;
    var_80 = 72;
    pri = fun_0A60(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_AF534176
public fun_AF534176() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_0AD8(var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_790C68D2
public fun_790C68D2() {
    var_8 = 1;
    var_16 = 0;
    var_24 = arg_5;
    var_32 = arg_4;
    var_40 = arg_3;
    var_48 = arg_2;
    var_56 = arg_1;
    var_64 = arg_0;
    var_72 = 64;
    pri = fun_0B30(var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_6754F8BE
public fun_6754F8BE() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_0BF0(var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_1ACF14A3
public fun_1ACF14A3() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_0C48(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_48025B4
public fun_48025B4() {
    var_8 = 0;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_0C98(var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_46E25C52
public fun_46E25C52() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_0CF0(var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_DCE5608C
public fun_DCE5608C() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0D48(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_B78DCA27
public fun_B78DCA27() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DF0(var_8)
    pri = 0;
    return pri;
}
// fun_BA20
fun_BA20() {
    OP_ZERO_P_S -8
    OP_JUMP lab_BA50
// lab_BA50
    pri = var_8;
    alt = 42;
    OP_JSGEQ lab_BB10
    pri = arg_0;
    var_8 = pri;
    alt = 34456;
    pri = var_8;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_16 = pri;
    pri = GetFnvHash64(var_16)
    OP_POP_ALT 
    OP_JNEQ lab_BB00
    pri = var_8;
    return pri;
// lab_BB10
    pri = -1;
    return pri;
// lab_BB00
    OP_JUMP lab_BA48
// lab_BA48
    OP_INC_P_S -8
}
// fun_BB28
fun_BB28() {
    OP_ZERO_P_S -8
    OP_JUMP lab_BB58
// lab_BB58
    pri = var_8;
    alt = 63;
    OP_JSGEQ lab_BC18
    pri = arg_0;
    var_8 = pri;
    alt = 40080;
    pri = var_8;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_16 = pri;
    pri = GetFnvHash64(var_16)
    OP_POP_ALT 
    OP_JNEQ lab_BC08
    pri = var_8;
    return pri;
// lab_BC18
    pri = -1;
    return pri;
// lab_BC08
    OP_JUMP lab_BB50
// lab_BB50
    OP_INC_P_S -8
}
// fun_BC30
fun_BC30() {
    pri = 0;
    OP_ADDR_ALT -584
    OP_FILL 584
    pri = 50872;
    OP_ADDR_ALT -584
    OP_MOVS 576
    OP_ZERO_P_S -592
    OP_JUMP lab_BCC0
// lab_BCC0
    pri = var_592;
    alt = 5;
    OP_JSGEQ lab_BD80
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -584
    pri = var_592;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_16 = pri;
    pri = GetFnvHash64(var_16)
    OP_POP_ALT 
    OP_JNEQ lab_BD70
    pri = var_592;
    return pri;
// lab_BD80
    pri = -1;
    return pri;
// lab_BD70
    OP_JUMP lab_BCB8
// lab_BCB8
    OP_INC_P_S -592
}
// public fun_E955732C
public fun_E955732C() {
    var_16 = arg_1;
    pri = GetFnvHash64(var_16)
    var_24 = pri;
    var_32 = 8;
    pri = fun_BA20(var_24)
    var_8 = pri;
    pri = var_8;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_BE50
    var_40 = 0;
    pri = DebugAssert(var_40)
    pri = 0;
    return pri;
// lab_BE50
    var_8 = 1;
    var_16 = -1;
    var_24 = -1;
    var_32 = 3;
    var_40 = arg_2;
    var_48 = var_8;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_43A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_161302DB
public fun_161302DB() {
    var_16 = arg_1;
    pri = GetFnvHash64(var_16)
    var_24 = pri;
    var_32 = 8;
    pri = fun_BB28(var_24)
    var_8 = pri;
    pri = var_8;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_BF68
    var_40 = 0;
    pri = DebugAssert(var_40)
    pri = 0;
    return pri;
// lab_BF68
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    var_32 = -1;
    var_40 = arg_2;
    var_48 = var_8;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_5F88(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_4BB8EAF6
public fun_4BB8EAF6() {
    var_16 = arg_1;
    pri = GetFnvHash64(var_16)
    var_24 = pri;
    var_32 = 8;
    pri = fun_BB28(var_24)
    var_8 = pri;
    pri = var_8;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_C080
    var_40 = 0;
    pri = DebugAssert(var_40)
    pri = 0;
    return pri;
// lab_C080
    var_8 = 1;
    var_16 = 3;
    var_24 = arg_2;
    var_32 = var_8;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_82C0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_52EFF9DD
public fun_52EFF9DD() {
    var_16 = arg_1;
    pri = GetFnvHash64(var_16)
    var_24 = pri;
    var_32 = 8;
    pri = fun_BC30(var_24)
    var_8 = pri;
    pri = var_8;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_C188
    var_40 = 0;
    pri = DebugAssert(var_40)
    pri = 0;
    return pri;
// lab_C188
    var_8 = arg_2;
    var_16 = var_8;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_9FF0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_88168061
public fun_88168061() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1048(var_8)
    pri = 0;
    return pri;
}
// public fun_D467F445
public fun_D467F445() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1248(var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_CF6ADE2B
public fun_CF6ADE2B() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1370(var_8)
    pri = 0;
    return pri;
}
// public fun_FB9D6D00
public fun_FB9D6D00() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0F18(var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_8B678DBC
public fun_8B678DBC() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0F50(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_2A17F207
public fun_2A17F207() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0F90(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_EA9391A
public fun_EA9391A() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0FD0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_2E2D0F4F
public fun_2E2D0F4F() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2538(var_8)
    pri = 0;
    return pri;
}
// public fun_9E9AEE3
public fun_9E9AEE3() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_2578(var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_7543B2E4
public fun_7543B2E4() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_25B8(var_8)
    pri = 0;
    return pri;
}
// public fun_FA10627D
public fun_FA10627D() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_25F0(var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_5B53CA26
public fun_5B53CA26() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2630(var_8)
    pri = 0;
    return pri;
}
// public fun_12BD5B5F
public fun_12BD5B5F() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_2668(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_183CD5E
public fun_183CD5E() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_26D0(var_8)
    pri = 0;
    return pri;
}
// public fun_31BC6BD5
public fun_31BC6BD5() {
    var_8 = 1;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_1788(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_5A16968E
public fun_5A16968E() {
    var_8 = 1;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_1BF8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_E331838C
public fun_E331838C() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_20C0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_C648
fun_C648() {
    pri = 0;
    OP_ADDR_ALT -2736
    OP_FILL 2736
    pri = 51448;
    OP_ADDR_ALT -2736
    OP_MOVS 2728
    var_2744 = arg_0;
    pri = GetFnvHash64(var_2744)
    var_2752 = pri;
    var_2760 = 54176;
    pri = GetFnvHash64(var_2760)
    OP_POP_ALT 
    OP_JNEQ lab_C728
    pri = -1;
    return pri;
// lab_C728
    OP_ZERO_P_S -2744
    OP_JUMP lab_C750
// lab_C750
    pri = var_2744;
    alt = 31;
    OP_JSGEQ lab_C828
    var_8 = arg_0;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    OP_ADDR_P_ALT -2736
    pri = var_2744;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_24 = pri;
    pri = GetFnvHash64(var_24)
    OP_POP_ALT 
    OP_JNEQ lab_C818
    pri = var_2744;
    return pri;
// lab_C828
    arg_-3 = 0;
    pri = DebugAssert(var_0)
    pri = 0;
    return pri;
// lab_C818
    OP_JUMP lab_C748
// lab_C748
    OP_INC_P_S -2744
}
// public fun_19854EA6
public fun_19854EA6() {
    var_8 = 0;
    pri = fun_3E00()
    pri = 0;
    return pri;
}
// public fun_C2C96E7A
public fun_C2C96E7A() {
    var_8 = 0;
    pri = fun_4058()
    pri = 0;
    return pri;
}
// public fun_72729192
public fun_72729192() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_4138(var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_1CA90E48
public fun_1CA90E48() {
    var_8 = arg_3;
    var_16 = 8;
    pri = fun_C648(var_8)
    var_24 = pri;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 32;
    pri = fun_41A0(var_48, var_40, var_32, var_24)
    pri = 0;
    return pri;
}
// public fun_C05F9653
public fun_C05F9653() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = 8;
    pri = fun_C648(var_24)
    var_40 = pri;
    var_48 = arg_0;
    var_56 = 32;
    pri = fun_41F8(var_48, var_40, var_32, var_24)
    pri = 0;
    return pri;
}
// public fun_27A966F2
public fun_27A966F2() {
    pri = EndDof_()
    pri = 0;
    return pri;
}
// public fun_6F176CE7
public fun_6F176CE7() {
    var_8 = 0;
    pri = fun_4278()
    pri = 0;
    return pri;
}
// public fun_57A3D0EB
public fun_57A3D0EB() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = 8;
    pri = fun_C648(var_16)
    var_32 = pri;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 40;
    pri = fun_4318(var_56, var_48, var_40, var_32, var_24)
    pri = 0;
    return pri;
}
// public fun_94D36D4
public fun_94D36D4() {
    var_8 = arg_8;
    var_16 = arg_7;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = arg_1;
    var_72 = arg_0;
    var_80 = 72;
    pri = fun_3E90(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_94D36D5
public fun_94D36D5() {
    var_8 = arg_8;
    var_16 = arg_7;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = arg_1;
    var_72 = arg_0;
    var_80 = 72;
    pri = fun_3F28(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_94D36D6
public fun_94D36D6() {
    var_8 = arg_8;
    var_16 = arg_7;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = arg_1;
    var_72 = arg_0;
    var_80 = 72;
    pri = fun_3FC0(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_33038715
public fun_33038715() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_40E8(var_8)
    pri = 0;
    return pri;
}
// public fun_85F308D8
public fun_85F308D8() {
    pri = CommandNOP()
    var_8 = arg_8;
    var_16 = arg_7;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = arg_1;
    var_72 = arg_0;
    var_80 = 72;
    pri = fun_2728(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_68A112CE
public fun_68A112CE() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_2798(var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_3690DC2E
public fun_3690DC2E() {
    var_8 = arg_8;
    var_16 = arg_7;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = arg_1;
    var_72 = arg_0;
    var_80 = 72;
    pri = fun_28A0(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_B9A3AC64
public fun_B9A3AC64() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_2910(var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_62182385
public fun_62182385() {
    pri = 0;
    OP_ADDR_ALT -488
    OP_FILL 488
    pri = 54256;
    OP_ADDR_ALT -488
    OP_MOVS 480
    OP_ZERO_P_S -496
    OP_JUMP lab_CEB8
// lab_CEB8
    pri = var_496;
    alt = 5;
    OP_JSGEQ lab_CFD8
    var_8 = arg_0;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    OP_ADDR_P_ALT -488
    pri = var_496;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_24 = pri;
    pri = GetFnvHash64(var_24)
    OP_POP_ALT 
    OP_JNEQ lab_CFC8
    var_32 = arg_4;
    var_40 = arg_2;
    var_48 = arg_5;
    var_56 = arg_3;
    var_64 = arg_1;
    var_72 = var_496;
    var_80 = 48;
    pri = fun_2980(var_72, var_64, var_56, var_48, var_40, var_32)
    pri = 0;
    return pri;
// lab_CFD8
    arg_-3 = 0;
    pri = DebugAssert(var_0)
    pri = 0;
    return pri;
// lab_CFC8
    OP_JUMP lab_CEB0
// lab_CEB0
    OP_INC_P_S -496
}
// public fun_85550449
public fun_85550449() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2B20(var_8)
    pri = 0;
    return pri;
}
// fun_D050
fun_D050() {
    pri = 0;
    OP_ADDR_ALT -160
    OP_FILL 160
    pri = 54736;
    OP_ADDR_ALT -160
    OP_MOVS 152
    OP_ZERO_P_S -168
    OP_JUMP lab_D0E0
// lab_D0E0
    pri = var_168;
    alt = 3;
    OP_JSGEQ lab_D1C0
    var_8 = arg_0;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    OP_ADDR_P_ALT -160
    pri = var_168;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_24 = pri;
    pri = GetFnvHash64(var_24)
    OP_POP_ALT 
    OP_JNEQ lab_D1B0
    pri = var_168;
    OP_ADD_P_C 100
    return pri;
// lab_D1C0
    pri = CommandNOP()
    pri = CommandNOP()
    arg_-3 = 0;
    pri = DebugAssert(var_0)
    pri = 0;
    return pri;
// lab_D1B0
    OP_JUMP lab_D0D8
// lab_D0D8
    OP_INC_P_S -168
}
// fun_D230
fun_D230() {
    pri = 0;
    OP_ADDR_ALT -416
    OP_FILL 416
    pri = 54888;
    OP_ADDR_ALT -416
    OP_MOVS 408
    OP_ZERO_P_S -424
    OP_JUMP lab_D2C0
// lab_D2C0
    pri = var_424;
    alt = 6;
    OP_JSGEQ lab_D398
    var_8 = arg_0;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    OP_ADDR_P_ALT -416
    pri = var_424;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_24 = pri;
    pri = GetFnvHash64(var_24)
    OP_POP_ALT 
    OP_JNEQ lab_D388
    pri = var_424;
    return pri;
// lab_D398
    arg_-3 = 0;
    pri = DebugAssert(var_0)
    pri = 0;
    return pri;
// lab_D388
    OP_JUMP lab_D2B8
// lab_D2B8
    OP_INC_P_S -424
}
// fun_D3D8
fun_D3D8() {
    pri = 0;
    OP_ADDR_ALT -288
    OP_FILL 288
    pri = 55296;
    OP_ADDR_ALT -288
    OP_MOVS 280
    OP_ZERO_P_S -296
    OP_JUMP lab_D468
// lab_D468
    pri = var_296;
    alt = 6;
    OP_JSGEQ lab_D548
    var_8 = arg_0;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    OP_ADDR_P_ALT -288
    pri = var_296;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_24 = pri;
    pri = GetFnvHash64(var_24)
    OP_POP_ALT 
    OP_JNEQ lab_D538
    pri = var_296;
    OP_ADD_P_C -1
    return pri;
// lab_D548
    arg_-3 = 0;
    pri = DebugAssert(var_0)
    pri = 0;
    return pri;
// lab_D538
    OP_JUMP lab_D460
// lab_D460
    OP_INC_P_S -296
}
// fun_D588
fun_D588() {
    pri = 0;
    OP_ADDR_ALT -336
    OP_FILL 336
    pri = 55576;
    OP_ADDR_ALT -336
    OP_MOVS 328
    OP_ZERO_P_S -344
    OP_JUMP lab_D618
// lab_D618
    pri = var_344;
    alt = 4;
    OP_JSGEQ lab_D6F0
    var_8 = arg_0;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    OP_ADDR_P_ALT -336
    pri = var_344;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_24 = pri;
    pri = GetFnvHash64(var_24)
    OP_POP_ALT 
    OP_JNEQ lab_D6E0
    pri = var_344;
    return pri;
// lab_D6F0
    arg_-3 = 0;
    pri = DebugAssert(var_0)
    pri = 0;
    return pri;
// lab_D6E0
    OP_JUMP lab_D610
// lab_D610
    OP_INC_P_S -344
}
// public fun_926671EE
public fun_926671EE() {
    var_8 = arg_3;
    var_16 = 8;
    pri = fun_D230(var_8)
    var_24 = pri;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 8;
    pri = fun_D050(var_40)
    var_56 = pri;
    var_64 = arg_0;
    var_72 = 32;
    pri = fun_3340(var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// public fun_E545B8C9
public fun_E545B8C9() {
    var_8 = 0;
    var_16 = arg_5;
    var_24 = 8;
    pri = fun_D230(var_16)
    var_32 = pri;
    var_40 = arg_4;
    var_48 = arg_3;
    var_56 = 8;
    pri = fun_D050(var_48)
    var_64 = pri;
    var_72 = arg_2;
    var_80 = 8;
    pri = fun_D3D8(var_72)
    var_88 = pri;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 56;
    pri = fun_3498(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    pri = 0;
    return pri;
}
// public fun_CAF5EF
public fun_CAF5EF() {
    var_8 = arg_7;
    var_16 = 8;
    pri = fun_D230(var_8)
    var_24 = pri;
    var_32 = arg_6;
    var_40 = arg_5;
    var_48 = 8;
    pri = fun_D050(var_40)
    var_56 = pri;
    var_64 = arg_4;
    var_72 = 8;
    pri = fun_D3D8(var_64)
    var_80 = pri;
    var_88 = arg_3;
    var_96 = arg_2;
    var_104 = arg_1;
    var_112 = arg_0;
    var_120 = 64;
    pri = fun_B258(var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    pri = 0;
    return pri;
}
// public fun_4ECFF684
public fun_4ECFF684() {
    var_8 = 0;
    var_16 = arg_6;
    var_24 = 8;
    pri = fun_D230(var_16)
    var_32 = pri;
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = 8;
    pri = fun_D050(var_48)
    var_64 = pri;
    var_72 = arg_3;
    var_80 = 8;
    pri = fun_D3D8(var_72)
    var_88 = pri;
    var_96 = arg_2;
    var_104 = arg_1;
    var_112 = arg_0;
    var_120 = 64;
    pri = fun_3548(var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    pri = 0;
    return pri;
}
// public fun_C2A004B3
public fun_C2A004B3() {
    var_8 = arg_2;
    var_16 = 8;
    pri = fun_D230(var_8)
    var_24 = pri;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_3608(var_40, var_32, var_24)
    pri = 0;
    return pri;
}
// public fun_C6FE0AFE
public fun_C6FE0AFE() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_3750(var_8)
    pri = 0;
    return pri;
}
// public fun_AF6F0C95
public fun_AF6F0C95() {
    var_8 = 0;
    pri = fun_36B8()
    pri = 0;
    return pri;
}
// public fun_673B6E28
public fun_673B6E28() {
    var_8 = 0;
    pri = fun_3810()
    pri = 0;
    return pri;
}
// public fun_4AD61FB3
public fun_4AD61FB3() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = 8;
    pri = fun_D588(var_24)
    var_40 = pri;
    var_48 = arg_2;
    var_56 = arg_1;
    var_64 = arg_0;
    var_72 = 48;
    pri = fun_3998(var_64, var_56, var_48, var_40, var_32, var_24)
    pri = 0;
    return pri;
}
// public fun_CA8901B0
public fun_CA8901B0() {
    pri = 0;
    OP_ADDR_ALT -56
    OP_FILL 56
    OP_ADDR_P_ALT -56
    pri = arg_0;
    OP_STOR_I 
    OP_ADDR_P_PRI -56
    OP_ADD_P_C 8
    OP_MOVE_ALT 
    pri = arg_1;
    OP_STOR_I 
    OP_ADDR_P_PRI -56
    OP_ADD_P_C 16
    OP_MOVE_ALT 
    pri = arg_2;
    OP_STOR_I 
    OP_ADDR_P_PRI -56
    OP_ADD_P_C 24
    OP_MOVE_ALT 
    pri = arg_3;
    OP_STOR_I 
    OP_ADDR_P_PRI -56
    OP_ADD_P_C 32
    OP_MOVE_ALT 
    pri = arg_4;
    OP_STOR_I 
    OP_ADDR_P_PRI -56
    OP_ADD_P_C 40
    OP_MOVE_ALT 
    pri = arg_5;
    OP_STOR_I 
    OP_ADDR_P_PRI -56
    OP_ADD_P_C 48
    OP_MOVE_ALT 
    pri = arg_6;
    OP_STOR_I 
    OP_ZERO_P_S -64
    OP_JUMP lab_DD10
// lab_DD10
    pri = var_64;
    alt = 7;
    OP_JSGEQ lab_DDC0
    OP_ADDR_P_ALT -56
    pri = var_64;
    OP_LIDX_P_B 3
    OP_JNZ lab_DD68
    OP_JUMP lab_DDC0
// lab_DDC0
    arg_-3 = 0;
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_8;
    var_32 = 8;
    pri = fun_D588(var_24)
    var_40 = pri;
    var_48 = 32;
    pri = fun_3928(var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
// lab_DD68
    var_8 = arg_7;
    OP_ADDR_P_ALT -56
    pri = var_64;
    OP_LIDX_P_B 3
    var_16 = pri;
    var_24 = var_64;
    var_32 = 24;
    pri = fun_3840(var_24, var_16, var_8)
    OP_JUMP lab_DD08
// lab_DD08
    OP_INC_P_S -64
}
// public fun_119ED807
public fun_119ED807() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_3BA8(var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_C8E005F1
public fun_C8E005F1() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_3BF8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_DEC0
fun_DEC0() {
    pri = 0;
    OP_ADDR_ALT -168
    OP_FILL 168
    pri = 55904;
    OP_ADDR_ALT -168
    OP_MOVS 160
    pri = 56064;
    OP_ADDR_ALT -192
    OP_MOVS 24
    OP_ZERO_P_S -200
    OP_JUMP lab_DF88
// lab_DF88
    pri = var_200;
    alt = 3;
    OP_JSGEQ lab_E070
    var_8 = arg_0;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    OP_ADDR_P_ALT -168
    pri = var_200;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_24 = pri;
    pri = GetFnvHash64(var_24)
    OP_POP_ALT 
    OP_JNEQ lab_E060
    OP_ADDR_P_ALT -192
    pri = var_200;
    OP_LIDX_P_B 3
    return pri;
// lab_E070
    pri = CommandNOP()
    pri = CommandNOP()
    arg_-3 = 0;
    pri = DebugAssert(var_0)
    pri = 0;
    return pri;
// lab_E060
    OP_JUMP lab_DF80
// lab_DF80
    OP_INC_P_S -200
}
// public fun_2F0BFEF2
public fun_2F0BFEF2() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 8;
    pri = fun_DEC0(var_16)
    var_32 = pri;
    var_40 = 16;
    pri = fun_02D8(var_32, var_24)
    pri = 0;
    return pri;
}
// public fun_1322EB5D
public fun_1322EB5D() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 8;
    pri = fun_DEC0(var_32)
    var_48 = pri;
    var_56 = 32;
    pri = fun_0338(var_48, var_40, var_32, var_24)
    pri = 0;
    return pri;
}
// public fun_967DB9AD
public fun_967DB9AD() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_02D8(var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_4985AC04
public fun_4985AC04() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0338(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_C99ECA68
public fun_C99ECA68() {
    var_8 = 0;
    pri = fun_03A8()
    pri = 0;
    return pri;
}
// public fun_CB3E0DAD
public fun_CB3E0DAD() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0468(var_8)
    pri = 0;
    return pri;
}
// public fun_DCC0E7B4
public fun_DCC0E7B4() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_A4D0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_3DC25001
public fun_3DC25001() {
    var_8 = 2;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_A538(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_2D96863A
public fun_2D96863A() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_5;
    var_32 = arg_4;
    var_40 = arg_3;
    var_48 = arg_2;
    var_56 = arg_1;
    var_64 = arg_0;
    var_72 = 64;
    pri = fun_A448(var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_75BD1DE0
public fun_75BD1DE0() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = 8;
    pri = fun_E448(var_16)
    var_32 = pri;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 32;
    pri = fun_A6D0(var_48, var_40, var_32, var_24)
    pri = 0;
    return pri;
}
// fun_E448
fun_E448() {
    pri = 0;
    OP_ADDR_ALT -3584
    OP_FILL 3584
    pri = 56088;
    OP_ADDR_ALT -3584
    OP_MOVS 3576
    OP_ZERO_P_S -3592
    OP_JUMP lab_E4D8
// lab_E4D8
    pri = var_3592;
    alt = 31;
    OP_JSGEQ lab_E5B0
    var_8 = arg_0;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    OP_ADDR_P_ALT -3584
    pri = var_3592;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_24 = pri;
    pri = GetFnvHash64(var_24)
    OP_POP_ALT 
    OP_JNEQ lab_E5A0
    pri = var_3592;
    return pri;
// lab_E5B0
    arg_-3 = 0;
    pri = DebugAssert(var_0)
    pri = 0;
    return pri;
// lab_E5A0
    OP_JUMP lab_E4D0
// lab_E4D0
    OP_INC_P_S -3592
}
// public fun_B9BAF375
public fun_B9BAF375() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0090(var_8)
    pri = 0;
    return pri;
}
// public fun_A0E636D3
public fun_A0E636D3() {
    var_8 = 0;
    pri = fun_0438()
    pri = 0;
    return pri;
}
// public fun_312F2D2D
public fun_312F2D2D() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0978(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// public fun_25C60EA4
public fun_25C60EA4() {
    var_8 = 0;
    pri = fun_09F8()
    pri = 0;
    return pri;
}
