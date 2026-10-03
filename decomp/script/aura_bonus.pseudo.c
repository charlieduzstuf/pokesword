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
// switch_0678
        case default:
        {
// switch_0678_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_06C0
// lab_06C0
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
            OP_JNZ lab_0768
            var_88 = 0;
            pri = fun_0898()
// lab_0768
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_0678_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0260
                case default:
                {
// switch_0260_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_02D8
// lab_02D8
                    OP_JUMP lab_06C0
                }
                case 0x0:
                {
// switch_0260_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_02D8
                }
                case 0x1:
                {
// switch_0260_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_02D8
                }
                case 0x2:
                {
// switch_0260_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_02D8
                }
                case 0x3:
                {
// switch_0260_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_02D8
                }
                case 0x4:
                {
// switch_0260_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_02D8
                }
                case 0x5:
                {
// switch_0260_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_02D8
                }
            }
        }
        case 0x65:
        {
// switch_0678_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_0418
                case default:
                {
// switch_0418_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0490
// lab_0490
                    OP_JUMP lab_06C0
                }
                case 0x0:
                {
// switch_0418_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_0490
                }
                case 0x1:
                {
// switch_0418_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_0490
                }
                case 0x2:
                {
// switch_0418_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_0490
                }
                case 0x3:
                {
// switch_0418_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0490
                }
                case 0x4:
                {
// switch_0418_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_0490
                }
                case 0x5:
                {
// switch_0418_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_0490
                }
            }
        }
        case 0x66:
        {
// switch_0678_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_05D0
                case default:
                {
// switch_05D0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0648
// lab_0648
                    OP_JUMP lab_06C0
                }
                case 0x0:
                {
// switch_05D0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_0648
                }
                case 0x1:
                {
// switch_05D0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_0648
                }
                case 0x2:
                {
// switch_05D0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_0648
                }
                case 0x3:
                {
// switch_05D0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0648
                }
                case 0x4:
                {
// switch_05D0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_0648
                }
                case 0x5:
                {
// switch_05D0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_0648
                }
            }
        }
    }
}
// fun_0780
fun_0780() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_0060(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_07E8
fun_07E8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0780(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0838
fun_0838() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_07E8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0898
fun_0898() {
    OP_JUMP lab_08B0
// lab_08B0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_08F0
    pri = 0;
    return pri;
// lab_08F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_08B0
    pri = 0;
    return pri;
}
// fun_0930
fun_0930() {
    var_8 = 0;
    pri = fun_0898()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_09E0
    var_32 = 32;
    pri = SoundPostEvent(var_32)
// lab_09E0
    pri = 0;
    return pri;
}
// fun_09F0
fun_09F0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_0A20
fun_0A20() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_0A58
fun_0A58() {
    OP_JUMP lab_0A70
// lab_0A70
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_0AB8
    OP_JUMP lab_0AE8
    OP_JUMP lab_0AD8
// lab_0AB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_0AE8
    pri = 0;
    return pri;
// lab_0AD8
    OP_JUMP lab_0A70
}
// fun_0AF8
fun_0AF8() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_0B28
fun_0B28() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0B78
fun_0B78() {
    var_8 = arg_0;
    pri = UpdateWalletWindow_(var_8)
    pri = 0;
    return pri;
}
// fun_0BB0
fun_0BB0() {
    var_8 = arg_0;
    pri = AddWatt_(var_8)
    return pri;
}
// fun_0BE0
fun_0BE0() {
    var_8 = 208;
    var_16 = 8;
    pri = fun_0A20(var_8)
    var_24 = 0;
    pri = fun_0A58()
    var_32 = arg_0;
    var_40 = 8;
    pri = fun_0BB0(var_32)
    var_48 = 1;
    var_56 = 8;
    pri = fun_0B78(var_48)
    var_64 = 384;
    pri = SoundPostEvent(var_64)
    var_72 = 0;
    var_80 = 8;
    pri = fun_0B28(var_72)
    var_88 = 0;
    var_96 = 0;
    var_104 = arg_0;
    var_112 = 2;
    pri = WordSetNumber(var_112, var_104, var_96, var_88)
    var_120 = 3;
    var_128 = 0;
    var_136 = 3920114689893802877;
    var_144 = 24;
    pri = fun_0838(var_136, var_128, var_120)
    var_152 = 1;
    var_160 = 8;
    pri = fun_0930(var_152)
    var_168 = 0;
    pri = fun_09F0()
    var_176 = 0;
    pri = fun_0AF8()
    pri = 0;
    return pri;
}
// fun_0D70
fun_0D70() {
    pri = g_mode;
    switch (pri) {
// switch_0E08
        case default:
        {
// switch_0E08_case_default
            pri = CommandNOP()
            OP_JUMP lab_0E40
// lab_0E40
            pri = 0;
            return pri;
        }
        case 0xc0c7dde20a0513d6:
        {
// switch_0E08_case_0xc0c7dde20a0513d6
            var_8 = 0;
            pri = fun_0E68()
            OP_JUMP lab_0E40
        }
        case 0x0:
        {
// switch_0E08_case_0x0
            var_8 = 0;
            pri = fun_0E50()
            OP_JUMP lab_0E40
        }
    }
}
// fun_0E50
fun_0E50() {
    pri = 0;
    return pri;
}
// fun_0E68
fun_0E68() {
    var_16 = 0;
    pri = TempWorkGet(var_16)
    var_8 = pri;
    var_32 = 1;
    var_40 = 4616189618054758400;
    var_48 = var_8;
    pri = float(var_48)
    var_56 = pri;
    pri = floatlog(var_56, var_48)
    alt = 4636737291354636288;
    var_64 = pri;
    var_72 = alt;
    pri = floatmul(var_72, var_64)
    var_80 = pri;
    pri = floatround(var_80, var_72)
    var_16 = pri;
    var_88 = var_16;
    var_96 = 8;
    pri = fun_0BE0(var_88)
    pri = 0;
    return pri;
}
