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
    OP_MOVE_ALT 
    pri = 0;
    OP_JSLESS lab_00A0
    pri = 0;
    return pri;
// lab_00A0
    OP_ZERO_P_S -8
    OP_JUMP lab_00C8
// lab_00C8
    OP_LOAD_S_BOTH -8, 24
    OP_JSGEQ lab_0120
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_00C0
// lab_0120
    pri = 0;
    return pri;
// lab_00C0
    OP_INC_P_S -8
}
// fun_0138
fun_0138() {
    OP_ZERO_P_S -8
    OP_JUMP lab_0168
// lab_0168
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_0268
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_01E8
    pri = 0;
    return pri;
// lab_0268
    pri = 0;
    return pri;
// lab_01E8
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
    OP_JUMP lab_0160
// lab_0160
    OP_INC_P_S -8
}
// fun_0280
fun_0280() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_02E0
fun_02E0() {
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
// fun_0350
fun_0350() {
    OP_JUMP lab_0368
// lab_0368
    pri = FadeWait_()
    OP_JZER lab_03A0
    pri = 0;
    return pri;
// lab_03A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0368
    pri = 0;
    return pri;
}
// fun_03E0
fun_03E0() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0410
fun_0410() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0468
fun_0468() {
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
// fun_04E0
fun_04E0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0538
fun_0538() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E18(var_8)
    OP_JZER lab_05B0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0E48(var_24)
    OP_JNZ lab_05B0
    pri = 0;
    return pri;
// lab_05B0
    OP_JUMP lab_05C0
// lab_05C0
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0620
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0620
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05C0
    pri = 0;
    return pri;
}
// fun_0660
fun_0660() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0698
fun_0698() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_06D8
fun_06D8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0710
fun_0710() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0758
    pri = 0;
    return pri;
// lab_0758
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0798
// lab_0798
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E18(var_8)
    OP_JNZ lab_0820
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0810
    pri = 0;
    return pri;
// lab_0820
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0868
    pri = 0;
    return pri;
// lab_0868
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_08C8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0910(var_8)
    pri = 0;
    return pri;
// lab_08C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0798
    pri = 0;
    return pri;
// lab_0810
    OP_JUMP lab_0868
}
// fun_0910
fun_0910() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0948
fun_0948() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0998
    pri = 0;
    return pri;
// lab_0998
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E18(var_8)
    OP_JZER lab_0AC8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_09F0
    OP_ZERO_P_S 64
// lab_0AC8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B00
    OP_CONST_S 64, 1
// lab_0B00
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B38
    OP_CONST_S 72, 1
// lab_0B38
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
// lab_09F0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A18
    OP_ZERO_P_S 72
// lab_0A18
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
    OP_JUMP lab_0BD8
