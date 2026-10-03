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
    var_8 = arg_1;
    pri = float(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = floatadd(var_24, var_16)
    return pri;
}
// fun_00B8
fun_00B8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSLESS lab_00F8
    pri = 0;
    return pri;
// lab_00F8
    OP_ZERO_P_S -8
    OP_JUMP lab_0120
// lab_0120
    OP_LOAD_S_BOTH -8, 24
    OP_JSGEQ lab_0178
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0118
// lab_0178
    pri = 0;
    return pri;
// lab_0118
    OP_INC_P_S -8
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
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0490
fun_0490() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_04C8
// lab_04C8
    var_8 = 0;
    pri = fun_0610()
    OP_JNZ lab_0500
    OP_JUMP lab_0530
// lab_0500
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_04C8
// lab_0530
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_0560
// lab_0560
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_05A0
    pri = 0;
    return pri;
// lab_05A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0560
    pri = 0;
    return pri;
}
// fun_05E0
fun_05E0() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0610
fun_0610() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0638
fun_0638() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0690
fun_0690() {
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
// fun_07B0
fun_07B0() {
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
// fun_08D0
fun_08D0() {
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
// fun_09F0
fun_09F0() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0A28
fun_0A28() {
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
// fun_0AA0
fun_0AA0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0AF0
fun_0AF0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0B48
fun_0B48() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1488(var_8)
    OP_JZER lab_0BC0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_14B8(var_24)
    OP_JNZ lab_0BC0
    pri = 0;
    return pri;
// lab_0BC0
    OP_JUMP lab_0BD0
// lab_0BD0
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0C30
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0C30
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0BD0
    pri = 0;
    return pri;
}
// fun_0C70
fun_0C70() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0CB0
fun_0CB0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0CE8
fun_0CE8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0D30
    pri = 0;
    return pri;
// lab_0D30
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0D70
// lab_0D70
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1488(var_8)
    OP_JNZ lab_0DF8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0DE8
    pri = 0;
    return pri;
// lab_0DF8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0E40
    pri = 0;
    return pri;
// lab_0E40
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0EA0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0EE8(var_8)
    pri = 0;
    return pri;
// lab_0EA0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D70
    pri = 0;
    return pri;
// lab_0DE8
    OP_JUMP lab_0E40
}
// fun_0EE8
fun_0EE8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0F20
fun_0F20() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0F70
    pri = 0;
    return pri;
// lab_0F70
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1488(var_8)
    OP_JZER lab_10A0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FC8
    OP_ZERO_P_S 64
// lab_10A0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_10D8
    OP_CONST_S 64, 1
// lab_10D8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1110
    OP_CONST_S 72, 1
// lab_1110
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
// lab_0FC8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FF0
    OP_ZERO_P_S 72
// lab_0FF0
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
    OP_JUMP lab_11B0
// lab_11B0
    pri = 0;
    return pri;
}
// fun_11C0
fun_11C0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1200
fun_1200() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1240
fun_1240() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1298
fun_1298() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12D8
fun_12D8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1318
fun_1318() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1350
fun_1350() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1390
fun_1390() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_13C8
fun_13C8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_12D8(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1350(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1430
fun_1430() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1318(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1390(var_24)
    pri = 0;
    return pri;
}
// fun_1488
fun_1488() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_14B8
fun_14B8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_14E8
fun_14E8() {
    OP_JUMP lab_1500
// lab_1500
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1590
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1580
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0CE8(var_8)
    pri = 0;
    return pri;
// lab_1590
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1620
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1610
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0CE8(var_8)
    pri = 0;
    return pri;
// lab_1620
    pri = 0;
    return pri;
// lab_1610
    OP_JUMP lab_1630
// lab_1630
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1500
    pri = 0;
    return pri;
// lab_1580
    OP_JUMP lab_1630
}
// fun_1670
fun_1670() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0CE8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_14E8(var_40)
    pri = 0;
    return pri;
}
// fun_16F8
fun_16F8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1730
fun_1730() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1758
fun_1758() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1790
fun_1790() {
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
// switch_1DA8
        case default:
        {
// switch_1DA8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1DF0
// lab_1DF0
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
            OP_JNZ lab_1E98
            var_88 = 0;
            pri = fun_2050()
// lab_1E98
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1DA8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1990
                case default:
                {
// switch_1990_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1A08
// lab_1A08
                    OP_JUMP lab_1DF0
                }
                case 0x0:
                {
// switch_1990_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1A08
                }
                case 0x1:
                {
// switch_1990_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1A08
                }
                case 0x2:
                {
// switch_1990_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1A08
                }
                case 0x3:
                {
// switch_1990_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1A08
                }
                case 0x4:
                {
// switch_1990_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1A08
                }
                case 0x5:
                {
// switch_1990_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1A08
                }
            }
        }
        case 0x65:
        {
// switch_1DA8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1B48
                case default:
                {
// switch_1B48_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1BC0
// lab_1BC0
                    OP_JUMP lab_1DF0
                }
                case 0x0:
                {
// switch_1B48_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1BC0
                }
                case 0x1:
                {
// switch_1B48_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1BC0
                }
                case 0x2:
                {
// switch_1B48_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1BC0
                }
                case 0x3:
                {
// switch_1B48_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1BC0
                }
                case 0x4:
                {
// switch_1B48_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1BC0
                }
                case 0x5:
                {
// switch_1B48_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1BC0
                }
            }
        }
        case 0x66:
        {
// switch_1DA8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1D00
                case default:
                {
// switch_1D00_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1D78
// lab_1D78
                    OP_JUMP lab_1DF0
                }
                case 0x0:
                {
// switch_1D00_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1D78
                }
                case 0x1:
                {
// switch_1D00_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1D78
                }
                case 0x2:
                {
// switch_1D00_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1D78
                }
                case 0x3:
                {
// switch_1D00_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1D78
                }
                case 0x4:
                {
// switch_1D00_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1D78
                }
                case 0x5:
                {
// switch_1D00_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1D78
                }
            }
        }
    }
}
// fun_1EB0
fun_1EB0() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0CB0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1F58
    pri = 1;
    return pri;
