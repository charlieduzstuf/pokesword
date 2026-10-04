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
    pri = EnableFieldObjectLookAtBGObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_00B8
fun_00B8() {
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
// switch_06D0
        case default:
        {
// switch_06D0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_0718
// lab_0718
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
            OP_JNZ lab_07C0
            var_88 = 0;
            pri = fun_0858()
// lab_07C0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_06D0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_02B8
                case default:
                {
// switch_02B8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0330
// lab_0330
                    OP_JUMP lab_0718
                }
                case 0x0:
                {
// switch_02B8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0330
                }
                case 0x1:
                {
// switch_02B8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0330
                }
                case 0x2:
                {
// switch_02B8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0330
                }
                case 0x3:
                {
// switch_02B8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0330
                }
                case 0x4:
                {
// switch_02B8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0330
                }
                case 0x5:
                {
// switch_02B8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0330
                }
            }
        }
        case 0x65:
        {
// switch_06D0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_0470
                case default:
                {
// switch_0470_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_04E8
// lab_04E8
                    OP_JUMP lab_0718
                }
                case 0x0:
                {
// switch_0470_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_04E8
                }
                case 0x1:
                {
// switch_0470_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_04E8
                }
                case 0x2:
                {
// switch_0470_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_04E8
                }
                case 0x3:
                {
// switch_0470_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_04E8
                }
                case 0x4:
                {
// switch_0470_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_04E8
                }
                case 0x5:
                {
// switch_0470_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_04E8
                }
            }
        }
        case 0x66:
        {
// switch_06D0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_0628
                case default:
                {
// switch_0628_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_06A0
// lab_06A0
                    OP_JUMP lab_0718
                }
                case 0x0:
                {
// switch_0628_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_06A0
                }
                case 0x1:
                {
// switch_0628_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_06A0
                }
                case 0x2:
                {
// switch_0628_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_06A0
                }
                case 0x3:
                {
// switch_0628_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_06A0
                }
                case 0x4:
                {
// switch_0628_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_06A0
                }
                case 0x5:
                {
// switch_0628_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_06A0
                }
            }
        }
    }
}
// fun_07D8
fun_07D8() {
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
    pri = fun_00B8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0858
fun_0858() {
    OP_JUMP lab_0870
// lab_0870
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_08B0
    pri = 0;
    return pri;
// lab_08B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0870
    pri = 0;
    return pri;
}
// fun_08F0
fun_08F0() {
    var_8 = 0;
    pri = fun_0858()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_09A0
    var_32 = 32;
    pri = SoundPostEvent(var_32)
// lab_09A0
    pri = 0;
    return pri;
}
// fun_09B0
fun_09B0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_09E0
fun_09E0() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = -1;
    var_40 = var_8;
    var_48 = 8802641224559852288;
    var_56 = 40;
    pri = fun_0060(var_48, var_40, var_32, var_24, var_16)
    var_64 = arg_2;
    pri = arg_1;
    alt = 4;
    pri |= alt;
    var_72 = pri;
    var_80 = var_8;
    var_88 = arg_0;
    var_96 = 32;
    pri = fun_07D8(var_88, var_80, var_72, var_64)
    var_104 = 1;
    var_112 = 8;
    pri = fun_08F0(var_104)
    var_120 = 0;
    pri = fun_09B0()
    pri = 0;
    return pri;
}
// fun_0AF8
fun_0AF8() {
    pri = g_mode;
    switch (pri) {
// switch_0BB8
        case default:
        {
// switch_0BB8_case_default
            pri = CommandNOP()
            OP_JUMP lab_0C00
// lab_0C00
            pri = 0;
            return pri;
        }
        case 0xca2c32fcec9fd9a9:
        {
// switch_0BB8_case_0xca2c32fcec9fd9a9
            var_8 = 0;
            pri = fun_0C28()
            OP_JUMP lab_0C00
        }
        case 0x0:
        {
// switch_0BB8_case_0x0
            var_8 = 0;
            pri = fun_0C10()
            OP_JUMP lab_0C00
        }
        case 0x75dd2114cbfa6d5:
        {
// switch_0BB8_case_0x75dd2114cbfa6d5
            var_8 = 0;
            pri = fun_0C68()
            OP_JUMP lab_0C00
        }
    }
}
// fun_0C10
fun_0C10() {
    pri = 0;
    return pri;
}
// fun_0C28
fun_0C28() {
    pri = 0;
    return pri;
}
// public GetSceneChangeData
public GetSceneChangeData() {
    alt = 208;
    pri = arg_0;
    OP_LIDX_P_B 3
    return pri;
}
// fun_0C68
fun_0C68() {
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    alt = 1270;
    OP_JSLEQ lab_0CF8
    var_16 = 3;
    var_24 = 8;
    var_32 = 2672398226407131484;
    var_40 = 24;
    pri = fun_09E0(var_32, var_24, var_16)
    OP_JUMP lab_0D30
// lab_0CF8
    var_8 = 3;
    var_16 = 8;
    var_24 = 2672401524942016117;
    var_32 = 24;
    pri = fun_09E0(var_24, var_16, var_8)
// lab_0D30
    pri = 0;
    return pri;
}
