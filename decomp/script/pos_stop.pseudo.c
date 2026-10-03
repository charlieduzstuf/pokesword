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
// fun_0480
fun_0480() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_04D8
fun_04D8() {
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
// fun_0550
fun_0550() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05A0
fun_05A0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05F8
fun_05F8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DC0(var_8)
    OP_JZER lab_0670
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0DF0(var_24)
    OP_JNZ lab_0670
    pri = 0;
    return pri;
// lab_0670
    OP_JUMP lab_0680
// lab_0680
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_06E0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_06E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0680
    pri = 0;
    return pri;
}
// fun_0720
fun_0720() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0758
fun_0758() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0798
fun_0798() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_07D0
fun_07D0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0818
    pri = 0;
    return pri;
// lab_0818
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0858
// lab_0858
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DC0(var_8)
    OP_JNZ lab_08E0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_08D0
    pri = 0;
    return pri;
// lab_08E0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0928
    pri = 0;
    return pri;
// lab_0928
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0988
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_09D0(var_8)
    pri = 0;
    return pri;
// lab_0988
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0858
    pri = 0;
    return pri;
// lab_08D0
    OP_JUMP lab_0928
}
// fun_09D0
fun_09D0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0A08
fun_0A08() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0A58
    pri = 0;
    return pri;
// lab_0A58
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DC0(var_8)
    OP_JZER lab_0B88
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0AB0
    OP_ZERO_P_S 64
// lab_0B88
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0BC0
    OP_CONST_S 64, 1
// lab_0BC0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0BF8
    OP_CONST_S 72, 1
// lab_0BF8
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
// lab_0AB0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0AD8
    OP_ZERO_P_S 72
// lab_0AD8
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
    OP_JUMP lab_0C98
