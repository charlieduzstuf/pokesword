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
    var_8 = arg_0;
    pri = ReserveScript(var_8)
    var_16 = arg_9;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_8;
    var_48 = arg_7;
    var_56 = arg_4;
    var_64 = 0;
    pri = float(var_64)
    var_72 = pri;
    var_80 = arg_3;
    var_88 = arg_2;
    var_96 = arg_1;
    pri = MapChangeCore_(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    pri = 0;
    return pri;
}
// fun_0520
fun_0520() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0568
// lab_0568
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_05A8
    OP_JUMP lab_0618
// lab_05A8
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_05E8
    OP_JUMP lab_0618
// lab_05E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0568
// lab_0618
    pri = 0;
    return pri;
}
// fun_0630
fun_0630() {
    pri = arg_0;
    switch (pri) {
// switch_07D8
        case default:
        {
// switch_07D8_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_07D8_case_0x0
            var_8 = 0;
            var_16 = 4;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_07D8_case_default
        }
        case 0x1:
        {
// switch_07D8_case_0x1
            var_8 = 0;
            var_16 = 6;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_07D8_case_default
        }
        case 0x2:
        {
// switch_07D8_case_0x2
            var_8 = 0;
            var_16 = 9;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_07D8_case_default
        }
        case 0x3:
        {
// switch_07D8_case_0x3
            var_8 = 0;
            var_16 = 12;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_07D8_case_default
        }
        case 0x4:
        {
// switch_07D8_case_0x4
            var_8 = 0;
            var_16 = 19;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_07D8_case_default
        }
        case 0x5:
        {
// switch_07D8_case_0x5
            var_8 = 0;
            var_16 = 20;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_07D8_case_default
        }
        case 0x6:
        {
// switch_07D8_case_0x6
            var_8 = 0;
            var_16 = 0;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_07D8_case_default
        }
    }
}
// fun_0870
fun_0870() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_08A0
fun_08A0() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_08D8
// lab_08D8
    var_8 = 0;
    pri = fun_0A20()
    OP_JNZ lab_0910
    OP_JUMP lab_0940
// lab_0910
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_08D8
// lab_0940
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_0970
// lab_0970
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_09B0
    pri = 0;
    return pri;
// lab_09B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0970
    pri = 0;
    return pri;
}
// fun_09F0
fun_09F0() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0A20
fun_0A20() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0A48
fun_0A48() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0AA0
fun_0AA0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0AD8
fun_0AD8() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0B10
fun_0B10() {
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
// fun_0B88
fun_0B88() {
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
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1CD0(var_8)
    OP_JZER lab_0D68
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1D00(var_24)
    OP_JNZ lab_0D68
    pri = 0;
    return pri;
// lab_0D68
    OP_JUMP lab_0D78
// lab_0D78
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0DD8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0DD8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D78
    pri = 0;
    return pri;
}
// fun_0E18
fun_0E18() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0E50
fun_0E50() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0E90
fun_0E90() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0EC8
fun_0EC8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0F10
    pri = 0;
    return pri;
// lab_0F10
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0F50
// lab_0F50
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1CD0(var_8)
    OP_JNZ lab_0FD8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0FC8
    pri = 0;
    return pri;
// lab_0FD8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_1020
    pri = 0;
    return pri;
// lab_1020
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_1080
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_11F0(var_8)
    pri = 0;
    return pri;
// lab_1080
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0F50
    pri = 0;
    return pri;
// lab_0FC8
    OP_JUMP lab_1020
}
// fun_10C8
fun_10C8() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_1110
// lab_1110
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1168
    pri = 0;
    return pri;
// lab_1168
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_11A8
    pri = 0;
    return pri;
// lab_11A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1110
    pri = 0;
    return pri;
}
// fun_11F0
fun_11F0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_1228
fun_1228() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1278
    pri = 0;
    return pri;
// lab_1278
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1CD0(var_8)
    OP_JZER lab_13A8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_12D0
    OP_ZERO_P_S 64
// lab_13A8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_13E0
    OP_CONST_S 64, 1
// lab_13E0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1418
    OP_CONST_S 72, 1
// lab_1418
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
// lab_12D0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_12F8
    OP_ZERO_P_S 72
// lab_12F8
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
    OP_JUMP lab_14B8