// lab_1F58
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1FA0
fun_1FA0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1FF0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1EB0(var_8)
    arg_2 = pri;
// lab_1FF0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1790(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2050
fun_2050() {
    OP_JUMP lab_2068
// lab_2068
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_20A8
    pri = 0;
    return pri;
// lab_20A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2068
    pri = 0;
    return pri;
}
// fun_20E8
fun_20E8() {
    var_8 = 0;
    pri = fun_2050()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2198
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_2198
    pri = 0;
    return pri;
}
// fun_21A8
fun_21A8() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_21D8
fun_21D8() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_2208
// lab_2208
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2248
    OP_JUMP lab_2278
// lab_2248
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2208
// lab_2278
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_22C0
fun_22C0() {
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
// fun_2330
fun_2330() {
    OP_JUMP lab_2348
// lab_2348
    pri = EvCameraMoveWait_()
    OP_JZER lab_2380
    pri = 0;
    return pri;
// lab_2380
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2348
    pri = 0;
    return pri;
}
// fun_23C0
fun_23C0() {
    var_16 = arg_4;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = 24;
    pri = fun_0690(var_32, var_24, var_16)
    var_8 = pri;
    var_56 = arg_4;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 24;
    pri = fun_07B0(var_72, var_64, var_56)
    OP_MOVE_ALT 
    pri = arg_6;
    var_88 = pri;
    var_96 = alt;
    var_104 = 16;
    pri = fun_0060(var_96, var_88)
    var_16 = pri;
    var_120 = arg_4;
    var_128 = arg_2;
    var_136 = arg_1;
    var_144 = 24;
    pri = fun_08D0(var_136, var_128, var_120)
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
// fun_2520
fun_2520() {
    pri = arg_5;
    OP_JNZ lab_2558
    var_8 = 0;
    pri = fun_11C0()
// lab_2558
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_25A8
    OP_CONST_S -8, -1
// lab_25A8
    pri = arg_1;
    switch (pri) {
// switch_4060
        case default:
        {
// switch_4060_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_4508
            var_520 = 20392;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0CB0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_4508
            pri = 1;
            OP_JUMP lab_4510
// lab_4508
            pri = 0;
// lab_4510
            OP_JZER lab_4560
            var_8 = 64;
            var_16 = 20488;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_47B8
// lab_4560
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_45C8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_45C8
            pri = 1;
            OP_JUMP lab_45D0
// lab_45C8
            pri = 0;
// lab_45D0
            OP_JZER lab_4758
            var_16 = 20664;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0CB0(var_24, var_16)
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
            OP_JUMP lab_47B8
// lab_4758
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
            pri = fun_0190(var_16, var_8, var_0)
// lab_47B8
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_4828
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_4828
            var_8 = 0;
            pri = fun_1200()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4060_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x1:
        {
// switch_4060_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x2:
        {
// switch_4060_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x3:
        {
// switch_4060_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x4:
        {
// switch_4060_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x5:
        {
// switch_4060_case_0x5
            var_8 = 2;
            var_16 = 10648;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C70(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0EE8(var_40)
            OP_JUMP switch_4060_case_default
        }
        case 0x6:
        {
// switch_4060_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x7:
        {
// switch_4060_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x8:
        {
// switch_4060_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x9:
        {
// switch_4060_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0xa:
        {
// switch_4060_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0xb:
        {
// switch_4060_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0xc:
        {
// switch_4060_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0xd:
        {
// switch_4060_case_0xd
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
            pri = fun_0F20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4060_case_default
        }
        case 0xe:
        {
// switch_4060_case_0xe
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
            pri = fun_0F20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4060_case_default
        }
        case 0xf:
        {
// switch_4060_case_0xf
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
            pri = fun_0F20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4060_case_default
        }
        case 0x10:
        {
// switch_4060_case_0x10
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
            pri = fun_0F20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4060_case_default
        }
        case 0x11:
        {
// switch_4060_case_0x11
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
            pri = fun_0F20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4060_case_default
        }
        case 0x12:
        {
// switch_4060_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x13:
        {
// switch_4060_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x14:
        {
// switch_4060_case_0x14
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
            pri = fun_0F20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4060_case_default
        }
        case 0x15:
        {
// switch_4060_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x16:
        {
// switch_4060_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x17:
        {
// switch_4060_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x18:
        {
// switch_4060_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x19:
        {
// switch_4060_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x1a:
        {
// switch_4060_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x1b:
        {
// switch_4060_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x1c:
        {
// switch_4060_case_0x1c
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
            pri = fun_0F20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4060_case_default
        }
        case 0x1d:
        {
// switch_4060_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x1e:
        {
// switch_4060_case_0x1e
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
            pri = fun_0F20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4060_case_default
        }
        case 0x1f:
        {
// switch_4060_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x20:
        {
// switch_4060_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x21:
        {
// switch_4060_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x22:
        {
// switch_4060_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x23:
        {
// switch_4060_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x24:
        {
// switch_4060_case_0x24
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
            pri = fun_0F20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4060_case_default
        }
        case 0x25:
        {
// switch_4060_case_0x25
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
            pri = fun_0F20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4060_case_default
        }
        case 0x26:
        {
// switch_4060_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x27:
        {
// switch_4060_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x28:
        {
// switch_4060_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x29:
        {
// switch_4060_case_0x29
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
            pri = fun_0F20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4060_case_default
        }
        case 0x2a:
        {
// switch_4060_case_0x2a
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
            pri = fun_0F20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4060_case_default
        }
        case 0x2b:
        {
// switch_4060_case_0x2b
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
            pri = fun_0F20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4060_case_default
        }
        case 0x2c:
        {
// switch_4060_case_0x2c
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
            pri = fun_0F20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4060_case_default
        }
        case 0x2d:
        {
// switch_4060_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x2e:
        {
// switch_4060_case_0x2e
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
            pri = fun_0F20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4060_case_default
        }
        case 0x2f:
        {
// switch_4060_case_0x2f
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
            pri = fun_0F20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4060_case_default
        }
        case 0x30:
        {
// switch_4060_case_0x30
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
            pri = fun_0F20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4060_case_default
        }
        case 0x31:
        {
// switch_4060_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x32:
        {
// switch_4060_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x33:
        {
// switch_4060_case_0x33
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
            pri = fun_0F20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4060_case_default
        }
        case 0x34:
        {
// switch_4060_case_0x34
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
            pri = fun_0F20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4060_case_default
        }
        case 0x35:
        {
// switch_4060_case_0x35
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
            pri = fun_0F20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4060_case_default
        }
        case 0x36:
        {
// switch_4060_case_0x36
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
            pri = fun_0F20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4060_case_default
        }
        case 0x37:
        {
// switch_4060_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x38:
        {
// switch_4060_case_0x38
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
            pri = fun_0F20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4060_case_default
        }
        case 0x39:
        {
// switch_4060_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x3a:
        {
// switch_4060_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x3b:
        {
// switch_4060_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x3c:
        {
// switch_4060_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19968;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x3d:
        {
// switch_4060_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20144;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
        case 0x3e:
        {
// switch_4060_case_0x3e
            var_8 = 4;
            var_16 = 20288;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C70(var_24, var_16, var_8)
            OP_JUMP switch_4060_case_default
        }
    }
}
// fun_4858
fun_4858() {
    pri = arg_4;
    OP_JNZ lab_4890
    var_8 = 0;
    pri = fun_11C0()
// lab_4890
    pri = arg_1;
    switch (pri) {
// switch_5C68
        case default:
        {
// switch_5C68_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21360;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1488(var_264)
            OP_JZER lab_6230
            pri = arg_3;
            switch (pri) {
// switch_61D8
                case default:
                {
// switch_61D8_case_default
                    OP_JUMP lab_64E8
// lab_64E8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_6558
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_6558
                    var_8 = 0;
                    pri = fun_1200()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_61D8_case_0x1
                    var_8 = 32;
                    var_16 = 21512;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_61D8_case_default
                }
                case 0x2:
                {
// switch_61D8_case_0x2
                    var_8 = 32;
                    var_16 = 21616;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_61D8_case_default
                }
                case 0x3:
                {
// switch_61D8_case_0x3
                    var_8 = 32;
                    var_16 = 21416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_61D8_case_default
                }
            }
// lab_6230
            pri = arg_1;
            OP_JZER lab_6280
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_6280
            pri = 0;
            OP_JUMP lab_6288
// lab_6280
            pri = 1;
// lab_6288
            OP_JZER lab_62F0
            var_8 = 21712;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0CB0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_62F0
            pri = 1;
            OP_JUMP lab_62F8
// lab_62F0
            pri = 0;
// lab_62F8
            OP_JZER lab_6348
            var_8 = 32;
            var_16 = 21808;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_64E8
// lab_6348
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_63B0
            var_8 = 32;
            var_16 = 21968;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_64E8
// lab_63B0
            var_16 = 22088;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0CB0(var_24, var_16)
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
// switch_5C68_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x1:
        {
// switch_5C68_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x2:
        {
// switch_5C68_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x3:
        {
// switch_5C68_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x4:
        {
// switch_5C68_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x5:
        {
// switch_5C68_case_0x5
            var_8 = 1;
            var_16 = 20840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C70(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0EE8(var_40)
            OP_JUMP switch_5C68_case_default
        }
        case 0x6:
        {
// switch_5C68_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x7:
        {
// switch_5C68_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x8:
        {
// switch_5C68_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x9:
        {
// switch_5C68_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0xa:
        {
// switch_5C68_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0xb:
        {
// switch_5C68_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0xc:
        {
// switch_5C68_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0xd:
        {
// switch_5C68_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0xe:
        {
// switch_5C68_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0xf:
        {
// switch_5C68_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x10:
        {
// switch_5C68_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x11:
        {
// switch_5C68_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x12:
        {
// switch_5C68_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x13:
        {
// switch_5C68_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x14:
        {
// switch_5C68_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x15:
        {
// switch_5C68_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x16:
        {
// switch_5C68_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x17:
        {
// switch_5C68_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x18:
        {
// switch_5C68_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x19:
        {
// switch_5C68_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x1a:
        {
// switch_5C68_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x1b:
        {
// switch_5C68_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x1c:
        {
// switch_5C68_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x1d:
        {
// switch_5C68_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x1e:
        {
// switch_5C68_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x1f:
        {
// switch_5C68_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x20:
        {
// switch_5C68_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x21:
        {
// switch_5C68_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x22:
        {
// switch_5C68_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x23:
        {
// switch_5C68_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x24:
        {
// switch_5C68_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x25:
        {
// switch_5C68_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x26:
        {
// switch_5C68_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x27:
        {
// switch_5C68_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x28:
        {
// switch_5C68_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x29:
        {
// switch_5C68_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x2a:
        {
// switch_5C68_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x2b:
        {
// switch_5C68_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x2c:
        {
// switch_5C68_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x2d:
        {
// switch_5C68_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x2e:
        {
// switch_5C68_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x2f:
        {
// switch_5C68_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x30:
        {
// switch_5C68_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x31:
        {
// switch_5C68_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x32:
        {
// switch_5C68_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x33:
        {
// switch_5C68_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x34:
        {
// switch_5C68_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x35:
        {
// switch_5C68_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x36:
        {
// switch_5C68_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x37:
        {
// switch_5C68_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x38:
        {
// switch_5C68_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x39:
        {
// switch_5C68_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x3a:
        {
// switch_5C68_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x3b:
        {
// switch_5C68_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x3c:
        {
// switch_5C68_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20936;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x3d:
        {
// switch_5C68_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21112;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
        case 0x3e:
        {
// switch_5C68_case_0x3e
            var_8 = 3;
            var_16 = 21256;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C70(var_24, var_16, var_8)
            OP_JUMP switch_5C68_case_default
        }
    }
}
// fun_6588
fun_6588() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_6798(var_16, var_8)
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
    OP_JZER lab_6780
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_6780
    pri = 0;
    return pri;
}
// fun_6798
fun_6798() {
    var_8 = arg_1;
    var_16 = 22376;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0C70(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_67E0
fun_67E0() {
    pri = 22480;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_6868
// lab_6868
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_69E8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_69D8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_6928
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_6928
    pri = 0;
    OP_JUMP lab_6930
// lab_69E8
    pri = 0;
    return pri;
// lab_69D8
    OP_JUMP lab_6860
// lab_6860
    OP_INC_P_S -936
// lab_6928
    pri = 1;
// lab_6930
    OP_JZER lab_69A8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_69A0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_69A8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_69A0
}
// fun_6A08
fun_6A08() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_6AA0
    var_8 = 1;
    var_16 = 0;
    var_24 = 23400;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0338(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03A8()
    var_56 = 0;
    pri = fun_1730()
// lab_6AA0
    pri = arg_4;
    OP_JZER lab_6AD8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1758(var_8)
// lab_6AD8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_6B30
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_6B30
    pri = 0;
    OP_JUMP lab_6B38
// lab_6B30
    pri = 1;
// lab_6B38
    OP_JZER lab_6C00
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_6C00
    var_16 = 0;
    pri = fun_0438()
    OP_JZER lab_6BD8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1670(var_32, var_24)
    OP_JUMP lab_6C00
// lab_6C00
    pri = arg_2;
    OP_JZER lab_6CD8
    var_8 = 0;
    pri = fun_0438()
    OP_JZER lab_6CA8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1298(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_09F0(var_40)
    OP_JUMP lab_6CD8
// lab_6CD8
    pri = arg_3;
    OP_JZER lab_6D10
    var_8 = 1;
    var_16 = 8;
    pri = fun_16F8(var_8)
// lab_6D10
    pri = 0;
    return pri;
// lab_6CA8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1298(var_16, var_8)
// lab_6BD8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1670(var_16, var_8)
}
// fun_6D20
fun_6D20() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_67E0(var_24)
    pri = 0;
    return pri;
}
// fun_6D88
fun_6D88() {
    pri = g_mode;
    switch (pri) {
// switch_6E48
        case default:
        {
// switch_6E48_case_default
            pri = CommandNOP()
            OP_JUMP lab_6E90
// lab_6E90
            pri = 0;
            return pri;
        }
        case 0xe6f82827482d658b:
        {
// switch_6E48_case_0xe6f82827482d658b
            var_8 = 0;
            pri = fun_87E8()
            OP_JUMP lab_6E90
        }
        case 0x0:
        {
// switch_6E48_case_0x0
            var_8 = 0;
            pri = fun_6EA0()
            OP_JUMP lab_6E90
        }
        case 0x4a98a2ad2683aa7:
        {
// switch_6E48_case_0x4a98a2ad2683aa7
            var_8 = 0;
            pri = fun_86F8()
            OP_JUMP lab_6E90
        }
    }
}
// fun_6EA0
fun_6EA0() {
    pri = 0;
    return pri;
}
// fun_6EB8
fun_6EB8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_6A08(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6F10
fun_6F10() {
    pri = 0;
    return pri;
}
// fun_6F28
fun_6F28() {
    pri = 0;
    return pri;
}
// fun_6F40
fun_6F40() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    var_24 = 6910712898869243;
    pri = WorkGet(var_24)
    OP_EQ_P_C_PRI 1872
    OP_JZER lab_74A0
    var_32 = 150;
    var_40 = 3;
    OP_PUSH4_C 4602678819172646912, 4600877379321698714, 2298869767325498192, 8802641224559852288
    var_48 = 60;
    var_56 = 56;
    pri = fun_23C0(var_48, var_40, var_32, var_24, var_16, var_8, var_0)
    var_64 = 30;
    var_72 = 8;
    pri = fun_00B8(var_64)
    var_80 = 1;
    var_88 = 0;
    var_96 = 23400;
    var_104 = 8;
    var_112 = 32;
    pri = fun_0338(var_104, var_96, var_88, var_80)
    var_120 = 0;
    pri = fun_03A8()
    var_128 = -1292278190967397311;
    var_136 = 8;
    pri = fun_0460(var_128)
    var_144 = 0;
    pri = fun_0490()
    var_152 = 10;
    var_160 = 8;
    pri = fun_00B8(var_152)
    var_168 = 1;
    var_176 = 1;
    var_184 = 180;
    pri = float(var_184)
    var_192 = pri;
    var_200 = 12000;
    pri = float(var_200)
    var_208 = pri;
    var_216 = 19800;
    pri = float(var_216)
    var_224 = pri;
    var_232 = 8802641224559852288;
    var_240 = 48;
    pri = fun_0638(var_232, var_224, var_216, var_208, var_200, var_192)
    var_248 = 1;
    var_256 = 1;
    var_264 = 180;
    pri = float(var_264)
    var_272 = pri;
    var_280 = 12000;
    pri = float(var_280)
    var_288 = pri;
    var_296 = 19710;
    pri = float(var_296)
    var_304 = pri;
    var_312 = -1292278190967397311;
    var_320 = 48;
    pri = fun_0638(var_312, var_304, var_296, var_288, var_280, var_272)
    var_328 = 5;
    var_336 = 8;
    pri = fun_00B8(var_328)
    var_344 = 1;
    var_352 = 0;
    var_360 = 4641240890982006784;
    var_368 = 0;
    var_376 = 0;
    var_384 = 11800;
    pri = float(var_384)
    var_392 = pri;
    var_400 = 19800;
    pri = float(var_400)
    var_408 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_416 = 72;
    pri = fun_0A28(var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_424 = 1;
    var_432 = 0;
    var_440 = 4641240890982006784;
    var_448 = 0;
    var_456 = 0;
    var_464 = 11800;
    pri = float(var_464)
    var_472 = pri;
    var_480 = 19710;
    pri = float(var_480)
    var_488 = pri;
    OP_PUSH2_C 4607182418800017408, -1292278190967397311
    var_496 = 72;
    pri = fun_0A28(var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424)
    var_504 = 0;
    var_512 = 4631952216750555136;
    var_520 = 0;
    OP_PUSH5_C 4667668790950137692, 4631710148270583972, 4671145375248909599, 4667814602684655206, 4641294019383860920
    var_528 = 4671227129435992883;
    var_536 = 1;
    pri = EvCameraMove(var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    var_544 = 0;
    pri = fun_2330()
    var_552 = 23448;
    var_560 = 8;
    var_568 = 16;
    pri = fun_02D8(var_560, var_552)
    var_576 = 0;
    pri = fun_03A8()
// lab_74A0
    var_8 = 0;
    var_16 = 4631952216750555136;
    var_24 = 3;
    OP_PUSH5_C 4667644293831070843, 4631710148270583972, 4671156298896931553, 4667790105565588357, 4641290500946652037
    var_32 = 4671238053084014838;
    var_40 = 60;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 8802641224559852288;
    var_56 = 8;
    pri = fun_0B48(var_48)
    var_64 = -1292278190967397311;
    var_72 = 8;
    pri = fun_0B48(var_64)
    var_80 = 1;
    var_88 = 1;
    var_96 = -1;
    OP_PUSH2_C 8802641224559852288, 2298869767325498192
    var_104 = 40;
    pri = fun_1240(var_96, var_88, var_80, var_72, var_64)
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 0;
    OP_PUSH2_C 8802641224559852288, 2298869767325498192
    var_144 = 48;
    pri = fun_0AF0(var_136, var_128, var_120, var_112, var_104, var_96)
    var_152 = 2298869767325498192;
    var_160 = 8;
    pri = fun_0B48(var_152)
    var_168 = 1;
    var_176 = 1;
    var_184 = -1;
    OP_PUSH2_C 2298869767325498192, 8802641224559852288
    var_192 = 40;
    pri = fun_1240(var_184, var_176, var_168, var_160, var_152)
    var_200 = 0;
    var_208 = 0;
    var_216 = 0;
    var_224 = 0;
    OP_PUSH2_C 2298869767325498192, 8802641224559852288
    var_232 = 48;
    pri = fun_0AF0(var_224, var_216, var_208, var_200, var_192, var_184)
    var_240 = 0;
    pri = fun_2330()
    var_248 = 1;
    var_256 = 1;
    var_264 = -1;
    OP_PUSH2_C 2298869767325498192, -1292278190967397311
    var_272 = 40;
    pri = fun_1240(var_264, var_256, var_248, var_240, var_232)
    var_280 = 0;
    var_288 = 0;
    var_296 = 0;
    var_304 = 0;
    OP_PUSH2_C 2298869767325498192, -1292278190967397311
    var_312 = 48;
    pri = fun_0AF0(var_304, var_296, var_288, var_280, var_272, var_264)
    var_320 = -1292278190967397311;
    var_328 = 8;
    pri = fun_0B48(var_320)
    var_336 = 1;
    var_344 = 1;
    var_352 = -1;
    var_360 = -1;
    var_368 = 0;
    var_376 = 0;
    var_384 = 2298869767325498192;
    var_392 = 56;
    pri = fun_2520(var_384, var_376, var_368, var_360, var_352, var_344, var_336)
    var_400 = 0;
    var_408 = 3;
    var_416 = 0;
    var_424 = 100;
    var_432 = -1;
    OP_PUSH2_C -8304313811821188905, 2298869767325498192
    var_440 = 56;
    pri = fun_1FA0(var_432, var_424, var_416, var_408, var_400, var_392, var_384)
    var_448 = 1;
    var_456 = 8;
    pri = fun_20E8(var_448)
    var_464 = 1;
    var_472 = 3;
    var_480 = 0;
    var_488 = 0;
    var_496 = 2298869767325498192;
    var_504 = 40;
    pri = fun_4858(var_496, var_488, var_480, var_472, var_464)
    var_512 = 2298869767325498192;
    var_520 = 8;
    pri = fun_0CE8(var_512)
    var_528 = 1;
    var_536 = 1;
    var_544 = -1;
    var_552 = -1;
    var_560 = 0;
    var_568 = 1;
    var_576 = 2298869767325498192;
    var_584 = 56;
    pri = fun_2520(var_576, var_568, var_560, var_552, var_544, var_536, var_528)
    var_592 = 0;
    var_600 = 3;
    var_608 = 0;
    var_616 = 100;
    var_624 = -1;
    OP_PUSH2_C -8304312712309560694, 2298869767325498192
    var_632 = 56;
    pri = fun_1FA0(var_624, var_616, var_608, var_600, var_592, var_584, var_576)
    var_640 = 1;
    var_648 = 8;
    pri = fun_20E8(var_640)
    pri = MsgWinClose()
    var_656 = 1;
    var_664 = 1;
    var_672 = -1;
    OP_PUSH2_C -1292278190967397311, 8802641224559852288
    var_680 = 40;
    pri = fun_1240(var_672, var_664, var_656, var_648, var_640)
    var_688 = 1;
    var_696 = 1;
    var_704 = -1;
    OP_PUSH2_C -1292278190967397311, 2298869767325498192
    var_712 = 40;
    pri = fun_1240(var_704, var_696, var_688, var_680, var_672)
    var_720 = 1;
    var_728 = 3;
    var_736 = 0;
    var_744 = 1;
    var_752 = 2298869767325498192;
    var_760 = 40;
    pri = fun_4858(var_752, var_744, var_736, var_728, var_720)
    var_768 = 1;
    var_776 = 1;
    var_784 = -1;
    var_792 = -1;
    var_800 = 0;
    var_808 = 22;
    var_816 = -1292278190967397311;
    var_824 = 56;
    pri = fun_2520(var_816, var_808, var_800, var_792, var_784, var_776, var_768)
    var_832 = 0;
    var_840 = 3;
    var_848 = 0;
    var_856 = 100;
    var_864 = -1;
    OP_PUSH2_C 7673811089224577976, -1292278190967397311
    var_872 = 56;
    pri = fun_1FA0(var_864, var_856, var_848, var_840, var_832, var_824, var_816)
    var_880 = 2298869767325498192;
    var_888 = 8;
    pri = fun_0CE8(var_880)
    var_896 = 1;
    var_904 = 8;
    pri = fun_20E8(var_896)
    pri = MsgWinClose()
    var_912 = 1;
    var_920 = 3;
    var_928 = 0;
    var_936 = 22;
    var_944 = -1292278190967397311;
    var_952 = 40;
    pri = fun_4858(var_944, var_936, var_928, var_920, var_912)
    var_960 = -1292278190967397311;
    var_968 = 8;
    pri = fun_0CE8(var_960)
    var_976 = -1;
    var_984 = -1292278190967397311;
    var_992 = 16;
    pri = fun_1298(var_984, var_976)
    var_1000 = 1;
    var_1008 = 0;
    var_1016 = 50;
    pri = float(var_1016)
    var_1024 = pri;
    var_1032 = 0;
    var_1040 = 0;
    OP_PUSH4_C 4665953514327900160, 4671147057501700096, 4611686018427387904, -1292278190967397311
    var_1048 = 72;
    pri = fun_0A28(var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976)
    var_1056 = 20;
    var_1064 = 8;
    pri = fun_00B8(var_1056)
    var_1072 = -1;
    var_1080 = 8802641224559852288;
    var_1088 = 16;
    pri = fun_1298(var_1080, var_1072)
    var_1096 = -1;
    var_1104 = 2298869767325498192;
    var_1112 = 16;
    pri = fun_1298(var_1104, var_1096)
    var_1120 = 0;
    var_1128 = 0;
    var_1136 = 0;
    var_1144 = -170;
    pri = float(var_1144)
    var_1152 = pri;
    var_1160 = 2298869767325498192;
    var_1168 = 40;
    pri = fun_0AA0(var_1160, var_1152, var_1144, var_1136, var_1128)
    var_1176 = 2298869767325498192;
    var_1184 = 8;
    pri = fun_0B48(var_1176)
    var_1192 = 30;
    var_1200 = 8;
    pri = fun_00B8(var_1192)
    var_1208 = 0;
    var_1216 = 3;
    var_1224 = 0;
    var_1232 = 100;
    var_1240 = -1;
    OP_PUSH2_C -8304316010844445327, 2298869767325498192
    var_1248 = 56;
    pri = fun_1FA0(var_1240, var_1232, var_1224, var_1216, var_1208, var_1200, var_1192)
    var_1256 = 1;
    var_1264 = 8;
    pri = fun_20E8(var_1256)
    var_1272 = 1;
    var_1280 = 1;
    var_1288 = -1;
    OP_PUSH2_C 2298869767325498192, 8802641224559852288
    var_1296 = 40;
    pri = fun_1240(var_1288, var_1280, var_1272, var_1264, var_1256)
    var_1304 = 1;
    var_1312 = 1;
    var_1320 = -1;
    OP_PUSH2_C 8802641224559852288, 2298869767325498192
    var_1328 = 40;
    pri = fun_1240(var_1320, var_1312, var_1304, var_1296, var_1288)
    var_1336 = 0;
    var_1344 = 0;
    var_1352 = 0;
    var_1360 = 0;
    OP_PUSH2_C 8802641224559852288, 2298869767325498192
    var_1368 = 48;
    pri = fun_0AF0(var_1360, var_1352, var_1344, var_1336, var_1328, var_1320)
    var_1376 = 2298869767325498192;
    var_1384 = 8;
    pri = fun_0B48(var_1376)
    var_1392 = 1;
    var_1400 = 1;
    var_1408 = -1;
    var_1416 = -1;
    var_1424 = 0;
    var_1432 = 0;
    var_1440 = 2298869767325498192;
    var_1448 = 56;
    pri = fun_2520(var_1440, var_1432, var_1424, var_1416, var_1408, var_1400, var_1392)
    var_1456 = 0;
    var_1464 = 3;
    var_1472 = 0;
    var_1480 = 100;
    var_1488 = -1;
    OP_PUSH2_C -8304311612797932483, 2298869767325498192
    var_1496 = 56;
    pri = fun_1FA0(var_1488, var_1480, var_1472, var_1464, var_1456, var_1448, var_1440)
    var_1504 = 1;
    var_1512 = 8;
    pri = fun_20E8(var_1504)
    var_1520 = 1;
    var_1528 = 3;
    var_1536 = 0;
    var_1544 = 0;
    var_1552 = 2298869767325498192;
    var_1560 = 40;
    pri = fun_4858(var_1552, var_1544, var_1536, var_1528, var_1520)
    var_1568 = 2298869767325498192;
    var_1576 = 8;
    pri = fun_0CE8(var_1568)
    var_1584 = 1;
    var_1592 = 1;
    var_1600 = -1;
    var_1608 = -1;
    var_1616 = 0;
    var_1624 = 1;
    var_1632 = 2298869767325498192;
    var_1640 = 56;
    pri = fun_2520(var_1632, var_1624, var_1616, var_1608, var_1600, var_1592, var_1584)
    var_1648 = 0;
    var_1656 = 3;
    var_1664 = 0;
    var_1672 = 100;
    var_1680 = -1;
    OP_PUSH2_C -8304319309379329960, 2298869767325498192
    var_1688 = 56;
    pri = fun_1FA0(var_1680, var_1672, var_1664, var_1656, var_1648, var_1640, var_1632)
    var_1696 = 1;
    var_1704 = 8;
    pri = fun_20E8(var_1696)
    var_1712 = 1;
    var_1720 = 3;
    var_1728 = 0;
    var_1736 = 1;
    var_1744 = 2298869767325498192;
    var_1752 = 40;
    pri = fun_4858(var_1744, var_1736, var_1728, var_1720, var_1712)
    var_1760 = 0;
    var_1768 = -7742986013774589872;
    var_1776 = 0;
    var_1784 = 24;
    pri = fun_21D8(var_1776, var_1768, var_1760)
    var_1792 = 0;
    var_1800 = -7742982715239705239;
    var_1808 = 1;
    var_1816 = 24;
    pri = fun_21D8(var_1808, var_1800, var_1792)
    var_1824 = 0;
    var_1832 = 0;
    var_1840 = 0;
    var_1848 = 1;
    var_1856 = 32;
    pri = fun_22C0(var_1848, var_1840, var_1832, var_1824)
    var_1864 = 2298869767325498192;
    var_1872 = 8;
    pri = fun_0CE8(var_1864)
    var_1880 = 2;
    var_1888 = 8;
    var_1896 = 2298869767325498192;
    var_1904 = 24;
    pri = fun_13C8(var_1896, var_1888, var_1880)
    var_1912 = 0;
    var_1920 = 1;
    var_1928 = 2298869767325498192;
    var_1936 = 24;
    pri = fun_6588(var_1928, var_1920, var_1912)
    var_1944 = 0;
    var_1952 = 3;
    var_1960 = 0;
    var_1968 = 100;
    var_1976 = -1;
    OP_PUSH2_C -8304318209867701749, 2298869767325498192
    var_1984 = 56;
    pri = fun_1FA0(var_1976, var_1968, var_1960, var_1952, var_1944, var_1936, var_1928)
    var_1992 = 1;
    var_2000 = 8;
    pri = fun_20E8(var_1992)
    var_2008 = 2;
    var_2016 = 2;
    var_2024 = 2298869767325498192;
    var_2032 = 24;
    pri = fun_13C8(var_2024, var_2016, var_2008)
    var_2040 = 0;
    var_2048 = 0;
    var_2056 = 2298869767325498192;
    var_2064 = 24;
    pri = fun_6588(var_2056, var_2048, var_2040)
    var_2072 = 0;
    var_2080 = 3;
    var_2088 = 0;
    var_2096 = 100;
    var_2104 = -1;
    OP_PUSH2_C -8304317110356073538, 2298869767325498192
    var_2112 = 56;
    pri = fun_1FA0(var_2104, var_2096, var_2088, var_2080, var_2072, var_2064, var_2056)
    var_2120 = 1;
    var_2128 = 8;
    pri = fun_20E8(var_2120)
    var_2136 = 0;
    pri = fun_21A8()
    var_2144 = 3;
    var_2152 = 30;
    pri = EvCameraEnd(var_2152, var_2144)
    var_2160 = 2298869767325498192;
    var_2168 = 8;
    pri = fun_1430(var_2160)
    var_2176 = -1;
    var_2184 = 2298869767325498192;
    var_2192 = 16;
    pri = fun_1298(var_2184, var_2176)
    var_2200 = -1;
    var_2208 = 8802641224559852288;
    var_2216 = 16;
    pri = fun_1298(var_2208, var_2200)
    var_2224 = 30;
    var_2232 = 8;
    pri = fun_00B8(var_2224)
    var_2240 = 8802641224559852288;
    var_2248 = 8;
    pri = fun_0B48(var_2240)
    var_2256 = -1292278190967397311;
    var_2264 = 8;
    pri = fun_0B48(var_2256)
    pri = 0;
    return pri;
}
// fun_85C8
fun_85C8() {
    var_8 = -1292278190967397311;
    var_16 = 8;
    pri = fun_05E0(var_8)
    pri = 0;
    return pri;
}
// fun_8608
fun_8608() {
    var_8 = 1880;
    var_16 = 8;
    pri = fun_6D20(var_8)
    var_24 = 3896444167467819354;
    pri = VanishFlagReset(var_24)
    var_32 = -3181508942575245480;
    pri = VanishFlagSet(var_32)
    var_40 = -7378219479266495278;
    pri = FlagSet(var_40)
    var_48 = -7378220578778123489;
    pri = FlagReset(var_48)
    pri = 0;
    return pri;
}
// fun_86E0
fun_86E0() {
    pri = 0;
    return pri;
}
// fun_86F8
fun_86F8() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_6EB8()
    var_16 = 0;
    pri = fun_6F10()
    var_24 = 0;
    pri = fun_6F28()
    var_32 = 0;
    pri = fun_6F40()
    var_40 = 0;
    pri = fun_85C8()
    var_48 = 0;
    pri = fun_8608()
    var_56 = 0;
    pri = fun_86E0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_87E8
fun_87E8() {
    var_8 = 0;
    pri = fun_6F10()
    var_16 = 0;
    pri = fun_8608()
    pri = 0;
    return pri;
}
