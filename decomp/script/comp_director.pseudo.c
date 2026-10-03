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
    pri = ABKeyWait_()
    return pri;
}
// fun_0160
fun_0160() {
    OP_ZERO_P_S -8
    OP_JUMP lab_0190
// lab_0190
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_0290
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_0210
    pri = 0;
    return pri;
// lab_0290
    pri = 0;
    return pri;
// lab_0210
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
    OP_JUMP lab_0188
// lab_0188
    OP_INC_P_S -8
}
// fun_02A8
fun_02A8() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0308
fun_0308() {
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
// fun_0378
fun_0378() {
    OP_JUMP lab_0390
// lab_0390
    pri = FadeWait_()
    OP_JZER lab_03C8
    pri = 0;
    return pri;
// lab_03C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0390
    pri = 0;
    return pri;
}
// fun_0408
fun_0408() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0450
// lab_0450
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0490
    OP_JUMP lab_0500
// lab_0490
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_04D0
    OP_JUMP lab_0500
// lab_04D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0450
// lab_0500
    pri = 0;
    return pri;
}
// fun_0518
fun_0518() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0568
fun_0568() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0CD8(var_8)
    OP_JZER lab_05E0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0D08(var_24)
    OP_JNZ lab_05E0
    pri = 0;
    return pri;
// lab_05E0
    OP_JUMP lab_05F0
// lab_05F0
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0650
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0650
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05F0
    pri = 0;
    return pri;
}
// fun_0690
fun_0690() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_06C8
fun_06C8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0708
fun_0708() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0740
fun_0740() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0788
    pri = 0;
    return pri;
// lab_0788
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_07C8
// lab_07C8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0CD8(var_8)
    OP_JNZ lab_0850
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0840
    pri = 0;
    return pri;
// lab_0850
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0898
    pri = 0;
    return pri;
// lab_0898
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_08F8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0940(var_8)
    pri = 0;
    return pri;
// lab_08F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_07C8
    pri = 0;
    return pri;
// lab_0840
    OP_JUMP lab_0898
}
// fun_0940
fun_0940() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0978
fun_0978() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_09C8
    pri = 0;
    return pri;
// lab_09C8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0CD8(var_8)
    OP_JZER lab_0AF8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A20
    OP_ZERO_P_S 64
// lab_0AF8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B30
    OP_CONST_S 64, 1
// lab_0B30
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B68
    OP_CONST_S 72, 1
// lab_0B68
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
// lab_0A20
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A48
    OP_ZERO_P_S 72
// lab_0A48
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
    OP_JUMP lab_0C08
