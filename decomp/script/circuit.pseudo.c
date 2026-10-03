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
    var_8 = arg_0;
    pri = IncRecord_(var_8)
    return pri;
}
// fun_0438
fun_0438() {
    var_8 = arg_0;
    pri = GetRecord_(var_8)
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
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05C8
fun_05C8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0620
fun_0620() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DE8(var_8)
    OP_JZER lab_0698
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0E18(var_24)
    OP_JNZ lab_0698
    pri = 0;
    return pri;
// lab_0698
    OP_JUMP lab_06A8
// lab_06A8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0708
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0708
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_06A8
    pri = 0;
    return pri;
}
// fun_0748
fun_0748() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0780
fun_0780() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_07C0
fun_07C0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_07F8
fun_07F8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0840
    pri = 0;
    return pri;
// lab_0840
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0880
// lab_0880
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DE8(var_8)
    OP_JNZ lab_0908
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_08F8
    pri = 0;
    return pri;
// lab_0908
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0950
    pri = 0;
    return pri;
// lab_0950
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_09B0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_09F8(var_8)
    pri = 0;
    return pri;
// lab_09B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0880
    pri = 0;
    return pri;
// lab_08F8
    OP_JUMP lab_0950
}
// fun_09F8
fun_09F8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0A30
fun_0A30() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0A80
    pri = 0;
    return pri;
// lab_0A80
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DE8(var_8)
    OP_JZER lab_0BB0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0AD8
    OP_ZERO_P_S 64
// lab_0BB0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0BE8
    OP_CONST_S 64, 1
// lab_0BE8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C20
    OP_CONST_S 72, 1
// lab_0C20
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
// lab_0AD8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B00
    OP_ZERO_P_S 72
// lab_0B00
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
    OP_JUMP lab_0CC0
