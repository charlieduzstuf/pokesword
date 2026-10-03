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
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0098
fun_0098() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_00F0
fun_00F0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0130
fun_0130() {
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
// switch_0748
        case default:
        {
// switch_0748_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_0790
// lab_0790
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
            OP_JNZ lab_0838
            var_88 = 0;
            pri = fun_09F0()
// lab_0838
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_0748_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0330
                case default:
                {
// switch_0330_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_03A8
// lab_03A8
                    OP_JUMP lab_0790
                }
                case 0x0:
                {
// switch_0330_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_03A8
                }
                case 0x1:
                {
// switch_0330_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_03A8
                }
                case 0x2:
                {
// switch_0330_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_03A8
                }
                case 0x3:
                {
// switch_0330_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_03A8
                }
                case 0x4:
                {
// switch_0330_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_03A8
                }
                case 0x5:
                {
// switch_0330_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_03A8
                }
            }
        }
        case 0x65:
        {
// switch_0748_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_04E8
                case default:
                {
// switch_04E8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0560
// lab_0560
                    OP_JUMP lab_0790
                }
                case 0x0:
                {
// switch_04E8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_0560
                }
                case 0x1:
                {
// switch_04E8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_0560
                }
                case 0x2:
                {
// switch_04E8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_0560
                }
                case 0x3:
                {
// switch_04E8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0560
                }
                case 0x4:
                {
// switch_04E8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_0560
                }
                case 0x5:
                {
// switch_04E8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_0560
                }
            }
        }
        case 0x66:
        {
// switch_0748_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_06A0
                case default:
                {
// switch_06A0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0718
// lab_0718
                    OP_JUMP lab_0790
                }
                case 0x0:
                {
// switch_06A0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_0718
                }
                case 0x1:
                {
// switch_06A0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_0718
                }
                case 0x2:
                {
// switch_06A0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_0718
                }
                case 0x3:
                {
// switch_06A0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0718
                }
                case 0x4:
                {
// switch_06A0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_0718
                }
                case 0x5:
                {
// switch_06A0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_0718
                }
            }
        }
    }
}
// fun_0850
fun_0850() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0060(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_08F8
    pri = 1;
    return pri;
// lab_08F8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_0940
fun_0940() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0990
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0850(var_8)
    arg_2 = pri;
// lab_0990
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0130(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_09F0
fun_09F0() {
    OP_JUMP lab_0A08
// lab_0A08
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0A48
    pri = 0;
    return pri;
// lab_0A48
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A08
    pri = 0;
    return pri;
}
// fun_0A88
fun_0A88() {
    var_8 = 0;
    pri = fun_09F0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_0B38
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_0B38
    pri = 0;
    return pri;
}
// fun_0B48
fun_0B48() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_0B78
fun_0B78() {
    pri = g_mode;
    switch (pri) {
// switch_0C38
        case default:
        {
// switch_0C38_case_default
            pri = CommandNOP()
            OP_JUMP lab_0C80
// lab_0C80
            pri = 0;
            return pri;
        }
        case 0xe0a2791897f19712:
        {
// switch_0C38_case_0xe0a2791897f19712
            var_8 = 0;
            pri = fun_0CA8()
            OP_JUMP lab_0C80
        }
        case 0x0:
        {
// switch_0C38_case_0x0
            var_8 = 0;
            pri = fun_0C90()
            OP_JUMP lab_0C80
        }
        case 0x1d00e56f79ddff82:
        {
// switch_0C38_case_0x1d00e56f79ddff82
            var_8 = 0;
            pri = fun_0CC0()
            OP_JUMP lab_0C80
        }
    }
}
// fun_0C90
fun_0C90() {
    pri = 0;
    return pri;
}
// fun_0CA8
fun_0CA8() {
    pri = 0;
    return pri;
}
// fun_0CC0
fun_0CC0() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = -1;
    var_40 = 8802641224559852288;
    var_48 = var_8;
    var_56 = 40;
    pri = fun_0098(var_48, var_40, var_32, var_24, var_16)
    var_64 = 1;
    var_72 = 1;
    var_80 = -1;
    var_88 = var_8;
    var_96 = 8802641224559852288;
    var_104 = 40;
    pri = fun_0098(var_96, var_88, var_80, var_72, var_64)
    var_112 = 0;
    var_120 = 3;
    var_128 = 0;
    var_136 = 100;
    var_144 = -1;
    var_152 = 1427195359801838259;
    var_160 = var_8;
    var_168 = 56;
    pri = fun_0940(var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_176 = 1;
    var_184 = 8;
    pri = fun_0A88(var_176)
    var_192 = 0;
    pri = fun_0B48()
    var_200 = -1;
    var_208 = 8802641224559852288;
    var_216 = 16;
    pri = fun_00F0(var_208, var_200)
    var_224 = -1;
    var_232 = var_8;
    var_240 = 16;
    pri = fun_00F0(var_232, var_224)
    pri = 0;
    return pri;
}
