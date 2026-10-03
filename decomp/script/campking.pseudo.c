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
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0408
fun_0408() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B78(var_8)
    OP_JZER lab_0480
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0BA8(var_24)
    OP_JNZ lab_0480
    pri = 0;
    return pri;
// lab_0480
    OP_JUMP lab_0490
// lab_0490
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_04F0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_04F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0490
    pri = 0;
    return pri;
}
// fun_0530
fun_0530() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0568
fun_0568() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_05A8
fun_05A8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_05E0
fun_05E0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0628
    pri = 0;
    return pri;
// lab_0628
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0668
// lab_0668
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B78(var_8)
    OP_JNZ lab_06F0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_06E0
    pri = 0;
    return pri;
// lab_06F0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0738
    pri = 0;
    return pri;
// lab_0738
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0798
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_07E0(var_8)
    pri = 0;
    return pri;
// lab_0798
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0668
    pri = 0;
    return pri;
// lab_06E0
    OP_JUMP lab_0738
}
// fun_07E0
fun_07E0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0818
fun_0818() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0868
    pri = 0;
    return pri;
// lab_0868
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B78(var_8)
    OP_JZER lab_0998
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_08C0
    OP_ZERO_P_S 64
// lab_0998
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_09D0
    OP_CONST_S 64, 1
// lab_09D0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A08
    OP_CONST_S 72, 1
// lab_0A08
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
// lab_08C0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_08E8
    OP_ZERO_P_S 72
// lab_08E8
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
    OP_JUMP lab_0AA8