// lab_0BD8
    pri = 0;
    return pri;
}
// fun_0BE8
fun_0BE8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C28
fun_0C28() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C68
fun_0C68() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0CA8
fun_0CA8() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_0CE0
fun_0CE0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D20
fun_0D20() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_0D58
fun_0D58() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0C68(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_0CE0(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_0DC0
fun_0DC0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0CA8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0D20(var_24)
    pri = 0;
    return pri;
}
// fun_0E18
fun_0E18() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0E48
fun_0E48() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0E78
fun_0E78() {
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
// switch_1490
        case default:
        {
// switch_1490_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_14D8
// lab_14D8
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
            OP_JNZ lab_1580
            var_88 = 0;
            pri = fun_1738()
// lab_1580
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1490_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1078
                case default:
                {
// switch_1078_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_10F0
// lab_10F0
                    OP_JUMP lab_14D8
                }
                case 0x0:
                {
// switch_1078_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_10F0
                }
                case 0x1:
                {
// switch_1078_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_10F0
                }
                case 0x2:
                {
// switch_1078_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_10F0
                }
                case 0x3:
                {
// switch_1078_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_10F0
                }
                case 0x4:
                {
// switch_1078_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_10F0
                }
                case 0x5:
                {
// switch_1078_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_10F0
                }
            }
        }
        case 0x65:
        {
// switch_1490_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1230
                case default:
                {
// switch_1230_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_12A8
// lab_12A8
                    OP_JUMP lab_14D8
                }
                case 0x0:
                {
// switch_1230_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_12A8
                }
                case 0x1:
                {
// switch_1230_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_12A8
                }
                case 0x2:
                {
// switch_1230_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_12A8
                }
                case 0x3:
                {
// switch_1230_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_12A8
                }
                case 0x4:
                {
// switch_1230_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_12A8
                }
                case 0x5:
                {
// switch_1230_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_12A8
                }
            }
        }
        case 0x66:
        {
// switch_1490_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_13E8
                case default:
                {
// switch_13E8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1460
// lab_1460
                    OP_JUMP lab_14D8
                }
                case 0x0:
                {
// switch_13E8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1460
                }
                case 0x1:
                {
// switch_13E8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1460
                }
                case 0x2:
                {
// switch_13E8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1460
                }
                case 0x3:
                {
// switch_13E8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1460
                }
                case 0x4:
                {
// switch_13E8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1460
                }
                case 0x5:
                {
// switch_13E8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1460
                }
            }
        }
    }
}
// fun_1598
fun_1598() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_06D8(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1640
    pri = 1;
    return pri;
// lab_1640
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1688
fun_1688() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_16D8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1598(var_8)
    arg_2 = pri;
// lab_16D8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0E78(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1738
fun_1738() {
    OP_JUMP lab_1750
// lab_1750
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1790
    pri = 0;
    return pri;
// lab_1790
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1750
    pri = 0;
    return pri;
}
// fun_17D0
fun_17D0() {
    var_8 = 0;
    pri = fun_1738()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1880
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1880
    pri = 0;
    return pri;
}
// fun_1890
fun_1890() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_18C0
fun_18C0() {
    OP_JUMP lab_18D8
// lab_18D8
    pri = EvCameraMoveWait_()
    OP_JZER lab_1910
    pri = 0;
    return pri;
// lab_1910
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_18D8
    pri = 0;
    return pri;
}
// fun_1950
fun_1950() {
    pri = arg_6;
    OP_JNZ lab_1988
    var_8 = 0;
    pri = fun_0BE8()
// lab_1988
    pri = arg_1;
    switch (pri) {
// switch_2EF0
        case default:
        {
// switch_2EF0_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3240
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3240
            pri = 1;
            OP_JUMP lab_3248
// lab_3240
            pri = 0;
// lab_3248
            OP_JZER lab_33A0
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_06D8(var_24, var_16)
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
            var_64 = 8424;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_3400
// lab_33A0
            var_8 = 64;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_3400
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3460
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_34C0
// lab_3460
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_34C0
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_34C0
            pri = arg_2;
            OP_JZER lab_3500
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3500
            var_8 = 0;
            pri = fun_0C28()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_2EF0_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x1:
        {
// switch_2EF0_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x2:
        {
// switch_2EF0_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x3:
        {
// switch_2EF0_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x4:
        {
// switch_2EF0_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x5:
        {
// switch_2EF0_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5608;
            var_72 = 5600;
            var_80 = 5592;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x6:
        {
// switch_2EF0_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5632;
            var_72 = 5624;
            var_80 = 5616;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x7:
        {
// switch_2EF0_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5656;
            var_72 = 5648;
            var_80 = 5640;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x8:
        {
// switch_2EF0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x9:
        {
// switch_2EF0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5680;
            var_72 = 5672;
            var_80 = 5664;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2EF0_case_default
        }
        case 0xa:
        {
// switch_2EF0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5704;
            var_72 = 5696;
            var_80 = 5688;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2EF0_case_default
        }
        case 0xb:
        {
// switch_2EF0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5728;
            var_72 = 5720;
            var_80 = 5712;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2EF0_case_default
        }
        case 0xc:
        {
// switch_2EF0_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5752;
            var_72 = 5744;
            var_80 = 5736;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2EF0_case_default
        }
        case 0xd:
        {
// switch_2EF0_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5776;
            var_72 = 5768;
            var_80 = 5760;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2EF0_case_default
        }
        case 0xe:
        {
// switch_2EF0_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5800;
            var_72 = 5792;
            var_80 = 5784;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2EF0_case_default
        }
        case 0xf:
        {
// switch_2EF0_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x10:
        {
// switch_2EF0_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x11:
        {
// switch_2EF0_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5824;
            var_72 = 5816;
            var_80 = 5808;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x12:
        {
// switch_2EF0_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5848;
            var_72 = 5840;
            var_80 = 5832;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x13:
        {
// switch_2EF0_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x14:
        {
// switch_2EF0_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x15:
        {
// switch_2EF0_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x16:
        {
// switch_2EF0_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x17:
        {
// switch_2EF0_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x18:
        {
// switch_2EF0_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x19:
        {
// switch_2EF0_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5872;
            var_72 = 5864;
            var_80 = 5856;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x1a:
        {
// switch_2EF0_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0698(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0660(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6096;
            var_88 = 6088;
            var_96 = 6080;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0948(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x1b:
        {
// switch_2EF0_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0698(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0660(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6320;
            var_88 = 6312;
            var_96 = 6304;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0948(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x1c:
        {
// switch_2EF0_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0698(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0660(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6544;
            var_88 = 6536;
            var_96 = 6528;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0948(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x1d:
        {
// switch_2EF0_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x1e:
        {
// switch_2EF0_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x1f:
        {
// switch_2EF0_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x20:
        {
// switch_2EF0_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x21:
        {
// switch_2EF0_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x22:
        {
// switch_2EF0_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x23:
        {
// switch_2EF0_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x24:
        {
// switch_2EF0_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x25:
        {
// switch_2EF0_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x26:
        {
// switch_2EF0_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x27:
        {
// switch_2EF0_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x28:
        {
// switch_2EF0_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2EF0_case_default
        }
        case 0x29:
        {
// switch_2EF0_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2EF0_case_default
        }
    }
}
// fun_3530
fun_3530() {
    pri = arg_5;
    OP_JNZ lab_3568
    var_8 = 0;
    pri = fun_0BE8()
// lab_3568
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_35B8
    OP_CONST_S -8, -1
// lab_35B8
    pri = arg_1;
    switch (pri) {
// switch_5070
        case default:
        {
// switch_5070_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5518
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_06D8(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5518
            pri = 1;
            OP_JUMP lab_5520
// lab_5518
            pri = 0;
// lab_5520
            OP_JZER lab_5570
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_57C8
// lab_5570
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_55D8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_55D8
            pri = 1;
            OP_JUMP lab_55E0
// lab_55D8
            pri = 0;
// lab_55E0
            OP_JZER lab_5768
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_06D8(var_24, var_16)
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
            var_176 = 28560;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 28576;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 8440;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_57C8
// lab_5768
            var_8 = 64;
            alt = 8440;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_57C8
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_5838
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_5838
            var_8 = 0;
            pri = fun_0C28()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5070_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x1:
        {
// switch_5070_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x2:
        {
// switch_5070_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x3:
        {
// switch_5070_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x4:
        {
// switch_5070_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x5:
        {
// switch_5070_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0698(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0910(var_40)
            OP_JUMP switch_5070_case_default
        }
        case 0x6:
        {
// switch_5070_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x7:
        {
// switch_5070_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x8:
        {
// switch_5070_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x9:
        {
// switch_5070_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0xa:
        {
// switch_5070_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0xb:
        {
// switch_5070_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0xc:
        {
// switch_5070_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0xd:
        {
// switch_5070_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19088;
            var_72 = 18912;
            var_80 = 18728;
            var_88 = 18536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5070_case_default
        }
        case 0xe:
        {
// switch_5070_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19744;
            var_72 = 19536;
            var_80 = 19320;
            var_88 = 19096;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5070_case_default
        }
        case 0xf:
        {
// switch_5070_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20136;
            var_72 = 20016;
            var_80 = 19888;
            var_88 = 19752;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5070_case_default
        }
        case 0x10:
        {
// switch_5070_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20480;
            var_72 = 20376;
            var_80 = 20264;
            var_88 = 20144;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5070_case_default
        }
        case 0x11:
        {
// switch_5070_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20824;
            var_72 = 20720;
            var_80 = 20608;
            var_88 = 20488;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5070_case_default
        }
        case 0x12:
        {
// switch_5070_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x13:
        {
// switch_5070_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x14:
        {
// switch_5070_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21384;
            var_72 = 21208;
            var_80 = 21024;
            var_88 = 20832;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5070_case_default
        }
        case 0x15:
        {
// switch_5070_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x16:
        {
// switch_5070_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x17:
        {
// switch_5070_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x18:
        {
// switch_5070_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x19:
        {
// switch_5070_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x1a:
        {
// switch_5070_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x1b:
        {
// switch_5070_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x1c:
        {
// switch_5070_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 21776;
            var_72 = 21656;
            var_80 = 21528;
            var_88 = 21392;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5070_case_default
        }
        case 0x1d:
        {
// switch_5070_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x1e:
        {
// switch_5070_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 22240;
            var_72 = 22096;
            var_80 = 21944;
            var_88 = 21784;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5070_case_default
        }
        case 0x1f:
        {
// switch_5070_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x20:
        {
// switch_5070_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x21:
        {
// switch_5070_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x22:
        {
// switch_5070_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x23:
        {
// switch_5070_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x24:
        {
// switch_5070_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22608;
            var_72 = 22496;
            var_80 = 22376;
            var_88 = 22248;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5070_case_default
        }
        case 0x25:
        {
// switch_5070_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22976;
            var_72 = 22864;
            var_80 = 22744;
            var_88 = 22616;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5070_case_default
        }
        case 0x26:
        {
// switch_5070_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x27:
        {
// switch_5070_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x28:
        {
// switch_5070_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x29:
        {
// switch_5070_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23416;
            var_72 = 23280;
            var_80 = 23136;
            var_88 = 22984;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5070_case_default
        }
        case 0x2a:
        {
// switch_5070_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23808;
            var_72 = 23688;
            var_80 = 23560;
            var_88 = 23424;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5070_case_default
        }
        case 0x2b:
        {
// switch_5070_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24224;
            var_72 = 24096;
            var_80 = 23960;
            var_88 = 23816;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5070_case_default
        }
        case 0x2c:
        {
// switch_5070_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24664;
            var_72 = 24528;
            var_80 = 24384;
            var_88 = 24232;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5070_case_default
        }
        case 0x2d:
        {
// switch_5070_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x2e:
        {
// switch_5070_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24984;
            var_72 = 24888;
            var_80 = 24784;
            var_88 = 24672;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5070_case_default
        }
        case 0x2f:
        {
// switch_5070_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25376;
            var_72 = 25256;
            var_80 = 25128;
            var_88 = 24992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5070_case_default
        }
        case 0x30:
        {
// switch_5070_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25768;
            var_72 = 25648;
            var_80 = 25520;
            var_88 = 25384;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5070_case_default
        }
        case 0x31:
        {
// switch_5070_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x32:
        {
// switch_5070_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x33:
        {
// switch_5070_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26160;
            var_72 = 26040;
            var_80 = 25912;
            var_88 = 25776;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5070_case_default
        }
        case 0x34:
        {
// switch_5070_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26528;
            var_72 = 26416;
            var_80 = 26296;
            var_88 = 26168;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5070_case_default
        }
        case 0x35:
        {
// switch_5070_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27016;
            var_72 = 26864;
            var_80 = 26704;
            var_88 = 26536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5070_case_default
        }
        case 0x36:
        {
// switch_5070_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27384;
            var_72 = 27272;
            var_80 = 27152;
            var_88 = 27024;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5070_case_default
        }
        case 0x37:
        {
// switch_5070_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x38:
        {
// switch_5070_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27752;
            var_72 = 27640;
            var_80 = 27520;
            var_88 = 27392;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0948(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5070_case_default
        }
        case 0x39:
        {
// switch_5070_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x3a:
        {
// switch_5070_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x3b:
        {
// switch_5070_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x3c:
        {
// switch_5070_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x3d:
        {
// switch_5070_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
        case 0x3e:
        {
// switch_5070_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0698(var_24, var_16, var_8)
            OP_JUMP switch_5070_case_default
        }
    }
}
// fun_5868
fun_5868() {
    pri = arg_4;
    OP_JNZ lab_58A0
    var_8 = 0;
    pri = fun_0BE8()
// lab_58A0
    pri = arg_1;
    switch (pri) {
// switch_6C78
        case default:
        {
// switch_6C78_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0E18(var_264)
            OP_JZER lab_7240
            pri = arg_3;
            switch (pri) {
// switch_71E8
                case default:
                {
// switch_71E8_case_default
                    OP_JUMP lab_74F8
// lab_74F8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7568
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7568
                    var_8 = 0;
                    pri = fun_0C28()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_71E8_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_71E8_case_default
                }
                case 0x2:
                {
// switch_71E8_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_71E8_case_default
                }
                case 0x3:
                {
// switch_71E8_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_71E8_case_default
                }
            }
// lab_7240
            pri = arg_1;
            OP_JZER lab_7290
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7290
            pri = 0;
            OP_JUMP lab_7298
// lab_7290
            pri = 1;
// lab_7298
            OP_JZER lab_7300
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_06D8(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7300
            pri = 1;
            OP_JUMP lab_7308
// lab_7300
            pri = 0;
// lab_7308
            OP_JZER lab_7358
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_74F8
// lab_7358
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_73C0
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_74F8
// lab_73C0
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_06D8(var_24, var_16)
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
            var_176 = 29984;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 30000;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_6C78_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x1:
        {
// switch_6C78_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x2:
        {
// switch_6C78_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x3:
        {
// switch_6C78_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x4:
        {
// switch_6C78_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x5:
        {
// switch_6C78_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0698(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0910(var_40)
            OP_JUMP switch_6C78_case_default
        }
        case 0x6:
        {
// switch_6C78_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x7:
        {
// switch_6C78_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x8:
        {
// switch_6C78_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x9:
        {
// switch_6C78_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0xa:
        {
// switch_6C78_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0xb:
        {
// switch_6C78_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0xc:
        {
// switch_6C78_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0xd:
        {
// switch_6C78_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0xe:
        {
// switch_6C78_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0xf:
        {
// switch_6C78_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x10:
        {
// switch_6C78_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x11:
        {
// switch_6C78_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x12:
        {
// switch_6C78_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x13:
        {
// switch_6C78_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x14:
        {
// switch_6C78_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x15:
        {
// switch_6C78_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x16:
        {
// switch_6C78_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x17:
        {
// switch_6C78_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x18:
        {
// switch_6C78_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x19:
        {
// switch_6C78_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x1a:
        {
// switch_6C78_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x1b:
        {
// switch_6C78_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x1c:
        {
// switch_6C78_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x1d:
        {
// switch_6C78_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x1e:
        {
// switch_6C78_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x1f:
        {
// switch_6C78_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x20:
        {
// switch_6C78_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x21:
        {
// switch_6C78_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x22:
        {
// switch_6C78_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x23:
        {
// switch_6C78_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x24:
        {
// switch_6C78_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x25:
        {
// switch_6C78_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x26:
        {
// switch_6C78_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x27:
        {
// switch_6C78_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x28:
        {
// switch_6C78_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x29:
        {
// switch_6C78_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x2a:
        {
// switch_6C78_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x2b:
        {
// switch_6C78_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x2c:
        {
// switch_6C78_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x2d:
        {
// switch_6C78_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x2e:
        {
// switch_6C78_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x2f:
        {
// switch_6C78_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x30:
        {
// switch_6C78_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x31:
        {
// switch_6C78_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x32:
        {
// switch_6C78_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x33:
        {
// switch_6C78_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x34:
        {
// switch_6C78_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x35:
        {
// switch_6C78_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x36:
        {
// switch_6C78_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x37:
        {
// switch_6C78_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x38:
        {
// switch_6C78_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x39:
        {
// switch_6C78_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x3a:
        {
// switch_6C78_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x3b:
        {
// switch_6C78_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x3c:
        {
// switch_6C78_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x3d:
        {
// switch_6C78_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
        case 0x3e:
        {
// switch_6C78_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0698(var_24, var_16, var_8)
            OP_JUMP switch_6C78_case_default
        }
    }
}
// fun_7598
fun_7598() {
    pri = g_mode;
    switch (pri) {
// switch_7630
        case default:
        {
// switch_7630_case_default
            pri = CommandNOP()
            OP_JUMP lab_7668
// lab_7668
            pri = 0;
            return pri;
        }
        case 0xbeedbbb89014fc95:
        {
// switch_7630_case_0xbeedbbb89014fc95
            var_8 = 0;
            pri = fun_7690()
            OP_JUMP lab_7668
        }
        case 0x0:
        {
// switch_7630_case_0x0
            var_8 = 0;
            pri = fun_7678()
            OP_JUMP lab_7668
        }
    }
}
// fun_7678
fun_7678() {
    pri = 0;
    return pri;
}
// fun_7690
fun_7690() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 170;
    pri = float(var_24)
    var_32 = pri;
    OP_PUSH3_C 4654534338405539512, 4653222489092207411, 8802641224559852288
    var_40 = 48;
    pri = fun_0410(var_32, var_24, var_16, var_8, var_0, var_-8)
    pri = EvCameraStart()
    var_48 = 0;
    var_56 = 4630094481904264806;
    var_64 = 0;
    OP_PUSH5_C 4653348625066145874, 4634977369062752911, 4654119514658612183, 4653346909828006543, 4635780276433820058
    var_72 = 4652521528439267656;
    var_80 = 1;
    pri = EvCameraMove(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_88 = 0;
    pri = fun_18C0()
    var_96 = 30048;
    var_104 = 8;
    var_112 = 16;
    pri = fun_0280(var_104, var_96)
    var_120 = 0;
    pri = fun_0350()
    var_128 = 0;
    var_136 = 3;
    var_144 = 0;
    var_152 = 100;
    var_160 = -1;
    OP_PUSH2_C 8181658735493531067, 3160493614543024327
    var_168 = 56;
    pri = fun_1688(var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_176 = 1;
    var_184 = 8;
    pri = fun_17D0(var_176)
    var_192 = 0;
    pri = fun_1890()
    var_200 = 0;
    var_208 = 3160493614543024327;
    var_216 = 16;
    pri = fun_0CE0(var_208, var_200)
    var_224 = 1;
    var_232 = 1;
    var_240 = -1;
    var_248 = -1;
    var_256 = 0;
    var_264 = 30;
    var_272 = 3160493614543024327;
    var_280 = 56;
    pri = fun_3530(var_272, var_264, var_256, var_248, var_240, var_232, var_224)
    var_288 = 90;
    var_296 = 8;
    pri = fun_0060(var_288)
    var_304 = 0;
    var_312 = 4631952216750555136;
    var_320 = 0;
    OP_PUSH5_C 4653230449556392509, 4635149068798546412, 4652471478669971292, 4653694179580523315, 4636434705754672333
    var_328 = 4654075006427919811;
    var_336 = 1;
    pri = EvCameraMove(var_336, var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264)
    var_344 = 0;
    pri = fun_18C0()
    var_352 = 1;
    var_360 = -1;
    var_368 = -1;
    var_376 = 3;
    var_384 = 0;
    var_392 = 30;
    var_400 = 4915895829130115764;
    var_408 = 56;
    pri = fun_1950(var_400, var_392, var_384, var_376, var_368, var_360, var_352)
    var_416 = 0;
    var_424 = 3;
    var_432 = 0;
    var_440 = 100;
    var_448 = -1;
    OP_PUSH2_C 8893703282484600369, 4915895829130115764
    var_456 = 56;
    pri = fun_1688(var_448, var_440, var_432, var_424, var_416, var_408, var_400)
    var_464 = 1;
    var_472 = 8;
    pri = fun_17D0(var_464)
    var_480 = 0;
    pri = fun_1890()
    var_488 = 4915895829130115764;
    var_496 = 8;
    pri = fun_0710(var_488)
    var_504 = 0;
    var_512 = 4631952216750555136;
    var_520 = 0;
    OP_PUSH5_C 4652856923466204447, 4631978956873342648, 4653497674862407188, 4653963691870723768, 4638013780374019113
    var_528 = 4652796890131327877;
    var_536 = 1;
    pri = EvCameraMove(var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    var_544 = 0;
    pri = fun_18C0()
    var_552 = 1;
    var_560 = 3;
    var_568 = 0;
    var_576 = 30;
    var_584 = 3160493614543024327;
    var_592 = 40;
    pri = fun_5868(var_584, var_576, var_568, var_560, var_552)
    var_600 = 3160493614543024327;
    var_608 = 8;
    pri = fun_0D20(var_600)
    var_616 = 0;
    var_624 = 3;
    var_632 = 0;
    var_640 = 100;
    var_648 = -1;
    OP_PUSH2_C 8181659835005159278, 3160493614543024327
    var_656 = 56;
    pri = fun_1688(var_648, var_640, var_632, var_624, var_616, var_608, var_600)
    var_664 = 1;
    var_672 = 8;
    pri = fun_17D0(var_664)
    var_680 = 0;
    pri = fun_1890()
    var_688 = 1;
    var_696 = -1;
    var_704 = -1;
    var_712 = 3;
    var_720 = 0;
    var_728 = 30;
    var_736 = 4915895829130115764;
    var_744 = 56;
    pri = fun_1950(var_736, var_728, var_720, var_712, var_704, var_696, var_688)
    var_752 = 0;
    var_760 = 3;
    var_768 = 0;
    var_776 = 100;
    var_784 = -1;
    OP_PUSH2_C 8893699983949715736, 4915895829130115764
    var_792 = 56;
    pri = fun_1688(var_784, var_776, var_768, var_760, var_752, var_744, var_736)
    var_800 = 1;
    var_808 = 8;
    pri = fun_17D0(var_800)
    var_816 = 0;
    pri = fun_1890()
    var_824 = 4915895829130115764;
    var_832 = 8;
    pri = fun_0710(var_824)
    var_840 = 0;
    var_848 = 0;
    var_856 = 0;
    var_864 = 0;
    OP_PUSH2_C 8802641224559852288, 4915895829130115764
    var_872 = 48;
    pri = fun_04E0(var_864, var_856, var_848, var_840, var_832, var_824)
    var_880 = 0;
    var_888 = 0;
    var_896 = 0;
    var_904 = 0;
    OP_PUSH2_C 8802641224559852288, 3160493614543024327
    var_912 = 48;
    pri = fun_04E0(var_904, var_896, var_888, var_880, var_872, var_864)
    var_920 = 4915895829130115764;
    var_928 = 8;
    pri = fun_0538(var_920)
    var_936 = 3160493614543024327;
    var_944 = 8;
    pri = fun_0538(var_936)
    var_952 = 0;
    var_960 = 4627645649606882099;
    var_968 = 0;
    OP_PUSH5_C 4654089871825127342, 4636312264139803197, 4653148206086634865, 4655229713539410166, 4638866649553452401
    var_976 = 4652453402698810655;
    var_984 = 1;
    pri = EvCameraMove(var_984, var_976, var_968, var_960, var_952, var_944, var_936, var_928, var_920, var_912)
    var_992 = 0;
    pri = fun_18C0()
    var_1000 = 4;
    var_1008 = 4;
    var_1016 = 3160493614543024327;
    var_1024 = 24;
    pri = fun_0D58(var_1016, var_1008, var_1000)
    var_1032 = 1;
    var_1040 = 1;
    var_1048 = -1;
    var_1056 = -1;
    var_1064 = 0;
    var_1072 = 12;
    var_1080 = 3160493614543024327;
    var_1088 = 56;
    pri = fun_3530(var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032)
    var_1096 = 0;
    var_1104 = 3;
    var_1112 = 0;
    var_1120 = 100;
    var_1128 = -1;
    OP_PUSH2_C 8181660934516787489, 3160493614543024327
    var_1136 = 56;
    pri = fun_1688(var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080)
    var_1144 = 1;
    var_1152 = 8;
    pri = fun_17D0(var_1144)
    var_1160 = 0;
    pri = fun_1890()
    var_1168 = 3160493614543024327;
    var_1176 = 8;
    pri = fun_0DC0(var_1168)
    var_1184 = 1;
    var_1192 = 3;
    var_1200 = 0;
    var_1208 = 12;
    var_1216 = 3160493614543024327;
    var_1224 = 40;
    pri = fun_5868(var_1216, var_1208, var_1200, var_1192, var_1184)
    var_1232 = 0;
    var_1240 = 3;
    var_1248 = 0;
    var_1256 = 100;
    var_1264 = -1;
    OP_PUSH2_C 8181662034028415700, 3160493614543024327
    var_1272 = 56;
    pri = fun_1688(var_1264, var_1256, var_1248, var_1240, var_1232, var_1224, var_1216)
    var_1280 = 1;
    var_1288 = 8;
    pri = fun_17D0(var_1280)
    var_1296 = 0;
    pri = fun_1890()
    var_1304 = 1;
    var_1312 = 0;
    var_1320 = 75;
    pri = float(var_1320)
    var_1328 = pri;
    var_1336 = 0;
    var_1344 = 0;
    OP_PUSH4_C 4655877018024914452, 4653665064512619807, 4611686018427387904, 3160493614543024327
    var_1352 = 72;
    pri = fun_0468(var_1344, var_1336, var_1328, var_1320, var_1312, var_1304, var_1296, var_1288, var_1280)
    var_1360 = 30;
    var_1368 = 8;
    pri = fun_0060(var_1360)
    var_1376 = 1;
    var_1384 = -1;
    var_1392 = -1;
    var_1400 = 3;
    var_1408 = 0;
    var_1416 = 30;
    var_1424 = 4915895829130115764;
    var_1432 = 56;
    pri = fun_1950(var_1424, var_1416, var_1408, var_1400, var_1392, var_1384, var_1376)
    var_1440 = 3160493614543024327;
    var_1448 = 8;
    pri = fun_0538(var_1440)
    var_1456 = 1;
    var_1464 = 0;
    var_1472 = 30096;
    var_1480 = 8;
    var_1488 = 32;
    pri = fun_02E0(var_1480, var_1472, var_1464, var_1456)
    var_1496 = 0;
    pri = fun_0350()
    var_1504 = 3;
    var_1512 = 1;
    pri = EvCameraEnd(var_1512, var_1504)
    var_1520 = 20;
    var_1528 = 8312327445073408207;
    pri = WorkSet(var_1528, var_1520)
    var_1536 = 3160493614543024327;
    var_1544 = 8;
    pri = fun_03E0(var_1536)
    var_1552 = 4915895829130115764;
    var_1560 = 8;
    pri = fun_03E0(var_1552)
    var_1568 = 10;
    var_1576 = 8;
    pri = fun_0060(var_1568)
    var_1584 = 30048;
    var_1592 = 8;
    var_1600 = 16;
    pri = fun_0280(var_1592, var_1584)
    var_1608 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
