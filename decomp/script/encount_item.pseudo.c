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
            pri = fun_0838()
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
    OP_JUMP lab_0850
// lab_0850
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0890
    pri = 0;
    return pri;
// lab_0890
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0850
    pri = 0;
    return pri;
}
// fun_08D0
fun_08D0() {
    var_8 = 0;
    pri = fun_0838()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_0980
    var_32 = 32;
    pri = SoundPostEvent(var_32)
// lab_0980
    pri = 0;
    return pri;
}
// fun_0990
fun_0990() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_09C0
fun_09C0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_0A38()
    return pri;
}
// fun_0A38
fun_0A38() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_0A78
fun_0A78() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0AC8
fun_0AC8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0B18
fun_0B18() {
    pri = g_mode;
    switch (pri) {
// switch_0BB0
        case default:
        {
// switch_0BB0_case_default
            pri = CommandNOP()
            OP_JUMP lab_0BE8
// lab_0BE8
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_0BB0_case_0x0
            var_8 = 0;
            pri = fun_0BF8()
            OP_JUMP lab_0BE8
        }
        case 0x7664902f29cfbdeb:
        {
// switch_0BB0_case_0x7664902f29cfbdeb
            var_8 = 0;
            pri = fun_0C10()
            OP_JUMP lab_0BE8
        }
    }
}
// fun_0BF8
fun_0BF8() {
    pri = 0;
    return pri;
}
// fun_0C10
fun_0C10() {
    var_16 = 0;
    pri = TempWorkGet(var_16)
    var_8 = pri;
    var_32 = 1;
    pri = TempWorkGet(var_32)
    var_16 = pri;
    var_48 = var_8;
    var_56 = 8;
    pri = fun_0FA0(var_48)
    var_24 = pri;
    pri = var_24;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0F88
    pri = var_16;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_0F08
    var_64 = 3;
    var_72 = 0;
    var_80 = 6640829231083116368;
    var_88 = 24;
    pri = fun_07E8(var_80, var_72, var_64)
    var_104 = 0;
    var_112 = 0;
    var_120 = 1;
    var_128 = 0;
    var_136 = 0;
    var_144 = 0;
    var_152 = 48;
    pri = fun_09C0(var_144, var_136, var_128, var_120, var_112, var_104)
    var_32 = pri;
    pri = var_32;
    OP_JZER lab_0ED8
    var_160 = 208;
    pri = SoundPostEvent(var_160)
    var_168 = var_8;
    pri = UseEncountAuxItem_(var_168)
    var_176 = 1;
    var_184 = var_8;
    pri = ItemSub(var_184, var_176)
    var_192 = 0;
    var_200 = 8;
    pri = fun_0A78(var_192)
    var_208 = 1;
    var_216 = var_8;
    var_224 = 1;
    var_232 = 24;
    pri = fun_0AC8(var_224, var_216, var_208)
    var_240 = 3;
    var_248 = 0;
    var_256 = 6640830330594744579;
    var_264 = 24;
    pri = fun_07E8(var_256, var_248, var_240)
    var_272 = 1;
    var_280 = 8;
    pri = fun_08D0(var_272)
    var_288 = 0;
    var_296 = 1;
    var_304 = 480;
    pri = PokeMemoryCheckParty(var_304, var_296, var_288)
// lab_0F88
    pri = 0;
    return pri;
// lab_0F08
    var_8 = 3;
    var_16 = 0;
    var_24 = 6640832529618001001;
    var_32 = 24;
    pri = fun_07E8(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_08D0(var_40)
    var_56 = 0;
    pri = fun_0990()
// lab_0ED8
    var_8 = 0;
    pri = fun_0990()
    OP_JUMP lab_0F78
// lab_0F78
    OP_JUMP lab_0F88
}
// fun_0FA0
fun_0FA0() {
    pri = arg_0;
    OP_EQ_P_C_PRI 79
    OP_JNZ lab_1020
    pri = arg_0;
    OP_EQ_P_C_PRI 76
    OP_JNZ lab_1020
    pri = arg_0;
    OP_EQ_P_C_PRI 77
    OP_JNZ lab_1020
    pri = 0;
    OP_JUMP lab_1028
// lab_1020
    pri = 1;
// lab_1028
    OP_JZER lab_1048
    pri = 1;
    return pri;
// lab_1048
    pri = 0;
    return pri;
}