// lab_0AA8
    pri = 0;
    return pri;
}
// fun_0AB8
fun_0AB8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0AF8
fun_0AF8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0B38
fun_0B38() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0B78
fun_0B78() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0BA8
fun_0BA8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0BD8
fun_0BD8() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_0C08
fun_0C08() {
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
// switch_1220
        case default:
        {
// switch_1220_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1268
// lab_1268
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
            OP_JNZ lab_1310
            var_88 = 0;
            pri = fun_15E0()
// lab_1310
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1220_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0E08
                case default:
                {
// switch_0E08_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0E80
// lab_0E80
                    OP_JUMP lab_1268
                }
                case 0x0:
                {
// switch_0E08_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0E80
                }
                case 0x1:
                {
// switch_0E08_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0E80
                }
                case 0x2:
                {
// switch_0E08_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0E80
                }
                case 0x3:
                {
// switch_0E08_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0E80
                }
                case 0x4:
                {
// switch_0E08_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0E80
                }
                case 0x5:
                {
// switch_0E08_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0E80
                }
            }
        }
        case 0x65:
        {
// switch_1220_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_0FC0
                case default:
                {
// switch_0FC0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1038
// lab_1038
                    OP_JUMP lab_1268
                }
                case 0x0:
                {
// switch_0FC0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1038
                }
                case 0x1:
                {
// switch_0FC0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1038
                }
                case 0x2:
                {
// switch_0FC0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1038
                }
                case 0x3:
                {
// switch_0FC0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1038
                }
                case 0x4:
                {
// switch_0FC0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1038
                }
                case 0x5:
                {
// switch_0FC0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1038
                }
            }
        }
        case 0x66:
        {
// switch_1220_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1178
                case default:
                {
// switch_1178_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_11F0
// lab_11F0
                    OP_JUMP lab_1268
                }
                case 0x0:
                {
// switch_1178_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_11F0
                }
                case 0x1:
                {
// switch_1178_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_11F0
                }
                case 0x2:
                {
// switch_1178_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_11F0
                }
                case 0x3:
                {
// switch_1178_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_11F0
                }
                case 0x4:
                {
// switch_1178_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_11F0
                }
                case 0x5:
                {
// switch_1178_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_11F0
                }
            }
        }
    }
}
// fun_1328
fun_1328() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_0C08(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1390
fun_1390() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_05A8(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1438
    pri = 1;
    return pri;
// lab_1438
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1480
fun_1480() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_14D0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1390(var_8)
    arg_2 = pri;
// lab_14D0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0C08(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1530
fun_1530() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1328(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1580
fun_1580() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1530(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_15E0
fun_15E0() {
    OP_JUMP lab_15F8
// lab_15F8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1638
    pri = 0;
    return pri;
// lab_1638
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_15F8
    pri = 0;
    return pri;
}
// fun_1678
fun_1678() {
    var_8 = 0;
    pri = fun_15E0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1728
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1728
    pri = 0;
    return pri;
}
// fun_1738
fun_1738() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1768
fun_1768() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1798
// lab_1798
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_17D8
    OP_JUMP lab_1808
// lab_17D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1798
// lab_1808
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1850
fun_1850() {
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
// fun_18C0
fun_18C0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_1938()
    return pri;
}
// fun_1938
fun_1938() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_1978
fun_1978() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_19B0
fun_19B0() {
    OP_JUMP lab_19C8
// lab_19C8
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1A10
    OP_JUMP lab_1A40
    OP_JUMP lab_1A30
// lab_1A10
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_1A40
    pri = 0;
    return pri;
// lab_1A30
    OP_JUMP lab_19C8
}
// fun_1A50
fun_1A50() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_1A80
fun_1A80() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1AD0
fun_1AD0() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 6;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B20
fun_1B20() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B70
fun_1B70() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1BC0
fun_1BC0() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1C10
fun_1C10() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 17;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1C60
fun_1C60() {
    OP_CONST_S -8, -1
    var_24 = 0;
    var_32 = 0;
    pri = PokePartyGetCount(var_32, var_24)
    var_16 = pri;
}
// lab_1CC0
OP_LOAD_S_BOTH 32, -16
OP_JSGEQ lab_1EB8
pri = arg_0;
switch (pri) {
// switch_1E58
    case default:
    {
// switch_1E58_case_default
        pri = arg_1;
        OP_ADD_P_C 1
        arg_1 = pri;
        OP_JUMP lab_1CC0
    }
    case 0x0:
    {
// switch_1E58_case_0x0
        var_8 = 0;
        var_16 = 8;
        var_24 = arg_1;
        pri = PokePartyGetParam(var_24, var_16, var_8)
        OP_JNZ lab_1E48
        pri = arg_1;
        return pri;
// lab_1E48
        OP_JUMP switch_1E58_case_default
    }
    case 0x1:
    {
// switch_1E58_case_0x1
        var_8 = 0;
        var_16 = 8;
        var_24 = arg_1;
        pri = PokePartyGetParam(var_24, var_16, var_8)
        OP_JNZ lab_1DB0
        var_32 = 0;
        var_40 = 2;
        var_48 = arg_1;
        pri = PokePartyGetParam(var_48, var_40, var_32)
        OP_MOVE_ALT 
        pri = 0;
        OP_XCHG 
        OP_JSLEQ lab_1DB0
        pri = 1;
        OP_JUMP lab_1DB8
// lab_1DB0
        pri = 0;
// lab_1DB8
        OP_JZER lab_1DE0
        pri = arg_1;
        return pri;
// lab_1DE0
        OP_JUMP switch_1E58_case_default
    }
}
// lab_1EB8
pri = var_8;
return pri;
// fun_1ED0
fun_1ED0() {
    pri = arg_6;
    OP_JNZ lab_1F08
    var_8 = 0;
    pri = fun_0AB8()
// lab_1F08
    pri = arg_1;
    switch (pri) {
// switch_3470
        case default:
        {
// switch_3470_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_37C0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_37C0
            pri = 1;
            OP_JUMP lab_37C8
// lab_37C0
            pri = 0;
// lab_37C8
            OP_JZER lab_3920
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_05A8(var_24, var_16)
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
            OP_JUMP lab_3980
// lab_3920
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
// lab_3980
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_39E0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3A40
// lab_39E0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3A40
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3A40
            pri = arg_2;
            OP_JZER lab_3A80
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3A80
            var_8 = 0;
            pri = fun_0AF8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3470_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3470_case_default
        }
        case 0x1:
        {
// switch_3470_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3470_case_default
        }
        case 0x2:
        {
// switch_3470_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3470_case_default
        }
        case 0x3:
        {
// switch_3470_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3470_case_default
        }
        case 0x4:
        {
// switch_3470_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3470_case_default
        }
        case 0x5:
        {
// switch_3470_case_0x5
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3470_case_default
        }
        case 0x6:
        {
// switch_3470_case_0x6
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3470_case_default
        }
        case 0x7:
        {
// switch_3470_case_0x7
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3470_case_default
        }
        case 0x8:
        {
// switch_3470_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3470_case_default
        }
        case 0x9:
        {
// switch_3470_case_0x9
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3470_case_default
        }
        case 0xa:
        {
// switch_3470_case_0xa
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3470_case_default
        }
        case 0xb:
        {
// switch_3470_case_0xb
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3470_case_default
        }
        case 0xc:
        {
// switch_3470_case_0xc
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3470_case_default
        }
        case 0xd:
        {
// switch_3470_case_0xd
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3470_case_default
        }
        case 0xe:
        {
// switch_3470_case_0xe
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3470_case_default
        }
        case 0xf:
        {
// switch_3470_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3470_case_default
        }
        case 0x10:
        {
// switch_3470_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3470_case_default
        }
        case 0x11:
        {
// switch_3470_case_0x11
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3470_case_default
        }
        case 0x12:
        {
// switch_3470_case_0x12
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3470_case_default
        }
        case 0x13:
        {
// switch_3470_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3470_case_default
        }
        case 0x14:
        {
// switch_3470_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3470_case_default
        }
        case 0x15:
        {
// switch_3470_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3470_case_default
        }
        case 0x16:
        {
// switch_3470_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3470_case_default
        }
        case 0x17:
        {
// switch_3470_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3470_case_default
        }
        case 0x18:
        {
// switch_3470_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3470_case_default
        }
        case 0x19:
        {
// switch_3470_case_0x19
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3470_case_default
        }
        case 0x1a:
        {
// switch_3470_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0568(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0530(var_48, var_40)
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
            pri = fun_0818(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3470_case_default
        }
        case 0x1b:
        {
// switch_3470_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0568(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0530(var_48, var_40)
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
            pri = fun_0818(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3470_case_default
        }
        case 0x1c:
        {
// switch_3470_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0568(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0530(var_48, var_40)
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
            pri = fun_0818(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3470_case_default
        }
        case 0x1d:
        {
// switch_3470_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3470_case_default
        }
        case 0x1e:
        {
// switch_3470_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3470_case_default
        }
        case 0x1f:
        {
// switch_3470_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3470_case_default
        }
        case 0x20:
        {
// switch_3470_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3470_case_default
        }
        case 0x21:
        {
// switch_3470_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3470_case_default
        }
        case 0x22:
        {
// switch_3470_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3470_case_default
        }
        case 0x23:
        {
// switch_3470_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3470_case_default
        }
        case 0x24:
        {
// switch_3470_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3470_case_default
        }
        case 0x25:
        {
// switch_3470_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3470_case_default
        }
        case 0x26:
        {
// switch_3470_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3470_case_default
        }
        case 0x27:
        {
// switch_3470_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3470_case_default
        }
        case 0x28:
        {
// switch_3470_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3470_case_default
        }
        case 0x29:
        {
// switch_3470_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3470_case_default
        }
    }
}
// fun_3AB0
fun_3AB0() {
    pri = arg_5;
    OP_JNZ lab_3AE8
    var_8 = 0;
    pri = fun_0AB8()
// lab_3AE8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3B38
    OP_CONST_S -8, -1
// lab_3B38
    pri = arg_1;
    switch (pri) {
// switch_55F0
        case default:
        {
// switch_55F0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5A98
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_05A8(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5A98
            pri = 1;
            OP_JUMP lab_5AA0
// lab_5A98
            pri = 0;
// lab_5AA0
            OP_JZER lab_5AF0
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_5D48
// lab_5AF0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5B58
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5B58
            pri = 1;
            OP_JUMP lab_5B60
// lab_5B58
            pri = 0;
// lab_5B60
            OP_JZER lab_5CE8
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_05A8(var_24, var_16)
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
            OP_JUMP lab_5D48
// lab_5CE8
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
// lab_5D48
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_5DB8
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_5DB8
            var_8 = 0;
            pri = fun_0AF8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_55F0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x1:
        {
// switch_55F0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x2:
        {
// switch_55F0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x3:
        {
// switch_55F0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x4:
        {
// switch_55F0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x5:
        {
// switch_55F0_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0568(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_07E0(var_40)
            OP_JUMP switch_55F0_case_default
        }
        case 0x6:
        {
// switch_55F0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x7:
        {
// switch_55F0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x8:
        {
// switch_55F0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x9:
        {
// switch_55F0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0xa:
        {
// switch_55F0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0xb:
        {
// switch_55F0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0xc:
        {
// switch_55F0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0xd:
        {
// switch_55F0_case_0xd
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55F0_case_default
        }
        case 0xe:
        {
// switch_55F0_case_0xe
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55F0_case_default
        }
        case 0xf:
        {
// switch_55F0_case_0xf
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55F0_case_default
        }
        case 0x10:
        {
// switch_55F0_case_0x10
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55F0_case_default
        }
        case 0x11:
        {
// switch_55F0_case_0x11
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55F0_case_default
        }
        case 0x12:
        {
// switch_55F0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x13:
        {
// switch_55F0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x14:
        {
// switch_55F0_case_0x14
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55F0_case_default
        }
        case 0x15:
        {
// switch_55F0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x16:
        {
// switch_55F0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x17:
        {
// switch_55F0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x18:
        {
// switch_55F0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x19:
        {
// switch_55F0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x1a:
        {
// switch_55F0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x1b:
        {
// switch_55F0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x1c:
        {
// switch_55F0_case_0x1c
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55F0_case_default
        }
        case 0x1d:
        {
// switch_55F0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x1e:
        {
// switch_55F0_case_0x1e
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55F0_case_default
        }
        case 0x1f:
        {
// switch_55F0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x20:
        {
// switch_55F0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x21:
        {
// switch_55F0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x22:
        {
// switch_55F0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x23:
        {
// switch_55F0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x24:
        {
// switch_55F0_case_0x24
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55F0_case_default
        }
        case 0x25:
        {
// switch_55F0_case_0x25
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55F0_case_default
        }
        case 0x26:
        {
// switch_55F0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x27:
        {
// switch_55F0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x28:
        {
// switch_55F0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x29:
        {
// switch_55F0_case_0x29
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55F0_case_default
        }
        case 0x2a:
        {
// switch_55F0_case_0x2a
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55F0_case_default
        }
        case 0x2b:
        {
// switch_55F0_case_0x2b
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55F0_case_default
        }
        case 0x2c:
        {
// switch_55F0_case_0x2c
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55F0_case_default
        }
        case 0x2d:
        {
// switch_55F0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x2e:
        {
// switch_55F0_case_0x2e
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55F0_case_default
        }
        case 0x2f:
        {
// switch_55F0_case_0x2f
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55F0_case_default
        }
        case 0x30:
        {
// switch_55F0_case_0x30
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55F0_case_default
        }
        case 0x31:
        {
// switch_55F0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x32:
        {
// switch_55F0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x33:
        {
// switch_55F0_case_0x33
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55F0_case_default
        }
        case 0x34:
        {
// switch_55F0_case_0x34
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55F0_case_default
        }
        case 0x35:
        {
// switch_55F0_case_0x35
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55F0_case_default
        }
        case 0x36:
        {
// switch_55F0_case_0x36
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55F0_case_default
        }
        case 0x37:
        {
// switch_55F0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x38:
        {
// switch_55F0_case_0x38
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55F0_case_default
        }
        case 0x39:
        {
// switch_55F0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x3a:
        {
// switch_55F0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x3b:
        {
// switch_55F0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x3c:
        {
// switch_55F0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x3d:
        {
// switch_55F0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
        case 0x3e:
        {
// switch_55F0_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0568(var_24, var_16, var_8)
            OP_JUMP switch_55F0_case_default
        }
    }
}
// fun_5DE8
fun_5DE8() {
    pri = arg_4;
    OP_JNZ lab_5E20
    var_8 = 0;
    pri = fun_0AB8()
// lab_5E20
    pri = arg_1;
    switch (pri) {
// switch_71F8
        case default:
        {
// switch_71F8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0B78(var_264)
            OP_JZER lab_77C0
            pri = arg_3;
            switch (pri) {
// switch_7768
                case default:
                {
// switch_7768_case_default
                    OP_JUMP lab_7A78
// lab_7A78
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7AE8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7AE8
                    var_8 = 0;
                    pri = fun_0AF8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7768_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7768_case_default
                }
                case 0x2:
                {
// switch_7768_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7768_case_default
                }
                case 0x3:
                {
// switch_7768_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7768_case_default
                }
            }
// lab_77C0
            pri = arg_1;
            OP_JZER lab_7810
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7810
            pri = 0;
            OP_JUMP lab_7818
// lab_7810
            pri = 1;
// lab_7818
            OP_JZER lab_7880
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_05A8(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7880
            pri = 1;
            OP_JUMP lab_7888
// lab_7880
            pri = 0;
// lab_7888
            OP_JZER lab_78D8
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_7A78
// lab_78D8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7940
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_7A78
// lab_7940
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_05A8(var_24, var_16)
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
// switch_71F8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x1:
        {
// switch_71F8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x2:
        {
// switch_71F8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x3:
        {
// switch_71F8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x4:
        {
// switch_71F8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x5:
        {
// switch_71F8_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0568(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_07E0(var_40)
            OP_JUMP switch_71F8_case_default
        }
        case 0x6:
        {
// switch_71F8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x7:
        {
// switch_71F8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x8:
        {
// switch_71F8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x9:
        {
// switch_71F8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0xa:
        {
// switch_71F8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0xb:
        {
// switch_71F8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0xc:
        {
// switch_71F8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0xd:
        {
// switch_71F8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0xe:
        {
// switch_71F8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0xf:
        {
// switch_71F8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x10:
        {
// switch_71F8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x11:
        {
// switch_71F8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x12:
        {
// switch_71F8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x13:
        {
// switch_71F8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x14:
        {
// switch_71F8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x15:
        {
// switch_71F8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x16:
        {
// switch_71F8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x17:
        {
// switch_71F8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x18:
        {
// switch_71F8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x19:
        {
// switch_71F8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x1a:
        {
// switch_71F8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x1b:
        {
// switch_71F8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x1c:
        {
// switch_71F8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x1d:
        {
// switch_71F8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x1e:
        {
// switch_71F8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x1f:
        {
// switch_71F8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x20:
        {
// switch_71F8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x21:
        {
// switch_71F8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x22:
        {
// switch_71F8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x23:
        {
// switch_71F8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x24:
        {
// switch_71F8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x25:
        {
// switch_71F8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x26:
        {
// switch_71F8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x27:
        {
// switch_71F8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x28:
        {
// switch_71F8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x29:
        {
// switch_71F8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x2a:
        {
// switch_71F8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x2b:
        {
// switch_71F8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x2c:
        {
// switch_71F8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x2d:
        {
// switch_71F8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x2e:
        {
// switch_71F8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x2f:
        {
// switch_71F8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x30:
        {
// switch_71F8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x31:
        {
// switch_71F8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x32:
        {
// switch_71F8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x33:
        {
// switch_71F8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x34:
        {
// switch_71F8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x35:
        {
// switch_71F8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x36:
        {
// switch_71F8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x37:
        {
// switch_71F8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x38:
        {
// switch_71F8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x39:
        {
// switch_71F8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x3a:
        {
// switch_71F8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x3b:
        {
// switch_71F8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x3c:
        {
// switch_71F8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x3d:
        {
// switch_71F8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
        case 0x3e:
        {
// switch_71F8_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0568(var_24, var_16, var_8)
            OP_JUMP switch_71F8_case_default
        }
    }
}
// fun_7B18
fun_7B18() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_7C18
        case default:
        {
// switch_7C18_case_default
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
// switch_7C18_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_7C18_case_default
        }
        case 0x1:
        {
// switch_7C18_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_7C18_case_default
        }
        case 0x2:
        {
// switch_7C18_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_7C18_case_default
        }
        case 0x3:
        {
// switch_7C18_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_7C18_case_default
        }
    }
}
// fun_7CD8
fun_7CD8() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_7D28
// lab_7D28
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30048;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_7DA0
    OP_JUMP lab_7DD0
// lab_7DA0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_7D28
// lab_7DD0
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_7E58
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_5DE8(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0BD8(var_56)
// lab_7E58
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_7EC0
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0B38(var_24, var_16)
// lab_7EC0
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0B38(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_7F80
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_05E0(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_03B8(var_88, var_80, var_72, var_64, var_56)
// lab_7F80
    pri = IsPlayerRideBicycle()
    OP_JZER lab_7FC0
    pri = 0;
    return pri;
// lab_7FC0
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8108
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 30168;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0530(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_80D0
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_8108
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0408(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0408(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_05E0(var_40)
    pri = 0;
    return pri;
// lab_80D0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0B38(var_16, var_8)
}
// fun_8190
fun_8190() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_8228
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_05E0(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_1ED0(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_8228
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_8380
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_82E8
    var_24 = 30304;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_82E8
    pri = 1;
    OP_JUMP lab_82F0
// lab_8380
    pri = 0;
    return pri;
// lab_82E8
    pri = 0;
// lab_82F0
    OP_JZER lab_8380
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_05E0(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_1ED0(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_8390
fun_8390() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_8190(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_8418(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_8418
fun_8418() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_85B0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8480
fun_8480() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_84F0
    OP_CONST_S -8, 1
// lab_84F0
    pri = arg_0;
    OP_JNZ lab_8510
    OP_ZERO_P_S -8
// lab_8510
    pri = var_8;
    OP_JZER lab_8598
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_8598
    pri = 0;
    return pri;
}
// fun_85B0
fun_85B0() {
    var_8 = 30408;
    var_16 = 8;
    pri = fun_1978(var_8)
    var_24 = 0;
    pri = fun_19B0()
    pri = arg_3;
    OP_JNZ lab_86D0
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_8698
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_8740(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_86C0
// lab_86D0
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_88E0(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_8698
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8808(var_16, var_8)
// lab_86C0
    OP_JUMP lab_8718
// lab_8718
    var_8 = 0;
    pri = fun_1A50()
    pri = 0;
    return pri;
}
// fun_8740
fun_8740() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_88E0(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_87F0
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_87F0
    pri = 0;
    return pri;
}
// fun_8808
fun_8808() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_1B20(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_1580(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1678(var_72)
    var_88 = 0;
    pri = fun_1738()
    var_96 = 0;
    var_104 = 8;
    pri = fun_1A80(var_96)
    pri = 0;
    return pri;
}
// fun_88E0
fun_88E0() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8928
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_8BE8(var_8)
// lab_8928
    pri = arg_4;
    OP_JNZ lab_8990
    var_8 = 0;
    var_16 = 8;
    pri = fun_1A80(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1B20(var_40, var_32, var_24)
// lab_8990
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_8A30
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_1B70(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1580(var_56, var_48, var_40)
    OP_JUMP lab_8B20
// lab_8A30
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_8AE8
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_8AE8
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_8AE8
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1580(var_24, var_16, var_8)
// lab_8B20
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8B60
    var_8 = 0;
    var_16 = 8;
    pri = fun_02A8(var_8)
// lab_8B60
    var_8 = 1;
    var_16 = 8;
    pri = fun_1678(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_8DF0(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_8480(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_8BE8
fun_8BE8() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_8C48
    var_16 = 30568;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_8C48
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_8D88
        case default:
        {
// switch_8D88_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_8D78
            var_16 = 31112;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_8D78
            OP_JUMP lab_8DC0
// lab_8DC0
            var_8 = 31328;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_8D88_case_0x1
            var_8 = 30784;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8DC0
        }
        case 0x2:
        {
// switch_8D88_case_0x2
            var_8 = 30912;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8DC0
        }
    }
}
// fun_8DF0
fun_8DF0() {
    pri = arg_2;
    OP_JNZ lab_8ED8
    var_8 = 0;
    var_16 = 8;
    pri = fun_1A80(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1B20(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_1BC0(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_8ED8
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_1580(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1678(var_40)
    var_56 = 0;
    pri = fun_1738()
    pri = 0;
    return pri;
}
// fun_8F50
fun_8F50() {
    pri = g_mode;
    switch (pri) {
// switch_8FE8
        case default:
        {
// switch_8FE8_case_default
            pri = CommandNOP()
            OP_JUMP lab_9020
// lab_9020
            pri = 0;
            return pri;
        }
        case 0xa0c37823e9d16ad0:
        {
// switch_8FE8_case_0xa0c37823e9d16ad0
            var_8 = 0;
            pri = fun_90E0()
            OP_JUMP lab_9020
        }
        case 0x0:
        {
// switch_8FE8_case_0x0
            var_8 = 0;
            pri = fun_9030()
            OP_JUMP lab_9020
        }
    }
}
// fun_9030
fun_9030() {
    pri = 0;
    return pri;
}
// fun_9048
fun_9048() {
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
    pri = fun_1480(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_90E0
fun_90E0() {
    pri = CommandNOP()
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 0;
    var_24 = 1;
    var_32 = 1;
    var_40 = 1;
    var_48 = 1;
    var_56 = var_8;
    var_64 = 48;
    pri = fun_7B18(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = -2851742213672768906;
    pri = FlagGet(var_72)
    OP_JNZ lab_9228
    var_80 = -2851742213672768906;
    pri = FlagSet(var_80)
    var_88 = -2890041230591151207;
    var_96 = 8;
    pri = fun_9048(var_88)
    var_104 = 1;
    var_112 = 8;
    pri = fun_1678(var_104)
    OP_JUMP lab_9270
// lab_9228
    var_8 = -2890044529126035840;
    var_16 = 8;
    pri = fun_9048(var_8)
    var_24 = 1;
    var_32 = 8;
    pri = fun_1678(var_24)
// lab_9270
    OP_JUMP lab_9280
// lab_9280
    var_8 = -2890043429614407629;
    var_16 = 8;
    pri = fun_9048(var_8)
    var_24 = 0;
    var_32 = -8280059699788561629;
    var_40 = 0;
    var_48 = 24;
    pri = fun_1768(var_40, var_32, var_24)
    var_56 = 0;
    var_64 = -8280058600276933418;
    var_72 = 1;
    var_80 = 24;
    pri = fun_1768(var_72, var_64, var_56)
    var_88 = 7769153342794936670;
    pri = FlagGet(var_88)
    OP_JZER lab_9388
    var_96 = 0;
    var_104 = -8280057500765305207;
    var_112 = 2;
    var_120 = 24;
    pri = fun_1768(var_112, var_104, var_96)
// lab_9388
    var_8 = 0;
    var_16 = -8280052003207164152;
    var_24 = 3;
    var_32 = 24;
    pri = fun_1768(var_24, var_16, var_8)
    var_48 = 0;
    var_56 = 1;
    var_64 = 0;
    var_72 = 1;
    var_80 = 32;
    pri = fun_1850(var_72, var_64, var_56, var_48)
    var_16 = pri;
    var_88 = 0;
    pri = fun_1738()
    pri = var_16;
    switch (pri) {
// switch_9630
        case default:
        {
// switch_9630_case_default
            var_8 = -2890037932056266574;
            var_16 = 8;
            pri = fun_9048(var_8)
            var_24 = 1;
            var_32 = 8;
            pri = fun_1678(var_24)
            var_40 = 0;
            pri = fun_1738()
            var_48 = 1;
            var_56 = 0;
            var_64 = 0;
            var_72 = var_8;
            var_80 = 32;
            pri = fun_7CD8(var_72, var_64, var_56, var_48)
            pri = 0;
            return pri;
            OP_JUMP lab_9688
// lab_9688
            OP_JUMP lab_9280
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_9630_case_0x0
            var_8 = 0;
            pri = fun_96B8()
            OP_JUMP lab_9688
        }
        case 0x1:
        {
// switch_9630_case_0x1
            var_8 = 0;
            pri = fun_9FB0()
            OP_JUMP lab_9688
        }
        case 0x2:
        {
// switch_9630_case_0x2
            var_8 = 0;
            pri = fun_B678()
            OP_JUMP lab_9688
        }
        case 0x3:
        {
// switch_9630_case_0x3
            var_8 = -2890037932056266574;
            var_16 = 8;
            pri = fun_9048(var_8)
            var_24 = 1;
            var_32 = 8;
            pri = fun_1678(var_24)
            var_40 = 0;
            pri = fun_1738()
            var_48 = 1;
            var_56 = 0;
            var_64 = 0;
            var_72 = var_8;
            var_80 = 32;
            pri = fun_7CD8(var_72, var_64, var_56, var_48)
            pri = 0;
            return pri;
            OP_JUMP lab_9688
        }
    }
}
// fun_96B8
fun_96B8() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = -2890036832544638363;
    var_24 = 8;
    pri = fun_9048(var_16)
    var_32 = 1;
    var_40 = 8;
    pri = fun_1678(var_32)
    var_56 = 0;
    var_64 = 0;
    var_72 = 16;
    pri = fun_1C60(var_64, var_56)
    var_16 = pri;
    var_88 = 0;
    var_96 = 6;
    var_104 = var_16;
    pri = PokePartyGetParam(var_104, var_96, var_88)
    var_24 = pri;
    var_120 = 0;
    var_128 = 7;
    var_136 = var_16;
    pri = PokePartyGetParam(var_136, var_128, var_120)
    var_32 = pri;
    OP_LOAD_S_BOTH -32, -24
    OP_JNEQ lab_9970
    var_144 = var_16;
    var_152 = 0;
    var_160 = 16;
    pri = fun_1C10(var_152, var_144)
    var_168 = var_24;
    var_176 = 1;
    var_184 = 16;
    pri = fun_1AD0(var_176, var_168)
    var_192 = -2890040131079522996;
    var_200 = 8;
    pri = fun_9048(var_192)
    var_216 = 0;
    var_224 = 0;
    var_232 = 1;
    var_240 = 0;
    var_248 = 0;
    var_256 = 0;
    var_264 = 48;
    pri = fun_18C0(var_256, var_248, var_240, var_232, var_224, var_216)
    var_40 = pri;
    var_272 = 0;
    pri = fun_1738()
    pri = var_40;
    OP_JZER lab_9940
    var_280 = var_24;
    var_288 = 8;
    pri = fun_9C48(var_280)
    OP_JUMP lab_9958
// lab_9970
    var_8 = var_16;
    var_16 = 0;
    var_24 = 16;
    pri = fun_1C10(var_16, var_8)
    var_32 = -2890039031567894785;
    var_40 = 8;
    pri = fun_9048(var_32)
    var_48 = var_24;
    var_56 = 0;
    var_64 = 16;
    pri = fun_1AD0(var_56, var_48)
    var_72 = var_32;
    var_80 = 1;
    var_88 = 16;
    pri = fun_1AD0(var_80, var_72)
    var_96 = 0;
    var_104 = -8280054202230420574;
    var_112 = 0;
    var_120 = 24;
    pri = fun_1768(var_112, var_104, var_96)
    var_128 = 0;
    var_136 = -8280053102718792363;
    var_144 = 1;
    var_152 = 24;
    pri = fun_1768(var_144, var_136, var_128)
    var_160 = 0;
    var_168 = -8280052003207164152;
    var_176 = 2;
    var_184 = 24;
    pri = fun_1768(var_176, var_168, var_160)
    var_200 = 0;
    var_208 = 1;
    var_216 = 0;
    var_224 = 1;
    var_232 = 32;
    pri = fun_1850(var_224, var_216, var_208, var_200)
    var_40 = pri;
    var_240 = 0;
    pri = fun_1738()
    OP_ZERO_P_S -48
    pri = var_40;
    switch (pri) {
// switch_9BC0
        case default:
        {
// switch_9BC0_case_default
            var_8 = var_48;
            var_16 = 8;
            pri = fun_9C48(var_8)
        }
        case 0x0:
        {
// switch_9BC0_case_0x0
            pri = var_24;
            var_48 = pri;
            OP_JUMP switch_9BC0_case_default
        }
        case 0x1:
        {
// switch_9BC0_case_0x1
            pri = var_32;
            var_48 = pri;
            OP_JUMP switch_9BC0_case_default
        }
        case 0x2:
        {
// switch_9BC0_case_0x2
            var_8 = 0;
            pri = fun_9F38()
            pri = 0;
            return pri;
            OP_JUMP switch_9BC0_case_default
        }
    }
// lab_9940
    var_8 = 0;
    pri = fun_9F38()
// lab_9958
    OP_JUMP lab_9C30
// lab_9C30
    pri = 0;
    return pri;
}
// fun_9C48
fun_9C48() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 16;
    pri = fun_1AD0(var_24, var_16)
    var_48 = -1589517285228991663;
    pri = WorkGet(var_48)
    var_16 = pri;
    OP_LOAD_S_BOTH 24, -16
    OP_JEQ lab_9EC0
    var_56 = arg_0;
    var_64 = -1589517285228991663;
    pri = WorkSet(var_64, var_56)
    var_72 = arg_0;
    pri = SetPlayerTentColor(var_72)
    var_80 = 1;
    var_88 = 3;
    var_96 = 0;
    var_104 = 1;
    var_112 = var_8;
    var_120 = 40;
    pri = fun_5DE8(var_112, var_104, var_96, var_88, var_80)
    var_128 = 31512;
    pri = SoundPostEvent(var_128)
    var_136 = 6;
    var_144 = 4;
    var_152 = var_8;
    var_160 = 24;
    pri = fun_8190(var_152, var_144, var_136)
    var_168 = 0;
    var_176 = 8;
    pri = fun_02A8(var_168)
    var_184 = 1;
    var_192 = 1;
    var_200 = -1;
    var_208 = -1;
    var_216 = 0;
    var_224 = 1;
    var_232 = var_8;
    var_240 = 56;
    pri = fun_3AB0(var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_248 = -2890032434498125519;
    var_256 = 8;
    pri = fun_9048(var_248)
    var_264 = 1;
    var_272 = 8;
    pri = fun_1678(var_264)
    var_280 = 0;
    pri = fun_1738()
    OP_JUMP lab_9F20
// lab_9EC0
    var_8 = -2893832346684465835;
    var_16 = 8;
    pri = fun_9048(var_8)
    var_24 = 1;
    var_32 = 8;
    pri = fun_1678(var_24)
    var_40 = 0;
    pri = fun_1738()
// lab_9F20
    pri = 0;
    return pri;
}
// fun_9F38
fun_9F38() {
    var_8 = -2891008800823787662;
    var_16 = 8;
    pri = fun_9048(var_8)
    var_24 = 1;
    var_32 = 8;
    pri = fun_1678(var_24)
    var_40 = 0;
    pri = fun_1738()
    pri = 0;
    return pri;
}
// fun_9FB0
fun_9FB0() {
    pri = GetCookedTypeCount()
    var_8 = pri;
    var_24 = -1138003354602191756;
    pri = FlagGet(var_24)
    var_16 = pri;
    pri = GetTargetFieldObjectID()
    var_24 = pri;
    var_40 = -8078947583171632320;
    pri = FlagGet(var_40)
    OP_JNZ lab_A100
    var_48 = -8078947583171632320;
    pri = FlagSet(var_48)
    var_56 = -2893835645219350468;
    var_64 = 8;
    pri = fun_9048(var_56)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1678(var_72)
    var_88 = 0;
    pri = fun_1738()
// lab_A100
    pri = var_8;
    OP_JNZ lab_A190
    var_8 = -2889050570614322321;
    var_16 = 8;
    pri = fun_9048(var_8)
    var_24 = 1;
    var_32 = 8;
    pri = fun_1678(var_24)
    var_40 = 0;
    pri = fun_1738()
    pri = 0;
    return pri;
// lab_A190
    pri = var_16;
    OP_JZER lab_A220
    var_8 = -2889051670125950532;
    var_16 = 8;
    pri = fun_9048(var_8)
    var_24 = 1;
    var_32 = 8;
    pri = fun_1678(var_24)
    var_40 = 0;
    pri = fun_1738()
    pri = 0;
    return pri;
// lab_A220
    var_8 = 0;
    var_16 = 8;
    pri = fun_1A80(var_8)
    var_24 = 0;
    var_32 = 0;
    var_40 = var_8;
    var_48 = 1;
    pri = WordSetNumber(var_48, var_40, var_32, var_24)
    var_56 = -2889048371591065899;
    var_64 = 8;
    pri = fun_9048(var_56)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1678(var_72)
    var_88 = 0;
    pri = fun_1738()
    OP_ZERO_P_S -32
    pri = var_8;
    OP_EQ_P_C_PRI 151
    OP_JZER lab_A3D0
    OP_CONST_S -32, 9
    var_104 = 32232;
    pri = SoundPostEvent(var_104)
    var_112 = -2891847728195923430;
    var_120 = 8;
    pri = fun_9048(var_112)
    var_128 = 0;
    var_136 = 8;
    pri = fun_02A8(var_128)
    var_144 = 1;
    var_152 = 8;
    pri = fun_1678(var_144)
    var_160 = 0;
    pri = fun_1738()
    OP_JUMP lab_ABE8
// lab_A3D0
    pri = var_8;
    OP_EQ_P_C_PRI 150
    OP_JZER lab_A4B8
    OP_CONST_S -32, 9
    var_8 = 32432;
    pri = SoundPostEvent(var_8)
    var_16 = -2891848827707551641;
    var_24 = 8;
    pri = fun_9048(var_16)
    var_32 = 0;
    var_40 = 8;
    pri = fun_02A8(var_32)
    var_48 = 1;
    var_56 = 8;
    pri = fun_1678(var_48)
    var_64 = 0;
    pri = fun_1738()
    OP_JUMP lab_ABE8
// lab_A4B8
    pri = var_8;
    alt = 110;
    OP_JSLESS lab_A5A0
    OP_CONST_S -32, 8
    var_8 = 32648;
    pri = SoundPostEvent(var_8)
    var_16 = -2891849927219179852;
    var_24 = 8;
    pri = fun_9048(var_16)
    var_32 = 0;
    var_40 = 8;
    pri = fun_02A8(var_32)
    var_48 = 1;
    var_56 = 8;
    pri = fun_1678(var_48)
    var_64 = 0;
    pri = fun_1738()
    OP_JUMP lab_ABE8
// lab_A5A0
    pri = var_8;
    alt = 80;
    OP_JSLESS lab_A688
    OP_CONST_S -32, 7
    var_8 = 32864;
    pri = SoundPostEvent(var_8)
    var_16 = -2889042874032924844;
    var_24 = 8;
    pri = fun_9048(var_16)
    var_32 = 0;
    var_40 = 8;
    pri = fun_02A8(var_32)
    var_48 = 1;
    var_56 = 8;
    pri = fun_1678(var_48)
    var_64 = 0;
    pri = fun_1738()
    OP_JUMP lab_ABE8
// lab_A688
    pri = var_8;
    alt = 50;
    OP_JSLESS lab_A770
    OP_CONST_S -32, 6
    var_8 = 33080;
    pri = SoundPostEvent(var_8)
    var_16 = -2889041774521296633;
    var_24 = 8;
    pri = fun_9048(var_16)
    var_32 = 0;
    var_40 = 8;
    pri = fun_02A8(var_32)
    var_48 = 1;
    var_56 = 8;
    pri = fun_1678(var_48)
    var_64 = 0;
    pri = fun_1738()
    OP_JUMP lab_ABE8
// lab_A770
    pri = var_8;
    alt = 30;
    OP_JSLESS lab_A858
    OP_CONST_S -32, 5
    var_8 = 33296;
    pri = SoundPostEvent(var_8)
    var_16 = -2889053869149206954;
    var_24 = 8;
    pri = fun_9048(var_16)
    var_32 = 0;
    var_40 = 8;
    pri = fun_02A8(var_32)
    var_48 = 1;
    var_56 = 8;
    pri = fun_1678(var_48)
    var_64 = 0;
    pri = fun_1738()
    OP_JUMP lab_ABE8
// lab_A858
    pri = var_8;
    alt = 15;
    OP_JSLESS lab_A940
    OP_CONST_S -32, 4
    var_8 = 33512;
    pri = SoundPostEvent(var_8)
    var_16 = -2889052769637578743;
    var_24 = 8;
    pri = fun_9048(var_16)
    var_32 = 0;
    var_40 = 8;
    pri = fun_02A8(var_32)
    var_48 = 1;
    var_56 = 8;
    pri = fun_1678(var_48)
    var_64 = 0;
    pri = fun_1738()
    OP_JUMP lab_ABE8
// lab_A940
    pri = var_8;
    alt = 10;
    OP_JSLESS lab_AA28
    OP_CONST_S -32, 3
    var_8 = 33728;
    pri = SoundPostEvent(var_8)
    var_16 = -2889056068172463376;
    var_24 = 8;
    pri = fun_9048(var_16)
    var_32 = 0;
    var_40 = 8;
    pri = fun_02A8(var_32)
    var_48 = 1;
    var_56 = 8;
    pri = fun_1678(var_48)
    var_64 = 0;
    pri = fun_1738()
    OP_JUMP lab_ABE8
// lab_AA28
    pri = var_8;
    alt = 5;
    OP_JSLESS lab_AB10
    OP_CONST_S -32, 2
    var_8 = 33944;
    pri = SoundPostEvent(var_8)
    var_16 = -2889054968660835165;
    var_24 = 8;
    pri = fun_9048(var_16)
    var_32 = 0;
    var_40 = 8;
    pri = fun_02A8(var_32)
    var_48 = 1;
    var_56 = 8;
    pri = fun_1678(var_48)
    var_64 = 0;
    pri = fun_1738()
    OP_JUMP lab_ABE8
// lab_AB10
    pri = var_8;
    alt = 1;
    OP_JSLESS lab_ABE8
    OP_CONST_S -32, 1
    var_8 = 34160;
    pri = SoundPostEvent(var_8)
    var_16 = -2889049471102694110;
    var_24 = 8;
    pri = fun_9048(var_16)
    var_32 = 0;
    var_40 = 8;
    pri = fun_02A8(var_32)
    var_48 = 1;
    var_56 = 8;
    pri = fun_1678(var_48)
    var_64 = 0;
    pri = fun_1738()
// lab_ABE8
    OP_CONST_S -40, 1
    OP_ZERO_P_S -48
    OP_JUMP lab_AC30
// lab_AC30
    OP_LOAD_S_BOTH -48, -32
    OP_JSGEQ lab_B418
    alt = 31728;
    pri = var_48;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_8 = pri;
    pri = FlagGet(var_8)
    OP_JZER lab_ACD8
    OP_JUMP lab_AC28
// lab_B418
    pri = var_8;
    OP_EQ_P_C_PRI 151
    OP_JZER lab_B660
    arg_-3 = -2891003303265646607;
    var_8 = 8;
    pri = fun_9048(var_0)
    var_16 = 1;
    var_24 = 8;
    pri = fun_1678(var_16)
    var_32 = 0;
    pri = fun_1738()
    var_40 = 1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 1;
    var_72 = var_24;
    var_80 = 40;
    pri = fun_5DE8(var_72, var_64, var_56, var_48, var_40)
    var_88 = 6;
    var_96 = 4;
    var_104 = var_24;
    var_112 = 24;
    pri = fun_8190(var_104, var_96, var_88)
    var_120 = 34560;
    pri = SoundPostEvent(var_120)
    var_128 = 3;
    var_136 = 0;
    var_144 = -6351129278465653391;
    var_152 = 24;
    pri = fun_1530(var_144, var_136, var_128)
    var_160 = 8802641224559852288;
    var_168 = 8;
    pri = fun_05E0(var_160)
    var_176 = 0;
    var_184 = 8;
    pri = fun_02A8(var_176)
    var_192 = 1;
    var_200 = 8;
    pri = fun_1678(var_192)
    var_208 = 0;
    pri = fun_1738()
    var_216 = 7769153342794936670;
    pri = FlagSet(var_216)
    var_224 = -5159279941048701033;
    pri = FlagSet(var_224)
    var_232 = -1138003354602191756;
    pri = FlagSet(var_232)
// lab_B660
    pri = 0;
    return pri;
// lab_ACD8
    pri = var_40;
    OP_JNZ lab_AD38
    var_8 = -2891002203754018396;
    var_16 = 8;
    pri = fun_9048(var_8)
    var_24 = 1;
    var_32 = 8;
    pri = fun_1678(var_24)
// lab_AD38
    alt = 31728;
    pri = var_48;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 24
    OP_LOAD_I 
    var_56 = pri;
    pri = var_56;
    OP_JNZ lab_B0C8
    var_16 = 0;
    var_24 = 0;
    alt = 31728;
    pri = var_48;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_LOAD_I 
    var_32 = pri;
    var_40 = 0;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
    var_48 = -2891846628684295219;
    var_56 = 8;
    pri = fun_9048(var_48)
    var_64 = 1;
    var_72 = 8;
    pri = fun_1678(var_64)
    var_80 = 0;
    pri = fun_1738()
    var_88 = 1;
    var_96 = 3;
    var_104 = 0;
    var_112 = 1;
    var_120 = var_24;
    var_128 = 40;
    pri = fun_5DE8(var_120, var_112, var_104, var_96, var_88)
    var_136 = 6;
    var_144 = 4;
    var_152 = var_24;
    var_160 = 24;
    pri = fun_8190(var_152, var_144, var_136)
    var_168 = 0;
    var_176 = 8;
    pri = fun_1A80(var_168)
    var_184 = 3;
    var_192 = 0;
    alt = 31728;
    pri = var_48;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 40
    OP_LOAD_I 
    var_200 = pri;
    var_208 = 24;
    pri = fun_1530(var_200, var_192, var_184)
    var_216 = 34376;
    pri = SoundPostEvent(var_216)
    var_224 = 8802641224559852288;
    var_232 = 8;
    pri = fun_05E0(var_224)
    var_240 = 0;
    var_248 = 8;
    pri = fun_02A8(var_240)
    var_256 = 1;
    var_264 = 8;
    pri = fun_1678(var_256)
    var_272 = 0;
    pri = fun_1738()
    var_280 = 3;
    var_288 = 0;
    alt = 31728;
    pri = var_48;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 16
    OP_LOAD_I 
    var_296 = pri;
    var_304 = 24;
    pri = fun_1530(var_296, var_288, var_280)
    var_312 = 1;
    var_320 = 8;
    pri = fun_1678(var_312)
    var_328 = 0;
    pri = fun_1738()
    OP_JUMP lab_B2B0
// lab_B0C8
    var_8 = 0;
    var_16 = 0;
    alt = 31728;
    pri = var_48;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_LOAD_I 
    var_24 = pri;
    var_32 = 0;
    pri = WordSetNumber(var_32, var_24, var_16, var_8)
    var_40 = -2891846628684295219;
    var_48 = 8;
    pri = fun_9048(var_40)
    var_56 = 1;
    var_64 = 8;
    pri = fun_1678(var_56)
    var_72 = 0;
    pri = fun_1738()
    var_80 = 1;
    var_88 = 3;
    var_96 = 0;
    var_104 = 1;
    var_112 = var_24;
    var_120 = 40;
    pri = fun_5DE8(var_112, var_104, var_96, var_88, var_80)
    var_128 = 6;
    var_136 = 4;
    var_144 = 2;
    var_152 = 0;
    var_160 = 9;
    alt = 31728;
    pri = var_48;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 24
    OP_LOAD_I 
    var_168 = pri;
    alt = 31728;
    pri = var_48;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 16
    OP_LOAD_I 
    var_176 = pri;
    var_184 = var_24;
    var_192 = 64;
    pri = fun_8390(var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128)
// lab_B2B0
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    var_32 = -1;
    var_40 = 0;
    var_48 = 1;
    var_56 = var_24;
    var_64 = 56;
    pri = fun_3AB0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    alt = 31728;
    pri = var_48;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 32
    OP_LOAD_I 
    var_72 = pri;
    var_80 = 8;
    pri = fun_9048(var_72)
    var_88 = 1;
    var_96 = 8;
    pri = fun_1678(var_88)
    var_104 = 0;
    pri = fun_1738()
    alt = 31728;
    pri = var_48;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_112 = pri;
    pri = FlagSet(var_112)
    OP_ZERO_P_S -40
    OP_JUMP lab_AC28
// lab_AC28
    OP_INC_P_S -48
}
// fun_B678
fun_B678() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = -5159279941048701033;
    pri = FlagGet(var_16)
    OP_JZER lab_B968
    var_24 = -2891004402777274818;
    var_32 = 8;
    pri = fun_9048(var_24)
    var_40 = 0;
    var_48 = 0;
    var_56 = 1;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 48;
    pri = fun_18C0(var_80, var_72, var_64, var_56, var_48, var_40)
    OP_JZER lab_B8F8
    var_96 = 1;
    var_104 = 3;
    var_112 = 0;
    var_120 = 1;
    var_128 = var_8;
    var_136 = 40;
    pri = fun_5DE8(var_128, var_120, var_112, var_104, var_96)
    var_144 = 34744;
    pri = SoundPostEvent(var_144)
    var_152 = 6;
    var_160 = 4;
    var_168 = var_8;
    var_176 = 24;
    pri = fun_8190(var_168, var_160, var_152)
    var_184 = 0;
    var_192 = 8;
    pri = fun_02A8(var_184)
    var_200 = 1;
    var_208 = 1;
    var_216 = -1;
    var_224 = -1;
    var_232 = 0;
    var_240 = 1;
    var_248 = var_8;
    var_256 = 56;
    pri = fun_3AB0(var_248, var_240, var_232, var_224, var_216, var_208, var_200)
    var_264 = -2891006601800531240;
    var_272 = 8;
    pri = fun_9048(var_264)
    var_280 = 1;
    var_288 = 8;
    pri = fun_1678(var_280)
    var_296 = 0;
    pri = fun_1738()
    var_304 = -5159279941048701033;
    pri = FlagReset(var_304)
    OP_JUMP lab_B958
// lab_B968
    var_8 = -2891005502288903029;
    var_16 = 8;
    pri = fun_9048(var_8)
    var_24 = 0;
    var_32 = 0;
    var_40 = 1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 0;
    var_72 = 48;
    pri = fun_18C0(var_64, var_56, var_48, var_40, var_32, var_24)
    OP_JZER lab_BB80
    var_80 = 1;
    var_88 = 3;
    var_96 = 0;
    var_104 = 1;
    var_112 = var_8;
    var_120 = 40;
    pri = fun_5DE8(var_112, var_104, var_96, var_88, var_80)
    var_128 = 34960;
    pri = SoundPostEvent(var_128)
    var_136 = 6;
    var_144 = 4;
    var_152 = var_8;
    var_160 = 24;
    pri = fun_8190(var_152, var_144, var_136)
    var_168 = 0;
    var_176 = 8;
    pri = fun_02A8(var_168)
    var_184 = 1;
    var_192 = 1;
    var_200 = -1;
    var_208 = -1;
    var_216 = 0;
    var_224 = 1;
    var_232 = var_8;
    var_240 = 56;
    pri = fun_3AB0(var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_248 = -2891007701312159451;
    var_256 = 8;
    pri = fun_9048(var_248)
    var_264 = 1;
    var_272 = 8;
    pri = fun_1678(var_264)
    var_280 = 0;
    pri = fun_1738()
    var_288 = -5159279941048701033;
    pri = FlagSet(var_288)
    OP_JUMP lab_BBE0
// lab_BB80
    var_8 = -2893833446196094046;
    var_16 = 8;
    pri = fun_9048(var_8)
    var_24 = 1;
    var_32 = 8;
    pri = fun_1678(var_24)
    var_40 = 0;
    pri = fun_1738()
// lab_BBE0
    pri = 0;
    return pri;
// lab_B8F8
    var_8 = -2893833446196094046;
    var_16 = 8;
    pri = fun_9048(var_8)
    var_24 = 1;
    var_32 = 8;
    pri = fun_1678(var_24)
    var_40 = 0;
    pri = fun_1738()
// lab_B958
    OP_JUMP lab_BBE0
}