// lab_0C98
    pri = 0;
    return pri;
}
// fun_0CA8
fun_0CA8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0CE8
fun_0CE8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D28
fun_0D28() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D80
fun_0D80() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DC0
fun_0DC0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0DF0
fun_0DF0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0E20
fun_0E20() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_0E50
fun_0E50() {
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
// switch_1468
        case default:
        {
// switch_1468_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_14B0
// lab_14B0
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
            OP_JNZ lab_1558
            var_88 = 0;
            pri = fun_18F0()
// lab_1558
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1468_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1050
                case default:
                {
// switch_1050_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_10C8
// lab_10C8
                    OP_JUMP lab_14B0
                }
                case 0x0:
                {
// switch_1050_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_10C8
                }
                case 0x1:
                {
// switch_1050_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_10C8
                }
                case 0x2:
                {
// switch_1050_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_10C8
                }
                case 0x3:
                {
// switch_1050_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_10C8
                }
                case 0x4:
                {
// switch_1050_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_10C8
                }
                case 0x5:
                {
// switch_1050_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_10C8
                }
            }
        }
        case 0x65:
        {
// switch_1468_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1208
                case default:
                {
// switch_1208_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1280
// lab_1280
                    OP_JUMP lab_14B0
                }
                case 0x0:
                {
// switch_1208_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1280
                }
                case 0x1:
                {
// switch_1208_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1280
                }
                case 0x2:
                {
// switch_1208_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1280
                }
                case 0x3:
                {
// switch_1208_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1280
                }
                case 0x4:
                {
// switch_1208_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1280
                }
                case 0x5:
                {
// switch_1208_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1280
                }
            }
        }
        case 0x66:
        {
// switch_1468_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_13C0
                case default:
                {
// switch_13C0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1438
// lab_1438
                    OP_JUMP lab_14B0
                }
                case 0x0:
                {
// switch_13C0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1438
                }
                case 0x1:
                {
// switch_13C0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1438
                }
                case 0x2:
                {
// switch_13C0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1438
                }
                case 0x3:
                {
// switch_13C0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1438
                }
                case 0x4:
                {
// switch_13C0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1438
                }
                case 0x5:
                {
// switch_13C0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1438
                }
            }
        }
    }
}
// fun_1570
fun_1570() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_0E50(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_15D8
fun_15D8() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0798(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1680
    pri = 1;
    return pri;
// lab_1680
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_16C8
fun_16C8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1718
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_15D8(var_8)
    arg_2 = pri;
// lab_1718
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0E50(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1778
fun_1778() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_17C8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_15D8(var_8)
    arg_2 = pri;
// lab_17C8
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
    pri = fun_16C8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1840
fun_1840() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1570(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1890
fun_1890() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1840(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_18F0
fun_18F0() {
    OP_JUMP lab_1908
// lab_1908
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1948
    pri = 0;
    return pri;
// lab_1948
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1908
    pri = 0;
    return pri;
}
// fun_1988
fun_1988() {
    var_8 = 0;
    pri = fun_18F0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1A38
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1A38
    pri = 0;
    return pri;
}
// fun_1A48
fun_1A48() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1A78
fun_1A78() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_1AF0()
    return pri;
}
// fun_1AF0
fun_1AF0() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_1B30
fun_1B30() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1B68
fun_1B68() {
    OP_JUMP lab_1B80
// lab_1B80
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1BC8
    OP_JUMP lab_1BF8
    OP_JUMP lab_1BE8
// lab_1BC8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_1BF8
    pri = 0;
    return pri;
// lab_1BE8
    OP_JUMP lab_1B80
}
// fun_1C08
fun_1C08() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_1C38
fun_1C38() {
    pri = arg_6;
    OP_JNZ lab_1C70
    var_8 = 0;
    pri = fun_0CA8()
// lab_1C70
    pri = arg_1;
    switch (pri) {
// switch_31D8
        case default:
        {
// switch_31D8_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3528
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3528
            pri = 1;
            OP_JUMP lab_3530
// lab_3528
            pri = 0;
// lab_3530
            OP_JZER lab_3688
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0798(var_24, var_16)
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
            OP_JUMP lab_36E8
// lab_3688
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
// lab_36E8
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3748
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_37A8
// lab_3748
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_37A8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_37A8
            pri = arg_2;
            OP_JZER lab_37E8
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_37E8
            var_8 = 0;
            pri = fun_0CE8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_31D8_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x1:
        {
// switch_31D8_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x2:
        {
// switch_31D8_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x3:
        {
// switch_31D8_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x4:
        {
// switch_31D8_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x5:
        {
// switch_31D8_case_0x5
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31D8_case_default
        }
        case 0x6:
        {
// switch_31D8_case_0x6
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31D8_case_default
        }
        case 0x7:
        {
// switch_31D8_case_0x7
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31D8_case_default
        }
        case 0x8:
        {
// switch_31D8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x9:
        {
// switch_31D8_case_0x9
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31D8_case_default
        }
        case 0xa:
        {
// switch_31D8_case_0xa
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31D8_case_default
        }
        case 0xb:
        {
// switch_31D8_case_0xb
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31D8_case_default
        }
        case 0xc:
        {
// switch_31D8_case_0xc
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31D8_case_default
        }
        case 0xd:
        {
// switch_31D8_case_0xd
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31D8_case_default
        }
        case 0xe:
        {
// switch_31D8_case_0xe
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31D8_case_default
        }
        case 0xf:
        {
// switch_31D8_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x10:
        {
// switch_31D8_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x11:
        {
// switch_31D8_case_0x11
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31D8_case_default
        }
        case 0x12:
        {
// switch_31D8_case_0x12
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31D8_case_default
        }
        case 0x13:
        {
// switch_31D8_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x14:
        {
// switch_31D8_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x15:
        {
// switch_31D8_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x16:
        {
// switch_31D8_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x17:
        {
// switch_31D8_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x18:
        {
// switch_31D8_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x19:
        {
// switch_31D8_case_0x19
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31D8_case_default
        }
        case 0x1a:
        {
// switch_31D8_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0758(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0720(var_48, var_40)
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
            pri = fun_0A08(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_31D8_case_default
        }
        case 0x1b:
        {
// switch_31D8_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0758(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0720(var_48, var_40)
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
            pri = fun_0A08(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_31D8_case_default
        }
        case 0x1c:
        {
// switch_31D8_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0758(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0720(var_48, var_40)
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
            pri = fun_0A08(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_31D8_case_default
        }
        case 0x1d:
        {
// switch_31D8_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x1e:
        {
// switch_31D8_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x1f:
        {
// switch_31D8_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x20:
        {
// switch_31D8_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x21:
        {
// switch_31D8_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x22:
        {
// switch_31D8_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x23:
        {
// switch_31D8_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x24:
        {
// switch_31D8_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x25:
        {
// switch_31D8_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x26:
        {
// switch_31D8_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x27:
        {
// switch_31D8_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x28:
        {
// switch_31D8_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x29:
        {
// switch_31D8_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
    }
}
// fun_3818
fun_3818() {
    pri = arg_5;
    OP_JNZ lab_3850
    var_8 = 0;
    pri = fun_0CA8()
// lab_3850
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_38A0
    OP_CONST_S -8, -1
// lab_38A0
    pri = arg_1;
    switch (pri) {
// switch_5358
        case default:
        {
// switch_5358_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5800
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0798(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5800
            pri = 1;
            OP_JUMP lab_5808
// lab_5800
            pri = 0;
// lab_5808
            OP_JZER lab_5858
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5AB0
// lab_5858
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_58C0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_58C0
            pri = 1;
            OP_JUMP lab_58C8
// lab_58C0
            pri = 0;
// lab_58C8
            OP_JZER lab_5A50
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0798(var_24, var_16)
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
            OP_JUMP lab_5AB0
// lab_5A50
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
// lab_5AB0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_5B20
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_5B20
            var_8 = 0;
            pri = fun_0CE8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5358_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x1:
        {
// switch_5358_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x2:
        {
// switch_5358_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x3:
        {
// switch_5358_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x4:
        {
// switch_5358_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x5:
        {
// switch_5358_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0758(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_09D0(var_40)
            OP_JUMP switch_5358_case_default
        }
        case 0x6:
        {
// switch_5358_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x7:
        {
// switch_5358_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x8:
        {
// switch_5358_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x9:
        {
// switch_5358_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0xa:
        {
// switch_5358_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0xb:
        {
// switch_5358_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0xc:
        {
// switch_5358_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0xd:
        {
// switch_5358_case_0xd
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5358_case_default
        }
        case 0xe:
        {
// switch_5358_case_0xe
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5358_case_default
        }
        case 0xf:
        {
// switch_5358_case_0xf
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5358_case_default
        }
        case 0x10:
        {
// switch_5358_case_0x10
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5358_case_default
        }
        case 0x11:
        {
// switch_5358_case_0x11
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5358_case_default
        }
        case 0x12:
        {
// switch_5358_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x13:
        {
// switch_5358_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x14:
        {
// switch_5358_case_0x14
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5358_case_default
        }
        case 0x15:
        {
// switch_5358_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x16:
        {
// switch_5358_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x17:
        {
// switch_5358_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x18:
        {
// switch_5358_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x19:
        {
// switch_5358_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x1a:
        {
// switch_5358_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x1b:
        {
// switch_5358_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x1c:
        {
// switch_5358_case_0x1c
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5358_case_default
        }
        case 0x1d:
        {
// switch_5358_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x1e:
        {
// switch_5358_case_0x1e
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5358_case_default
        }
        case 0x1f:
        {
// switch_5358_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x20:
        {
// switch_5358_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x21:
        {
// switch_5358_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x22:
        {
// switch_5358_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x23:
        {
// switch_5358_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x24:
        {
// switch_5358_case_0x24
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5358_case_default
        }
        case 0x25:
        {
// switch_5358_case_0x25
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5358_case_default
        }
        case 0x26:
        {
// switch_5358_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x27:
        {
// switch_5358_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x28:
        {
// switch_5358_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x29:
        {
// switch_5358_case_0x29
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5358_case_default
        }
        case 0x2a:
        {
// switch_5358_case_0x2a
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5358_case_default
        }
        case 0x2b:
        {
// switch_5358_case_0x2b
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5358_case_default
        }
        case 0x2c:
        {
// switch_5358_case_0x2c
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5358_case_default
        }
        case 0x2d:
        {
// switch_5358_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x2e:
        {
// switch_5358_case_0x2e
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5358_case_default
        }
        case 0x2f:
        {
// switch_5358_case_0x2f
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5358_case_default
        }
        case 0x30:
        {
// switch_5358_case_0x30
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5358_case_default
        }
        case 0x31:
        {
// switch_5358_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x32:
        {
// switch_5358_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x33:
        {
// switch_5358_case_0x33
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5358_case_default
        }
        case 0x34:
        {
// switch_5358_case_0x34
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5358_case_default
        }
        case 0x35:
        {
// switch_5358_case_0x35
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5358_case_default
        }
        case 0x36:
        {
// switch_5358_case_0x36
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5358_case_default
        }
        case 0x37:
        {
// switch_5358_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x38:
        {
// switch_5358_case_0x38
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
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5358_case_default
        }
        case 0x39:
        {
// switch_5358_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x3a:
        {
// switch_5358_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x3b:
        {
// switch_5358_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x3c:
        {
// switch_5358_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x3d:
        {
// switch_5358_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
        case 0x3e:
        {
// switch_5358_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0758(var_24, var_16, var_8)
            OP_JUMP switch_5358_case_default
        }
    }
}
// fun_5B50
fun_5B50() {
    pri = arg_4;
    OP_JNZ lab_5B88
    var_8 = 0;
    pri = fun_0CA8()
// lab_5B88
    pri = arg_1;
    switch (pri) {
// switch_6F60
        case default:
        {
// switch_6F60_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0DC0(var_264)
            OP_JZER lab_7528
            pri = arg_3;
            switch (pri) {
// switch_74D0
                case default:
                {
// switch_74D0_case_default
                    OP_JUMP lab_77E0
// lab_77E0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7850
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7850
                    var_8 = 0;
                    pri = fun_0CE8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_74D0_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_74D0_case_default
                }
                case 0x2:
                {
// switch_74D0_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_74D0_case_default
                }
                case 0x3:
                {
// switch_74D0_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_74D0_case_default
                }
            }
// lab_7528
            pri = arg_1;
            OP_JZER lab_7578
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7578
            pri = 0;
            OP_JUMP lab_7580
// lab_7578
            pri = 1;
// lab_7580
            OP_JZER lab_75E8
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0798(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_75E8
            pri = 1;
            OP_JUMP lab_75F0
// lab_75E8
            pri = 0;
// lab_75F0
            OP_JZER lab_7640
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_77E0
// lab_7640
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_76A8
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_77E0
// lab_76A8
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0798(var_24, var_16)
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
// switch_6F60_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x1:
        {
// switch_6F60_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x2:
        {
// switch_6F60_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x3:
        {
// switch_6F60_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x4:
        {
// switch_6F60_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x5:
        {
// switch_6F60_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0758(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_09D0(var_40)
            OP_JUMP switch_6F60_case_default
        }
        case 0x6:
        {
// switch_6F60_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x7:
        {
// switch_6F60_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x8:
        {
// switch_6F60_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x9:
        {
// switch_6F60_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0xa:
        {
// switch_6F60_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0xb:
        {
// switch_6F60_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0xc:
        {
// switch_6F60_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0xd:
        {
// switch_6F60_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0xe:
        {
// switch_6F60_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0xf:
        {
// switch_6F60_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x10:
        {
// switch_6F60_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x11:
        {
// switch_6F60_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x12:
        {
// switch_6F60_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x13:
        {
// switch_6F60_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x14:
        {
// switch_6F60_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x15:
        {
// switch_6F60_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x16:
        {
// switch_6F60_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x17:
        {
// switch_6F60_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x18:
        {
// switch_6F60_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x19:
        {
// switch_6F60_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x1a:
        {
// switch_6F60_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x1b:
        {
// switch_6F60_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x1c:
        {
// switch_6F60_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x1d:
        {
// switch_6F60_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x1e:
        {
// switch_6F60_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x1f:
        {
// switch_6F60_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x20:
        {
// switch_6F60_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x21:
        {
// switch_6F60_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x22:
        {
// switch_6F60_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x23:
        {
// switch_6F60_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x24:
        {
// switch_6F60_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x25:
        {
// switch_6F60_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x26:
        {
// switch_6F60_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x27:
        {
// switch_6F60_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x28:
        {
// switch_6F60_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x29:
        {
// switch_6F60_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x2a:
        {
// switch_6F60_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x2b:
        {
// switch_6F60_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x2c:
        {
// switch_6F60_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x2d:
        {
// switch_6F60_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x2e:
        {
// switch_6F60_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x2f:
        {
// switch_6F60_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x30:
        {
// switch_6F60_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x31:
        {
// switch_6F60_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x32:
        {
// switch_6F60_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x33:
        {
// switch_6F60_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x34:
        {
// switch_6F60_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x35:
        {
// switch_6F60_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x36:
        {
// switch_6F60_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x37:
        {
// switch_6F60_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x38:
        {
// switch_6F60_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x39:
        {
// switch_6F60_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x3a:
        {
// switch_6F60_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x3b:
        {
// switch_6F60_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x3c:
        {
// switch_6F60_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x3d:
        {
// switch_6F60_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
        case 0x3e:
        {
// switch_6F60_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0758(var_24, var_16, var_8)
            OP_JUMP switch_6F60_case_default
        }
    }
}
// fun_7880
fun_7880() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_7980
        case default:
        {
// switch_7980_case_default
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
// switch_7980_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_7980_case_default
        }
        case 0x1:
        {
// switch_7980_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_7980_case_default
        }
        case 0x2:
        {
// switch_7980_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_7980_case_default
        }
        case 0x3:
        {
// switch_7980_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_7980_case_default
        }
    }
}
// fun_7A40
fun_7A40() {
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
    pri = fun_16C8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_18F0()
    pri = 0;
    return pri;
}
// fun_7AD8
fun_7AD8() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_7880(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_7A40(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_7B80
fun_7B80() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_7BD0
// lab_7BD0
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30048;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_7C48
    OP_JUMP lab_7C78
// lab_7C48
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_7BD0
// lab_7C78
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_7D00
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_5B50(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0E20(var_56)
// lab_7D00
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_7D68
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0D80(var_24, var_16)
// lab_7D68
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0D80(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_7E28
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_07D0(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0550(var_88, var_80, var_72, var_64, var_56)
// lab_7E28
    pri = IsPlayerRideBicycle()
    OP_JZER lab_7E68
    pri = 0;
    return pri;
// lab_7E68
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_7FB0
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 30168;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0720(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_7F78
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_7FB0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_05F8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_05F8(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_07D0(var_40)
    pri = 0;
    return pri;
// lab_7F78
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0D80(var_16, var_8)
}
// fun_8038
fun_8038() {
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
    pri = fun_7AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1988(var_112)
    var_128 = 0;
    pri = fun_1A48()
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
    pri = fun_7B80(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_81B0
fun_81B0() {
    pri = 30304;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_8238
// lab_8238
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_83B8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_83A8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_82F8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_82F8
    pri = 0;
    OP_JUMP lab_8300
// lab_83B8
    pri = 0;
    return pri;
// lab_83A8
    OP_JUMP lab_8230
// lab_8230
    OP_INC_P_S -936
// lab_82F8
    pri = 1;
// lab_8300
    OP_JZER lab_8378
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8370
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_8378
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_8370
}
// fun_83D8
fun_83D8() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_8420
    pri = arg_0;
    return pri;
// lab_8420
    pri = arg_1;
    return pri;
}
// fun_8430
fun_8430() {
    var_8 = arg_8;
    var_16 = arg_7;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = 8802641224559852288;
    pri = GetFieldObjectPositionZ_(var_48)
    OP_MOVE_ALT 
    pri = arg_3;
    var_56 = pri;
    var_64 = alt;
    pri = floatadd(var_64, var_56)
    var_72 = pri;
    var_80 = 8802641224559852288;
    pri = GetFieldObjectPositionX_(var_80)
    OP_MOVE_ALT 
    pri = arg_2;
    var_88 = pri;
    var_96 = alt;
    pri = floatadd(var_96, var_88)
    var_104 = pri;
    var_112 = arg_1;
    var_120 = arg_0;
    var_128 = 72;
    pri = fun_04D8(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    pri = 0;
    return pri;
}
// fun_8568
fun_8568() {
    pri = g_mode;
    switch (pri) {
// switch_8C18
        case default:
        {
// switch_8C18_case_default
            pri = CommandNOP()
            OP_JUMP lab_8EC0
// lab_8EC0
            pri = 0;
            return pri;
        }
        case 0x8dcacd534bddde47:
        {
// switch_8C18_case_0x8dcacd534bddde47
            var_8 = 0;
            pri = fun_9918()
            OP_JUMP lab_8EC0
        }
        case 0xa27286b43fcbbb0b:
        {
// switch_8C18_case_0xa27286b43fcbbb0b
            var_8 = 0;
            pri = fun_D0C8()
            OP_JUMP lab_8EC0
        }
        case 0xa2c4306e7b51fc68:
        {
// switch_8C18_case_0xa2c4306e7b51fc68
            var_8 = 0;
            pri = fun_DB28()
            OP_JUMP lab_8EC0
        }
        case 0xb9027531b6127906:
        {
// switch_8C18_case_0xb9027531b6127906
            var_8 = 0;
            pri = fun_D810()
            OP_JUMP lab_8EC0
        }
        case 0xc820c1a1c553bb93:
        {
// switch_8C18_case_0xc820c1a1c553bb93
            var_8 = 0;
            pri = fun_D2C0()
            OP_JUMP lab_8EC0
        }
        case 0xcc8cb1076156b51d:
        {
// switch_8C18_case_0xcc8cb1076156b51d
            var_8 = 0;
            pri = fun_CED0()
            OP_JUMP lab_8EC0
        }
        case 0xcde609dae724150e:
        {
// switch_8C18_case_0xcde609dae724150e
            var_8 = 0;
            pri = fun_ED18()
            OP_JUMP lab_8EC0
        }
        case 0xce66673cadd0e4b7:
        {
// switch_8C18_case_0xce66673cadd0e4b7
            var_8 = 0;
            pri = fun_A550()
            OP_JUMP lab_8EC0
        }
        case 0xcf6ea0b8137a8b32:
        {
// switch_8C18_case_0xcf6ea0b8137a8b32
            var_8 = 0;
            pri = fun_B760()
            OP_JUMP lab_8EC0
        }
        case 0xd9fe849948e9c59d:
        {
// switch_8C18_case_0xd9fe849948e9c59d
            var_8 = 0;
            pri = fun_A748()
            OP_JUMP lab_8EC0
        }
        case 0xe1b39ee49d9aff37:
        {
// switch_8C18_case_0xe1b39ee49d9aff37
            var_8 = 0;
            pri = fun_A388()
            OP_JUMP lab_8EC0
        }
        case 0xe8370ce7e7d689b3:
        {
// switch_8C18_case_0xe8370ce7e7d689b3
            var_8 = 0;
            pri = fun_ACC8()
            OP_JUMP lab_8EC0
        }
        case 0xf02a632d8343ea47:
        {
// switch_8C18_case_0xf02a632d8343ea47
            var_8 = 0;
            pri = fun_BDC8()
            OP_JUMP lab_8EC0
        }
        case 0xf69175462f45d2d0:
        {
// switch_8C18_case_0xf69175462f45d2d0
            var_8 = 0;
            pri = fun_DED0()
            OP_JUMP lab_8EC0
        }
        case 0xf69176462f45d483:
        {
// switch_8C18_case_0xf69176462f45d483
            var_8 = 0;
            pri = fun_E180()
            OP_JUMP lab_8EC0
        }
        case 0x0:
        {
// switch_8C18_case_0x0
            var_8 = 0;
            pri = fun_8ED0()
            OP_JUMP lab_8EC0
        }
        case 0x5934c6e21ece868:
        {
// switch_8C18_case_0x5934c6e21ece868
            var_8 = 0;
            pri = fun_DB40()
            OP_JUMP lab_8EC0
        }
        case 0xc6d130c39b1bbac:
        {
// switch_8C18_case_0xc6d130c39b1bbac
            var_8 = 0;
            pri = fun_E738()
            OP_JUMP lab_8EC0
        }
        case 0xe58d0a35797edb3:
        {
// switch_8C18_case_0xe58d0a35797edb3
            var_8 = 0;
            pri = fun_C760()
            OP_JUMP lab_8EC0
        }
        case 0x128dcf7fbbfd7494:
        {
// switch_8C18_case_0x128dcf7fbbfd7494
            var_8 = 0;
            pri = fun_9600()
            OP_JUMP lab_8EC0
        }
        case 0x15d302585bddc81b:
        {
// switch_8C18_case_0x15d302585bddc81b
            var_8 = 0;
            pri = fun_C7E8()
            OP_JUMP lab_8EC0
        }
        case 0x15d303585bddc9ce:
        {
// switch_8C18_case_0x15d303585bddc9ce
            var_8 = 0;
            pri = fun_C890()
            OP_JUMP lab_8EC0
        }
        case 0x17f4f8b24a59dfa4:
        {
// switch_8C18_case_0x17f4f8b24a59dfa4
            var_8 = 0;
            pri = fun_AA08()
            OP_JUMP lab_8EC0
        }
        case 0x19686ad8796362a2:
        {
// switch_8C18_case_0x19686ad8796362a2
            var_8 = 0;
            pri = fun_B280()
            OP_JUMP lab_8EC0
        }
        case 0x1a0f55a0cf7f02d4:
        {
// switch_8C18_case_0x1a0f55a0cf7f02d4
            var_8 = 0;
            pri = fun_B568()
            OP_JUMP lab_8EC0
        }
        case 0x1c052ce1957622fc:
        {
// switch_8C18_case_0x1c052ce1957622fc
            var_8 = 0;
            pri = fun_D580()
            OP_JUMP lab_8EC0
        }
        case 0x30c3d3de7b938129:
        {
// switch_8C18_case_0x30c3d3de7b938129
            var_8 = 0;
            pri = fun_C370()
            OP_JUMP lab_8EC0
        }
        case 0x323db6b7ba156d00:
        {
// switch_8C18_case_0x323db6b7ba156d00
            var_8 = 0;
            pri = fun_BB58()
            OP_JUMP lab_8EC0
        }
        case 0x3657353e59db9b0c:
        {
// switch_8C18_case_0x3657353e59db9b0c
            var_8 = 0;
            pri = fun_EA40()
            OP_JUMP lab_8EC0
        }
        case 0x367305ab2a88826e:
        {
// switch_8C18_case_0x367305ab2a88826e
            var_8 = 0;
            pri = fun_8F00()
            OP_JUMP lab_8EC0
        }
        case 0x54793575b3b4b827:
        {
// switch_8C18_case_0x54793575b3b4b827
            var_8 = 0;
            pri = fun_E430()
            OP_JUMP lab_8EC0
        }
        case 0x5790ca6f167d255c:
        {
// switch_8C18_case_0x5790ca6f167d255c
            var_8 = 0;
            pri = fun_8EE8()
            OP_JUMP lab_8EC0
        }
        case 0x5af858e4e24aec91:
        {
// switch_8C18_case_0x5af858e4e24aec91
            var_8 = 0;
            pri = fun_90F8()
            OP_JUMP lab_8EC0
        }
        case 0x629619eaff0e3c59:
        {
// switch_8C18_case_0x629619eaff0e3c59
            var_8 = 0;
            pri = fun_DAA0()
            OP_JUMP lab_8EC0
        }
        case 0x637651de97ee0c9f:
        {
// switch_8C18_case_0x637651de97ee0c9f
            var_8 = 0;
            pri = fun_C038()
            OP_JUMP lab_8EC0
        }
        case 0x66bf99466eb0c1be:
        {
// switch_8C18_case_0x66bf99466eb0c1be
            var_8 = 0;
            pri = fun_DE48()
            OP_JUMP lab_8EC0
        }
        case 0x6a57a09c2ab8484b:
        {
// switch_8C18_case_0x6a57a09c2ab8484b
            var_8 = 0;
            pri = fun_BA10()
            OP_JUMP lab_8EC0
        }
        case 0x6b052ee4eb05f0e7:
        {
// switch_8C18_case_0x6b052ee4eb05f0e7
            var_8 = 0;
            pri = fun_9688()
            OP_JUMP lab_8EC0
        }
        case 0x79b9519597c1a83b:
        {
// switch_8C18_case_0x79b9519597c1a83b
            var_8 = 0;
            pri = fun_A190()
            OP_JUMP lab_8EC0
        }
        case 0x79b9529597c1a9ee:
        {
// switch_8C18_case_0x79b9529597c1a9ee
            var_8 = 0;
            pri = fun_9C50()
            OP_JUMP lab_8EC0
        }
        case 0x79b9539597c1aba1:
        {
// switch_8C18_case_0x79b9539597c1aba1
            var_8 = 0;
            pri = fun_9EF0()
            OP_JUMP lab_8EC0
        }
    }
}
// fun_8ED0
fun_8ED0() {
    pri = 0;
    return pri;
}
// fun_8EE8
fun_8EE8() {
    pri = 0;
    return pri;
}
// fun_8F00
fun_8F00() {
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    OP_PUSH2_C -965260324886180608, 8802641224559852288
    var_32 = 40;
    pri = fun_0D28(var_24, var_16, var_8, var_0, var_-8)
    var_40 = 0;
    var_48 = 3;
    var_56 = 0;
    var_64 = 100;
    var_72 = -1;
    OP_PUSH2_C -1596969692673002918, -965260324886180608
    var_80 = 56;
    pri = fun_16C8(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    var_88 = 1;
    var_96 = 8;
    pri = fun_1988(var_88)
    var_104 = 0;
    pri = fun_1A48()
    var_112 = -1;
    var_120 = 8802641224559852288;
    var_128 = 16;
    pri = fun_0D80(var_120, var_112)
    var_136 = 1;
    var_144 = 0;
    var_152 = 4641240890982006784;
    var_160 = 0;
    var_168 = 0;
    var_176 = -100;
    pri = float(var_176)
    var_184 = pri;
    var_192 = 0;
    pri = float(var_192)
    var_200 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_208 = 72;
    pri = fun_8430(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_216 = 8802641224559852288;
    var_224 = 8;
    pri = fun_05F8(var_216)
    pri = 0;
    return pri;
}
// fun_90F8
fun_90F8() {
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    alt = 130;
    OP_JSLESS lab_9398
    var_16 = 1;
    var_24 = 1;
    var_32 = -1;
    OP_PUSH2_C 8802641224559852288, -1655053127185566619
    var_40 = 40;
    pri = fun_0D28(var_32, var_24, var_16, var_8, var_0)
    var_48 = 1;
    var_56 = 1;
    var_64 = -1;
    OP_PUSH2_C -1655053127185566619, 8802641224559852288
    var_72 = 40;
    pri = fun_0D28(var_64, var_56, var_48, var_40, var_32)
    var_80 = 1;
    var_88 = 1;
    var_96 = -1;
    var_104 = -1;
    var_112 = 0;
    var_120 = 1;
    var_128 = -1655053127185566619;
    var_136 = 56;
    pri = fun_3818(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_144 = 0;
    var_152 = 3;
    var_160 = 0;
    var_168 = 100;
    var_176 = -1;
    OP_PUSH2_C -1596972991207887551, -1655053127185566619
    var_184 = 56;
    pri = fun_16C8(var_176, var_168, var_160, var_152, var_144, var_136, var_128)
    var_192 = 1;
    var_200 = 8;
    pri = fun_1988(var_192)
    var_208 = 0;
    pri = fun_1A48()
    var_216 = 1;
    var_224 = 3;
    var_232 = 0;
    var_240 = 1;
    var_248 = -1655053127185566619;
    var_256 = 40;
    pri = fun_5B50(var_248, var_240, var_232, var_224, var_216)
    var_264 = -1;
    var_272 = -1655053127185566619;
    var_280 = 16;
    pri = fun_0D80(var_272, var_264)
    var_288 = -1;
    var_296 = 8802641224559852288;
    var_304 = 16;
    pri = fun_0D80(var_296, var_288)
    var_312 = -1655053127185566619;
    var_320 = 8;
    pri = fun_07D0(var_312)
    OP_JUMP lab_9518
// lab_9398
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    OP_PUSH2_C 8802641224559852288, 7095484774853797935
    var_32 = 40;
    pri = fun_0D28(var_24, var_16, var_8, var_0, var_-8)
    var_40 = 1;
    var_48 = 1;
    var_56 = -1;
    OP_PUSH2_C 7095484774853797935, 8802641224559852288
    var_64 = 40;
    pri = fun_0D28(var_56, var_48, var_40, var_32, var_24)
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    OP_PUSH2_C -1596975190231143973, 7095484774853797935
    var_112 = 56;
    pri = fun_16C8(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_120 = 1;
    var_128 = 8;
    pri = fun_1988(var_120)
    var_136 = 0;
    pri = fun_1A48()
    var_144 = -1;
    var_152 = 7095484774853797935;
    var_160 = 16;
    pri = fun_0D80(var_152, var_144)
    var_168 = -1;
    var_176 = 8802641224559852288;
    var_184 = 16;
    pri = fun_0D80(var_176, var_168)
// lab_9518
    var_8 = 1;
    var_16 = 0;
    var_24 = 4641240890982006784;
    var_32 = 0;
    var_40 = 0;
    var_48 = 100;
    pri = float(var_48)
    var_56 = pri;
    var_64 = 0;
    pri = float(var_64)
    var_72 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_80 = 72;
    pri = fun_8430(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_88 = 8802641224559852288;
    var_96 = 8;
    pri = fun_05F8(var_88)
    pri = 0;
    return pri;
}
// fun_9600
fun_9600() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -1596975190231143973;
    var_88 = 80;
    pri = fun_8038(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9688
fun_9688() {
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    OP_PUSH2_C -1655053127185566619, 8802641224559852288
    var_32 = 40;
    pri = fun_0D28(var_24, var_16, var_8, var_0, var_-8)
    var_40 = 6910712898869243;
    pri = WorkGet(var_40)
    OP_EQ_P_C_PRI 81
    OP_JZER lab_9770
    var_48 = 0;
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = -1863056502062625037;
    pri = GlobalCall(var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_9800
// lab_9770
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C -1596968593161374707, -1655053127185566619
    var_48 = 56;
    pri = fun_16C8(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_1988(var_56)
    var_72 = 0;
    pri = fun_1A48()
// lab_9800
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0D80(var_16, var_8)
    var_32 = 1;
    var_40 = 0;
    var_48 = 4641240890982006784;
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    pri = float(var_72)
    var_80 = pri;
    var_88 = 100;
    pri = float(var_88)
    var_96 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_104 = 72;
    pri = fun_8430(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
    var_112 = 8802641224559852288;
    var_120 = 8;
    pri = fun_05F8(var_112)
    pri = 0;
    return pri;
}
// fun_9918
fun_9918() {
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    OP_PUSH2_C 8802641224559852288, -970134989010580305
    var_32 = 40;
    pri = fun_0D28(var_24, var_16, var_8, var_0, var_-8)
    var_40 = 1;
    var_48 = 1;
    var_56 = -1;
    OP_PUSH2_C -970134989010580305, 8802641224559852288
    var_64 = 40;
    pri = fun_0D28(var_56, var_48, var_40, var_32, var_24)
    var_72 = 1;
    var_80 = 1;
    var_88 = -1;
    var_96 = -1;
    var_104 = 0;
    var_112 = 1;
    var_120 = -970134989010580305;
    var_128 = 56;
    pri = fun_3818(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = 0;
    var_144 = 3;
    var_152 = 0;
    var_160 = 100;
    var_168 = -1;
    OP_PUSH2_C -7068970181718815478, -970134989010580305
    var_176 = 56;
    pri = fun_16C8(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    var_184 = 1;
    var_192 = 8;
    pri = fun_1988(var_184)
    var_200 = 0;
    pri = fun_1A48()
    var_208 = 1;
    var_216 = 3;
    var_224 = 0;
    var_232 = 1;
    var_240 = -970134989010580305;
    var_248 = 40;
    pri = fun_5B50(var_240, var_232, var_224, var_216, var_208)
    var_256 = -1;
    var_264 = -970134989010580305;
    var_272 = 16;
    pri = fun_0D80(var_264, var_256)
    var_280 = -1;
    var_288 = 8802641224559852288;
    var_296 = 16;
    pri = fun_0D80(var_288, var_280)
    var_304 = 1;
    var_312 = 0;
    var_320 = 4641240890982006784;
    var_328 = 0;
    var_336 = 0;
    var_344 = 0;
    pri = float(var_344)
    var_352 = pri;
    var_360 = -100;
    pri = float(var_360)
    var_368 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_376 = 72;
    pri = fun_8430(var_368, var_360, var_352, var_344, var_336, var_328, var_320, var_312, var_304)
    var_384 = 8802641224559852288;
    var_392 = 8;
    pri = fun_05F8(var_384)
    var_400 = -970134989010580305;
    var_408 = 8;
    pri = fun_07D0(var_400)
    pri = 0;
    return pri;
}
// fun_9C50
fun_9C50() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 831;
    pri = SoundPlayPokeVoice(var_32, var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 1;
    var_56 = -1;
    OP_PUSH2_C -8303296711058148032, 8802641224559852288
    var_64 = 40;
    pri = fun_0D28(var_56, var_48, var_40, var_32, var_24)
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    OP_PUSH2_C -7068971281230443689, 3761483749247810063
    var_112 = 56;
    pri = fun_16C8(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_120 = 1;
    var_128 = 8;
    pri = fun_1988(var_120)
    var_136 = 0;
    pri = fun_1A48()
    var_144 = 3;
    var_152 = 0;
    var_160 = -7068972380742071900;
    var_168 = 24;
    pri = fun_1840(var_160, var_152, var_144)
    var_176 = 1;
    var_184 = 8;
    pri = fun_1988(var_176)
    var_192 = 0;
    pri = fun_1A48()
    var_200 = -1;
    var_208 = 8802641224559852288;
    var_216 = 16;
    pri = fun_0D80(var_208, var_200)
    var_224 = 1;
    var_232 = 0;
    var_240 = 4641240890982006784;
    var_248 = 0;
    var_256 = 0;
    var_264 = 48237;
    pri = float(var_264)
    var_272 = pri;
    var_280 = 22732;
    pri = float(var_280)
    var_288 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_296 = 72;
    pri = fun_04D8(var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224)
    var_304 = 8802641224559852288;
    var_312 = 8;
    pri = fun_05F8(var_304)
    pri = 0;
    return pri;
}
// fun_9EF0
fun_9EF0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 831;
    pri = SoundPlayPokeVoice(var_32, var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 1;
    var_56 = -1;
    OP_PUSH2_C -8303296711058148032, 8802641224559852288
    var_64 = 40;
    pri = fun_0D28(var_56, var_48, var_40, var_32, var_24)
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    OP_PUSH2_C -7068971281230443689, 3761483749247810063
    var_112 = 56;
    pri = fun_16C8(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_120 = 1;
    var_128 = 8;
    pri = fun_1988(var_120)
    var_136 = 0;
    pri = fun_1A48()
    var_144 = 3;
    var_152 = 0;
    var_160 = -7068972380742071900;
    var_168 = 24;
    pri = fun_1840(var_160, var_152, var_144)
    var_176 = 1;
    var_184 = 8;
    pri = fun_1988(var_176)
    var_192 = 0;
    pri = fun_1A48()
    var_200 = -1;
    var_208 = 8802641224559852288;
    var_216 = 16;
    pri = fun_0D80(var_208, var_200)
    var_224 = 1;
    var_232 = 0;
    var_240 = 4641240890982006784;
    var_248 = 0;
    var_256 = 0;
    var_264 = -100;
    pri = float(var_264)
    var_272 = pri;
    var_280 = 0;
    pri = float(var_280)
    var_288 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_296 = 72;
    pri = fun_8430(var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224)
    var_304 = 8802641224559852288;
    var_312 = 8;
    pri = fun_05F8(var_304)
    pri = 0;
    return pri;
}
// fun_A190
fun_A190() {
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    OP_PUSH2_C -970134989010580305, 8802641224559852288
    var_32 = 40;
    pri = fun_0D28(var_24, var_16, var_8, var_0, var_-8)
    var_40 = 0;
    var_48 = 3;
    var_56 = 0;
    var_64 = 101;
    var_72 = -1;
    OP_PUSH2_C -7068970181718815478, -970134989010580305
    var_80 = 56;
    pri = fun_16C8(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    var_88 = 1;
    var_96 = 8;
    pri = fun_1988(var_88)
    var_104 = 0;
    pri = fun_1A48()
    var_112 = -1;
    var_120 = 8802641224559852288;
    var_128 = 16;
    pri = fun_0D80(var_120, var_112)
    var_136 = 1;
    var_144 = 0;
    var_152 = 4641240890982006784;
    var_160 = 0;
    var_168 = 0;
    var_176 = 45370;
    pri = float(var_176)
    var_184 = pri;
    var_192 = 23400;
    pri = float(var_192)
    var_200 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_208 = 72;
    pri = fun_04D8(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_216 = 8802641224559852288;
    var_224 = 8;
    pri = fun_05F8(var_216)
    pri = 0;
    return pri;
}
// fun_A388
fun_A388() {
    var_8 = 3;
    var_16 = 0;
    var_24 = -3864228122185772668;
    var_32 = 24;
    pri = fun_1840(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1988(var_40)
    var_56 = 0;
    pri = fun_1A48()
    var_64 = 1;
    var_72 = 0;
    var_80 = 31224;
    var_88 = 8;
    var_96 = 32;
    pri = fun_02E0(var_88, var_80, var_72, var_64)
    var_104 = 0;
    pri = fun_0350()
    var_112 = 1;
    var_120 = 1;
    var_128 = 140;
    pri = float(var_128)
    var_136 = pri;
    var_144 = 54490;
    pri = float(var_144)
    var_152 = pri;
    var_160 = 19650;
    pri = float(var_160)
    var_168 = pri;
    var_176 = 8802641224559852288;
    var_184 = 48;
    pri = fun_0480(var_176, var_168, var_160, var_152, var_144, var_136)
    var_192 = 31272;
    var_200 = 8;
    var_208 = 16;
    pri = fun_0280(var_200, var_192)
    var_216 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_A550
fun_A550() {
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    OP_PUSH2_C -4242657469657360075, 8802641224559852288
    var_32 = 40;
    pri = fun_0D28(var_24, var_16, var_8, var_0, var_-8)
    var_40 = 0;
    var_48 = 3;
    var_56 = 0;
    var_64 = 101;
    var_72 = -1;
    OP_PUSH2_C -3864224823650888035, -4242657469657360075
    var_80 = 56;
    pri = fun_16C8(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    var_88 = 1;
    var_96 = 8;
    pri = fun_1988(var_88)
    var_104 = 0;
    pri = fun_1A48()
    var_112 = -1;
    var_120 = 8802641224559852288;
    var_128 = 16;
    pri = fun_0D80(var_120, var_112)
    var_136 = 1;
    var_144 = 0;
    var_152 = 4641240890982006784;
    var_160 = 0;
    var_168 = 0;
    var_176 = 21950;
    pri = float(var_176)
    var_184 = pri;
    var_192 = 14350;
    pri = float(var_192)
    var_200 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_208 = 72;
    pri = fun_04D8(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_216 = 8802641224559852288;
    var_224 = 8;
    pri = fun_05F8(var_216)
    pri = 0;
    return pri;
}
// fun_A748
fun_A748() {
    var_8 = 31320;
    var_16 = 8;
    pri = fun_1B30(var_8)
    var_24 = 0;
    pri = fun_1B68()
    var_32 = 1;
    var_40 = 1;
    var_48 = -1;
    OP_PUSH2_C 8802641224559852288, 702631533266588014
    var_56 = 40;
    pri = fun_0D28(var_48, var_40, var_32, var_24, var_16)
    var_64 = 1;
    var_72 = 1;
    var_80 = -1;
    OP_PUSH2_C 702631533266588014, 8802641224559852288
    var_88 = 40;
    pri = fun_0D28(var_80, var_72, var_64, var_56, var_48)
    var_96 = 0;
    var_104 = 0;
    var_112 = 0;
    var_120 = 101;
    var_128 = -1;
    OP_PUSH2_C -3754770633861915180, 702631533266588014
    var_136 = 56;
    pri = fun_1778(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_144 = 1;
    var_152 = 8;
    pri = fun_1988(var_144)
    var_160 = 0;
    pri = fun_1A48()
    var_168 = -1;
    var_176 = 8802641224559852288;
    var_184 = 16;
    pri = fun_0D80(var_176, var_168)
    var_192 = -1;
    var_200 = 702631533266588014;
    var_208 = 16;
    pri = fun_0D80(var_200, var_192)
    var_216 = 1;
    var_224 = 0;
    var_232 = 4641240890982006784;
    var_240 = 0;
    var_248 = 0;
    var_256 = 0;
    pri = float(var_256)
    var_264 = pri;
    var_272 = 100;
    pri = float(var_272)
    var_280 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_288 = 72;
    pri = fun_8430(var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_296 = 8802641224559852288;
    var_304 = 8;
    pri = fun_05F8(var_296)
    var_312 = 0;
    pri = fun_1C08()
    pri = 0;
    return pri;
}
// fun_AA08
fun_AA08() {
    var_8 = 31536;
    var_16 = 8;
    pri = fun_1B30(var_8)
    var_24 = 0;
    pri = fun_1B68()
    var_32 = 1;
    var_40 = 1;
    var_48 = -1;
    OP_PUSH2_C 8802641224559852288, 702631533266588014
    var_56 = 40;
    pri = fun_0D28(var_48, var_40, var_32, var_24, var_16)
    var_64 = 1;
    var_72 = 1;
    var_80 = -1;
    OP_PUSH2_C 702631533266588014, 8802641224559852288
    var_88 = 40;
    pri = fun_0D28(var_80, var_72, var_64, var_56, var_48)
    var_96 = 0;
    var_104 = 0;
    var_112 = 0;
    var_120 = 101;
    var_128 = -1;
    OP_PUSH2_C -3754770633861915180, 702631533266588014
    var_136 = 56;
    pri = fun_1778(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_144 = 1;
    var_152 = 8;
    pri = fun_1988(var_144)
    var_160 = 0;
    pri = fun_1A48()
    var_168 = -1;
    var_176 = 8802641224559852288;
    var_184 = 16;
    pri = fun_0D80(var_176, var_168)
    var_192 = -1;
    var_200 = 702631533266588014;
    var_208 = 16;
    pri = fun_0D80(var_200, var_192)
    var_216 = 1;
    var_224 = 0;
    var_232 = 4641240890982006784;
    var_240 = 0;
    var_248 = 0;
    var_256 = 27845;
    pri = float(var_256)
    var_264 = pri;
    var_272 = 37797;
    pri = float(var_272)
    var_280 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_288 = 72;
    pri = fun_04D8(var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_296 = 8802641224559852288;
    var_304 = 8;
    pri = fun_05F8(var_296)
    var_312 = 0;
    pri = fun_1C08()
    pri = 0;
    return pri;
}
// fun_ACC8
fun_ACC8() {
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 835
    OP_JZER lab_AD68
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 5734094021819858414;
    pri = GlobalCall(var_48, var_40, var_32, var_24, var_16)
    OP_JUMP lab_B270
// lab_AD68
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    OP_PUSH2_C 8802641224559852288, -7653547417971305915
    var_32 = 40;
    pri = fun_0D28(var_24, var_16, var_8, var_0, var_-8)
    var_40 = 1;
    var_48 = 1;
    var_56 = -1;
    OP_PUSH2_C -7653547417971305915, 8802641224559852288
    var_64 = 40;
    pri = fun_0D28(var_56, var_48, var_40, var_32, var_24)
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    OP_PUSH2_C -3304216764263887553, -7653547417971305915
    var_112 = 56;
    pri = fun_16C8(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_120 = 1;
    var_128 = 8;
    pri = fun_1988(var_120)
    var_144 = 0;
    var_152 = 0;
    var_160 = 1;
    var_168 = 0;
    var_176 = 0;
    var_184 = 0;
    var_192 = 48;
    pri = fun_1A78(var_184, var_176, var_168, var_160, var_152, var_144)
    var_8 = pri;
    var_200 = 0;
    pri = fun_1A48()
    pri = var_8;
    OP_JZER lab_B0A0
    var_208 = 0;
    var_216 = 3;
    var_224 = 0;
    var_232 = 100;
    var_240 = -1;
    OP_PUSH2_C -3304217863775515764, -7653547417971305915
    var_248 = 56;
    pri = fun_16C8(var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_256 = 1;
    var_264 = 8;
    pri = fun_1988(var_256)
    var_272 = 0;
    pri = fun_1A48()
    var_280 = -1;
    var_288 = 8802641224559852288;
    var_296 = 16;
    pri = fun_0D80(var_288, var_280)
    var_304 = -1;
    var_312 = -7653547417971305915;
    var_320 = 16;
    pri = fun_0D80(var_312, var_304)
    var_328 = 0;
    var_336 = 1;
    var_344 = 0;
    var_352 = 0;
    var_360 = 0;
    var_368 = 83455;
    pri = float(var_368)
    var_376 = pri;
    var_384 = 51940;
    pri = float(var_384)
    var_392 = pri;
    OP_PUSH2_C 8604965403407900257, 6287735723334650320
    var_400 = 72;
    pri = fun_03E0(var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    OP_JUMP lab_B268
// lab_B0A0
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C -3304214565240631131, -7653547417971305915
    var_48 = 56;
    pri = fun_16C8(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_1988(var_56)
    var_72 = 0;
    pri = fun_1A48()
    var_80 = -1;
    var_88 = 8802641224559852288;
    var_96 = 16;
    pri = fun_0D80(var_88, var_80)
    var_104 = -1;
    var_112 = -7653547417971305915;
    var_120 = 16;
    pri = fun_0D80(var_112, var_104)
    var_128 = 1;
    var_136 = 0;
    var_144 = 4641240890982006784;
    var_152 = 0;
    var_160 = 0;
    var_168 = 100;
    pri = float(var_168)
    var_176 = pri;
    var_184 = 0;
    pri = float(var_184)
    var_192 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_200 = 72;
    pri = fun_8430(var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128)
    var_208 = 8802641224559852288;
    var_216 = 8;
    pri = fun_05F8(var_208)
// lab_B268
// lab_B270
    pri = 0;
    return pri;
}
// fun_B280
fun_B280() {
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    OP_PUSH2_C 6318683489645882416, 8802641224559852288
    var_32 = 40;
    pri = fun_0D28(var_24, var_16, var_8, var_0, var_-8)
    var_40 = 1;
    var_48 = 1;
    var_56 = -1;
    OP_PUSH2_C 1341683193730638056, 6318683489645882416
    var_64 = 40;
    pri = fun_0D28(var_56, var_48, var_40, var_32, var_24)
    var_72 = 1;
    var_80 = 1;
    var_88 = -1;
    OP_PUSH2_C 6318683489645882416, 1341683193730638056
    var_96 = 40;
    pri = fun_0D28(var_88, var_80, var_72, var_64, var_56)
    var_104 = 0;
    var_112 = 3;
    var_120 = 0;
    var_128 = 100;
    var_136 = -1;
    OP_PUSH2_C -6476699263941268854, 6318683489645882416
    var_144 = 56;
    pri = fun_16C8(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 1;
    var_160 = 8;
    pri = fun_1988(var_152)
    var_168 = 0;
    pri = fun_1A48()
    var_176 = -1;
    var_184 = 8802641224559852288;
    var_192 = 16;
    pri = fun_0D80(var_184, var_176)
    var_200 = -1;
    var_208 = 1341683193730638056;
    var_216 = 16;
    pri = fun_0D80(var_208, var_200)
    var_224 = -1;
    var_232 = 6318683489645882416;
    var_240 = 16;
    pri = fun_0D80(var_232, var_224)
    var_248 = 1;
    var_256 = 0;
    var_264 = 4641240890982006784;
    var_272 = 0;
    var_280 = 0;
    var_288 = 0;
    pri = float(var_288)
    var_296 = pri;
    var_304 = 100;
    pri = float(var_304)
    var_312 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_320 = 72;
    pri = fun_8430(var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248)
    var_328 = 8802641224559852288;
    var_336 = 8;
    pri = fun_05F8(var_328)
    pri = 0;
    return pri;
}
// fun_B568
fun_B568() {
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    OP_PUSH2_C 6318695584273792737, 8802641224559852288
    var_32 = 40;
    pri = fun_0D28(var_24, var_16, var_8, var_0, var_-8)
    var_40 = 0;
    var_48 = 3;
    var_56 = 0;
    var_64 = 100;
    var_72 = -1;
    OP_PUSH2_C -6476700363452897065, 6318695584273792737
    var_80 = 56;
    pri = fun_16C8(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    var_88 = 1;
    var_96 = 8;
    pri = fun_1988(var_88)
    var_104 = 0;
    pri = fun_1A48()
    var_112 = -1;
    var_120 = 8802641224559852288;
    var_128 = 16;
    pri = fun_0D80(var_120, var_112)
    var_136 = 1;
    var_144 = 0;
    var_152 = 4641240890982006784;
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    pri = float(var_176)
    var_184 = pri;
    var_192 = 100;
    pri = float(var_192)
    var_200 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_208 = 72;
    pri = fun_8430(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_216 = 8802641224559852288;
    var_224 = 8;
    pri = fun_05F8(var_216)
    pri = 0;
    return pri;
}
// fun_B760
fun_B760() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 823;
    pri = SoundPlayPokeVoice(var_32, var_24, var_16, var_8)
    var_40 = 1;
    var_48 = -1;
    var_56 = -1;
    var_64 = 2;
    var_72 = 0;
    var_80 = 30;
    var_88 = -1141647952331606142;
    var_96 = 56;
    pri = fun_1C38(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 1;
    var_112 = 1;
    var_120 = -1;
    OP_PUSH2_C 8802641224559852288, -1141647952331606142
    var_128 = 40;
    pri = fun_0D28(var_120, var_112, var_104, var_96, var_88)
    var_136 = 1;
    var_144 = 0;
    var_152 = 4641240890982006784;
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    pri = float(var_176)
    var_184 = pri;
    var_192 = -100;
    pri = float(var_192)
    var_200 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_208 = 72;
    pri = fun_8430(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_216 = 0;
    var_224 = 3;
    var_232 = 0;
    var_240 = 101;
    var_248 = -1;
    OP_PUSH2_C -5906459066727169419, -1141647952331606142
    var_256 = 56;
    pri = fun_16C8(var_248, var_240, var_232, var_224, var_216, var_208, var_200)
    var_264 = 1;
    var_272 = 8;
    pri = fun_1988(var_264)
    var_280 = 0;
    pri = fun_1A48()
    var_288 = -1;
    var_296 = -1141647952331606142;
    var_304 = 16;
    pri = fun_0D80(var_296, var_288)
    var_312 = 8802641224559852288;
    var_320 = 8;
    pri = fun_05F8(var_312)
    var_328 = -1141647952331606142;
    var_336 = 8;
    pri = fun_07D0(var_328)
    pri = 0;
    return pri;
}
// fun_BA10
fun_BA10() {
    var_8 = 1209431212022142778;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 20
    OP_JZER lab_BAD8
    var_16 = 1;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 0;
    var_64 = 0;
    var_72 = 1;
    var_80 = 1;
    var_88 = -6476703661987781698;
    var_96 = 80;
    pri = fun_8038(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    OP_JUMP lab_BB48
// lab_BAD8
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -6476704761499409909;
    var_88 = 80;
    pri = fun_8038(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_BB48
    pri = 0;
    return pri;
}
// fun_BB58
fun_BB58() {
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    OP_PUSH2_C 6302179420569030780, 8802641224559852288
    var_32 = 40;
    pri = fun_0D28(var_24, var_16, var_8, var_0, var_-8)
    var_40 = 1;
    var_48 = 1;
    var_56 = -1;
    OP_PUSH2_C 8802641224559852288, 6302179420569030780
    var_64 = 40;
    pri = fun_0D28(var_56, var_48, var_40, var_32, var_24)
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    OP_PUSH2_C -6476698164429640643, 6302179420569030780
    var_112 = 56;
    pri = fun_16C8(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_120 = 1;
    var_128 = 8;
    pri = fun_1988(var_120)
    var_136 = 0;
    pri = fun_1A48()
    var_144 = -1;
    var_152 = 8802641224559852288;
    var_160 = 16;
    pri = fun_0D80(var_152, var_144)
    var_168 = -1;
    var_176 = 6302179420569030780;
    var_184 = 16;
    pri = fun_0D80(var_176, var_168)
    var_192 = 1;
    var_200 = 0;
    var_208 = 4641240890982006784;
    var_216 = 0;
    var_224 = 0;
    var_232 = 0;
    pri = float(var_232)
    var_240 = pri;
    var_248 = 100;
    pri = float(var_248)
    var_256 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_264 = 72;
    pri = fun_8430(var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_272 = 8802641224559852288;
    var_280 = 8;
    pri = fun_05F8(var_272)
    pri = 0;
    return pri;
}
// fun_BDC8
fun_BDC8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    OP_PUSH2_C -6104390763371469974, 8802641224559852288
    var_32 = 40;
    pri = fun_0D28(var_24, var_16, var_8, var_0, var_-8)
    var_40 = 1;
    var_48 = 1;
    var_56 = -1;
    OP_PUSH2_C 8802641224559852288, -6104390763371469974
    var_64 = 40;
    pri = fun_0D28(var_56, var_48, var_40, var_32, var_24)
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    OP_PUSH2_C -429705426110299962, -6104390763371469974
    var_112 = 56;
    pri = fun_16C8(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_120 = 1;
    var_128 = 8;
    pri = fun_1988(var_120)
    var_136 = 0;
    pri = fun_1A48()
    var_144 = -1;
    var_152 = 8802641224559852288;
    var_160 = 16;
    pri = fun_0D80(var_152, var_144)
    var_168 = -1;
    var_176 = -6104390763371469974;
    var_184 = 16;
    pri = fun_0D80(var_176, var_168)
    var_192 = 1;
    var_200 = 0;
    var_208 = 4641240890982006784;
    var_216 = 0;
    var_224 = 0;
    var_232 = 0;
    pri = float(var_232)
    var_240 = pri;
    var_248 = -100;
    pri = float(var_248)
    var_256 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_264 = 72;
    pri = fun_8430(var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_272 = 8802641224559852288;
    var_280 = 8;
    pri = fun_05F8(var_272)
    pri = 0;
    return pri;
}
// fun_C038
fun_C038() {
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    OP_PUSH2_C -8654315183630985365, 8802641224559852288
    var_32 = 40;
    pri = fun_0D28(var_24, var_16, var_8, var_0, var_-8)
    var_40 = 1;
    var_48 = 1;
    var_56 = -1;
    OP_PUSH2_C 8802641224559852288, -8654315183630985365
    var_64 = 40;
    pri = fun_0D28(var_56, var_48, var_40, var_32, var_24)
    var_72 = 1;
    var_80 = 1;
    var_88 = -1;
    var_96 = -1;
    var_104 = 0;
    var_112 = 10;
    var_120 = -8654315183630985365;
    var_128 = 56;
    pri = fun_3818(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = 0;
    var_144 = 3;
    var_152 = 0;
    var_160 = 100;
    var_168 = -1;
    OP_PUSH2_C -4891924593569330287, -8654315183630985365
    var_176 = 56;
    pri = fun_16C8(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    var_184 = 1;
    var_192 = 8;
    pri = fun_1988(var_184)
    var_200 = 0;
    pri = fun_1A48()
    var_208 = 1;
    var_216 = 3;
    var_224 = 0;
    var_232 = 10;
    var_240 = -8654315183630985365;
    var_248 = 40;
    pri = fun_5B50(var_240, var_232, var_224, var_216, var_208)
    var_256 = -1;
    var_264 = 8802641224559852288;
    var_272 = 16;
    pri = fun_0D80(var_264, var_256)
    var_280 = -1;
    var_288 = -8654315183630985365;
    var_296 = 16;
    pri = fun_0D80(var_288, var_280)
    var_304 = 1;
    var_312 = 0;
    var_320 = 4641240890982006784;
    var_328 = 0;
    var_336 = 0;
    var_344 = 37545;
    pri = float(var_344)
    var_352 = pri;
    var_360 = 26818;
    pri = float(var_360)
    var_368 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_376 = 72;
    pri = fun_04D8(var_368, var_360, var_352, var_344, var_336, var_328, var_320, var_312, var_304)
    var_384 = 8802641224559852288;
    var_392 = 8;
    pri = fun_05F8(var_384)
    var_400 = -8654315183630985365;
    var_408 = 8;
    pri = fun_07D0(var_400)
    pri = 0;
    return pri;
}
// fun_C370
fun_C370() {
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    OP_PUSH2_C 2206624492151242658, 8802641224559852288
    var_32 = 40;
    pri = fun_0D28(var_24, var_16, var_8, var_0, var_-8)
    var_40 = 1;
    var_48 = 1;
    var_56 = -1;
    OP_PUSH2_C -8389920027382669047, 2206624492151242658
    var_64 = 40;
    pri = fun_0D28(var_56, var_48, var_40, var_32, var_24)
    var_72 = 1;
    var_80 = 1;
    var_88 = -1;
    var_96 = -1;
    var_104 = 0;
    var_112 = 2;
    var_120 = 2206624492151242658;
    var_128 = 56;
    pri = fun_3818(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = 0;
    var_144 = 3;
    var_152 = 0;
    var_160 = 100;
    var_168 = -1;
    OP_PUSH2_C -4891926792592586709, 2206624492151242658
    var_176 = 56;
    pri = fun_16C8(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    var_184 = 1;
    var_192 = 8;
    pri = fun_1988(var_184)
    var_200 = 0;
    pri = fun_1A48()
    var_208 = 1;
    var_216 = 3;
    var_224 = 0;
    var_232 = 2;
    var_240 = 2206624492151242658;
    var_248 = 40;
    pri = fun_5B50(var_240, var_232, var_224, var_216, var_208)
    var_256 = 1;
    var_264 = 1;
    var_272 = -1;
    OP_PUSH2_C -8389920027382669047, 8802641224559852288
    var_280 = 40;
    pri = fun_0D28(var_272, var_264, var_256, var_248, var_240)
    var_288 = 0;
    var_296 = 0;
    var_304 = 0;
    var_312 = 831;
    pri = SoundPlayPokeVoice(var_312, var_304, var_296, var_288)
    var_320 = 1;
    var_328 = -1;
    var_336 = -1;
    var_344 = 2;
    var_352 = 0;
    var_360 = 30;
    var_368 = -8389920027382669047;
    var_376 = 56;
    pri = fun_1C38(var_368, var_360, var_352, var_344, var_336, var_328, var_320)
    var_384 = 0;
    var_392 = 3;
    var_400 = 0;
    var_408 = 100;
    var_416 = -1;
    OP_PUSH2_C -4891925693080958498, -8389920027382669047
    var_424 = 56;
    pri = fun_16C8(var_416, var_408, var_400, var_392, var_384, var_376, var_368)
    var_432 = 1;
    var_440 = 8;
    pri = fun_1988(var_432)
    var_448 = 0;
    pri = fun_1A48()
    var_456 = -1;
    var_464 = 8802641224559852288;
    var_472 = 16;
    pri = fun_0D80(var_464, var_456)
    var_480 = -1;
    var_488 = 2206624492151242658;
    var_496 = 16;
    pri = fun_0D80(var_488, var_480)
    var_504 = 2206624492151242658;
    var_512 = 8;
    pri = fun_07D0(var_504)
    var_520 = -8389920027382669047;
    var_528 = 8;
    pri = fun_07D0(var_520)
    pri = 0;
    return pri;
}
// fun_C760
fun_C760() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -1596974090719515762;
    var_88 = 80;
    pri = fun_8038(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_C7E8
fun_C7E8() {
    var_8 = 31752;
    var_16 = 8;
    pri = fun_1B30(var_8)
    var_24 = 0;
    pri = fun_1B68()
    var_32 = 30;
    var_40 = -70;
    OP_PUSH2_C -7065173836540818878, -4242657469657360075
    var_48 = 32;
    pri = fun_CB68(var_40, var_32, var_24, var_16)
    var_56 = 0;
    pri = fun_1C08()
    pri = 0;
    return pri;
}
// fun_C890
fun_C890() {
    var_8 = 31968;
    var_16 = 8;
    pri = fun_1B30(var_8)
    var_24 = 0;
    pri = fun_1B68()
    var_32 = 1;
    var_40 = 1;
    var_48 = -1;
    OP_PUSH2_C -4242657469657360075, 8802641224559852288
    var_56 = 40;
    pri = fun_0D28(var_48, var_40, var_32, var_24, var_16)
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 101;
    var_96 = -1;
    OP_PUSH2_C -7065173836540818878, -4242657469657360075
    var_104 = 56;
    pri = fun_1778(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1988(var_112)
    var_128 = 0;
    pri = fun_1A48()
    var_136 = -1;
    var_144 = 8802641224559852288;
    var_152 = 16;
    pri = fun_0D80(var_144, var_136)
    var_160 = 1;
    var_168 = 0;
    var_176 = 4641240890982006784;
    var_184 = 0;
    var_192 = 0;
    var_200 = 24850;
    pri = float(var_200)
    var_208 = pri;
    var_216 = 6767;
    pri = float(var_216)
    var_224 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_232 = 72;
    pri = fun_04D8(var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160)
    var_240 = 8802641224559852288;
    var_248 = 8;
    pri = fun_05F8(var_240)
    var_256 = 0;
    var_264 = 0;
    var_272 = 0;
    var_280 = 180;
    pri = float(var_280)
    var_288 = pri;
    var_296 = 8802641224559852288;
    var_304 = 40;
    pri = fun_0550(var_296, var_288, var_280, var_272, var_264)
    var_312 = 8802641224559852288;
    var_320 = 8;
    pri = fun_05F8(var_312)
    var_328 = 0;
    pri = fun_1C08()
    pri = 0;
    return pri;
}
// fun_CB68
fun_CB68() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = arg_0;
    var_48 = 8802641224559852288;
    var_56 = 48;
    pri = fun_05A0(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 1;
    var_72 = 1;
    var_80 = -1;
    var_88 = arg_0;
    var_96 = 8802641224559852288;
    var_104 = 40;
    pri = fun_0D28(var_96, var_88, var_80, var_72, var_64)
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 0;
    var_144 = 8802641224559852288;
    var_152 = arg_0;
    var_160 = 48;
    pri = fun_05A0(var_152, var_144, var_136, var_128, var_120, var_112)
    var_168 = 1;
    var_176 = 1;
    var_184 = -1;
    var_192 = 8802641224559852288;
    var_200 = arg_0;
    var_208 = 40;
    pri = fun_0D28(var_200, var_192, var_184, var_176, var_168)
    var_216 = 0;
    var_224 = 3;
    var_232 = 0;
    var_240 = 101;
    var_248 = -1;
    var_256 = arg_1;
    var_264 = arg_0;
    var_272 = 56;
    pri = fun_1778(var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_280 = 8802641224559852288;
    var_288 = 8;
    pri = fun_05F8(var_280)
    var_296 = arg_0;
    var_304 = 8;
    pri = fun_05F8(var_296)
    var_312 = 1;
    var_320 = 8;
    pri = fun_1988(var_312)
    var_328 = 0;
    pri = fun_1A48()
    var_336 = -1;
    var_344 = 8802641224559852288;
    var_352 = 16;
    pri = fun_0D80(var_344, var_336)
    var_360 = -1;
    var_368 = arg_0;
    var_376 = 16;
    pri = fun_0D80(var_368, var_360)
    var_384 = 1;
    var_392 = 0;
    var_400 = 4641240890982006784;
    var_408 = 0;
    var_416 = 0;
    var_424 = arg_3;
    pri = float(var_424)
    var_432 = pri;
    var_440 = arg_2;
    pri = float(var_440)
    var_448 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_456 = 72;
    pri = fun_8430(var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384)
    var_464 = 8802641224559852288;
    var_472 = 8;
    pri = fun_05F8(var_464)
    var_480 = arg_0;
    var_488 = 8;
    pri = fun_07D0(var_480)
    pri = 0;
    return pri;
}
// fun_CED0
fun_CED0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    OP_PUSH2_C -1655053127185566619, 8802641224559852288
    var_32 = 40;
    pri = fun_0D28(var_24, var_16, var_8, var_0, var_-8)
    var_40 = 0;
    var_48 = 3;
    var_56 = 0;
    var_64 = 101;
    var_72 = -1;
    OP_PUSH2_C -1596979588277656817, -1655053127185566619
    var_80 = 56;
    pri = fun_16C8(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    var_88 = 1;
    var_96 = 8;
    pri = fun_1988(var_88)
    var_104 = 0;
    pri = fun_1A48()
    var_112 = -1;
    var_120 = 8802641224559852288;
    var_128 = 16;
    pri = fun_0D80(var_120, var_112)
    var_136 = 1;
    var_144 = 0;
    var_152 = 4641240890982006784;
    var_160 = 0;
    var_168 = 0;
    var_176 = 54400;
    pri = float(var_176)
    var_184 = pri;
    var_192 = 20130;
    pri = float(var_192)
    var_200 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_208 = 72;
    pri = fun_04D8(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_216 = 8802641224559852288;
    var_224 = 8;
    pri = fun_05F8(var_216)
    pri = 0;
    return pri;
}
// fun_D0C8
fun_D0C8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    OP_PUSH2_C -1655053127185566619, 8802641224559852288
    var_32 = 40;
    pri = fun_0D28(var_24, var_16, var_8, var_0, var_-8)
    var_40 = 0;
    var_48 = 3;
    var_56 = 0;
    var_64 = 101;
    var_72 = -1;
    OP_PUSH2_C -1596979588277656817, -1655053127185566619
    var_80 = 56;
    pri = fun_16C8(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    var_88 = 1;
    var_96 = 8;
    pri = fun_1988(var_88)
    var_104 = 0;
    pri = fun_1A48()
    var_112 = -1;
    var_120 = 8802641224559852288;
    var_128 = 16;
    pri = fun_0D80(var_120, var_112)
    var_136 = 1;
    var_144 = 0;
    var_152 = 4641240890982006784;
    var_160 = 0;
    var_168 = 0;
    var_176 = 80;
    pri = float(var_176)
    var_184 = pri;
    var_192 = 50;
    pri = float(var_192)
    var_200 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_208 = 72;
    pri = fun_8430(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_216 = 8802641224559852288;
    var_224 = 8;
    pri = fun_05F8(var_216)
    pri = 0;
    return pri;
}
// fun_D2C0
fun_D2C0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    OP_PUSH2_C -282799482538826992, 8802641224559852288
    var_32 = 40;
    pri = fun_0D28(var_24, var_16, var_8, var_0, var_-8)
    var_40 = 1;
    var_48 = 1;
    var_56 = -1;
    OP_PUSH2_C 8802641224559852288, -282799482538826992
    var_64 = 40;
    pri = fun_0D28(var_56, var_48, var_40, var_32, var_24)
    var_72 = 32184;
    var_80 = 8;
    pri = fun_1B30(var_72)
    var_88 = 0;
    pri = fun_1B68()
    var_96 = 0;
    var_104 = 3;
    var_112 = 0;
    var_120 = 100;
    var_128 = -1;
    OP_PUSH2_C 1068521101071991900, -282799482538826992
    var_136 = 56;
    pri = fun_1778(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_144 = 1;
    var_152 = 8;
    pri = fun_1988(var_144)
    var_160 = 0;
    pri = fun_1A48()
    var_168 = -1;
    var_176 = 8802641224559852288;
    var_184 = 16;
    pri = fun_0D80(var_176, var_168)
    var_192 = -1;
    var_200 = -282799482538826992;
    var_208 = 16;
    pri = fun_0D80(var_200, var_192)
    var_216 = 1;
    var_224 = 0;
    var_232 = 4641240890982006784;
    var_240 = 0;
    var_248 = 0;
    var_256 = -100;
    pri = float(var_256)
    var_264 = pri;
    var_272 = 0;
    pri = float(var_272)
    var_280 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_288 = 72;
    pri = fun_8430(var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_296 = 8802641224559852288;
    var_304 = 8;
    pri = fun_05F8(var_296)
    var_312 = 0;
    pri = fun_1C08()
    pri = 0;
    return pri;
}
// fun_D580
fun_D580() {
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    OP_PUSH2_C -3181508942575245480, 8802641224559852288
    var_32 = 40;
    pri = fun_0D28(var_24, var_16, var_8, var_0, var_-8)
    var_40 = 32400;
    var_48 = 8;
    pri = fun_1B30(var_40)
    var_56 = 0;
    pri = fun_1B68()
    OP_PUSH2_C -4741722969404244414, -4741728466962385469
    var_72 = 16;
    pri = fun_83D8(var_64, var_56)
    var_8 = pri;
    var_80 = 0;
    var_88 = 0;
    var_96 = 0;
    var_104 = 101;
    var_112 = -1;
    var_120 = var_8;
    var_128 = -3181508942575245480;
    var_136 = 56;
    pri = fun_1778(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_144 = 1;
    var_152 = 8;
    pri = fun_1988(var_144)
    var_160 = 0;
    pri = fun_1A48()
    var_168 = -1;
    var_176 = 8802641224559852288;
    var_184 = 16;
    pri = fun_0D80(var_176, var_168)
    var_192 = 1;
    var_200 = 0;
    var_208 = 4641240890982006784;
    var_216 = 0;
    var_224 = 0;
    var_232 = -100;
    pri = float(var_232)
    var_240 = pri;
    var_248 = 0;
    pri = float(var_248)
    var_256 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_264 = 72;
    pri = fun_8430(var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_272 = 8802641224559852288;
    var_280 = 8;
    pri = fun_05F8(var_272)
    var_288 = 0;
    pri = fun_1C08()
    pri = 0;
    return pri;
}
// fun_D810
fun_D810() {
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    OP_PUSH2_C 8802641224559852288, -3681268570345977435
    var_32 = 40;
    pri = fun_0D28(var_24, var_16, var_8, var_0, var_-8)
    var_40 = 1;
    var_48 = 1;
    var_56 = -1;
    OP_PUSH2_C -3681268570345977435, 8802641224559852288
    var_64 = 40;
    pri = fun_0D28(var_56, var_48, var_40, var_32, var_24)
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    OP_PUSH2_C -8024946774175643954, -3681268570345977435
    var_112 = 56;
    pri = fun_16C8(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_120 = 1;
    var_128 = 8;
    pri = fun_1988(var_120)
    var_136 = 0;
    pri = fun_1A48()
    var_144 = -1;
    var_152 = -3681268570345977435;
    var_160 = 16;
    pri = fun_0D80(var_152, var_144)
    var_168 = -1;
    var_176 = 8802641224559852288;
    var_184 = 16;
    pri = fun_0D80(var_176, var_168)
    var_192 = 1;
    var_200 = 0;
    var_208 = 4641240890982006784;
    var_216 = 0;
    var_224 = 0;
    var_232 = 100;
    pri = float(var_232)
    var_240 = pri;
    var_248 = 0;
    pri = float(var_248)
    var_256 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_264 = 72;
    pri = fun_8430(var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_272 = 8802641224559852288;
    var_280 = 8;
    pri = fun_05F8(var_272)
    var_288 = 646;
    var_296 = 8;
    pri = fun_81B0(var_288)
    pri = 0;
    return pri;
}
// fun_DAA0
fun_DAA0() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -8024941276617502899;
    var_88 = 80;
    pri = fun_8038(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_DB28
fun_DB28() {
    pri = 0;
    return pri;
}
// fun_DB40
fun_DB40() {
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    OP_PUSH2_C 8802641224559852288, -5750634935458327434
    var_32 = 40;
    pri = fun_0D28(var_24, var_16, var_8, var_0, var_-8)
    var_40 = 1;
    var_48 = 1;
    var_56 = -1;
    OP_PUSH2_C 8802641224559852288, -5750633835946699223
    var_64 = 40;
    pri = fun_0D28(var_56, var_48, var_40, var_32, var_24)
    var_72 = 1;
    var_80 = 1;
    var_88 = -1;
    OP_PUSH2_C -5750634935458327434, 8802641224559852288
    var_96 = 40;
    pri = fun_0D28(var_88, var_80, var_72, var_64, var_56)
    var_104 = 32616;
    pri = SoundPostEvent(var_104)
    var_112 = 0;
    var_120 = 3;
    var_128 = 0;
    var_136 = 101;
    var_144 = -1;
    OP_PUSH2_C -8024944575152387532, -5750634935458327434
    var_152 = 56;
    pri = fun_16C8(var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_160 = 1;
    var_168 = 8;
    pri = fun_1988(var_160)
    var_176 = 0;
    pri = fun_1A48()
    var_184 = 1;
    var_192 = 0;
    var_200 = 4641240890982006784;
    var_208 = 0;
    var_216 = 0;
    var_224 = 13628;
    pri = float(var_224)
    var_232 = pri;
    var_240 = 10960;
    pri = float(var_240)
    var_248 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_256 = 72;
    pri = fun_04D8(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_264 = -1;
    var_272 = -5750634935458327434;
    var_280 = 16;
    pri = fun_0D80(var_272, var_264)
    var_288 = -1;
    var_296 = -5750633835946699223;
    var_304 = 16;
    pri = fun_0D80(var_296, var_288)
    var_312 = -1;
    var_320 = 8802641224559852288;
    var_328 = 16;
    pri = fun_0D80(var_320, var_312)
    var_336 = 8802641224559852288;
    var_344 = 8;
    pri = fun_05F8(var_336)
    pri = 0;
    return pri;
}
// fun_DE48
fun_DE48() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -3304220062798772186;
    var_88 = 80;
    pri = fun_8038(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_DED0
fun_DED0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 1;
    var_32 = 264;
    pri = SoundPlayPokeVoice(var_32, var_24, var_16, var_8)
    var_40 = 1;
    var_48 = -1;
    var_56 = -1;
    var_64 = 2;
    var_72 = 0;
    var_80 = 30;
    var_88 = 1590455326894227857;
    var_96 = 56;
    pri = fun_1C38(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 1;
    var_112 = 1;
    var_120 = -1;
    OP_PUSH2_C 1590452028359343224, 8802641224559852288
    var_128 = 40;
    pri = fun_0D28(var_120, var_112, var_104, var_96, var_88)
    var_136 = 1;
    var_144 = 0;
    var_152 = 4641240890982006784;
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    pri = float(var_176)
    var_184 = pri;
    var_192 = 100;
    pri = float(var_192)
    var_200 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_208 = 72;
    pri = fun_8430(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_216 = 0;
    var_224 = 0;
    var_232 = 0;
    var_240 = 101;
    var_248 = -1;
    OP_PUSH2_C -3304222261822028608, 1590452028359343224
    var_256 = 56;
    pri = fun_16C8(var_248, var_240, var_232, var_224, var_216, var_208, var_200)
    var_264 = 1;
    var_272 = 8;
    pri = fun_1988(var_264)
    var_280 = 0;
    pri = fun_1A48()
    var_288 = -1;
    var_296 = 8802641224559852288;
    var_304 = 16;
    pri = fun_0D80(var_296, var_288)
    var_312 = 8802641224559852288;
    var_320 = 8;
    pri = fun_05F8(var_312)
    var_328 = 1590455326894227857;
    var_336 = 8;
    pri = fun_07D0(var_328)
    pri = 0;
    return pri;
}
// fun_E180
fun_E180() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 1;
    var_32 = 264;
    pri = SoundPlayPokeVoice(var_32, var_24, var_16, var_8)
    var_40 = 1;
    var_48 = -1;
    var_56 = -1;
    var_64 = 2;
    var_72 = 0;
    var_80 = 30;
    var_88 = 1058121274684191302;
    var_96 = 56;
    pri = fun_1C38(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 1;
    var_112 = 1;
    var_120 = -1;
    OP_PUSH2_C 1058120175172563091, 8802641224559852288
    var_128 = 40;
    pri = fun_0D28(var_120, var_112, var_104, var_96, var_88)
    var_136 = 1;
    var_144 = 0;
    var_152 = 4641240890982006784;
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    pri = float(var_176)
    var_184 = pri;
    var_192 = -100;
    pri = float(var_192)
    var_200 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_208 = 72;
    pri = fun_8430(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_216 = 0;
    var_224 = 0;
    var_232 = 0;
    var_240 = 101;
    var_248 = -1;
    OP_PUSH2_C -3304218963287143975, 1058120175172563091
    var_256 = 56;
    pri = fun_16C8(var_248, var_240, var_232, var_224, var_216, var_208, var_200)
    var_264 = 1;
    var_272 = 8;
    pri = fun_1988(var_264)
    var_280 = 0;
    pri = fun_1A48()
    var_288 = -1;
    var_296 = 8802641224559852288;
    var_304 = 16;
    pri = fun_0D80(var_296, var_288)
    var_312 = 8802641224559852288;
    var_320 = 8;
    pri = fun_05F8(var_312)
    var_328 = 1058121274684191302;
    var_336 = 8;
    pri = fun_07D0(var_328)
    pri = 0;
    return pri;
}
// fun_E430
fun_E430() {
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    OP_PUSH2_C 8802641224559852288, 1551124569145526424
    var_32 = 40;
    pri = fun_0D28(var_24, var_16, var_8, var_0, var_-8)
    var_40 = 1;
    var_48 = 1;
    var_56 = -1;
    OP_PUSH2_C 8802641224559852288, 4416541122757820847
    var_64 = 40;
    pri = fun_0D28(var_56, var_48, var_40, var_32, var_24)
    var_72 = 32784;
    pri = SoundPostEvent(var_72)
    var_80 = 1;
    var_88 = 1;
    var_96 = -1;
    OP_PUSH2_C 1551124569145526424, 8802641224559852288
    var_104 = 40;
    pri = fun_0D28(var_96, var_88, var_80, var_72, var_64)
    var_112 = 0;
    var_120 = 3;
    var_128 = 0;
    var_136 = 101;
    var_144 = -1;
    OP_PUSH2_C 7126843498149208504, 1551124569145526424
    var_152 = 56;
    pri = fun_16C8(var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_160 = 1;
    var_168 = 8;
    pri = fun_1988(var_160)
    var_176 = 0;
    pri = fun_1A48()
    var_184 = 1;
    var_192 = 0;
    var_200 = 4641240890982006784;
    var_208 = 0;
    var_216 = 0;
    var_224 = 100;
    pri = float(var_224)
    var_232 = pri;
    var_240 = 0;
    pri = float(var_240)
    var_248 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_256 = 72;
    pri = fun_8430(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_264 = -1;
    var_272 = 1551124569145526424;
    var_280 = 16;
    pri = fun_0D80(var_272, var_264)
    var_288 = -1;
    var_296 = 4416541122757820847;
    var_304 = 16;
    pri = fun_0D80(var_296, var_288)
    var_312 = -1;
    var_320 = 8802641224559852288;
    var_328 = 16;
    pri = fun_0D80(var_320, var_312)
    var_336 = 8802641224559852288;
    var_344 = 8;
    pri = fun_05F8(var_336)
    pri = 0;
    return pri;
}
// fun_E738
fun_E738() {
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    OP_PUSH2_C 8802641224559852288, -464315911094145909
    var_32 = 40;
    pri = fun_0D28(var_24, var_16, var_8, var_0, var_-8)
    var_40 = 1;
    var_48 = 1;
    var_56 = -1;
    OP_PUSH2_C 8802641224559852288, -464312612559261276
    var_64 = 40;
    pri = fun_0D28(var_56, var_48, var_40, var_32, var_24)
    var_72 = 32976;
    pri = SoundPostEvent(var_72)
    var_80 = 1;
    var_88 = 1;
    var_96 = -1;
    OP_PUSH2_C -464315911094145909, 8802641224559852288
    var_104 = 40;
    pri = fun_0D28(var_96, var_88, var_80, var_72, var_64)
    var_112 = 0;
    var_120 = 3;
    var_128 = 0;
    var_136 = 101;
    var_144 = -1;
    OP_PUSH2_C -3372293140542811420, -464315911094145909
    var_152 = 56;
    pri = fun_16C8(var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_160 = 1;
    var_168 = 8;
    pri = fun_1988(var_160)
    var_176 = 0;
    pri = fun_1A48()
    var_184 = 1;
    var_192 = 0;
    var_200 = 4641240890982006784;
    var_208 = 0;
    var_216 = 0;
    var_224 = 4074;
    pri = float(var_224)
    var_232 = pri;
    var_240 = 5310;
    pri = float(var_240)
    var_248 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_256 = 72;
    pri = fun_04D8(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_264 = -1;
    var_272 = -464315911094145909;
    var_280 = 16;
    pri = fun_0D80(var_272, var_264)
    var_288 = -1;
    var_296 = -464312612559261276;
    var_304 = 16;
    pri = fun_0D80(var_296, var_288)
    var_312 = -1;
    var_320 = 8802641224559852288;
    var_328 = 16;
    pri = fun_0D80(var_320, var_312)
    var_336 = 8802641224559852288;
    var_344 = 8;
    pri = fun_05F8(var_336)
    pri = 0;
    return pri;
}
// fun_EA40
fun_EA40() {
    var_8 = 33168;
    var_16 = 8;
    pri = fun_1B30(var_8)
    var_24 = 0;
    pri = fun_1B68()
    var_32 = 1;
    var_40 = 1;
    var_48 = -1;
    OP_PUSH2_C -5484313460813071206, 8802641224559852288
    var_56 = 40;
    pri = fun_0D28(var_48, var_40, var_32, var_24, var_16)
    var_64 = 1;
    var_72 = 1;
    var_80 = 1;
    var_88 = 1;
    var_96 = 0;
    var_104 = -5484313460813071206;
    var_112 = 48;
    pri = fun_7880(var_104, var_96, var_88, var_80, var_72, var_64)
    var_120 = 0;
    var_128 = 3;
    var_136 = 0;
    var_144 = 100;
    var_152 = -1;
    OP_PUSH2_C 2863595586341627491, -5484313460813071206
    var_160 = 56;
    pri = fun_1778(var_152, var_144, var_136, var_128, var_120, var_112, var_104)
    var_168 = 1;
    var_176 = 8;
    pri = fun_1988(var_168)
    var_184 = 0;
    pri = fun_1A48()
    var_192 = 0;
    var_200 = 0;
    var_208 = 0;
    var_216 = -5484313460813071206;
    var_224 = 32;
    pri = fun_7B80(var_216, var_208, var_200, var_192)
    var_232 = 0;
    pri = fun_1C08()
    var_240 = -1;
    var_248 = 8802641224559852288;
    var_256 = 16;
    pri = fun_0D80(var_248, var_240)
    var_264 = 1;
    var_272 = 0;
    var_280 = 4641240890982006784;
    var_288 = 0;
    var_296 = 0;
    var_304 = -100;
    pri = float(var_304)
    var_312 = pri;
    var_320 = 0;
    pri = float(var_320)
    var_328 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_336 = 72;
    pri = fun_8430(var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264)
    var_344 = 8802641224559852288;
    var_352 = 8;
    pri = fun_05F8(var_344)
    pri = 0;
    return pri;
}
// fun_ED18
fun_ED18() {
    var_8 = 33384;
    var_16 = 8;
    pri = fun_1B30(var_8)
    var_24 = 0;
    pri = fun_1B68()
    var_32 = 3;
    var_40 = 0;
    var_48 = 950955422680934511;
    var_56 = 24;
    pri = fun_1890(var_48, var_40, var_32)
    var_64 = 1;
    var_72 = 8;
    pri = fun_1988(var_64)
    var_80 = 0;
    pri = fun_1A48()
    var_88 = 0;
    pri = fun_1C08()
    var_96 = 1;
    var_104 = 0;
    var_112 = 4641240890982006784;
    var_120 = 0;
    var_128 = 0;
    var_136 = -100;
    pri = float(var_136)
    var_144 = pri;
    var_152 = 0;
    pri = float(var_152)
    var_160 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_168 = 72;
    pri = fun_8430(var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_176 = 8802641224559852288;
    var_184 = 8;
    pri = fun_05F8(var_176)
    pri = 0;
    return pri;
}
