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
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_02F0
// lab_02F0
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0330
    OP_JUMP lab_03A0
// lab_0330
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0370
    OP_JUMP lab_03A0
// lab_0370
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_02F0
// lab_03A0
    pri = 0;
    return pri;
}
// fun_03B8
fun_03B8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0410
fun_0410() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0BE8(var_8)
    OP_JZER lab_0488
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0C18(var_24)
    OP_JNZ lab_0488
    pri = 0;
    return pri;
// lab_0488
    OP_JUMP lab_0498
// lab_0498
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_04F8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_04F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0498
    pri = 0;
    return pri;
}
// fun_0538
fun_0538() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0570
fun_0570() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_05B0
fun_05B0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_05E8
fun_05E8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0630
    pri = 0;
    return pri;
// lab_0630
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0670
// lab_0670
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0BE8(var_8)
    OP_JNZ lab_06F8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_06E8
    pri = 0;
    return pri;
// lab_06F8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0740
    pri = 0;
    return pri;
// lab_0740
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_07A0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_07E8(var_8)
    pri = 0;
    return pri;
// lab_07A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0670
    pri = 0;
    return pri;
// lab_06E8
    OP_JUMP lab_0740
}
// fun_07E8
fun_07E8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0820
fun_0820() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0870
    pri = 0;
    return pri;
// lab_0870
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0BE8(var_8)
    OP_JZER lab_09A0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_08C8
    OP_ZERO_P_S 64
// lab_09A0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_09D8
    OP_CONST_S 64, 1
// lab_09D8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A10
    OP_CONST_S 72, 1
// lab_0A10
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
// lab_08C8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_08F0
    OP_ZERO_P_S 72
// lab_08F0
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
    OP_JUMP lab_0AB0