// lab_14B8
    pri = 0;
    return pri;
}
// fun_14C8
fun_14C8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1508
fun_1508() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1548
fun_1548() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_15A0
fun_15A0() {
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
// fun_1600
fun_1600() {
    OP_CONST_S -8, 4631530004285489152
    pri = arg_1;
    switch (pri) {
// switch_19C0
        case default:
        {
// switch_19C0_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_19C0_case_0x0
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
            pri = fun_15A0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_19C0_case_default
        }
        case 0x1:
        {
// switch_19C0_case_0x1
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_15A0(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_19C0_case_default
        }
        case 0x2:
        {
// switch_19C0_case_0x2
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
            pri = fun_15A0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_19C0_case_default
        }
        case 0x3:
        {
// switch_19C0_case_0x3
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 0;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_15A0(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_19C0_case_default
        }
        case 0x4:
        {
// switch_19C0_case_0x4
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
            pri = fun_15A0(var_80, var_72, var_64, var_56, var_48, var_40)
            OP_JUMP switch_19C0_case_default
        }
        case 0x5:
        {
// switch_19C0_case_0x5
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
            pri = fun_15A0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_19C0_case_default
        }
        case 0x6:
        {
// switch_19C0_case_0x6
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
            pri = fun_15A0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_19C0_case_default
        }
        case 0x7:
        {
// switch_19C0_case_0x7
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_15A0(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_19C0_case_default
        }
    }
}
// fun_1A70
fun_1A70() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1AB0
fun_1AB0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1AF0
fun_1AF0() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1B28
fun_1B28() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B68
fun_1B68() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1BA0
fun_1BA0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1AB0(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1B28(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1C08
fun_1C08() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1AF0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1B68(var_24)
    pri = 0;
    return pri;
}
// fun_1C60
fun_1C60() {
    var_8 = arg_5;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = 344;
    var_64 = 0;
    var_72 = arg_0;
    pri = PlayParticleVfx_(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_1CD0
fun_1CD0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1D00
fun_1D00() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1D30
fun_1D30() {
    OP_JUMP lab_1D48
// lab_1D48
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1DD8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1DC8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0EC8(var_8)
    pri = 0;
    return pri;
// lab_1DD8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1E68
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1E58
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0EC8(var_8)
    pri = 0;
    return pri;
// lab_1E68
    pri = 0;
    return pri;
// lab_1E58
    OP_JUMP lab_1E78
// lab_1E78
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1D48
    pri = 0;
    return pri;
// lab_1DC8
    OP_JUMP lab_1E78
}
// fun_1EB8
fun_1EB8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0EC8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1D30(var_40)
    pri = 0;
    return pri;
}
// fun_1F40
fun_1F40() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1F78
fun_1F78() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1FA0
fun_1FA0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1FD8
fun_1FD8() {
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
// switch_25F0
        case default:
        {
// switch_25F0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_2638
// lab_2638
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
            OP_JNZ lab_26E0
            var_88 = 0;
            pri = fun_29B0()
// lab_26E0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_25F0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_21D8
                case default:
                {
// switch_21D8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_2250
// lab_2250
                    OP_JUMP lab_2638
                }
                case 0x0:
                {
// switch_21D8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_2250
                }
                case 0x1:
                {
// switch_21D8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_2250
                }
                case 0x2:
                {
// switch_21D8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_2250
                }
                case 0x3:
                {
// switch_21D8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_2250
                }
                case 0x4:
                {
// switch_21D8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_2250
                }
                case 0x5:
                {
// switch_21D8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_2250
                }
            }
        }
        case 0x65:
        {
// switch_25F0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_2390
                case default:
                {
// switch_2390_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_2408
// lab_2408
                    OP_JUMP lab_2638
                }
                case 0x0:
                {
// switch_2390_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_2408
                }
                case 0x1:
                {
// switch_2390_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_2408
                }
                case 0x2:
                {
// switch_2390_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_2408
                }
                case 0x3:
                {
// switch_2390_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_2408
                }
                case 0x4:
                {
// switch_2390_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_2408
                }
                case 0x5:
                {
// switch_2390_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_2408
                }
            }
        }
        case 0x66:
        {
// switch_25F0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_2548
                case default:
                {
// switch_2548_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_25C0
// lab_25C0
                    OP_JUMP lab_2638
                }
                case 0x0:
                {
// switch_2548_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_25C0
                }
                case 0x1:
                {
// switch_2548_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_25C0
                }
                case 0x2:
                {
// switch_2548_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_25C0
                }
                case 0x3:
                {
// switch_2548_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_25C0
                }
                case 0x4:
                {
// switch_2548_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_25C0
                }
                case 0x5:
                {
// switch_2548_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_25C0
                }
            }
        }
    }
}
// fun_26F8
fun_26F8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1FD8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2760
fun_2760() {
    pri = 352;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 432;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0E90(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2808
    pri = 1;
    return pri;
// lab_2808
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2850
fun_2850() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_28A0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2760(var_8)
    arg_2 = pri;
// lab_28A0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1FD8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2900
fun_2900() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_26F8(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2950
fun_2950() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_2900(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_29B0
fun_29B0() {
    OP_JUMP lab_29C8
// lab_29C8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2A08
    pri = 0;
    return pri;
// lab_2A08
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_29C8
    pri = 0;
    return pri;
}
// fun_2A48
fun_2A48() {
    var_8 = 0;
    pri = fun_29B0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2AF8
    var_32 = 480;
    pri = SoundPostEvent(var_32)
// lab_2AF8
    pri = 0;
    return pri;
}
// fun_2B08
fun_2B08() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2B38
fun_2B38() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_2B70
fun_2B70() {
    OP_JUMP lab_2B88
// lab_2B88
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_2BD0
    OP_JUMP lab_2C00
    OP_JUMP lab_2BF0
// lab_2BD0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_2C00
    pri = 0;
    return pri;
// lab_2BF0
    OP_JUMP lab_2B88
}
// fun_2C10
fun_2C10() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2C40
fun_2C40() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2C90
fun_2C90() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2CE0
fun_2CE0() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2D30
fun_2D30() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2D80
fun_2D80() {
    OP_JUMP lab_2D98
// lab_2D98
    pri = EvCameraMoveWait_()
    OP_JZER lab_2DD0
    pri = 0;
    return pri;
// lab_2DD0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2D98
    pri = 0;
    return pri;
}
// fun_2E10
fun_2E10() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2E78(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2F50()
    pri = 0;
    return pri;
}
// fun_2E78
fun_2E78() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2ED0
fun_2ED0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_2E78(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2F50()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_2F50
fun_2F50() {
    OP_JUMP lab_2F68
// lab_2F68
    pri = IsEasingRunningDof_()
    OP_JZER lab_2FC0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2FD0
// lab_2FC0
    pri = 0;
    return pri;
// lab_2FD0
    OP_JUMP lab_2F68
    pri = 0;
    return pri;
}
// fun_2FF0
fun_2FF0() {
    pri = arg_6;
    OP_JNZ lab_3028
    var_8 = 0;
    pri = fun_14C8()
// lab_3028
    pri = arg_1;
    switch (pri) {
// switch_4590
        case default:
        {
// switch_4590_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_48E0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_48E0
            pri = 1;
            OP_JUMP lab_48E8
// lab_48E0
            pri = 0;
// lab_48E8
            OP_JZER lab_4A40
            var_16 = 8328;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0E90(var_24, var_16)
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
            OP_JUMP lab_4AA0
// lab_4A40
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
// lab_4AA0
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4B00
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4B60
// lab_4B00
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4B60
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4B60
            pri = arg_2;
            OP_JZER lab_4BA0
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4BA0
            var_8 = 0;
            pri = fun_1508()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4590_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4590_case_default
        }
        case 0x1:
        {
// switch_4590_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4590_case_default
        }
        case 0x2:
        {
// switch_4590_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4590_case_default
        }
        case 0x3:
        {
// switch_4590_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4590_case_default
        }
        case 0x4:
        {
// switch_4590_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4590_case_default
        }
        case 0x5:
        {
// switch_4590_case_0x5
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4590_case_default
        }
        case 0x6:
        {
// switch_4590_case_0x6
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4590_case_default
        }
        case 0x7:
        {
// switch_4590_case_0x7
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4590_case_default
        }
        case 0x8:
        {
// switch_4590_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4590_case_default
        }
        case 0x9:
        {
// switch_4590_case_0x9
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4590_case_default
        }
        case 0xa:
        {
// switch_4590_case_0xa
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4590_case_default
        }
        case 0xb:
        {
// switch_4590_case_0xb
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4590_case_default
        }
        case 0xc:
        {
// switch_4590_case_0xc
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4590_case_default
        }
        case 0xd:
        {
// switch_4590_case_0xd
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4590_case_default
        }
        case 0xe:
        {
// switch_4590_case_0xe
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4590_case_default
        }
        case 0xf:
        {
// switch_4590_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4590_case_default
        }
        case 0x10:
        {
// switch_4590_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4590_case_default
        }
        case 0x11:
        {
// switch_4590_case_0x11
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4590_case_default
        }
        case 0x12:
        {
// switch_4590_case_0x12
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4590_case_default
        }
        case 0x13:
        {
// switch_4590_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4590_case_default
        }
        case 0x14:
        {
// switch_4590_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4590_case_default
        }
        case 0x15:
        {
// switch_4590_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4590_case_default
        }
        case 0x16:
        {
// switch_4590_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4590_case_default
        }
        case 0x17:
        {
// switch_4590_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4590_case_default
        }
        case 0x18:
        {
// switch_4590_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4590_case_default
        }
        case 0x19:
        {
// switch_4590_case_0x19
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4590_case_default
        }
        case 0x1a:
        {
// switch_4590_case_0x1a
            var_8 = 1;
            var_16 = 5888;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0E50(var_24, var_16, var_8)
            var_40 = 6024;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0E18(var_48, var_40)
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
            pri = fun_1228(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4590_case_default
        }
        case 0x1b:
        {
// switch_4590_case_0x1b
            var_8 = 3;
            var_16 = 6112;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0E50(var_24, var_16, var_8)
            var_40 = 6248;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0E18(var_48, var_40)
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
            pri = fun_1228(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4590_case_default
        }
        case 0x1c:
        {
// switch_4590_case_0x1c
            var_8 = 2;
            var_16 = 6336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0E50(var_24, var_16, var_8)
            var_40 = 6472;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0E18(var_48, var_40)
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
            pri = fun_1228(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4590_case_default
        }
        case 0x1d:
        {
// switch_4590_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6560;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4590_case_default
        }
        case 0x1e:
        {
// switch_4590_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6696;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4590_case_default
        }
        case 0x1f:
        {
// switch_4590_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6832;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4590_case_default
        }
        case 0x20:
        {
// switch_4590_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6968;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4590_case_default
        }
        case 0x21:
        {
// switch_4590_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7088;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4590_case_default
        }
        case 0x22:
        {
// switch_4590_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7208;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4590_case_default
        }
        case 0x23:
        {
// switch_4590_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7344;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4590_case_default
        }
        case 0x24:
        {
// switch_4590_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7480;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4590_case_default
        }
        case 0x25:
        {
// switch_4590_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7616;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4590_case_default
        }
        case 0x26:
        {
// switch_4590_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7752;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4590_case_default
        }
        case 0x27:
        {
// switch_4590_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7896;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4590_case_default
        }
        case 0x28:
        {
// switch_4590_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8040;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4590_case_default
        }
        case 0x29:
        {
// switch_4590_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8184;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4590_case_default
        }
    }
}
// fun_4BD0
fun_4BD0() {
    pri = arg_5;
    OP_JNZ lab_4C08
    var_8 = 0;
    pri = fun_14C8()
// lab_4C08
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4C58
    OP_CONST_S -8, -1
// lab_4C58
    pri = arg_1;
    switch (pri) {
// switch_6710
        case default:
        {
// switch_6710_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6BB8
            var_520 = 28192;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0E90(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6BB8
            pri = 1;
            OP_JUMP lab_6BC0
// lab_6BB8
            pri = 0;
// lab_6BC0
            OP_JZER lab_6C10
            var_8 = 64;
            var_16 = 28288;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_6E68
// lab_6C10
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6C78
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6C78
            pri = 1;
            OP_JUMP lab_6C80
// lab_6C78
            pri = 0;
// lab_6C80
            OP_JZER lab_6E08
            var_16 = 28464;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0E90(var_24, var_16)
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
            OP_JUMP lab_6E68
// lab_6E08
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
// lab_6E68
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6ED8
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6ED8
            var_8 = 0;
            pri = fun_1508()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6710_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x1:
        {
// switch_6710_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x2:
        {
// switch_6710_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x3:
        {
// switch_6710_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x4:
        {
// switch_6710_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x5:
        {
// switch_6710_case_0x5
            var_8 = 2;
            var_16 = 18448;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0E50(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_11F0(var_40)
            OP_JUMP switch_6710_case_default
        }
        case 0x6:
        {
// switch_6710_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x7:
        {
// switch_6710_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x8:
        {
// switch_6710_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x9:
        {
// switch_6710_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0xa:
        {
// switch_6710_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0xb:
        {
// switch_6710_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0xc:
        {
// switch_6710_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0xd:
        {
// switch_6710_case_0xd
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6710_case_default
        }
        case 0xe:
        {
// switch_6710_case_0xe
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6710_case_default
        }
        case 0xf:
        {
// switch_6710_case_0xf
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6710_case_default
        }
        case 0x10:
        {
// switch_6710_case_0x10
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6710_case_default
        }
        case 0x11:
        {
// switch_6710_case_0x11
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6710_case_default
        }
        case 0x12:
        {
// switch_6710_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x13:
        {
// switch_6710_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x14:
        {
// switch_6710_case_0x14
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6710_case_default
        }
        case 0x15:
        {
// switch_6710_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x16:
        {
// switch_6710_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x17:
        {
// switch_6710_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x18:
        {
// switch_6710_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x19:
        {
// switch_6710_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x1a:
        {
// switch_6710_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x1b:
        {
// switch_6710_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x1c:
        {
// switch_6710_case_0x1c
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6710_case_default
        }
        case 0x1d:
        {
// switch_6710_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x1e:
        {
// switch_6710_case_0x1e
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6710_case_default
        }
        case 0x1f:
        {
// switch_6710_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x20:
        {
// switch_6710_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x21:
        {
// switch_6710_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x22:
        {
// switch_6710_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x23:
        {
// switch_6710_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x24:
        {
// switch_6710_case_0x24
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6710_case_default
        }
        case 0x25:
        {
// switch_6710_case_0x25
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6710_case_default
        }
        case 0x26:
        {
// switch_6710_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x27:
        {
// switch_6710_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x28:
        {
// switch_6710_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x29:
        {
// switch_6710_case_0x29
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6710_case_default
        }
        case 0x2a:
        {
// switch_6710_case_0x2a
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6710_case_default
        }
        case 0x2b:
        {
// switch_6710_case_0x2b
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6710_case_default
        }
        case 0x2c:
        {
// switch_6710_case_0x2c
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6710_case_default
        }
        case 0x2d:
        {
// switch_6710_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x2e:
        {
// switch_6710_case_0x2e
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6710_case_default
        }
        case 0x2f:
        {
// switch_6710_case_0x2f
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6710_case_default
        }
        case 0x30:
        {
// switch_6710_case_0x30
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6710_case_default
        }
        case 0x31:
        {
// switch_6710_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x32:
        {
// switch_6710_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x33:
        {
// switch_6710_case_0x33
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6710_case_default
        }
        case 0x34:
        {
// switch_6710_case_0x34
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6710_case_default
        }
        case 0x35:
        {
// switch_6710_case_0x35
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6710_case_default
        }
        case 0x36:
        {
// switch_6710_case_0x36
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6710_case_default
        }
        case 0x37:
        {
// switch_6710_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x38:
        {
// switch_6710_case_0x38
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
            pri = fun_1228(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6710_case_default
        }
        case 0x39:
        {
// switch_6710_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x3a:
        {
// switch_6710_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x3b:
        {
// switch_6710_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x3c:
        {
// switch_6710_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27768;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x3d:
        {
// switch_6710_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27944;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
        case 0x3e:
        {
// switch_6710_case_0x3e
            var_8 = 4;
            var_16 = 28088;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0E50(var_24, var_16, var_8)
            OP_JUMP switch_6710_case_default
        }
    }
}
// fun_6F08
fun_6F08() {
    pri = arg_4;
    OP_JNZ lab_6F40
    var_8 = 0;
    pri = fun_14C8()
// lab_6F40
    pri = arg_1;
    switch (pri) {
// switch_8318
        case default:
        {
// switch_8318_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29160;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1CD0(var_264)
            OP_JZER lab_88E0
            pri = arg_3;
            switch (pri) {
// switch_8888
                case default:
                {
// switch_8888_case_default
                    OP_JUMP lab_8B98
// lab_8B98
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8C08
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8C08
                    var_8 = 0;
                    pri = fun_1508()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_8888_case_0x1
                    var_8 = 32;
                    var_16 = 29312;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_8888_case_default
                }
                case 0x2:
                {
// switch_8888_case_0x2
                    var_8 = 32;
                    var_16 = 29416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_8888_case_default
                }
                case 0x3:
                {
// switch_8888_case_0x3
                    var_8 = 32;
                    var_16 = 29216;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_8888_case_default
                }
            }
// lab_88E0
            pri = arg_1;
            OP_JZER lab_8930
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_8930
            pri = 0;
            OP_JUMP lab_8938
// lab_8930
            pri = 1;
// lab_8938
            OP_JZER lab_89A0
            var_8 = 29512;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0E90(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_89A0
            pri = 1;
            OP_JUMP lab_89A8
// lab_89A0
            pri = 0;
// lab_89A8
            OP_JZER lab_89F8
            var_8 = 32;
            var_16 = 29608;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_8B98
// lab_89F8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8A60
            var_8 = 32;
            var_16 = 29768;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_8B98
// lab_8A60
            var_16 = 29888;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0E90(var_24, var_16)
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
// switch_8318_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x1:
        {
// switch_8318_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x2:
        {
// switch_8318_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x3:
        {
// switch_8318_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x4:
        {
// switch_8318_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x5:
        {
// switch_8318_case_0x5
            var_8 = 1;
            var_16 = 28640;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0E50(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_11F0(var_40)
            OP_JUMP switch_8318_case_default
        }
        case 0x6:
        {
// switch_8318_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x7:
        {
// switch_8318_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x8:
        {
// switch_8318_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x9:
        {
// switch_8318_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0xa:
        {
// switch_8318_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0xb:
        {
// switch_8318_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0xc:
        {
// switch_8318_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0xd:
        {
// switch_8318_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0xe:
        {
// switch_8318_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0xf:
        {
// switch_8318_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x10:
        {
// switch_8318_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x11:
        {
// switch_8318_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x12:
        {
// switch_8318_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x13:
        {
// switch_8318_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x14:
        {
// switch_8318_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x15:
        {
// switch_8318_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x16:
        {
// switch_8318_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x17:
        {
// switch_8318_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x18:
        {
// switch_8318_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x19:
        {
// switch_8318_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x1a:
        {
// switch_8318_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x1b:
        {
// switch_8318_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x1c:
        {
// switch_8318_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x1d:
        {
// switch_8318_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x1e:
        {
// switch_8318_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x1f:
        {
// switch_8318_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x20:
        {
// switch_8318_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x21:
        {
// switch_8318_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x22:
        {
// switch_8318_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x23:
        {
// switch_8318_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x24:
        {
// switch_8318_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x25:
        {
// switch_8318_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x26:
        {
// switch_8318_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x27:
        {
// switch_8318_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x28:
        {
// switch_8318_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x29:
        {
// switch_8318_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x2a:
        {
// switch_8318_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x2b:
        {
// switch_8318_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x2c:
        {
// switch_8318_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x2d:
        {
// switch_8318_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x2e:
        {
// switch_8318_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x2f:
        {
// switch_8318_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x30:
        {
// switch_8318_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x31:
        {
// switch_8318_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x32:
        {
// switch_8318_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x33:
        {
// switch_8318_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x34:
        {
// switch_8318_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x35:
        {
// switch_8318_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x36:
        {
// switch_8318_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x37:
        {
// switch_8318_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x38:
        {
// switch_8318_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x39:
        {
// switch_8318_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x3a:
        {
// switch_8318_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x3b:
        {
// switch_8318_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x3c:
        {
// switch_8318_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28736;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x3d:
        {
// switch_8318_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28912;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
        case 0x3e:
        {
// switch_8318_case_0x3e
            var_8 = 3;
            var_16 = 29056;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0E50(var_24, var_16, var_8)
            OP_JUMP switch_8318_case_default
        }
    }
}
// fun_8C38
fun_8C38() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8E48(var_16, var_8)
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
    OP_JZER lab_8E30
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_8E30
    pri = 0;
    return pri;
}
// fun_8E48
fun_8E48() {
    var_8 = arg_1;
    var_16 = 30176;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0E50(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8E90
fun_8E90() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_8F28
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0EC8(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_2FF0(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_8F28
    var_8 = 8;
    var_16 = 8;
    pri = fun_0090(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_9080
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_8FE8
    var_24 = 30280;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_8FE8
    pri = 1;
    OP_JUMP lab_8FF0
// lab_9080
    pri = 0;
    return pri;
// lab_8FE8
    pri = 0;
// lab_8FF0
    OP_JZER lab_9080
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0EC8(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_2FF0(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_9090
fun_9090() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_8E90(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_9118(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_9118
fun_9118() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_92B0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9180
fun_9180() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_91F0
    OP_CONST_S -8, 1
// lab_91F0
    pri = arg_0;
    OP_JNZ lab_9210
    OP_ZERO_P_S -8
// lab_9210
    pri = var_8;
    OP_JZER lab_9298
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0090(var_16)
    var_32 = 0;
    pri = fun_0168()
    pri = ItemCloseDescWindow()
// lab_9298
    pri = 0;
    return pri;
}
// fun_92B0
fun_92B0() {
    var_8 = 30384;
    var_16 = 8;
    pri = fun_2B38(var_8)
    var_24 = 0;
    pri = fun_2B70()
    pri = arg_3;
    OP_JNZ lab_93D0
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_9398
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_9440(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_93C0
// lab_93D0
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_95E0(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_9398
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_9508(var_16, var_8)
// lab_93C0
    OP_JUMP lab_9418
// lab_9418
    var_8 = 0;
    pri = fun_2C10()
    pri = 0;
    return pri;
}
// fun_9440
fun_9440() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_95E0(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_94F0
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_94F0
    pri = 0;
    return pri;
}
// fun_9508
fun_9508() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_2C90(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_2950(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_2A48(var_72)
    var_88 = 0;
    pri = fun_2B08()
    var_96 = 0;
    var_104 = 8;
    pri = fun_2C40(var_96)
    pri = 0;
    return pri;
}
// fun_95E0
fun_95E0() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_9628
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_98E8(var_8)
// lab_9628
    pri = arg_4;
    OP_JNZ lab_9690
    var_8 = 0;
    var_16 = 8;
    pri = fun_2C40(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2C90(var_40, var_32, var_24)
// lab_9690
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_9730
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_2CE0(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_2950(var_56, var_48, var_40)
    OP_JUMP lab_9820
// lab_9730
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_97E8
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_97E8
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_97E8
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_2950(var_24, var_16, var_8)
// lab_9820
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_9860
    var_8 = 0;
    var_16 = 8;
    pri = fun_0520(var_8)
// lab_9860
    var_8 = 1;
    var_16 = 8;
    pri = fun_2A48(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_9AF0(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_9180(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_98E8
fun_98E8() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_9948
    var_16 = 30544;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_9948
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_9A88
        case default:
        {
// switch_9A88_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_9A78
            var_16 = 31088;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_9A78
            OP_JUMP lab_9AC0
// lab_9AC0
            var_8 = 31304;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_9A88_case_0x1
            var_8 = 30760;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9AC0
        }
        case 0x2:
        {
// switch_9A88_case_0x2
            var_8 = 30888;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9AC0
        }
    }
}
// fun_9AF0
fun_9AF0() {
    pri = arg_2;
    OP_JNZ lab_9BD8
    var_8 = 0;
    var_16 = 8;
    pri = fun_2C40(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2C90(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_2D30(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_9BD8
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_2950(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_2A48(var_40)
    var_56 = 0;
    pri = fun_2B08()
    pri = 0;
    return pri;
}
// fun_9C50
fun_9C50() {
    pri = 31488;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_9CD8
// lab_9CD8
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_9E58
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_9E48
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_9D98
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_9D98
    pri = 0;
    OP_JUMP lab_9DA0
// lab_9E58
    pri = 0;
    return pri;
// lab_9E48
    OP_JUMP lab_9CD0
// lab_9CD0
    OP_INC_P_S -936
// lab_9D98
    pri = 1;
// lab_9DA0
    OP_JZER lab_9E18
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_9E10
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_9E18
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_9E10
}
// fun_9E78
fun_9E78() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_9F10
    var_8 = 1;
    var_16 = 0;
    var_24 = 32408;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0338(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03A8()
    var_56 = 0;
    pri = fun_1F78()
// lab_9F10
    pri = arg_4;
    OP_JZER lab_9F48
    var_8 = 1;
    var_16 = 8;
    pri = fun_1FA0(var_8)
// lab_9F48
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_9FA0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_9FA0
    pri = 0;
    OP_JUMP lab_9FA8
// lab_9FA0
    pri = 1;
// lab_9FA8
    OP_JZER lab_A070
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_A070
    var_16 = 0;
    pri = fun_0438()
    OP_JZER lab_A048
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1EB8(var_32, var_24)
    OP_JUMP lab_A070
// lab_A070
    pri = arg_2;
    OP_JZER lab_A148
    var_8 = 0;
    pri = fun_0438()
    OP_JZER lab_A118
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1A70(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0AD8(var_40)
    OP_JUMP lab_A148
// lab_A148
    pri = arg_3;
    OP_JZER lab_A180
    var_8 = 1;
    var_16 = 8;
    pri = fun_1F40(var_8)
// lab_A180
    pri = 0;
    return pri;
// lab_A118
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1A70(var_16, var_8)
// lab_A048
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1EB8(var_16, var_8)
}
// fun_A190
fun_A190() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_A310
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_A228
    var_8 = 1;
    var_16 = 0;
    var_24 = 32408;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0338(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03A8()
// lab_A310
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_A228
    pri = arg_0;
    OP_JNZ lab_A270
    var_8 = 32456;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_A290
// lab_A270
    var_8 = 32632;
    pri = SoundPostEvent(var_8)
// lab_A290
    var_8 = 0;
    var_16 = 8;
    pri = fun_0520(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_A310
    var_24 = 32896;
    var_32 = 8;
    var_40 = 16;
    pri = fun_02D8(var_32, var_24)
    var_48 = 0;
    pri = fun_03A8()
}
// fun_A350
fun_A350() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_9C50(var_24)
    pri = 0;
    return pri;
}
// fun_A3B8
fun_A3B8() {
    pri = g_mode;
    switch (pri) {
// switch_A478
        case default:
        {
// switch_A478_case_default
            pri = CommandNOP()
            OP_JUMP lab_A4C0
// lab_A4C0
            pri = 0;
            return pri;
        }
        case 0x8d0fba220254b41a:
        {
// switch_A478_case_0x8d0fba220254b41a
            var_8 = 0;
            pri = fun_CBF0()
            OP_JUMP lab_A4C0
        }
        case 0x0:
        {
// switch_A478_case_0x0
            var_8 = 0;
            pri = fun_A4D0()
            OP_JUMP lab_A4C0
        }
        case 0x6dfd501e76ee470e:
        {
// switch_A478_case_0x6dfd501e76ee470e
            var_8 = 0;
            pri = fun_CCE0()
            OP_JUMP lab_A4C0
        }
    }
}
// fun_A4D0
fun_A4D0() {
    pri = 0;
    return pri;
}
// fun_A4E8
fun_A4E8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_9E78(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_A540
fun_A540() {
    pri = 0;
    return pri;
}
// fun_A558
fun_A558() {
    pri = 0;
    return pri;
}
// fun_A570
fun_A570() {
    pri = EvCameraStart()
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_8 = 16;
    pri = fun_2E10(var_0, var_-8)
    var_16 = 3;
    var_24 = 1;
    OP_PUSH2_C 4638134251664051274, 4610132276555945083
    var_32 = 32;
    pri = fun_2E78(var_24, var_16, var_8, var_0)
    var_40 = 2;
    pri = SetCascadeShadowMapLevel(var_40)
    var_48 = 0;
    var_56 = 4631952216750555136;
    var_64 = 0;
    OP_PUSH5_C 4673354549745565041, -4567682595513559941, 4675392715824362947, 4673404173454105641, -4567873426751676744
    var_72 = 4675356649094192824;
    var_80 = 1;
    pri = EvCameraMove(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_88 = 0;
    pri = fun_2D80()
    var_96 = 0;
    var_104 = 0;
    var_112 = -3470649453704576271;
    var_120 = 24;
    pri = fun_8C38(var_112, var_104, var_96)
    var_128 = 5;
    var_136 = 8;
    pri = fun_0090(var_128)
    var_144 = 1;
    var_152 = 1;
    var_160 = -1;
    var_168 = 2;
    var_176 = 702631533266588014;
    var_184 = 40;
    pri = fun_1600(var_176, var_168, var_160, var_152, var_144)
    var_192 = 1;
    var_200 = 1;
    var_208 = -1;
    var_216 = -1;
    var_224 = 0;
    var_232 = 12;
    var_240 = 702631533266588014;
    var_248 = 56;
    pri = fun_4BD0(var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_256 = 4;
    var_264 = 4;
    var_272 = 702631533266588014;
    var_280 = 24;
    pri = fun_1BA0(var_272, var_264, var_256)
    var_288 = 0;
    var_296 = 3;
    var_304 = 0;
    var_312 = 100;
    var_320 = -1;
    OP_PUSH2_C -4046761185021665761, 702631533266588014
    var_328 = 56;
    pri = fun_2850(var_320, var_312, var_304, var_296, var_288, var_280, var_272)
    var_336 = 1;
    var_344 = 8;
    pri = fun_2A48(var_336)
    var_352 = 0;
    pri = fun_2B08()
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_360 = 3;
    var_368 = 1;
    var_376 = 32;
    pri = fun_2ED0(var_368, var_360, var_352, var_344)
    var_384 = 0;
    var_392 = 4631952216750555136;
    var_400 = 0;
    OP_PUSH5_C 4673257102778774323, -4578758020120612700, 4675353815102972232, 4673371737861086249, -4571274480099178578
    var_408 = 4675401337369914245;
    var_416 = 1;
    pri = EvCameraMove(var_416, var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_424 = 0;
    pri = fun_2D80()
    var_432 = -1817487643744510502;
    var_440 = 8;
    pri = fun_0870(var_432)
    var_448 = 0;
    pri = fun_08A0()
    var_456 = 1;
    var_464 = 8;
    pri = fun_0090(var_456)
    var_472 = 0;
    var_480 = -1817487643744510502;
    var_488 = 16;
    pri = fun_0AA0(var_480, var_472)
    var_496 = 702631533266588014;
    var_504 = 8;
    pri = fun_1C08(var_496)
    var_512 = -1;
    var_520 = 702631533266588014;
    var_528 = 16;
    pri = fun_1A70(var_520, var_512)
    var_536 = -1;
    var_544 = -3470649453704576271;
    var_552 = 16;
    pri = fun_1A70(var_544, var_536)
    var_560 = 1;
    var_568 = 3;
    var_576 = 0;
    var_584 = 12;
    var_592 = 702631533266588014;
    var_600 = 40;
    pri = fun_6F08(var_592, var_584, var_576, var_568, var_560)
    var_608 = 702631533266588014;
    var_616 = 8;
    pri = fun_0EC8(var_608)
    var_624 = 1;
    var_632 = 1;
    OP_PUSH4_C -4588379890355745587, 4673368895623528448, 4675349528382013440, 8802641224559852288
    var_640 = 48;
    pri = fun_0A48(var_632, var_624, var_616, var_608, var_600, var_592)
    var_648 = 1;
    var_656 = 1;
    OP_PUSH4_C -4587225842951231898, 4673393084879339520, 4675353788989571072, 702631533266588014
    var_664 = 48;
    pri = fun_0A48(var_656, var_648, var_640, var_632, var_624, var_616)
    var_672 = 1;
    var_680 = 1;
    OP_PUSH4_C -4587781756030235443, 4673337834420043776, 4675359149108756480, -3470649453704576271
    var_688 = 48;
    pri = fun_0A48(var_680, var_672, var_664, var_656, var_648, var_640)
    var_696 = 1;
    var_704 = 1;
    OP_PUSH4_C -4587781756030235443, 4673338659053764608, 4675374267393638400, -1772686665497876459
    var_712 = 48;
    pri = fun_0A48(var_704, var_696, var_688, var_680, var_672, var_664)
    var_720 = 0;
    OP_PUSH4_C 4607182418800017408, 4673371737861086249, -4571274480099178578, 4675401337369914245
    var_728 = 32944;
    var_736 = 48;
    pri = fun_1C60(var_728, var_720, var_712, var_704, var_696, var_688)
    var_744 = 33256;
    pri = SoundPostEvent(var_744)
    var_752 = 80;
    var_760 = 8;
    pri = fun_0090(var_752)
    var_768 = 0;
    var_776 = 4631952216750555136;
    var_784 = 0;
    OP_PUSH5_C 4673408785905384161, -4567566355144271462, 4675256058898536202, 4673503162485954314, -4567856934077260104
    var_792 = 4675301156742338970;
    var_800 = 1;
    pri = EvCameraMove(var_800, var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736, var_728)
    var_808 = 0;
    pri = fun_2D80()
    var_816 = 0;
    OP_PUSH4_C 4607182418800017408, 4673396383414222848, -4567300933037326336, 4675227345152376832
    var_824 = 33456;
    var_832 = 48;
    pri = fun_1C60(var_824, var_816, var_808, var_800, var_792, var_784)
    var_840 = 25;
    var_848 = 8;
    pri = fun_0090(var_840)
    var_856 = 33832;
    pri = SoundPostEvent(var_856)
    var_864 = 25;
    var_872 = 8;
    pri = fun_0090(var_864)
    var_888 = 0;
    OP_PUSH4_C 4607182418800017408, 4673396383414222848, -4567300933037326336, 4675227345152376832
    var_896 = 34048;
    var_904 = 48;
    pri = fun_1C60(var_896, var_888, var_880, var_872, var_864, var_856)
    var_8 = pri;
    var_912 = 0;
    var_920 = 4631952216750555136;
    var_928 = 3;
    OP_PUSH5_C 4673314002505511731, -4567604310285662290, 4675305411852338463, 4673500798535954596, -4568179926613035581
    var_936 = 4675394730679420846;
    var_944 = 100;
    pri = EvCameraMove(var_944, var_936, var_928, var_920, var_912, var_904, var_896, var_888, var_880, var_872)
    var_952 = 30;
    var_960 = 8;
    pri = fun_0090(var_952)
    var_968 = 1;
    var_976 = 0;
    var_984 = 100;
    pri = float(var_984)
    var_992 = pri;
    var_1000 = 0;
    pri = float(var_1000)
    var_1008 = pri;
    var_1016 = 0;
    OP_PUSH4_C 4673396383414222848, 4675236965879119872, 4611686018427387904, 702631533266588014
    var_1024 = 72;
    pri = fun_0B10(var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968, var_960, var_952)
    var_1032 = 20;
    var_1040 = 8;
    pri = fun_0090(var_1032)
    var_1048 = 34400;
    pri = SoundPostEvent(var_1048)
    var_1056 = 1;
    var_1064 = 0;
    var_1072 = 4641240890982006784;
    var_1080 = 0;
    pri = float(var_1080)
    var_1088 = pri;
    var_1096 = 0;
    OP_PUSH4_C 4673408478042128384, 4675247658629699994, 4611686018427387904, 8802641224559852288
    var_1104 = 72;
    pri = fun_0B10(var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032)
    var_1112 = 0;
    pri = fun_2D80()
    var_1120 = 0;
    var_1128 = 4631952216750555136;
    var_1136 = 0;
    OP_PUSH5_C 4673411347767476879, -4567600308063337185, 4675235900727230464, 4673508948665895485, -4568051063850260234
    var_1144 = 4675258109487722004;
    var_1152 = 1;
    pri = EvCameraMove(var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080)
    var_1160 = 0;
    pri = fun_2D80()
    var_1168 = 1;
    var_1176 = 1;
    OP_PUSH4_C -4587781756030235443, 4673315844187488256, 4675297439018647552, -3470649453704576271
    var_1184 = 48;
    pri = fun_0A48(var_1176, var_1168, var_1160, var_1152, var_1144, var_1136)
    var_1192 = 1;
    var_1200 = 1;
    OP_PUSH4_C -4587781756030235443, 4673357075873529856, 4675304310966321152, -1772686665497876459
    var_1208 = 48;
    pri = fun_0A48(var_1200, var_1192, var_1184, var_1176, var_1168, var_1160)
    var_1216 = 8802641224559852288;
    var_1224 = 8;
    pri = fun_0CF0(var_1216)
    var_1232 = 702631533266588014;
    var_1240 = 8;
    pri = fun_0CF0(var_1232)
    var_1248 = 1;
    var_1256 = 1;
    var_1264 = -1;
    var_1272 = -1;
    var_1280 = 0;
    var_1288 = 26;
    var_1296 = 702631533266588014;
    var_1304 = 56;
    pri = fun_4BD0(var_1296, var_1288, var_1280, var_1272, var_1264, var_1256, var_1248)
    var_1312 = 18;
    var_1320 = 8;
    pri = fun_0090(var_1312)
    var_1328 = var_8;
    var_1336 = 8;
    pri = fun_09F0(var_1328)
    var_1344 = 34600;
    var_1352 = 702631533266588014;
    var_1360 = 16;
    pri = fun_10C8(var_1352, var_1344)
    var_1368 = 1;
    var_1376 = 3;
    var_1384 = 0;
    var_1392 = 26;
    var_1400 = 702631533266588014;
    var_1408 = 40;
    pri = fun_6F08(var_1400, var_1392, var_1384, var_1376, var_1368)
    var_1416 = 702631533266588014;
    var_1424 = 8;
    pri = fun_0EC8(var_1416)
    var_1432 = 0;
    var_1440 = 0;
    var_1448 = 0;
    var_1456 = 0;
    OP_PUSH2_C 702631533266588014, 8802641224559852288
    var_1464 = 48;
    pri = fun_0C98(var_1456, var_1448, var_1440, var_1432, var_1424, var_1416)
    var_1472 = 0;
    var_1480 = 0;
    var_1488 = 0;
    var_1496 = 0;
    OP_PUSH2_C 8802641224559852288, 702631533266588014
    var_1504 = 48;
    pri = fun_0C98(var_1496, var_1488, var_1480, var_1472, var_1464, var_1456)
    var_1512 = 8802641224559852288;
    var_1520 = 8;
    pri = fun_0CF0(var_1512)
    var_1528 = 702631533266588014;
    var_1536 = 8;
    pri = fun_0CF0(var_1528)
    var_1544 = 0;
    var_1552 = 3;
    var_1560 = 0;
    var_1568 = 100;
    var_1576 = -1;
    OP_PUSH2_C -4046760085510037550, 702631533266588014
    var_1584 = 56;
    pri = fun_2850(var_1576, var_1568, var_1560, var_1552, var_1544, var_1536, var_1528)
    var_1592 = 1;
    var_1600 = 8;
    pri = fun_2A48(var_1592)
    var_1608 = 0;
    pri = fun_2B08()
    var_1616 = 6;
    var_1624 = 4;
    var_1632 = 2;
    var_1640 = 1;
    var_1648 = 9;
    var_1656 = 1;
    var_1664 = 1076;
    var_1672 = 702631533266588014;
    var_1680 = 64;
    pri = fun_9090(var_1672, var_1664, var_1656, var_1648, var_1640, var_1632, var_1624, var_1616)
    var_1688 = 34744;
    pri = SoundPostEvent(var_1688)
    var_1696 = 34872;
    pri = SoundPostEvent(var_1696)
    var_1704 = 1;
    var_1712 = 1;
    var_1720 = -1;
    var_1728 = -1;
    var_1736 = 0;
    var_1744 = 23;
    var_1752 = 702631533266588014;
    var_1760 = 56;
    pri = fun_4BD0(var_1752, var_1744, var_1736, var_1728, var_1720, var_1712, var_1704)
    var_1768 = 0;
    var_1776 = 3;
    var_1784 = 0;
    var_1792 = 100;
    var_1800 = -1;
    OP_PUSH2_C -4046758985998409339, 702631533266588014
    var_1808 = 56;
    pri = fun_2850(var_1800, var_1792, var_1784, var_1776, var_1768, var_1760, var_1752)
    var_1816 = 1;
    var_1824 = 8;
    pri = fun_2A48(var_1816)
    var_1832 = 0;
    pri = fun_2B08()
    var_1840 = 0;
    var_1848 = 4631952216750555136;
    var_1856 = 6;
    OP_PUSH5_C 4673395231675792753, -4567600308063337185, 4675253605613216727, 4673492832574211359, -4568049568514446459
    var_1864 = 4675275814373708268;
    var_1872 = 40;
    pri = EvCameraMove(var_1872, var_1864, var_1856, var_1848, var_1840, var_1832, var_1824, var_1816, var_1808, var_1800)
    var_1880 = 1;
    var_1888 = 0;
    OP_PUSH5_C 4641240890982006784, 8802641224559852288, 4673343881733996544, 4675263491597139968, 4607182418800017408
    var_1896 = -3470649453704576271;
    var_1904 = 64;
    pri = fun_0B88(var_1896, var_1888, var_1880, var_1872, var_1864, var_1856, var_1848, var_1840)
    var_1912 = 10;
    var_1920 = 8;
    pri = fun_0090(var_1912)
    var_1928 = 1;
    var_1936 = 0;
    OP_PUSH5_C 4641240890982006784, 8802641224559852288, 4673361473920040960, 4675279434515742720, 4607182418800017408
    var_1944 = -1772686665497876459;
    var_1952 = 64;
    pri = fun_0B88(var_1944, var_1936, var_1928, var_1920, var_1912, var_1904, var_1896, var_1888)
    var_1960 = 1;
    var_1968 = 3;
    var_1976 = 0;
    var_1984 = 23;
    var_1992 = 702631533266588014;
    var_2000 = 40;
    pri = fun_6F08(var_1992, var_1984, var_1976, var_1968, var_1960)
    var_2008 = 0;
    var_2016 = 0;
    var_2024 = 0;
    OP_PUSH2_C 4638602063075344384, 8802641224559852288
    var_2032 = 40;
    pri = fun_0C48(var_2024, var_2016, var_2008, var_2000, var_1992)
    var_2040 = 0;
    var_2048 = 0;
    var_2056 = 0;
    OP_PUSH2_C 4637602826908021555, 702631533266588014
    var_2064 = 40;
    pri = fun_0C48(var_2056, var_2048, var_2040, var_2032, var_2024)
    var_2072 = 50;
    var_2080 = 8;
    pri = fun_0090(var_2072)
    var_2088 = 702631533266588014;
    var_2096 = 8;
    pri = fun_0EC8(var_2088)
    var_2104 = -3470649453704576271;
    var_2112 = 8;
    pri = fun_0EC8(var_2104)
    var_2120 = 0;
    var_2128 = 4630502620620495258;
    var_2136 = 0;
    OP_PUSH5_C 4673386248665793823, -4567613062398219387, 4675252950029408666, 4673473962205899653, -4567800199277266862
    var_2144 = 4675246780394787308;
    var_2152 = 1;
    pri = EvCameraMove(var_2152, var_2144, var_2136, var_2128, var_2120, var_2112, var_2104, var_2096, var_2088, var_2080)
    var_2160 = 0;
    pri = fun_2D80()
    var_2168 = -3470649453704576271;
    var_2176 = 8;
    pri = fun_0CF0(var_2168)
    var_2184 = -1772686665497876459;
    var_2192 = 8;
    pri = fun_0CF0(var_2184)
    var_2200 = 8802641224559852288;
    var_2208 = 8;
    pri = fun_0CF0(var_2200)
    var_2216 = 702631533266588014;
    var_2224 = 8;
    pri = fun_0CF0(var_2216)
    var_2232 = 0;
    var_2240 = 2;
    var_2248 = -3470649453704576271;
    var_2256 = 24;
    pri = fun_8C38(var_2248, var_2240, var_2232)
    var_2264 = 1;
    var_2272 = 8;
    pri = fun_0090(var_2264)
    var_2280 = -3470649453704576271;
    var_2288 = 8;
    pri = fun_0EC8(var_2280)
    var_2296 = 0;
    var_2304 = 3;
    var_2312 = 0;
    var_2320 = 100;
    var_2328 = -1;
    OP_PUSH2_C 1558437115806656688, -3470649453704576271
    var_2336 = 56;
    pri = fun_2850(var_2328, var_2320, var_2312, var_2304, var_2296, var_2288, var_2280)
    var_2344 = 1;
    var_2352 = 8;
    pri = fun_2A48(var_2344)
    var_2360 = 0;
    pri = fun_2B08()
    var_2368 = 0;
    pri = fun_2D80()
    var_2376 = 1;
    var_2384 = -1817487643744510502;
    var_2392 = 16;
    pri = fun_0AA0(var_2384, var_2376)
    var_2400 = 1;
    var_2408 = 1;
    OP_PUSH4_C -4587338432941916160, 4673436240710729728, 4675313244498296832, -1817487643744510502
    var_2416 = 48;
    pri = fun_0A48(var_2408, var_2400, var_2392, var_2384, var_2376, var_2368)
    var_2424 = 1;
    var_2432 = 1;
    var_2440 = -1;
    var_2448 = -1;
    var_2456 = 0;
    var_2464 = 22;
    var_2472 = 702631533266588014;
    var_2480 = 56;
    pri = fun_4BD0(var_2472, var_2464, var_2456, var_2448, var_2440, var_2432, var_2424)
    var_2488 = 0;
    var_2496 = 3;
    var_2504 = 0;
    var_2512 = 100;
    var_2520 = -1;
    OP_PUSH2_C -4046766682579806816, 702631533266588014
    var_2528 = 56;
    pri = fun_2850(var_2520, var_2512, var_2504, var_2496, var_2488, var_2480, var_2472)
    var_2536 = 1;
    var_2544 = 8;
    pri = fun_2A48(var_2536)
    var_2552 = 0;
    pri = fun_2B08()
    var_2560 = 35024;
    var_2568 = 702631533266588014;
    var_2576 = 16;
    pri = fun_10C8(var_2568, var_2560)
    var_2584 = 1;
    var_2592 = 3;
    var_2600 = 0;
    var_2608 = 22;
    var_2616 = 702631533266588014;
    var_2624 = 40;
    pri = fun_6F08(var_2616, var_2608, var_2600, var_2592, var_2584)
    var_2632 = 1;
    var_2640 = 1;
    var_2648 = -1;
    OP_PUSH2_C 702631533266588014, -3470649453704576271
    var_2656 = 40;
    pri = fun_1548(var_2648, var_2640, var_2632, var_2624, var_2616)
    var_2664 = 1;
    var_2672 = 1;
    var_2680 = -1;
    OP_PUSH2_C 702631533266588014, -1772686665497876459
    var_2688 = 40;
    pri = fun_1548(var_2680, var_2672, var_2664, var_2656, var_2648)
    var_2696 = 702631533266588014;
    var_2704 = 8;
    pri = fun_0EC8(var_2696)
    var_2712 = 0;
    var_2720 = 3;
    var_2728 = 0;
    var_2736 = 100;
    var_2744 = -1;
    OP_PUSH2_C -1760174480143707604, -1772686665497876459
    var_2752 = 56;
    pri = fun_2850(var_2744, var_2736, var_2728, var_2720, var_2712, var_2704, var_2696)
    var_2760 = 1;
    var_2768 = 8;
    pri = fun_2A48(var_2760)
    var_2776 = 0;
    pri = fun_2B08()
    var_2784 = 1;
    var_2792 = 1;
    var_2800 = -1;
    var_2808 = -1;
    var_2816 = 0;
    var_2824 = 8;
    var_2832 = 702631533266588014;
    var_2840 = 56;
    pri = fun_4BD0(var_2832, var_2824, var_2816, var_2808, var_2800, var_2792, var_2784)
    var_2848 = 0;
    var_2856 = 3;
    var_2864 = 0;
    var_2872 = 100;
    var_2880 = -1;
    OP_PUSH2_C -4046765583068178605, 702631533266588014
    var_2888 = 56;
    pri = fun_2850(var_2880, var_2872, var_2864, var_2856, var_2848, var_2840, var_2832)
    var_2896 = 1;
    var_2904 = 8;
    pri = fun_2A48(var_2896)
    var_2912 = 0;
    pri = fun_2B08()
    var_2920 = 0;
    var_2928 = 3;
    var_2936 = 0;
    var_2944 = 100;
    var_2952 = -1;
    OP_PUSH2_C -4046764483556550394, 702631533266588014
    var_2960 = 56;
    pri = fun_2850(var_2952, var_2944, var_2936, var_2928, var_2920, var_2912, var_2904)
    var_2968 = 1;
    var_2976 = 8;
    pri = fun_2A48(var_2968)
    var_2984 = 0;
    pri = fun_2B08()
    var_2992 = 1;
    var_3000 = 1;
    var_3008 = -1;
    var_3016 = -1;
    var_3024 = 0;
    var_3032 = 4;
    var_3040 = -1772686665497876459;
    var_3048 = 56;
    pri = fun_4BD0(var_3040, var_3032, var_3024, var_3016, var_3008, var_3000, var_2992)
    var_3056 = 0;
    var_3064 = 3;
    var_3072 = 0;
    var_3080 = 100;
    var_3088 = -1;
    OP_PUSH2_C -1760171181608822971, -1772686665497876459
    var_3096 = 56;
    pri = fun_2850(var_3088, var_3080, var_3072, var_3064, var_3056, var_3048, var_3040)
    var_3104 = 1;
    var_3112 = 8;
    pri = fun_2A48(var_3104)
    var_3120 = 0;
    pri = fun_2B08()
    var_3128 = 1;
    var_3136 = 3;
    var_3144 = 0;
    var_3152 = 8;
    var_3160 = 702631533266588014;
    var_3168 = 40;
    pri = fun_6F08(var_3160, var_3152, var_3144, var_3136, var_3128)
    var_3176 = 702631533266588014;
    var_3184 = 8;
    pri = fun_0EC8(var_3176)
    var_3192 = -1;
    var_3200 = -3470649453704576271;
    var_3208 = 16;
    pri = fun_1A70(var_3200, var_3192)
    var_3216 = -1;
    var_3224 = -1772686665497876459;
    var_3232 = 16;
    pri = fun_1A70(var_3224, var_3216)
    var_3240 = 0;
    var_3248 = 0;
    var_3256 = -3470649453704576271;
    var_3264 = 24;
    pri = fun_8C38(var_3256, var_3248, var_3240)
    var_3272 = 1;
    var_3280 = 8;
    pri = fun_0090(var_3272)
    var_3288 = -3470649453704576271;
    var_3296 = 8;
    pri = fun_0EC8(var_3288)
    var_3304 = 1;
    var_3312 = 0;
    var_3320 = 4641240890982006784;
    var_3328 = 0;
    var_3336 = 0;
    OP_PUSH4_C 4673402155850268672, 4675286443902369792, 4607182418800017408, -1817487643744510502
    var_3344 = 72;
    pri = fun_0B10(var_3336, var_3328, var_3320, var_3312, var_3304, var_3296, var_3288, var_3280, var_3272)
    var_3352 = 5;
    var_3360 = 8;
    pri = fun_0090(var_3352)
    var_3368 = 1;
    var_3376 = 3;
    var_3384 = 0;
    var_3392 = 4;
    var_3400 = -1772686665497876459;
    var_3408 = 40;
    pri = fun_6F08(var_3400, var_3392, var_3384, var_3376, var_3368)
    var_3416 = -1772686665497876459;
    var_3424 = 8;
    pri = fun_0EC8(var_3416)
    var_3432 = 0;
    var_3440 = 4630516694369330790;
    var_3448 = 3;
    OP_PUSH5_C 4673416974518232023, -4567672743889375068, 4675260759310744945, 4673504688058337853, -4567859880768422543
    var_3456 = 4675254589676123587;
    var_3464 = 30;
    pri = EvCameraMove(var_3464, var_3456, var_3448, var_3440, var_3432, var_3424, var_3416, var_3408, var_3400, var_3392)
    var_3472 = 0;
    pri = fun_2D80()
    var_3480 = 0;
    var_3488 = 3;
    var_3496 = 0;
    var_3504 = 100;
    var_3512 = -1;
    OP_PUSH2_C 5139079222833200107, -1817487643744510502
    var_3520 = 56;
    pri = fun_2850(var_3512, var_3504, var_3496, var_3488, var_3480, var_3472, var_3464)
    var_3528 = 1;
    var_3536 = 8;
    pri = fun_2A48(var_3528)
    var_3544 = 0;
    pri = fun_2B08()
    var_3552 = -1817487643744510502;
    var_3560 = 8;
    pri = fun_0CF0(var_3552)
    var_3568 = 0;
    var_3576 = 0;
    var_3584 = 0;
    var_3592 = 0;
    OP_PUSH2_C -1817487643744510502, 8802641224559852288
    var_3600 = 48;
    pri = fun_0C98(var_3592, var_3584, var_3576, var_3568, var_3560, var_3552)
    var_3608 = 0;
    var_3616 = 0;
    var_3624 = 0;
    var_3632 = 0;
    OP_PUSH2_C -1817487643744510502, 702631533266588014
    var_3640 = 48;
    pri = fun_0C98(var_3632, var_3624, var_3616, var_3608, var_3600, var_3592)
    var_3648 = 0;
    var_3656 = 0;
    var_3664 = 0;
    var_3672 = 0;
    OP_PUSH2_C -1817487643744510502, -3470649453704576271
    var_3680 = 48;
    pri = fun_0C98(var_3672, var_3664, var_3656, var_3648, var_3640, var_3632)
    var_3688 = 5;
    var_3696 = 8;
    pri = fun_0090(var_3688)
    var_3704 = 0;
    var_3712 = 0;
    var_3720 = 0;
    var_3728 = 0;
    OP_PUSH2_C -1817487643744510502, -1772686665497876459
    var_3736 = 48;
    pri = fun_0C98(var_3728, var_3720, var_3712, var_3704, var_3696, var_3688)
    var_3744 = 8802641224559852288;
    var_3752 = 8;
    pri = fun_0CF0(var_3744)
    var_3760 = 702631533266588014;
    var_3768 = 8;
    pri = fun_0CF0(var_3760)
    var_3776 = -3470649453704576271;
    var_3784 = 8;
    pri = fun_0CF0(var_3776)
    var_3792 = -1772686665497876459;
    var_3800 = 8;
    pri = fun_0CF0(var_3792)
    var_3808 = 0;
    var_3816 = 0;
    var_3824 = 0;
    var_3832 = 0;
    OP_PUSH2_C 8802641224559852288, -1817487643744510502
    var_3840 = 48;
    pri = fun_0C98(var_3832, var_3824, var_3816, var_3808, var_3800, var_3792)
    var_3848 = -1817487643744510502;
    var_3856 = 8;
    pri = fun_0CF0(var_3848)
    var_3864 = 0;
    var_3872 = 2;
    var_3880 = -1817487643744510502;
    var_3888 = 24;
    pri = fun_8C38(var_3880, var_3872, var_3864)
    var_3896 = 1;
    var_3904 = 8;
    pri = fun_0090(var_3896)
    var_3912 = -1817487643744510502;
    var_3920 = 8;
    pri = fun_0EC8(var_3912)
    var_3928 = 0;
    var_3936 = 3;
    var_3944 = 0;
    var_3952 = 100;
    var_3960 = -1;
    OP_PUSH2_C 5139080322344828318, -1817487643744510502
    var_3968 = 56;
    pri = fun_2850(var_3960, var_3952, var_3944, var_3936, var_3928, var_3920, var_3912)
    var_3976 = 1;
    var_3984 = 8;
    pri = fun_2A48(var_3976)
    var_3992 = 0;
    pri = fun_2B08()
    var_4000 = 1;
    var_4008 = 1;
    var_4016 = -1;
    var_4024 = -1;
    var_4032 = 0;
    var_4040 = 8;
    var_4048 = 702631533266588014;
    var_4056 = 56;
    pri = fun_4BD0(var_4048, var_4040, var_4032, var_4024, var_4016, var_4008, var_4000)
    var_4064 = 15;
    var_4072 = 8;
    pri = fun_0090(var_4064)
    var_4080 = 1;
    var_4088 = 0;
    var_4096 = 32408;
    var_4104 = 30;
    var_4112 = 32;
    pri = fun_0338(var_4104, var_4096, var_4088, var_4080)
    var_4120 = 0;
    pri = fun_03A8()
    var_4128 = 1;
    var_4136 = 3;
    var_4144 = 0;
    var_4152 = 8;
    var_4160 = 702631533266588014;
    var_4168 = 40;
    pri = fun_6F08(var_4160, var_4152, var_4144, var_4136, var_4128)
    var_4176 = 702631533266588014;
    var_4184 = 8;
    pri = fun_0EC8(var_4176)
    var_4192 = 1;
    var_4200 = 2;
    var_4208 = 16;
    pri = fun_A190(var_4200, var_4192)
    pri = 0;
    return pri;
}
// fun_C988
fun_C988() {
    pri = 0;
    return pri;
}
// fun_C9A0
fun_C9A0() {
    var_8 = 702631533266588014;
    var_16 = 8;
    pri = fun_09F0(var_8)
    var_24 = -3470649453704576271;
    var_32 = 8;
    pri = fun_09F0(var_24)
    var_40 = -1772686665497876459;
    var_48 = 8;
    pri = fun_09F0(var_40)
    var_56 = -1817487643744510502;
    var_64 = 8;
    pri = fun_09F0(var_56)
    var_72 = 330;
    var_80 = 8;
    pri = fun_A350(var_72)
    var_88 = 20;
    var_96 = -3860840703277833219;
    pri = WorkSet(var_96, var_88)
    var_104 = -7688158225218808343;
    pri = VanishFlagReset(var_104)
    var_112 = 5804806806352038632;
    pri = VanishFlagReset(var_112)
    var_120 = 972678789484826509;
    pri = VanishFlagReset(var_120)
    var_128 = 1;
    var_136 = 1076;
    pri = ItemAdd(var_136, var_128)
    var_144 = 2;
    var_152 = 8;
    pri = fun_0630(var_144)
    pri = 0;
    return pri;
}
// fun_CB68
fun_CB68() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    OP_PUSH5_C 4649711528562393088, 4655116727724539904, -3946011152843352966, 1320682236707923903, -8284180053457207032
    var_48 = 80;
    pri = fun_0460(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    pri = 0;
    return pri;
}
// fun_CBF0
fun_CBF0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_A4E8()
    var_16 = 0;
    pri = fun_A540()
    var_24 = 0;
    pri = fun_A558()
    var_32 = 0;
    pri = fun_A570()
    var_40 = 0;
    pri = fun_C988()
    var_48 = 0;
    pri = fun_C9A0()
    var_56 = 0;
    pri = fun_CB68()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_CCE0
fun_CCE0() {
    var_8 = 0;
    pri = fun_A540()
    var_16 = 0;
    pri = fun_C9A0()
    pri = 0;
    return pri;
}
