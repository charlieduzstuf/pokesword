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
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0480
// lab_0480
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_04C0
    OP_JUMP lab_0530
// lab_04C0
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0500
    OP_JUMP lab_0530
// lab_0500
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0480
// lab_0530
    pri = 0;
    return pri;
}
// fun_0548
fun_0548() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0578
fun_0578() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_05B0
// lab_05B0
    var_8 = 0;
    pri = fun_0728()
    OP_JNZ lab_05E8
    OP_JUMP lab_0618
// lab_05E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05B0
// lab_0618
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_0648
// lab_0648
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0688
    pri = 0;
    return pri;
// lab_0688
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0648
    pri = 0;
    return pri;
}
// fun_06C8
fun_06C8() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_06F8
fun_06F8() {
    var_8 = arg_0;
    pri = IsFieldObjectExists_(var_8)
    return pri;
}
// fun_0728
fun_0728() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0750
fun_0750() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07A8
fun_07A8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXYZ_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0800
fun_0800() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0840
fun_0840() {
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
// fun_08B8
fun_08B8() {
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
// fun_0978
fun_0978() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_09C8
fun_09C8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0A20
fun_0A20() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1C78(var_8)
    OP_JZER lab_0A98
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1CA8(var_24)
    OP_JNZ lab_0A98
    pri = 0;
    return pri;
// lab_0A98
    OP_JUMP lab_0AA8
// lab_0AA8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0B08
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0B08
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0AA8
    pri = 0;
    return pri;
}
// fun_0B48
fun_0B48() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0B80
fun_0B80() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0BC0
fun_0BC0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0BF8
fun_0BF8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0C40
    pri = 0;
    return pri;
// lab_0C40
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0C80
// lab_0C80
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1C78(var_8)
    OP_JNZ lab_0D08
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0CF8
    pri = 0;
    return pri;
// lab_0D08
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0D50
    pri = 0;
    return pri;
// lab_0D50
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0DB0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F20(var_8)
    pri = 0;
    return pri;
// lab_0DB0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0C80
    pri = 0;
    return pri;
// lab_0CF8
    OP_JUMP lab_0D50
}
// fun_0DF8
fun_0DF8() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0E40
// lab_0E40
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E98
    pri = 0;
    return pri;
// lab_0E98
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0ED8
    pri = 0;
    return pri;
// lab_0ED8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0E40
    pri = 0;
    return pri;
}
// fun_0F20
fun_0F20() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0F58
fun_0F58() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0FA8
    pri = 0;
    return pri;
// lab_0FA8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1C78(var_8)
    OP_JZER lab_10D8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1000
    OP_ZERO_P_S 64
// lab_10D8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1110
    OP_CONST_S 64, 1
// lab_1110
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1148
    OP_CONST_S 72, 1
// lab_1148
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
// lab_1000
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1028
    OP_ZERO_P_S 72
// lab_1028
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
    OP_JUMP lab_11E8