// lab_0AB0
    pri = 0;
    return pri;
}
// fun_0AC0
fun_0AC0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0B00
fun_0B00() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0B40
fun_0B40() {
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    pri = EnableFieldObjectLookAtPos_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0BA8
fun_0BA8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0BE8
fun_0BE8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0C18
fun_0C18() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0C48
fun_0C48() {
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
// switch_1260
        case default:
        {
// switch_1260_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_12A8
// lab_12A8
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
            OP_JNZ lab_1350
            var_88 = 0;
            pri = fun_1420()
// lab_1350
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1260_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0E48
                case default:
                {
// switch_0E48_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0EC0
// lab_0EC0
                    OP_JUMP lab_12A8
                }
                case 0x0:
                {
// switch_0E48_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0EC0
                }
                case 0x1:
                {
// switch_0E48_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0EC0
                }
                case 0x2:
                {
// switch_0E48_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0EC0
                }
                case 0x3:
                {
// switch_0E48_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0EC0
                }
                case 0x4:
                {
// switch_0E48_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0EC0
                }
                case 0x5:
                {
// switch_0E48_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0EC0
                }
            }
        }
        case 0x65:
        {
// switch_1260_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1000
                case default:
                {
// switch_1000_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1078
// lab_1078
                    OP_JUMP lab_12A8
                }
                case 0x0:
                {
// switch_1000_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1078
                }
                case 0x1:
                {
// switch_1000_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1078
                }
                case 0x2:
                {
// switch_1000_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1078
                }
                case 0x3:
                {
// switch_1000_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1078
                }
                case 0x4:
                {
// switch_1000_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1078
                }
                case 0x5:
                {
// switch_1000_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1078
                }
            }
        }
        case 0x66:
        {
// switch_1260_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_11B8
                case default:
                {
// switch_11B8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1230
// lab_1230
                    OP_JUMP lab_12A8
                }
                case 0x0:
                {
// switch_11B8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1230
                }
                case 0x1:
                {
// switch_11B8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1230
                }
                case 0x2:
                {
// switch_11B8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1230
                }
                case 0x3:
                {
// switch_11B8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1230
                }
                case 0x4:
                {
// switch_11B8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1230
                }
                case 0x5:
                {
// switch_11B8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1230
                }
            }
        }
    }
}
// fun_1368
fun_1368() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_0C48(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13D0
fun_13D0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1368(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1420
fun_1420() {
    OP_JUMP lab_1438
// lab_1438
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1478
    pri = 0;
    return pri;
// lab_1478
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1438
    pri = 0;
    return pri;
}
// fun_14B8
fun_14B8() {
    var_8 = 0;
    pri = fun_1420()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1568
    var_32 = 344;
    pri = SoundPostEvent(var_32)
// lab_1568
    pri = 0;
    return pri;
}
// fun_1578
fun_1578() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_15A8
fun_15A8() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_15D8
// lab_15D8
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1618
    OP_JUMP lab_1648
// lab_1618
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_15D8
// lab_1648
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1690
fun_1690() {
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
// fun_1700
fun_1700() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1750
fun_1750() {
    var_8 = arg_0;
    pri = ConsumePocketMoney_(var_8)
    return pri;
}
// fun_1780
fun_1780() {
    pri = GetPocketMoney_()
    return pri;
}
// fun_17A8
fun_17A8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1838(var_8)
    var_24 = arg_0;
    pri = OpenWalletWindow_(var_24)
    pri = 0;
    return pri;
}
// fun_1800
fun_1800() {
    var_8 = 0;
    pri = CloseWalletWindow_(var_8)
    pri = 0;
    return pri;
}
// fun_1838
fun_1838() {
    var_8 = arg_0;
    pri = UpdateWalletWindow_(var_8)
    pri = 0;
    return pri;
}
// fun_1870
fun_1870() {
    pri = arg_6;
    OP_JNZ lab_18A8
    var_8 = 0;
    pri = fun_0AC0()
// lab_18A8
    pri = arg_1;
    switch (pri) {
// switch_2E10
        case default:
        {
// switch_2E10_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3160
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3160
            pri = 1;
            OP_JUMP lab_3168
// lab_3160
            pri = 0;
// lab_3168
            OP_JZER lab_32C0
            var_16 = 8192;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_05B0(var_24, var_16)
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
            var_64 = 8296;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_3320
// lab_32C0
            var_8 = 64;
            alt = 520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
// lab_3320
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3380
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_33E0
// lab_3380
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_33E0
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_33E0
            pri = arg_2;
            OP_JZER lab_3420
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3420
            var_8 = 0;
            pri = fun_0B00()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_2E10_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E10_case_default
        }
        case 0x1:
        {
// switch_2E10_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E10_case_default
        }
        case 0x2:
        {
// switch_2E10_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E10_case_default
        }
        case 0x3:
        {
// switch_2E10_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E10_case_default
        }
        case 0x4:
        {
// switch_2E10_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E10_case_default
        }
        case 0x5:
        {
// switch_2E10_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5480;
            var_72 = 5472;
            var_80 = 5464;
            alt = 520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0820(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E10_case_default
        }
        case 0x6:
        {
// switch_2E10_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5504;
            var_72 = 5496;
            var_80 = 5488;
            alt = 520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0820(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E10_case_default
        }
        case 0x7:
        {
// switch_2E10_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5528;
            var_72 = 5520;
            var_80 = 5512;
            alt = 520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0820(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E10_case_default
        }
        case 0x8:
        {
// switch_2E10_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E10_case_default
        }
        case 0x9:
        {
// switch_2E10_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5552;
            var_72 = 5544;
            var_80 = 5536;
            alt = 520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0820(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E10_case_default
        }
        case 0xa:
        {
// switch_2E10_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5576;
            var_72 = 5568;
            var_80 = 5560;
            alt = 520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0820(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E10_case_default
        }
        case 0xb:
        {
// switch_2E10_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5600;
            var_72 = 5592;
            var_80 = 5584;
            alt = 520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0820(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E10_case_default
        }
        case 0xc:
        {
// switch_2E10_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5624;
            var_72 = 5616;
            var_80 = 5608;
            alt = 520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0820(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E10_case_default
        }
        case 0xd:
        {
// switch_2E10_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5648;
            var_72 = 5640;
            var_80 = 5632;
            alt = 520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0820(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E10_case_default
        }
        case 0xe:
        {
// switch_2E10_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5672;
            var_72 = 5664;
            var_80 = 5656;
            alt = 520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0820(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E10_case_default
        }
        case 0xf:
        {
// switch_2E10_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E10_case_default
        }
        case 0x10:
        {
// switch_2E10_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E10_case_default
        }
        case 0x11:
        {
// switch_2E10_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5696;
            var_72 = 5688;
            var_80 = 5680;
            alt = 520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0820(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E10_case_default
        }
        case 0x12:
        {
// switch_2E10_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5720;
            var_72 = 5712;
            var_80 = 5704;
            alt = 520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0820(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E10_case_default
        }
        case 0x13:
        {
// switch_2E10_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E10_case_default
        }
        case 0x14:
        {
// switch_2E10_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E10_case_default
        }
        case 0x15:
        {
// switch_2E10_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E10_case_default
        }
        case 0x16:
        {
// switch_2E10_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E10_case_default
        }
        case 0x17:
        {
// switch_2E10_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E10_case_default
        }
        case 0x18:
        {
// switch_2E10_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E10_case_default
        }
        case 0x19:
        {
// switch_2E10_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5744;
            var_72 = 5736;
            var_80 = 5728;
            alt = 520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0820(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E10_case_default
        }
        case 0x1a:
        {
// switch_2E10_case_0x1a
            var_8 = 1;
            var_16 = 5752;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0570(var_24, var_16, var_8)
            var_40 = 5888;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0538(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 5968;
            var_88 = 5960;
            var_96 = 5952;
            alt = 520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0820(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_2E10_case_default
        }
        case 0x1b:
        {
// switch_2E10_case_0x1b
            var_8 = 3;
            var_16 = 5976;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0570(var_24, var_16, var_8)
            var_40 = 6112;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0538(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6192;
            var_88 = 6184;
            var_96 = 6176;
            alt = 520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0820(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_2E10_case_default
        }
        case 0x1c:
        {
// switch_2E10_case_0x1c
            var_8 = 2;
            var_16 = 6200;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0570(var_24, var_16, var_8)
            var_40 = 6336;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0538(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6416;
            var_88 = 6408;
            var_96 = 6400;
            alt = 520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0820(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_2E10_case_default
        }
        case 0x1d:
        {
// switch_2E10_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6424;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E10_case_default
        }
        case 0x1e:
        {
// switch_2E10_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6560;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E10_case_default
        }
        case 0x1f:
        {
// switch_2E10_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6696;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E10_case_default
        }
        case 0x20:
        {
// switch_2E10_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6832;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E10_case_default
        }
        case 0x21:
        {
// switch_2E10_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6952;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E10_case_default
        }
        case 0x22:
        {
// switch_2E10_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7072;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E10_case_default
        }
        case 0x23:
        {
// switch_2E10_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7208;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E10_case_default
        }
        case 0x24:
        {
// switch_2E10_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7344;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E10_case_default
        }
        case 0x25:
        {
// switch_2E10_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7480;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E10_case_default
        }
        case 0x26:
        {
// switch_2E10_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7616;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E10_case_default
        }
        case 0x27:
        {
// switch_2E10_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7760;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E10_case_default
        }
        case 0x28:
        {
// switch_2E10_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7904;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E10_case_default
        }
        case 0x29:
        {
// switch_2E10_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8048;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E10_case_default
        }
    }
}
// fun_3450
fun_3450() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_34C0
    OP_CONST_S -8, 1
// lab_34C0
    pri = arg_0;
    OP_JNZ lab_34E0
    OP_ZERO_P_S -8
// lab_34E0
    pri = var_8;
    OP_JZER lab_3568
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_3568
    pri = 0;
    return pri;
}
// fun_3580
fun_3580() {
    pri = g_mode;
    switch (pri) {
// switch_3618
        case default:
        {
// switch_3618_case_default
            pri = CommandNOP()
            OP_JUMP lab_3650
// lab_3650
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3618_case_0x0
            var_8 = 0;
            pri = fun_3660()
            OP_JUMP lab_3650
        }
        case 0x2def3bd771be2bec:
        {
// switch_3618_case_0x2def3bd771be2bec
            var_8 = 0;
            pri = fun_43A0()
            OP_JUMP lab_3650
        }
    }
}
// fun_3660
fun_3660() {
    pri = 0;
    return pri;
}
// fun_3678
fun_3678() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = arg_0;
    var_48 = 8802641224559852288;
    var_56 = 48;
    pri = fun_03B8(var_48, var_40, var_32, var_24, var_16, var_8)
    pri = GetTargetFieldObjectID()
    var_64 = pri;
    var_72 = 8;
    pri = fun_4218(var_64)
    var_80 = 0;
    var_88 = 8;
    pri = fun_17A8(var_80)
}
// lab_3728
OP_LCTRL 5
OP_SCTRL 4
var_8 = 3;
var_16 = 0;
var_24 = -926754453084541351;
var_32 = 24;
pri = fun_13D0(var_24, var_16, var_8)
OP_ZERO_P_S -8
OP_JUMP lab_37A8
// lab_37A8
OP_LOAD_S_BOTH -8, 40
OP_JSGEQ lab_3960
var_8 = 1;
pri = arg_1;
var_16 = pri;
pri = var_8;
OP_POP_ALT 
OP_IDXADDR_P_B 3
OP_MOVE_ALT 
OP_LOAD_I 
OP_ADD 
OP_ADD_P_C 8
OP_LOAD_I 
var_24 = pri;
var_32 = 0;
var_40 = 24;
pri = fun_1700(var_32, var_24, var_16)
var_48 = 0;
var_56 = 0;
pri = arg_1;
var_64 = pri;
pri = var_8;
OP_POP_ALT 
OP_IDXADDR_P_B 3
OP_MOVE_ALT 
OP_LOAD_I 
OP_ADD 
OP_ADD_P_C 16
OP_LOAD_I 
var_72 = pri;
var_80 = 1;
pri = WordSetNumber(var_80, var_72, var_64, var_56)
var_88 = 0;
pri = arg_1;
var_96 = pri;
pri = var_8;
OP_POP_ALT 
OP_IDXADDR_P_B 3
OP_MOVE_ALT 
OP_LOAD_I 
OP_ADD 
OP_LOAD_I 
var_104 = pri;
var_112 = var_8;
var_120 = 24;
pri = fun_15A8(var_112, var_104, var_96)
OP_JUMP lab_37A0
// lab_3960
arg_-3 = 0;
var_8 = -1890103677756342713;
var_16 = arg_2;
var_24 = 24;
pri = fun_15A8(var_16, var_8, var_0)
var_40 = 1;
var_48 = 1;
var_56 = 0;
var_64 = 1;
var_72 = 32;
pri = fun_1690(var_64, var_56, var_48, var_40)
var_8 = pri;
OP_LOAD_S_BOTH 40, -8
OP_JNEQ lab_3A50
var_80 = 1658436860530800861;
var_88 = 8;
pri = fun_4150(var_80)
pri = 0;
return pri;
// lab_3A50
var_8 = 0;
pri = fun_1578()
var_16 = 8802641224559852288;
var_24 = 8;
pri = fun_0410(var_16)
// lab_37A0
OP_INC_P_S -8
// lab_3A90
OP_LCTRL 5
OP_ADD_C -8
OP_SCTRL 4
pri = arg_1;
var_16 = pri;
pri = var_8;
OP_POP_ALT 
OP_IDXADDR_P_B 3
OP_MOVE_ALT 
OP_LOAD_I 
OP_ADD 
OP_ADD_P_C 16
OP_LOAD_I 
var_24 = pri;
pri = arg_1;
var_32 = pri;
pri = var_8;
OP_POP_ALT 
OP_IDXADDR_P_B 3
OP_MOVE_ALT 
OP_LOAD_I 
OP_ADD 
OP_ADD_P_C 8
OP_LOAD_I 
var_40 = pri;
var_48 = 16;
pri = fun_3D80(var_40, var_32)
var_16 = pri;
pri = var_16;
OP_JNZ lab_3BC8
pri = 0;
return pri;
// lab_3BC8
var_8 = 0;
var_16 = -9220692511262581025;
var_24 = 0;
var_32 = 24;
pri = fun_15A8(var_24, var_16, var_8)
var_40 = 0;
var_48 = -9220691411750952814;
var_56 = 1;
var_64 = 24;
pri = fun_15A8(var_56, var_48, var_40)
var_72 = 0;
var_80 = -1890103677756342713;
var_88 = 2;
var_96 = 24;
pri = fun_15A8(var_88, var_80, var_72)
var_112 = 0;
var_120 = 1;
var_128 = 0;
var_136 = 1;
var_144 = 32;
pri = fun_1690(var_136, var_128, var_120, var_112)
var_24 = pri;
pri = var_24;
OP_JNZ lab_3CE0
OP_JUMP lab_3A90
// lab_3CE0
pri = var_24;
OP_EQ_P_C_PRI 1
OP_JZER lab_3D10
OP_JUMP lab_3728
// lab_3D10
pri = var_24;
OP_EQ_P_C_PRI 2
OP_JZER lab_3D68
var_8 = 0;
var_16 = 8;
pri = fun_4150(var_8)
pri = 0;
return pri;
// lab_3D68
pri = 0;
return pri;
// fun_3D80
fun_3D80() {
    var_8 = 1;
    var_16 = arg_0;
    pri = ItemAddCheck(var_16, var_8)
    OP_JNZ lab_3DF8
    var_24 = -8972904822319667057;
    var_32 = 8;
    pri = fun_4150(var_24)
    pri = 0;
    return pri;
// lab_3DF8
    var_8 = 0;
    pri = fun_1780()
    OP_LOAD_P_S_ALT 32
    OP_JSGEQ lab_3E60
    var_16 = -1918962011453097701;
    var_24 = 8;
    pri = fun_4150(var_16)
    pri = 0;
    return pri;
// lab_3E60
    var_8 = arg_1;
    var_16 = 8;
    pri = fun_1750(var_8)
    var_24 = 8312;
    pri = SoundPostEvent(var_24)
    var_32 = 0;
    var_40 = 8;
    pri = fun_1838(var_32)
    var_48 = 0;
    var_56 = 8;
    pri = fun_02A8(var_48)
    var_64 = 1;
    var_72 = arg_0;
    pri = ItemAdd(var_72, var_64)
    var_80 = 8504;
    pri = SoundPostEvent(var_80)
    var_88 = 0;
    var_96 = 8;
    pri = fun_02A8(var_88)
    var_104 = 0;
    pri = fun_4358()
    var_112 = 1;
    var_120 = -1;
    var_128 = -1;
    var_136 = 3;
    var_144 = 0;
    var_152 = 15;
    var_160 = 8802641224559852288;
    var_168 = 56;
    pri = fun_1870(var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_176 = 15;
    var_184 = 8;
    pri = fun_0060(var_176)
    var_192 = 8688;
    pri = SoundPostEvent(var_192)
    var_200 = 1;
    var_208 = arg_0;
    var_216 = 0;
    var_224 = 24;
    pri = fun_1700(var_216, var_208, var_200)
    var_232 = 3;
    var_240 = 0;
    var_248 = -9006684510068747508;
    var_256 = 24;
    pri = fun_13D0(var_248, var_240, var_232)
    var_264 = 8802641224559852288;
    var_272 = 8;
    pri = fun_05E8(var_264)
    pri = GetTargetFieldObjectID()
    var_280 = pri;
    var_288 = 8;
    pri = fun_4218(var_280)
    var_296 = 40;
    var_304 = 8;
    pri = fun_0060(var_296)
    var_312 = 1;
    var_320 = 8;
    pri = fun_14B8(var_312)
    var_328 = 0;
    pri = fun_1578()
    var_336 = 9;
    var_344 = arg_0;
    var_352 = 16;
    pri = fun_3450(var_344, var_336)
    pri = 1;
    return pri;
}
// fun_4150
fun_4150() {
    pri = arg_0;
    OP_JZER lab_41C0
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_13D0(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_14B8(var_40)
// lab_41C0
    var_8 = 0;
    pri = fun_1578()
    var_16 = 0;
    pri = fun_1800()
    var_24 = 0;
    pri = fun_4358()
    pri = 0;
    return pri;
}
// fun_4218
fun_4218() {
    var_16 = arg_0;
    pri = GetFieldObjectPositionX_(var_16)
    var_8 = pri;
    var_32 = arg_0;
    pri = GetFieldObjectPositionY_(var_32)
    alt = 4638144666238189568;
    var_40 = pri;
    var_48 = alt;
    pri = floatadd(var_48, var_40)
    var_16 = pri;
    var_64 = arg_0;
    pri = GetFieldObjectPositionZ_(var_64)
    var_24 = pri;
    var_72 = 1;
    var_80 = 1;
    var_88 = -1;
    var_96 = var_24;
    var_104 = var_16;
    var_112 = var_8;
    var_120 = 8802641224559852288;
    var_128 = 56;
    pri = fun_0B40(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    pri = 0;
    return pri;
}
// fun_4358
fun_4358() {
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0BA8(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_43A0
fun_43A0() {
    pri = 8872;
    OP_ADDR_ALT -96
    OP_MOVS 96
    var_104 = 3;
    OP_PUSH_P_ADR -96
    pri = GetTargetFieldObjectID()
    var_112 = pri;
    var_120 = 24;
    pri = fun_3678(var_112, var_104, var_96)
    pri = 0;
    return pri;
}
