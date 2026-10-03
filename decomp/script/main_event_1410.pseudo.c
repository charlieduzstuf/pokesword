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
    var_8 = arg_1;
    pri = float(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = floatadd(var_24, var_16)
    return pri;
}
// fun_00E8
fun_00E8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSLESS lab_0128
    pri = 0;
    return pri;
// lab_0128
    OP_ZERO_P_S -8
    OP_JUMP lab_0150
// lab_0150
    OP_LOAD_S_BOTH -8, 24
    OP_JSGEQ lab_01A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0148
// lab_01A8
    pri = 0;
    return pri;
// lab_0148
    OP_INC_P_S -8
}
// fun_01C0
fun_01C0() {
    OP_ZERO_P_S -8
    OP_JUMP lab_01F0
// lab_01F0
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_02F0
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_0270
    pri = 0;
    return pri;
// lab_02F0
    pri = 0;
    return pri;
// lab_0270
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
    OP_JUMP lab_01E8
// lab_01E8
    OP_INC_P_S -8
}
// fun_0308
fun_0308() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0368
fun_0368() {
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
// fun_03D8
fun_03D8() {
    OP_JUMP lab_03F0
// lab_03F0
    pri = FadeWait_()
    OP_JZER lab_0428
    pri = 0;
    return pri;
// lab_0428
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_03F0
    pri = 0;
    return pri;
}
// fun_0468
fun_0468() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_0490
fun_0490() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_04C0
fun_04C0() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_00E8(var_8)
    OP_JUMP lab_04F8
// lab_04F8
    var_8 = 0;
    pri = fun_0640()
    OP_JNZ lab_0530
    OP_JUMP lab_0560
// lab_0530
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_04F8
// lab_0560
    var_8 = 1;
    var_16 = 8;
    pri = fun_00E8(var_8)
    OP_JUMP lab_0590
// lab_0590
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_05D0
    pri = 0;
    return pri;
// lab_05D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0590
    pri = 0;
    return pri;
}
// fun_0610
fun_0610() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0640
fun_0640() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0668
fun_0668() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_06C0
fun_06C0() {
    var_16 = arg_0;
    pri = GetFieldObjectPositionX_(var_16)
    var_8 = pri;
    var_32 = arg_1;
    pri = GetFieldObjectPositionX_(var_32)
    var_16 = pri;
    pri = var_8;
    var_40 = pri;
    OP_PUSH2_S -8, -16
    pri = floatsub(var_40, var_32)
    OP_MOVE_ALT 
    pri = arg_2;
    var_48 = pri;
    var_56 = alt;
    pri = floatmul(var_56, var_48)
    OP_POP_ALT 
    var_64 = pri;
    var_72 = alt;
    pri = floatadd(var_72, var_64)
    return pri;
}
// fun_07E0
fun_07E0() {
    var_16 = arg_0;
    pri = GetFieldObjectPositionY_(var_16)
    var_8 = pri;
    var_32 = arg_1;
    pri = GetFieldObjectPositionY_(var_32)
    var_16 = pri;
    pri = var_8;
    var_40 = pri;
    OP_PUSH2_S -8, -16
    pri = floatsub(var_40, var_32)
    OP_MOVE_ALT 
    pri = arg_2;
    var_48 = pri;
    var_56 = alt;
    pri = floatmul(var_56, var_48)
    OP_POP_ALT 
    var_64 = pri;
    var_72 = alt;
    pri = floatadd(var_72, var_64)
    return pri;
}
// fun_0900
fun_0900() {
    var_16 = arg_0;
    pri = GetFieldObjectPositionZ_(var_16)
    var_8 = pri;
    var_32 = arg_1;
    pri = GetFieldObjectPositionZ_(var_32)
    var_16 = pri;
    pri = var_8;
    var_40 = pri;
    OP_PUSH2_S -8, -16
    pri = floatsub(var_40, var_32)
    OP_MOVE_ALT 
    pri = arg_2;
    var_48 = pri;
    var_56 = alt;
    pri = floatmul(var_56, var_48)
    OP_POP_ALT 
    var_64 = pri;
    var_72 = alt;
    pri = floatadd(var_72, var_64)
    return pri;
}
// fun_0A20
fun_0A20() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0A58
fun_0A58() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0A90
fun_0A90() {
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
// fun_0B08
fun_0B08() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0B58
fun_0B58() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0BB0
fun_0BB0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1CE0(var_8)
    OP_JZER lab_0C28
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1D10(var_24)
    OP_JNZ lab_0C28
    pri = 0;
    return pri;
// lab_0C28
    OP_JUMP lab_0C38
// lab_0C38
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0C98
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0C98
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0C38
    pri = 0;
    return pri;
}
// fun_0CD8
fun_0CD8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0D10
fun_0D10() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0D50
fun_0D50() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0D88
fun_0D88() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0DD0
    pri = 0;
    return pri;
// lab_0DD0
    var_8 = 1;
    var_16 = 8;
    pri = fun_00E8(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0E10
// lab_0E10
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1CE0(var_8)
    OP_JNZ lab_0E98
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0E88
    pri = 0;
    return pri;
// lab_0E98
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0EE0
    pri = 0;
    return pri;
// lab_0EE0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0F40
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F88(var_8)
    pri = 0;
    return pri;
// lab_0F40
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0E10
    pri = 0;
    return pri;
// lab_0E88
    OP_JUMP lab_0EE0
}
// fun_0F88
fun_0F88() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0FC0
fun_0FC0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1010
    pri = 0;
    return pri;
// lab_1010
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1CE0(var_8)
    OP_JZER lab_1140
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1068
    OP_ZERO_P_S 64
// lab_1140
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1178
    OP_CONST_S 64, 1
// lab_1178
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_11B0
    OP_CONST_S 72, 1
// lab_11B0
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
// lab_1068
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1090
    OP_ZERO_P_S 72
// lab_1090
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
    OP_JUMP lab_1250