// lab_0CC0
    pri = 0;
    return pri;
}
// fun_0CD0
fun_0CD0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D10
fun_0D10() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D50
fun_0D50() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DA8
fun_0DA8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DE8
fun_0DE8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0E18
fun_0E18() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0E48
fun_0E48() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
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
            pri = fun_18B8()
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
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_0E78(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1600
fun_1600() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_07C0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_16A8
    pri = 1;
    return pri;
// lab_16A8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_16F0
fun_16F0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1740
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1600(var_8)
    arg_2 = pri;
// lab_1740
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
// fun_17A0
fun_17A0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1598(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_17F0
fun_17F0() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_17A0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1850
fun_1850() {
    var_8 = 3;
    pri = arg_1;
    alt = 4;
    pri |= alt;
    var_16 = pri;
    var_24 = 47;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1598(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_18B8
fun_18B8() {
    OP_JUMP lab_18D0
// lab_18D0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1910
    pri = 0;
    return pri;
// lab_1910
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_18D0
    pri = 0;
    return pri;
}
// fun_1950
fun_1950() {
    var_8 = 0;
    pri = fun_18B8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1A00
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1A00
    pri = 0;
    return pri;
}
// fun_1A10
fun_1A10() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1A40
fun_1A40() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1A70
// lab_1A70
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1AB0
    OP_JUMP lab_1AE0
// lab_1AB0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1A70
// lab_1AE0
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B28
fun_1B28() {
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
// fun_1B98
fun_1B98() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_1C10()
    return pri;
}
// fun_1C10
fun_1C10() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_1C50
fun_1C50() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1C88
fun_1C88() {
    OP_JUMP lab_1CA0
// lab_1CA0
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1CE8
    OP_JUMP lab_1D18
    OP_JUMP lab_1D08
// lab_1CE8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_1D18
    pri = 0;
    return pri;
// lab_1D08
    OP_JUMP lab_1CA0
}
// fun_1D28
fun_1D28() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_1D58
fun_1D58() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1DA8
fun_1DA8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 6;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1DF8
fun_1DF8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E48
fun_1E48() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E98
fun_1E98() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 12;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1EE8
fun_1EE8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F38
fun_1F38() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 17;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F88
fun_1F88() {
    OP_CONST_S -8, -1
    var_24 = 0;
    var_32 = 0;
    pri = PokePartyGetCount(var_32, var_24)
    var_16 = pri;
}
// lab_1FE8
OP_LOAD_S_BOTH 32, -16
OP_JSGEQ lab_21E0
pri = arg_0;
switch (pri) {
// switch_2180
    case default:
    {
// switch_2180_case_default
        pri = arg_1;
        OP_ADD_P_C 1
        arg_1 = pri;
        OP_JUMP lab_1FE8
    }
    case 0x0:
    {
// switch_2180_case_0x0
        var_8 = 0;
        var_16 = 8;
        var_24 = arg_1;
        pri = PokePartyGetParam(var_24, var_16, var_8)
        OP_JNZ lab_2170
        pri = arg_1;
        return pri;
// lab_2170
        OP_JUMP switch_2180_case_default
    }
    case 0x1:
    {
// switch_2180_case_0x1
        var_8 = 0;
        var_16 = 8;
        var_24 = arg_1;
        pri = PokePartyGetParam(var_24, var_16, var_8)
        OP_JNZ lab_20D8
        var_32 = 0;
        var_40 = 2;
        var_48 = arg_1;
        pri = PokePartyGetParam(var_48, var_40, var_32)
        OP_MOVE_ALT 
        pri = 0;
        OP_XCHG 
        OP_JSLEQ lab_20D8
        pri = 1;
        OP_JUMP lab_20E0
// lab_20D8
        pri = 0;
// lab_20E0
        OP_JZER lab_2108
        pri = arg_1;
        return pri;
// lab_2108
        OP_JUMP switch_2180_case_default
    }
}
// lab_21E0
pri = var_8;
return pri;
// fun_21F8
fun_21F8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2288(var_8)
    var_24 = arg_0;
    pri = OpenWalletWindow_(var_24)
    pri = 0;
    return pri;
}
// fun_2250
fun_2250() {
    var_8 = 0;
    pri = CloseWalletWindow_(var_8)
    pri = 0;
    return pri;
}
// fun_2288
fun_2288() {
    var_8 = arg_0;
    pri = UpdateWalletWindow_(var_8)
    pri = 0;
    return pri;
}
// fun_22C0
fun_22C0() {
    var_8 = arg_0;
    pri = AddWatt_(var_8)
    return pri;
}
// fun_22F0
fun_22F0() {
    var_8 = arg_0;
    pri = ConsumeWatt_(var_8)
    return pri;
}
// fun_2320
fun_2320() {
    pri = GetWatt_()
    return pri;
}
// fun_2348
fun_2348() {
    pri = arg_6;
    OP_JNZ lab_2380
    var_8 = 0;
    pri = fun_0CD0()
// lab_2380
    pri = arg_1;
    switch (pri) {
// switch_38E8
        case default:
        {
// switch_38E8_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3C38
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3C38
            pri = 1;
            OP_JUMP lab_3C40
// lab_3C38
            pri = 0;
// lab_3C40
            OP_JZER lab_3D98
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_07C0(var_24, var_16)
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
            OP_JUMP lab_3DF8
// lab_3D98
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
// lab_3DF8
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3E58
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3EB8
// lab_3E58
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3EB8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3EB8
            pri = arg_2;
            OP_JZER lab_3EF8
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3EF8
            var_8 = 0;
            pri = fun_0D10()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_38E8_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x1:
        {
// switch_38E8_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x2:
        {
// switch_38E8_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x3:
        {
// switch_38E8_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x4:
        {
// switch_38E8_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x5:
        {
// switch_38E8_case_0x5
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38E8_case_default
        }
        case 0x6:
        {
// switch_38E8_case_0x6
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38E8_case_default
        }
        case 0x7:
        {
// switch_38E8_case_0x7
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38E8_case_default
        }
        case 0x8:
        {
// switch_38E8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x9:
        {
// switch_38E8_case_0x9
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38E8_case_default
        }
        case 0xa:
        {
// switch_38E8_case_0xa
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38E8_case_default
        }
        case 0xb:
        {
// switch_38E8_case_0xb
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38E8_case_default
        }
        case 0xc:
        {
// switch_38E8_case_0xc
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38E8_case_default
        }
        case 0xd:
        {
// switch_38E8_case_0xd
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38E8_case_default
        }
        case 0xe:
        {
// switch_38E8_case_0xe
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38E8_case_default
        }
        case 0xf:
        {
// switch_38E8_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x10:
        {
// switch_38E8_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x11:
        {
// switch_38E8_case_0x11
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38E8_case_default
        }
        case 0x12:
        {
// switch_38E8_case_0x12
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38E8_case_default
        }
        case 0x13:
        {
// switch_38E8_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x14:
        {
// switch_38E8_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x15:
        {
// switch_38E8_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x16:
        {
// switch_38E8_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x17:
        {
// switch_38E8_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x18:
        {
// switch_38E8_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x19:
        {
// switch_38E8_case_0x19
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38E8_case_default
        }
        case 0x1a:
        {
// switch_38E8_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0780(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0748(var_48, var_40)
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
            pri = fun_0A30(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_38E8_case_default
        }
        case 0x1b:
        {
// switch_38E8_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0780(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0748(var_48, var_40)
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
            pri = fun_0A30(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_38E8_case_default
        }
        case 0x1c:
        {
// switch_38E8_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0780(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0748(var_48, var_40)
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
            pri = fun_0A30(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_38E8_case_default
        }
        case 0x1d:
        {
// switch_38E8_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x1e:
        {
// switch_38E8_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x1f:
        {
// switch_38E8_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x20:
        {
// switch_38E8_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x21:
        {
// switch_38E8_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x22:
        {
// switch_38E8_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x23:
        {
// switch_38E8_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x24:
        {
// switch_38E8_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x25:
        {
// switch_38E8_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x26:
        {
// switch_38E8_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x27:
        {
// switch_38E8_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x28:
        {
// switch_38E8_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x29:
        {
// switch_38E8_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
    }
}
// fun_3F28
fun_3F28() {
    pri = arg_5;
    OP_JNZ lab_3F60
    var_8 = 0;
    pri = fun_0CD0()
// lab_3F60
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3FB0
    OP_CONST_S -8, -1
// lab_3FB0
    pri = arg_1;
    switch (pri) {
// switch_5A68
        case default:
        {
// switch_5A68_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5F10
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_07C0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5F10
            pri = 1;
            OP_JUMP lab_5F18
// lab_5F10
            pri = 0;
// lab_5F18
            OP_JZER lab_5F68
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_61C0
// lab_5F68
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5FD0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5FD0
            pri = 1;
            OP_JUMP lab_5FD8
// lab_5FD0
            pri = 0;
// lab_5FD8
            OP_JZER lab_6160
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_07C0(var_24, var_16)
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
            OP_JUMP lab_61C0
// lab_6160
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
// lab_61C0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6230
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6230
            var_8 = 0;
            pri = fun_0D10()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5A68_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x1:
        {
// switch_5A68_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x2:
        {
// switch_5A68_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x3:
        {
// switch_5A68_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x4:
        {
// switch_5A68_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x5:
        {
// switch_5A68_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0780(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_09F8(var_40)
            OP_JUMP switch_5A68_case_default
        }
        case 0x6:
        {
// switch_5A68_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x7:
        {
// switch_5A68_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x8:
        {
// switch_5A68_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x9:
        {
// switch_5A68_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0xa:
        {
// switch_5A68_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0xb:
        {
// switch_5A68_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0xc:
        {
// switch_5A68_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0xd:
        {
// switch_5A68_case_0xd
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A68_case_default
        }
        case 0xe:
        {
// switch_5A68_case_0xe
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A68_case_default
        }
        case 0xf:
        {
// switch_5A68_case_0xf
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A68_case_default
        }
        case 0x10:
        {
// switch_5A68_case_0x10
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A68_case_default
        }
        case 0x11:
        {
// switch_5A68_case_0x11
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A68_case_default
        }
        case 0x12:
        {
// switch_5A68_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x13:
        {
// switch_5A68_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x14:
        {
// switch_5A68_case_0x14
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A68_case_default
        }
        case 0x15:
        {
// switch_5A68_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x16:
        {
// switch_5A68_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x17:
        {
// switch_5A68_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x18:
        {
// switch_5A68_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x19:
        {
// switch_5A68_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x1a:
        {
// switch_5A68_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x1b:
        {
// switch_5A68_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x1c:
        {
// switch_5A68_case_0x1c
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A68_case_default
        }
        case 0x1d:
        {
// switch_5A68_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x1e:
        {
// switch_5A68_case_0x1e
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A68_case_default
        }
        case 0x1f:
        {
// switch_5A68_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x20:
        {
// switch_5A68_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x21:
        {
// switch_5A68_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x22:
        {
// switch_5A68_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x23:
        {
// switch_5A68_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x24:
        {
// switch_5A68_case_0x24
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A68_case_default
        }
        case 0x25:
        {
// switch_5A68_case_0x25
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A68_case_default
        }
        case 0x26:
        {
// switch_5A68_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x27:
        {
// switch_5A68_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x28:
        {
// switch_5A68_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x29:
        {
// switch_5A68_case_0x29
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A68_case_default
        }
        case 0x2a:
        {
// switch_5A68_case_0x2a
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A68_case_default
        }
        case 0x2b:
        {
// switch_5A68_case_0x2b
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A68_case_default
        }
        case 0x2c:
        {
// switch_5A68_case_0x2c
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A68_case_default
        }
        case 0x2d:
        {
// switch_5A68_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x2e:
        {
// switch_5A68_case_0x2e
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A68_case_default
        }
        case 0x2f:
        {
// switch_5A68_case_0x2f
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A68_case_default
        }
        case 0x30:
        {
// switch_5A68_case_0x30
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A68_case_default
        }
        case 0x31:
        {
// switch_5A68_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x32:
        {
// switch_5A68_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x33:
        {
// switch_5A68_case_0x33
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A68_case_default
        }
        case 0x34:
        {
// switch_5A68_case_0x34
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A68_case_default
        }
        case 0x35:
        {
// switch_5A68_case_0x35
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A68_case_default
        }
        case 0x36:
        {
// switch_5A68_case_0x36
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A68_case_default
        }
        case 0x37:
        {
// switch_5A68_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x38:
        {
// switch_5A68_case_0x38
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
            pri = fun_0A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A68_case_default
        }
        case 0x39:
        {
// switch_5A68_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x3a:
        {
// switch_5A68_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x3b:
        {
// switch_5A68_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x3c:
        {
// switch_5A68_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x3d:
        {
// switch_5A68_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
        case 0x3e:
        {
// switch_5A68_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0780(var_24, var_16, var_8)
            OP_JUMP switch_5A68_case_default
        }
    }
}
// fun_6260
fun_6260() {
    pri = arg_4;
    OP_JNZ lab_6298
    var_8 = 0;
    pri = fun_0CD0()
// lab_6298
    pri = arg_1;
    switch (pri) {
// switch_7670
        case default:
        {
// switch_7670_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0DE8(var_264)
            OP_JZER lab_7C38
            pri = arg_3;
            switch (pri) {
// switch_7BE0
                case default:
                {
// switch_7BE0_case_default
                    OP_JUMP lab_7EF0
// lab_7EF0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7F60
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7F60
                    var_8 = 0;
                    pri = fun_0D10()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7BE0_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7BE0_case_default
                }
                case 0x2:
                {
// switch_7BE0_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7BE0_case_default
                }
                case 0x3:
                {
// switch_7BE0_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7BE0_case_default
                }
            }
// lab_7C38
            pri = arg_1;
            OP_JZER lab_7C88
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7C88
            pri = 0;
            OP_JUMP lab_7C90
// lab_7C88
            pri = 1;
// lab_7C90
            OP_JZER lab_7CF8
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_07C0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7CF8
            pri = 1;
            OP_JUMP lab_7D00
// lab_7CF8
            pri = 0;
// lab_7D00
            OP_JZER lab_7D50
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_7EF0
// lab_7D50
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7DB8
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_7EF0
// lab_7DB8
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_07C0(var_24, var_16)
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
// switch_7670_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x1:
        {
// switch_7670_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x2:
        {
// switch_7670_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x3:
        {
// switch_7670_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x4:
        {
// switch_7670_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x5:
        {
// switch_7670_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0780(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_09F8(var_40)
            OP_JUMP switch_7670_case_default
        }
        case 0x6:
        {
// switch_7670_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x7:
        {
// switch_7670_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x8:
        {
// switch_7670_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x9:
        {
// switch_7670_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0xa:
        {
// switch_7670_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0xb:
        {
// switch_7670_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0xc:
        {
// switch_7670_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0xd:
        {
// switch_7670_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0xe:
        {
// switch_7670_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0xf:
        {
// switch_7670_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x10:
        {
// switch_7670_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x11:
        {
// switch_7670_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x12:
        {
// switch_7670_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x13:
        {
// switch_7670_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x14:
        {
// switch_7670_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x15:
        {
// switch_7670_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x16:
        {
// switch_7670_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x17:
        {
// switch_7670_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x18:
        {
// switch_7670_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x19:
        {
// switch_7670_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x1a:
        {
// switch_7670_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x1b:
        {
// switch_7670_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x1c:
        {
// switch_7670_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x1d:
        {
// switch_7670_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x1e:
        {
// switch_7670_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x1f:
        {
// switch_7670_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x20:
        {
// switch_7670_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x21:
        {
// switch_7670_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x22:
        {
// switch_7670_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x23:
        {
// switch_7670_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x24:
        {
// switch_7670_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x25:
        {
// switch_7670_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x26:
        {
// switch_7670_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x27:
        {
// switch_7670_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x28:
        {
// switch_7670_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x29:
        {
// switch_7670_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x2a:
        {
// switch_7670_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x2b:
        {
// switch_7670_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x2c:
        {
// switch_7670_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x2d:
        {
// switch_7670_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x2e:
        {
// switch_7670_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x2f:
        {
// switch_7670_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x30:
        {
// switch_7670_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x31:
        {
// switch_7670_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x32:
        {
// switch_7670_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x33:
        {
// switch_7670_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x34:
        {
// switch_7670_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x35:
        {
// switch_7670_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x36:
        {
// switch_7670_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x37:
        {
// switch_7670_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x38:
        {
// switch_7670_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x39:
        {
// switch_7670_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x3a:
        {
// switch_7670_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x3b:
        {
// switch_7670_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x3c:
        {
// switch_7670_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x3d:
        {
// switch_7670_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
        case 0x3e:
        {
// switch_7670_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0780(var_24, var_16, var_8)
            OP_JUMP switch_7670_case_default
        }
    }
}
// fun_7F90
fun_7F90() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_8090
        case default:
        {
// switch_8090_case_default
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
// switch_8090_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_8090_case_default
        }
        case 0x1:
        {
// switch_8090_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_8090_case_default
        }
        case 0x2:
        {
// switch_8090_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_8090_case_default
        }
        case 0x3:
        {
// switch_8090_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_8090_case_default
        }
    }
}
// fun_8150
fun_8150() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_81A0
// lab_81A0
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30048;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_8218
    OP_JUMP lab_8248
// lab_8218
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_81A0
// lab_8248
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_82D0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_6260(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0E48(var_56)
// lab_82D0
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_8338
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0DA8(var_24, var_16)
// lab_8338
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0DA8(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_83F8
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_07F8(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0578(var_88, var_80, var_72, var_64, var_56)
// lab_83F8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_8438
    pri = 0;
    return pri;
// lab_8438
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8580
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 30168;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0748(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_8548
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_8580
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0620(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0620(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_07F8(var_40)
    pri = 0;
    return pri;
// lab_8548
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0DA8(var_16, var_8)
}
// fun_8608
fun_8608() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_86A0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_07F8(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_2348(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_86A0
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_87F8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_8760
    var_24 = 30304;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_8760
    pri = 1;
    OP_JUMP lab_8768
// lab_87F8
    pri = 0;
    return pri;
// lab_8760
    pri = 0;
// lab_8768
    OP_JZER lab_87F8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_07F8(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_2348(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_8808
fun_8808() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_8608(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_8890(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_8890
fun_8890() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_8BB8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_88F8
fun_88F8() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_8968
    OP_CONST_S -8, 1
// lab_8968
    pri = arg_0;
    OP_JNZ lab_8988
    OP_ZERO_P_S -8
// lab_8988
    pri = var_8;
    OP_JZER lab_8A10
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_8A10
    pri = 0;
    return pri;
}
// fun_8A28
fun_8A28() {
    var_8 = 30408;
    var_16 = 8;
    pri = fun_1C50(var_8)
    var_24 = 0;
    pri = fun_1C88()
    var_32 = arg_0;
    var_40 = 8;
    pri = fun_22C0(var_32)
    var_48 = 1;
    var_56 = 8;
    pri = fun_2288(var_48)
    var_64 = 30584;
    pri = SoundPostEvent(var_64)
    var_72 = 0;
    var_80 = 8;
    pri = fun_1D58(var_72)
    var_88 = 0;
    var_96 = 0;
    var_104 = arg_0;
    var_112 = 2;
    pri = WordSetNumber(var_112, var_104, var_96, var_88)
    var_120 = 3;
    var_128 = 0;
    var_136 = 3920114689893802877;
    var_144 = 24;
    pri = fun_17F0(var_136, var_128, var_120)
    var_152 = 1;
    var_160 = 8;
    pri = fun_1950(var_152)
    var_168 = 0;
    pri = fun_1A10()
    var_176 = 0;
    pri = fun_1D28()
    pri = 0;
    return pri;
}
// fun_8BB8
fun_8BB8() {
    var_8 = 30776;
    var_16 = 8;
    pri = fun_1C50(var_8)
    var_24 = 0;
    pri = fun_1C88()
    pri = arg_3;
    OP_JNZ lab_8CD8
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_8CA0
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_8D48(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_8CC8
// lab_8CD8
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8EE8(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_8CA0
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8E10(var_16, var_8)
// lab_8CC8
    OP_JUMP lab_8D20
// lab_8D20
    var_8 = 0;
    pri = fun_1D28()
    pri = 0;
    return pri;
}
// fun_8D48
fun_8D48() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8EE8(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_8DF8
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_8DF8
    pri = 0;
    return pri;
}
// fun_8E10
fun_8E10() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_1DF8(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_17F0(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1950(var_72)
    var_88 = 0;
    pri = fun_1A10()
    var_96 = 0;
    var_104 = 8;
    pri = fun_1D58(var_96)
    pri = 0;
    return pri;
}
// fun_8EE8
fun_8EE8() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8F30
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_91F0(var_8)
// lab_8F30
    pri = arg_4;
    OP_JNZ lab_8F98
    var_8 = 0;
    var_16 = 8;
    pri = fun_1D58(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1DF8(var_40, var_32, var_24)
// lab_8F98
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_9038
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_1E48(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_17F0(var_56, var_48, var_40)
    OP_JUMP lab_9128
// lab_9038
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_90F0
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_90F0
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_90F0
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_17F0(var_24, var_16, var_8)
// lab_9128
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_9168
    var_8 = 0;
    var_16 = 8;
    pri = fun_0468(var_8)
// lab_9168
    var_8 = 1;
    var_16 = 8;
    pri = fun_1950(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_93F8(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_88F8(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_91F0
fun_91F0() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_9250
    var_16 = 30936;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_9250
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_9390
        case default:
        {
// switch_9390_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_9380
            var_16 = 31480;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_9380
            OP_JUMP lab_93C8
// lab_93C8
            var_8 = 31696;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_9390_case_0x1
            var_8 = 31152;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_93C8
        }
        case 0x2:
        {
// switch_9390_case_0x2
            var_8 = 31280;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_93C8
        }
    }
}
// fun_93F8
fun_93F8() {
    pri = arg_2;
    OP_JNZ lab_94E0
    var_8 = 0;
    var_16 = 8;
    pri = fun_1D58(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1DF8(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_1EE8(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_94E0
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_17F0(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1950(var_40)
    var_56 = 0;
    pri = fun_1A10()
    pri = 0;
    return pri;
}
// fun_9558
fun_9558() {
    pri = g_mode;
    switch (pri) {
// switch_9618
        case default:
        {
// switch_9618_case_default
            pri = CommandNOP()
            OP_JUMP lab_9660
// lab_9660
            pri = 0;
            return pri;
        }
        case 0xc8dbc88c3475006a:
        {
// switch_9618_case_0xc8dbc88c3475006a
            var_8 = 0;
            pri = fun_AA58()
            OP_JUMP lab_9660
        }
        case 0x0:
        {
// switch_9618_case_0x0
            var_8 = 0;
            pri = fun_9670()
            OP_JUMP lab_9660
        }
        case 0x6def55b1a07598d0:
        {
// switch_9618_case_0x6def55b1a07598d0
            var_8 = 0;
            pri = fun_D3C8()
            OP_JUMP lab_9660
        }
    }
}
// fun_9670
fun_9670() {
    pri = 0;
    return pri;
}
// fun_9688
fun_9688() {
    pri = arg_1;
    OP_JNZ lab_96C8
    pri = GetTargetFieldObjectID()
    arg_1 = pri;
// lab_96C8
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = arg_0;
    var_56 = arg_1;
    var_64 = 56;
    pri = fun_16F0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9728
fun_9728() {
    pri = arg_0;
    alt = 4294967295;
    OP_AND 
    return pri;
}
// fun_9758
fun_9758() {
    pri = arg_0;
    switch (pri) {
// switch_9900
        case default:
        {
// switch_9900_case_default
            var_8 = 32048;
            pri = GetFnvHash64(var_8)
            return pri;
        }
        case 0x89e16715ac0db1cd:
        {
// switch_9900_case_0x89e16715ac0db1cd
            var_8 = 31904;
            pri = GetFnvHash64(var_8)
            return pri;
            OP_JUMP switch_9900_case_default
        }
        case 0xb11749f3d75e6039:
        {
// switch_9900_case_0xb11749f3d75e6039
            var_8 = 31952;
            pri = GetFnvHash64(var_8)
            return pri;
            OP_JUMP switch_9900_case_default
        }
        case 0xb3ddb27c07061dac:
        {
// switch_9900_case_0xb3ddb27c07061dac
            var_8 = 32024;
            pri = GetFnvHash64(var_8)
            return pri;
            OP_JUMP switch_9900_case_default
        }
        case 0xce5ecefa121b8925:
        {
// switch_9900_case_0xce5ecefa121b8925
            var_8 = 32000;
            pri = GetFnvHash64(var_8)
            return pri;
            OP_JUMP switch_9900_case_default
        }
        case 0x2ca50a74b8ce0a81:
        {
// switch_9900_case_0x2ca50a74b8ce0a81
            var_8 = 31880;
            pri = GetFnvHash64(var_8)
            return pri;
            OP_JUMP switch_9900_case_default
        }
        case 0x60ebe4ada01268db:
        {
// switch_9900_case_0x60ebe4ada01268db
            var_8 = 31928;
            pri = GetFnvHash64(var_8)
            return pri;
            OP_JUMP switch_9900_case_default
        }
        case 0x7d17895271e40ff4:
        {
// switch_9900_case_0x7d17895271e40ff4
            var_8 = 31976;
            pri = GetFnvHash64(var_8)
            return pri;
            OP_JUMP switch_9900_case_default
        }
    }
}
// fun_99B0
fun_99B0() {
    pri = arg_0;
    switch (pri) {
// switch_9B90
        case default:
        {
// switch_9B90_case_default
            pri = 0;
            return pri;
        }
        case 0x89e16715ac0db1cd:
        {
// switch_9B90_case_0x89e16715ac0db1cd
            var_8 = 6037425589530409267;
            pri = FlagGet(var_8)
            return pri;
            OP_JUMP switch_9B90_case_default
        }
        case 0xb11749f3d75e6039:
        {
// switch_9B90_case_0xb11749f3d75e6039
            var_8 = 6037432186600178533;
            pri = FlagGet(var_8)
            return pri;
            OP_JUMP switch_9B90_case_default
        }
        case 0xb3ddb27c07061dac:
        {
// switch_9B90_case_0xb3ddb27c07061dac
            var_8 = 6037428888065293900;
            pri = FlagGet(var_8)
            return pri;
            OP_JUMP switch_9B90_case_default
        }
        case 0xce5ecefa121b8925:
        {
// switch_9B90_case_0xce5ecefa121b8925
            var_8 = 6037429987576922111;
            pri = FlagGet(var_8)
            return pri;
            OP_JUMP switch_9B90_case_default
        }
        case 0x2ca50a74b8ce0a81:
        {
// switch_9B90_case_0x2ca50a74b8ce0a81
            var_8 = 6037426689042037478;
            pri = FlagGet(var_8)
            return pri;
            OP_JUMP switch_9B90_case_default
        }
        case 0x60ebe4ada01268db:
        {
// switch_9B90_case_0x60ebe4ada01268db
            var_8 = 6037424490018781056;
            pri = FlagGet(var_8)
            return pri;
            OP_JUMP switch_9B90_case_default
        }
        case 0x7d17895271e40ff4:
        {
// switch_9B90_case_0x7d17895271e40ff4
            var_8 = 6037431087088550322;
            pri = FlagGet(var_8)
            return pri;
            OP_JUMP switch_9B90_case_default
        }
    }
}
// fun_9C28
fun_9C28() {
    pri = arg_0;
    switch (pri) {
// switch_9DD0
        case default:
        {
// switch_9DD0_case_default
            pri = 0;
            return pri;
        }
        case 0x89e16715ac0db1cd:
        {
// switch_9DD0_case_0x89e16715ac0db1cd
            var_8 = 6037425589530409267;
            pri = FlagSet(var_8)
            OP_JUMP switch_9DD0_case_default
        }
        case 0xb11749f3d75e6039:
        {
// switch_9DD0_case_0xb11749f3d75e6039
            var_8 = 6037432186600178533;
            pri = FlagSet(var_8)
            OP_JUMP switch_9DD0_case_default
        }
        case 0xb3ddb27c07061dac:
        {
// switch_9DD0_case_0xb3ddb27c07061dac
            var_8 = 6037428888065293900;
            pri = FlagSet(var_8)
            OP_JUMP switch_9DD0_case_default
        }
        case 0xce5ecefa121b8925:
        {
// switch_9DD0_case_0xce5ecefa121b8925
            var_8 = 6037429987576922111;
            pri = FlagSet(var_8)
            OP_JUMP switch_9DD0_case_default
        }
        case 0x2ca50a74b8ce0a81:
        {
// switch_9DD0_case_0x2ca50a74b8ce0a81
            var_8 = 6037426689042037478;
            pri = FlagSet(var_8)
            OP_JUMP switch_9DD0_case_default
        }
        case 0x60ebe4ada01268db:
        {
// switch_9DD0_case_0x60ebe4ada01268db
            var_8 = 6037424490018781056;
            pri = FlagSet(var_8)
            OP_JUMP switch_9DD0_case_default
        }
        case 0x7d17895271e40ff4:
        {
// switch_9DD0_case_0x7d17895271e40ff4
            var_8 = 6037431087088550322;
            pri = FlagSet(var_8)
            OP_JUMP switch_9DD0_case_default
        }
    }
}
// fun_9E68
fun_9E68() {
    pri = arg_0;
    var_8 = pri;
    var_16 = 32056;
    pri = GetFnvHash64(var_16)
    var_24 = pri;
    var_32 = 8;
    pri = fun_9728(var_24)
    OP_POP_ALT 
    OP_JNEQ lab_9EF0
    pri = 8603974743431071371;
    return pri;
// lab_9EF0
    pri = arg_0;
    var_8 = pri;
    var_16 = 32080;
    pri = GetFnvHash64(var_16)
    var_24 = pri;
    var_32 = 8;
    pri = fun_9728(var_24)
    OP_POP_ALT 
    OP_JNEQ lab_9F70
    pri = 8603979141477584215;
    return pri;
// lab_9F70
    pri = arg_0;
    var_8 = pri;
    var_16 = 32104;
    pri = GetFnvHash64(var_16)
    var_24 = pri;
    var_32 = 8;
    pri = fun_9728(var_24)
    OP_POP_ALT 
    OP_JNEQ lab_9FF0
    pri = 8603976942454327793;
    return pri;
// lab_9FF0
    pri = arg_0;
    var_8 = pri;
    var_16 = 32128;
    pri = GetFnvHash64(var_16)
    var_24 = pri;
    var_32 = 8;
    pri = fun_9728(var_24)
    OP_POP_ALT 
    OP_JNEQ lab_A070
    pri = 8603965947338045683;
    return pri;
// lab_A070
    pri = arg_0;
    var_8 = pri;
    var_16 = 32152;
    pri = GetFnvHash64(var_16)
    var_24 = pri;
    var_32 = 8;
    pri = fun_9728(var_24)
    OP_POP_ALT 
    OP_JNEQ lab_A0F0
    pri = 8605954963873100932;
    return pri;
// lab_A0F0
    pri = arg_0;
    var_8 = pri;
    var_16 = 32176;
    pri = GetFnvHash64(var_16)
    var_24 = pri;
    var_32 = 8;
    pri = fun_9728(var_24)
    OP_POP_ALT 
    OP_JNEQ lab_A170
    pri = 8606918136059224543;
    return pri;
// lab_A170
    pri = arg_0;
    var_8 = pri;
    var_16 = 32200;
    pri = GetFnvHash64(var_16)
    var_24 = pri;
    var_32 = 8;
    pri = fun_9728(var_24)
    OP_POP_ALT 
    OP_JNEQ lab_A1F0
    pri = 8606917036547596332;
    return pri;
// lab_A1F0
    pri = -1;
    return pri;
}
// fun_A200
fun_A200() {
    OP_CONST_S -8, 50
    pri = 32224;
    OP_ADDR_ALT -408
    OP_MOVS 400
    var_424 = 6219757071380767157;
    pri = WorkGet(var_424)
    var_416 = pri;
    pri = arg_0;
    switch (pri) {
// switch_A600
        case default:
        {
// switch_A600_case_default
            OP_ADDR_P_PRI -408
            OP_LOAD_I 
            return pri;
        }
        case 0x89e16715ac0db1cd:
        {
// switch_A600_case_0x89e16715ac0db1cd
            OP_ADDR_P_PRI -408
            var_8 = pri;
            pri = var_416;
            OP_ADD_P_C 7
            OP_MOVE_ALT 
            pri = var_8;
            OP_SDIV_ALT 
            OP_MOVE_PRI 
            OP_POP_ALT 
            OP_IDXADDR_P_B 3
            OP_LOAD_I 
            return pri;
            OP_JUMP switch_A600_case_default
        }
        case 0xb11749f3d75e6039:
        {
// switch_A600_case_0xb11749f3d75e6039
            OP_ADDR_P_PRI -408
            var_8 = pri;
            pri = var_416;
            OP_ADD_P_C 21
            OP_MOVE_ALT 
            pri = var_8;
            OP_SDIV_ALT 
            OP_MOVE_PRI 
            OP_POP_ALT 
            OP_IDXADDR_P_B 3
            OP_LOAD_I 
            return pri;
            OP_JUMP switch_A600_case_default
        }
        case 0xb3ddb27c07061dac:
        {
// switch_A600_case_0xb3ddb27c07061dac
            OP_ADDR_P_PRI -408
            var_8 = pri;
            pri = var_416;
            OP_ADD_P_C 42
            OP_MOVE_ALT 
            pri = var_8;
            OP_SDIV_ALT 
            OP_MOVE_PRI 
            OP_POP_ALT 
            OP_IDXADDR_P_B 3
            OP_LOAD_I 
            return pri;
            OP_JUMP switch_A600_case_default
        }
        case 0xce5ecefa121b8925:
        {
// switch_A600_case_0xce5ecefa121b8925
            OP_ADDR_P_PRI -408
            var_8 = pri;
            pri = var_416;
            OP_ADD_P_C 35
            OP_MOVE_ALT 
            pri = var_8;
            OP_SDIV_ALT 
            OP_MOVE_PRI 
            OP_POP_ALT 
            OP_IDXADDR_P_B 3
            OP_LOAD_I 
            return pri;
            OP_JUMP switch_A600_case_default
        }
        case 0x2ca50a74b8ce0a81:
        {
// switch_A600_case_0x2ca50a74b8ce0a81
            OP_ADDR_P_PRI -408
            var_8 = pri;
            pri = var_416;
            OP_ZERO_ALT 
            OP_ADD 
            OP_MOVE_ALT 
            pri = var_8;
            OP_SDIV_ALT 
            OP_MOVE_PRI 
            OP_POP_ALT 
            OP_IDXADDR_P_B 3
            OP_LOAD_I 
            return pri;
            OP_JUMP switch_A600_case_default
        }
        case 0x60ebe4ada01268db:
        {
// switch_A600_case_0x60ebe4ada01268db
            OP_ADDR_P_PRI -408
            var_8 = pri;
            pri = var_416;
            OP_ADD_P_C 14
            OP_MOVE_ALT 
            pri = var_8;
            OP_SDIV_ALT 
            OP_MOVE_PRI 
            OP_POP_ALT 
            OP_IDXADDR_P_B 3
            OP_LOAD_I 
            return pri;
            OP_JUMP switch_A600_case_default
        }
        case 0x7d17895271e40ff4:
        {
// switch_A600_case_0x7d17895271e40ff4
            OP_ADDR_P_PRI -408
            var_8 = pri;
            pri = var_416;
            OP_ADD_P_C 28
            OP_MOVE_ALT 
            pri = var_8;
            OP_SDIV_ALT 
            OP_MOVE_PRI 
            OP_POP_ALT 
            OP_IDXADDR_P_B 3
            OP_LOAD_I 
            return pri;
            OP_JUMP switch_A600_case_default
        }
    }
}
// fun_A6A8
fun_A6A8() {
    pri = arg_0;
    var_8 = pri;
    var_16 = 32624;
    pri = GetFnvHash64(var_16)
    var_24 = pri;
    var_32 = 8;
    pri = fun_9728(var_24)
    OP_POP_ALT 
    OP_JNEQ lab_A730
    pri = 3216989005259082369;
    return pri;
// lab_A730
    pri = arg_0;
    var_8 = pri;
    var_16 = 32648;
    pri = GetFnvHash64(var_16)
    var_24 = pri;
    var_32 = 8;
    pri = fun_9728(var_24)
    OP_POP_ALT 
    OP_JNEQ lab_A7B0
    pri = -8511408477974974003;
    return pri;
// lab_A7B0
    pri = arg_0;
    var_8 = pri;
    var_16 = 32672;
    pri = GetFnvHash64(var_16)
    var_24 = pri;
    var_32 = 8;
    pri = fun_9728(var_24)
    OP_POP_ALT 
    OP_JNEQ lab_A830
    pri = 6983927081534122203;
    return pri;
// lab_A830
    pri = arg_0;
    var_8 = pri;
    var_16 = 32696;
    pri = GetFnvHash64(var_16)
    var_24 = pri;
    var_32 = 8;
    pri = fun_9728(var_24)
    OP_POP_ALT 
    OP_JNEQ lab_A8B0
    pri = -5685994692892794823;
    return pri;
// lab_A8B0
    pri = arg_0;
    var_8 = pri;
    var_16 = 32720;
    pri = GetFnvHash64(var_16)
    var_24 = pri;
    var_32 = 8;
    pri = fun_9728(var_24)
    OP_POP_ALT 
    OP_JNEQ lab_A930
    pri = 9013824166396432372;
    return pri;
// lab_A930
    pri = arg_0;
    var_8 = pri;
    var_16 = 32744;
    pri = GetFnvHash64(var_16)
    var_24 = pri;
    var_32 = 8;
    pri = fun_9728(var_24)
    OP_POP_ALT 
    OP_JNEQ lab_A9B0
    pri = -3576193480644654811;
    return pri;
// lab_A9B0
    pri = arg_0;
    var_8 = pri;
    var_16 = 32768;
    pri = GetFnvHash64(var_16)
    var_24 = pri;
    var_32 = 8;
    pri = fun_9728(var_24)
    OP_POP_ALT 
    OP_JNEQ lab_AA30
    pri = -5486032525303865940;
    return pri;
// lab_AA30
    var_8 = 32792;
    pri = GetFnvHash64(var_8)
    return pri;
}
// fun_AA58
fun_AA58() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_24 = 1081;
    pri = ItemGetNum(var_24)
    OP_JNZ lab_AB08
    var_32 = 1266;
    pri = ItemGetNum(var_32)
    OP_JNZ lab_AB08
    pri = 0;
    OP_JUMP lab_AB10
// lab_AB08
    pri = 1;
// lab_AB10
    var_16 = pri;
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = var_8;
    var_56 = 48;
    pri = fun_7F90(var_48, var_40, var_32, var_24, var_16, var_8)
    pri = var_16;
    OP_JZER lab_AB98
    var_64 = var_8;
    var_72 = 8;
    pri = fun_9C28(var_64)
// lab_AB98
    var_16 = var_8;
    var_24 = 8;
    pri = fun_99B0(var_16)
    var_24 = pri;
    pri = var_16;
    OP_JZER lab_AC30
    var_32 = -479110991571674100;
    pri = FlagGet(var_32)
    OP_JNZ lab_AC30
    pri = 1;
    OP_JUMP lab_AC38
// lab_AC30
    pri = 0;
// lab_AC38
    OP_JZER lab_ACD8
    var_8 = -479110991571674100;
    pri = FlagSet(var_8)
    var_16 = 0;
    var_24 = -3573633901363760528;
    var_32 = 16;
    pri = fun_9688(var_24, var_16)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1950(var_40)
    var_56 = 0;
    pri = fun_1A10()
// lab_ACD8
    var_8 = 0;
    var_16 = -3573631702340504106;
    var_24 = 16;
    pri = fun_9688(var_16, var_8)
    var_32 = 0;
    var_40 = 8689267468221037072;
    var_48 = 3;
    var_56 = 24;
    pri = fun_1A40(var_48, var_40, var_32)
    var_64 = -479110991571674100;
    pri = FlagGet(var_64)
    OP_JZER lab_ADA8
    pri = var_24;
    OP_JZER lab_ADA8
    pri = 1;
    OP_JUMP lab_ADB0
// lab_ADA8
    pri = 0;
// lab_ADB0
    OP_JZER lab_ADF8
    var_8 = 0;
    var_16 = 8689272965779178127;
    var_24 = 0;
    var_32 = 24;
    pri = fun_1A40(var_24, var_16, var_8)
// lab_ADF8
    pri = var_16;
    OP_JZER lab_AEE0
    var_8 = 0;
    var_16 = 8689274065290806338;
    var_24 = 1;
    var_32 = 24;
    pri = fun_1A40(var_24, var_16, var_8)
    var_48 = -6267628599641695783;
    pri = WorkGet(var_48)
    var_32 = pri;
    pri = var_32;
    alt = 64;
    OP_JEQ lab_AED8
    var_56 = 0;
    var_64 = 8689268567732665283;
    var_72 = 2;
    var_80 = 24;
    pri = fun_1A40(var_72, var_64, var_56)
// lab_AEE0
    var_8 = 0;
    var_16 = 8689275164802434549;
    var_24 = 4;
    var_32 = 24;
    pri = fun_1A40(var_24, var_16, var_8)
    var_48 = 0;
    var_56 = 1;
    var_64 = 0;
    var_72 = 1;
    var_80 = 32;
    pri = fun_1B28(var_72, var_64, var_56, var_48)
    var_32 = pri;
    var_88 = 0;
    pri = fun_1A10()
    pri = var_32;
    switch (pri) {
// switch_B058
        case default:
        {
// switch_B058_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_B058_case_0x0
            var_8 = 0;
            pri = fun_B0D8()
            OP_JUMP switch_B058_case_default
        }
        case 0x1:
        {
// switch_B058_case_0x1
            var_8 = 0;
            pri = fun_BDE0()
            OP_JUMP switch_B058_case_default
        }
        case 0x2:
        {
// switch_B058_case_0x2
            var_8 = 0;
            pri = fun_CD28()
            OP_JUMP switch_B058_case_default
        }
        case 0x3:
        {
// switch_B058_case_0x3
            var_8 = 0;
            pri = fun_CC78()
            OP_JUMP switch_B058_case_default
        }
        case 0x4:
        {
// switch_B058_case_0x4
            var_8 = 0;
            pri = fun_D2E0()
            OP_JUMP switch_B058_case_default
        }
    }
// lab_AED8
}
// fun_B0D8
fun_B0D8() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    pri = 32800;
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_16 = pri;
    var_24 = 33024;
    pri = GetFnvHash64(var_24)
    OP_POP_ALT 
    OP_STOR_I 
    pri = 32800;
    OP_ADD_P_C 8
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_32 = pri;
    var_40 = 33048;
    pri = GetFnvHash64(var_40)
    OP_POP_ALT 
    OP_STOR_I 
    pri = 32800;
    OP_ADD_P_C 16
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_48 = pri;
    var_56 = 33072;
    pri = GetFnvHash64(var_56)
    OP_POP_ALT 
    OP_STOR_I 
    pri = 32800;
    OP_ADD_P_C 24
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_64 = pri;
    var_72 = 33096;
    pri = GetFnvHash64(var_72)
    OP_POP_ALT 
    OP_STOR_I 
    pri = 32800;
    OP_ADD_P_C 32
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_80 = pri;
    var_88 = 33120;
    pri = GetFnvHash64(var_88)
    OP_POP_ALT 
    OP_STOR_I 
    pri = 32800;
    OP_ADD_P_C 40
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_96 = pri;
    var_104 = 33144;
    pri = GetFnvHash64(var_104)
    OP_POP_ALT 
    OP_STOR_I 
    pri = 32800;
    OP_ADD_P_C 48
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_112 = pri;
    var_120 = 33168;
    pri = GetFnvHash64(var_120)
    OP_POP_ALT 
    OP_STOR_I 
    pri = CommandNOP()
    var_136 = var_8;
    var_144 = 8;
    pri = fun_9758(var_136)
    var_16 = pri;
    var_152 = var_16;
    pri = RotomCircuitGetMilestoneNameHases(var_152)
    pri = 0;
    OP_ADDR_ALT -72
    OP_FILL 56
    OP_ADDR_P_PRI -72
    var_216 = pri;
    var_224 = 0;
    pri = TempWorkGet(var_224)
    OP_POP_ALT 
    OP_STOR_I 
    OP_ADDR_P_PRI -72
    OP_ADD_P_C 8
    var_232 = pri;
    var_240 = 1;
    pri = TempWorkGet(var_240)
    OP_POP_ALT 
    OP_STOR_I 
    OP_ADDR_P_PRI -72
    OP_ADD_P_C 16
    var_248 = pri;
    var_256 = 2;
    pri = TempWorkGet(var_256)
    OP_POP_ALT 
    OP_STOR_I 
    OP_ADDR_P_PRI -72
    OP_ADD_P_C 24
    var_264 = pri;
    var_272 = 3;
    pri = TempWorkGet(var_272)
    OP_POP_ALT 
    OP_STOR_I 
    OP_ADDR_P_PRI -72
    OP_ADD_P_C 32
    var_280 = pri;
    var_288 = 4;
    pri = TempWorkGet(var_288)
    OP_POP_ALT 
    OP_STOR_I 
    OP_ADDR_P_PRI -72
    OP_ADD_P_C 40
    var_296 = pri;
    var_304 = 5;
    pri = TempWorkGet(var_304)
    OP_POP_ALT 
    OP_STOR_I 
    OP_ADDR_P_PRI -72
    OP_ADD_P_C 48
    var_312 = pri;
    var_320 = 6;
    pri = TempWorkGet(var_320)
    OP_POP_ALT 
    OP_STOR_I 
    var_328 = 0;
    var_336 = -3573626204782363051;
    var_344 = 16;
    pri = fun_9688(var_336, var_328)
    OP_ZERO_P_S -80
    OP_JUMP lab_B680
// lab_B680
    pri = var_80;
    alt = 7;
    OP_JSGEQ lab_BA88
    OP_ADDR_P_ALT -72
    pri = var_80;
    OP_LIDX_P_B 3
    var_8 = pri;
    var_16 = 33192;
    pri = GetFnvHash64(var_16)
    OP_POP_ALT 
    OP_JNEQ lab_B708
    OP_JUMP lab_B678
// lab_BA88
    arg_-3 = 0;
    var_8 = -464412656891693873;
    var_16 = 8;
    var_24 = 24;
    pri = fun_1A40(var_16, var_8, var_0)
    var_40 = 0;
    var_48 = 1;
    var_56 = 0;
    var_64 = 1;
    var_72 = 32;
    pri = fun_1B28(var_64, var_56, var_48, var_40)
    var_80 = pri;
    pri = var_80;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_BBE8
    var_80 = 0;
    var_88 = -3573627304293991262;
    var_96 = 16;
    pri = fun_9688(var_88, var_80)
    var_104 = 1;
    var_112 = 8;
    pri = fun_1950(var_104)
    var_120 = 0;
    pri = fun_1A10()
    var_128 = 0;
    var_136 = 0;
    var_144 = 0;
    var_152 = var_8;
    var_160 = 32;
    pri = fun_8150(var_152, var_144, var_136, var_128)
    pri = 0;
    return pri;
// lab_BBE8
    var_8 = 0;
    var_16 = -1777639332790013915;
    var_24 = 16;
    pri = fun_9688(var_16, var_8)
    var_32 = 1;
    var_40 = 8;
    pri = fun_1950(var_32)
    var_48 = 0;
    pri = fun_1A10()
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = var_8;
    var_88 = 32;
    pri = fun_8150(var_80, var_72, var_64, var_56)
    pri = 32800;
    var_104 = pri;
    pri = var_80;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_LOAD_I 
    var_88 = pri;
    var_112 = var_16;
    var_120 = 8;
    pri = fun_9728(var_112)
    var_128 = pri;
    var_136 = 8139407840767452972;
    pri = WorkSet(var_136, var_128)
    var_144 = var_88;
    var_152 = 8;
    pri = fun_9728(var_144)
    var_160 = pri;
    var_168 = -6981382308142934039;
    pri = WorkSet(var_168, var_160)
    var_176 = var_88;
    var_184 = var_16;
    pri = CallRotomCircuit(var_184, var_176)
    pri = CommandNOP()
    pri = 0;
    return pri;
// lab_B708
    OP_ZERO_P_S -88
    OP_JUMP lab_B730
// lab_B730
    pri = var_88;
    alt = 7;
    OP_JSGEQ lab_BA70
    OP_ADDR_P_ALT -72
    pri = var_80;
    OP_LIDX_P_B 3
    var_8 = pri;
    alt = 32800;
    pri = var_88;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_LOAD_I 
    OP_POP_ALT 
    OP_JNEQ lab_B810
    OP_ADDR_P_ALT -72
    pri = var_80;
    OP_LIDX_P_B 3
    OP_MOVE_ALT 
    pri = var_16;
    OP_JEQ lab_B810
    pri = 1;
    OP_JUMP lab_B818
// lab_BA70
    OP_JUMP lab_B678
// lab_B678
    OP_INC_P_S -80
// lab_B810
    pri = 0;
// lab_B818
    OP_JZER lab_BA60
    OP_ADDR_P_ALT -72
    pri = var_80;
    OP_LIDX_P_B 3
    var_16 = pri;
    var_24 = 8;
    pri = fun_9728(var_16)
    var_32 = pri;
    var_40 = 8;
    pri = fun_A6A8(var_32)
    var_96 = pri;
    var_56 = var_96;
    var_64 = 8;
    pri = fun_99B0(var_56)
    var_104 = pri;
    pri = var_104;
    OP_JNZ lab_B8F0
    OP_JUMP lab_B728
// lab_BA60
    OP_JUMP lab_B728
// lab_B728
    OP_INC_P_S -88
// lab_B8F0
    alt = 32800;
    pri = var_88;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_LOAD_I 
    var_16 = pri;
    var_24 = var_16;
    pri = RotomCircuitCourseTime(var_24, var_16)
    var_112 = pri;
    var_32 = 0;
    var_40 = 0;
    var_48 = var_112;
    pri = var_88;
    OP_ADD_P_C 1
    var_56 = pri;
    pri = WordSetNumber(var_56, var_48, var_40, var_32)
    var_64 = 0;
    alt = 32800;
    pri = var_88;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_72 = pri;
    alt = 32800;
    pri = var_88;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 16
    OP_LOAD_I 
    var_80 = pri;
    var_88 = 24;
    pri = fun_1A40(var_80, var_72, var_64)
}
// fun_BDE0
fun_BDE0() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_24 = 0;
    var_32 = 0;
    var_40 = 16;
    pri = fun_1F88(var_32, var_24)
    var_16 = pri;
    var_48 = var_16;
    var_56 = 6;
    var_64 = 16;
    pri = fun_1F38(var_56, var_48)
    var_72 = 0;
    var_80 = -3573629503317247684;
    var_88 = 16;
    pri = fun_9688(var_80, var_72)
    var_96 = 1;
    var_104 = 8;
    pri = fun_1950(var_96)
    var_112 = 0;
    pri = fun_1A10()
    var_128 = 0;
    var_136 = 6;
    var_144 = var_16;
    pri = PokePartyGetParam(var_144, var_136, var_128)
    var_24 = pri;
    var_160 = 0;
    var_168 = 7;
    var_176 = var_16;
    pri = PokePartyGetParam(var_176, var_168, var_160)
    var_32 = pri;
    OP_LOAD_S_BOTH -32, -24
    OP_JNEQ lab_C1F0
    var_184 = var_24;
    var_192 = 4;
    var_200 = 16;
    pri = fun_1DA8(var_192, var_184)
    var_208 = 0;
    var_216 = -3222503928425732337;
    var_224 = 16;
    pri = fun_9688(var_216, var_208)
    var_232 = 0;
    var_240 = 1313223080353178042;
    var_248 = 0;
    var_256 = 24;
    pri = fun_1A40(var_248, var_240, var_232)
    var_264 = 0;
    var_272 = 1313221980841549831;
    var_280 = 1;
    var_288 = 24;
    pri = fun_1A40(var_280, var_272, var_264)
    var_296 = 0;
    var_304 = -8540631708872716343;
    var_312 = 2;
    var_320 = 24;
    pri = fun_1A40(var_312, var_304, var_296)
    var_336 = 0;
    var_344 = 1;
    var_352 = 0;
    var_360 = 1;
    var_368 = 32;
    pri = fun_1B28(var_360, var_352, var_344, var_336)
    var_40 = pri;
    var_376 = 0;
    pri = fun_1A10()
    pri = var_40;
    switch (pri) {
// switch_C190
        case default:
        {
// switch_C190_case_default
            OP_JUMP lab_C520
// lab_C520
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_C190_case_0x0
            var_8 = 0;
            var_16 = var_24;
            var_24 = 16;
            pri = fun_C538(var_16, var_8)
            OP_JUMP switch_C190_case_default
        }
        case 0x1:
        {
// switch_C190_case_0x1
            var_8 = 0;
            var_16 = 99;
            var_24 = 16;
            pri = fun_C538(var_16, var_8)
            OP_JUMP switch_C190_case_default
        }
        case 0x2:
        {
// switch_C190_case_0x2
            var_8 = 0;
            pri = fun_C880()
            OP_JUMP switch_C190_case_default
        }
    }
// lab_C1F0
    var_8 = var_16;
    var_16 = 6;
    var_24 = 16;
    pri = fun_1F38(var_16, var_8)
    var_32 = var_24;
    var_40 = 4;
    var_48 = 16;
    pri = fun_1DA8(var_40, var_32)
    var_56 = var_32;
    var_64 = 5;
    var_72 = 16;
    pri = fun_1DA8(var_64, var_56)
    var_80 = 0;
    var_88 = -3222509425983873392;
    var_96 = 16;
    pri = fun_9688(var_88, var_80)
    var_104 = 0;
    var_112 = 1313223080353178042;
    var_120 = 0;
    var_128 = 24;
    pri = fun_1A40(var_120, var_112, var_104)
    var_136 = 0;
    var_144 = 1313224179864806253;
    var_152 = 1;
    var_160 = 24;
    pri = fun_1A40(var_152, var_144, var_136)
    var_168 = 0;
    var_176 = 1313221980841549831;
    var_184 = 2;
    var_192 = 24;
    pri = fun_1A40(var_184, var_176, var_168)
    var_200 = 0;
    var_208 = 1313216483283408776;
    var_216 = 3;
    var_224 = 24;
    pri = fun_1A40(var_216, var_208, var_200)
    var_240 = 0;
    var_248 = 1;
    var_256 = 0;
    var_264 = 1;
    var_272 = 32;
    pri = fun_1B28(var_264, var_256, var_248, var_240)
    var_40 = pri;
    var_280 = 0;
    pri = fun_1A10()
    pri = var_40;
    switch (pri) {
// switch_C4C0
        case default:
        {
// switch_C4C0_case_default
        }
        case 0x0:
        {
// switch_C4C0_case_0x0
            var_8 = 1;
            var_16 = var_24;
            var_24 = 16;
            pri = fun_C538(var_16, var_8)
            OP_JUMP switch_C4C0_case_default
        }
        case 0x1:
        {
// switch_C4C0_case_0x1
            var_8 = 1;
            var_16 = var_32;
            var_24 = 16;
            pri = fun_C538(var_16, var_8)
            OP_JUMP switch_C4C0_case_default
        }
        case 0x2:
        {
// switch_C4C0_case_0x2
            var_8 = 0;
            var_16 = 99;
            var_24 = 16;
            pri = fun_C538(var_16, var_8)
            OP_JUMP switch_C4C0_case_default
        }
        case 0x3:
        {
// switch_C4C0_case_0x3
            var_8 = 0;
            pri = fun_C880()
            OP_JUMP switch_C4C0_case_default
        }
    }
}
// fun_C538
fun_C538() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_C8B0(var_24)
    var_16 = pri;
    pri = GetCyclingWearColor()
    OP_MOVE_ALT 
    pri = var_16;
    OP_JNEQ lab_C688
    var_40 = 0;
    var_48 = -3222507226960616970;
    var_56 = 16;
    pri = fun_9688(var_48, var_40)
    var_64 = 1;
    var_72 = 8;
    pri = fun_1950(var_64)
    var_80 = 0;
    pri = fun_1A10()
    var_88 = 0;
    var_96 = 0;
    var_104 = 0;
    var_112 = var_8;
    var_120 = 32;
    pri = fun_8150(var_112, var_104, var_96, var_88)
    pri = 0;
    return pri;
// lab_C688
    pri = IsPlayerRideBicycle()
    OP_JZER lab_C700
    var_8 = 1;
    var_16 = 0;
    var_24 = 33200;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
// lab_C700
    var_8 = 33248;
    pri = SoundPostEvent(var_8)
    var_16 = var_16;
    pri = ChangeCyclingWearColor(var_16)
    var_24 = 0;
    var_32 = 8;
    pri = fun_0468(var_24)
    pri = IsPlayerRideBicycle()
    OP_JZER lab_C7C8
    var_40 = 33464;
    var_48 = 8;
    var_56 = 16;
    pri = fun_02A8(var_48, var_40)
    var_64 = 0;
    pri = fun_0378()
// lab_C7C8
    var_8 = 0;
    var_16 = 579721945223377899;
    var_24 = 16;
    pri = fun_9688(var_16, var_8)
    var_32 = 1;
    var_40 = 8;
    pri = fun_1950(var_32)
    var_48 = 0;
    pri = fun_1A10()
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = var_8;
    var_88 = 32;
    pri = fun_8150(var_80, var_72, var_64, var_56)
    pri = 0;
    return pri;
}
// fun_C880
fun_C880() {
    var_8 = 0;
    pri = fun_D2E0()
    pri = 0;
    return pri;
}
// fun_C8B0
fun_C8B0() {
    pri = arg_0;
    switch (pri) {
// switch_CB30
        case default:
        {
// switch_CB30_case_default
            pri = 0;
            return pri;
            OP_JUMP lab_CC68
// lab_CC68
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_CB30_case_0x0
            pri = 1;
            return pri;
            OP_JUMP lab_CC68
        }
        case 0x1:
        {
// switch_CB30_case_0x1
            pri = 16;
            return pri;
            OP_JUMP lab_CC68
        }
        case 0x2:
        {
// switch_CB30_case_0x2
            pri = 10;
            return pri;
            OP_JUMP lab_CC68
        }
        case 0x3:
        {
// switch_CB30_case_0x3
            pri = 9;
            return pri;
            OP_JUMP lab_CC68
        }
        case 0x4:
        {
// switch_CB30_case_0x4
            pri = 13;
            return pri;
            OP_JUMP lab_CC68
        }
        case 0x5:
        {
// switch_CB30_case_0x5
            pri = 17;
            return pri;
            OP_JUMP lab_CC68
        }
        case 0x6:
        {
// switch_CB30_case_0x6
            pri = 4;
            return pri;
            OP_JUMP lab_CC68
        }
        case 0x7:
        {
// switch_CB30_case_0x7
            pri = 8;
            return pri;
            OP_JUMP lab_CC68
        }
        case 0x8:
        {
// switch_CB30_case_0x8
            pri = 15;
            return pri;
            OP_JUMP lab_CC68
        }
        case 0x9:
        {
// switch_CB30_case_0x9
            pri = 2;
            return pri;
            OP_JUMP lab_CC68
        }
        case 0xa:
        {
// switch_CB30_case_0xa
            pri = 3;
            return pri;
            OP_JUMP lab_CC68
        }
        case 0xb:
        {
// switch_CB30_case_0xb
            pri = 14;
            return pri;
            OP_JUMP lab_CC68
        }
        case 0xc:
        {
// switch_CB30_case_0xc
            pri = 6;
            return pri;
            OP_JUMP lab_CC68
        }
        case 0xd:
        {
// switch_CB30_case_0xd
            pri = 7;
            return pri;
            OP_JUMP lab_CC68
        }
        case 0xe:
        {
// switch_CB30_case_0xe
            pri = 18;
            return pri;
            OP_JUMP lab_CC68
        }
        case 0xf:
        {
// switch_CB30_case_0xf
            pri = 11;
            return pri;
            OP_JUMP lab_CC68
        }
        case 0x10:
        {
// switch_CB30_case_0x10
            pri = 12;
            return pri;
            OP_JUMP lab_CC68
        }
        case 0x11:
        {
// switch_CB30_case_0x11
            pri = 5;
            return pri;
            OP_JUMP lab_CC68
        }
    }
}
// fun_CC78
fun_CC78() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 2;
    var_24 = 2;
    var_32 = var_8;
    var_40 = 8;
    pri = fun_A200(var_32)
    var_48 = pri;
    pri = ExecuteBuyShopEvent_(var_48, var_40, var_32)
    var_56 = 0;
    pri = fun_D2E0()
    pri = 0;
    return pri;
}
// fun_CD28
fun_CD28() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_24 = -6267628599641695783;
    pri = WorkGet(var_24)
    var_16 = pri;
    OP_CONST_S -24, -5975433938433435992
    OP_CONST_S -32, -5975428440875294937
    OP_ZERO_P_S -40
    OP_ZERO_P_S -48
    pri = var_16;
    OP_EQ_P_C_PRI 128
    OP_JZER lab_CE80
    OP_CONST_S -24, -5975433938433435992
    OP_CONST_S -32, -5975428440875294937
    OP_CONST_S -48, 1000
    OP_CONST_S -40, 104
    OP_JUMP lab_CF90
// lab_CE80
    pri = var_16;
    OP_EQ_P_C_PRI 104
    OP_JZER lab_CF10
    OP_CONST_S -24, -5975430639898551359
    OP_CONST_S -32, -5975429540386923148
    OP_CONST_S -48, 3000
    OP_CONST_S -40, 84
    OP_JUMP lab_CF90
// lab_CF10
    pri = var_16;
    OP_EQ_P_C_PRI 84
    OP_JZER lab_CF90
    OP_CONST_S -24, -5975431739410179570
    OP_CONST_S -32, -5975426241852038515
    OP_CONST_S -48, 5000
    OP_CONST_S -40, 64
// lab_CF90
    var_8 = 1;
    var_16 = 8;
    pri = fun_21F8(var_8)
    var_24 = 0;
    var_32 = 0;
    var_40 = var_48;
    var_48 = 0;
    pri = WordSetNumber(var_48, var_40, var_32, var_24)
    var_56 = 0;
    var_64 = var_24;
    var_72 = 16;
    pri = fun_9688(var_64, var_56)
    var_88 = 0;
    var_96 = 0;
    var_104 = 1;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 48;
    pri = fun_1B98(var_128, var_120, var_112, var_104, var_96, var_88)
    var_56 = pri;
    var_144 = 0;
    pri = fun_1A10()
    pri = var_56;
    OP_JZER lab_D298
    pri = var_48;
    var_152 = pri;
    var_160 = 0;
    pri = fun_2320()
    OP_POP_ALT 
    OP_JSLESS lab_D1E8
    var_168 = var_48;
    var_176 = 8;
    pri = fun_22F0(var_168)
    var_184 = 1;
    var_192 = 8;
    pri = fun_2288(var_184)
    var_200 = 33512;
    pri = SoundPostEvent(var_200)
    var_208 = 0;
    var_216 = 8;
    pri = fun_0468(var_208)
    var_224 = 0;
    var_232 = var_32;
    var_240 = 16;
    pri = fun_9688(var_232, var_224)
    var_248 = 1;
    var_256 = 8;
    pri = fun_1950(var_248)
    var_264 = 0;
    pri = fun_1A10()
    var_272 = var_40;
    pri = BicycleChangeChargeLimit(var_272)
    OP_JUMP lab_D250
// lab_D298
    var_8 = 0;
    pri = fun_D2E0()
// lab_D1E8
    var_8 = 0;
    var_16 = -5975427341363666726;
    var_24 = 16;
    pri = fun_9688(var_16, var_8)
    var_32 = 1;
    var_40 = 8;
    pri = fun_1950(var_32)
    var_48 = 0;
    pri = fun_1A10()
// lab_D250
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = var_8;
    var_40 = 32;
    pri = fun_8150(var_32, var_24, var_16, var_8)
    OP_JUMP lab_D2B0
// lab_D2B0
    var_8 = 0;
    pri = fun_2250()
    pri = 0;
    return pri;
}
// fun_D2E0
fun_D2E0() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 0;
    var_24 = -3573628403805619473;
    var_32 = 16;
    pri = fun_9688(var_24, var_16)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1950(var_40)
    var_56 = 0;
    pri = fun_1A10()
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = var_8;
    var_96 = 32;
    pri = fun_8150(var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_D3C8
fun_D3C8() {
    var_8 = 10;
    var_16 = 8;
    pri = fun_0408(var_8)
    var_32 = 5232961557713962460;
    pri = FlagGet(var_32)
    var_8 = pri;
    var_48 = 5232964856248847093;
    pri = FlagGet(var_48)
    var_16 = pri;
    var_64 = 5232963756737218882;
    pri = FlagGet(var_64)
    var_24 = pri;
    pri = RotomCircuitGetLastScore()
    var_32 = pri;
    var_88 = -8050136508518858720;
    pri = WorkGet(var_88)
    var_40 = pri;
    var_104 = 10;
    var_112 = 8;
    pri = fun_0438(var_104)
    var_48 = pri;
    var_128 = -6981382308142934039;
    pri = WorkGet(var_128)
    var_136 = pri;
    var_144 = 8;
    pri = fun_A6A8(var_136)
    var_56 = pri;
    var_152 = 33464;
    var_160 = 8;
    var_168 = 16;
    pri = fun_02A8(var_160, var_152)
    var_176 = 0;
    var_184 = 0;
    var_192 = 0;
    var_200 = 0;
    var_208 = 8802641224559852288;
    var_216 = var_56;
    var_224 = 48;
    pri = fun_05C8(var_216, var_208, var_200, var_192, var_184, var_176)
    var_232 = 0;
    pri = fun_0378()
    var_240 = var_56;
    var_248 = 8;
    pri = fun_0620(var_240)
    var_256 = 0;
    var_264 = 8;
    pri = fun_1D58(var_256)
    var_272 = 0;
    var_280 = 5;
    var_288 = var_32;
    var_296 = 1;
    pri = WordSetNumber(var_296, var_288, var_280, var_272)
    var_304 = 8139407840767452972;
    pri = WorkGet(var_304)
    var_312 = pri;
    var_320 = 8;
    pri = fun_9E68(var_312)
    var_328 = pri;
    var_336 = 2;
    var_344 = 16;
    pri = fun_1E98(var_336, var_328)
    var_352 = -6981382308142934039;
    pri = WorkGet(var_352)
    var_360 = pri;
    var_368 = 8;
    pri = fun_9E68(var_360)
    var_376 = pri;
    var_384 = 3;
    var_392 = 16;
    pri = fun_1E98(var_384, var_376)
    var_400 = 0;
    var_408 = -4171838811380476226;
    var_416 = 16;
    pri = fun_1850(var_408, var_400)
    var_424 = 1;
    var_432 = 8;
    pri = fun_1950(var_424)
    var_440 = 0;
    pri = fun_1A10()
    var_448 = 1;
    var_456 = 1;
    var_464 = -1;
    var_472 = -1;
    var_480 = 0;
    var_488 = 1;
    var_496 = var_56;
    var_504 = 56;
    pri = fun_3F28(var_496, var_488, var_480, var_472, var_464, var_456, var_448)
    var_512 = 1;
    var_520 = 1;
    var_528 = -1;
    var_536 = var_56;
    var_544 = 8802641224559852288;
    var_552 = 40;
    pri = fun_0D50(var_544, var_536, var_528, var_520, var_512)
    var_560 = var_56;
    var_568 = 6195234120216406374;
    var_576 = 16;
    pri = fun_9688(var_568, var_560)
    var_584 = 1;
    var_592 = 8;
    pri = fun_1950(var_584)
    var_600 = 0;
    pri = fun_1A10()
    OP_ZERO_P_S -64
    OP_CONST_S -72, 1
    pri = var_8;
    OP_JNZ lab_D9D0
    var_624 = var_56;
    var_632 = -4703468394757121401;
    var_640 = 16;
    pri = fun_9688(var_632, var_624)
    var_648 = 1;
    var_656 = 8;
    pri = fun_1950(var_648)
    var_664 = 0;
    pri = fun_1A10()
    OP_CONST_S -64, 341
    var_672 = 5232961557713962460;
    pri = FlagSet(var_672)
    OP_JUMP lab_DC38
// lab_D9D0
    pri = var_16;
    OP_JNZ lab_DA20
    pri = var_32;
    OP_LOAD_P_ALT 33744
    OP_JSLEQ lab_DA20
    pri = 1;
    OP_JUMP lab_DA28
// lab_DA20
    pri = 0;
// lab_DA28
    OP_JZER lab_DB28
    var_8 = 0;
    var_16 = 5;
    OP_PUSH_P 33744
    var_24 = 1;
    pri = WordSetNumber(var_24, var_16, var_8, var_0)
    var_32 = var_56;
    var_40 = -4703469494268749612;
    var_48 = 16;
    pri = fun_9688(var_40, var_32)
    var_56 = 1;
    var_64 = 8;
    pri = fun_1950(var_56)
    var_72 = 0;
    pri = fun_1A10()
    OP_CONST_S -64, 407
    var_80 = 5232964856248847093;
    pri = FlagSet(var_80)
    OP_JUMP lab_DC38
// lab_DB28
    pri = var_24;
    OP_JNZ lab_DB78
    pri = var_48;
    OP_LOAD_P_ALT 33752
    OP_JSLEQ lab_DB78
    pri = 1;
    OP_JUMP lab_DB80
// lab_DB78
    pri = 0;
// lab_DB80
    OP_JZER lab_DC38
    var_8 = var_56;
    var_16 = -4703479389873403511;
    var_24 = 16;
    pri = fun_9688(var_16, var_8)
    var_32 = 1;
    var_40 = 8;
    pri = fun_1950(var_32)
    var_48 = 0;
    pri = fun_1A10()
    OP_CONST_S -64, 492
    var_56 = 5232963756737218882;
    pri = FlagSet(var_56)
// lab_DC38
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 1;
    var_40 = var_56;
    var_48 = 40;
    pri = fun_6260(var_40, var_32, var_24, var_16, var_8)
    var_56 = var_56;
    var_64 = 8;
    pri = fun_07F8(var_56)
    pri = var_64;
    OP_JZER lab_DD08
    var_72 = 6;
    var_80 = 4;
    var_88 = 2;
    var_96 = 0;
    var_104 = 9;
    var_112 = var_72;
    var_120 = var_64;
    var_128 = var_56;
    var_136 = 64;
    pri = fun_8808(var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72)
// lab_DD08
    OP_LOAD_S_BOTH -32, -40
    OP_JSLEQ lab_DDE0
    pri = var_64;
    OP_JNZ lab_DDB0
    var_8 = var_56;
    var_16 = 619844732970060037;
    var_24 = 16;
    pri = fun_9688(var_16, var_8)
    var_32 = 1;
    var_40 = 8;
    pri = fun_1950(var_32)
    var_48 = 0;
    pri = fun_1A10()
// lab_DDE0
    pri = RotomCircuitGetWatt()
    var_80 = pri;
    var_16 = var_80;
    var_24 = 8;
    pri = fun_8A28(var_16)
    var_32 = -1;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0DA8(var_40, var_32)
    var_56 = 0;
    var_64 = 0;
    var_72 = 33760;
    pri = PokeMemoryCheckParty(var_72, var_64, var_56)
    pri = 0;
    return pri;
// lab_DDB0
    var_8 = var_32;
    var_16 = -8050136508518858720;
    pri = WorkSet(var_16, var_8)
}
