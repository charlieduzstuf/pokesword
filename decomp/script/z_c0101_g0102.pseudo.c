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
// switch_06B0
        case default:
        {
// switch_06B0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_06F8
// lab_06F8
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
            OP_JNZ lab_07A0
            var_88 = 0;
            pri = fun_0958()
// lab_07A0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_06B0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0298
                case default:
                {
// switch_0298_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0310
// lab_0310
                    OP_JUMP lab_06F8
                }
                case 0x0:
                {
// switch_0298_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0310
                }
                case 0x1:
                {
// switch_0298_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0310
                }
                case 0x2:
                {
// switch_0298_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0310
                }
                case 0x3:
                {
// switch_0298_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0310
                }
                case 0x4:
                {
// switch_0298_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0310
                }
                case 0x5:
                {
// switch_0298_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0310
                }
            }
        }
        case 0x65:
        {
// switch_06B0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_0450
                case default:
                {
// switch_0450_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_04C8
// lab_04C8
                    OP_JUMP lab_06F8
                }
                case 0x0:
                {
// switch_0450_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_04C8
                }
                case 0x1:
                {
// switch_0450_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_04C8
                }
                case 0x2:
                {
// switch_0450_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_04C8
                }
                case 0x3:
                {
// switch_0450_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_04C8
                }
                case 0x4:
                {
// switch_0450_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_04C8
                }
                case 0x5:
                {
// switch_0450_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_04C8
                }
            }
        }
        case 0x66:
        {
// switch_06B0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_0608
                case default:
                {
// switch_0608_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0680
// lab_0680
                    OP_JUMP lab_06F8
                }
                case 0x0:
                {
// switch_0608_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_0680
                }
                case 0x1:
                {
// switch_0608_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_0680
                }
                case 0x2:
                {
// switch_0608_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_0680
                }
                case 0x3:
                {
// switch_0608_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0680
                }
                case 0x4:
                {
// switch_0608_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_0680
                }
                case 0x5:
                {
// switch_0608_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_0680
                }
            }
        }
    }
}
// fun_07B8
fun_07B8() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0060(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_0860
    pri = 1;
    return pri;
// lab_0860
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_08A8
fun_08A8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_08F8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_07B8(var_8)
    arg_2 = pri;
// lab_08F8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0098(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0958
fun_0958() {
    OP_JUMP lab_0970
// lab_0970
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_09B0
    pri = 0;
    return pri;
// lab_09B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0970
    pri = 0;
    return pri;
}
// fun_09F0
fun_09F0() {
    var_8 = 0;
    pri = fun_0958()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_0AA0
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_0AA0
    pri = 0;
    return pri;
}
// fun_0AB0
fun_0AB0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_0AE0
fun_0AE0() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_0B18
fun_0B18() {
    OP_JUMP lab_0B30
// lab_0B30
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_0B78
    OP_JUMP lab_0BA8
    OP_JUMP lab_0B98
// lab_0B78
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_0BA8
    pri = 0;
    return pri;
// lab_0B98
    OP_JUMP lab_0B30
}
// fun_0BB8
fun_0BB8() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_0BE8
fun_0BE8() {
    pri = g_mode;
    switch (pri) {
// switch_0E60
        case default:
        {
// switch_0E60_case_default
            pri = CommandNOP()
            OP_JUMP lab_0F58
// lab_0F58
            pri = 0;
            return pri;
        }
        case 0x8e00550b65e196f7:
        {
// switch_0E60_case_0x8e00550b65e196f7
            var_8 = 0;
            pri = fun_0F98()
            OP_JUMP lab_0F58
        }
        case 0xa896062f9e4ae71f:
        {
// switch_0E60_case_0xa896062f9e4ae71f
            var_8 = 0;
            pri = fun_0F80()
            OP_JUMP lab_0F58
        }
        case 0xb22327297d30f999:
        {
// switch_0E60_case_0xb22327297d30f999
            var_8 = 0;
            pri = fun_14C8()
            OP_JUMP lab_0F58
        }
        case 0xb3299dc3da5ad085:
        {
// switch_0E60_case_0xb3299dc3da5ad085
            var_8 = 0;
            pri = fun_0FC8()
            OP_JUMP lab_0F58
        }
        case 0xe076e3e59570ba30:
        {
// switch_0E60_case_0xe076e3e59570ba30
            var_8 = 0;
            pri = fun_0FB0()
            OP_JUMP lab_0F58
        }
        case 0xfd645b7f9b6844a3:
        {
// switch_0E60_case_0xfd645b7f9b6844a3
            var_8 = 0;
            pri = fun_1418()
            OP_JUMP lab_0F58
        }
        case 0x0:
        {
// switch_0E60_case_0x0
            var_8 = 0;
            pri = fun_0F68()
            OP_JUMP lab_0F58
        }
        case 0x3e3b7909398c407a:
        {
// switch_0E60_case_0x3e3b7909398c407a
            var_8 = 0;
            pri = fun_1470()
            OP_JUMP lab_0F58
        }
        case 0x4fac67122e5a4f10:
        {
// switch_0E60_case_0x4fac67122e5a4f10
            var_8 = 0;
            pri = fun_12F0()
            OP_JUMP lab_0F58
        }
        case 0x4fac68122e5a50c3:
        {
// switch_0E60_case_0x4fac68122e5a50c3
            var_8 = 0;
            pri = fun_11C8()
            OP_JUMP lab_0F58
        }
        case 0x4fac69122e5a5276:
        {
// switch_0E60_case_0x4fac69122e5a5276
            var_8 = 0;
            pri = fun_1040()
            OP_JUMP lab_0F58
        }
        case 0x4fac6d122e5a5942:
        {
// switch_0E60_case_0x4fac6d122e5a5942
            var_8 = 0;
            pri = fun_1400()
            OP_JUMP lab_0F58
        }
        case 0x4fac6e122e5a5af5:
        {
// switch_0E60_case_0x4fac6e122e5a5af5
            var_8 = 0;
            pri = fun_13E8()
            OP_JUMP lab_0F58
        }
        case 0x654bc6be40cd7665:
        {
// switch_0E60_case_0x654bc6be40cd7665
            var_8 = 0;
            pri = fun_1010()
            OP_JUMP lab_0F58
        }
    }
}
// fun_0F68
fun_0F68() {
    pri = 0;
    return pri;
}
// fun_0F80
fun_0F80() {
    pri = 0;
    return pri;
}
// fun_0F98
fun_0F98() {
    pri = 0;
    return pri;
}
// fun_0FB0
fun_0FB0() {
    pri = 0;
    return pri;
}
// fun_0FC8
fun_0FC8() {
    var_8 = 0;
    var_16 = -2925758277729978379;
    pri = WorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1010
fun_1010() {
    pri = CallHonooGymBoard()
    pri = 0;
    return pri;
}
// fun_1040
fun_1040() {
    var_8 = 336;
    var_16 = 8;
    pri = fun_0AE0(var_8)
    var_24 = 0;
    pri = fun_0B18()
    var_32 = 0;
    var_40 = 0;
    var_48 = -7033287532161752766;
    pri = WorkGet(var_48)
    var_56 = pri;
    var_64 = 1;
    pri = WordSetNumber(var_64, var_56, var_48, var_40)
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    OP_PUSH2_C 8709389080182485402, -640719265393218035
    var_112 = 56;
    pri = fun_08A8(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_120 = 1;
    var_128 = 8;
    pri = fun_09F0(var_120)
    var_136 = 0;
    pri = fun_0AB0()
    var_144 = 0;
    pri = fun_0BB8()
    var_152 = 0;
    var_160 = -7033287532161752766;
    pri = WorkSet(var_160, var_152)
    pri = 0;
    return pri;
}
// fun_11C8
fun_11C8() {
    var_8 = 552;
    var_16 = 8;
    pri = fun_0AE0(var_8)
    var_24 = 0;
    pri = fun_0B18()
    var_32 = 0;
    var_40 = 3;
    var_48 = 0;
    var_56 = 100;
    var_64 = -1;
    OP_PUSH2_C 8708395121670771883, -640719265393218035
    var_72 = 56;
    pri = fun_08A8(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = 1;
    var_88 = 8;
    pri = fun_09F0(var_80)
    var_96 = 0;
    pri = fun_0AB0()
    var_104 = 0;
    pri = fun_0BB8()
    var_112 = 0;
    var_120 = -7033287532161752766;
    pri = WorkSet(var_120, var_112)
    pri = 0;
    return pri;
}
// fun_12F0
fun_12F0() {
    var_8 = 768;
    var_16 = 8;
    pri = fun_0AE0(var_8)
    var_24 = 0;
    pri = fun_0B18()
    var_32 = 0;
    var_40 = 3;
    var_48 = 0;
    var_56 = 100;
    var_64 = -1;
    OP_PUSH2_C 8708397320694028305, -640719265393218035
    var_72 = 56;
    pri = fun_08A8(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = 1;
    var_88 = 8;
    pri = fun_09F0(var_80)
    var_96 = 0;
    pri = fun_0AB0()
    var_104 = 0;
    pri = fun_0BB8()
    pri = 0;
    return pri;
}
// fun_13E8
fun_13E8() {
    pri = 0;
    return pri;
}
// fun_1400
fun_1400() {
    pri = 0;
    return pri;
}
// fun_1418
fun_1418() {
    var_8 = -1018736999534205329;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1460
// lab_1460
    pri = 0;
    return pri;
}
// fun_1470
fun_1470() {
    var_8 = -1018735900022577118;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_14B8
// lab_14B8
    pri = 0;
    return pri;
}
// fun_14C8
fun_14C8() {
    var_8 = -1018734800510948907;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1510
// lab_1510
    pri = 0;
    return pri;
}