// lab_1250
    pri = 0;
    return pri;
}
// fun_1260
fun_1260() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12A0
fun_12A0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12E0
fun_12E0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1338
fun_1338() {
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
// fun_1398
fun_1398() {
    OP_CONST_S -8, 4631530004285489152
    pri = arg_1;
    switch (pri) {
// switch_1758
        case default:
        {
// switch_1758_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_1758_case_0x0
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
            pri = fun_1338(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1758_case_default
        }
        case 0x1:
        {
// switch_1758_case_0x1
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_1338(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1758_case_default
        }
        case 0x2:
        {
// switch_1758_case_0x2
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
            pri = fun_1338(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1758_case_default
        }
        case 0x3:
        {
// switch_1758_case_0x3
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 0;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_1338(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1758_case_default
        }
        case 0x4:
        {
// switch_1758_case_0x4
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
            pri = fun_1338(var_80, var_72, var_64, var_56, var_48, var_40)
            OP_JUMP switch_1758_case_default
        }
        case 0x5:
        {
// switch_1758_case_0x5
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
            pri = fun_1338(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1758_case_default
        }
        case 0x6:
        {
// switch_1758_case_0x6
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
            pri = fun_1338(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1758_case_default
        }
        case 0x7:
        {
// switch_1758_case_0x7
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_1338(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1758_case_default
        }
    }
}
// fun_1808
fun_1808() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1848
fun_1848() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = ResetFieldObjectEyeLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1888
fun_1888() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_18C8
fun_18C8() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1900
fun_1900() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1940
fun_1940() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1978
fun_1978() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1888(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1900(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_19E0
fun_19E0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_18C8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1940(var_24)
    pri = 0;
    return pri;
}
// fun_1A38
fun_1A38() {
    var_8 = arg_1;
    var_16 = 8;
    pri = fun_1CE0(var_8)
    OP_JZER lab_1AD8
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
// lab_1AD8
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
// fun_1B40
fun_1B40() {
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
    pri = fun_1A38(var_2616, var_2608, var_2600, var_2592, var_2584, var_2576)
    return pri;
}
// fun_1CE0
fun_1CE0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1D10
fun_1D10() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1D40
fun_1D40() {
    OP_JUMP lab_1D58
// lab_1D58
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1DE8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1DD8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D88(var_8)
    pri = 0;
    return pri;
// lab_1DE8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1E78
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1E68
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D88(var_8)
    pri = 0;
    return pri;
// lab_1E78
    pri = 0;
    return pri;
// lab_1E68
    OP_JUMP lab_1E88
// lab_1E88
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1D58
    pri = 0;
    return pri;
// lab_1DD8
    OP_JUMP lab_1E88
}
// fun_1EC8
fun_1EC8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D88(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1D40(var_40)
    pri = 0;
    return pri;
}
// fun_1F50
fun_1F50() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1F88
fun_1F88() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1FB0
fun_1FB0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1FE8
fun_1FE8() {
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
// switch_2600
        case default:
        {
// switch_2600_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_2648
// lab_2648
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
            OP_JNZ lab_26F0
            var_88 = 0;
            pri = fun_28A8()
// lab_26F0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_2600_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_21E8
                case default:
                {
// switch_21E8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_2260
// lab_2260
                    OP_JUMP lab_2648
                }
                case 0x0:
                {
// switch_21E8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_2260
                }
                case 0x1:
                {
// switch_21E8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_2260
                }
                case 0x2:
                {
// switch_21E8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_2260
                }
                case 0x3:
                {
// switch_21E8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_2260
                }
                case 0x4:
                {
// switch_21E8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_2260
                }
                case 0x5:
                {
// switch_21E8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_2260
                }
            }
        }
        case 0x65:
        {
// switch_2600_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_23A0
                case default:
                {
// switch_23A0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_2418
// lab_2418
                    OP_JUMP lab_2648
                }
                case 0x0:
                {
// switch_23A0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_2418
                }
                case 0x1:
                {
// switch_23A0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_2418
                }
                case 0x2:
                {
// switch_23A0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_2418
                }
                case 0x3:
                {
// switch_23A0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_2418
                }
                case 0x4:
                {
// switch_23A0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_2418
                }
                case 0x5:
                {
// switch_23A0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_2418
                }
            }
        }
        case 0x66:
        {
// switch_2600_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_2558
                case default:
                {
// switch_2558_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_25D0
// lab_25D0
                    OP_JUMP lab_2648
                }
                case 0x0:
                {
// switch_2558_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_25D0
                }
                case 0x1:
                {
// switch_2558_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_25D0
                }
                case 0x2:
                {
// switch_2558_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_25D0
                }
                case 0x3:
                {
// switch_2558_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_25D0
                }
                case 0x4:
                {
// switch_2558_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_25D0
                }
                case 0x5:
                {
// switch_2558_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_25D0
                }
            }
        }
    }
}
// fun_2708
fun_2708() {
    pri = 3104;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 3184;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0D50(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_27B0
    pri = 1;
    return pri;
// lab_27B0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_27F8
fun_27F8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2848
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2708(var_8)
    arg_2 = pri;
// lab_2848
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1FE8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_28A8
fun_28A8() {
    OP_JUMP lab_28C0
// lab_28C0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2900
    pri = 0;
    return pri;
// lab_2900
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_28C0
    pri = 0;
    return pri;
}
// fun_2940
fun_2940() {
    var_8 = 0;
    pri = fun_28A8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_29F0
    var_32 = 3232;
    pri = SoundPostEvent(var_32)
// lab_29F0
    pri = 0;
    return pri;
}
// fun_2A00
fun_2A00() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2A30
fun_2A30() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_2A60
// lab_2A60
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2AA0
    OP_JUMP lab_2AD0
// lab_2AA0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2A60
// lab_2AD0
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2B18
fun_2B18() {
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
// fun_2B88
fun_2B88() {
    OP_JUMP lab_2BA0
// lab_2BA0
    pri = EvCameraMoveWait_()
    OP_JZER lab_2BD8
    pri = 0;
    return pri;
// lab_2BD8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2BA0
    pri = 0;
    return pri;
}
// fun_2C18
fun_2C18() {
    var_16 = arg_4;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = 24;
    pri = fun_06C0(var_32, var_24, var_16)
    var_8 = pri;
    var_56 = arg_4;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 24;
    pri = fun_07E0(var_72, var_64, var_56)
    OP_MOVE_ALT 
    pri = arg_6;
    var_88 = pri;
    var_96 = alt;
    var_104 = 16;
    pri = fun_0090(var_96, var_88)
    var_16 = pri;
    var_120 = arg_4;
    var_128 = arg_2;
    var_136 = arg_1;
    var_144 = 24;
    pri = fun_0900(var_136, var_128, var_120)
    var_24 = pri;
    var_152 = arg_5;
    var_160 = arg_3;
    var_168 = var_24;
    var_176 = var_16;
    var_184 = var_8;
    var_192 = arg_0;
    pri = EvCameraMoveOffsetLookAt(var_192, var_184, var_176, var_168, var_160, var_152)
    pri = 0;
    return pri;
}
// fun_2D78
fun_2D78() {
    pri = arg_6;
    OP_JNZ lab_2DB0
    var_8 = 0;
    pri = fun_1260()
// lab_2DB0
    pri = arg_1;
    switch (pri) {
// switch_4318
        case default:
        {
// switch_4318_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4668
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4668
            pri = 1;
            OP_JUMP lab_4670
// lab_4668
            pri = 0;
// lab_4670
            OP_JZER lab_47C8
            var_16 = 11080;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0D50(var_24, var_16)
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
            OP_JUMP lab_4828
// lab_47C8
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
            pri = fun_01C0(var_16, var_8, var_0)
// lab_4828
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4888
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_48E8
// lab_4888
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_48E8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_48E8
            pri = arg_2;
            OP_JZER lab_4928
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4928
            var_8 = 0;
            pri = fun_12A0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4318_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4318_case_default
        }
        case 0x1:
        {
// switch_4318_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4318_case_default
        }
        case 0x2:
        {
// switch_4318_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4318_case_default
        }
        case 0x3:
        {
// switch_4318_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4318_case_default
        }
        case 0x4:
        {
// switch_4318_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4318_case_default
        }
        case 0x5:
        {
// switch_4318_case_0x5
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4318_case_default
        }
        case 0x6:
        {
// switch_4318_case_0x6
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4318_case_default
        }
        case 0x7:
        {
// switch_4318_case_0x7
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4318_case_default
        }
        case 0x8:
        {
// switch_4318_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4318_case_default
        }
        case 0x9:
        {
// switch_4318_case_0x9
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4318_case_default
        }
        case 0xa:
        {
// switch_4318_case_0xa
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4318_case_default
        }
        case 0xb:
        {
// switch_4318_case_0xb
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4318_case_default
        }
        case 0xc:
        {
// switch_4318_case_0xc
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4318_case_default
        }
        case 0xd:
        {
// switch_4318_case_0xd
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4318_case_default
        }
        case 0xe:
        {
// switch_4318_case_0xe
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4318_case_default
        }
        case 0xf:
        {
// switch_4318_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4318_case_default
        }
        case 0x10:
        {
// switch_4318_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4318_case_default
        }
        case 0x11:
        {
// switch_4318_case_0x11
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4318_case_default
        }
        case 0x12:
        {
// switch_4318_case_0x12
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4318_case_default
        }
        case 0x13:
        {
// switch_4318_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4318_case_default
        }
        case 0x14:
        {
// switch_4318_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4318_case_default
        }
        case 0x15:
        {
// switch_4318_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4318_case_default
        }
        case 0x16:
        {
// switch_4318_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4318_case_default
        }
        case 0x17:
        {
// switch_4318_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4318_case_default
        }
        case 0x18:
        {
// switch_4318_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4318_case_default
        }
        case 0x19:
        {
// switch_4318_case_0x19
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4318_case_default
        }
        case 0x1a:
        {
// switch_4318_case_0x1a
            var_8 = 1;
            var_16 = 8640;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D10(var_24, var_16, var_8)
            var_40 = 8776;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0CD8(var_48, var_40)
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
            pri = fun_0FC0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4318_case_default
        }
        case 0x1b:
        {
// switch_4318_case_0x1b
            var_8 = 3;
            var_16 = 8864;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D10(var_24, var_16, var_8)
            var_40 = 9000;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0CD8(var_48, var_40)
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
            pri = fun_0FC0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4318_case_default
        }
        case 0x1c:
        {
// switch_4318_case_0x1c
            var_8 = 2;
            var_16 = 9088;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D10(var_24, var_16, var_8)
            var_40 = 9224;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0CD8(var_48, var_40)
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
            pri = fun_0FC0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4318_case_default
        }
        case 0x1d:
        {
// switch_4318_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9312;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4318_case_default
        }
        case 0x1e:
        {
// switch_4318_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9448;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4318_case_default
        }
        case 0x1f:
        {
// switch_4318_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9584;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4318_case_default
        }
        case 0x20:
        {
// switch_4318_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9720;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4318_case_default
        }
        case 0x21:
        {
// switch_4318_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9840;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4318_case_default
        }
        case 0x22:
        {
// switch_4318_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9960;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4318_case_default
        }
        case 0x23:
        {
// switch_4318_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10096;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4318_case_default
        }
        case 0x24:
        {
// switch_4318_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10232;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4318_case_default
        }
        case 0x25:
        {
// switch_4318_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10368;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4318_case_default
        }
        case 0x26:
        {
// switch_4318_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10504;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4318_case_default
        }
        case 0x27:
        {
// switch_4318_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10648;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4318_case_default
        }
        case 0x28:
        {
// switch_4318_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10792;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4318_case_default
        }
        case 0x29:
        {
// switch_4318_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10936;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4318_case_default
        }
    }
}
// fun_4958
fun_4958() {
    pri = arg_5;
    OP_JNZ lab_4990
    var_8 = 0;
    pri = fun_1260()
// lab_4990
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_49E0
    OP_CONST_S -8, -1
// lab_49E0
    pri = arg_1;
    switch (pri) {
// switch_6498
        case default:
        {
// switch_6498_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6940
            var_520 = 30944;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0D50(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6940
            pri = 1;
            OP_JUMP lab_6948
// lab_6940
            pri = 0;
// lab_6948
            OP_JZER lab_6998
            var_8 = 64;
            var_16 = 31040;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_01C0(var_16, var_8, var_0)
            OP_JUMP lab_6BF0
// lab_6998
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6A00
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6A00
            pri = 1;
            OP_JUMP lab_6A08
// lab_6A00
            pri = 0;
// lab_6A08
            OP_JZER lab_6B90
            var_16 = 31216;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0D50(var_24, var_16)
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
            OP_JUMP lab_6BF0
// lab_6B90
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
            pri = fun_01C0(var_16, var_8, var_0)
// lab_6BF0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6C60
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6C60
            var_8 = 0;
            pri = fun_12A0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6498_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x1:
        {
// switch_6498_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x2:
        {
// switch_6498_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x3:
        {
// switch_6498_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x4:
        {
// switch_6498_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x5:
        {
// switch_6498_case_0x5
            var_8 = 2;
            var_16 = 21200;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D10(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0F88(var_40)
            OP_JUMP switch_6498_case_default
        }
        case 0x6:
        {
// switch_6498_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x7:
        {
// switch_6498_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x8:
        {
// switch_6498_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x9:
        {
// switch_6498_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0xa:
        {
// switch_6498_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0xb:
        {
// switch_6498_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0xc:
        {
// switch_6498_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0xd:
        {
// switch_6498_case_0xd
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6498_case_default
        }
        case 0xe:
        {
// switch_6498_case_0xe
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6498_case_default
        }
        case 0xf:
        {
// switch_6498_case_0xf
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6498_case_default
        }
        case 0x10:
        {
// switch_6498_case_0x10
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6498_case_default
        }
        case 0x11:
        {
// switch_6498_case_0x11
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6498_case_default
        }
        case 0x12:
        {
// switch_6498_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x13:
        {
// switch_6498_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x14:
        {
// switch_6498_case_0x14
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6498_case_default
        }
        case 0x15:
        {
// switch_6498_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x16:
        {
// switch_6498_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x17:
        {
// switch_6498_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x18:
        {
// switch_6498_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x19:
        {
// switch_6498_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x1a:
        {
// switch_6498_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x1b:
        {
// switch_6498_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x1c:
        {
// switch_6498_case_0x1c
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6498_case_default
        }
        case 0x1d:
        {
// switch_6498_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x1e:
        {
// switch_6498_case_0x1e
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6498_case_default
        }
        case 0x1f:
        {
// switch_6498_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x20:
        {
// switch_6498_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x21:
        {
// switch_6498_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x22:
        {
// switch_6498_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x23:
        {
// switch_6498_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x24:
        {
// switch_6498_case_0x24
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6498_case_default
        }
        case 0x25:
        {
// switch_6498_case_0x25
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6498_case_default
        }
        case 0x26:
        {
// switch_6498_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x27:
        {
// switch_6498_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x28:
        {
// switch_6498_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x29:
        {
// switch_6498_case_0x29
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6498_case_default
        }
        case 0x2a:
        {
// switch_6498_case_0x2a
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6498_case_default
        }
        case 0x2b:
        {
// switch_6498_case_0x2b
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6498_case_default
        }
        case 0x2c:
        {
// switch_6498_case_0x2c
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6498_case_default
        }
        case 0x2d:
        {
// switch_6498_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x2e:
        {
// switch_6498_case_0x2e
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6498_case_default
        }
        case 0x2f:
        {
// switch_6498_case_0x2f
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6498_case_default
        }
        case 0x30:
        {
// switch_6498_case_0x30
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6498_case_default
        }
        case 0x31:
        {
// switch_6498_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x32:
        {
// switch_6498_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x33:
        {
// switch_6498_case_0x33
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6498_case_default
        }
        case 0x34:
        {
// switch_6498_case_0x34
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6498_case_default
        }
        case 0x35:
        {
// switch_6498_case_0x35
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6498_case_default
        }
        case 0x36:
        {
// switch_6498_case_0x36
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6498_case_default
        }
        case 0x37:
        {
// switch_6498_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x38:
        {
// switch_6498_case_0x38
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
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6498_case_default
        }
        case 0x39:
        {
// switch_6498_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x3a:
        {
// switch_6498_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x3b:
        {
// switch_6498_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x3c:
        {
// switch_6498_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 30520;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x3d:
        {
// switch_6498_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 30696;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
        case 0x3e:
        {
// switch_6498_case_0x3e
            var_8 = 4;
            var_16 = 30840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D10(var_24, var_16, var_8)
            OP_JUMP switch_6498_case_default
        }
    }
}
// fun_6C90
fun_6C90() {
    pri = arg_4;
    OP_JNZ lab_6CC8
    var_8 = 0;
    pri = fun_1260()
// lab_6CC8
    pri = arg_1;
    switch (pri) {
// switch_80A0
        case default:
        {
// switch_80A0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 31912;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1CE0(var_264)
            OP_JZER lab_8668
            pri = arg_3;
            switch (pri) {
// switch_8610
                case default:
                {
// switch_8610_case_default
                    OP_JUMP lab_8920
// lab_8920
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8990
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8990
                    var_8 = 0;
                    pri = fun_12A0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_8610_case_0x1
                    var_8 = 32;
                    var_16 = 32064;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01C0(var_16, var_8, var_0)
                    OP_JUMP switch_8610_case_default
                }
                case 0x2:
                {
// switch_8610_case_0x2
                    var_8 = 32;
                    var_16 = 32168;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01C0(var_16, var_8, var_0)
                    OP_JUMP switch_8610_case_default
                }
                case 0x3:
                {
// switch_8610_case_0x3
                    var_8 = 32;
                    var_16 = 31968;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01C0(var_16, var_8, var_0)
                    OP_JUMP switch_8610_case_default
                }
            }
// lab_8668
            pri = arg_1;
            OP_JZER lab_86B8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_86B8
            pri = 0;
            OP_JUMP lab_86C0
// lab_86B8
            pri = 1;
// lab_86C0
            OP_JZER lab_8728
            var_8 = 32264;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0D50(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_8728
            pri = 1;
            OP_JUMP lab_8730
// lab_8728
            pri = 0;
// lab_8730
            OP_JZER lab_8780
            var_8 = 32;
            var_16 = 32360;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_01C0(var_16, var_8, var_0)
            OP_JUMP lab_8920
// lab_8780
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_87E8
            var_8 = 32;
            var_16 = 32520;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_01C0(var_16, var_8, var_0)
            OP_JUMP lab_8920
// lab_87E8
            var_16 = 32640;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0D50(var_24, var_16)
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
// switch_80A0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x1:
        {
// switch_80A0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x2:
        {
// switch_80A0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x3:
        {
// switch_80A0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x4:
        {
// switch_80A0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x5:
        {
// switch_80A0_case_0x5
            var_8 = 1;
            var_16 = 31392;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D10(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0F88(var_40)
            OP_JUMP switch_80A0_case_default
        }
        case 0x6:
        {
// switch_80A0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x7:
        {
// switch_80A0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x8:
        {
// switch_80A0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x9:
        {
// switch_80A0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0xa:
        {
// switch_80A0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0xb:
        {
// switch_80A0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0xc:
        {
// switch_80A0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0xd:
        {
// switch_80A0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0xe:
        {
// switch_80A0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0xf:
        {
// switch_80A0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x10:
        {
// switch_80A0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x11:
        {
// switch_80A0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x12:
        {
// switch_80A0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x13:
        {
// switch_80A0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x14:
        {
// switch_80A0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x15:
        {
// switch_80A0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x16:
        {
// switch_80A0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x17:
        {
// switch_80A0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x18:
        {
// switch_80A0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x19:
        {
// switch_80A0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x1a:
        {
// switch_80A0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x1b:
        {
// switch_80A0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x1c:
        {
// switch_80A0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x1d:
        {
// switch_80A0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x1e:
        {
// switch_80A0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x1f:
        {
// switch_80A0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x20:
        {
// switch_80A0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x21:
        {
// switch_80A0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x22:
        {
// switch_80A0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x23:
        {
// switch_80A0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x24:
        {
// switch_80A0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x25:
        {
// switch_80A0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x26:
        {
// switch_80A0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x27:
        {
// switch_80A0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x28:
        {
// switch_80A0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x29:
        {
// switch_80A0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x2a:
        {
// switch_80A0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x2b:
        {
// switch_80A0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x2c:
        {
// switch_80A0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x2d:
        {
// switch_80A0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x2e:
        {
// switch_80A0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x2f:
        {
// switch_80A0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x30:
        {
// switch_80A0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x31:
        {
// switch_80A0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x32:
        {
// switch_80A0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x33:
        {
// switch_80A0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x34:
        {
// switch_80A0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x35:
        {
// switch_80A0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x36:
        {
// switch_80A0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x37:
        {
// switch_80A0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x38:
        {
// switch_80A0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x39:
        {
// switch_80A0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x3a:
        {
// switch_80A0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x3b:
        {
// switch_80A0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x3c:
        {
// switch_80A0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31488;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x3d:
        {
// switch_80A0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31664;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
        case 0x3e:
        {
// switch_80A0_case_0x3e
            var_8 = 3;
            var_16 = 31808;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D10(var_24, var_16, var_8)
            OP_JUMP switch_80A0_case_default
        }
    }
}
// fun_89C0
fun_89C0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8BD0(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 32808;
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
    var_424 = 32864;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 32880;
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
    OP_JZER lab_8BB8
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_8BB8
    pri = 0;
    return pri;
}
// fun_8BD0
fun_8BD0() {
    var_8 = arg_1;
    var_16 = 32928;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0D10(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8C18
fun_8C18() {
    pri = 33032;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_8CA0
// lab_8CA0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_8E20
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_8E10
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_8D60
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_8D60
    pri = 0;
    OP_JUMP lab_8D68
// lab_8E20
    pri = 0;
    return pri;
// lab_8E10
    OP_JUMP lab_8C98
// lab_8C98
    OP_INC_P_S -936
// lab_8D60
    pri = 1;
// lab_8D68
    OP_JZER lab_8DE0
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8DD8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_8DE0
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_8DD8
}
// fun_8E40
fun_8E40() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_8ED8
    var_8 = 1;
    var_16 = 0;
    var_24 = 33952;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0368(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03D8()
    var_56 = 0;
    pri = fun_1F88()
// lab_8ED8
    pri = arg_4;
    OP_JZER lab_8F10
    var_8 = 1;
    var_16 = 8;
    pri = fun_1FB0(var_8)
// lab_8F10
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_8F68
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_8F68
    pri = 0;
    OP_JUMP lab_8F70
// lab_8F68
    pri = 1;
// lab_8F70
    OP_JZER lab_9038
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_9038
    var_16 = 0;
    pri = fun_0468()
    OP_JZER lab_9010
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1EC8(var_32, var_24)
    OP_JUMP lab_9038
// lab_9038
    pri = arg_2;
    OP_JZER lab_9110
    var_8 = 0;
    pri = fun_0468()
    OP_JZER lab_90E0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1808(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0A58(var_40)
    OP_JUMP lab_9110
// lab_9110
    pri = arg_3;
    OP_JZER lab_9148
    var_8 = 1;
    var_16 = 8;
    pri = fun_1F50(var_8)
// lab_9148
    pri = 0;
    return pri;
// lab_90E0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1808(var_16, var_8)
// lab_9010
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1EC8(var_16, var_8)
}
// fun_9158
fun_9158() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_8C18(var_24)
    pri = 0;
    return pri;
}
// fun_91C0
fun_91C0() {
    pri = g_mode;
    switch (pri) {
// switch_9280
        case default:
        {
// switch_9280_case_default
            pri = CommandNOP()
            OP_JUMP lab_92C8
// lab_92C8
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_9280_case_0x0
            var_8 = 0;
            pri = fun_92D8()
            OP_JUMP lab_92C8
        }
        case 0x26f6b52ae5bc778a:
        {
// switch_9280_case_0x26f6b52ae5bc778a
            var_8 = 0;
            pri = fun_D4F0()
            OP_JUMP lab_92C8
        }
        case 0x4fbd032783c101b6:
        {
// switch_9280_case_0x4fbd032783c101b6
            var_8 = 0;
            pri = fun_D5E0()
            OP_JUMP lab_92C8
        }
    }
}
// fun_92D8
fun_92D8() {
    pri = 0;
    return pri;
}
// fun_92F0
fun_92F0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_8E40(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9348
fun_9348() {
    var_8 = 7418990988919710256;
    var_16 = 8;
    pri = fun_0490(var_8)
    pri = 0;
    return pri;
}
// fun_9388
fun_9388() {
    var_8 = 0;
    pri = fun_04C0()
    pri = 0;
    return pri;
}
// fun_93B8
fun_93B8() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C 4638095408117265203, 4668287227757854720, 4671233369164480512, 7418990988919710256
    var_24 = 48;
    pri = fun_0668(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 0;
    var_40 = 7418990988919710256;
    var_48 = 16;
    pri = fun_0A20(var_40, var_32)
    var_56 = 1;
    var_64 = 8;
    pri = fun_00E8(var_56)
    var_72 = 250;
    var_80 = 3;
    OP_PUSH4_C 4605380978949069210, 4603579539098121012, -1292278190967397311, 8802641224559852288
    var_88 = 45;
    var_96 = 56;
    pri = fun_2C18(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 15;
    var_112 = 8;
    pri = fun_00E8(var_104)
    var_120 = 1;
    var_128 = 0;
    var_136 = 0;
    OP_PUSH2_C 4607182418800017408, -1292278190967397311
    var_144 = 0;
    var_152 = 48;
    pri = fun_1B40(var_144, var_136, var_128, var_120, var_112, var_104)
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    var_184 = 0;
    OP_PUSH2_C -1292278190967397311, 8802641224559852288
    var_192 = 48;
    pri = fun_0B58(var_184, var_176, var_168, var_160, var_152, var_144)
    var_200 = 0;
    var_208 = 0;
    var_216 = 0;
    var_224 = 0;
    OP_PUSH2_C 8802641224559852288, -1292278190967397311
    var_232 = 48;
    pri = fun_0B58(var_224, var_216, var_208, var_200, var_192, var_184)
    var_240 = -1292278190967397311;
    var_248 = 8;
    pri = fun_0BB0(var_240)
    var_256 = 8802641224559852288;
    var_264 = 8;
    pri = fun_0BB0(var_256)
    var_272 = 1;
    var_280 = 1;
    var_288 = -1;
    var_296 = -1;
    var_304 = 0;
    var_312 = 7;
    var_320 = -1292278190967397311;
    var_328 = 56;
    pri = fun_4958(var_320, var_312, var_304, var_296, var_288, var_280, var_272)
    var_336 = 0;
    var_344 = 3;
    var_352 = 0;
    var_360 = 100;
    var_368 = -1;
    OP_PUSH2_C 2972617953324989155, -1292278190967397311
    var_376 = 56;
    pri = fun_27F8(var_368, var_360, var_352, var_344, var_336, var_328, var_320)
    var_384 = 1;
    var_392 = 8;
    pri = fun_2940(var_384)
    var_400 = 0;
    pri = fun_2A00()
    var_408 = 0;
    pri = fun_2B88()
    var_416 = 1;
    var_424 = 0;
    var_432 = 33952;
    var_440 = 8;
    var_448 = 32;
    pri = fun_0368(var_440, var_432, var_424, var_416)
    var_456 = 0;
    pri = fun_03D8()
    var_464 = 1;
    var_472 = 3;
    var_480 = 0;
    var_488 = 7;
    var_496 = -1292278190967397311;
    var_504 = 40;
    pri = fun_6C90(var_496, var_488, var_480, var_472, var_464)
    var_512 = -1292278190967397311;
    var_520 = 8;
    pri = fun_0D88(var_512)
    var_528 = 0;
    var_536 = 4628630812025369395;
    var_544 = 0;
    OP_PUSH5_C 4668526459497826222, 4641246520481540997, 4671408642313064284, 4668600291703631380, 4641740509065668198
    var_552 = 4671425239441085563;
    var_560 = 1;
    pri = EvCameraMove(var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488)
    var_568 = 0;
    pri = fun_2B88()
    var_576 = 1;
    var_584 = 1;
    OP_PUSH4_C -4583214824533105050, 4668349350164824064, 4671356239588884480, 8802641224559852288
    var_592 = 48;
    pri = fun_0668(var_584, var_576, var_568, var_560, var_552, var_544)
    var_600 = 1;
    var_608 = 1;
    OP_PUSH4_C -4585403292477030400, 4668308118478782464, 4671385376647020544, -1292278190967397311
    var_616 = 48;
    pri = fun_0668(var_608, var_600, var_592, var_584, var_576, var_568)
    var_624 = 1;
    var_632 = 1;
    OP_PUSH4_C 4626547897197710541, 4668219607792746496, 4671329301554003968, -8208209633826348795
    var_640 = 48;
    pri = fun_0668(var_632, var_624, var_616, var_608, var_600, var_592)
    var_648 = 1;
    var_656 = 1;
    OP_PUSH4_C -4597696712084868301, 4668214659990421504, 4671355689833070592, 7099240262869383700
    var_664 = 48;
    pri = fun_0668(var_656, var_648, var_640, var_632, var_624, var_616)
    var_672 = 30;
    var_680 = 8;
    pri = fun_00E8(var_672)
    var_688 = 0;
    var_696 = 4628630812025369395;
    var_704 = 3;
    OP_PUSH5_C 4668381142543541207, 4638421919090249564, 4671382163324288369, 4668452638287137341, 4639058756225057423
    var_712 = 4671401143643762852;
    var_720 = 110;
    pri = EvCameraMove(var_720, var_712, var_704, var_696, var_688, var_680, var_672, var_664, var_656, var_648)
    var_728 = 34000;
    var_736 = 8;
    var_744 = 16;
    pri = fun_0308(var_736, var_728)
    var_752 = 0;
    pri = fun_03D8()
    var_760 = 5;
    var_768 = 5;
    var_776 = 7099240262869383700;
    var_784 = 24;
    pri = fun_1978(var_776, var_768, var_760)
    var_792 = 1;
    var_800 = 1;
    var_808 = -1;
    OP_PUSH2_C 8802641224559852288, 7099240262869383700
    var_816 = 40;
    pri = fun_12E0(var_808, var_800, var_792, var_784, var_776)
    var_824 = 5;
    var_832 = 5;
    var_840 = -8208209633826348795;
    var_848 = 24;
    pri = fun_1978(var_840, var_832, var_824)
    var_856 = 1;
    var_864 = 1;
    var_872 = -1;
    var_880 = -1;
    var_888 = 0;
    var_896 = 1;
    var_904 = -8208209633826348795;
    var_912 = 56;
    pri = fun_4958(var_904, var_896, var_888, var_880, var_872, var_864, var_856)
    var_920 = 0;
    var_928 = 3;
    var_936 = 0;
    var_944 = 100;
    var_952 = -1;
    OP_PUSH2_C -788572290129856169, -8208209633826348795
    var_960 = 56;
    pri = fun_27F8(var_952, var_944, var_936, var_928, var_920, var_912, var_904)
    var_968 = 1;
    var_976 = 8;
    pri = fun_2940(var_968)
    var_984 = 0;
    pri = fun_2A00()
    var_992 = 1;
    var_1000 = 3;
    var_1008 = 0;
    var_1016 = 1;
    var_1024 = -8208209633826348795;
    var_1032 = 40;
    pri = fun_6C90(var_1024, var_1016, var_1008, var_1000, var_992)
    var_1040 = -8208209633826348795;
    var_1048 = 8;
    pri = fun_19E0(var_1040)
    var_1056 = 0;
    var_1064 = 1;
    var_1072 = 60;
    OP_PUSH2_C 7099240262869383700, -8208209633826348795
    var_1080 = 40;
    pri = fun_12E0(var_1072, var_1064, var_1056, var_1048, var_1040)
    var_1088 = -8208209633826348795;
    var_1096 = 8;
    pri = fun_0D88(var_1088)
    var_1104 = 1;
    var_1112 = -1;
    var_1120 = -1;
    var_1128 = 3;
    var_1136 = 0;
    var_1144 = 0;
    var_1152 = -8208209633826348795;
    var_1160 = 56;
    pri = fun_2D78(var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104)
    var_1168 = 0;
    var_1176 = 3;
    var_1184 = 0;
    var_1192 = 100;
    var_1200 = -1;
    OP_PUSH2_C -788571190618227958, -8208209633826348795
    var_1208 = 56;
    pri = fun_27F8(var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152)
    var_1216 = -8208209633826348795;
    var_1224 = 8;
    pri = fun_0D88(var_1216)
    var_1232 = 1;
    var_1240 = 8;
    pri = fun_2940(var_1232)
    var_1248 = 0;
    pri = fun_2A00()
    var_1256 = 7099240262869383700;
    var_1264 = 8;
    pri = fun_19E0(var_1256)
    var_1272 = 0;
    var_1280 = 1;
    var_1288 = 70;
    OP_PUSH2_C -8208209633826348795, 7099240262869383700
    var_1296 = 40;
    pri = fun_12E0(var_1288, var_1280, var_1272, var_1264, var_1256)
    var_1304 = 0;
    var_1312 = 3;
    var_1320 = 0;
    var_1328 = 100;
    var_1336 = -1;
    OP_PUSH2_C -8132227163716339068, 7099240262869383700
    var_1344 = 56;
    pri = fun_27F8(var_1336, var_1328, var_1320, var_1312, var_1304, var_1296, var_1288)
    var_1352 = 7099240262869383700;
    var_1360 = 8;
    pri = fun_0BB0(var_1352)
    var_1368 = 1;
    var_1376 = 8;
    pri = fun_2940(var_1368)
    var_1384 = 0;
    pri = fun_2A00()
    var_1392 = -1;
    var_1400 = -8208209633826348795;
    var_1408 = 16;
    pri = fun_1808(var_1400, var_1392)
    var_1416 = 7;
    var_1424 = -8208209633826348795;
    var_1432 = 16;
    pri = fun_1888(var_1424, var_1416)
    var_1440 = 1;
    var_1448 = 1;
    var_1456 = -1;
    var_1464 = -1;
    var_1472 = 0;
    var_1480 = 6;
    var_1488 = -8208209633826348795;
    var_1496 = 56;
    pri = fun_4958(var_1488, var_1480, var_1472, var_1464, var_1456, var_1448, var_1440)
    var_1504 = 0;
    var_1512 = 3;
    var_1520 = 0;
    var_1528 = 100;
    var_1536 = -1;
    OP_PUSH2_C -788570091106599747, -8208209633826348795
    var_1544 = 56;
    pri = fun_27F8(var_1536, var_1528, var_1520, var_1512, var_1504, var_1496, var_1488)
    var_1552 = 1;
    var_1560 = 8;
    pri = fun_2940(var_1552)
    var_1568 = 0;
    pri = fun_2A00()
    var_1576 = 1;
    var_1584 = 3;
    var_1592 = 0;
    var_1600 = 6;
    var_1608 = -8208209633826348795;
    var_1616 = 40;
    pri = fun_6C90(var_1608, var_1600, var_1592, var_1584, var_1576)
    var_1624 = 1;
    var_1632 = 1;
    var_1640 = -1;
    var_1648 = -1;
    var_1656 = 0;
    var_1664 = 1;
    var_1672 = -1292278190967397311;
    var_1680 = 56;
    pri = fun_4958(var_1672, var_1664, var_1656, var_1648, var_1640, var_1632, var_1624)
    var_1688 = 0;
    var_1696 = 3;
    var_1704 = 0;
    var_1712 = 100;
    var_1720 = -1;
    OP_PUSH2_C 2972619052836617366, -1292278190967397311
    var_1728 = 56;
    pri = fun_27F8(var_1720, var_1712, var_1704, var_1696, var_1688, var_1680, var_1672)
    var_1736 = 1;
    var_1744 = 8;
    pri = fun_2940(var_1736)
    var_1752 = 0;
    pri = fun_2A00()
    var_1760 = 1;
    var_1768 = 3;
    var_1776 = 0;
    var_1784 = 1;
    var_1792 = -1292278190967397311;
    var_1800 = 40;
    pri = fun_6C90(var_1792, var_1784, var_1776, var_1768, var_1760)
    var_1808 = -8208209633826348795;
    var_1816 = 8;
    pri = fun_0D88(var_1808)
    var_1824 = 15;
    var_1832 = -8208209633826348795;
    var_1840 = 16;
    pri = fun_1848(var_1832, var_1824)
    var_1848 = 0;
    var_1856 = 0;
    var_1864 = 0;
    var_1872 = 0;
    OP_PUSH2_C -1292278190967397311, -8208209633826348795
    var_1880 = 48;
    pri = fun_0B58(var_1872, var_1864, var_1856, var_1848, var_1840, var_1832)
    var_1888 = 0;
    var_1896 = 3;
    var_1904 = 0;
    var_1912 = 100;
    var_1920 = -1;
    OP_PUSH2_C -788577787687997224, -8208209633826348795
    var_1928 = 56;
    pri = fun_27F8(var_1920, var_1912, var_1904, var_1896, var_1888, var_1880, var_1872)
    var_1936 = -8208209633826348795;
    var_1944 = 8;
    pri = fun_0BB0(var_1936)
    var_1952 = -1292278190967397311;
    var_1960 = 8;
    pri = fun_0D88(var_1952)
    var_1968 = 1;
    var_1976 = 8;
    pri = fun_2940(var_1968)
    var_1984 = 0;
    pri = fun_2A00()
    var_1992 = 34048;
    pri = SoundPostEvent(var_1992)
    var_2000 = 1;
    var_2008 = 7418990988919710256;
    var_2016 = 16;
    pri = fun_0A20(var_2008, var_2000)
    var_2024 = 0;
    var_2032 = 4628405632044000870;
    var_2040 = 0;
    OP_PUSH5_C 4668375045751565189, 4633147078026691871, 4671275873535231263, 4668383061191331676, 4633802914722427699
    var_2048 = 4671279416711451771;
    var_2056 = 1;
    pri = EvCameraMove(var_2056, var_2048, var_2040, var_2032, var_2024, var_2016, var_2008, var_2000, var_1992, var_1984)
    var_2064 = 0;
    pri = fun_2B88()
    var_2072 = 0;
    var_2080 = 4628405632044000870;
    var_2088 = 3;
    OP_PUSH5_C 4668431731073535181, 4639881366844494316, 4671392506979926671, 4668497415898178519, 4641109653274115441
    var_2096 = 4671414455980796150;
    var_2104 = 110;
    pri = EvCameraMove(var_2104, var_2096, var_2088, var_2080, var_2072, var_2064, var_2056, var_2048, var_2040, var_2032)
    var_2112 = 1;
    var_2120 = 0;
    var_2128 = 4641240890982006784;
    var_2136 = 0;
    var_2144 = 0;
    OP_PUSH4_C 4668287227757854720, 4671293842304008192, 4607182418800017408, 7418990988919710256
    var_2152 = 72;
    pri = fun_0A90(var_2144, var_2136, var_2128, var_2120, var_2112, var_2104, var_2096, var_2088, var_2080)
    var_2160 = 0;
    var_2168 = 3;
    var_2176 = 0;
    var_2184 = 100;
    var_2192 = -1;
    OP_PUSH2_C 1154188622499252824, 7418990988919710256
    var_2200 = 56;
    pri = fun_27F8(var_2192, var_2184, var_2176, var_2168, var_2160, var_2152, var_2144)
    var_2208 = 1;
    var_2216 = 8;
    pri = fun_2940(var_2208)
    var_2224 = 0;
    pri = fun_2A00()
    var_2232 = 0;
    var_2240 = 0;
    var_2248 = 0;
    OP_PUSH2_C -4585473661221208064, 8802641224559852288
    var_2256 = 40;
    pri = fun_0B08(var_2248, var_2240, var_2232, var_2224, var_2216)
    var_2264 = 3;
    var_2272 = 8;
    pri = fun_00E8(var_2264)
    var_2280 = 0;
    var_2288 = 0;
    var_2296 = 0;
    OP_PUSH2_C -4586881036104761344, -1292278190967397311
    var_2304 = 40;
    pri = fun_0B08(var_2296, var_2288, var_2280, var_2272, var_2264)
    var_2312 = 2;
    var_2320 = 8;
    pri = fun_00E8(var_2312)
    var_2328 = 0;
    var_2336 = 0;
    var_2344 = 0;
    OP_PUSH2_C -4596261189703643955, -8208209633826348795
    var_2352 = 40;
    pri = fun_0B08(var_2344, var_2336, var_2328, var_2320, var_2312)
    var_2360 = 4;
    var_2368 = 8;
    pri = fun_00E8(var_2360)
    var_2376 = 0;
    var_2384 = 0;
    var_2392 = 0;
    OP_PUSH2_C -4589716896495121203, 7099240262869383700
    var_2400 = 40;
    pri = fun_0B08(var_2392, var_2384, var_2376, var_2368, var_2360)
    var_2408 = 8802641224559852288;
    var_2416 = 8;
    pri = fun_0BB0(var_2408)
    var_2424 = -1292278190967397311;
    var_2432 = 8;
    pri = fun_0BB0(var_2424)
    var_2440 = -8208209633826348795;
    var_2448 = 8;
    pri = fun_0BB0(var_2440)
    var_2456 = 7099240262869383700;
    var_2464 = 8;
    pri = fun_0BB0(var_2456)
    var_2472 = 7418990988919710256;
    var_2480 = 8;
    pri = fun_0BB0(var_2472)
    var_2488 = 15;
    var_2496 = 7099240262869383700;
    var_2504 = 16;
    pri = fun_1848(var_2496, var_2488)
    var_2512 = -1;
    var_2520 = 7099240262869383700;
    var_2528 = 16;
    pri = fun_1808(var_2520, var_2512)
    var_2536 = 6;
    var_2544 = 4;
    var_2552 = -8208209633826348795;
    var_2560 = 24;
    pri = fun_1978(var_2552, var_2544, var_2536)
    var_2568 = 1;
    var_2576 = -1;
    var_2584 = -1;
    var_2592 = 3;
    var_2600 = 0;
    var_2608 = 1;
    var_2616 = -8208209633826348795;
    var_2624 = 56;
    pri = fun_2D78(var_2616, var_2608, var_2600, var_2592, var_2584, var_2576, var_2568)
    var_2632 = 0;
    var_2640 = 3;
    var_2648 = 0;
    var_2656 = 100;
    var_2664 = -1;
    OP_PUSH2_C -788576688176369013, -8208209633826348795
    var_2672 = 56;
    pri = fun_27F8(var_2664, var_2656, var_2648, var_2640, var_2632, var_2624, var_2616)
    var_2680 = -8208209633826348795;
    var_2688 = 8;
    pri = fun_0D88(var_2680)
    var_2696 = 1;
    var_2704 = 8;
    pri = fun_2940(var_2696)
    var_2712 = 0;
    pri = fun_2A00()
    var_2720 = 0;
    var_2728 = 4628490074537014067;
    var_2736 = 0;
    OP_PUSH5_C 4668301856760062280, 4638918370580422984, 4671333655620049961, 4668306590157619855, 4638938073828792730
    var_2744 = 4671338617166270300;
    var_2752 = 1;
    pri = EvCameraMove(var_2752, var_2744, var_2736, var_2728, var_2720, var_2712, var_2704, var_2696, var_2688, var_2680)
    var_2760 = 0;
    pri = fun_2B88()
    var_2768 = 0;
    var_2776 = 4628490074537014067;
    var_2784 = 3;
    OP_PUSH5_C 4668313550066223677, 4638918370580422984, 4671330865609294479, 4668318283463781253, 4638938073828792730
    var_2792 = 4671335827155514819;
    var_2800 = 100;
    pri = EvCameraMove(var_2800, var_2792, var_2784, var_2776, var_2768, var_2760, var_2752, var_2744, var_2736, var_2728)
    var_2808 = -8208209633826348795;
    var_2816 = 8;
    pri = fun_19E0(var_2808)
    var_2824 = 1;
    var_2832 = -1;
    var_2840 = -1;
    var_2848 = 3;
    var_2856 = 0;
    var_2864 = 0;
    var_2872 = 7418990988919710256;
    var_2880 = 56;
    pri = fun_2D78(var_2872, var_2864, var_2856, var_2848, var_2840, var_2832, var_2824)
    var_2888 = 0;
    var_2896 = 3;
    var_2904 = 0;
    var_2912 = 100;
    var_2920 = -1;
    OP_PUSH2_C 1154191921034137457, 7418990988919710256
    var_2928 = 56;
    pri = fun_27F8(var_2920, var_2912, var_2904, var_2896, var_2888, var_2880, var_2872)
    var_2936 = 7418990988919710256;
    var_2944 = 8;
    pri = fun_0D88(var_2936)
    var_2952 = 1;
    var_2960 = 8;
    pri = fun_2940(var_2952)
    var_2968 = 0;
    pri = fun_2A00()
    var_2976 = 1;
    var_2984 = 1;
    OP_PUSH4_C 4638904648675308339, 4668287227757854720, 4671293842304008192, 7418990988919710256
    var_2992 = 48;
    pri = fun_0668(var_2984, var_2976, var_2968, var_2960, var_2952, var_2944)
    var_3000 = 0;
    var_3008 = 4630741874350699315;
    var_3016 = 0;
    OP_PUSH5_C 4668307986537387131, 4637689380463360082, 4671310785778192220, 4668388525764121723, 4638682283443706921
    var_3024 = 4671306780807088046;
    var_3032 = 1;
    pri = EvCameraMove(var_3032, var_3024, var_3016, var_3008, var_3000, var_2992, var_2984, var_2976, var_2968, var_2960)
    var_3040 = 0;
    pri = fun_2B88()
    var_3048 = 1;
    var_3056 = 1;
    OP_PUSH4_C -4585473661221208064, 4668349350164824064, 4671356239588884480, 8802641224559852288
    var_3064 = 48;
    pri = fun_0668(var_3056, var_3048, var_3040, var_3032, var_3024, var_3016)
    var_3072 = 1;
    var_3080 = 1;
    OP_PUSH4_C -4586585487379215155, 4668308118478782464, 4671381528356323328, -1292278190967397311
    var_3088 = 48;
    pri = fun_0668(var_3080, var_3072, var_3064, var_3056, var_3048, var_3040)
    var_3096 = 1;
    var_3104 = -1;
    var_3112 = -1;
    var_3120 = 3;
    var_3128 = 0;
    var_3136 = 0;
    var_3144 = 7099240262869383700;
    var_3152 = 56;
    pri = fun_2D78(var_3144, var_3136, var_3128, var_3120, var_3112, var_3104, var_3096)
    var_3160 = 6;
    var_3168 = 6;
    var_3176 = 7099240262869383700;
    var_3184 = 24;
    pri = fun_1978(var_3176, var_3168, var_3160)
    var_3192 = 7;
    var_3200 = 7;
    var_3208 = -8208209633826348795;
    var_3216 = 24;
    pri = fun_1978(var_3208, var_3200, var_3192)
    var_3224 = 0;
    var_3232 = 3;
    var_3240 = 0;
    var_3248 = 100;
    var_3256 = -1;
    OP_PUSH2_C -8132223865181454435, 7099240262869383700
    var_3264 = 56;
    pri = fun_27F8(var_3256, var_3248, var_3240, var_3232, var_3224, var_3216, var_3208)
    var_3272 = 7099240262869383700;
    var_3280 = 8;
    pri = fun_0D88(var_3272)
    var_3288 = 1;
    var_3296 = 8;
    pri = fun_2940(var_3288)
    var_3304 = 0;
    pri = fun_2A00()
    var_3312 = 0;
    var_3320 = 0;
    var_3328 = 0;
    var_3336 = 0;
    OP_PUSH2_C 7099240262869383700, 7418990988919710256
    var_3344 = 48;
    pri = fun_0B58(var_3336, var_3328, var_3320, var_3312, var_3304, var_3296)
    var_3352 = 7418990988919710256;
    var_3360 = 8;
    pri = fun_0BB0(var_3352)
    var_3368 = 1;
    var_3376 = -1;
    var_3384 = -1;
    var_3392 = 3;
    var_3400 = 0;
    var_3408 = 1;
    var_3416 = 7418990988919710256;
    var_3424 = 56;
    pri = fun_2D78(var_3416, var_3408, var_3400, var_3392, var_3384, var_3376, var_3368)
    var_3432 = 0;
    var_3440 = 3;
    var_3448 = 0;
    var_3456 = 100;
    var_3464 = -1;
    OP_PUSH2_C 1154190821522509246, 7418990988919710256
    var_3472 = 56;
    pri = fun_27F8(var_3464, var_3456, var_3448, var_3440, var_3432, var_3424, var_3416)
    var_3480 = 7418990988919710256;
    var_3488 = 8;
    pri = fun_0D88(var_3480)
    var_3496 = 1;
    var_3504 = 8;
    pri = fun_2940(var_3496)
    var_3512 = 0;
    pri = fun_2A00()
    var_3520 = 1;
    var_3528 = 1;
    var_3536 = -1;
    var_3544 = -1;
    var_3552 = 0;
    var_3560 = 1;
    var_3568 = 7418990988919710256;
    var_3576 = 56;
    pri = fun_4958(var_3568, var_3560, var_3552, var_3544, var_3536, var_3528, var_3520)
    var_3584 = 0;
    var_3592 = 3;
    var_3600 = 0;
    var_3608 = 100;
    var_3616 = -1;
    OP_PUSH2_C 1154194120057393879, 7418990988919710256
    var_3624 = 56;
    pri = fun_27F8(var_3616, var_3608, var_3600, var_3592, var_3584, var_3576, var_3568)
    var_3632 = 1;
    var_3640 = 8;
    pri = fun_2940(var_3632)
    var_3648 = 0;
    pri = fun_2A00()
    var_3656 = 1;
    var_3664 = 3;
    var_3672 = 0;
    var_3680 = 1;
    var_3688 = 7418990988919710256;
    var_3696 = 40;
    pri = fun_6C90(var_3688, var_3680, var_3672, var_3664, var_3656)
    var_3704 = 1;
    var_3712 = 1;
    var_3720 = -1;
    var_3728 = -1;
    var_3736 = 0;
    var_3744 = 12;
    var_3752 = -8208209633826348795;
    var_3760 = 56;
    pri = fun_4958(var_3752, var_3744, var_3736, var_3728, var_3720, var_3712, var_3704)
    var_3768 = 6;
    var_3776 = 7;
    var_3784 = -8208209633826348795;
    var_3792 = 24;
    pri = fun_1978(var_3784, var_3776, var_3768)
    var_3800 = 0;
    var_3808 = 3;
    var_3816 = 0;
    var_3824 = 100;
    var_3832 = -1;
    OP_PUSH2_C -788575588664740802, -8208209633826348795
    var_3840 = 56;
    pri = fun_27F8(var_3832, var_3824, var_3816, var_3808, var_3800, var_3792, var_3784)
    var_3848 = 7418990988919710256;
    var_3856 = 8;
    pri = fun_0D88(var_3848)
    var_3864 = 1;
    var_3872 = 8;
    pri = fun_2940(var_3864)
    var_3880 = 0;
    pri = fun_2A00()
    var_3888 = 0;
    var_3896 = 4630741874350699315;
    var_3904 = 0;
    OP_PUSH5_C 4668347959282614927, 4637559901974073180, 4671367064280859935, 4668416035545048678, 4639172753590625239
    var_3912 = 4671387759838473748;
    var_3920 = 1;
    pri = EvCameraMove(var_3920, var_3912, var_3904, var_3896, var_3888, var_3880, var_3872, var_3864, var_3856, var_3848)
    var_3928 = 0;
    pri = fun_2B88()
    var_3936 = 0;
    var_3944 = 4630741874350699315;
    var_3952 = 3;
    OP_PUSH5_C 4668386178306796421, 4638338180284678144, 4671375673456905421, 4668454254569230172, 4639561892745927721
    var_3960 = 4671396371763298304;
    var_3968 = 120;
    pri = EvCameraMove(var_3968, var_3960, var_3952, var_3944, var_3936, var_3928, var_3920, var_3912, var_3904, var_3896)
    var_3976 = 35;
    var_3984 = 8;
    pri = fun_00E8(var_3976)
    var_3992 = 0;
    var_4000 = 0;
    var_4008 = 0;
    var_4016 = 0;
    OP_PUSH2_C 8802641224559852288, -1292278190967397311
    var_4024 = 48;
    pri = fun_0B58(var_4016, var_4008, var_4000, var_3992, var_3984, var_3976)
    var_4032 = 0;
    var_4040 = 3;
    var_4048 = 0;
    var_4056 = 100;
    var_4064 = -1;
    OP_PUSH2_C 2972620152348245577, -1292278190967397311
    var_4072 = 56;
    pri = fun_27F8(var_4064, var_4056, var_4048, var_4040, var_4032, var_4024, var_4016)
    var_4080 = 0;
    var_4088 = 0;
    var_4096 = 0;
    var_4104 = 0;
    OP_PUSH2_C -1292278190967397311, 8802641224559852288
    var_4112 = 48;
    pri = fun_0B58(var_4104, var_4096, var_4088, var_4080, var_4072, var_4064)
    var_4120 = 8802641224559852288;
    var_4128 = 8;
    pri = fun_0BB0(var_4120)
    var_4136 = -1292278190967397311;
    var_4144 = 8;
    pri = fun_0BB0(var_4136)
    var_4152 = 1;
    var_4160 = 8;
    pri = fun_2940(var_4152)
    var_4168 = 0;
    var_4176 = -6975019130931144747;
    var_4184 = 0;
    var_4192 = 24;
    pri = fun_2A30(var_4184, var_4176, var_4168)
    var_4200 = 0;
    var_4208 = -6975022429466029380;
    var_4216 = 1;
    var_4224 = 24;
    pri = fun_2A30(var_4216, var_4208, var_4200)
    var_4232 = 0;
    var_4240 = 0;
    var_4248 = 0;
    var_4256 = 1;
    var_4264 = 32;
    pri = fun_2B18(var_4256, var_4248, var_4240, var_4232)
    var_4272 = 0;
    pri = fun_2A00()
    var_4280 = 1;
    var_4288 = -1;
    var_4296 = -1;
    var_4304 = 3;
    var_4312 = 0;
    var_4320 = 19;
    var_4328 = 8802641224559852288;
    var_4336 = 56;
    pri = fun_2D78(var_4328, var_4320, var_4312, var_4304, var_4296, var_4288, var_4280)
    var_4344 = 8802641224559852288;
    var_4352 = 8;
    pri = fun_0D88(var_4344)
    var_4360 = -8208209633826348795;
    var_4368 = 8;
    pri = fun_19E0(var_4360)
    var_4376 = 1;
    var_4384 = 3;
    var_4392 = 0;
    var_4400 = 12;
    var_4408 = -8208209633826348795;
    var_4416 = 40;
    pri = fun_6C90(var_4408, var_4400, var_4392, var_4384, var_4376)
    var_4424 = -8208209633826348795;
    var_4432 = 8;
    pri = fun_0D88(var_4424)
    var_4440 = 0;
    var_4448 = 0;
    var_4456 = 0;
    var_4464 = 0;
    OP_PUSH2_C 7099240262869383700, -1292278190967397311
    var_4472 = 48;
    pri = fun_0B58(var_4464, var_4456, var_4448, var_4440, var_4432, var_4424)
    var_4480 = 0;
    var_4488 = 0;
    var_4496 = 0;
    var_4504 = 0;
    OP_PUSH2_C 7099240262869383700, 8802641224559852288
    var_4512 = 48;
    pri = fun_0B58(var_4504, var_4496, var_4488, var_4480, var_4472, var_4464)
    var_4520 = 8802641224559852288;
    var_4528 = 8;
    pri = fun_0BB0(var_4520)
    var_4536 = -1292278190967397311;
    var_4544 = 8;
    pri = fun_0BB0(var_4536)
    var_4552 = 8;
    var_4560 = 8;
    pri = fun_00E8(var_4552)
    var_4568 = 0;
    var_4576 = 0;
    var_4584 = 0;
    var_4592 = 0;
    OP_PUSH2_C 8802641224559852288, 7099240262869383700
    var_4600 = 48;
    pri = fun_0B58(var_4592, var_4584, var_4576, var_4568, var_4560, var_4552)
    var_4608 = 2;
    var_4616 = 8;
    pri = fun_00E8(var_4608)
    var_4624 = 0;
    var_4632 = 0;
    var_4640 = 0;
    var_4648 = 0;
    OP_PUSH2_C -1292278190967397311, -8208209633826348795
    var_4656 = 48;
    pri = fun_0B58(var_4648, var_4640, var_4632, var_4624, var_4616, var_4608)
    var_4664 = 3;
    var_4672 = 8;
    pri = fun_00E8(var_4664)
    var_4680 = 0;
    var_4688 = 0;
    var_4696 = 0;
    var_4704 = 0;
    OP_PUSH2_C 8802641224559852288, 7418990988919710256
    var_4712 = 48;
    pri = fun_0B58(var_4704, var_4696, var_4688, var_4680, var_4672, var_4664)
    var_4720 = 7099240262869383700;
    var_4728 = 8;
    pri = fun_0BB0(var_4720)
    var_4736 = -8208209633826348795;
    var_4744 = 8;
    pri = fun_0BB0(var_4736)
    var_4752 = 7418990988919710256;
    var_4760 = 8;
    pri = fun_0BB0(var_4752)
    var_4768 = 0;
    var_4776 = 3;
    var_4784 = 7099240262869383700;
    var_4792 = 24;
    pri = fun_89C0(var_4784, var_4776, var_4768)
    var_4800 = 1;
    var_4808 = 8;
    pri = fun_00E8(var_4800)
    var_4816 = 7099240262869383700;
    var_4824 = 8;
    pri = fun_0D88(var_4816)
    var_4832 = 5;
    var_4840 = 5;
    var_4848 = 7099240262869383700;
    var_4856 = 24;
    pri = fun_1978(var_4848, var_4840, var_4832)
    var_4864 = 0;
    var_4872 = 3;
    var_4880 = 0;
    var_4888 = 100;
    var_4896 = -1;
    OP_PUSH2_C -8132224964693082646, 7099240262869383700
    var_4904 = 56;
    pri = fun_27F8(var_4896, var_4888, var_4880, var_4872, var_4864, var_4856, var_4848)
    var_4912 = 1;
    var_4920 = 8;
    pri = fun_2940(var_4912)
    var_4928 = 0;
    pri = fun_2A00()
    var_4936 = 1;
    var_4944 = 1;
    var_4952 = -1;
    var_4960 = -1;
    var_4968 = 0;
    var_4976 = 8;
    var_4984 = -1292278190967397311;
    var_4992 = 56;
    pri = fun_4958(var_4984, var_4976, var_4968, var_4960, var_4952, var_4944, var_4936)
    var_5000 = 0;
    var_5008 = 3;
    var_5016 = 0;
    var_5024 = 100;
    var_5032 = -1;
    OP_PUSH2_C 2972621251859873788, -1292278190967397311
    var_5040 = 56;
    pri = fun_27F8(var_5032, var_5024, var_5016, var_5008, var_5000, var_4992, var_4984)
    var_5048 = 1;
    var_5056 = 8;
    pri = fun_2940(var_5048)
    var_5064 = 0;
    pri = fun_2A00()
    var_5072 = 1;
    var_5080 = 3;
    var_5088 = 0;
    var_5096 = 8;
    var_5104 = -1292278190967397311;
    var_5112 = 40;
    pri = fun_6C90(var_5104, var_5096, var_5088, var_5080, var_5072)
    var_5120 = -1292278190967397311;
    var_5128 = 8;
    pri = fun_0D88(var_5120)
    var_5136 = 0;
    var_5144 = 4630741874350699315;
    var_5152 = 0;
    OP_PUSH5_C 4668307986537387131, 4637689380463360082, 4671310785778192220, 4668388525764121723, 4638682283443706921
    var_5160 = 4671306780807088046;
    var_5168 = 1;
    pri = EvCameraMove(var_5168, var_5160, var_5152, var_5144, var_5136, var_5128, var_5120, var_5112, var_5104, var_5096)
    var_5176 = 0;
    pri = fun_2B88()
    var_5184 = 7099240262869383700;
    var_5192 = 8;
    pri = fun_19E0(var_5184)
    var_5200 = 0;
    var_5208 = 0;
    var_5216 = 0;
    var_5224 = 0;
    OP_PUSH2_C 7418990988919710256, -8208209633826348795
    var_5232 = 48;
    pri = fun_0B58(var_5224, var_5216, var_5208, var_5200, var_5192, var_5184)
    var_5240 = -8208209633826348795;
    var_5248 = 8;
    pri = fun_0BB0(var_5240)
    var_5256 = 0;
    var_5264 = 1;
    var_5272 = 50;
    OP_PUSH2_C -8208209633826348795, 7099240262869383700
    var_5280 = 40;
    pri = fun_12E0(var_5272, var_5264, var_5256, var_5248, var_5240)
    var_5288 = 1;
    var_5296 = 1;
    var_5304 = 50;
    OP_PUSH2_C -8208209633826348795, 7418990988919710256
    var_5312 = 40;
    pri = fun_12E0(var_5304, var_5296, var_5288, var_5280, var_5272)
    var_5320 = 1;
    var_5328 = 1;
    var_5336 = -1;
    var_5344 = -1;
    var_5352 = 0;
    var_5360 = 1;
    var_5368 = -8208209633826348795;
    var_5376 = 56;
    pri = fun_4958(var_5368, var_5360, var_5352, var_5344, var_5336, var_5328, var_5320)
    var_5384 = 0;
    var_5392 = 3;
    var_5400 = 0;
    var_5408 = 100;
    var_5416 = -1;
    OP_PUSH2_C -788574489153112591, -8208209633826348795
    var_5424 = 56;
    pri = fun_27F8(var_5416, var_5408, var_5400, var_5392, var_5384, var_5376, var_5368)
    var_5432 = 1;
    var_5440 = 8;
    pri = fun_2940(var_5432)
    var_5448 = 0;
    pri = fun_2A00()
    var_5456 = 1;
    var_5464 = 3;
    var_5472 = 0;
    var_5480 = 1;
    var_5488 = -8208209633826348795;
    var_5496 = 40;
    pri = fun_6C90(var_5488, var_5480, var_5472, var_5464, var_5456)
    var_5504 = 0;
    var_5512 = 0;
    var_5520 = 0;
    var_5528 = 0;
    OP_PUSH2_C -8208209633826348795, 7418990988919710256
    var_5536 = 48;
    pri = fun_0B58(var_5528, var_5520, var_5512, var_5504, var_5496, var_5488)
    var_5544 = 0;
    var_5552 = 0;
    var_5560 = 0;
    var_5568 = 0;
    OP_PUSH2_C 7418990988919710256, 8802641224559852288
    var_5576 = 48;
    pri = fun_0B58(var_5568, var_5560, var_5552, var_5544, var_5536, var_5528)
    var_5584 = 0;
    var_5592 = 0;
    var_5600 = 0;
    var_5608 = 0;
    OP_PUSH2_C 7418990988919710256, -1292278190967397311
    var_5616 = 48;
    pri = fun_0B58(var_5608, var_5600, var_5592, var_5584, var_5576, var_5568)
    var_5624 = 8802641224559852288;
    var_5632 = 8;
    pri = fun_0BB0(var_5624)
    var_5640 = -1292278190967397311;
    var_5648 = 8;
    pri = fun_0BB0(var_5640)
    var_5656 = 7418990988919710256;
    var_5664 = 8;
    pri = fun_0BB0(var_5656)
    var_5672 = 5;
    var_5680 = 5;
    var_5688 = 7418990988919710256;
    var_5696 = 24;
    pri = fun_1978(var_5688, var_5680, var_5672)
    var_5704 = 1;
    var_5712 = -1;
    var_5720 = -1;
    var_5728 = 3;
    var_5736 = 0;
    var_5744 = 0;
    var_5752 = 7418990988919710256;
    var_5760 = 56;
    pri = fun_2D78(var_5752, var_5744, var_5736, var_5728, var_5720, var_5712, var_5704)
    var_5768 = 0;
    var_5776 = 3;
    var_5784 = 0;
    var_5792 = 100;
    var_5800 = -1;
    OP_PUSH2_C 1154193020545765668, 7418990988919710256
    var_5808 = 56;
    pri = fun_27F8(var_5800, var_5792, var_5784, var_5776, var_5768, var_5760, var_5752)
    var_5816 = 7418990988919710256;
    var_5824 = 8;
    pri = fun_0D88(var_5816)
    var_5832 = -8208209633826348795;
    var_5840 = 8;
    pri = fun_0D88(var_5832)
    var_5848 = 1;
    var_5856 = 8;
    pri = fun_2940(var_5848)
    var_5864 = 0;
    pri = fun_2A00()
    var_5872 = 0;
    var_5880 = 4631952216750555136;
    var_5888 = 0;
    OP_PUSH5_C 4668343511758080573, 4636010382227281019, 4671368996672545751, 4668520021857245594, 4640246932470497280
    var_5896 = 4671400844026844283;
    var_5904 = 1;
    pri = EvCameraMove(var_5904, var_5896, var_5888, var_5880, var_5872, var_5864, var_5856, var_5848, var_5840, var_5832)
    var_5912 = 0;
    pri = fun_2B88()
    var_5920 = 1;
    var_5928 = 0;
    var_5936 = 30;
    pri = float(var_5936)
    var_5944 = pri;
    var_5952 = 0;
    pri = float(var_5952)
    var_5960 = pri;
    var_5968 = 0;
    OP_PUSH4_C 4668247095583440896, 4671089333141241856, 4607182418800017408, -8208209633826348795
    var_5976 = 72;
    pri = fun_0A90(var_5968, var_5960, var_5952, var_5944, var_5936, var_5928, var_5920, var_5912, var_5904)
    var_5984 = 1;
    var_5992 = 0;
    var_6000 = 30;
    pri = float(var_6000)
    var_6008 = pri;
    var_6016 = 0;
    pri = float(var_6016)
    var_6024 = pri;
    var_6032 = 0;
    OP_PUSH4_C 4668316364815990784, 4671089333141241856, 4607182418800017408, 7418990988919710256
    var_6040 = 72;
    pri = fun_0A90(var_6032, var_6024, var_6016, var_6008, var_6000, var_5992, var_5984, var_5976, var_5968)
    var_6048 = 60;
    var_6056 = 8;
    pri = fun_00E8(var_6048)
    var_6064 = 34208;
    pri = SoundPostEvent(var_6064)
    var_6072 = -1;
    var_6080 = 7099240262869383700;
    var_6088 = 16;
    pri = fun_1808(var_6080, var_6072)
    var_6096 = 0;
    var_6104 = 0;
    var_6112 = 0;
    var_6120 = 0;
    OP_PUSH2_C 7099240262869383700, 8802641224559852288
    var_6128 = 48;
    pri = fun_0B58(var_6120, var_6112, var_6104, var_6096, var_6088, var_6080)
    var_6136 = 0;
    var_6144 = 0;
    var_6152 = 0;
    var_6160 = 0;
    OP_PUSH2_C 7099240262869383700, -1292278190967397311
    var_6168 = 48;
    pri = fun_0B58(var_6160, var_6152, var_6144, var_6136, var_6128, var_6120)
    var_6176 = 8802641224559852288;
    var_6184 = 8;
    pri = fun_0BB0(var_6176)
    var_6192 = -1292278190967397311;
    var_6200 = 8;
    pri = fun_0BB0(var_6192)
    var_6208 = -1;
    var_6216 = 7099240262869383700;
    var_6224 = 16;
    pri = fun_1808(var_6216, var_6208)
    var_6232 = 15;
    var_6240 = 7099240262869383700;
    var_6248 = 16;
    pri = fun_1848(var_6240, var_6232)
    var_6256 = 0;
    var_6264 = 0;
    var_6272 = 7099240262869383700;
    var_6280 = 24;
    pri = fun_89C0(var_6272, var_6264, var_6256)
    var_6288 = 1;
    var_6296 = 8;
    pri = fun_00E8(var_6288)
    var_6304 = 7099240262869383700;
    var_6312 = 8;
    pri = fun_0D88(var_6304)
    var_6320 = 2;
    var_6328 = 5;
    var_6336 = 7099240262869383700;
    var_6344 = 24;
    pri = fun_1978(var_6336, var_6328, var_6320)
    var_6352 = 0;
    var_6360 = 3;
    var_6368 = 0;
    var_6376 = 100;
    var_6384 = -1;
    OP_PUSH2_C -8132230462251223701, 7099240262869383700
    var_6392 = 56;
    pri = fun_27F8(var_6384, var_6376, var_6368, var_6360, var_6352, var_6344, var_6336)
    var_6400 = 1;
    var_6408 = 8;
    pri = fun_2940(var_6400)
    var_6416 = 0;
    pri = fun_2A00()
    var_6424 = 7099240262869383700;
    var_6432 = 8;
    pri = fun_19E0(var_6424)
    var_6440 = 1;
    var_6448 = 0;
    var_6456 = 30;
    pri = float(var_6456)
    var_6464 = pri;
    var_6472 = 0;
    pri = float(var_6472)
    var_6480 = pri;
    var_6488 = 0;
    var_6496 = 12713;
    pri = float(var_6496)
    var_6504 = pri;
    var_6512 = 21150;
    pri = float(var_6512)
    var_6520 = pri;
    OP_PUSH2_C 4611686018427387904, 7099240262869383700
    var_6528 = 72;
    pri = fun_0A90(var_6520, var_6512, var_6504, var_6496, var_6488, var_6480, var_6472, var_6464, var_6456)
    var_6536 = 40;
    var_6544 = 8;
    pri = fun_00E8(var_6536)
    var_6552 = 0;
    var_6560 = 0;
    var_6568 = 0;
    var_6576 = 0;
    OP_PUSH2_C 8802641224559852288, -1292278190967397311
    var_6584 = 48;
    pri = fun_0B58(var_6576, var_6568, var_6560, var_6552, var_6544, var_6536)
    var_6592 = -1292278190967397311;
    var_6600 = 8;
    pri = fun_0BB0(var_6592)
    var_6608 = 2;
    var_6616 = 2;
    var_6624 = -1292278190967397311;
    var_6632 = 24;
    pri = fun_1978(var_6624, var_6616, var_6608)
    var_6640 = 1;
    var_6648 = 1;
    var_6656 = -1;
    var_6664 = -1;
    var_6672 = 0;
    var_6680 = 22;
    var_6688 = -1292278190967397311;
    var_6696 = 56;
    pri = fun_4958(var_6688, var_6680, var_6672, var_6664, var_6656, var_6648, var_6640)
    var_6704 = 0;
    var_6712 = 0;
    var_6720 = 0;
    var_6728 = 0;
    OP_PUSH2_C -1292278190967397311, 8802641224559852288
    var_6736 = 48;
    pri = fun_0B58(var_6728, var_6720, var_6712, var_6704, var_6696, var_6688)
    var_6744 = 0;
    var_6752 = 3;
    var_6760 = 0;
    var_6768 = 100;
    var_6776 = -1;
    OP_PUSH2_C 2972622351371501999, -1292278190967397311
    var_6784 = 56;
    pri = fun_27F8(var_6776, var_6768, var_6760, var_6752, var_6744, var_6736, var_6728)
    var_6792 = 8802641224559852288;
    var_6800 = 8;
    pri = fun_0BB0(var_6792)
    var_6808 = 1;
    var_6816 = 8;
    pri = fun_2940(var_6808)
    var_6824 = 0;
    pri = fun_2A00()
    var_6832 = 1;
    var_6840 = 3;
    var_6848 = 0;
    var_6856 = 22;
    var_6864 = -1292278190967397311;
    var_6872 = 40;
    pri = fun_6C90(var_6864, var_6856, var_6848, var_6840, var_6832)
    var_6880 = -1292278190967397311;
    var_6888 = 8;
    pri = fun_0D88(var_6880)
    var_6896 = -1292278190967397311;
    var_6904 = 8;
    pri = fun_19E0(var_6896)
    var_6912 = 1;
    var_6920 = 0;
    var_6928 = 30;
    pri = float(var_6928)
    var_6936 = pri;
    var_6944 = 0;
    pri = float(var_6944)
    var_6952 = pri;
    var_6960 = 0;
    var_6968 = 4668308118478782464;
    var_6976 = 20871;
    pri = float(var_6976)
    var_6984 = pri;
    OP_PUSH2_C 4611686018427387904, -1292278190967397311
    var_6992 = 72;
    pri = fun_0A90(var_6984, var_6976, var_6968, var_6960, var_6952, var_6944, var_6936, var_6928, var_6920)
    var_7000 = 50;
    var_7008 = 8;
    pri = fun_00E8(var_7000)
    var_7016 = -8208209633826348795;
    var_7024 = 8;
    pri = fun_0BB0(var_7016)
    var_7032 = 7418990988919710256;
    var_7040 = 8;
    pri = fun_0BB0(var_7032)
    var_7048 = 7099240262869383700;
    var_7056 = 8;
    pri = fun_0BB0(var_7048)
    var_7064 = -1292278190967397311;
    var_7072 = 8;
    pri = fun_0BB0(var_7064)
    var_7080 = 0;
    var_7088 = 7418990988919710256;
    var_7096 = 16;
    pri = fun_0A20(var_7088, var_7080)
    var_7104 = 0;
    var_7112 = -8208209633826348795;
    var_7120 = 16;
    pri = fun_0A20(var_7112, var_7104)
    var_7128 = 0;
    var_7136 = 7099240262869383700;
    var_7144 = 16;
    pri = fun_0A20(var_7136, var_7128)
    var_7152 = 0;
    var_7160 = -1292278190967397311;
    var_7168 = 16;
    pri = fun_0A20(var_7160, var_7152)
    var_7176 = 20;
    var_7184 = 8;
    pri = fun_00E8(var_7176)
    var_7192 = 0;
    var_7200 = 4631952216750555136;
    var_7208 = 3;
    OP_PUSH5_C 4668144010870778757, 4649784008368896082, 4671298605938135532, 4668278701045181317, 4647710065556119880
    var_7216 = 4671322891401214034;
    var_7224 = 100;
    pri = EvCameraMove(var_7224, var_7216, var_7208, var_7200, var_7192, var_7184, var_7176, var_7168, var_7160, var_7152)
    var_7232 = 1;
    var_7240 = 1;
    var_7248 = 50;
    var_7256 = 5;
    var_7264 = 8802641224559852288;
    var_7272 = 40;
    pri = fun_1398(var_7264, var_7256, var_7248, var_7240, var_7232)
    var_7280 = 125;
    var_7288 = 8;
    pri = fun_00E8(var_7280)
    var_7296 = 1;
    var_7304 = 0;
    var_7312 = 33952;
    var_7320 = 8;
    var_7328 = 32;
    pri = fun_0368(var_7320, var_7312, var_7304, var_7296)
    var_7336 = 0;
    pri = fun_03D8()
    var_7344 = -1;
    var_7352 = 8802641224559852288;
    var_7360 = 16;
    pri = fun_1808(var_7352, var_7344)
    var_7368 = 3;
    var_7376 = 1;
    pri = EvCameraEnd(var_7376, var_7368)
    var_7384 = 15;
    var_7392 = 8;
    pri = fun_00E8(var_7384)
    var_7400 = 1;
    var_7408 = 1;
    var_7416 = 180;
    pri = float(var_7416)
    var_7424 = pri;
    OP_PUSH3_C 4668122509920897597, 4671170795957743780, 8802641224559852288
    var_7432 = 48;
    pri = fun_0668(var_7424, var_7416, var_7408, var_7400, var_7392, var_7384)
    var_7440 = 15;
    var_7448 = 8;
    pri = fun_00E8(var_7440)
    var_7456 = 34000;
    var_7464 = 8;
    var_7472 = 16;
    pri = fun_0308(var_7464, var_7456)
    var_7480 = 0;
    pri = fun_03D8()
    pri = 0;
    return pri;
}
// fun_D0C0
fun_D0C0() {
    pri = 0;
    return pri;
}
// fun_D0D8
fun_D0D8() {
    var_8 = 7418990988919710256;
    var_16 = 8;
    pri = fun_0610(var_8)
    var_24 = -8208209633826348795;
    var_32 = 8;
    pri = fun_0610(var_24)
    var_40 = -1292278190967397311;
    var_48 = 8;
    pri = fun_0610(var_40)
    var_56 = 7099240262869383700;
    var_64 = 8;
    pri = fun_0610(var_56)
    var_72 = 1420;
    var_80 = 8;
    pri = fun_9158(var_72)
    var_88 = 10;
    var_96 = 5709399143917384936;
    pri = WorkSet(var_96, var_88)
    var_104 = -6262522284274375690;
    pri = VanishFlagReset(var_104)
    var_112 = 157350306758072480;
    pri = VanishFlagReset(var_112)
    var_120 = 546922064245419454;
    pri = VanishFlagReset(var_120)
    var_128 = -8787185482726947913;
    pri = VanishFlagReset(var_128)
    var_136 = 1547268981296325127;
    pri = VanishFlagReset(var_136)
    var_144 = 1151261341740441237;
    pri = VanishFlagSet(var_144)
    var_152 = -8114263749462796303;
    pri = VanishFlagSet(var_152)
    var_160 = -8114275844090706624;
    pri = VanishFlagSet(var_160)
    var_168 = -6172060507476320999;
    pri = VanishFlagSet(var_168)
    var_176 = -5194924915703375849;
    pri = VanishFlagSet(var_176)
    var_184 = 2486974047188821742;
    pri = VanishFlagSet(var_184)
    var_192 = 1694664729997947566;
    pri = VanishFlagSet(var_192)
    var_200 = -7538304522349733508;
    pri = VanishFlagSet(var_200)
    var_208 = 2427332002786397889;
    pri = VanishFlagSet(var_208)
    var_216 = -4984660476301504303;
    pri = VanishFlagSet(var_216)
    var_224 = -4984672570929414624;
    pri = VanishFlagSet(var_224)
    var_232 = -5819758985880837554;
    pri = VanishFlagSet(var_232)
    var_240 = 7078654711603879870;
    pri = VanishFlagSet(var_240)
    var_248 = 1303735410573414071;
    pri = VanishFlagSet(var_248)
    pri = 0;
    return pri;
}
// fun_D4D8
fun_D4D8() {
    pri = 0;
    return pri;
}
// fun_D4F0
fun_D4F0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_92F0()
    var_16 = 0;
    pri = fun_9348()
    var_24 = 0;
    pri = fun_9388()
    var_32 = 0;
    pri = fun_93B8()
    var_40 = 0;
    pri = fun_D0C0()
    var_48 = 0;
    pri = fun_D0D8()
    var_56 = 0;
    pri = fun_D4D8()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_D5E0
fun_D5E0() {
    var_8 = 0;
    pri = fun_9348()
    var_16 = 0;
    pri = fun_D0D8()
    pri = 0;
    return pri;
}
