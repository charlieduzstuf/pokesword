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
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_00B8
fun_00B8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_00F8
fun_00F8() {
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
// switch_0710
        case default:
        {
// switch_0710_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_0758
// lab_0758
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
            OP_JNZ lab_0800
            var_88 = 0;
            pri = fun_0898()
// lab_0800
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_0710_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_02F8
                case default:
                {
// switch_02F8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0370
// lab_0370
                    OP_JUMP lab_0758
                }
                case 0x0:
                {
// switch_02F8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0370
                }
                case 0x1:
                {
// switch_02F8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0370
                }
                case 0x2:
                {
// switch_02F8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0370
                }
                case 0x3:
                {
// switch_02F8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0370
                }
                case 0x4:
                {
// switch_02F8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0370
                }
                case 0x5:
                {
// switch_02F8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0370
                }
            }
        }
        case 0x65:
        {
// switch_0710_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_04B0
                case default:
                {
// switch_04B0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0528
// lab_0528
                    OP_JUMP lab_0758
                }
                case 0x0:
                {
// switch_04B0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_0528
                }
                case 0x1:
                {
// switch_04B0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_0528
                }
                case 0x2:
                {
// switch_04B0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_0528
                }
                case 0x3:
                {
// switch_04B0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0528
                }
                case 0x4:
                {
// switch_04B0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_0528
                }
                case 0x5:
                {
// switch_04B0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_0528
                }
            }
        }
        case 0x66:
        {
// switch_0710_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_0668
                case default:
                {
// switch_0668_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_06E0
// lab_06E0
                    OP_JUMP lab_0758
                }
                case 0x0:
                {
// switch_0668_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_06E0
                }
                case 0x1:
                {
// switch_0668_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_06E0
                }
                case 0x2:
                {
// switch_0668_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_06E0
                }
                case 0x3:
                {
// switch_0668_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_06E0
                }
                case 0x4:
                {
// switch_0668_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_06E0
                }
                case 0x5:
                {
// switch_0668_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_06E0
                }
            }
        }
    }
}
// fun_0818
fun_0818() {
    var_8 = 0;
    var_16 = 0;
    pri = arg_2;
    alt = 8;
    pri |= alt;
    var_24 = pri;
    var_32 = arg_3;
    var_40 = 102;
    var_48 = arg_0;
    var_56 = arg_1;
    var_64 = 56;
    pri = fun_00F8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
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
    pri = g_mode;
    switch (pri) {
// switch_0AE0
        case default:
        {
// switch_0AE0_case_default
            pri = CommandNOP()
            OP_JUMP lab_0B28
// lab_0B28
            pri = 0;
            return pri;
        }
        case 0x959737ec924afe6b:
        {
// switch_0AE0_case_0x959737ec924afe6b
            var_8 = 0;
            pri = fun_0B68()
            OP_JUMP lab_0B28
        }
        case 0xbf9e55fecd01ee37:
        {
// switch_0AE0_case_0xbf9e55fecd01ee37
            var_8 = 0;
            pri = fun_0B50()
            OP_JUMP lab_0B28
        }
        case 0x0:
        {
// switch_0AE0_case_0x0
            var_8 = 0;
            pri = fun_0B38()
            OP_JUMP lab_0B28
        }
    }
}
// fun_0B38
fun_0B38() {
    pri = 0;
    return pri;
}
// fun_0B50
fun_0B50() {
    pri = 0;
    return pri;
}
// fun_0B68
fun_0B68() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = -1;
    var_40 = var_8;
    var_48 = 8802641224559852288;
    var_56 = 40;
    pri = fun_0060(var_48, var_40, var_32, var_24, var_16)
    var_64 = 3;
    var_72 = 8;
    var_80 = var_8;
    var_88 = 7375328474610132035;
    var_96 = 32;
    pri = fun_0818(var_88, var_80, var_72, var_64)
    var_104 = 1;
    var_112 = 8;
    pri = fun_0930(var_104)
    var_120 = 0;
    pri = fun_09F0()
    var_128 = 208;
    pri = CallTips(var_128)
    var_136 = -1;
    var_144 = 8802641224559852288;
    var_152 = 16;
    pri = fun_00B8(var_144, var_136)
    pri = 0;
    return pri;
}
