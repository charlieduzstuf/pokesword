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
// fun_0550
fun_0550() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0580
fun_0580() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_00E8(var_8)
    OP_JUMP lab_05B8
// lab_05B8
    var_8 = 0;
    pri = fun_0700()
    OP_JNZ lab_05F0
    OP_JUMP lab_0620
// lab_05F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05B8
// lab_0620
    var_8 = 1;
    var_16 = 8;
    pri = fun_00E8(var_8)
    OP_JUMP lab_0650
// lab_0650
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0690
    pri = 0;
    return pri;
// lab_0690
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0650
    pri = 0;
    return pri;
}
// fun_06D0
fun_06D0() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0700
fun_0700() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0728
fun_0728() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0780
fun_0780() {
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
// fun_08A0
fun_08A0() {
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
// fun_09C0
fun_09C0() {
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
// fun_0AE0
fun_0AE0() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0B18
fun_0B18() {
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
// fun_0B90
fun_0B90() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0BE8
fun_0BE8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_17F0(var_8)
    OP_JZER lab_0C60
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1820(var_24)
    OP_JNZ lab_0C60
    pri = 0;
    return pri;
// lab_0C60
    OP_JUMP lab_0C70
// lab_0C70
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0CD0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0CD0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0C70
    pri = 0;
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
    pri = fun_17F0(var_8)
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
    pri = fun_17F0(var_8)
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
// fun_1340
fun_1340() {
    OP_CONST_S -8, 4631530004285489152
    pri = arg_1;
    switch (pri) {
// switch_1700
        case default:
        {
// switch_1700_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_1700_case_0x0
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
            pri = fun_12E0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1700_case_default
        }
        case 0x1:
        {
// switch_1700_case_0x1
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_12E0(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1700_case_default
        }
        case 0x2:
        {
// switch_1700_case_0x2
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
            pri = fun_12E0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1700_case_default
        }
        case 0x3:
        {
// switch_1700_case_0x3
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 0;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_12E0(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1700_case_default
        }
        case 0x4:
        {
// switch_1700_case_0x4
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
            pri = fun_12E0(var_80, var_72, var_64, var_56, var_48, var_40)
            OP_JUMP switch_1700_case_default
        }
        case 0x5:
        {
// switch_1700_case_0x5
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
            pri = fun_12E0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1700_case_default
        }
        case 0x6:
        {
// switch_1700_case_0x6
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
            pri = fun_12E0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1700_case_default
        }
        case 0x7:
        {
// switch_1700_case_0x7
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_12E0(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1700_case_default
        }
    }
}
// fun_17B0
fun_17B0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_17F0
fun_17F0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1820
fun_1820() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1850
fun_1850() {
    OP_JUMP lab_1868
// lab_1868
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_18F8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_18E8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D88(var_8)
    pri = 0;
    return pri;
// lab_18F8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1988
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1978
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D88(var_8)
    pri = 0;
    return pri;
// lab_1988
    pri = 0;
    return pri;
// lab_1978
    OP_JUMP lab_1998
// lab_1998
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1868
    pri = 0;
    return pri;
// lab_18E8
    OP_JUMP lab_1998
}
// fun_19D8
fun_19D8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D88(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1850(var_40)
    pri = 0;
    return pri;
}
// fun_1A60
fun_1A60() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1A98
fun_1A98() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1AC0
fun_1AC0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1AF8
fun_1AF8() {
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
// switch_2110
        case default:
        {
// switch_2110_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_2158
// lab_2158
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
            OP_JNZ lab_2200
            var_88 = 0;
            pri = fun_23B8()
// lab_2200
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_2110_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1CF8
                case default:
                {
// switch_1CF8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1D70
// lab_1D70
                    OP_JUMP lab_2158
                }
                case 0x0:
                {
// switch_1CF8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1D70
                }
                case 0x1:
                {
// switch_1CF8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1D70
                }
                case 0x2:
                {
// switch_1CF8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1D70
                }
                case 0x3:
                {
// switch_1CF8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1D70
                }
                case 0x4:
                {
// switch_1CF8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1D70
                }
                case 0x5:
                {
// switch_1CF8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1D70
                }
            }
        }
        case 0x65:
        {
// switch_2110_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1EB0
                case default:
                {
// switch_1EB0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1F28
// lab_1F28
                    OP_JUMP lab_2158
                }
                case 0x0:
                {
// switch_1EB0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1F28
                }
                case 0x1:
                {
// switch_1EB0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1F28
                }
                case 0x2:
                {
// switch_1EB0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1F28
                }
                case 0x3:
                {
// switch_1EB0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1F28
                }
                case 0x4:
                {
// switch_1EB0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1F28
                }
                case 0x5:
                {
// switch_1EB0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1F28
                }
            }
        }
        case 0x66:
        {
// switch_2110_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_2068
                case default:
                {
// switch_2068_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_20E0
// lab_20E0
                    OP_JUMP lab_2158
                }
                case 0x0:
                {
// switch_2068_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_20E0
                }
                case 0x1:
                {
// switch_2068_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_20E0
                }
                case 0x2:
                {
// switch_2068_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_20E0
                }
                case 0x3:
                {
// switch_2068_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_20E0
                }
                case 0x4:
                {
// switch_2068_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_20E0
                }
                case 0x5:
                {
// switch_2068_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_20E0
                }
            }
        }
    }
}
// fun_2218
fun_2218() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0D50(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_22C0
    pri = 1;
    return pri;
// lab_22C0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2308
fun_2308() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2358
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2218(var_8)
    arg_2 = pri;
// lab_2358
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1AF8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_23B8
fun_23B8() {
    OP_JUMP lab_23D0
// lab_23D0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2410
    pri = 0;
    return pri;
// lab_2410
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_23D0
    pri = 0;
    return pri;
}
// fun_2450
fun_2450() {
    var_8 = 0;
    pri = fun_23B8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2500
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_2500
    pri = 0;
    return pri;
}
// fun_2510
fun_2510() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2540
fun_2540() {
    OP_JUMP lab_2558
// lab_2558
    pri = EvCameraMoveWait_()
    OP_JZER lab_2590
    pri = 0;
    return pri;
// lab_2590
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2558
    pri = 0;
    return pri;
}
// fun_25D0
fun_25D0() {
    var_16 = arg_4;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = 24;
    pri = fun_0780(var_32, var_24, var_16)
    var_8 = pri;
    var_56 = arg_4;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 24;
    pri = fun_08A0(var_72, var_64, var_56)
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
    pri = fun_09C0(var_136, var_128, var_120)
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
// fun_2730
fun_2730() {
    pri = arg_5;
    OP_JNZ lab_2768
    var_8 = 0;
    pri = fun_1260()
// lab_2768
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_27B8
    OP_CONST_S -8, -1
// lab_27B8
    pri = arg_1;
    switch (pri) {
// switch_4270
        case default:
        {
// switch_4270_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_4718
            var_520 = 20392;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0D50(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_4718
            pri = 1;
            OP_JUMP lab_4720
// lab_4718
            pri = 0;
// lab_4720
            OP_JZER lab_4770
            var_8 = 64;
            var_16 = 20488;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_01C0(var_16, var_8, var_0)
            OP_JUMP lab_49C8
// lab_4770
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_47D8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_47D8
            pri = 1;
            OP_JUMP lab_47E0
// lab_47D8
            pri = 0;
// lab_47E0
            OP_JZER lab_4968
            var_16 = 20664;
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
            var_176 = 20768;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 20784;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_49C8
// lab_4968
            var_8 = 64;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_01C0(var_16, var_8, var_0)
// lab_49C8
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_4A38
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_4A38
            var_8 = 0;
            pri = fun_12A0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4270_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x1:
        {
// switch_4270_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x2:
        {
// switch_4270_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x3:
        {
// switch_4270_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x4:
        {
// switch_4270_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x5:
        {
// switch_4270_case_0x5
            var_8 = 2;
            var_16 = 10648;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D10(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0F88(var_40)
            OP_JUMP switch_4270_case_default
        }
        case 0x6:
        {
// switch_4270_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x7:
        {
// switch_4270_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x8:
        {
// switch_4270_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x9:
        {
// switch_4270_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0xa:
        {
// switch_4270_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0xb:
        {
// switch_4270_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0xc:
        {
// switch_4270_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0xd:
        {
// switch_4270_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 11296;
            var_72 = 11120;
            var_80 = 10936;
            var_88 = 10744;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4270_case_default
        }
        case 0xe:
        {
// switch_4270_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 11952;
            var_72 = 11744;
            var_80 = 11528;
            var_88 = 11304;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4270_case_default
        }
        case 0xf:
        {
// switch_4270_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12344;
            var_72 = 12224;
            var_80 = 12096;
            var_88 = 11960;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4270_case_default
        }
        case 0x10:
        {
// switch_4270_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12688;
            var_72 = 12584;
            var_80 = 12472;
            var_88 = 12352;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4270_case_default
        }
        case 0x11:
        {
// switch_4270_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13032;
            var_72 = 12928;
            var_80 = 12816;
            var_88 = 12696;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4270_case_default
        }
        case 0x12:
        {
// switch_4270_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x13:
        {
// switch_4270_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x14:
        {
// switch_4270_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13592;
            var_72 = 13416;
            var_80 = 13232;
            var_88 = 13040;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4270_case_default
        }
        case 0x15:
        {
// switch_4270_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x16:
        {
// switch_4270_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x17:
        {
// switch_4270_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x18:
        {
// switch_4270_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x19:
        {
// switch_4270_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x1a:
        {
// switch_4270_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x1b:
        {
// switch_4270_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x1c:
        {
// switch_4270_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 13984;
            var_72 = 13864;
            var_80 = 13736;
            var_88 = 13600;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4270_case_default
        }
        case 0x1d:
        {
// switch_4270_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x1e:
        {
// switch_4270_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 14448;
            var_72 = 14304;
            var_80 = 14152;
            var_88 = 13992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4270_case_default
        }
        case 0x1f:
        {
// switch_4270_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x20:
        {
// switch_4270_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x21:
        {
// switch_4270_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x22:
        {
// switch_4270_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x23:
        {
// switch_4270_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x24:
        {
// switch_4270_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 14816;
            var_72 = 14704;
            var_80 = 14584;
            var_88 = 14456;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4270_case_default
        }
        case 0x25:
        {
// switch_4270_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15184;
            var_72 = 15072;
            var_80 = 14952;
            var_88 = 14824;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4270_case_default
        }
        case 0x26:
        {
// switch_4270_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x27:
        {
// switch_4270_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x28:
        {
// switch_4270_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x29:
        {
// switch_4270_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15624;
            var_72 = 15488;
            var_80 = 15344;
            var_88 = 15192;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4270_case_default
        }
        case 0x2a:
        {
// switch_4270_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16016;
            var_72 = 15896;
            var_80 = 15768;
            var_88 = 15632;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4270_case_default
        }
        case 0x2b:
        {
// switch_4270_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16432;
            var_72 = 16304;
            var_80 = 16168;
            var_88 = 16024;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4270_case_default
        }
        case 0x2c:
        {
// switch_4270_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16872;
            var_72 = 16736;
            var_80 = 16592;
            var_88 = 16440;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4270_case_default
        }
        case 0x2d:
        {
// switch_4270_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x2e:
        {
// switch_4270_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17192;
            var_72 = 17096;
            var_80 = 16992;
            var_88 = 16880;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4270_case_default
        }
        case 0x2f:
        {
// switch_4270_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17584;
            var_72 = 17464;
            var_80 = 17336;
            var_88 = 17200;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4270_case_default
        }
        case 0x30:
        {
// switch_4270_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17976;
            var_72 = 17856;
            var_80 = 17728;
            var_88 = 17592;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4270_case_default
        }
        case 0x31:
        {
// switch_4270_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x32:
        {
// switch_4270_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x33:
        {
// switch_4270_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18368;
            var_72 = 18248;
            var_80 = 18120;
            var_88 = 17984;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4270_case_default
        }
        case 0x34:
        {
// switch_4270_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18736;
            var_72 = 18624;
            var_80 = 18504;
            var_88 = 18376;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4270_case_default
        }
        case 0x35:
        {
// switch_4270_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19224;
            var_72 = 19072;
            var_80 = 18912;
            var_88 = 18744;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4270_case_default
        }
        case 0x36:
        {
// switch_4270_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19592;
            var_72 = 19480;
            var_80 = 19360;
            var_88 = 19232;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4270_case_default
        }
        case 0x37:
        {
// switch_4270_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x38:
        {
// switch_4270_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19960;
            var_72 = 19848;
            var_80 = 19728;
            var_88 = 19600;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4270_case_default
        }
        case 0x39:
        {
// switch_4270_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x3a:
        {
// switch_4270_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x3b:
        {
// switch_4270_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x3c:
        {
// switch_4270_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19968;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x3d:
        {
// switch_4270_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20144;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
        case 0x3e:
        {
// switch_4270_case_0x3e
            var_8 = 4;
            var_16 = 20288;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D10(var_24, var_16, var_8)
            OP_JUMP switch_4270_case_default
        }
    }
}
// fun_4A68
fun_4A68() {
    pri = arg_4;
    OP_JNZ lab_4AA0
    var_8 = 0;
    pri = fun_1260()
// lab_4AA0
    pri = arg_1;
    switch (pri) {
// switch_5E78
        case default:
        {
// switch_5E78_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21360;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_17F0(var_264)
            OP_JZER lab_6440
            pri = arg_3;
            switch (pri) {
// switch_63E8
                case default:
                {
// switch_63E8_case_default
                    OP_JUMP lab_66F8
// lab_66F8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_6768
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_6768
                    var_8 = 0;
                    pri = fun_12A0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_63E8_case_0x1
                    var_8 = 32;
                    var_16 = 21512;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01C0(var_16, var_8, var_0)
                    OP_JUMP switch_63E8_case_default
                }
                case 0x2:
                {
// switch_63E8_case_0x2
                    var_8 = 32;
                    var_16 = 21616;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01C0(var_16, var_8, var_0)
                    OP_JUMP switch_63E8_case_default
                }
                case 0x3:
                {
// switch_63E8_case_0x3
                    var_8 = 32;
                    var_16 = 21416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01C0(var_16, var_8, var_0)
                    OP_JUMP switch_63E8_case_default
                }
            }
// lab_6440
            pri = arg_1;
            OP_JZER lab_6490
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_6490
            pri = 0;
            OP_JUMP lab_6498
// lab_6490
            pri = 1;
// lab_6498
            OP_JZER lab_6500
            var_8 = 21712;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0D50(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6500
            pri = 1;
            OP_JUMP lab_6508
// lab_6500
            pri = 0;
// lab_6508
            OP_JZER lab_6558
            var_8 = 32;
            var_16 = 21808;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_01C0(var_16, var_8, var_0)
            OP_JUMP lab_66F8
// lab_6558
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_65C0
            var_8 = 32;
            var_16 = 21968;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_01C0(var_16, var_8, var_0)
            OP_JUMP lab_66F8
// lab_65C0
            var_16 = 22088;
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
            var_176 = 22192;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 22208;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_5E78_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x1:
        {
// switch_5E78_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x2:
        {
// switch_5E78_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x3:
        {
// switch_5E78_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x4:
        {
// switch_5E78_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x5:
        {
// switch_5E78_case_0x5
            var_8 = 1;
            var_16 = 20840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D10(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0F88(var_40)
            OP_JUMP switch_5E78_case_default
        }
        case 0x6:
        {
// switch_5E78_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x7:
        {
// switch_5E78_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x8:
        {
// switch_5E78_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x9:
        {
// switch_5E78_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0xa:
        {
// switch_5E78_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0xb:
        {
// switch_5E78_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0xc:
        {
// switch_5E78_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0xd:
        {
// switch_5E78_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0xe:
        {
// switch_5E78_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0xf:
        {
// switch_5E78_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x10:
        {
// switch_5E78_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x11:
        {
// switch_5E78_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x12:
        {
// switch_5E78_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x13:
        {
// switch_5E78_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x14:
        {
// switch_5E78_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x15:
        {
// switch_5E78_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x16:
        {
// switch_5E78_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x17:
        {
// switch_5E78_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x18:
        {
// switch_5E78_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x19:
        {
// switch_5E78_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x1a:
        {
// switch_5E78_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x1b:
        {
// switch_5E78_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x1c:
        {
// switch_5E78_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x1d:
        {
// switch_5E78_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x1e:
        {
// switch_5E78_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x1f:
        {
// switch_5E78_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x20:
        {
// switch_5E78_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x21:
        {
// switch_5E78_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x22:
        {
// switch_5E78_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x23:
        {
// switch_5E78_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x24:
        {
// switch_5E78_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x25:
        {
// switch_5E78_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x26:
        {
// switch_5E78_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x27:
        {
// switch_5E78_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x28:
        {
// switch_5E78_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x29:
        {
// switch_5E78_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x2a:
        {
// switch_5E78_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x2b:
        {
// switch_5E78_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x2c:
        {
// switch_5E78_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x2d:
        {
// switch_5E78_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x2e:
        {
// switch_5E78_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x2f:
        {
// switch_5E78_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x30:
        {
// switch_5E78_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x31:
        {
// switch_5E78_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x32:
        {
// switch_5E78_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x33:
        {
// switch_5E78_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x34:
        {
// switch_5E78_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x35:
        {
// switch_5E78_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x36:
        {
// switch_5E78_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x37:
        {
// switch_5E78_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x38:
        {
// switch_5E78_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x39:
        {
// switch_5E78_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x3a:
        {
// switch_5E78_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x3b:
        {
// switch_5E78_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x3c:
        {
// switch_5E78_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20936;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x3d:
        {
// switch_5E78_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21112;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
        case 0x3e:
        {
// switch_5E78_case_0x3e
            var_8 = 3;
            var_16 = 21256;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D10(var_24, var_16, var_8)
            OP_JUMP switch_5E78_case_default
        }
    }
}
// fun_6798
fun_6798() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_69A8(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 22256;
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
    var_424 = 22312;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 22328;
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
    OP_JZER lab_6990
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_6990
    pri = 0;
    return pri;
}
// fun_69A8
fun_69A8() {
    var_8 = arg_1;
    var_16 = 22376;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0D10(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_69F0
fun_69F0() {
    pri = 22480;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_6A78
// lab_6A78
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_6BF8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_6BE8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_6B38
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_6B38
    pri = 0;
    OP_JUMP lab_6B40
// lab_6BF8
    pri = 0;
    return pri;
// lab_6BE8
    OP_JUMP lab_6A70
// lab_6A70
    OP_INC_P_S -936
// lab_6B38
    pri = 1;
// lab_6B40
    OP_JZER lab_6BB8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_6BB0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_6BB8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_6BB0
}
// fun_6C18
fun_6C18() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_6CB0
    var_8 = 1;
    var_16 = 0;
    var_24 = 23400;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0368(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03D8()
    var_56 = 0;
    pri = fun_1A98()
// lab_6CB0
    pri = arg_4;
    OP_JZER lab_6CE8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1AC0(var_8)
// lab_6CE8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_6D40
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_6D40
    pri = 0;
    OP_JUMP lab_6D48
// lab_6D40
    pri = 1;
// lab_6D48
    OP_JZER lab_6E10
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_6E10
    var_16 = 0;
    pri = fun_0468()
    OP_JZER lab_6DE8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_19D8(var_32, var_24)
    OP_JUMP lab_6E10
// lab_6E10
    pri = arg_2;
    OP_JZER lab_6EE8
    var_8 = 0;
    pri = fun_0468()
    OP_JZER lab_6EB8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_17B0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0AE0(var_40)
    OP_JUMP lab_6EE8
// lab_6EE8
    pri = arg_3;
    OP_JZER lab_6F20
    var_8 = 1;
    var_16 = 8;
    pri = fun_1A60(var_8)
// lab_6F20
    pri = 0;
    return pri;
// lab_6EB8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_17B0(var_16, var_8)
// lab_6DE8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_19D8(var_16, var_8)
}
// fun_6F30
fun_6F30() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_69F0(var_24)
    pri = 0;
    return pri;
}
// fun_6F98
fun_6F98() {
    pri = g_mode;
    switch (pri) {
// switch_7058
        case default:
        {
// switch_7058_case_default
            pri = CommandNOP()
            OP_JUMP lab_70A0
// lab_70A0
            pri = 0;
            return pri;
        }
        case 0xb86287221adf909a:
        {
// switch_7058_case_0xb86287221adf909a
            var_8 = 0;
            pri = fun_7ED0()
            OP_JUMP lab_70A0
        }
        case 0x0:
        {
// switch_7058_case_0x0
            var_8 = 0;
            pri = fun_70B0()
            OP_JUMP lab_70A0
        }
        case 0x5470c51e68952696:
        {
// switch_7058_case_0x5470c51e68952696
            var_8 = 0;
            pri = fun_7FC0()
            OP_JUMP lab_70A0
        }
    }
}
// fun_70B0
fun_70B0() {
    pri = 0;
    return pri;
}
// fun_70C8
fun_70C8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_6C18(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_7120
fun_7120() {
    pri = 0;
    return pri;
}
// fun_7138
fun_7138() {
    pri = 0;
    return pri;
}
// fun_7150
fun_7150() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_00E8(var_8)
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    OP_PUSH2_C 8802641224559852288, -6270886897370188264
    var_56 = 48;
    pri = fun_0B90(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = -6270886897370188264;
    var_72 = 8;
    pri = fun_0BE8(var_64)
    var_80 = 0;
    pri = fun_2540()
    var_88 = 1;
    var_96 = 1;
    var_104 = -1;
    var_112 = -1;
    var_120 = 0;
    var_128 = 7;
    var_136 = -6270886897370188264;
    var_144 = 56;
    pri = fun_2730(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 0;
    var_160 = 3;
    var_168 = 0;
    var_176 = 100;
    var_184 = -1;
    OP_PUSH2_C -3398533756926874619, -6270886897370188264
    var_192 = 56;
    pri = fun_2308(var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_200 = 1;
    var_208 = 8;
    pri = fun_2450(var_200)
    var_216 = 0;
    pri = fun_2510()
    var_224 = 0;
    var_232 = 0;
    var_240 = 0;
    var_248 = 0;
    OP_PUSH2_C -6270886897370188264, 8802641224559852288
    var_256 = 48;
    pri = fun_0B90(var_248, var_240, var_232, var_224, var_216, var_208)
    var_264 = 8802641224559852288;
    var_272 = 8;
    pri = fun_0BE8(var_264)
    var_280 = 150;
    var_288 = 3;
    OP_PUSH4_C 4606281698874543309, 4604480259023595111, -6270886897370188264, 8802641224559852288
    var_296 = 50;
    var_304 = 56;
    pri = fun_25D0(var_296, var_288, var_280, var_272, var_264, var_256, var_248)
    var_312 = 0;
    pri = fun_2540()
    var_320 = 30;
    var_328 = 8;
    pri = fun_00E8(var_320)
    var_336 = 1;
    var_344 = 0;
    var_352 = 23400;
    var_360 = 8;
    var_368 = 32;
    pri = fun_0368(var_360, var_352, var_344, var_336)
    var_376 = 0;
    pri = fun_03D8()
    var_384 = 1;
    var_392 = 3;
    var_400 = 0;
    var_408 = 7;
    var_416 = -6270886897370188264;
    var_424 = 40;
    pri = fun_4A68(var_416, var_408, var_400, var_392, var_384)
    var_432 = -6270886897370188264;
    var_440 = 8;
    pri = fun_0D88(var_432)
    var_448 = 1;
    var_456 = 1;
    var_464 = -90;
    pri = float(var_464)
    var_472 = pri;
    var_480 = 17624;
    pri = float(var_480)
    var_488 = pri;
    var_496 = 30271;
    pri = float(var_496)
    var_504 = pri;
    var_512 = 8802641224559852288;
    var_520 = 48;
    pri = fun_0728(var_512, var_504, var_496, var_488, var_480, var_472)
    var_528 = 0;
    var_536 = 0;
    var_544 = 0;
    var_552 = 0;
    OP_PUSH2_C 8802641224559852288, -6270886897370188264
    var_560 = 48;
    pri = fun_0B90(var_552, var_544, var_536, var_528, var_520, var_512)
    var_568 = -6270886897370188264;
    var_576 = 8;
    pri = fun_0BE8(var_568)
    var_584 = 1;
    var_592 = 0;
    var_600 = 30;
    pri = float(var_600)
    var_608 = pri;
    var_616 = 0;
    pri = float(var_616)
    var_624 = pri;
    var_632 = 0;
    var_640 = 17624;
    pri = float(var_640)
    var_648 = pri;
    var_656 = 30065;
    pri = float(var_656)
    var_664 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_672 = 72;
    pri = fun_0B18(var_664, var_656, var_648, var_640, var_632, var_624, var_616, var_608, var_600)
    var_680 = 30;
    var_688 = 8;
    pri = fun_00E8(var_680)
    var_696 = 0;
    var_704 = 4633204780396917555;
    var_712 = 0;
    OP_PUSH5_C 4670571586859617485, 4648447881838822687, 4674005383663394488, 4670623566271820595, 4648372059516971254
    var_720 = 4674027739483566244;
    var_728 = 1;
    pri = EvCameraMove(var_728, var_720, var_712, var_704, var_696, var_688, var_680, var_672, var_664, var_656)
    var_736 = 0;
    pri = fun_2540()
    var_744 = 0;
    var_752 = 4633204780396917555;
    var_760 = 3;
    OP_PUSH5_C 4670585319759848407, 4648447881838822687, 4673973453845723873, 4670637299172051517, 4648372059516971254
    var_768 = 4673995809665895629;
    var_776 = 30;
    pri = EvCameraMove(var_776, var_768, var_760, var_752, var_744, var_736, var_728, var_720, var_712, var_704)
    var_784 = 23448;
    var_792 = 8;
    var_800 = 16;
    pri = fun_0308(var_792, var_784)
    var_808 = 0;
    pri = fun_03D8()
    var_816 = 0;
    var_824 = 1;
    var_832 = -6270886897370188264;
    var_840 = 24;
    pri = fun_6798(var_832, var_824, var_816)
    var_848 = 1;
    var_856 = 8;
    pri = fun_00E8(var_848)
    var_864 = -6270886897370188264;
    var_872 = 8;
    pri = fun_0D88(var_864)
    var_880 = 8802641224559852288;
    var_888 = 8;
    pri = fun_0BE8(var_880)
    var_896 = 0;
    var_904 = 3;
    var_912 = 0;
    var_920 = 100;
    var_928 = -1;
    OP_PUSH2_C -3398535955950131041, -6270886897370188264
    var_936 = 56;
    pri = fun_2308(var_928, var_920, var_912, var_904, var_896, var_888, var_880)
    var_944 = 1;
    var_952 = 8;
    pri = fun_2450(var_944)
    var_960 = 0;
    pri = fun_2510()
    var_968 = 1;
    var_976 = 1;
    var_984 = -1;
    var_992 = 1;
    var_1000 = -6270886897370188264;
    var_1008 = 40;
    pri = fun_1340(var_1000, var_992, var_984, var_976, var_968)
    var_1016 = 0;
    var_1024 = 3;
    var_1032 = 0;
    var_1040 = 100;
    var_1048 = -1;
    OP_PUSH2_C -3398534856438502830, -6270886897370188264
    var_1056 = 56;
    pri = fun_2308(var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000)
    var_1064 = 1;
    var_1072 = 8;
    pri = fun_2450(var_1064)
    var_1080 = 0;
    pri = fun_2510()
    var_1088 = -1;
    var_1096 = -6270886897370188264;
    var_1104 = 16;
    pri = fun_17B0(var_1096, var_1088)
    var_1112 = 0;
    var_1120 = 0;
    var_1128 = -6270886897370188264;
    var_1136 = 24;
    pri = fun_6798(var_1128, var_1120, var_1112)
    var_1144 = 1;
    var_1152 = 8;
    pri = fun_00E8(var_1144)
    var_1160 = -6270886897370188264;
    var_1168 = 8;
    pri = fun_0D88(var_1160)
    var_1176 = 1;
    var_1184 = 0;
    var_1192 = 4641240890982006784;
    var_1200 = 0;
    var_1208 = 0;
    OP_PUSH4_C 4670521435385495552, 4673943665326948352, 4607182418800017408, -6270886897370188264
    var_1216 = 72;
    pri = fun_0B18(var_1208, var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144)
    var_1224 = 5;
    var_1232 = 8;
    pri = fun_00E8(var_1224)
    var_1240 = 1;
    var_1248 = 0;
    var_1256 = 4641240890982006784;
    var_1264 = 0;
    var_1272 = 0;
    OP_PUSH4_C 4670521435385495552, 4673943665326948352, 4607182418800017408, 8802641224559852288
    var_1280 = 72;
    pri = fun_0B18(var_1272, var_1264, var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208)
    var_1288 = 25;
    var_1296 = 8;
    pri = fun_00E8(var_1288)
    var_1304 = 1;
    var_1312 = 0;
    var_1320 = 23400;
    var_1328 = 8;
    var_1336 = 32;
    pri = fun_0368(var_1328, var_1320, var_1312, var_1304)
    var_1344 = 0;
    pri = fun_03D8()
    var_1352 = 23496;
    pri = SoundPostEvent(var_1352)
    var_1360 = -6270886897370188264;
    var_1368 = 8;
    pri = fun_0BE8(var_1360)
    var_1376 = 8802641224559852288;
    var_1384 = 8;
    pri = fun_0BE8(var_1376)
    pri = 0;
    return pri;
}
// fun_7D08
fun_7D08() {
    pri = 0;
    return pri;
}
// fun_7D20
fun_7D20() {
    var_8 = -6270886897370188264;
    var_16 = 8;
    pri = fun_06D0(var_8)
    var_24 = 410;
    var_32 = 8;
    pri = fun_6F30(var_24)
    var_40 = 10;
    var_48 = -632418990022576455;
    pri = WorkSet(var_48, var_40)
    var_56 = 10;
    var_64 = -506847387856332444;
    pri = WorkSet(var_64, var_56)
    var_72 = 6318683489645882416;
    var_80 = 8;
    pri = fun_0550(var_72)
    var_88 = 6318695584273792737;
    var_96 = 8;
    pri = fun_0550(var_88)
    pri = 0;
    return pri;
}
// fun_7E30
fun_7E30() {
    var_8 = 0;
    pri = fun_0580()
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    OP_PUSH5_C 4653533430980542464, 4652104065864433664, -4899888153086025431, -3048053791066548706, -5159457067347315773
    var_56 = 80;
    pri = fun_0490(var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24)
    pri = 0;
    return pri;
}
// fun_7ED0
fun_7ED0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_70C8()
    var_16 = 0;
    pri = fun_7120()
    var_24 = 0;
    pri = fun_7138()
    var_32 = 0;
    pri = fun_7150()
    var_40 = 0;
    pri = fun_7D08()
    var_48 = 0;
    pri = fun_7D20()
    var_56 = 0;
    pri = fun_7E30()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_7FC0
fun_7FC0() {
    var_8 = 0;
    pri = fun_7120()
    var_16 = 0;
    pri = fun_7D20()
    pri = 0;
    return pri;
}