// lab_0C08
    pri = 0;
    return pri;
}
// fun_0C18
fun_0C18() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C58
fun_0C58() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C98
fun_0C98() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0CD8
fun_0CD8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0D08
fun_0D08() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0D38
fun_0D38() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_0D68
fun_0D68() {
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
// switch_1380
        case default:
        {
// switch_1380_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_13C8
// lab_13C8
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
            OP_JNZ lab_1470
            var_88 = 0;
            pri = fun_1740()
// lab_1470
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1380_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0F68
                case default:
                {
// switch_0F68_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0FE0
// lab_0FE0
                    OP_JUMP lab_13C8
                }
                case 0x0:
                {
// switch_0F68_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0FE0
                }
                case 0x1:
                {
// switch_0F68_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0FE0
                }
                case 0x2:
                {
// switch_0F68_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0FE0
                }
                case 0x3:
                {
// switch_0F68_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0FE0
                }
                case 0x4:
                {
// switch_0F68_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0FE0
                }
                case 0x5:
                {
// switch_0F68_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0FE0
                }
            }
        }
        case 0x65:
        {
// switch_1380_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1120
                case default:
                {
// switch_1120_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1198
// lab_1198
                    OP_JUMP lab_13C8
                }
                case 0x0:
                {
// switch_1120_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1198
                }
                case 0x1:
                {
// switch_1120_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1198
                }
                case 0x2:
                {
// switch_1120_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1198
                }
                case 0x3:
                {
// switch_1120_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1198
                }
                case 0x4:
                {
// switch_1120_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1198
                }
                case 0x5:
                {
// switch_1120_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1198
                }
            }
        }
        case 0x66:
        {
// switch_1380_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_12D8
                case default:
                {
// switch_12D8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1350
// lab_1350
                    OP_JUMP lab_13C8
                }
                case 0x0:
                {
// switch_12D8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1350
                }
                case 0x1:
                {
// switch_12D8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1350
                }
                case 0x2:
                {
// switch_12D8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1350
                }
                case 0x3:
                {
// switch_12D8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1350
                }
                case 0x4:
                {
// switch_12D8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1350
                }
                case 0x5:
                {
// switch_12D8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1350
                }
            }
        }
    }
}
// fun_1488
fun_1488() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_0D68(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_14F0
fun_14F0() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0708(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1598
    pri = 1;
    return pri;
// lab_1598
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_15E0
fun_15E0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1630
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_14F0(var_8)
    arg_2 = pri;
// lab_1630
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0D68(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1690
fun_1690() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1488(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_16E0
fun_16E0() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1690(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1740
fun_1740() {
    OP_JUMP lab_1758
// lab_1758
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1798
    pri = 0;
    return pri;
// lab_1798
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1758
    pri = 0;
    return pri;
}
// fun_17D8
fun_17D8() {
    var_8 = 0;
    pri = fun_1740()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1888
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1888
    pri = 0;
    return pri;
}
// fun_1898
fun_1898() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_18C8
fun_18C8() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1900
fun_1900() {
    OP_JUMP lab_1918
// lab_1918
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1960
    OP_JUMP lab_1990
    OP_JUMP lab_1980
// lab_1960
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_1990
    pri = 0;
    return pri;
// lab_1980
    OP_JUMP lab_1918
}
// fun_19A0
fun_19A0() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_19D0
fun_19D0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1A20
fun_1A20() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1A70
fun_1A70() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1AC0
fun_1AC0() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B10
fun_1B10() {
    pri = arg_6;
    OP_JNZ lab_1B48
    var_8 = 0;
    pri = fun_0C18()
// lab_1B48
    pri = arg_1;
    switch (pri) {
// switch_30B0
        case default:
        {
// switch_30B0_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3400
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3400
            pri = 1;
            OP_JUMP lab_3408
// lab_3400
            pri = 0;
// lab_3408
            OP_JZER lab_3560
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0708(var_24, var_16)
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
            OP_JUMP lab_35C0
// lab_3560
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
            pri = fun_0160(var_16, var_8, var_0)
// lab_35C0
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3620
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3680
// lab_3620
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3680
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3680
            pri = arg_2;
            OP_JZER lab_36C0
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_36C0
            var_8 = 0;
            pri = fun_0C58()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_30B0_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30B0_case_default
        }
        case 0x1:
        {
// switch_30B0_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30B0_case_default
        }
        case 0x2:
        {
// switch_30B0_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30B0_case_default
        }
        case 0x3:
        {
// switch_30B0_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30B0_case_default
        }
        case 0x4:
        {
// switch_30B0_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30B0_case_default
        }
        case 0x5:
        {
// switch_30B0_case_0x5
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_30B0_case_default
        }
        case 0x6:
        {
// switch_30B0_case_0x6
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_30B0_case_default
        }
        case 0x7:
        {
// switch_30B0_case_0x7
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_30B0_case_default
        }
        case 0x8:
        {
// switch_30B0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30B0_case_default
        }
        case 0x9:
        {
// switch_30B0_case_0x9
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_30B0_case_default
        }
        case 0xa:
        {
// switch_30B0_case_0xa
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_30B0_case_default
        }
        case 0xb:
        {
// switch_30B0_case_0xb
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_30B0_case_default
        }
        case 0xc:
        {
// switch_30B0_case_0xc
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_30B0_case_default
        }
        case 0xd:
        {
// switch_30B0_case_0xd
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_30B0_case_default
        }
        case 0xe:
        {
// switch_30B0_case_0xe
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_30B0_case_default
        }
        case 0xf:
        {
// switch_30B0_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30B0_case_default
        }
        case 0x10:
        {
// switch_30B0_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30B0_case_default
        }
        case 0x11:
        {
// switch_30B0_case_0x11
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_30B0_case_default
        }
        case 0x12:
        {
// switch_30B0_case_0x12
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_30B0_case_default
        }
        case 0x13:
        {
// switch_30B0_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30B0_case_default
        }
        case 0x14:
        {
// switch_30B0_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30B0_case_default
        }
        case 0x15:
        {
// switch_30B0_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30B0_case_default
        }
        case 0x16:
        {
// switch_30B0_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30B0_case_default
        }
        case 0x17:
        {
// switch_30B0_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30B0_case_default
        }
        case 0x18:
        {
// switch_30B0_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30B0_case_default
        }
        case 0x19:
        {
// switch_30B0_case_0x19
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_30B0_case_default
        }
        case 0x1a:
        {
// switch_30B0_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06C8(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0690(var_48, var_40)
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
            pri = fun_0978(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_30B0_case_default
        }
        case 0x1b:
        {
// switch_30B0_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06C8(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0690(var_48, var_40)
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
            pri = fun_0978(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_30B0_case_default
        }
        case 0x1c:
        {
// switch_30B0_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06C8(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0690(var_48, var_40)
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
            pri = fun_0978(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_30B0_case_default
        }
        case 0x1d:
        {
// switch_30B0_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30B0_case_default
        }
        case 0x1e:
        {
// switch_30B0_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30B0_case_default
        }
        case 0x1f:
        {
// switch_30B0_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30B0_case_default
        }
        case 0x20:
        {
// switch_30B0_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30B0_case_default
        }
        case 0x21:
        {
// switch_30B0_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30B0_case_default
        }
        case 0x22:
        {
// switch_30B0_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30B0_case_default
        }
        case 0x23:
        {
// switch_30B0_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30B0_case_default
        }
        case 0x24:
        {
// switch_30B0_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30B0_case_default
        }
        case 0x25:
        {
// switch_30B0_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30B0_case_default
        }
        case 0x26:
        {
// switch_30B0_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30B0_case_default
        }
        case 0x27:
        {
// switch_30B0_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30B0_case_default
        }
        case 0x28:
        {
// switch_30B0_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30B0_case_default
        }
        case 0x29:
        {
// switch_30B0_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30B0_case_default
        }
    }
}
// fun_36F0
fun_36F0() {
    pri = arg_5;
    OP_JNZ lab_3728
    var_8 = 0;
    pri = fun_0C18()
// lab_3728
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3778
    OP_CONST_S -8, -1
// lab_3778
    pri = arg_1;
    switch (pri) {
// switch_5230
        case default:
        {
// switch_5230_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_56D8
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0708(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_56D8
            pri = 1;
            OP_JUMP lab_56E0
// lab_56D8
            pri = 0;
// lab_56E0
            OP_JZER lab_5730
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_5988
// lab_5730
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5798
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5798
            pri = 1;
            OP_JUMP lab_57A0
// lab_5798
            pri = 0;
// lab_57A0
            OP_JZER lab_5928
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0708(var_24, var_16)
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
            OP_JUMP lab_5988
// lab_5928
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
            pri = fun_0160(var_16, var_8, var_0)
// lab_5988
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_59F8
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_59F8
            var_8 = 0;
            pri = fun_0C58()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5230_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x1:
        {
// switch_5230_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x2:
        {
// switch_5230_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x3:
        {
// switch_5230_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x4:
        {
// switch_5230_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x5:
        {
// switch_5230_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06C8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0940(var_40)
            OP_JUMP switch_5230_case_default
        }
        case 0x6:
        {
// switch_5230_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x7:
        {
// switch_5230_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x8:
        {
// switch_5230_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x9:
        {
// switch_5230_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0xa:
        {
// switch_5230_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0xb:
        {
// switch_5230_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0xc:
        {
// switch_5230_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0xd:
        {
// switch_5230_case_0xd
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5230_case_default
        }
        case 0xe:
        {
// switch_5230_case_0xe
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5230_case_default
        }
        case 0xf:
        {
// switch_5230_case_0xf
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5230_case_default
        }
        case 0x10:
        {
// switch_5230_case_0x10
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5230_case_default
        }
        case 0x11:
        {
// switch_5230_case_0x11
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5230_case_default
        }
        case 0x12:
        {
// switch_5230_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x13:
        {
// switch_5230_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x14:
        {
// switch_5230_case_0x14
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5230_case_default
        }
        case 0x15:
        {
// switch_5230_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x16:
        {
// switch_5230_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x17:
        {
// switch_5230_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x18:
        {
// switch_5230_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x19:
        {
// switch_5230_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x1a:
        {
// switch_5230_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x1b:
        {
// switch_5230_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x1c:
        {
// switch_5230_case_0x1c
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5230_case_default
        }
        case 0x1d:
        {
// switch_5230_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x1e:
        {
// switch_5230_case_0x1e
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5230_case_default
        }
        case 0x1f:
        {
// switch_5230_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x20:
        {
// switch_5230_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x21:
        {
// switch_5230_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x22:
        {
// switch_5230_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x23:
        {
// switch_5230_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x24:
        {
// switch_5230_case_0x24
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5230_case_default
        }
        case 0x25:
        {
// switch_5230_case_0x25
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5230_case_default
        }
        case 0x26:
        {
// switch_5230_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x27:
        {
// switch_5230_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x28:
        {
// switch_5230_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x29:
        {
// switch_5230_case_0x29
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5230_case_default
        }
        case 0x2a:
        {
// switch_5230_case_0x2a
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5230_case_default
        }
        case 0x2b:
        {
// switch_5230_case_0x2b
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5230_case_default
        }
        case 0x2c:
        {
// switch_5230_case_0x2c
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5230_case_default
        }
        case 0x2d:
        {
// switch_5230_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x2e:
        {
// switch_5230_case_0x2e
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5230_case_default
        }
        case 0x2f:
        {
// switch_5230_case_0x2f
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5230_case_default
        }
        case 0x30:
        {
// switch_5230_case_0x30
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5230_case_default
        }
        case 0x31:
        {
// switch_5230_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x32:
        {
// switch_5230_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x33:
        {
// switch_5230_case_0x33
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5230_case_default
        }
        case 0x34:
        {
// switch_5230_case_0x34
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5230_case_default
        }
        case 0x35:
        {
// switch_5230_case_0x35
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5230_case_default
        }
        case 0x36:
        {
// switch_5230_case_0x36
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5230_case_default
        }
        case 0x37:
        {
// switch_5230_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x38:
        {
// switch_5230_case_0x38
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5230_case_default
        }
        case 0x39:
        {
// switch_5230_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x3a:
        {
// switch_5230_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x3b:
        {
// switch_5230_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x3c:
        {
// switch_5230_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x3d:
        {
// switch_5230_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x3e:
        {
// switch_5230_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06C8(var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
    }
}
// fun_5A28
fun_5A28() {
    pri = arg_4;
    OP_JNZ lab_5A60
    var_8 = 0;
    pri = fun_0C18()
// lab_5A60
    pri = arg_1;
    switch (pri) {
// switch_6E38
        case default:
        {
// switch_6E38_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0CD8(var_264)
            OP_JZER lab_7400
            pri = arg_3;
            switch (pri) {
// switch_73A8
                case default:
                {
// switch_73A8_case_default
                    OP_JUMP lab_76B8
// lab_76B8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7728
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7728
                    var_8 = 0;
                    pri = fun_0C58()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_73A8_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_73A8_case_default
                }
                case 0x2:
                {
// switch_73A8_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_73A8_case_default
                }
                case 0x3:
                {
// switch_73A8_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_73A8_case_default
                }
            }
// lab_7400
            pri = arg_1;
            OP_JZER lab_7450
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7450
            pri = 0;
            OP_JUMP lab_7458
// lab_7450
            pri = 1;
// lab_7458
            OP_JZER lab_74C0
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0708(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_74C0
            pri = 1;
            OP_JUMP lab_74C8
// lab_74C0
            pri = 0;
// lab_74C8
            OP_JZER lab_7518
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_76B8
// lab_7518
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7580
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_76B8
// lab_7580
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0708(var_24, var_16)
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
// switch_6E38_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x1:
        {
// switch_6E38_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x2:
        {
// switch_6E38_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x3:
        {
// switch_6E38_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x4:
        {
// switch_6E38_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x5:
        {
// switch_6E38_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06C8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0940(var_40)
            OP_JUMP switch_6E38_case_default
        }
        case 0x6:
        {
// switch_6E38_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x7:
        {
// switch_6E38_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x8:
        {
// switch_6E38_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x9:
        {
// switch_6E38_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0xa:
        {
// switch_6E38_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0xb:
        {
// switch_6E38_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0xc:
        {
// switch_6E38_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0xd:
        {
// switch_6E38_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0xe:
        {
// switch_6E38_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0xf:
        {
// switch_6E38_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x10:
        {
// switch_6E38_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x11:
        {
// switch_6E38_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x12:
        {
// switch_6E38_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x13:
        {
// switch_6E38_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x14:
        {
// switch_6E38_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x15:
        {
// switch_6E38_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x16:
        {
// switch_6E38_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x17:
        {
// switch_6E38_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x18:
        {
// switch_6E38_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x19:
        {
// switch_6E38_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x1a:
        {
// switch_6E38_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x1b:
        {
// switch_6E38_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x1c:
        {
// switch_6E38_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x1d:
        {
// switch_6E38_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x1e:
        {
// switch_6E38_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x1f:
        {
// switch_6E38_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x20:
        {
// switch_6E38_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x21:
        {
// switch_6E38_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x22:
        {
// switch_6E38_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x23:
        {
// switch_6E38_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x24:
        {
// switch_6E38_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x25:
        {
// switch_6E38_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x26:
        {
// switch_6E38_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x27:
        {
// switch_6E38_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x28:
        {
// switch_6E38_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x29:
        {
// switch_6E38_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x2a:
        {
// switch_6E38_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x2b:
        {
// switch_6E38_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x2c:
        {
// switch_6E38_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x2d:
        {
// switch_6E38_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x2e:
        {
// switch_6E38_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x2f:
        {
// switch_6E38_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x30:
        {
// switch_6E38_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x31:
        {
// switch_6E38_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x32:
        {
// switch_6E38_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x33:
        {
// switch_6E38_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x34:
        {
// switch_6E38_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x35:
        {
// switch_6E38_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x36:
        {
// switch_6E38_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x37:
        {
// switch_6E38_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x38:
        {
// switch_6E38_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x39:
        {
// switch_6E38_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x3a:
        {
// switch_6E38_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x3b:
        {
// switch_6E38_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x3c:
        {
// switch_6E38_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x3d:
        {
// switch_6E38_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
        case 0x3e:
        {
// switch_6E38_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06C8(var_24, var_16, var_8)
            OP_JUMP switch_6E38_case_default
        }
    }
}
// fun_7758
fun_7758() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_7858
        case default:
        {
// switch_7858_case_default
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
// switch_7858_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_7858_case_default
        }
        case 0x1:
        {
// switch_7858_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_7858_case_default
        }
        case 0x2:
        {
// switch_7858_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_7858_case_default
        }
        case 0x3:
        {
// switch_7858_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_7858_case_default
        }
    }
}
// fun_7918
fun_7918() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_7968
// lab_7968
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30048;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_79E0
    OP_JUMP lab_7A10
// lab_79E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_7968
// lab_7A10
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_7A98
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_5A28(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0D38(var_56)
// lab_7A98
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_7B00
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0C98(var_24, var_16)
// lab_7B00
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0C98(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_7BC0
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0740(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0518(var_88, var_80, var_72, var_64, var_56)
// lab_7BC0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_7C00
    pri = 0;
    return pri;
// lab_7C00
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_7D48
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 30168;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0690(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_7D10
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_7D48
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0568(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0568(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0740(var_40)
    pri = 0;
    return pri;
// lab_7D10
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0C98(var_16, var_8)
}
// fun_7DD0
fun_7DD0() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_7E68
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0740(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_1B10(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_7E68
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_7FC0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_7F28
    var_24 = 30304;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_7F28
    pri = 1;
    OP_JUMP lab_7F30
// lab_7FC0
    pri = 0;
    return pri;
// lab_7F28
    pri = 0;
// lab_7F30
    OP_JZER lab_7FC0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0740(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_1B10(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_7FD0
fun_7FD0() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_7DD0(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_8058(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_8058
fun_8058() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_81F0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_80C0
fun_80C0() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_8130
    OP_CONST_S -8, 1
// lab_8130
    pri = arg_0;
    OP_JNZ lab_8150
    OP_ZERO_P_S -8
// lab_8150
    pri = var_8;
    OP_JZER lab_81D8
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_81D8
    pri = 0;
    return pri;
}
// fun_81F0
fun_81F0() {
    var_8 = 30408;
    var_16 = 8;
    pri = fun_18C8(var_8)
    var_24 = 0;
    pri = fun_1900()
    pri = arg_3;
    OP_JNZ lab_8310
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_82D8
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_8380(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_8300
// lab_8310
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8520(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_82D8
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8448(var_16, var_8)
// lab_8300
    OP_JUMP lab_8358
// lab_8358
    var_8 = 0;
    pri = fun_19A0()
    pri = 0;
    return pri;
}
// fun_8380
fun_8380() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8520(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_8430
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_8430
    pri = 0;
    return pri;
}
// fun_8448
fun_8448() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_1A20(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_16E0(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_17D8(var_72)
    var_88 = 0;
    pri = fun_1898()
    var_96 = 0;
    var_104 = 8;
    pri = fun_19D0(var_96)
    pri = 0;
    return pri;
}
// fun_8520
fun_8520() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8568
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_8828(var_8)
// lab_8568
    pri = arg_4;
    OP_JNZ lab_85D0
    var_8 = 0;
    var_16 = 8;
    pri = fun_19D0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1A20(var_40, var_32, var_24)
// lab_85D0
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_8670
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_1A70(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_16E0(var_56, var_48, var_40)
    OP_JUMP lab_8760
// lab_8670
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_8728
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_8728
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_8728
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_16E0(var_24, var_16, var_8)
// lab_8760
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_87A0
    var_8 = 0;
    var_16 = 8;
    pri = fun_0408(var_8)
// lab_87A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_17D8(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_8A30(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_80C0(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_8828
fun_8828() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_8888
    var_16 = 30568;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_8888
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_89C8
        case default:
        {
// switch_89C8_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_89B8
            var_16 = 31112;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_89B8
            OP_JUMP lab_8A00
// lab_8A00
            var_8 = 31328;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_89C8_case_0x1
            var_8 = 30784;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8A00
        }
        case 0x2:
        {
// switch_89C8_case_0x2
            var_8 = 30912;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8A00
        }
    }
}
// fun_8A30
fun_8A30() {
    pri = arg_2;
    OP_JNZ lab_8B18
    var_8 = 0;
    var_16 = 8;
    pri = fun_19D0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1A20(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_1AC0(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_8B18
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_16E0(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_17D8(var_40)
    var_56 = 0;
    pri = fun_1898()
    pri = 0;
    return pri;
}
// fun_8B90
fun_8B90() {
    pri = g_mode;
    switch (pri) {
// switch_8C28
        case default:
        {
// switch_8C28_case_default
            pri = CommandNOP()
            OP_JUMP lab_8C60
// lab_8C60
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_8C28_case_0x0
            var_8 = 0;
            pri = fun_8C70()
            OP_JUMP lab_8C60
        }
        case 0x4507aaa72b3c4739:
        {
// switch_8C28_case_0x4507aaa72b3c4739
            var_8 = 0;
            pri = fun_8C88()
            OP_JUMP lab_8C60
        }
    }
}
// fun_8C70
fun_8C70() {
    pri = 0;
    return pri;
}
// fun_8C88
fun_8C88() {
    var_16 = 357540919345235302;
    pri = FlagGet(var_16)
    var_8 = pri;
    pri = ZukanCheckComp()
    var_16 = pri;
    var_40 = 34619929654924129;
    pri = FlagGet(var_40)
    var_24 = pri;
    pri = var_8;
    OP_JNZ lab_8D90
    var_48 = 0;
    pri = fun_8F00()
    var_56 = 357540919345235302;
    pri = FlagSet(var_56)
    OP_JUMP lab_8E50
// lab_8D90
    pri = var_16;
    OP_JNZ lab_8DD0
    var_8 = 0;
    pri = fun_92B0()
    OP_JUMP lab_8E50
// lab_8DD0
    pri = var_24;
    OP_JNZ lab_8E38
    var_8 = 0;
    pri = fun_93D8()
    var_16 = 34619929654924129;
    pri = FlagSet(var_16)
    OP_JUMP lab_8E50
// lab_8E38
    var_8 = 0;
    pri = fun_9C48()
// lab_8E50
    pri = 0;
    return pri;
}
// fun_8E68
fun_8E68() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 0;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = arg_0;
    var_64 = var_8;
    var_72 = 56;
    pri = fun_15E0(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_8F00
fun_8F00() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = var_8;
    var_64 = 48;
    pri = fun_7758(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = -953266664026780780;
    var_80 = 8;
    pri = fun_8E68(var_72)
    var_88 = 1;
    var_96 = 8;
    pri = fun_17D8(var_88)
    var_104 = 0;
    pri = fun_1898()
    var_112 = -953263365491896147;
    var_120 = 8;
    pri = fun_8E68(var_112)
    var_128 = 1;
    var_136 = 8;
    pri = fun_17D8(var_128)
    var_144 = 0;
    pri = fun_1898()
    var_152 = -953264465003524358;
    var_160 = 8;
    pri = fun_8E68(var_152)
    var_168 = 1;
    var_176 = 8;
    pri = fun_17D8(var_168)
    var_184 = 0;
    pri = fun_1898()
    var_192 = -953269962561665413;
    var_200 = 8;
    pri = fun_8E68(var_192)
    var_208 = 1;
    var_216 = 8;
    pri = fun_17D8(var_208)
    var_224 = 0;
    pri = fun_1898()
    var_232 = 1;
    var_240 = 3;
    var_248 = 0;
    var_256 = 0;
    var_264 = var_8;
    var_272 = 40;
    pri = fun_5A28(var_264, var_256, var_248, var_240, var_232)
    var_280 = var_8;
    var_288 = 8;
    pri = fun_0740(var_280)
    var_296 = 6;
    var_304 = 4;
    var_312 = 2;
    var_320 = 0;
    var_328 = 9;
    var_336 = 1;
    var_344 = 1267;
    var_352 = var_8;
    var_360 = 64;
    pri = fun_7FD0(var_352, var_344, var_336, var_328, var_320, var_312, var_304, var_296)
    var_368 = 1;
    var_376 = 1;
    var_384 = -1;
    var_392 = -1;
    var_400 = 0;
    var_408 = 0;
    var_416 = var_8;
    var_424 = 56;
    pri = fun_36F0(var_416, var_408, var_400, var_392, var_384, var_376, var_368)
    var_432 = -953271062073293624;
    var_440 = 8;
    pri = fun_8E68(var_432)
    var_448 = 1;
    var_456 = 8;
    pri = fun_17D8(var_448)
    var_464 = 0;
    pri = fun_1898()
    var_472 = 0;
    var_480 = 0;
    var_488 = 0;
    var_496 = var_8;
    var_504 = 32;
    pri = fun_7918(var_496, var_488, var_480, var_472)
    pri = 0;
    return pri;
}
// fun_92B0
fun_92B0() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = var_8;
    var_64 = 48;
    pri = fun_7758(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = -953267763538408991;
    var_80 = 8;
    pri = fun_8E68(var_72)
    var_88 = 1;
    var_96 = 8;
    pri = fun_17D8(var_88)
    var_104 = 0;
    pri = fun_1898()
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = var_8;
    var_144 = 32;
    pri = fun_7918(var_136, var_128, var_120, var_112)
    pri = 0;
    return pri;
}
// fun_93D8
fun_93D8() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = var_8;
    var_64 = 48;
    pri = fun_7758(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 31512;
    pri = SoundPostEvent(var_72)
    var_80 = -953268863050037202;
    var_88 = 8;
    pri = fun_8E68(var_80)
    var_96 = 0;
    var_104 = 8;
    pri = fun_0408(var_96)
    var_112 = 1;
    var_120 = 8;
    pri = fun_17D8(var_112)
    var_128 = 0;
    pri = fun_1898()
    var_136 = -953274360608178257;
    var_144 = 8;
    pri = fun_8E68(var_136)
    var_152 = 1;
    var_160 = 8;
    pri = fun_17D8(var_152)
    var_168 = 0;
    pri = fun_1898()
    var_176 = -954252925957096822;
    var_184 = 8;
    pri = fun_8E68(var_176)
    var_192 = 1;
    var_200 = 8;
    pri = fun_17D8(var_192)
    var_208 = 0;
    pri = fun_1898()
    var_216 = 1;
    var_224 = 3;
    var_232 = 0;
    var_240 = 0;
    var_248 = var_8;
    var_256 = 40;
    pri = fun_5A28(var_248, var_240, var_232, var_224, var_216)
    var_264 = 1;
    var_272 = 0;
    var_280 = 31744;
    var_288 = 8;
    var_296 = 32;
    pri = fun_0308(var_288, var_280, var_272, var_264)
    var_304 = 0;
    pri = fun_0378()
    pri = PlayShoujouDemo()
    var_312 = 31792;
    var_320 = 8;
    var_328 = 16;
    pri = fun_02A8(var_320, var_312)
    var_336 = 0;
    pri = fun_0378()
    var_344 = 1;
    var_352 = 1;
    var_360 = -1;
    var_368 = -1;
    var_376 = 0;
    var_384 = 0;
    var_392 = var_8;
    var_400 = 56;
    pri = fun_36F0(var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_408 = -953275460119806468;
    var_416 = 8;
    pri = fun_8E68(var_408)
    var_424 = 1;
    var_432 = 8;
    pri = fun_17D8(var_424)
    var_440 = 0;
    pri = fun_1898()
    var_448 = 1;
    var_456 = 3;
    var_464 = 0;
    var_472 = 0;
    var_480 = var_8;
    var_488 = 40;
    pri = fun_5A28(var_480, var_472, var_464, var_456, var_448)
    var_496 = 1;
    var_504 = 0;
    var_512 = 31744;
    var_520 = 8;
    var_528 = 32;
    pri = fun_0308(var_520, var_512, var_504, var_496)
    var_536 = 0;
    pri = fun_0378()
    var_544 = 15;
    var_552 = 8;
    pri = fun_0060(var_544)
    var_560 = 31792;
    var_568 = 8;
    var_576 = 16;
    pri = fun_02A8(var_568, var_560)
    var_584 = 0;
    pri = fun_0378()
    var_592 = 1;
    var_600 = 1;
    var_608 = -1;
    var_616 = -1;
    var_624 = 0;
    var_632 = 0;
    var_640 = var_8;
    var_648 = 56;
    pri = fun_36F0(var_640, var_632, var_624, var_616, var_608, var_600, var_592)
    var_656 = -954257324003609666;
    var_664 = 8;
    pri = fun_8E68(var_656)
    var_672 = 1;
    var_680 = 8;
    pri = fun_17D8(var_672)
    var_688 = 0;
    pri = fun_1898()
    var_696 = 1;
    var_704 = 3;
    var_712 = 0;
    var_720 = 0;
    var_728 = var_8;
    var_736 = 40;
    pri = fun_5A28(var_728, var_720, var_712, var_704, var_696)
    var_744 = 0;
    var_752 = 8;
    pri = fun_19D0(var_744)
    var_760 = 3;
    var_768 = 0;
    var_776 = 3482531145946986007;
    var_784 = 24;
    pri = fun_1690(var_776, var_768, var_760)
    var_792 = 1;
    var_800 = 8;
    pri = fun_17D8(var_792)
    var_808 = 0;
    pri = fun_1898()
    var_816 = 1;
    var_824 = 1;
    var_832 = -1;
    var_840 = -1;
    var_848 = 0;
    var_856 = 0;
    var_864 = var_8;
    var_872 = 56;
    pri = fun_36F0(var_864, var_856, var_848, var_840, var_832, var_824, var_816)
    var_880 = -954256224491981455;
    var_888 = 8;
    pri = fun_8E68(var_880)
    var_896 = 1;
    var_904 = 8;
    pri = fun_17D8(var_896)
    var_912 = 0;
    pri = fun_1898()
    var_920 = 1;
    var_928 = 3;
    var_936 = 0;
    var_944 = 0;
    var_952 = var_8;
    var_960 = 40;
    pri = fun_5A28(var_952, var_944, var_936, var_928, var_920)
    var_968 = 6;
    var_976 = 4;
    var_984 = 2;
    var_992 = 0;
    var_1000 = 9;
    var_1008 = 1;
    var_1016 = 632;
    var_1024 = var_8;
    var_1032 = 64;
    pri = fun_7FD0(var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968)
    var_1040 = 1;
    var_1048 = 1;
    var_1056 = -1;
    var_1064 = -1;
    var_1072 = 0;
    var_1080 = 0;
    var_1088 = var_8;
    var_1096 = 56;
    pri = fun_36F0(var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040)
    var_1104 = -954259523026866088;
    var_1112 = 8;
    pri = fun_8E68(var_1104)
    var_1120 = 1;
    var_1128 = 8;
    pri = fun_17D8(var_1120)
    var_1136 = 0;
    pri = fun_1898()
    pri = SetCompDirectorEvent()
    var_1144 = 0;
    var_1152 = 0;
    var_1160 = 31840;
    pri = PokeMemoryCheckParty(var_1160, var_1152, var_1144)
    var_1168 = 0;
    var_1176 = 0;
    var_1184 = 0;
    var_1192 = var_8;
    var_1200 = 32;
    pri = fun_7918(var_1192, var_1184, var_1176, var_1168)
    pri = 0;
    return pri;
}
// fun_9C48
fun_9C48() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = var_8;
    var_64 = 48;
    pri = fun_7758(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = -954258423515237877;
    var_80 = 8;
    pri = fun_8E68(var_72)
    var_88 = 1;
    var_96 = 8;
    pri = fun_17D8(var_88)
    var_104 = 0;
    pri = fun_1898()
    var_112 = 1;
    var_120 = 3;
    var_128 = 0;
    var_136 = 0;
    var_144 = var_8;
    var_152 = 40;
    pri = fun_5A28(var_144, var_136, var_128, var_120, var_112)
    var_160 = 1;
    var_168 = 0;
    var_176 = 31744;
    var_184 = 8;
    var_192 = 32;
    pri = fun_0308(var_184, var_176, var_168, var_160)
    var_200 = 0;
    pri = fun_0378()
    pri = PlayShoujouDemo()
    var_208 = 31792;
    var_216 = 8;
    var_224 = 16;
    pri = fun_02A8(var_216, var_208)
    var_232 = 0;
    pri = fun_0378()
    var_240 = 1;
    var_248 = 1;
    var_256 = -1;
    var_264 = -1;
    var_272 = 0;
    var_280 = 0;
    var_288 = var_8;
    var_296 = 56;
    pri = fun_36F0(var_288, var_280, var_272, var_264, var_256, var_248, var_240)
    var_304 = 0;
    var_312 = 0;
    var_320 = 0;
    var_328 = var_8;
    var_336 = 32;
    pri = fun_7918(var_328, var_320, var_312, var_304)
    pri = 0;
    return pri;
}