// lab_11E8
    pri = 0;
    return pri;
}
// fun_11F8
fun_11F8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1238
fun_1238() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1278
fun_1278() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12D0
fun_12D0() {
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
// fun_1330
fun_1330() {
    OP_CONST_S -8, 4631530004285489152
    pri = arg_1;
    switch (pri) {
// switch_16F0
        case default:
        {
// switch_16F0_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_16F0_case_0x0
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
            pri = fun_12D0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_16F0_case_default
        }
        case 0x1:
        {
// switch_16F0_case_0x1
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_12D0(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_16F0_case_default
        }
        case 0x2:
        {
// switch_16F0_case_0x2
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
            pri = fun_12D0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_16F0_case_default
        }
        case 0x3:
        {
// switch_16F0_case_0x3
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 0;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_12D0(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_16F0_case_default
        }
        case 0x4:
        {
// switch_16F0_case_0x4
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
            pri = fun_12D0(var_80, var_72, var_64, var_56, var_48, var_40)
            OP_JUMP switch_16F0_case_default
        }
        case 0x5:
        {
// switch_16F0_case_0x5
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
            pri = fun_12D0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_16F0_case_default
        }
        case 0x6:
        {
// switch_16F0_case_0x6
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
            pri = fun_12D0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_16F0_case_default
        }
        case 0x7:
        {
// switch_16F0_case_0x7
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_12D0(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_16F0_case_default
        }
    }
}
// fun_17A0
fun_17A0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_17E0
fun_17E0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = ResetFieldObjectEyeLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1820
fun_1820() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1860
fun_1860() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1898
fun_1898() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_18D8
fun_18D8() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1910
fun_1910() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1820(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1898(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1978
fun_1978() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1860(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_18D8(var_24)
    pri = 0;
    return pri;
}
// fun_19D0
fun_19D0() {
    var_8 = arg_1;
    var_16 = 8;
    pri = fun_1C78(var_8)
    OP_JZER lab_1A70
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
// lab_1A70
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
// fun_1AD8
fun_1AD8() {
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
    pri = fun_19D0(var_2616, var_2608, var_2600, var_2592, var_2584, var_2576)
    return pri;
}
// fun_1C78
fun_1C78() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1CA8
fun_1CA8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1CD8
fun_1CD8() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1D08
fun_1D08() {
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
// switch_2320
        case default:
        {
// switch_2320_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_2368
// lab_2368
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
            OP_JNZ lab_2410
            var_88 = 0;
            pri = fun_26E0()
// lab_2410
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_2320_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1F08
                case default:
                {
// switch_1F08_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1F80
// lab_1F80
                    OP_JUMP lab_2368
                }
                case 0x0:
                {
// switch_1F08_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1F80
                }
                case 0x1:
                {
// switch_1F08_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1F80
                }
                case 0x2:
                {
// switch_1F08_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1F80
                }
                case 0x3:
                {
// switch_1F08_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1F80
                }
                case 0x4:
                {
// switch_1F08_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1F80
                }
                case 0x5:
                {
// switch_1F08_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1F80
                }
            }
        }
        case 0x65:
        {
// switch_2320_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_20C0
                case default:
                {
// switch_20C0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_2138
// lab_2138
                    OP_JUMP lab_2368
                }
                case 0x0:
                {
// switch_20C0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_2138
                }
                case 0x1:
                {
// switch_20C0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_2138
                }
                case 0x2:
                {
// switch_20C0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_2138
                }
                case 0x3:
                {
// switch_20C0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_2138
                }
                case 0x4:
                {
// switch_20C0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_2138
                }
                case 0x5:
                {
// switch_20C0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_2138
                }
            }
        }
        case 0x66:
        {
// switch_2320_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_2278
                case default:
                {
// switch_2278_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_22F0
// lab_22F0
                    OP_JUMP lab_2368
                }
                case 0x0:
                {
// switch_2278_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_22F0
                }
                case 0x1:
                {
// switch_2278_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_22F0
                }
                case 0x2:
                {
// switch_2278_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_22F0
                }
                case 0x3:
                {
// switch_2278_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_22F0
                }
                case 0x4:
                {
// switch_2278_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_22F0
                }
                case 0x5:
                {
// switch_2278_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_22F0
                }
            }
        }
    }
}
// fun_2428
fun_2428() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1D08(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2490
fun_2490() {
    pri = 3104;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 3184;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0BC0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2538
    pri = 1;
    return pri;
// lab_2538
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2580
fun_2580() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_25D0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2490(var_8)
    arg_2 = pri;
// lab_25D0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1D08(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
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
    pri = fun_2428(var_32, var_24, var_16, var_8)
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
    var_32 = 3232;
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
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_28E0()
    return pri;
}
// fun_28E0
fun_28E0() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2920
fun_2920() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_2958
fun_2958() {
    OP_JUMP lab_2970
// lab_2970
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_29B8
    OP_JUMP lab_29E8
    OP_JUMP lab_29D8
// lab_29B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_29E8
    pri = 0;
    return pri;
// lab_29D8
    OP_JUMP lab_2970
}
// fun_29F8
fun_29F8() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2A28
fun_2A28() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2A78
fun_2A78() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2AC8
fun_2AC8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2B18
fun_2B18() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2B68
fun_2B68() {
    OP_JUMP lab_2B80
// lab_2B80
    pri = EvCameraMoveWait_()
    OP_JZER lab_2BB8
    pri = 0;
    return pri;
// lab_2BB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2B80
    pri = 0;
    return pri;
}
// fun_2BF8
fun_2BF8() {
    var_8 = arg_3;
    var_16 = 1;
    var_24 = -1;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 0;
    pri = StartBlur_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2D60()
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
// fun_2CC8
fun_2CC8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = -1;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 0;
    pri = StartBlur_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2D60()
    pri = EndBlur_()
    pri = 0;
    return pri;
}
// fun_2D60
fun_2D60() {
    OP_JUMP lab_2D78
// lab_2D78
    pri = IsEasingRunningBlur_()
    OP_JZER lab_2DD0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2DE0
// lab_2DD0
    pri = 0;
    return pri;
// lab_2DE0
    OP_JUMP lab_2D78
    pri = 0;
    return pri;
}
// fun_2E00
fun_2E00() {
    pri = arg_6;
    OP_JNZ lab_2E38
    var_8 = 0;
    pri = fun_11F8()
// lab_2E38
    pri = arg_1;
    switch (pri) {
// switch_43A0
        case default:
        {
// switch_43A0_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_46F0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_46F0
            pri = 1;
            OP_JUMP lab_46F8
// lab_46F0
            pri = 0;
// lab_46F8
            OP_JZER lab_4850
            var_16 = 11080;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0BC0(var_24, var_16)
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
            var_64 = 11184;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_48B0
// lab_4850
            var_8 = 64;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
// lab_48B0
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4910
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4970
// lab_4910
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4970
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4970
            pri = arg_2;
            OP_JZER lab_49B0
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_49B0
            var_8 = 0;
            pri = fun_1238()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_43A0_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43A0_case_default
        }
        case 0x1:
        {
// switch_43A0_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43A0_case_default
        }
        case 0x2:
        {
// switch_43A0_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43A0_case_default
        }
        case 0x3:
        {
// switch_43A0_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43A0_case_default
        }
        case 0x4:
        {
// switch_43A0_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43A0_case_default
        }
        case 0x5:
        {
// switch_43A0_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8368;
            var_72 = 8360;
            var_80 = 8352;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43A0_case_default
        }
        case 0x6:
        {
// switch_43A0_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8392;
            var_72 = 8384;
            var_80 = 8376;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43A0_case_default
        }
        case 0x7:
        {
// switch_43A0_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8416;
            var_72 = 8408;
            var_80 = 8400;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43A0_case_default
        }
        case 0x8:
        {
// switch_43A0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43A0_case_default
        }
        case 0x9:
        {
// switch_43A0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8440;
            var_72 = 8432;
            var_80 = 8424;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43A0_case_default
        }
        case 0xa:
        {
// switch_43A0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8464;
            var_72 = 8456;
            var_80 = 8448;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43A0_case_default
        }
        case 0xb:
        {
// switch_43A0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8488;
            var_72 = 8480;
            var_80 = 8472;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43A0_case_default
        }
        case 0xc:
        {
// switch_43A0_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8512;
            var_72 = 8504;
            var_80 = 8496;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43A0_case_default
        }
        case 0xd:
        {
// switch_43A0_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8536;
            var_72 = 8528;
            var_80 = 8520;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43A0_case_default
        }
        case 0xe:
        {
// switch_43A0_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8560;
            var_72 = 8552;
            var_80 = 8544;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43A0_case_default
        }
        case 0xf:
        {
// switch_43A0_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43A0_case_default
        }
        case 0x10:
        {
// switch_43A0_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43A0_case_default
        }
        case 0x11:
        {
// switch_43A0_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8584;
            var_72 = 8576;
            var_80 = 8568;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43A0_case_default
        }
        case 0x12:
        {
// switch_43A0_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8608;
            var_72 = 8600;
            var_80 = 8592;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43A0_case_default
        }
        case 0x13:
        {
// switch_43A0_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43A0_case_default
        }
        case 0x14:
        {
// switch_43A0_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43A0_case_default
        }
        case 0x15:
        {
// switch_43A0_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43A0_case_default
        }
        case 0x16:
        {
// switch_43A0_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43A0_case_default
        }
        case 0x17:
        {
// switch_43A0_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43A0_case_default
        }
        case 0x18:
        {
// switch_43A0_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43A0_case_default
        }
        case 0x19:
        {
// switch_43A0_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8632;
            var_72 = 8624;
            var_80 = 8616;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43A0_case_default
        }
        case 0x1a:
        {
// switch_43A0_case_0x1a
            var_8 = 1;
            var_16 = 8640;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B80(var_24, var_16, var_8)
            var_40 = 8776;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B48(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 8856;
            var_88 = 8848;
            var_96 = 8840;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0F58(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_43A0_case_default
        }
        case 0x1b:
        {
// switch_43A0_case_0x1b
            var_8 = 3;
            var_16 = 8864;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B80(var_24, var_16, var_8)
            var_40 = 9000;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B48(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 9080;
            var_88 = 9072;
            var_96 = 9064;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0F58(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_43A0_case_default
        }
        case 0x1c:
        {
// switch_43A0_case_0x1c
            var_8 = 2;
            var_16 = 9088;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B80(var_24, var_16, var_8)
            var_40 = 9224;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B48(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 9304;
            var_88 = 9296;
            var_96 = 9288;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0F58(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_43A0_case_default
        }
        case 0x1d:
        {
// switch_43A0_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9312;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43A0_case_default
        }
        case 0x1e:
        {
// switch_43A0_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9448;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43A0_case_default
        }
        case 0x1f:
        {
// switch_43A0_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9584;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43A0_case_default
        }
        case 0x20:
        {
// switch_43A0_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9720;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43A0_case_default
        }
        case 0x21:
        {
// switch_43A0_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9840;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43A0_case_default
        }
        case 0x22:
        {
// switch_43A0_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9960;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43A0_case_default
        }
        case 0x23:
        {
// switch_43A0_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10096;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43A0_case_default
        }
        case 0x24:
        {
// switch_43A0_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10232;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43A0_case_default
        }
        case 0x25:
        {
// switch_43A0_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10368;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43A0_case_default
        }
        case 0x26:
        {
// switch_43A0_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10504;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43A0_case_default
        }
        case 0x27:
        {
// switch_43A0_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10648;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43A0_case_default
        }
        case 0x28:
        {
// switch_43A0_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10792;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43A0_case_default
        }
        case 0x29:
        {
// switch_43A0_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10936;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43A0_case_default
        }
    }
}
// fun_49E0
fun_49E0() {
    pri = arg_5;
    OP_JNZ lab_4A18
    var_8 = 0;
    pri = fun_11F8()
// lab_4A18
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4A68
    OP_CONST_S -8, -1
// lab_4A68
    pri = arg_1;
    switch (pri) {
// switch_6520
        case default:
        {
// switch_6520_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_69C8
            var_520 = 30944;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0BC0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_69C8
            pri = 1;
            OP_JUMP lab_69D0
// lab_69C8
            pri = 0;
// lab_69D0
            OP_JZER lab_6A20
            var_8 = 64;
            var_16 = 31040;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_6C78
// lab_6A20
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6A88
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6A88
            pri = 1;
            OP_JUMP lab_6A90
// lab_6A88
            pri = 0;
// lab_6A90
            OP_JZER lab_6C18
            var_16 = 31216;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0BC0(var_24, var_16)
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
            var_176 = 31320;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 31336;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 11200;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_6C78
// lab_6C18
            var_8 = 64;
            alt = 11200;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
// lab_6C78
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6CE8
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6CE8
            var_8 = 0;
            pri = fun_1238()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6520_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x1:
        {
// switch_6520_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x2:
        {
// switch_6520_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x3:
        {
// switch_6520_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x4:
        {
// switch_6520_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x5:
        {
// switch_6520_case_0x5
            var_8 = 2;
            var_16 = 21200;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B80(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0F20(var_40)
            OP_JUMP switch_6520_case_default
        }
        case 0x6:
        {
// switch_6520_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x7:
        {
// switch_6520_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x8:
        {
// switch_6520_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x9:
        {
// switch_6520_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0xa:
        {
// switch_6520_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0xb:
        {
// switch_6520_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0xc:
        {
// switch_6520_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0xd:
        {
// switch_6520_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21848;
            var_72 = 21672;
            var_80 = 21488;
            var_88 = 21296;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6520_case_default
        }
        case 0xe:
        {
// switch_6520_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22504;
            var_72 = 22296;
            var_80 = 22080;
            var_88 = 21856;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6520_case_default
        }
        case 0xf:
        {
// switch_6520_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22896;
            var_72 = 22776;
            var_80 = 22648;
            var_88 = 22512;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6520_case_default
        }
        case 0x10:
        {
// switch_6520_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23240;
            var_72 = 23136;
            var_80 = 23024;
            var_88 = 22904;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6520_case_default
        }
        case 0x11:
        {
// switch_6520_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23584;
            var_72 = 23480;
            var_80 = 23368;
            var_88 = 23248;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6520_case_default
        }
        case 0x12:
        {
// switch_6520_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x13:
        {
// switch_6520_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x14:
        {
// switch_6520_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24144;
            var_72 = 23968;
            var_80 = 23784;
            var_88 = 23592;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6520_case_default
        }
        case 0x15:
        {
// switch_6520_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x16:
        {
// switch_6520_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x17:
        {
// switch_6520_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x18:
        {
// switch_6520_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x19:
        {
// switch_6520_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x1a:
        {
// switch_6520_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x1b:
        {
// switch_6520_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x1c:
        {
// switch_6520_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 24536;
            var_72 = 24416;
            var_80 = 24288;
            var_88 = 24152;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6520_case_default
        }
        case 0x1d:
        {
// switch_6520_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x1e:
        {
// switch_6520_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 25000;
            var_72 = 24856;
            var_80 = 24704;
            var_88 = 24544;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6520_case_default
        }
        case 0x1f:
        {
// switch_6520_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x20:
        {
// switch_6520_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x21:
        {
// switch_6520_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x22:
        {
// switch_6520_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x23:
        {
// switch_6520_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x24:
        {
// switch_6520_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25368;
            var_72 = 25256;
            var_80 = 25136;
            var_88 = 25008;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6520_case_default
        }
        case 0x25:
        {
// switch_6520_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25736;
            var_72 = 25624;
            var_80 = 25504;
            var_88 = 25376;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6520_case_default
        }
        case 0x26:
        {
// switch_6520_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x27:
        {
// switch_6520_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x28:
        {
// switch_6520_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x29:
        {
// switch_6520_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26176;
            var_72 = 26040;
            var_80 = 25896;
            var_88 = 25744;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6520_case_default
        }
        case 0x2a:
        {
// switch_6520_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26568;
            var_72 = 26448;
            var_80 = 26320;
            var_88 = 26184;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6520_case_default
        }
        case 0x2b:
        {
// switch_6520_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26984;
            var_72 = 26856;
            var_80 = 26720;
            var_88 = 26576;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6520_case_default
        }
        case 0x2c:
        {
// switch_6520_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27424;
            var_72 = 27288;
            var_80 = 27144;
            var_88 = 26992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6520_case_default
        }
        case 0x2d:
        {
// switch_6520_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x2e:
        {
// switch_6520_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27744;
            var_72 = 27648;
            var_80 = 27544;
            var_88 = 27432;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6520_case_default
        }
        case 0x2f:
        {
// switch_6520_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28136;
            var_72 = 28016;
            var_80 = 27888;
            var_88 = 27752;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6520_case_default
        }
        case 0x30:
        {
// switch_6520_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28528;
            var_72 = 28408;
            var_80 = 28280;
            var_88 = 28144;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6520_case_default
        }
        case 0x31:
        {
// switch_6520_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x32:
        {
// switch_6520_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x33:
        {
// switch_6520_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28920;
            var_72 = 28800;
            var_80 = 28672;
            var_88 = 28536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6520_case_default
        }
        case 0x34:
        {
// switch_6520_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 29288;
            var_72 = 29176;
            var_80 = 29056;
            var_88 = 28928;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6520_case_default
        }
        case 0x35:
        {
// switch_6520_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 29776;
            var_72 = 29624;
            var_80 = 29464;
            var_88 = 29296;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6520_case_default
        }
        case 0x36:
        {
// switch_6520_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 30144;
            var_72 = 30032;
            var_80 = 29912;
            var_88 = 29784;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6520_case_default
        }
        case 0x37:
        {
// switch_6520_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x38:
        {
// switch_6520_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 30512;
            var_72 = 30400;
            var_80 = 30280;
            var_88 = 30152;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6520_case_default
        }
        case 0x39:
        {
// switch_6520_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x3a:
        {
// switch_6520_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x3b:
        {
// switch_6520_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x3c:
        {
// switch_6520_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 30520;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x3d:
        {
// switch_6520_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 30696;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
        case 0x3e:
        {
// switch_6520_case_0x3e
            var_8 = 4;
            var_16 = 30840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B80(var_24, var_16, var_8)
            OP_JUMP switch_6520_case_default
        }
    }
}
// fun_6D18
fun_6D18() {
    pri = arg_4;
    OP_JNZ lab_6D50
    var_8 = 0;
    pri = fun_11F8()
// lab_6D50
    pri = arg_1;
    switch (pri) {
// switch_8128
        case default:
        {
// switch_8128_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 31912;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1C78(var_264)
            OP_JZER lab_86F0
            pri = arg_3;
            switch (pri) {
// switch_8698
                case default:
                {
// switch_8698_case_default
                    OP_JUMP lab_89A8
// lab_89A8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8A18
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8A18
                    var_8 = 0;
                    pri = fun_1238()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_8698_case_0x1
                    var_8 = 32;
                    var_16 = 32064;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_8698_case_default
                }
                case 0x2:
                {
// switch_8698_case_0x2
                    var_8 = 32;
                    var_16 = 32168;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_8698_case_default
                }
                case 0x3:
                {
// switch_8698_case_0x3
                    var_8 = 32;
                    var_16 = 31968;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_8698_case_default
                }
            }
// lab_86F0
            pri = arg_1;
            OP_JZER lab_8740
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_8740
            pri = 0;
            OP_JUMP lab_8748
// lab_8740
            pri = 1;
// lab_8748
            OP_JZER lab_87B0
            var_8 = 32264;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0BC0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_87B0
            pri = 1;
            OP_JUMP lab_87B8
// lab_87B0
            pri = 0;
// lab_87B8
            OP_JZER lab_8808
            var_8 = 32;
            var_16 = 32360;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_89A8
// lab_8808
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8870
            var_8 = 32;
            var_16 = 32520;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_89A8
// lab_8870
            var_16 = 32640;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0BC0(var_24, var_16)
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
            var_176 = 32744;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 32760;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_8128_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x1:
        {
// switch_8128_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x2:
        {
// switch_8128_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x3:
        {
// switch_8128_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x4:
        {
// switch_8128_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x5:
        {
// switch_8128_case_0x5
            var_8 = 1;
            var_16 = 31392;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B80(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0F20(var_40)
            OP_JUMP switch_8128_case_default
        }
        case 0x6:
        {
// switch_8128_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x7:
        {
// switch_8128_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x8:
        {
// switch_8128_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x9:
        {
// switch_8128_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0xa:
        {
// switch_8128_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0xb:
        {
// switch_8128_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0xc:
        {
// switch_8128_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0xd:
        {
// switch_8128_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0xe:
        {
// switch_8128_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0xf:
        {
// switch_8128_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x10:
        {
// switch_8128_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x11:
        {
// switch_8128_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x12:
        {
// switch_8128_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x13:
        {
// switch_8128_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x14:
        {
// switch_8128_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x15:
        {
// switch_8128_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x16:
        {
// switch_8128_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x17:
        {
// switch_8128_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x18:
        {
// switch_8128_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x19:
        {
// switch_8128_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x1a:
        {
// switch_8128_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x1b:
        {
// switch_8128_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x1c:
        {
// switch_8128_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x1d:
        {
// switch_8128_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x1e:
        {
// switch_8128_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x1f:
        {
// switch_8128_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x20:
        {
// switch_8128_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x21:
        {
// switch_8128_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x22:
        {
// switch_8128_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x23:
        {
// switch_8128_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x24:
        {
// switch_8128_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x25:
        {
// switch_8128_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x26:
        {
// switch_8128_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x27:
        {
// switch_8128_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x28:
        {
// switch_8128_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x29:
        {
// switch_8128_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x2a:
        {
// switch_8128_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x2b:
        {
// switch_8128_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x2c:
        {
// switch_8128_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x2d:
        {
// switch_8128_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x2e:
        {
// switch_8128_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x2f:
        {
// switch_8128_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x30:
        {
// switch_8128_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x31:
        {
// switch_8128_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x32:
        {
// switch_8128_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x33:
        {
// switch_8128_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x34:
        {
// switch_8128_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x35:
        {
// switch_8128_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x36:
        {
// switch_8128_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x37:
        {
// switch_8128_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x38:
        {
// switch_8128_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x39:
        {
// switch_8128_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x3a:
        {
// switch_8128_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x3b:
        {
// switch_8128_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x3c:
        {
// switch_8128_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31488;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x3d:
        {
// switch_8128_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31664;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
        case 0x3e:
        {
// switch_8128_case_0x3e
            var_8 = 3;
            var_16 = 31808;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B80(var_24, var_16, var_8)
            OP_JUMP switch_8128_case_default
        }
    }
}
// fun_8A48
fun_8A48() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_8B48
        case default:
        {
// switch_8B48_case_default
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
// switch_8B48_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_8B48_case_default
        }
        case 0x1:
        {
// switch_8B48_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_8B48_case_default
        }
        case 0x2:
        {
// switch_8B48_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_8B48_case_default
        }
        case 0x3:
        {
// switch_8B48_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_8B48_case_default
        }
    }
}
// fun_8C08
fun_8C08() {
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
    pri = fun_2580(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_26E0()
    pri = 0;
    return pri;
}
// fun_8CA0
fun_8CA0() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8A48(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_8C08(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_8D48
fun_8D48() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_8D98
// lab_8D98
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 32808;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_8E10
    OP_JUMP lab_8E40
// lab_8E10
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_8D98
// lab_8E40
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_8EC8
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_6D18(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1CD8(var_56)
// lab_8EC8
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_8F30
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_17A0(var_24, var_16)
// lab_8F30
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_17A0(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_8FF0
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0BF8(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0978(var_88, var_80, var_72, var_64, var_56)
// lab_8FF0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_9030
    pri = 0;
    return pri;
// lab_9030
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9178
    var_16 = 1;
    var_24 = 8;
    pri = fun_0090(var_16)
    var_32 = 32928;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0B48(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_9140
    var_72 = 12;
    var_80 = 8;
    pri = fun_0090(var_72)
// lab_9178
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A20(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0A20(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0BF8(var_40)
    pri = 0;
    return pri;
// lab_9140
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_17A0(var_16, var_8)
}
// fun_9200
fun_9200() {
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
    pri = fun_8CA0(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_2778(var_112)
    var_128 = 0;
    pri = fun_2838()
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
    pri = fun_8D48(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_9378
fun_9378() {
    var_8 = 1;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    var_32 = arg_2;
    var_40 = 8802641224559852288;
    var_48 = arg_0;
    pri = EasyTalkPokemon(var_48, var_40, var_32)
    var_64 = 1;
    var_72 = 0;
    var_80 = arg_0;
    pri = SoundPlayPokeVoiceFromObject(var_80, var_72, var_64)
    var_8 = pri;
    var_88 = var_8;
    var_96 = 7;
    pri = TempWorkSet(var_96, var_88)
    var_104 = 30;
    var_112 = 33064;
    var_120 = 8802641224559852288;
    pri = AddParallelWaitStandard(var_120, var_112, var_104)
    pri = 0;
    return pri;
}
// fun_94A0
fun_94A0() {
    pri = arg_1;
    OP_JZER lab_9540
    var_8 = 0;
    var_16 = arg_6;
    pri = arg_5;
    alt = 2;
    pri |= alt;
    var_24 = pri;
    var_32 = arg_4;
    var_40 = 0;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_2580(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_26E0()
// lab_9540
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_9378(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9580
fun_9580() {
    var_16 = 7;
    pri = TempWorkGet(var_16)
    var_8 = pri;
    var_24 = var_8;
    var_32 = 8;
    pri = fun_0438(var_24)
    OP_JUMP lab_95E8
// lab_95E8
    var_8 = 33280;
    var_16 = 8802641224559852288;
    pri = FindParallelWait(var_16, var_8)
    OP_JNZ lab_9638
    OP_JUMP lab_9668
// lab_9638
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_95E8
// lab_9668
    OP_JUMP lab_9678
// lab_9678
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 33496;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_96F0
    OP_JUMP lab_9720
// lab_96F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_9678
// lab_9720
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = arg_0;
    pri = EasyTalkTerminate(var_16)
    var_24 = 15;
    pri = TempWorkGet(var_24)
    alt = 1;
    OP_JEQ lab_97D0
    var_32 = -1;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_17A0(var_40, var_32)
// lab_97D0
    OP_ZERO_P_S -16
    OP_JUMP lab_97F0
// lab_97F0
    var_8 = arg_0;
    pri = IsEasyTalkRunning(var_8)
    OP_JNZ lab_9830
    OP_JUMP lab_9878
// lab_9830
    pri = var_16;
    OP_EQ_P_C_PRI 300
    OP_JZER lab_9860
    OP_JUMP lab_9878
// lab_9860
    OP_INC_P_S -16
    OP_JUMP lab_97F0
// lab_9878
    OP_CONST_S -24, 4
    pri = arg_1;
    OP_JZER lab_98F8
    var_16 = arg_0;
    var_24 = 8;
    pri = fun_06F8(var_16)
    OP_JZER lab_98F8
    pri = 1;
    OP_JUMP lab_9900
// lab_98F8
    pri = 0;
// lab_9900
    OP_JZER lab_9970
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0A20(var_8)
    var_24 = 0;
    var_32 = 0;
    var_40 = var_24;
    var_48 = arg_2;
    var_56 = arg_0;
    var_64 = 40;
    pri = fun_0978(var_56, var_48, var_40, var_32, var_24)
// lab_9970
    pri = IsPlayerRideBicycle()
    OP_JZER lab_99B0
    pri = 0;
    return pri;
// lab_99B0
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9AE0
    var_16 = 1;
    var_24 = 8;
    pri = fun_0090(var_16)
    var_32 = 33616;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0B48(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_32 = pri;
    pri = var_32;
    alt = 23;
    OP_JSLESS lab_9AA8
    var_72 = 12;
    var_80 = 8;
    pri = fun_0090(var_72)
// lab_9AE0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A20(var_8)
    var_24 = 8802641224559852288;
    var_32 = 8;
    pri = fun_0BF8(var_24)
    pri = 0;
    return pri;
// lab_9AA8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_17A0(var_16, var_8)
}
// fun_9B48
fun_9B48() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = arg_6;
    var_24 = arg_5;
    var_32 = arg_4;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = var_8;
    var_72 = 56;
    pri = fun_94A0(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = arg_0;
    OP_JZER lab_9C18
    var_80 = 1;
    var_88 = 8;
    pri = fun_2778(var_80)
    var_96 = 0;
    pri = fun_2838()
// lab_9C18
    var_16 = 13;
    pri = TempWorkGet(var_16)
    var_24 = pri;
    pri = float(var_24)
    var_16 = pri;
    var_32 = var_16;
    pri = float(var_32)
    var_40 = pri;
    var_48 = arg_3;
    var_56 = var_8;
    var_64 = 24;
    pri = fun_9580(var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_9CD0
fun_9CD0() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_9D68
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0BF8(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_2E00(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_9D68
    var_8 = 8;
    var_16 = 8;
    pri = fun_0090(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_9EC0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_9E28
    var_24 = 33752;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_9E28
    pri = 1;
    OP_JUMP lab_9E30
// lab_9EC0
    pri = 0;
    return pri;
// lab_9E28
    pri = 0;
// lab_9E30
    OP_JZER lab_9EC0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BF8(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_2E00(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_9ED0
fun_9ED0() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_9CD0(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_9F58(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_9F58
fun_9F58() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_A0F0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9FC0
fun_9FC0() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_A030
    OP_CONST_S -8, 1
// lab_A030
    pri = arg_0;
    OP_JNZ lab_A050
    OP_ZERO_P_S -8
// lab_A050
    pri = var_8;
    OP_JZER lab_A0D8
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0090(var_16)
    var_32 = 0;
    pri = fun_0168()
    pri = ItemCloseDescWindow()
// lab_A0D8
    pri = 0;
    return pri;
}
// fun_A0F0
fun_A0F0() {
    var_8 = 33856;
    var_16 = 8;
    pri = fun_2920(var_8)
    var_24 = 0;
    pri = fun_2958()
    pri = arg_3;
    OP_JNZ lab_A210
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_A1D8
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_A280(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_A200
// lab_A210
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_A420(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_A1D8
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_A348(var_16, var_8)
// lab_A200
    OP_JUMP lab_A258
// lab_A258
    var_8 = 0;
    pri = fun_29F8()
    pri = 0;
    return pri;
}
// fun_A280
fun_A280() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_A420(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_A330
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_A330
    pri = 0;
    return pri;
}
// fun_A348
fun_A348() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_2A78(var_24, var_16, var_8)
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
    pri = fun_2A28(var_96)
    pri = 0;
    return pri;
}
// fun_A420
fun_A420() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_A468
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_A728(var_8)
// lab_A468
    pri = arg_4;
    OP_JNZ lab_A4D0
    var_8 = 0;
    var_16 = 8;
    pri = fun_2A28(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2A78(var_40, var_32, var_24)
// lab_A4D0
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_A570
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_2AC8(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_2680(var_56, var_48, var_40)
    OP_JUMP lab_A660
// lab_A570
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_A628
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_A628
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_A628
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_2680(var_24, var_16, var_8)
// lab_A660
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_A6A0
    var_8 = 0;
    var_16 = 8;
    pri = fun_0438(var_8)
// lab_A6A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_2778(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_A930(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_9FC0(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_A728
fun_A728() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_A788
    var_16 = 34016;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_A788
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_A8C8
        case default:
        {
// switch_A8C8_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_A8B8
            var_16 = 34560;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_A8B8
            OP_JUMP lab_A900
// lab_A900
            var_8 = 34776;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_A8C8_case_0x1
            var_8 = 34232;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_A900
        }
        case 0x2:
        {
// switch_A8C8_case_0x2
            var_8 = 34360;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_A900
        }
    }
}
// fun_A930
fun_A930() {
    pri = arg_2;
    OP_JNZ lab_AA18
    var_8 = 0;
    var_16 = 8;
    pri = fun_2A28(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2A78(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_2B18(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_AA18
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
// fun_AA90
fun_AA90() {
    pri = g_mode;
    switch (pri) {
// switch_ABF0
        case default:
        {
// switch_ABF0_case_default
            pri = CommandNOP()
            OP_JUMP lab_AC78
// lab_AC78
            pri = 0;
            return pri;
        }
        case 0x83f552f5a085bf06:
        {
// switch_ABF0_case_0x83f552f5a085bf06
            var_8 = 0;
            pri = fun_C198()
            OP_JUMP lab_AC78
        }
        case 0xbeedc2b89015087a:
        {
// switch_ABF0_case_0xbeedc2b89015087a
            var_8 = 0;
            pri = fun_ACA0()
            OP_JUMP lab_AC78
        }
        case 0x0:
        {
// switch_ABF0_case_0x0
            var_8 = 0;
            pri = fun_AC88()
            OP_JUMP lab_AC78
        }
        case 0x27a77d68b87ca0f:
        {
// switch_ABF0_case_0x27a77d68b87ca0f
            var_8 = 0;
            pri = fun_B2C8()
            OP_JUMP lab_AC78
        }
        case 0xb462c0c66ca9dbc:
        {
// switch_ABF0_case_0xb462c0c66ca9dbc
            var_8 = 0;
            pri = fun_BFC8()
            OP_JUMP lab_AC78
        }
        case 0x2d86469a6a6de8c6:
        {
// switch_ABF0_case_0x2d86469a6a6de8c6
            var_8 = 0;
            pri = fun_B8C0()
            OP_JUMP lab_AC78
        }
        case 0x2f86edff46b1e2e8:
        {
// switch_ABF0_case_0x2f86edff46b1e2e8
            var_8 = 0;
            pri = fun_ACD0()
            OP_JUMP lab_AC78
        }
    }
}
// fun_AC88
fun_AC88() {
    pri = 0;
    return pri;
}
// fun_ACA0
fun_ACA0() {
    var_8 = 0;
    pri = fun_C570()
    pri = 0;
    return pri;
}
// fun_ACD0
fun_ACD0() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1176446404928635718;
    pri = WorkGet(var_16)
    switch (pri) {
// switch_B258
        case default:
        {
// switch_B258_case_default
            pri = 0;
            return pri;
        }
        case 0x1:
        {
// switch_B258_case_0x1
            var_8 = 1;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            var_48 = 0;
            var_56 = 0;
            var_64 = 1;
            var_72 = 1;
            var_80 = 3313591607693686472;
            var_88 = 80;
            pri = fun_9200(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_B258_case_default
        }
        case 0x2:
        {
// switch_B258_case_0x3
            var_8 = 1;
            var_16 = 1;
            var_24 = 0;
            var_32 = 1;
            var_40 = 1;
            var_48 = var_8;
            var_56 = 48;
            pri = fun_8A48(var_48, var_40, var_32, var_24, var_16, var_8)
            var_64 = -6121430503457951112;
            pri = FlagGet(var_64)
            OP_JNZ lab_AED8
            var_72 = 0;
            var_80 = 3;
            var_88 = 0;
            var_96 = 100;
            var_104 = -1;
            OP_PUSH2_C 3313594906228571105, -6167426358827044554
            var_112 = 56;
            pri = fun_2580(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
            var_120 = 1;
            var_128 = 8;
            pri = fun_2778(var_120)
            var_136 = -6121430503457951112;
            pri = FlagSet(var_136)
// lab_AED8
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C 3313593806716942894, -6167426358827044554
            var_48 = 56;
            pri = fun_2580(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
            var_56 = 1;
            var_64 = 8;
            pri = fun_2778(var_56)
            var_72 = 0;
            pri = fun_2838()
            var_80 = 0;
            var_88 = 0;
            var_96 = 0;
            var_104 = var_8;
            var_112 = 32;
            pri = fun_8D48(var_104, var_96, var_88, var_80)
            var_120 = 0;
            pri = fun_E790()
            OP_JUMP switch_B258_case_default
        }
        case 0x3:
        {
// switch_B258_case_0x3
            var_8 = 1;
            var_16 = 1;
            var_24 = 0;
            var_32 = 1;
            var_40 = 1;
            var_48 = var_8;
            var_56 = 48;
            pri = fun_8A48(var_48, var_40, var_32, var_24, var_16, var_8)
            var_64 = -6121430503457951112;
            pri = FlagGet(var_64)
            OP_JNZ lab_AED8
            var_72 = 0;
            var_80 = 3;
            var_88 = 0;
            var_96 = 100;
            var_104 = -1;
            OP_PUSH2_C 3313594906228571105, -6167426358827044554
            var_112 = 56;
            pri = fun_2580(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
            var_120 = 1;
            var_128 = 8;
            pri = fun_2778(var_120)
            var_136 = -6121430503457951112;
            pri = FlagSet(var_136)
        }
        case 0x4:
        {
// switch_B258_case_0x4
            var_8 = 1;
            var_16 = 1;
            var_24 = 0;
            var_32 = 1;
            var_40 = 1;
            var_48 = var_8;
            var_56 = 48;
            pri = fun_8A48(var_48, var_40, var_32, var_24, var_16, var_8)
            var_64 = 0;
            var_72 = 3;
            var_80 = 0;
            var_88 = 100;
            var_96 = -1;
            OP_PUSH2_C 3313598204763455738, -6167426358827044554
            var_104 = 56;
            pri = fun_2580(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            var_112 = 1;
            var_120 = 8;
            pri = fun_2778(var_112)
            var_136 = 0;
            var_144 = 0;
            var_152 = 1;
            var_160 = 0;
            var_168 = 0;
            var_176 = 0;
            var_184 = 48;
            pri = fun_2868(var_176, var_168, var_160, var_152, var_144, var_136)
            var_16 = pri;
            var_192 = 0;
            pri = fun_2838()
            pri = var_16;
            OP_JZER lab_B178
            var_200 = 0;
            var_208 = 3;
            var_216 = 0;
            var_224 = 100;
            var_232 = -1;
            OP_PUSH2_C 3313583911112288995, -6167426358827044554
            var_240 = 56;
            pri = fun_2580(var_232, var_224, var_216, var_208, var_200, var_192, var_184)
            OP_JUMP lab_B1D0
// lab_B178
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C 3313582811600660784, -6167426358827044554
            var_48 = 56;
            pri = fun_2580(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
// lab_B1D0
            var_8 = 1;
            var_16 = 8;
            pri = fun_2778(var_8)
            var_24 = 0;
            pri = fun_2838()
            var_32 = 0;
            var_40 = 0;
            var_48 = 0;
            var_56 = var_8;
            var_64 = 32;
            pri = fun_8D48(var_56, var_48, var_40, var_32)
            OP_JUMP switch_B258_case_default
        }
    }
}
// fun_B2C8
fun_B2C8() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1176446404928635718;
    pri = WorkGet(var_16)
    switch (pri) {
// switch_B850
        case default:
        {
// switch_B850_case_default
            pri = 0;
            return pri;
        }
        case 0x1:
        {
// switch_B850_case_0x1
            var_8 = 1;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            var_48 = 0;
            var_56 = 0;
            var_64 = 1;
            var_72 = 1;
            var_80 = -8498148033456164050;
            var_88 = 80;
            pri = fun_9200(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_B850_case_default
        }
        case 0x2:
        {
// switch_B850_case_0x3
            var_8 = 1;
            var_16 = 1;
            var_24 = 0;
            var_32 = 1;
            var_40 = 1;
            var_48 = var_8;
            var_56 = 48;
            pri = fun_8A48(var_48, var_40, var_32, var_24, var_16, var_8)
            var_64 = -1940649984164138647;
            pri = FlagGet(var_64)
            OP_JNZ lab_B4D0
            var_72 = 0;
            var_80 = 3;
            var_88 = 0;
            var_96 = 100;
            var_104 = -1;
            OP_PUSH2_C -8498149132967792261, -7223751291454886954
            var_112 = 56;
            pri = fun_2580(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
            var_120 = 1;
            var_128 = 8;
            pri = fun_2778(var_120)
            var_136 = -1940649984164138647;
            pri = FlagSet(var_136)
// lab_B4D0
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C -8498150232479420472, -7223751291454886954
            var_48 = 56;
            pri = fun_2580(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
            var_56 = 1;
            var_64 = 8;
            pri = fun_2778(var_56)
            var_72 = 0;
            pri = fun_2838()
            var_80 = 0;
            var_88 = 0;
            var_96 = 0;
            var_104 = var_8;
            var_112 = 32;
            pri = fun_8D48(var_104, var_96, var_88, var_80)
            var_120 = 0;
            pri = fun_E790()
            OP_JUMP switch_B850_case_default
        }
        case 0x3:
        {
// switch_B850_case_0x3
            var_8 = 1;
            var_16 = 1;
            var_24 = 0;
            var_32 = 1;
            var_40 = 1;
            var_48 = var_8;
            var_56 = 48;
            pri = fun_8A48(var_48, var_40, var_32, var_24, var_16, var_8)
            var_64 = -1940649984164138647;
            pri = FlagGet(var_64)
            OP_JNZ lab_B4D0
            var_72 = 0;
            var_80 = 3;
            var_88 = 0;
            var_96 = 100;
            var_104 = -1;
            OP_PUSH2_C -8498149132967792261, -7223751291454886954
            var_112 = 56;
            pri = fun_2580(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
            var_120 = 1;
            var_128 = 8;
            pri = fun_2778(var_120)
            var_136 = -1940649984164138647;
            pri = FlagSet(var_136)
        }
        case 0x4:
        {
// switch_B850_case_0x4
            var_8 = 1;
            var_16 = 1;
            var_24 = 0;
            var_32 = 1;
            var_40 = 1;
            var_48 = var_8;
            var_56 = 48;
            pri = fun_8A48(var_48, var_40, var_32, var_24, var_16, var_8)
            var_64 = 0;
            var_72 = 3;
            var_80 = 0;
            var_88 = 100;
            var_96 = -1;
            OP_PUSH2_C -8498142535898022995, -7223751291454886954
            var_104 = 56;
            pri = fun_2580(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            var_112 = 1;
            var_120 = 8;
            pri = fun_2778(var_112)
            var_136 = 0;
            var_144 = 0;
            var_152 = 1;
            var_160 = 0;
            var_168 = 0;
            var_176 = 0;
            var_184 = 48;
            pri = fun_2868(var_176, var_168, var_160, var_152, var_144, var_136)
            var_16 = pri;
            var_192 = 0;
            pri = fun_2838()
            pri = var_16;
            OP_JZER lab_B770
            var_200 = 0;
            var_208 = 3;
            var_216 = 0;
            var_224 = 100;
            var_232 = -1;
            OP_PUSH2_C -8498143635409651206, -7223751291454886954
            var_240 = 56;
            pri = fun_2580(var_232, var_224, var_216, var_208, var_200, var_192, var_184)
            OP_JUMP lab_B7C8
// lab_B770
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C -8498144734921279417, -7223751291454886954
            var_48 = 56;
            pri = fun_2580(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
// lab_B7C8
            var_8 = 1;
            var_16 = 8;
            pri = fun_2778(var_8)
            var_24 = 0;
            pri = fun_2838()
            var_32 = 0;
            var_40 = 0;
            var_48 = 0;
            var_56 = var_8;
            var_64 = 32;
            pri = fun_8D48(var_56, var_48, var_40, var_32)
            OP_JUMP switch_B850_case_default
        }
    }
}
// fun_B8C0
fun_B8C0() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1176446404928635718;
    pri = WorkGet(var_16)
    switch (pri) {
// switch_BF48
        case default:
        {
// switch_BF48_case_default
            pri = 0;
            return pri;
        }
        case 0x1:
        {
// switch_BF48_case_0x1
            var_8 = 1;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            var_48 = 0;
            var_56 = 0;
            var_64 = 1;
            var_72 = 1;
            var_80 = 3496378822495598909;
            var_88 = 80;
            pri = fun_9200(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_BF48_case_default
        }
        case 0x2:
        {
// switch_BF48_case_0x2
            var_8 = 1;
            var_16 = 1;
            var_24 = 0;
            var_32 = 1;
            var_40 = 1;
            var_48 = var_8;
            var_56 = 48;
            pri = fun_8A48(var_48, var_40, var_32, var_24, var_16, var_8)
            var_64 = -268353371814909324;
            pri = FlagGet(var_64)
            OP_JNZ lab_BAC8
            var_72 = 0;
            var_80 = 3;
            var_88 = 0;
            var_96 = 100;
            var_104 = -1;
            OP_PUSH2_C 3496375523960714276, 7594687174951932425
            var_112 = 56;
            pri = fun_2580(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
            var_120 = 1;
            var_128 = 8;
            pri = fun_2778(var_120)
            var_136 = -268353371814909324;
            pri = FlagSet(var_136)
// lab_BAC8
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C 3496376623472342487, 7594687174951932425
            var_48 = 56;
            pri = fun_2580(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
            var_56 = 1;
            var_64 = 8;
            pri = fun_2778(var_56)
            var_72 = 0;
            pri = fun_2838()
            var_80 = 0;
            var_88 = 0;
            var_96 = 0;
            var_104 = var_8;
            var_112 = 32;
            pri = fun_8D48(var_104, var_96, var_88, var_80)
            var_120 = 0;
            pri = fun_E790()
            OP_JUMP switch_BF48_case_default
        }
        case 0x3:
        {
// switch_BF48_case_0x3
            var_8 = 1;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            var_48 = 0;
            var_56 = 0;
            var_64 = 1;
            var_72 = 1;
            var_80 = 3496373324937457854;
            var_88 = 80;
            pri = fun_9200(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_BF48_case_default
        }
        case 0x4:
        {
// switch_BF48_case_0x4
            var_8 = 1;
            var_16 = 1;
            var_24 = 0;
            var_32 = 1;
            var_40 = 1;
            var_48 = var_8;
            var_56 = 48;
            pri = fun_8A48(var_48, var_40, var_32, var_24, var_16, var_8)
            var_64 = 0;
            var_72 = 3;
            var_80 = 0;
            var_88 = 100;
            var_96 = -1;
            OP_PUSH2_C 3496374424449086065, 7594687174951932425
            var_104 = 56;
            pri = fun_2580(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            var_112 = 1;
            var_120 = 8;
            pri = fun_2778(var_112)
            var_136 = 0;
            var_144 = 0;
            var_152 = 1;
            var_160 = 0;
            var_168 = 0;
            var_176 = 0;
            var_184 = 48;
            pri = fun_2868(var_176, var_168, var_160, var_152, var_144, var_136)
            var_16 = pri;
            var_192 = 0;
            pri = fun_2838()
            pri = var_16;
            OP_JZER lab_BDE8
            var_200 = 0;
            var_208 = 3;
            var_216 = 0;
            var_224 = 100;
            var_232 = -1;
            OP_PUSH2_C 3496371125914201432, 7594687174951932425
            var_240 = 56;
            pri = fun_2580(var_232, var_224, var_216, var_208, var_200, var_192, var_184)
            OP_JUMP lab_BE40
// lab_BDE8
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C 3496372225425829643, 7594687174951932425
            var_48 = 56;
            pri = fun_2580(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
// lab_BE40
            var_8 = 1;
            var_16 = 8;
            pri = fun_2778(var_8)
            var_24 = 0;
            pri = fun_2838()
            var_32 = 0;
            var_40 = 0;
            var_48 = 0;
            var_56 = var_8;
            var_64 = 32;
            pri = fun_8D48(var_56, var_48, var_40, var_32)
            OP_JUMP switch_BF48_case_default
        }
        case 0x5:
        {
// switch_BF48_case_0x5
            var_8 = 1;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            var_48 = 0;
            var_56 = 0;
            var_64 = 1;
            var_72 = 1;
            var_80 = 3496370026402573221;
            var_88 = 80;
            pri = fun_9200(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_BF48_case_default
        }
    }
}
// fun_BFC8
fun_BFC8() {
    var_8 = 1176446404928635718;
    pri = WorkGet(var_8)
    switch (pri) {
// switch_C130
        case default:
        {
// switch_C130_case_default
            pri = 0;
            return pri;
        }
        case 0x1:
        {
// switch_C130_case_0x1
            var_8 = 0;
            pri = fun_D370()
            OP_JUMP switch_C130_case_default
        }
        case 0x2:
        {
// switch_C130_case_0x3
            var_8 = 1;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            var_48 = 0;
            var_56 = 0;
            var_64 = 1;
            var_72 = 1;
            var_80 = 5407472988409270121;
            var_88 = 80;
            pri = fun_9200(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_C130_case_default
        }
        case 0x3:
        {
// switch_C130_case_0x3
            var_8 = 1;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            var_48 = 0;
            var_56 = 0;
            var_64 = 1;
            var_72 = 1;
            var_80 = 5407472988409270121;
            var_88 = 80;
            pri = fun_9200(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_C130_case_default
        }
        case 0x4:
        {
// switch_C130_case_0x4
            var_8 = 1;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            var_48 = 0;
            var_56 = 0;
            var_64 = 1;
            var_72 = 1;
            var_80 = 5404530695292745160;
            var_88 = 80;
            pri = fun_9200(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_C130_case_default
        }
    }
}
// fun_C198
fun_C198() {
    var_8 = 1176446404928635718;
    pri = WorkGet(var_8)
    switch (pri) {
// switch_C518
        case default:
        {
// switch_C518_case_default
            pri = 0;
            return pri;
        }
        case 0x3:
        {
// switch_C518_case_0x3
            var_8 = 0;
            pri = fun_F360()
            OP_JUMP switch_C518_case_default
        }
        case 0x4:
        {
// switch_C518_case_0x4
            var_8 = 0;
            var_16 = 4;
            var_24 = 0;
            var_32 = 819;
            pri = SoundPlayPokeVoice(var_32, var_24, var_16, var_8)
            var_40 = 0;
            var_48 = 3;
            var_56 = 0;
            var_64 = 100;
            var_72 = -1;
            OP_PUSH2_C 8075752377289622586, 5750971725145164889
            var_80 = 56;
            pri = fun_2580(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
            var_88 = 1;
            var_96 = 8;
            pri = fun_2778(var_88)
            var_104 = 0;
            pri = fun_2838()
            var_112 = 3;
            var_120 = 0;
            var_128 = -8718167235586940673;
            var_136 = 24;
            pri = fun_2630(var_128, var_120, var_112)
            var_144 = 1;
            var_152 = 8;
            pri = fun_2778(var_144)
            var_168 = 0;
            var_176 = 0;
            var_184 = 1;
            var_192 = 0;
            var_200 = 0;
            var_208 = 0;
            var_216 = 48;
            pri = fun_2868(var_208, var_200, var_192, var_184, var_176, var_168)
            var_8 = pri;
            var_224 = 0;
            pri = fun_2838()
            pri = var_8;
            OP_JZER lab_C3D0
            var_232 = 0;
            pri = fun_11598()
            OP_JUMP lab_C498
// lab_C3D0
            var_8 = 0;
            var_16 = 2;
            var_24 = 0;
            var_32 = 819;
            pri = SoundPlayPokeVoice(var_32, var_24, var_16, var_8)
            var_40 = 0;
            var_48 = 3;
            var_56 = 0;
            var_64 = 100;
            var_72 = -1;
            OP_PUSH2_C 8075746879731481531, 5750971725145164889
            var_80 = 56;
            pri = fun_2580(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
            var_88 = 1;
            var_96 = 8;
            pri = fun_2778(var_88)
            var_104 = 0;
            pri = fun_2838()
// lab_C498
            OP_JUMP switch_C518_case_default
        }
        case 0x5:
        {
// switch_C518_case_0x5
            var_8 = 3;
            var_16 = 0;
            var_24 = 100;
            var_32 = 0;
            var_40 = 1;
            var_48 = 1;
            var_56 = 8075742481684968687;
            var_64 = 56;
            pri = fun_9B48(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_C518_case_default
        }
    }
}
// fun_C570
fun_C570() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    var_24 = -3437401476670310186;
    var_32 = 8;
    pri = fun_0BF8(var_24)
    var_40 = 0;
    var_48 = 4628039714574277018;
    var_56 = 0;
    OP_PUSH5_C 4658052929546050601, 4640361985367227761, 4656991395049897984, 4658864413107814400, 4642977239744590643
    var_64 = 4657105744259186688;
    var_72 = 1;
    pri = EvCameraMove(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0)
    var_80 = 0;
    pri = fun_2B68()
    var_88 = 0;
    var_96 = 4628039714574277018;
    var_104 = 3;
    OP_PUSH5_C 4657897238699557519, 4639860256221241016, 4656969448797807575, 4658708656290623652, 4642479732723254559
    var_112 = 4657083819997328835;
    var_120 = 60;
    pri = EvCameraMove(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48)
    var_128 = 1;
    var_136 = 8802641224559852288;
    var_144 = 16;
    pri = fun_0800(var_136, var_128)
    var_152 = 1;
    var_160 = -3437401476670310186;
    var_168 = 16;
    pri = fun_0800(var_160, var_152)
    var_176 = 1;
    var_184 = -6167426358827044554;
    var_192 = 16;
    pri = fun_0800(var_184, var_176)
    var_200 = 1;
    var_208 = -7223751291454886954;
    var_216 = 16;
    pri = fun_0800(var_208, var_200)
    var_224 = 1;
    var_232 = 7594687174951932425;
    var_240 = 16;
    pri = fun_0800(var_232, var_224)
    var_248 = 1;
    var_256 = 1;
    OP_PUSH4_C -4585403292477030400, 4657485075770769408, 4657205799817314304, -6167426358827044554
    var_264 = 48;
    pri = fun_0750(var_256, var_248, var_240, var_232, var_224, var_216)
    var_272 = 1;
    var_280 = 1;
    OP_PUSH4_C -4585762173072336486, 4657155222282436608, 4657183809584758784, -7223751291454886954
    var_288 = 48;
    pri = fun_0750(var_280, var_272, var_264, var_256, var_248, var_240)
    var_296 = 1;
    var_304 = 1;
    OP_PUSH4_C 4639108718033423565, 4657804154045150003, 4654717385101331661, 8802641224559852288
    var_312 = 48;
    pri = fun_0750(var_304, var_296, var_288, var_280, var_272, var_264)
    var_320 = 2;
    var_328 = 2;
    var_336 = -3437401476670310186;
    var_344 = 24;
    pri = fun_1910(var_336, var_328, var_320)
    var_352 = 34960;
    var_360 = 8;
    var_368 = 16;
    pri = fun_02D8(var_360, var_352)
    var_376 = 0;
    pri = fun_03A8()
    var_384 = 1;
    var_392 = 1;
    var_400 = -1;
    var_408 = -1;
    var_416 = 0;
    var_424 = 55;
    var_432 = -3437401476670310186;
    var_440 = 56;
    pri = fun_49E0(var_432, var_424, var_416, var_408, var_400, var_392, var_384)
    var_448 = 35008;
    var_456 = -3437401476670310186;
    var_464 = 16;
    pri = fun_0DF8(var_456, var_448)
    var_472 = 35128;
    pri = SoundPostEvent(var_472)
    var_480 = 0;
    var_488 = 3;
    var_496 = 0;
    var_504 = 101;
    var_512 = 1;
    OP_PUSH2_C 5406515313781287565, -3437401476670310186
    var_520 = 56;
    pri = fun_2580(var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    var_528 = 1;
    var_536 = 8;
    pri = fun_2778(var_528)
    var_544 = 0;
    pri = fun_2838()
    var_552 = 1;
    var_560 = 3;
    var_568 = 0;
    var_576 = 55;
    var_584 = -3437401476670310186;
    var_592 = 40;
    pri = fun_6D18(var_584, var_576, var_568, var_560, var_552)
    var_600 = 1;
    var_608 = 0;
    var_616 = 0;
    OP_PUSH2_C 4607182418800017408, -3437401476670310186
    var_624 = 0;
    var_632 = 48;
    pri = fun_1AD8(var_624, var_616, var_608, var_600, var_592, var_584)
    var_640 = 1;
    var_648 = 8;
    pri = fun_0090(var_640)
    var_656 = -3437401476670310186;
    var_664 = 8;
    pri = fun_0BF8(var_656)
    var_672 = 20;
    var_680 = 8;
    pri = fun_0090(var_672)
    var_688 = 0;
    var_696 = 0;
    var_704 = 0;
    var_712 = 0;
    OP_PUSH2_C 8802641224559852288, -3437401476670310186
    var_720 = 48;
    pri = fun_09C8(var_712, var_704, var_696, var_688, var_680, var_672)
    var_728 = 0;
    var_736 = 0;
    var_744 = 0;
    var_752 = 0;
    OP_PUSH2_C 8802641224559852288, -6167426358827044554
    var_760 = 48;
    pri = fun_09C8(var_752, var_744, var_736, var_728, var_720, var_712)
    var_768 = 0;
    var_776 = 0;
    var_784 = 0;
    var_792 = 0;
    OP_PUSH2_C 8802641224559852288, 7594687174951932425
    var_800 = 48;
    pri = fun_09C8(var_792, var_784, var_776, var_768, var_760, var_752)
    var_808 = 0;
    var_816 = 0;
    var_824 = 0;
    var_832 = 0;
    OP_PUSH2_C 8802641224559852288, -7223751291454886954
    var_840 = 48;
    pri = fun_09C8(var_832, var_824, var_816, var_808, var_800, var_792)
    var_848 = 4;
    var_856 = 4;
    var_864 = -3437401476670310186;
    var_872 = 24;
    pri = fun_1910(var_864, var_856, var_848)
    var_880 = 0;
    var_888 = 4628039714574277018;
    var_896 = 3;
    OP_PUSH5_C 4657889454157232865, 4638359994595373220, 4655068437173847982, 4658708172505507430, 4641149763458296709
    var_904 = 4654997804546879652;
    var_912 = 60;
    pri = EvCameraMove(var_912, var_904, var_896, var_888, var_880, var_872, var_864, var_856, var_848, var_840)
    var_920 = 30;
    var_928 = 8;
    pri = fun_0090(var_920)
    var_936 = -3437401476670310186;
    var_944 = 8;
    pri = fun_0A20(var_936)
    var_952 = 0;
    var_960 = 3;
    var_968 = 0;
    var_976 = 101;
    var_984 = -1;
    OP_PUSH2_C 5406512015246402932, -3437401476670310186
    var_992 = 56;
    pri = fun_2580(var_984, var_976, var_968, var_960, var_952, var_944, var_936)
    var_1000 = -6167426358827044554;
    var_1008 = 8;
    pri = fun_0A20(var_1000)
    var_1016 = 7594687174951932425;
    var_1024 = 8;
    pri = fun_0A20(var_1016)
    var_1032 = -7223751291454886954;
    var_1040 = 8;
    pri = fun_0A20(var_1032)
    var_1048 = 1;
    var_1056 = 8;
    pri = fun_2778(var_1048)
    var_1064 = 0;
    pri = fun_2838()
    var_1072 = 1;
    var_1080 = 1;
    var_1088 = -1;
    var_1096 = -1;
    var_1104 = 0;
    var_1112 = 11;
    var_1120 = -3437401476670310186;
    var_1128 = 56;
    pri = fun_49E0(var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072)
    var_1136 = 6;
    var_1144 = 6;
    var_1152 = -3437401476670310186;
    var_1160 = 24;
    pri = fun_1910(var_1152, var_1144, var_1136)
    var_1168 = 0;
    var_1176 = 3;
    var_1184 = 0;
    var_1192 = 101;
    var_1200 = -1;
    OP_PUSH2_C 5406513114758031143, -3437401476670310186
    var_1208 = 56;
    pri = fun_2580(var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152)
    var_1216 = 0;
    pri = fun_2B68()
    var_1224 = 1;
    var_1232 = 8;
    pri = fun_2778(var_1224)
    var_1240 = 0;
    pri = fun_2838()
    var_1248 = 1;
    var_1256 = 1;
    OP_PUSH4_C -4587338432941916160, 4656825368794103808, 4657120037910347776, 7594687174951932425
    var_1264 = 48;
    pri = fun_0750(var_1256, var_1248, var_1240, var_1232, var_1224, var_1216)
    var_1272 = 1;
    var_1280 = 1;
    OP_PUSH4_C -4587338432941916160, 4657155222282436608, 4657183809584758784, -7223751291454886954
    var_1288 = 48;
    pri = fun_0750(var_1280, var_1272, var_1264, var_1256, var_1248, var_1240)
    var_1296 = 1;
    var_1304 = 1;
    OP_PUSH4_C -4587338432941916160, 4657485075770769408, 4657205799817314304, -6167426358827044554
    var_1312 = 48;
    pri = fun_0750(var_1304, var_1296, var_1288, var_1280, var_1272, var_1264)
    var_1320 = 1;
    var_1328 = 3;
    var_1336 = 0;
    var_1344 = 11;
    var_1352 = -3437401476670310186;
    var_1360 = 40;
    pri = fun_6D18(var_1352, var_1344, var_1336, var_1328, var_1320)
    var_1368 = -3437401476670310186;
    var_1376 = 8;
    pri = fun_0BF8(var_1368)
    var_1384 = -3437401476670310186;
    var_1392 = 8;
    pri = fun_1978(var_1384)
    var_1400 = 0;
    var_1408 = 0;
    var_1416 = 0;
    OP_PUSH2_C 4630967054332067840, -3437401476670310186
    var_1424 = 40;
    pri = fun_0978(var_1416, var_1408, var_1400, var_1392, var_1384)
    var_1432 = 3;
    var_1440 = 30;
    pri = EvCameraEnd(var_1440, var_1432)
    var_1448 = -3437401476670310186;
    var_1456 = 8;
    pri = fun_0A20(var_1448)
    var_1464 = 0;
    var_1472 = 8802641224559852288;
    var_1480 = 16;
    pri = fun_0800(var_1472, var_1464)
    var_1488 = 0;
    var_1496 = -3437401476670310186;
    var_1504 = 16;
    pri = fun_0800(var_1496, var_1488)
    var_1512 = 0;
    var_1520 = -6167426358827044554;
    var_1528 = 16;
    pri = fun_0800(var_1520, var_1512)
    var_1536 = 0;
    var_1544 = -7223751291454886954;
    var_1552 = 16;
    pri = fun_0800(var_1544, var_1536)
    var_1560 = 0;
    var_1568 = 7594687174951932425;
    var_1576 = 16;
    pri = fun_0800(var_1568, var_1560)
    var_1584 = 1;
    var_1592 = 1176446404928635718;
    pri = WorkSet(var_1592, var_1584)
    var_1600 = 5;
    var_1608 = 8;
    pri = fun_0090(var_1600)
    pri = 0;
    return pri;
}
// fun_D370
fun_D370() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 35256;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0338(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03A8()
    pri = EvCameraStart()
    var_56 = 1;
    var_64 = 1;
    OP_PUSH4_C -4584263318821352243, 4657005908603384627, 4656292325556958003, 8802641224559852288
    var_72 = 48;
    pri = fun_0750(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 1;
    var_88 = 1;
    OP_PUSH4_C 4630967054332067840, 4656783367449922765, 4655980943863971840, -3437401476670310186
    var_96 = 48;
    pri = fun_0750(var_88, var_80, var_72, var_64, var_56, var_48)
    var_104 = 1;
    var_112 = 8802641224559852288;
    var_120 = 16;
    pri = fun_0800(var_112, var_104)
    var_128 = 1;
    var_136 = -3437401476670310186;
    var_144 = 16;
    pri = fun_0800(var_136, var_128)
    var_152 = 1;
    var_160 = -6167426358827044554;
    var_168 = 16;
    pri = fun_0800(var_160, var_152)
    var_176 = 1;
    var_184 = -7223751291454886954;
    var_192 = 16;
    pri = fun_0800(var_184, var_176)
    var_200 = 1;
    var_208 = 7594687174951932425;
    var_216 = 16;
    pri = fun_0800(var_208, var_200)
    var_224 = 0;
    var_232 = 4628321189550987674;
    var_240 = 0;
    OP_PUSH5_C 4657625637337264292, 4641329555599670641, 4656114512536514068, 4658458737297630167, 4642367494576291185
    var_248 = 4656115084282560512;
    var_256 = 1;
    pri = EvCameraMove(var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_264 = 0;
    pri = fun_2B68()
    var_272 = 0;
    var_280 = 4628321189550987674;
    var_288 = 3;
    OP_PUSH5_C 4657145942404298179, 4637527532351751455, 4656110554294654075, 4657971125880944067, 4640097398889119744
    var_296 = 4656021054048153108;
    var_304 = 170;
    pri = EvCameraMove(var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232)
    var_312 = 1;
    var_320 = 1;
    var_328 = -1;
    var_336 = -1;
    var_344 = 0;
    var_352 = 1;
    var_360 = -3437401476670310186;
    var_368 = 56;
    pri = fun_49E0(var_360, var_352, var_344, var_336, var_328, var_320, var_312)
    var_376 = 35304;
    pri = SoundPostEvent(var_376)
    var_384 = 0;
    var_392 = 0;
    var_400 = 0;
    var_408 = 0;
    OP_PUSH2_C 8802641224559852288, -3437401476670310186
    var_416 = 48;
    pri = fun_09C8(var_408, var_400, var_392, var_384, var_376, var_368)
    var_424 = 0;
    var_432 = 0;
    var_440 = 0;
    var_448 = 0;
    OP_PUSH2_C -3437401476670310186, 8802641224559852288
    var_456 = 48;
    pri = fun_09C8(var_448, var_440, var_432, var_424, var_416, var_408)
    var_464 = -3437401476670310186;
    var_472 = 8;
    pri = fun_0A20(var_464)
    var_480 = 8802641224559852288;
    var_488 = 8;
    pri = fun_0A20(var_480)
    var_496 = 34960;
    var_504 = 8;
    var_512 = 16;
    pri = fun_02D8(var_504, var_496)
    var_520 = 0;
    pri = fun_03A8()
    var_528 = 0;
    var_536 = 3;
    var_544 = 0;
    var_552 = 100;
    var_560 = -1;
    OP_PUSH2_C 5406509816223146510, -3437401476670310186
    var_568 = 56;
    pri = fun_2580(var_560, var_552, var_544, var_536, var_528, var_520, var_512)
    var_576 = 1;
    var_584 = 8;
    pri = fun_2778(var_576)
    var_592 = 0;
    pri = fun_2838()
    var_600 = 0;
    var_608 = 3;
    var_616 = 0;
    var_624 = 100;
    var_632 = -1;
    OP_PUSH2_C 5406510915734774721, -3437401476670310186
    var_640 = 56;
    pri = fun_2580(var_632, var_624, var_616, var_608, var_600, var_592, var_584)
    var_648 = 1;
    var_656 = 8;
    pri = fun_2778(var_648)
    var_664 = 0;
    pri = fun_2838()
    var_672 = 1;
    var_680 = 3;
    var_688 = 0;
    var_696 = 1;
    var_704 = -3437401476670310186;
    var_712 = 40;
    pri = fun_6D18(var_704, var_696, var_688, var_680, var_672)
    var_720 = 0;
    var_728 = 3;
    var_736 = 0;
    var_744 = 101;
    var_752 = -1;
    OP_PUSH2_C 5406507617199890088, -3437401476670310186
    var_760 = 56;
    pri = fun_2580(var_752, var_744, var_736, var_728, var_720, var_712, var_704)
    var_768 = -3437401476670310186;
    var_776 = 8;
    pri = fun_0BF8(var_768)
    var_784 = 1;
    var_792 = 8;
    pri = fun_2778(var_784)
    var_800 = 0;
    pri = fun_2838()
    var_808 = 8;
    var_816 = -3437401476670310186;
    var_824 = 16;
    pri = fun_1820(var_816, var_808)
    var_832 = 0;
    var_840 = 3;
    var_848 = 0;
    var_856 = 100;
    var_864 = -1;
    OP_PUSH2_C 5406508716711518299, -3437401476670310186
    var_872 = 56;
    pri = fun_2580(var_864, var_856, var_848, var_840, var_832, var_824, var_816)
    var_880 = 1;
    var_888 = 8;
    pri = fun_2778(var_880)
    var_896 = 0;
    pri = fun_2838()
    var_904 = 0;
    var_912 = 0;
    var_920 = 3;
    var_928 = 10;
    OP_PUSH2_C 4600877379321698714, 4599075939470750516
    var_936 = 48;
    pri = fun_2BF8(var_928, var_920, var_912, var_904, var_896, var_888)
    var_944 = 35472;
    pri = SoundPostEvent(var_944)
    var_952 = 0;
    var_960 = 4628321189550987674;
    var_968 = 3;
    OP_PUSH5_C 4656402760504851825, -4589466383765848719, 4655345821967303311, 4657211715189871739, 4640313782777466061
    var_976 = 4655528648760769905;
    var_984 = 15;
    pri = EvCameraMove(var_984, var_976, var_968, var_960, var_952, var_944, var_936, var_928, var_920, var_912)
    var_992 = 0;
    var_1000 = 0;
    var_1008 = 0;
    var_1016 = -71;
    pri = float(var_1016)
    var_1024 = pri;
    var_1032 = -3437401476670310186;
    var_1040 = 40;
    pri = fun_0978(var_1032, var_1024, var_1016, var_1008, var_1000)
    var_1048 = 6;
    var_1056 = -3437401476670310186;
    var_1064 = 16;
    pri = fun_1820(var_1056, var_1048)
    var_1072 = 1;
    var_1080 = 1;
    var_1088 = 50;
    var_1096 = 1;
    var_1104 = 8802641224559852288;
    var_1112 = 40;
    pri = fun_1330(var_1104, var_1096, var_1088, var_1080, var_1072)
    var_1120 = 0;
    pri = fun_2D60()
    var_1128 = 3;
    var_1136 = 10;
    var_1144 = 16;
    pri = fun_2CC8(var_1136, var_1128)
    var_1152 = 0;
    var_1160 = 3;
    var_1168 = 0;
    var_1176 = 101;
    var_1184 = -1;
    OP_PUSH2_C 5406505418176633666, -3437401476670310186
    var_1192 = 56;
    pri = fun_2580(var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136)
    var_1200 = -3437401476670310186;
    var_1208 = 8;
    pri = fun_0A20(var_1200)
    var_1216 = 0;
    pri = fun_2B68()
    var_1224 = 1;
    var_1232 = 8;
    pri = fun_2778(var_1224)
    var_1240 = 0;
    pri = fun_2838()
    var_1248 = 0;
    var_1256 = 4628321189550987674;
    var_1264 = 0;
    OP_PUSH5_C 4657845253789796270, 4639173809121787904, 4656221868851850117, 4658613724456681472, 4641150818989459374
    var_1272 = 4655613926882620211;
    var_1280 = 1;
    pri = EvCameraMove(var_1280, var_1272, var_1264, var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208)
    var_1288 = 0;
    pri = fun_2B68()
    var_1296 = 0;
    var_1304 = 4628321189550987674;
    var_1312 = 3;
    OP_PUSH5_C 4658126244981390705, 4639848997222172590, 4656107871486282301, 4658894715648275907, 4641826007089844060
    var_1320 = 4655499885536587284;
    var_1328 = 60;
    pri = EvCameraMove(var_1328, var_1320, var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256)
    var_1336 = 0;
    var_1344 = 0;
    var_1352 = 0;
    var_1360 = 0;
    OP_PUSH2_C 8802641224559852288, -3437401476670310186
    var_1368 = 48;
    pri = fun_09C8(var_1360, var_1352, var_1344, var_1336, var_1328, var_1320)
    var_1376 = -3437401476670310186;
    var_1384 = 8;
    pri = fun_0A20(var_1376)
    var_1392 = 0;
    var_1400 = 1;
    var_1408 = 50;
    var_1416 = 1;
    var_1424 = -3437401476670310186;
    var_1432 = 40;
    pri = fun_1330(var_1424, var_1416, var_1408, var_1400, var_1392)
    var_1440 = -3437401476670310186;
    var_1448 = 8;
    pri = fun_1860(var_1440)
    var_1456 = -1;
    var_1464 = 8802641224559852288;
    var_1472 = 16;
    pri = fun_17A0(var_1464, var_1456)
    var_1480 = 0;
    var_1488 = 3;
    var_1496 = 0;
    var_1504 = 100;
    var_1512 = -1;
    OP_PUSH2_C 5406506517688261877, -3437401476670310186
    var_1520 = 56;
    pri = fun_2580(var_1512, var_1504, var_1496, var_1488, var_1480, var_1472, var_1464)
    var_1528 = 1;
    var_1536 = 8;
    pri = fun_2778(var_1528)
    var_1544 = 0;
    pri = fun_2838()
    var_1552 = 0;
    var_1560 = 4628321189550987674;
    var_1568 = 3;
    OP_PUSH5_C 4657454597308447457, 4638876149333916385, 4655727352502141583, 4658317757916716728, 4640822548797870572
    var_1576 = 4655047898296641126;
    var_1584 = 90;
    pri = EvCameraMove(var_1584, var_1576, var_1568, var_1560, var_1552, var_1544, var_1536, var_1528, var_1520, var_1512)
    var_1592 = -1;
    var_1600 = -3437401476670310186;
    var_1608 = 16;
    pri = fun_17A0(var_1600, var_1592)
    var_1616 = 15;
    var_1624 = -3437401476670310186;
    var_1632 = 16;
    pri = fun_17E0(var_1624, var_1616)
    var_1640 = 8;
    var_1648 = -3437401476670310186;
    var_1656 = 16;
    pri = fun_1820(var_1648, var_1640)
    var_1664 = 1;
    var_1672 = -1;
    var_1680 = -1;
    var_1688 = 3;
    var_1696 = 0;
    var_1704 = 1;
    var_1712 = -3437401476670310186;
    var_1720 = 56;
    pri = fun_2E00(var_1712, var_1704, var_1696, var_1688, var_1680, var_1672, var_1664)
    var_1728 = 0;
    var_1736 = 3;
    var_1744 = 0;
    var_1752 = 100;
    var_1760 = -1;
    OP_PUSH2_C 5407470789386013699, -3437401476670310186
    var_1768 = 56;
    pri = fun_2580(var_1760, var_1752, var_1744, var_1736, var_1728, var_1720, var_1712)
    var_1776 = 1;
    var_1784 = 8;
    pri = fun_2778(var_1776)
    var_1792 = 0;
    pri = fun_2838()
    var_1800 = 1;
    var_1808 = 0;
    var_1816 = 0;
    OP_PUSH2_C 4607182418800017408, -3437401476670310186
    var_1824 = 3;
    var_1832 = 48;
    pri = fun_1AD8(var_1824, var_1816, var_1808, var_1800, var_1792, var_1784)
    var_1840 = 45;
    var_1848 = 8;
    pri = fun_0090(var_1840)
    var_1856 = -3437401476670310186;
    var_1864 = 8;
    pri = fun_1860(var_1856)
    var_1872 = 1;
    var_1880 = 0;
    var_1888 = 0;
    OP_PUSH2_C 4607182418800017408, -3437401476670310186
    var_1896 = 0;
    var_1904 = 48;
    pri = fun_1AD8(var_1896, var_1888, var_1880, var_1872, var_1864, var_1856)
    var_1912 = 40;
    var_1920 = 8;
    pri = fun_0090(var_1912)
    var_1928 = 5;
    var_1936 = 5;
    var_1944 = -3437401476670310186;
    var_1952 = 24;
    pri = fun_1910(var_1944, var_1936, var_1928)
    var_1960 = 1;
    var_1968 = 1;
    var_1976 = -1;
    var_1984 = -1;
    var_1992 = 0;
    var_2000 = 1;
    var_2008 = -3437401476670310186;
    var_2016 = 56;
    pri = fun_49E0(var_2008, var_2000, var_1992, var_1984, var_1976, var_1968, var_1960)
    var_2024 = 0;
    var_2032 = 3;
    var_2040 = 0;
    var_2048 = 101;
    var_2056 = -1;
    OP_PUSH2_C 5407469689874385488, -3437401476670310186
    var_2064 = 56;
    pri = fun_2580(var_2056, var_2048, var_2040, var_2032, var_2024, var_2016, var_2008)
    var_2072 = 1;
    var_2080 = 8;
    pri = fun_2778(var_2072)
    var_2088 = 0;
    pri = fun_2838()
    var_2096 = -3437401476670310186;
    var_2104 = 8;
    pri = fun_1978(var_2096)
    var_2112 = 1;
    var_2120 = 3;
    var_2128 = 0;
    var_2136 = 1;
    var_2144 = -3437401476670310186;
    var_2152 = 40;
    pri = fun_6D18(var_2144, var_2136, var_2128, var_2120, var_2112)
    var_2160 = 0;
    var_2168 = 3;
    var_2176 = 0;
    var_2184 = 101;
    var_2192 = -1;
    OP_PUSH2_C 5407472988409270121, -3437401476670310186
    var_2200 = 56;
    pri = fun_2580(var_2192, var_2184, var_2176, var_2168, var_2160, var_2152, var_2144)
    var_2208 = -3437401476670310186;
    var_2216 = 8;
    pri = fun_0BF8(var_2208)
    var_2224 = 1;
    var_2232 = 8;
    pri = fun_2778(var_2224)
    var_2240 = 0;
    pri = fun_2838()
    var_2248 = 2;
    var_2256 = 1176446404928635718;
    pri = WorkSet(var_2256, var_2248)
    var_2264 = 3;
    var_2272 = 30;
    pri = EvCameraEnd(var_2272, var_2264)
    var_2280 = 10;
    var_2288 = 8;
    pri = fun_0090(var_2280)
    var_2296 = 0;
    var_2304 = 8802641224559852288;
    var_2312 = 16;
    pri = fun_0800(var_2304, var_2296)
    var_2320 = 0;
    var_2328 = -3437401476670310186;
    var_2336 = 16;
    pri = fun_0800(var_2328, var_2320)
    var_2344 = 0;
    var_2352 = -6167426358827044554;
    var_2360 = 16;
    pri = fun_0800(var_2352, var_2344)
    var_2368 = 0;
    var_2376 = -7223751291454886954;
    var_2384 = 16;
    pri = fun_0800(var_2376, var_2368)
    var_2392 = 0;
    var_2400 = 7594687174951932425;
    var_2408 = 16;
    pri = fun_0800(var_2400, var_2392)
    var_2416 = 35600;
    pri = SoundPostEvent(var_2416)
    pri = 0;
    return pri;
}
// fun_E790
fun_E790() {
    var_8 = -6121430503457951112;
    pri = FlagGet(var_8)
    OP_JZER lab_E858
    var_16 = -1940649984164138647;
    pri = FlagGet(var_16)
    OP_JZER lab_E858
    var_24 = -268353371814909324;
    pri = FlagGet(var_24)
    OP_JZER lab_E858
    pri = 0;
    OP_JUMP lab_E860
// lab_E858
    pri = 1;
// lab_E860
    OP_JZER lab_E880
    pri = 0;
    return pri;
// lab_E880
    var_8 = 1176446404928635718;
    pri = WorkGet(var_8)
    alt = 3;
    OP_JSLESS lab_E8D0
    pri = 0;
    return pri;
// lab_E8D0
    var_8 = 1;
    var_16 = 0;
    var_24 = 35256;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0338(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03A8()
    var_56 = 5750971725145164889;
    var_64 = 8;
    pri = fun_0548(var_56)
    var_72 = 0;
    pri = fun_0578()
    var_80 = 1;
    var_88 = 0;
    OP_PUSH4_C 4655547296477976986, 4630122629401935872, 4656178416152320410, 5750971725145164889
    var_96 = 48;
    pri = fun_07A8(var_88, var_80, var_72, var_64, var_56, var_48)
    var_104 = 1;
    var_112 = 8802641224559852288;
    var_120 = 16;
    pri = fun_0800(var_112, var_104)
    var_128 = 1;
    var_136 = -3437401476670310186;
    var_144 = 16;
    pri = fun_0800(var_136, var_128)
    var_152 = 1;
    var_160 = -6167426358827044554;
    var_168 = 16;
    pri = fun_0800(var_160, var_152)
    var_176 = 1;
    var_184 = -7223751291454886954;
    var_192 = 16;
    pri = fun_0800(var_184, var_176)
    var_200 = 1;
    var_208 = 7594687174951932425;
    var_216 = 16;
    pri = fun_0800(var_208, var_200)
    var_224 = 1;
    var_232 = 5750971725145164889;
    var_240 = 16;
    pri = fun_0800(var_232, var_224)
    pri = EvCameraStart()
    var_248 = 0;
    var_256 = 4628377484546329805;
    var_264 = 0;
    OP_PUSH5_C 4655325415031491789, 4625118004316020408, 4655909959393282621, 4656582552646225756, 4637727379585216020
    var_272 = 4656822466083406479;
    var_280 = 1;
    pri = EvCameraMove(var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208)
    var_288 = 0;
    pri = fun_2B68()
    var_296 = 10;
    var_304 = 8;
    pri = fun_0090(var_296)
    var_312 = 1;
    var_320 = 0;
    var_328 = 4641240890982006784;
    var_336 = 0;
    var_344 = 1;
    OP_PUSH4_C 4655811179268643226, 4656788865008061645, 4611686018427387904, 5750971725145164889
    var_352 = 72;
    pri = fun_0840(var_344, var_336, var_328, var_320, var_312, var_304, var_296, var_288, var_280)
    var_360 = 34960;
    var_368 = 8;
    var_376 = 16;
    pri = fun_02D8(var_368, var_360)
    var_384 = 0;
    pri = fun_03A8()
    var_392 = 0;
    var_400 = 4628377484546329805;
    var_408 = 3;
    OP_PUSH5_C 4655012318100366295, -4595211288040513208, 4656733405641556623, 4656616373623896146, 4634729671083247534
    var_416 = 4656825808598754918;
    var_424 = 70;
    pri = EvCameraMove(var_424, var_416, var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352)
    var_432 = 0;
    var_440 = 1;
    var_448 = 0;
    var_456 = 819;
    pri = SoundPlayPokeVoice(var_456, var_448, var_440, var_432)
    var_464 = 0;
    var_472 = 3;
    var_480 = 0;
    var_488 = 100;
    var_496 = -1;
    OP_PUSH2_C 8075750178266366164, 5750971725145164889
    var_504 = 56;
    pri = fun_2580(var_496, var_488, var_480, var_472, var_464, var_456, var_448)
    var_512 = 5750971725145164889;
    var_520 = 8;
    pri = fun_0A20(var_512)
    var_528 = 1;
    var_536 = 8;
    pri = fun_2778(var_528)
    var_544 = 0;
    pri = fun_2838()
    var_552 = 0;
    var_560 = 4628377484546329805;
    var_568 = 0;
    OP_PUSH5_C 4657709464103765934, 4639900718249143173, 4656842741077822669, 4658516043843669852, 4643272964391997276
    var_576 = 4656882697330376049;
    var_584 = 1;
    pri = EvCameraMove(var_584, var_576, var_568, var_560, var_552, var_544, var_536, var_528, var_520, var_512)
    var_592 = 0;
    pri = fun_2B68()
    var_600 = 0;
    var_608 = 4628377484546329805;
    var_616 = 3;
    OP_PUSH5_C 4657885012130256650, 4640107250513304617, 4656906644693629010, 4658691613860393124, 4643376406445938442
    var_624 = 4656946600946182390;
    var_632 = 70;
    pri = EvCameraMove(var_632, var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560)
    var_640 = 1;
    var_648 = -1;
    var_656 = -1;
    var_664 = 3;
    var_672 = 0;
    var_680 = 30;
    var_688 = 5750971725145164889;
    var_696 = 56;
    pri = fun_2E00(var_688, var_680, var_672, var_664, var_656, var_648, var_640)
    var_704 = 0;
    var_712 = 0;
    var_720 = 0;
    var_728 = 0;
    OP_PUSH2_C 5750971725145164889, 7594687174951932425
    var_736 = 48;
    pri = fun_09C8(var_728, var_720, var_712, var_704, var_696, var_688)
    var_744 = 0;
    var_752 = 0;
    var_760 = 0;
    var_768 = 0;
    OP_PUSH2_C 5750971725145164889, 8802641224559852288
    var_776 = 48;
    pri = fun_09C8(var_768, var_760, var_752, var_744, var_736, var_728)
    var_784 = 0;
    var_792 = 3;
    var_800 = 0;
    var_808 = 100;
    var_816 = -1;
    OP_PUSH2_C 3496373324937457854, 7594687174951932425
    var_824 = 56;
    pri = fun_2580(var_816, var_808, var_800, var_792, var_784, var_776, var_768)
    var_832 = 7594687174951932425;
    var_840 = 8;
    pri = fun_0A20(var_832)
    var_848 = 8802641224559852288;
    var_856 = 8;
    pri = fun_0A20(var_848)
    var_864 = 5750971725145164889;
    var_872 = 8;
    pri = fun_0BF8(var_864)
    var_880 = 1;
    var_888 = 8;
    pri = fun_2778(var_880)
    var_896 = 0;
    pri = fun_2838()
    var_904 = 1;
    var_912 = 0;
    var_920 = 35256;
    var_928 = 8;
    var_936 = 32;
    pri = fun_0338(var_928, var_920, var_912, var_904)
    var_944 = 0;
    pri = fun_03A8()
    var_952 = 1;
    var_960 = 0;
    OP_PUSH4_C 4656162979009066435, 4630122629401935872, 4656534701900184945, 5750971725145164889
    var_968 = 48;
    pri = fun_07A8(var_960, var_952, var_944, var_936, var_928, var_920)
    var_976 = 3;
    var_984 = 1176446404928635718;
    pri = WorkSet(var_984, var_976)
    var_992 = 3;
    var_1000 = 0;
    pri = EvCameraEnd(var_1000, var_992)
    var_1008 = 15;
    var_1016 = 8;
    pri = fun_0090(var_1008)
    var_1024 = 0;
    var_1032 = 8802641224559852288;
    var_1040 = 16;
    pri = fun_0800(var_1032, var_1024)
    var_1048 = 0;
    var_1056 = -3437401476670310186;
    var_1064 = 16;
    pri = fun_0800(var_1056, var_1048)
    var_1072 = 0;
    var_1080 = -6167426358827044554;
    var_1088 = 16;
    pri = fun_0800(var_1080, var_1072)
    var_1096 = 0;
    var_1104 = -7223751291454886954;
    var_1112 = 16;
    pri = fun_0800(var_1104, var_1096)
    var_1120 = 0;
    var_1128 = 7594687174951932425;
    var_1136 = 16;
    pri = fun_0800(var_1128, var_1120)
    var_1144 = 0;
    var_1152 = 5750971725145164889;
    var_1160 = 16;
    pri = fun_0800(var_1152, var_1144)
    var_1168 = 34960;
    var_1176 = 8;
    var_1184 = 16;
    pri = fun_02D8(var_1176, var_1168)
    var_1192 = 0;
    pri = fun_03A8()
    pri = 1;
    return pri;
}
// fun_F360
fun_F360() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 35256;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0338(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03A8()
    var_56 = 1;
    var_64 = 1;
    OP_PUSH4_C -4587338432941916160, 4656164342403484877, 4656804697975501619, 8802641224559852288
    var_72 = 48;
    pri = fun_0750(var_64, var_56, var_48, var_40, var_32, var_24)
    pri = EvCameraStart()
    var_80 = 1;
    var_88 = 8802641224559852288;
    var_96 = 16;
    pri = fun_0800(var_88, var_80)
    var_104 = 1;
    var_112 = -3437401476670310186;
    var_120 = 16;
    pri = fun_0800(var_112, var_104)
    var_128 = 1;
    var_136 = -6167426358827044554;
    var_144 = 16;
    pri = fun_0800(var_136, var_128)
    var_152 = 1;
    var_160 = -7223751291454886954;
    var_168 = 16;
    pri = fun_0800(var_160, var_152)
    var_176 = 1;
    var_184 = 7594687174951932425;
    var_192 = 16;
    pri = fun_0800(var_184, var_176)
    var_200 = 1;
    var_208 = 5750971725145164889;
    var_216 = 16;
    pri = fun_0800(var_208, var_200)
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_232 = 10;
    var_240 = 8;
    pri = fun_0090(var_232)
    var_248 = 0;
    var_256 = 4627786387095237427;
    var_264 = 0;
    OP_PUSH5_C 4655956974510486323, 4630525138618632110, 4656502816062979441, 4656946644926647501, 4639569281464066376
    var_272 = 4657128262257323540;
    var_280 = 1;
    pri = EvCameraMove(var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208)
    var_288 = 0;
    pri = fun_2B68()
    var_296 = 34960;
    var_304 = 8;
    var_312 = 16;
    pri = fun_02D8(var_304, var_296)
    var_320 = 0;
    pri = fun_03A8()
    var_328 = 1;
    var_336 = 1;
    var_344 = var_8;
    var_352 = 24;
    pri = fun_9378(var_344, var_336, var_328)
    var_360 = 1;
    var_368 = 0;
    var_376 = 5750971725145164889;
    pri = SoundPlayPokeVoiceFromObject(var_376, var_368, var_360)
    var_384 = 0;
    var_392 = 3;
    var_400 = 0;
    var_408 = 100;
    var_416 = -1;
    OP_PUSH2_C 8075753476801250797, 5750971725145164889
    var_424 = 56;
    pri = fun_2580(var_416, var_408, var_400, var_392, var_384, var_376, var_368)
    var_432 = 1;
    var_440 = 8;
    pri = fun_2778(var_432)
    var_448 = 0;
    pri = fun_2838()
    var_456 = 0;
    var_464 = 0;
    var_472 = 0;
    var_480 = 0;
    OP_PUSH2_C 8802641224559852288, -3437401476670310186
    var_488 = 48;
    pri = fun_09C8(var_480, var_472, var_464, var_456, var_448, var_440)
    var_496 = 3;
    var_504 = 0;
    var_512 = -8718166136075312462;
    var_520 = 24;
    pri = fun_2630(var_512, var_504, var_496)
    var_528 = -3437401476670310186;
    var_536 = 8;
    pri = fun_0A20(var_528)
    var_544 = 1;
    var_552 = 8;
    pri = fun_2778(var_544)
    var_560 = 0;
    pri = fun_2838()
    var_568 = 0;
    var_576 = 4628658959523040461;
    var_584 = 3;
    OP_PUSH5_C 4656660046225751409, 4636510000310942433, 4656310313567188419, 4657480281900072305, 4641833395807982715
    var_592 = 4656460111031356621;
    var_600 = 60;
    pri = EvCameraMove(var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544, var_536, var_528)
    var_608 = 0;
    var_616 = 0;
    var_624 = var_8;
    var_632 = 24;
    pri = fun_9580(var_624, var_616, var_608)
    var_640 = 8;
    var_648 = -3437401476670310186;
    var_656 = 16;
    pri = fun_1820(var_648, var_640)
    var_664 = 1;
    var_672 = 1;
    var_680 = -1;
    var_688 = -1;
    var_696 = 0;
    var_704 = 4;
    var_712 = -3437401476670310186;
    var_720 = 56;
    pri = fun_49E0(var_712, var_704, var_696, var_688, var_680, var_672, var_664)
    var_728 = 0;
    var_736 = 0;
    var_744 = 0;
    var_752 = 0;
    OP_PUSH2_C -3437401476670310186, 8802641224559852288
    var_760 = 48;
    pri = fun_09C8(var_752, var_744, var_736, var_728, var_720, var_712)
    var_768 = 0;
    var_776 = 3;
    var_784 = 0;
    var_792 = 100;
    var_800 = -1;
    OP_PUSH2_C 5407471888897641910, -3437401476670310186
    var_808 = 56;
    pri = fun_2580(var_800, var_792, var_784, var_776, var_768, var_760, var_752)
    var_816 = 0;
    pri = fun_2B68()
    var_824 = 8802641224559852288;
    var_832 = 8;
    pri = fun_0A20(var_824)
    var_840 = 1;
    var_848 = 8;
    pri = fun_2778(var_840)
    var_856 = 0;
    pri = fun_2838()
    var_864 = 1;
    var_872 = 3;
    var_880 = 0;
    var_888 = 4;
    var_896 = -3437401476670310186;
    var_904 = 40;
    pri = fun_6D18(var_896, var_888, var_880, var_872, var_864)
    var_912 = 0;
    var_920 = 3;
    var_928 = 0;
    var_936 = 100;
    var_944 = -1;
    OP_PUSH2_C 5407475187432526543, -3437401476670310186
    var_952 = 56;
    pri = fun_2580(var_944, var_936, var_928, var_920, var_912, var_904, var_896)
    var_960 = -3437401476670310186;
    var_968 = 8;
    pri = fun_0BF8(var_960)
    var_976 = 1;
    var_984 = 8;
    pri = fun_2778(var_976)
    var_992 = 0;
    pri = fun_2838()
    var_1000 = 0;
    var_1008 = 0;
    var_1016 = 0;
    var_1024 = 0;
    OP_PUSH2_C -6167426358827044554, -3437401476670310186
    var_1032 = 48;
    pri = fun_09C8(var_1024, var_1016, var_1008, var_1000, var_992, var_984)
    var_1040 = -3437401476670310186;
    var_1048 = 8;
    pri = fun_0A20(var_1040)
    var_1056 = 1;
    var_1064 = 1;
    var_1072 = -1;
    var_1080 = -1;
    var_1088 = 0;
    var_1096 = 55;
    var_1104 = -3437401476670310186;
    var_1112 = 56;
    pri = fun_49E0(var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056)
    var_1120 = 5;
    var_1128 = 8;
    pri = fun_0090(var_1120)
    var_1136 = 0;
    var_1144 = 4628658959523040461;
    var_1152 = 3;
    OP_PUSH5_C 4657473091094026650, 4637293908121081610, 4656956980335948595, 4658288906731603886, 4639799739101248225
    var_1160 = 4657098465492210811;
    var_1168 = 10;
    pri = EvCameraMove(var_1168, var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096)
    var_1176 = -3437401476670310186;
    var_1184 = 8;
    pri = fun_1860(var_1176)
    var_1192 = 35768;
    pri = SoundPostEvent(var_1192)
    var_1200 = 0;
    var_1208 = 0;
    var_1216 = 3;
    var_1224 = 5;
    OP_PUSH2_C 4600877379321698714, 4599075939470750516
    var_1232 = 48;
    pri = fun_2BF8(var_1224, var_1216, var_1208, var_1200, var_1192, var_1184)
    var_1240 = 0;
    pri = fun_2D60()
    var_1248 = 3;
    var_1256 = 5;
    var_1264 = 16;
    pri = fun_2CC8(var_1256, var_1248)
    var_1272 = 0;
    var_1280 = 3;
    var_1288 = 0;
    var_1296 = 100;
    var_1304 = -1;
    OP_PUSH2_C 5407474087920898332, -3437401476670310186
    var_1312 = 56;
    pri = fun_2580(var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256)
    var_1320 = 35896;
    var_1328 = -3437401476670310186;
    var_1336 = 16;
    pri = fun_0DF8(var_1328, var_1320)
    var_1344 = 0;
    pri = fun_2B68()
    var_1352 = 1;
    var_1360 = 8;
    pri = fun_2778(var_1352)
    var_1368 = 0;
    pri = fun_2838()
    var_1376 = 0;
    var_1384 = 0;
    var_1392 = 0;
    var_1400 = 0;
    OP_PUSH2_C -3437401476670310186, -6167426358827044554
    var_1408 = 48;
    pri = fun_09C8(var_1400, var_1392, var_1384, var_1376, var_1368, var_1360)
    var_1416 = 0;
    var_1424 = 0;
    var_1432 = 0;
    var_1440 = 0;
    pri = float(var_1440)
    var_1448 = pri;
    var_1456 = 8802641224559852288;
    var_1464 = 40;
    pri = fun_0978(var_1456, var_1448, var_1440, var_1432, var_1424)
    var_1472 = 0;
    var_1480 = 0;
    var_1488 = 0;
    var_1496 = 0;
    pri = float(var_1496)
    var_1504 = pri;
    var_1512 = -7223751291454886954;
    var_1520 = 40;
    pri = fun_0978(var_1512, var_1504, var_1496, var_1488, var_1480)
    var_1528 = 0;
    var_1536 = 0;
    var_1544 = 0;
    var_1552 = 0;
    pri = float(var_1552)
    var_1560 = pri;
    var_1568 = 7594687174951932425;
    var_1576 = 40;
    pri = fun_0978(var_1568, var_1560, var_1552, var_1544, var_1536)
    var_1584 = -6167426358827044554;
    var_1592 = 8;
    pri = fun_0A20(var_1584)
    var_1600 = 8802641224559852288;
    var_1608 = 8;
    pri = fun_0A20(var_1600)
    var_1616 = -7223751291454886954;
    var_1624 = 8;
    pri = fun_0A20(var_1616)
    var_1632 = 7594687174951932425;
    var_1640 = 8;
    pri = fun_0A20(var_1632)
    var_1648 = 3;
    var_1656 = 8;
    pri = fun_0090(var_1648)
    var_1664 = 0;
    var_1672 = 4628658959523040461;
    var_1680 = 0;
    OP_PUSH5_C 4657508253475882926, 4635476283458972549, 4657684021404699197, 4657364459345202381, 4639382804291995566
    var_1688 = 4656873417452237619;
    var_1696 = 1;
    pri = EvCameraMove(var_1696, var_1688, var_1680, var_1672, var_1664, var_1656, var_1648, var_1640, var_1632, var_1624)
    var_1704 = 0;
    pri = fun_2B68()
    var_1712 = 0;
    var_1720 = 4628658959523040461;
    var_1728 = 3;
    OP_PUSH5_C 4657539237713553654, 4635476283458972549, 4657678523846560317, 4657395575524268442, 4639381045073391124
    var_1736 = 4656867875913633628;
    var_1744 = 60;
    pri = EvCameraMove(var_1744, var_1736, var_1728, var_1720, var_1712, var_1704, var_1696, var_1688, var_1680, var_1672)
    var_1752 = 4;
    var_1760 = 4;
    var_1768 = -6167426358827044554;
    var_1776 = 24;
    pri = fun_1910(var_1768, var_1760, var_1752)
    var_1784 = 1;
    var_1792 = -1;
    var_1800 = -1;
    var_1808 = 3;
    var_1816 = 0;
    var_1824 = 1;
    var_1832 = -6167426358827044554;
    var_1840 = 56;
    pri = fun_2E00(var_1832, var_1824, var_1816, var_1808, var_1800, var_1792, var_1784)
    var_1848 = 0;
    var_1856 = 3;
    var_1864 = 0;
    var_1872 = 100;
    var_1880 = -1;
    OP_PUSH2_C 3313597105251827527, -6167426358827044554
    var_1888 = 56;
    pri = fun_2580(var_1880, var_1872, var_1864, var_1856, var_1848, var_1840, var_1832)
    var_1896 = -6167426358827044554;
    var_1904 = 8;
    pri = fun_0BF8(var_1896)
    var_1912 = 1;
    var_1920 = 8;
    pri = fun_2778(var_1912)
    var_1928 = 0;
    pri = fun_2838()
    var_1936 = 1;
    var_1944 = 3;
    var_1952 = 0;
    var_1960 = 55;
    var_1968 = -3437401476670310186;
    var_1976 = 40;
    pri = fun_6D18(var_1968, var_1960, var_1952, var_1944, var_1936)
    var_1984 = 0;
    var_1992 = 4629869301922896282;
    var_2000 = 0;
    OP_PUSH5_C 4657069174502446858, 4635393952028284682, 4656818243958755820, 4657715929232137257, 4639754351261253632
    var_2008 = 4657319621261021676;
    var_2016 = 1;
    pri = EvCameraMove(var_2016, var_2008, var_2000, var_1992, var_1984, var_1976, var_1968, var_1960, var_1952, var_1944)
    var_2024 = 0;
    pri = fun_2B68()
    var_2032 = 0;
    var_2040 = 4629869301922896282;
    var_2048 = 3;
    OP_PUSH5_C 4657029394171753923, 4635393952028284682, 4656885819943398932, 4657747023420970762, 4639745555168231424
    var_2056 = 4657279357145212518;
    var_2064 = 100;
    pri = EvCameraMove(var_2064, var_2056, var_2048, var_2040, var_2032, var_2024, var_2016, var_2008, var_2000, var_1992)
    var_2072 = 6;
    var_2080 = 6;
    var_2088 = -3437401476670310186;
    var_2096 = 24;
    pri = fun_1910(var_2088, var_2080, var_2072)
    var_2104 = 0;
    var_2112 = 3;
    var_2120 = 0;
    var_2128 = 100;
    var_2136 = -1;
    OP_PUSH2_C 5407477386455782965, -3437401476670310186
    var_2144 = 56;
    pri = fun_2580(var_2136, var_2128, var_2120, var_2112, var_2104, var_2096, var_2088)
    var_2152 = 1;
    var_2160 = 8;
    pri = fun_2778(var_2152)
    var_2168 = 0;
    pri = fun_2838()
    var_2176 = 6;
    var_2184 = 8;
    var_2192 = -3437401476670310186;
    var_2200 = 24;
    pri = fun_1910(var_2192, var_2184, var_2176)
    var_2208 = 1;
    var_2216 = 1;
    var_2224 = -1;
    var_2232 = -1;
    var_2240 = 0;
    var_2248 = 6;
    var_2256 = -3437401476670310186;
    var_2264 = 56;
    pri = fun_49E0(var_2256, var_2248, var_2240, var_2232, var_2224, var_2216, var_2208)
    var_2272 = 0;
    var_2280 = 4629869301922896282;
    var_2288 = 0;
    OP_PUSH5_C 4656017623571874447, 4635579021825471939, 4656123000766280499, 4657166811134993367, 4641152578208063816
    var_2296 = 4656097668018376540;
    var_2304 = 1;
    pri = EvCameraMove(var_2304, var_2296, var_2288, var_2280, var_2272, var_2264, var_2256, var_2248, var_2240, var_2232)
    var_2312 = 0;
    pri = fun_2B68()
    var_2320 = 0;
    var_2328 = 4629869301922896282;
    var_2336 = 3;
    OP_PUSH5_C 4656023472973734216, 4635579021825471939, 4655978964743041843, 4657160917752668488, 4641194095767128637
    var_2344 = 4656206299767200809;
    var_2352 = 60;
    pri = EvCameraMove(var_2352, var_2344, var_2336, var_2328, var_2320, var_2312, var_2304, var_2296, var_2288, var_2280)
    var_2360 = 0;
    var_2368 = 0;
    var_2376 = 0;
    var_2384 = 0;
    OP_PUSH2_C -3437401476670310186, 5750971725145164889
    var_2392 = 48;
    pri = fun_09C8(var_2384, var_2376, var_2368, var_2360, var_2352, var_2344)
    var_2400 = 0;
    var_2408 = 3;
    var_2416 = 0;
    var_2424 = 100;
    var_2432 = -1;
    OP_PUSH2_C 5407476286944154754, -3437401476670310186
    var_2440 = 56;
    pri = fun_2580(var_2432, var_2424, var_2416, var_2408, var_2400, var_2392, var_2384)
    var_2448 = 5750971725145164889;
    var_2456 = 8;
    pri = fun_0A20(var_2448)
    var_2464 = 0;
    pri = fun_2B68()
    var_2472 = 1;
    var_2480 = 8;
    pri = fun_2778(var_2472)
    var_2488 = 0;
    pri = fun_2838()
    var_2496 = 1;
    var_2504 = 3;
    var_2512 = 0;
    var_2520 = 6;
    var_2528 = -3437401476670310186;
    var_2536 = 40;
    pri = fun_6D18(var_2528, var_2520, var_2512, var_2504, var_2496)
    var_2544 = 6;
    var_2552 = 6;
    var_2560 = -6167426358827044554;
    var_2568 = 24;
    pri = fun_1910(var_2560, var_2552, var_2544)
    var_2576 = 0;
    var_2584 = 4627898977085921690;
    var_2592 = 0;
    OP_PUSH5_C 4656969294866179686, 4637386091175954350, 4656797177315967631, 4656733119768533402, 4641213799015498383
    var_2600 = 4655319037864050688;
    var_2608 = 1;
    pri = EvCameraMove(var_2608, var_2600, var_2592, var_2584, var_2576, var_2568, var_2560, var_2552, var_2544, var_2536)
    var_2616 = 0;
    pri = fun_2B68()
    var_2624 = 1;
    var_2632 = 1;
    var_2640 = -1;
    var_2648 = -1;
    var_2656 = 0;
    var_2664 = 11;
    var_2672 = -6167426358827044554;
    var_2680 = 56;
    pri = fun_49E0(var_2672, var_2664, var_2656, var_2648, var_2640, var_2632, var_2624)
    var_2688 = 0;
    var_2696 = 3;
    var_2704 = 0;
    var_2712 = 100;
    var_2720 = -1;
    OP_PUSH2_C 3313596005740199316, -6167426358827044554
    var_2728 = 56;
    pri = fun_2580(var_2720, var_2712, var_2704, var_2696, var_2688, var_2680, var_2672)
    var_2736 = -3437401476670310186;
    var_2744 = 8;
    pri = fun_0BF8(var_2736)
    var_2752 = 1;
    var_2760 = 8;
    pri = fun_2778(var_2752)
    var_2768 = 0;
    pri = fun_2838()
    var_2776 = 4;
    var_2784 = 4;
    var_2792 = -3437401476670310186;
    var_2800 = 24;
    pri = fun_1910(var_2792, var_2784, var_2776)
    var_2808 = 1;
    var_2816 = -1;
    var_2824 = -1;
    var_2832 = 3;
    var_2840 = 0;
    var_2848 = 1;
    var_2856 = -3437401476670310186;
    var_2864 = 56;
    pri = fun_2E00(var_2856, var_2848, var_2840, var_2832, var_2824, var_2816, var_2808)
    var_2872 = 0;
    var_2880 = 3;
    var_2888 = 0;
    var_2896 = 100;
    var_2904 = -1;
    OP_PUSH2_C 5407479585479039387, -3437401476670310186
    var_2912 = 56;
    pri = fun_2580(var_2904, var_2896, var_2888, var_2880, var_2872, var_2864, var_2856)
    var_2920 = -3437401476670310186;
    var_2928 = 8;
    pri = fun_0BF8(var_2920)
    var_2936 = 1;
    var_2944 = 8;
    pri = fun_2778(var_2936)
    var_2952 = 0;
    pri = fun_2838()
    var_2960 = 1;
    var_2968 = 3;
    var_2976 = 0;
    var_2984 = 11;
    var_2992 = -6167426358827044554;
    var_3000 = 40;
    pri = fun_6D18(var_2992, var_2984, var_2976, var_2968, var_2960)
    var_3008 = -6167426358827044554;
    var_3016 = 8;
    pri = fun_0BF8(var_3008)
    var_3024 = 0;
    var_3032 = 0;
    var_3040 = 0;
    var_3048 = 90;
    pri = float(var_3048)
    var_3056 = pri;
    var_3064 = 5750971725145164889;
    var_3072 = 40;
    pri = fun_0978(var_3064, var_3056, var_3048, var_3040, var_3032)
    var_3080 = 0;
    var_3088 = 4627898977085921690;
    var_3096 = 0;
    OP_PUSH5_C 4657308362261953249, 4636264413393762386, 4657046150728961229, 4658126508864181371, 4638741041345095270
    var_3104 = 4656895671567583805;
    var_3112 = 1;
    pri = EvCameraMove(var_3112, var_3104, var_3096, var_3088, var_3080, var_3072, var_3064, var_3056, var_3048, var_3040)
    var_3120 = 0;
    pri = fun_2B68()
    var_3128 = -6167426358827044554;
    var_3136 = 8;
    pri = fun_1978(var_3128)
    var_3144 = 0;
    var_3152 = 0;
    var_3160 = 0;
    var_3168 = 0;
    OP_PUSH2_C 8802641224559852288, -6167426358827044554
    var_3176 = 48;
    pri = fun_09C8(var_3168, var_3160, var_3152, var_3144, var_3136, var_3128)
    var_3184 = 1;
    var_3192 = 1;
    var_3200 = 70;
    OP_PUSH2_C 8802641224559852288, -7223751291454886954
    var_3208 = 40;
    pri = fun_1278(var_3200, var_3192, var_3184, var_3176, var_3168)
    var_3216 = 1;
    var_3224 = 1;
    var_3232 = 70;
    OP_PUSH2_C 8802641224559852288, 7594687174951932425
    var_3240 = 40;
    pri = fun_1278(var_3232, var_3224, var_3216, var_3208, var_3200)
    var_3248 = 1;
    var_3256 = 1;
    var_3264 = 70;
    OP_PUSH2_C -6167426358827044554, 8802641224559852288
    var_3272 = 40;
    pri = fun_1278(var_3264, var_3256, var_3248, var_3240, var_3232)
    var_3280 = 0;
    var_3288 = 3;
    var_3296 = 0;
    var_3304 = 100;
    var_3312 = -1;
    OP_PUSH2_C 3313599304275083949, -6167426358827044554
    var_3320 = 56;
    pri = fun_2580(var_3312, var_3304, var_3296, var_3288, var_3280, var_3272, var_3264)
    var_3328 = -6167426358827044554;
    var_3336 = 8;
    pri = fun_0A20(var_3328)
    var_3344 = 5750971725145164889;
    var_3352 = 8;
    pri = fun_0A20(var_3344)
    var_3360 = -7223751291454886954;
    var_3368 = 8;
    pri = fun_0A20(var_3360)
    var_3376 = 7594687174951932425;
    var_3384 = 8;
    pri = fun_0A20(var_3376)
    var_3392 = 8802641224559852288;
    var_3400 = 8;
    pri = fun_0A20(var_3392)
    var_3408 = 1;
    var_3416 = 8;
    pri = fun_2778(var_3408)
    var_3424 = 0;
    pri = fun_2838()
    var_3432 = 0;
    var_3440 = 4627898977085921690;
    var_3448 = 0;
    OP_PUSH5_C 4657878964816303882, 4637463496794549780, 4656683223930864927, 4658697133408764559, 4639340231201768079
    var_3456 = 4656382573471365857;
    var_3464 = 30;
    pri = EvCameraMove(var_3464, var_3456, var_3448, var_3440, var_3432, var_3424, var_3416, var_3408, var_3400, var_3392)
    var_3472 = 7;
    var_3480 = 7;
    var_3488 = -3437401476670310186;
    var_3496 = 24;
    pri = fun_1910(var_3488, var_3480, var_3472)
    var_3504 = 0;
    var_3512 = 0;
    var_3520 = 0;
    var_3528 = -90;
    pri = float(var_3528)
    var_3536 = pri;
    var_3544 = -7223751291454886954;
    var_3552 = 40;
    pri = fun_0978(var_3544, var_3536, var_3528, var_3520, var_3512)
    var_3560 = 0;
    var_3568 = 0;
    var_3576 = 0;
    var_3584 = -90;
    pri = float(var_3584)
    var_3592 = pri;
    var_3600 = 7594687174951932425;
    var_3608 = 40;
    pri = fun_0978(var_3600, var_3592, var_3584, var_3576, var_3568)
    var_3616 = 0;
    var_3624 = 0;
    var_3632 = 0;
    var_3640 = -90;
    pri = float(var_3640)
    var_3648 = pri;
    var_3656 = -6167426358827044554;
    var_3664 = 40;
    pri = fun_0978(var_3656, var_3648, var_3640, var_3632, var_3624)
    var_3672 = 1;
    var_3680 = 1;
    var_3688 = -1;
    var_3696 = -1;
    var_3704 = 0;
    var_3712 = 9;
    var_3720 = -3437401476670310186;
    var_3728 = 56;
    pri = fun_49E0(var_3720, var_3712, var_3704, var_3696, var_3688, var_3680, var_3672)
    var_3736 = 0;
    var_3744 = 3;
    var_3752 = 0;
    var_3760 = 100;
    var_3768 = -1;
    OP_PUSH2_C 5407478485967411176, -3437401476670310186
    var_3776 = 56;
    pri = fun_2580(var_3768, var_3760, var_3752, var_3744, var_3736, var_3728, var_3720)
    var_3784 = -7223751291454886954;
    var_3792 = 8;
    pri = fun_0A20(var_3784)
    var_3800 = 7594687174951932425;
    var_3808 = 8;
    pri = fun_0A20(var_3800)
    var_3816 = -6167426358827044554;
    var_3824 = 8;
    pri = fun_0A20(var_3816)
    var_3832 = 0;
    pri = fun_2B68()
    var_3840 = 1;
    var_3848 = 8;
    pri = fun_2778(var_3840)
    var_3856 = 0;
    pri = fun_2838()
    var_3864 = 1;
    var_3872 = 3;
    var_3880 = 0;
    var_3888 = 9;
    var_3896 = -3437401476670310186;
    var_3904 = 40;
    pri = fun_6D18(var_3896, var_3888, var_3880, var_3872, var_3864)
    var_3912 = -3437401476670310186;
    var_3920 = 8;
    pri = fun_0BF8(var_3912)
    var_3928 = -3437401476670310186;
    var_3936 = 8;
    pri = fun_1978(var_3928)
    var_3944 = -1;
    var_3952 = 8802641224559852288;
    var_3960 = 16;
    pri = fun_17A0(var_3952, var_3944)
    var_3968 = 3;
    var_3976 = 30;
    pri = EvCameraEnd(var_3976, var_3968)
    var_3984 = 0;
    var_3992 = 8802641224559852288;
    var_4000 = 16;
    pri = fun_0800(var_3992, var_3984)
    var_4008 = 0;
    var_4016 = -3437401476670310186;
    var_4024 = 16;
    pri = fun_0800(var_4016, var_4008)
    var_4032 = 0;
    var_4040 = -6167426358827044554;
    var_4048 = 16;
    pri = fun_0800(var_4040, var_4032)
    var_4056 = 0;
    var_4064 = -7223751291454886954;
    var_4072 = 16;
    pri = fun_0800(var_4064, var_4056)
    var_4080 = 0;
    var_4088 = 7594687174951932425;
    var_4096 = 16;
    pri = fun_0800(var_4088, var_4080)
    var_4104 = 0;
    var_4112 = 5750971725145164889;
    var_4120 = 16;
    pri = fun_0800(var_4112, var_4104)
    var_4128 = 4;
    var_4136 = 1176446404928635718;
    pri = WorkSet(var_4136, var_4128)
    pri = 0;
    return pri;
}
// fun_11598
fun_11598() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 35256;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0338(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03A8()
    var_56 = 36016;
    pri = SoundPostEvent(var_56)
    var_64 = 1;
    var_72 = 1;
    OP_PUSH4_C -4587338432941916160, 4656164342403484877, 4656804697975501619, 8802641224559852288
    var_80 = 48;
    pri = fun_0750(var_72, var_64, var_56, var_48, var_40, var_32)
    pri = EvCameraStart()
    var_88 = 1;
    var_96 = 8802641224559852288;
    var_104 = 16;
    pri = fun_0800(var_96, var_88)
    var_112 = 1;
    var_120 = -3437401476670310186;
    var_128 = 16;
    pri = fun_0800(var_120, var_112)
    var_136 = 1;
    var_144 = -6167426358827044554;
    var_152 = 16;
    pri = fun_0800(var_144, var_136)
    var_160 = 1;
    var_168 = -7223751291454886954;
    var_176 = 16;
    pri = fun_0800(var_168, var_160)
    var_184 = 1;
    var_192 = 7594687174951932425;
    var_200 = 16;
    pri = fun_0800(var_192, var_184)
    var_208 = 1;
    var_216 = 5750971725145164889;
    var_224 = 16;
    pri = fun_0800(var_216, var_208)
    var_232 = 10;
    var_240 = 8;
    pri = fun_0090(var_232)
    var_248 = 0;
    var_256 = 4627476764620855706;
    var_264 = 0;
    OP_PUSH5_C 4658291413618115215, 4641075524433189274, 4656560342511344681, 4659096498022205358, 4643649613095208223
    var_272 = 4656318318011838628;
    var_280 = 1;
    pri = EvCameraMove(var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208)
    var_288 = 0;
    pri = fun_2B68()
    var_296 = 0;
    var_304 = 4627476764620855706;
    var_312 = 3;
    OP_PUSH5_C 4658028894221867418, 4640093176764469084, 4656639287446218998, 4658833978625957560, 4643106014546435768
    var_320 = 4656397218966247834;
    var_328 = 100;
    pri = EvCameraMove(var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    var_336 = 34960;
    var_344 = 8;
    var_352 = 16;
    pri = fun_02D8(var_344, var_336)
    var_360 = 0;
    pri = fun_03A8()
    var_368 = 0;
    var_376 = 0;
    var_384 = 0;
    var_392 = 0;
    OP_PUSH2_C -3437401476670310186, 8802641224559852288
    var_400 = 48;
    pri = fun_09C8(var_392, var_384, var_376, var_368, var_360, var_352)
    var_408 = 8802641224559852288;
    var_416 = 8;
    pri = fun_0A20(var_408)
    var_424 = 5;
    var_432 = 8;
    pri = fun_0090(var_424)
    var_440 = 1;
    var_448 = -1;
    var_456 = -1;
    var_464 = 3;
    var_472 = 0;
    var_480 = 19;
    var_488 = 8802641224559852288;
    var_496 = 56;
    pri = fun_2E00(var_488, var_480, var_472, var_464, var_456, var_448, var_440)
    var_504 = 8802641224559852288;
    var_512 = 8;
    pri = fun_0BF8(var_504)
    var_520 = 0;
    var_528 = 0;
    var_536 = 0;
    var_544 = 0;
    OP_PUSH2_C 8802641224559852288, -3437401476670310186
    var_552 = 48;
    pri = fun_09C8(var_544, var_536, var_528, var_520, var_512, var_504)
    var_560 = 0;
    var_568 = 0;
    var_576 = 0;
    var_584 = 0;
    OP_PUSH2_C 5750971725145164889, -6167426358827044554
    var_592 = 48;
    pri = fun_09C8(var_584, var_576, var_568, var_560, var_552, var_544)
    var_600 = 0;
    var_608 = 0;
    var_616 = 0;
    var_624 = 0;
    OP_PUSH2_C 5750971725145164889, -7223751291454886954
    var_632 = 48;
    pri = fun_09C8(var_624, var_616, var_608, var_600, var_592, var_584)
    var_640 = 0;
    var_648 = 0;
    var_656 = 0;
    var_664 = 0;
    OP_PUSH2_C 5750971725145164889, 7594687174951932425
    var_672 = 48;
    pri = fun_09C8(var_664, var_656, var_648, var_640, var_632, var_624)
    var_680 = 0;
    var_688 = 3;
    var_696 = 0;
    var_704 = 100;
    var_712 = -1;
    OP_PUSH2_C 5404531794804373371, -3437401476670310186
    var_720 = 56;
    pri = fun_2580(var_712, var_704, var_696, var_688, var_680, var_672, var_664)
    var_728 = -3437401476670310186;
    var_736 = 8;
    pri = fun_0A20(var_728)
    var_744 = -6167426358827044554;
    var_752 = 8;
    pri = fun_0A20(var_744)
    var_760 = -7223751291454886954;
    var_768 = 8;
    pri = fun_0A20(var_760)
    var_776 = 7594687174951932425;
    var_784 = 8;
    pri = fun_0A20(var_776)
    var_792 = 1;
    var_800 = 8;
    pri = fun_2778(var_792)
    var_808 = 0;
    pri = fun_2838()
    var_816 = 0;
    var_824 = 4627476764620855706;
    var_832 = 0;
    OP_PUSH5_C 4656171159375577088, 4634747966956733727, 4656700244370862899, 4657269373579632312, 4637239724188064809
    var_840 = 4656453513961589965;
    var_848 = 1;
    pri = EvCameraMove(var_848, var_840, var_832, var_824, var_816, var_808, var_800, var_792, var_784, var_776)
    var_856 = 0;
    pri = fun_2B68()
    var_864 = 0;
    var_872 = 0;
    var_880 = 0;
    var_888 = 23;
    pri = float(var_888)
    var_896 = pri;
    var_904 = 5750971725145164889;
    var_912 = 40;
    pri = fun_0978(var_904, var_896, var_888, var_880, var_872)
    var_920 = 1;
    var_928 = 1;
    var_936 = 40;
    var_944 = 6;
    var_952 = 8802641224559852288;
    var_960 = 40;
    pri = fun_1330(var_952, var_944, var_936, var_928, var_920)
    var_968 = 0;
    var_976 = 4;
    var_984 = 0;
    var_992 = 819;
    pri = SoundPlayPokeVoice(var_992, var_984, var_976, var_968)
    var_1000 = 0;
    var_1008 = 3;
    var_1016 = 0;
    var_1024 = 100;
    var_1032 = -1;
    OP_PUSH2_C 8075745780219853320, 5750971725145164889
    var_1040 = 56;
    pri = fun_2580(var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984)
    var_1048 = 5750971725145164889;
    var_1056 = 8;
    pri = fun_0A20(var_1048)
    var_1064 = 1;
    var_1072 = 8;
    pri = fun_2778(var_1064)
    var_1080 = 0;
    pri = fun_2838()
    var_1088 = 1;
    var_1096 = 1;
    var_1104 = 30;
    var_1112 = 1;
    var_1120 = 8802641224559852288;
    var_1128 = 40;
    pri = fun_1330(var_1120, var_1112, var_1104, var_1096, var_1088)
    var_1136 = 0;
    var_1144 = 4627476764620855706;
    var_1152 = 0;
    OP_PUSH5_C 4657229307375916155, 4637968744377745408, 4656980399933620224, 4658042506175819284, 4641354888347574600
    var_1160 = 4656943016538275840;
    var_1168 = 1;
    pri = EvCameraMove(var_1168, var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096)
    var_1176 = 0;
    pri = fun_2B68()
    var_1184 = 0;
    var_1192 = 4627476764620855706;
    var_1200 = 3;
    OP_PUSH5_C 4657231484408939151, 4637968744377745408, 4657027920826172703, 4658044705199074836, 4641353129128970158
    var_1208 = 4656990559421060874;
    var_1216 = 100;
    pri = EvCameraMove(var_1216, var_1208, var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144)
    var_1224 = 1;
    var_1232 = 1;
    var_1240 = -1;
    var_1248 = -1;
    var_1256 = 0;
    var_1264 = 2;
    var_1272 = 7594687174951932425;
    var_1280 = 56;
    pri = fun_49E0(var_1272, var_1264, var_1256, var_1248, var_1240, var_1232, var_1224)
    var_1288 = 0;
    var_1296 = 3;
    var_1304 = 0;
    var_1312 = 100;
    var_1320 = -1;
    OP_PUSH2_C 3496368926890945010, 7594687174951932425
    var_1328 = 56;
    pri = fun_2580(var_1320, var_1312, var_1304, var_1296, var_1288, var_1280, var_1272)
    var_1336 = 1;
    var_1344 = 8;
    pri = fun_2778(var_1336)
    var_1352 = 0;
    pri = fun_2838()
    var_1360 = 1;
    var_1368 = 1;
    var_1376 = -1;
    var_1384 = -1;
    var_1392 = 0;
    var_1400 = 1;
    var_1408 = -7223751291454886954;
    var_1416 = 56;
    pri = fun_49E0(var_1408, var_1400, var_1392, var_1384, var_1376, var_1368, var_1360)
    var_1424 = 0;
    var_1432 = 3;
    var_1440 = 0;
    var_1448 = 100;
    var_1456 = -1;
    OP_PUSH2_C -8498145834432907628, -7223751291454886954
    var_1464 = 56;
    pri = fun_2580(var_1456, var_1448, var_1440, var_1432, var_1424, var_1416, var_1408)
    var_1472 = 1;
    var_1480 = 8;
    pri = fun_2778(var_1472)
    var_1488 = 0;
    pri = fun_2838()
    var_1496 = 1;
    var_1504 = 1;
    var_1512 = -1;
    var_1520 = -1;
    var_1528 = 0;
    var_1536 = 1;
    var_1544 = -6167426358827044554;
    var_1552 = 56;
    pri = fun_49E0(var_1544, var_1536, var_1528, var_1520, var_1512, var_1504, var_1496)
    var_1560 = 0;
    var_1568 = 3;
    var_1576 = 0;
    var_1584 = 100;
    var_1592 = -1;
    OP_PUSH2_C 3312600947716857586, -6167426358827044554
    var_1600 = 56;
    pri = fun_2580(var_1592, var_1584, var_1576, var_1568, var_1560, var_1552, var_1544)
    var_1608 = 1;
    var_1616 = 8;
    pri = fun_2778(var_1608)
    var_1624 = 0;
    pri = fun_2838()
    var_1632 = 0;
    var_1640 = 0;
    var_1648 = 0;
    var_1656 = 819;
    pri = SoundPlayPokeVoice(var_1656, var_1648, var_1640, var_1632)
    var_1664 = 1;
    var_1672 = -1;
    var_1680 = -1;
    var_1688 = 3;
    var_1696 = 0;
    var_1704 = 30;
    var_1712 = 5750971725145164889;
    var_1720 = 56;
    pri = fun_2E00(var_1712, var_1704, var_1696, var_1688, var_1680, var_1672, var_1664)
    var_1728 = 0;
    var_1736 = 3;
    var_1744 = 0;
    var_1752 = 100;
    var_1760 = -1;
    OP_PUSH2_C 8075749078754737953, 5750971725145164889
    var_1768 = 56;
    pri = fun_2580(var_1760, var_1752, var_1744, var_1736, var_1728, var_1720, var_1712)
    var_1776 = 5750971725145164889;
    var_1784 = 8;
    pri = fun_0BF8(var_1776)
    var_1792 = 1;
    var_1800 = 8;
    pri = fun_2778(var_1792)
    var_1808 = 0;
    pri = fun_2838()
    var_1816 = 1;
    var_1824 = 3;
    var_1832 = 0;
    var_1840 = 2;
    var_1848 = -6167426358827044554;
    var_1856 = 40;
    pri = fun_6D18(var_1848, var_1840, var_1832, var_1824, var_1816)
    var_1864 = 1;
    var_1872 = 3;
    var_1880 = 0;
    var_1888 = 1;
    var_1896 = -7223751291454886954;
    var_1904 = 40;
    pri = fun_6D18(var_1896, var_1888, var_1880, var_1872, var_1864)
    var_1912 = 1;
    var_1920 = 3;
    var_1928 = 0;
    var_1936 = 1;
    var_1944 = 7594687174951932425;
    var_1952 = 40;
    pri = fun_6D18(var_1944, var_1936, var_1928, var_1920, var_1912)
    var_1960 = 0;
    var_1968 = 4627476764620855706;
    var_1976 = 0;
    OP_PUSH5_C 4656931955451300413, 4635412247901770875, 4654980124399905014, 4656665675725285622, 4640069603235169567
    var_1984 = 4656537252767161385;
    var_1992 = 1;
    pri = EvCameraMove(var_1992, var_1984, var_1976, var_1968, var_1960, var_1952, var_1944, var_1936, var_1928, var_1920)
    var_2000 = 0;
    pri = fun_2B68()
    var_2008 = -1;
    var_2016 = 8802641224559852288;
    var_2024 = 16;
    pri = fun_17A0(var_2016, var_2008)
    var_2032 = 0;
    var_2040 = 3;
    var_2048 = 0;
    var_2056 = 100;
    var_2064 = -1;
    OP_PUSH2_C 5404532894316001582, -3437401476670310186
    var_2072 = 56;
    pri = fun_2580(var_2064, var_2056, var_2048, var_2040, var_2032, var_2024, var_2016)
    var_2080 = -6167426358827044554;
    var_2088 = 8;
    pri = fun_0BF8(var_2080)
    var_2096 = -7223751291454886954;
    var_2104 = 8;
    pri = fun_0BF8(var_2096)
    var_2112 = 7594687174951932425;
    var_2120 = 8;
    pri = fun_0BF8(var_2112)
    var_2128 = 1;
    var_2136 = 8;
    pri = fun_2778(var_2128)
    var_2144 = 0;
    pri = fun_2838()
    var_2152 = 0;
    var_2160 = 4627476764620855706;
    var_2168 = 0;
    OP_PUSH5_C 4656470710323448381, 4637709083711729828, 4656791130002014863, 4656737165971323617, 4640827122766242120
    var_2176 = 4657598281487965225;
    var_2184 = 1;
    pri = EvCameraMove(var_2184, var_2176, var_2168, var_2160, var_2152, var_2144, var_2136, var_2128, var_2120, var_2112)
    var_2192 = 0;
    pri = fun_2B68()
    var_2200 = 1;
    var_2208 = 1;
    var_2216 = -1;
    var_2224 = -1;
    var_2232 = 0;
    var_2240 = 11;
    var_2248 = -3437401476670310186;
    var_2256 = 56;
    pri = fun_49E0(var_2248, var_2240, var_2232, var_2224, var_2216, var_2208, var_2200)
    var_2264 = 0;
    var_2272 = 3;
    var_2280 = 0;
    var_2288 = 100;
    var_2296 = -1;
    OP_PUSH2_C 5404533993827629793, -3437401476670310186
    var_2304 = 56;
    pri = fun_2580(var_2296, var_2288, var_2280, var_2272, var_2264, var_2256, var_2248)
    var_2312 = 1;
    var_2320 = 8;
    pri = fun_2778(var_2312)
    var_2328 = 0;
    pri = fun_2838()
    var_2336 = 1;
    var_2344 = 3;
    var_2352 = 0;
    var_2360 = 11;
    var_2368 = -3437401476670310186;
    var_2376 = 40;
    pri = fun_6D18(var_2368, var_2360, var_2352, var_2344, var_2336)
    var_2384 = -3437401476670310186;
    var_2392 = 8;
    pri = fun_0BF8(var_2384)
    var_2400 = 0;
    var_2408 = 4627476764620855706;
    var_2416 = 3;
    OP_PUSH5_C 4656428884901127782, 4638027854122854646, 4656723356105278751, 4656491381142050570, 4641899894271230607
    var_2424 = 4657528528470299116;
    var_2432 = 60;
    pri = EvCameraMove(var_2432, var_2424, var_2416, var_2408, var_2400, var_2392, var_2384, var_2376, var_2368, var_2360)
    var_2440 = 1;
    var_2448 = 0;
    OP_PUSH5_C 4641240890982006784, 8802641224559852288, 4656739386984811725, 4656609864515059712, 4607182418800017408
    var_2456 = -3437401476670310186;
    var_2464 = 64;
    pri = fun_08B8(var_2456, var_2448, var_2440, var_2432, var_2424, var_2416, var_2408, var_2400)
    var_2472 = 0;
    var_2480 = 3;
    var_2488 = 0;
    var_2496 = 100;
    var_2504 = -1;
    OP_PUSH2_C 5404535093339258004, -3437401476670310186
    var_2512 = 56;
    pri = fun_2580(var_2504, var_2496, var_2488, var_2480, var_2472, var_2464, var_2456)
    var_2520 = 0;
    var_2528 = 0;
    var_2536 = 0;
    var_2544 = 0;
    OP_PUSH2_C -3437401476670310186, 8802641224559852288
    var_2552 = 48;
    pri = fun_09C8(var_2544, var_2536, var_2528, var_2520, var_2512, var_2504)
    var_2560 = -3437401476670310186;
    var_2568 = 8;
    pri = fun_0A20(var_2560)
    var_2576 = 8802641224559852288;
    var_2584 = 8;
    pri = fun_0BF8(var_2576)
    var_2592 = 1;
    var_2600 = 8;
    pri = fun_2778(var_2592)
    var_2608 = 0;
    pri = fun_2838()
    var_2616 = 1;
    var_2624 = 265;
    pri = ItemAdd(var_2624, var_2616)
    var_2632 = 6;
    var_2640 = 4;
    var_2648 = 2;
    var_2656 = 0;
    var_2664 = 9;
    var_2672 = 1;
    var_2680 = 265;
    var_2688 = -3437401476670310186;
    var_2696 = 64;
    pri = fun_9ED0(var_2688, var_2680, var_2672, var_2664, var_2656, var_2648, var_2640, var_2632)
    var_2704 = 0;
    var_2712 = 4627476764620855706;
    var_2720 = 0;
    OP_PUSH5_C 4657626011171217736, 4639226233836200264, 4656928612935951974, 4658431139555772989, 4642235905024678953
    var_2728 = 4656807688647129170;
    var_2736 = 1;
    pri = EvCameraMove(var_2736, var_2728, var_2720, var_2712, var_2704, var_2696, var_2688, var_2680, var_2672, var_2664)
    var_2744 = 0;
    pri = fun_2B68()
    var_2752 = 5;
    var_2760 = 5;
    var_2768 = -3437401476670310186;
    var_2776 = 24;
    pri = fun_1910(var_2768, var_2760, var_2752)
    var_2784 = 0;
    var_2792 = 0;
    var_2800 = 0;
    var_2808 = 0;
    pri = float(var_2808)
    var_2816 = pri;
    var_2824 = -3437401476670310186;
    var_2832 = 40;
    pri = fun_0978(var_2824, var_2816, var_2808, var_2800, var_2792)
    var_2840 = -3437401476670310186;
    var_2848 = 8;
    pri = fun_0A20(var_2840)
    var_2856 = 1;
    var_2864 = -1;
    var_2872 = -1;
    var_2880 = 3;
    var_2888 = 0;
    var_2896 = 0;
    var_2904 = -3437401476670310186;
    var_2912 = 56;
    pri = fun_2E00(var_2904, var_2896, var_2888, var_2880, var_2872, var_2864, var_2856)
    var_2920 = 0;
    var_2928 = 3;
    var_2936 = 0;
    var_2944 = 100;
    var_2952 = -1;
    OP_PUSH2_C 5404536192850886215, -3437401476670310186
    var_2960 = 56;
    pri = fun_2580(var_2952, var_2944, var_2936, var_2928, var_2920, var_2912, var_2904)
    var_2968 = -3437401476670310186;
    var_2976 = 8;
    pri = fun_0BF8(var_2968)
    var_2984 = 1;
    var_2992 = 8;
    pri = fun_2778(var_2984)
    var_3000 = 0;
    pri = fun_2838()
    var_3008 = 1;
    var_3016 = 0;
    var_3024 = 20;
    pri = float(var_3024)
    var_3032 = pri;
    var_3040 = 0;
    var_3048 = 0;
    OP_PUSH4_C 4658157756984642765, 4655822614189572096, 4611686018427387904, -3437401476670310186
    var_3056 = 72;
    pri = fun_0840(var_3048, var_3040, var_3032, var_3024, var_3016, var_3008, var_3000, var_2992, var_2984)
    var_3064 = 0;
    var_3072 = 3;
    var_3080 = 0;
    var_3088 = 100;
    var_3096 = -1;
    OP_PUSH2_C 5404537292362514426, -3437401476670310186
    var_3104 = 56;
    pri = fun_2580(var_3096, var_3088, var_3080, var_3072, var_3064, var_3056, var_3048)
    var_3112 = -3437401476670310186;
    var_3120 = 8;
    pri = fun_0A20(var_3112)
    var_3128 = 1;
    var_3136 = 8;
    pri = fun_2778(var_3128)
    var_3144 = 0;
    pri = fun_2838()
    var_3152 = 36184;
    pri = SoundPostEvent(var_3152)
    var_3160 = 1;
    var_3168 = 0;
    var_3176 = 20;
    pri = float(var_3176)
    var_3184 = pri;
    var_3192 = 0;
    var_3200 = 0;
    OP_PUSH4_C 4658157756984642765, 4655822614189572096, 4611686018427387904, -6167426358827044554
    var_3208 = 72;
    pri = fun_0840(var_3200, var_3192, var_3184, var_3176, var_3168, var_3160, var_3152, var_3144, var_3136)
    var_3216 = 0;
    var_3224 = 3;
    var_3232 = 0;
    var_3240 = 100;
    var_3248 = -1;
    OP_PUSH2_C 3312602047228485797, -6167426358827044554
    var_3256 = 56;
    pri = fun_2580(var_3248, var_3240, var_3232, var_3224, var_3216, var_3208, var_3200)
    var_3264 = -6167426358827044554;
    var_3272 = 8;
    pri = fun_0A20(var_3264)
    var_3280 = 1;
    var_3288 = 8;
    pri = fun_2778(var_3280)
    var_3296 = 0;
    pri = fun_2838()
    var_3304 = 36432;
    pri = SoundPostEvent(var_3304)
    var_3312 = 1;
    var_3320 = 0;
    var_3328 = 20;
    pri = float(var_3328)
    var_3336 = pri;
    var_3344 = 0;
    var_3352 = 0;
    OP_PUSH4_C 4658157756984642765, 4655822614189572096, 4611686018427387904, -7223751291454886954
    var_3360 = 72;
    pri = fun_0840(var_3352, var_3344, var_3336, var_3328, var_3320, var_3312, var_3304, var_3296, var_3288)
    var_3368 = 0;
    var_3376 = 3;
    var_3384 = 0;
    var_3392 = 100;
    var_3400 = -1;
    OP_PUSH2_C -8498155730037561527, -7223751291454886954
    var_3408 = 56;
    pri = fun_2580(var_3400, var_3392, var_3384, var_3376, var_3368, var_3360, var_3352)
    var_3416 = -7223751291454886954;
    var_3424 = 8;
    pri = fun_0A20(var_3416)
    var_3432 = 1;
    var_3440 = 8;
    pri = fun_2778(var_3432)
    var_3448 = 0;
    pri = fun_2838()
    var_3456 = 36680;
    pri = SoundPostEvent(var_3456)
    var_3464 = 0;
    var_3472 = 4627476764620855706;
    var_3480 = 3;
    OP_PUSH5_C 4657596610230291005, 4639398989103156429, 4656749612442950042, 4658092621915813315, 4641252149981075210
    var_3488 = 4656628248349476127;
    var_3496 = 60;
    pri = EvCameraMove(var_3496, var_3488, var_3480, var_3472, var_3464, var_3456, var_3448, var_3440, var_3432, var_3424)
    var_3504 = 50;
    var_3512 = 8;
    pri = fun_0090(var_3504)
    var_3520 = 0;
    var_3528 = 4627476764620855706;
    var_3536 = 0;
    OP_PUSH5_C 4655656543953312809, 4628422520542603510, 4656514954671350088, 4657017717358266941, 4635013960809725297
    var_3544 = 4656564564635995341;
    var_3552 = 1;
    pri = EvCameraMove(var_3552, var_3544, var_3536, var_3528, var_3520, var_3512, var_3504, var_3496, var_3488, var_3480)
    var_3560 = 0;
    pri = fun_2B68()
    var_3568 = 0;
    var_3576 = 4627476764620855706;
    var_3584 = 3;
    OP_PUSH5_C 4655420148953340969, 4627696315102690017, 4656507873816467210, 4656899519858281021, 4634832409449746924
    var_3592 = 4656557483781112463;
    var_3600 = 100;
    pri = EvCameraMove(var_3600, var_3592, var_3584, var_3576, var_3568, var_3560, var_3552, var_3544, var_3536, var_3528)
    var_3608 = 50;
    var_3616 = 8;
    pri = fun_0090(var_3608)
    var_3624 = 0;
    var_3632 = 1;
    var_3640 = 0;
    var_3648 = 819;
    pri = SoundPlayPokeVoice(var_3648, var_3640, var_3632, var_3624)
    var_3656 = 1;
    var_3664 = -1;
    var_3672 = -1;
    var_3680 = 3;
    var_3688 = 0;
    var_3696 = 30;
    var_3704 = 5750971725145164889;
    var_3712 = 56;
    pri = fun_2E00(var_3704, var_3696, var_3688, var_3680, var_3672, var_3664, var_3656)
    var_3720 = 0;
    var_3728 = 3;
    var_3736 = 0;
    var_3744 = 100;
    var_3752 = -1;
    OP_PUSH2_C 8075747979243109742, 5750971725145164889
    var_3760 = 56;
    pri = fun_2580(var_3752, var_3744, var_3736, var_3728, var_3720, var_3712, var_3704)
    var_3768 = 5750971725145164889;
    var_3776 = 8;
    pri = fun_0BF8(var_3768)
    var_3784 = 1;
    var_3792 = 8;
    pri = fun_2778(var_3784)
    var_3800 = 0;
    pri = fun_2838()
    var_3808 = 1;
    var_3816 = 0;
    var_3824 = 36928;
    var_3832 = 8;
    var_3840 = 32;
    pri = fun_0338(var_3832, var_3824, var_3816, var_3808)
    var_3848 = 0;
    pri = fun_03A8()
    var_3856 = 0;
    var_3864 = 8802641224559852288;
    var_3872 = 16;
    pri = fun_0800(var_3864, var_3856)
    var_3880 = 0;
    var_3888 = -3437401476670310186;
    var_3896 = 16;
    pri = fun_0800(var_3888, var_3880)
    var_3904 = 0;
    var_3912 = -6167426358827044554;
    var_3920 = 16;
    pri = fun_0800(var_3912, var_3904)
    var_3928 = 0;
    var_3936 = -7223751291454886954;
    var_3944 = 16;
    pri = fun_0800(var_3936, var_3928)
    var_3952 = 0;
    var_3960 = 7594687174951932425;
    var_3968 = 16;
    pri = fun_0800(var_3960, var_3952)
    var_3976 = 0;
    var_3984 = 5750971725145164889;
    var_3992 = 16;
    pri = fun_0800(var_3984, var_3976)
    var_4000 = -3437401476670310186;
    var_4008 = 8;
    pri = fun_06C8(var_4000)
    var_4016 = -6167426358827044554;
    var_4024 = 8;
    pri = fun_06C8(var_4016)
    var_4032 = -7223751291454886954;
    var_4040 = 8;
    pri = fun_06C8(var_4032)
    var_4048 = 5;
    var_4056 = 1176446404928635718;
    pri = WorkSet(var_4056, var_4048)
    var_4064 = 3;
    var_4072 = 1;
    pri = EvCameraEnd(var_4072, var_4064)
    var_4080 = 15;
    var_4088 = 8;
    pri = fun_0090(var_4080)
    var_4096 = 36968;
    pri = SoundPostEvent(var_4096)
    var_4104 = 34960;
    var_4112 = 8;
    var_4120 = 16;
    pri = fun_02D8(var_4112, var_4104)
    var_4128 = 0;
    pri = fun_03A8()
    pri = 0;
    return pri;
}
