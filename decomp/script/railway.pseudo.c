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
    pri = float(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = floatadd(var_24, var_16)
    return pri;
}
// fun_00B8
fun_00B8() {
    var_8 = arg_1;
    pri = float(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = floatsub(var_24, var_16)
    return pri;
}
// fun_0110
fun_0110() {
    var_8 = arg_8;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_7;
    var_40 = arg_6;
    var_48 = arg_3;
    var_56 = 0;
    pri = float(var_56)
    var_64 = pri;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    pri = MapChangeCore_(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_01B0
fun_01B0() {
    var_8 = 0;
    var_16 = arg_8;
    var_24 = arg_6;
    var_32 = arg_7;
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = arg_0;
    pri = StartForceMove_(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0228
fun_0228() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0350(var_8)
    OP_JZER lab_02A0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0380(var_24)
    OP_JNZ lab_02A0
    pri = 0;
    return pri;
// lab_02A0
    OP_JUMP lab_02B0
// lab_02B0
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0310
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0310
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_02B0
    pri = 0;
    return pri;
}
// fun_0350
fun_0350() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0380
fun_0380() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_03B0
fun_03B0() {
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
// switch_09C8
        case default:
        {
// switch_09C8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_0A10
// lab_0A10
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
            OP_JNZ lab_0AB8
            var_88 = 0;
            pri = fun_0B88()
// lab_0AB8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_09C8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_05B0
                case default:
                {
// switch_05B0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0628
// lab_0628
                    OP_JUMP lab_0A10
                }
                case 0x0:
                {
// switch_05B0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0628
                }
                case 0x1:
                {
// switch_05B0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0628
                }
                case 0x2:
                {
// switch_05B0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0628
                }
                case 0x3:
                {
// switch_05B0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0628
                }
                case 0x4:
                {
// switch_05B0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0628
                }
                case 0x5:
                {
// switch_05B0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0628
                }
            }
        }
        case 0x65:
        {
// switch_09C8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_0768
                case default:
                {
// switch_0768_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_07E0
// lab_07E0
                    OP_JUMP lab_0A10
                }
                case 0x0:
                {
// switch_0768_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_07E0
                }
                case 0x1:
                {
// switch_0768_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_07E0
                }
                case 0x2:
                {
// switch_0768_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_07E0
                }
                case 0x3:
                {
// switch_0768_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_07E0
                }
                case 0x4:
                {
// switch_0768_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_07E0
                }
                case 0x5:
                {
// switch_0768_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_07E0
                }
            }
        }
        case 0x66:
        {
// switch_09C8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_0920
                case default:
                {
// switch_0920_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0998
// lab_0998
                    OP_JUMP lab_0A10
                }
                case 0x0:
                {
// switch_0920_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_0998
                }
                case 0x1:
                {
// switch_0920_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_0998
                }
                case 0x2:
                {
// switch_0920_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_0998
                }
                case 0x3:
                {
// switch_0920_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0998
                }
                case 0x4:
                {
// switch_0920_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_0998
                }
                case 0x5:
                {
// switch_0920_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_0998
                }
            }
        }
    }
}
// fun_0AD0
fun_0AD0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_03B0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0B38
fun_0B38() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0AD0(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0B88
fun_0B88() {
    OP_JUMP lab_0BA0
// lab_0BA0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0BE0
    pri = 0;
    return pri;
// lab_0BE0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0BA0
    pri = 0;
    return pri;
}
// fun_0C20
fun_0C20() {
    var_8 = 0;
    pri = fun_0B88()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_0CD0
    var_32 = 32;
    pri = SoundPostEvent(var_32)
// lab_0CD0
    pri = 0;
    return pri;
}
// fun_0CE0
fun_0CE0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_0D10
fun_0D10() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_0D40
// lab_0D40
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0D80
    OP_JUMP lab_0DB0
// lab_0D80
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D40
// lab_0DB0
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DF8
fun_0DF8() {
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
// fun_0E68
fun_0E68() {
    pri = g_mode;
    switch (pri) {
// switch_0F28
        case default:
        {
// switch_0F28_case_default
            pri = CommandNOP()
            OP_JUMP lab_0F70
// lab_0F70
            pri = 0;
            return pri;
        }
        case 0x84c2397b9113d52a:
        {
// switch_0F28_case_0x84c2397b9113d52a
            var_8 = 0;
            pri = fun_1CC8()
            OP_JUMP lab_0F70
        }
        case 0x0:
        {
// switch_0F28_case_0x0
            var_8 = 0;
            pri = fun_0F80()
            OP_JUMP lab_0F70
        }
        case 0x48755bb705de7b70:
        {
// switch_0F28_case_0x48755bb705de7b70
            var_8 = 0;
            pri = fun_1C90()
            OP_JUMP lab_0F70
        }
    }
}
// fun_0F80
fun_0F80() {
    pri = 0;
    return pri;
}
// fun_0F98
fun_0F98() {
    pri = arg_0;
    OP_EQ_C_PRI -3459988704088098695
    OP_JNZ lab_1008
    pri = arg_0;
    OP_EQ_C_PRI -5145338204457899052
    OP_JNZ lab_1008
    pri = 0;
    OP_JUMP lab_1010
// lab_1008
    pri = 1;
// lab_1010
    OP_JZER lab_1150
    var_8 = 1;
    var_16 = 0;
    var_24 = 4641240890982006784;
    var_32 = 0;
    var_40 = 0;
    var_48 = 8802641224559852288;
    pri = GetFieldObjectPositionZ_(var_48)
    var_56 = pri;
    var_64 = 8802641224559852288;
    pri = GetFieldObjectPositionX_(var_64)
    OP_MOVE_ALT 
    pri = 100;
    var_72 = pri;
    var_80 = alt;
    var_88 = 16;
    pri = fun_00B8(var_80, var_72)
    var_96 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_104 = 72;
    pri = fun_01B0(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
    var_112 = 8802641224559852288;
    var_120 = 8;
    pri = fun_0228(var_112)
    OP_JUMP lab_13C0
// lab_1150
    pri = arg_0;
    OP_EQ_C_PRI -6671058735196667065
    OP_JZER lab_12A0
    var_8 = 1;
    var_16 = 0;
    var_24 = 4641240890982006784;
    var_32 = 0;
    var_40 = 0;
    var_48 = 8802641224559852288;
    pri = GetFieldObjectPositionZ_(var_48)
    var_56 = pri;
    var_64 = 8802641224559852288;
    pri = GetFieldObjectPositionX_(var_64)
    alt = 100;
    var_72 = alt;
    var_80 = pri;
    var_88 = 16;
    pri = fun_0060(var_80, var_72)
    var_96 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_104 = 72;
    pri = fun_01B0(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
    var_112 = 8802641224559852288;
    var_120 = 8;
    pri = fun_0228(var_112)
    OP_JUMP lab_13C0
// lab_12A0
    var_8 = 1;
    var_16 = 0;
    var_24 = 4641240890982006784;
    var_32 = 0;
    var_40 = 0;
    var_48 = 8802641224559852288;
    pri = GetFieldObjectPositionZ_(var_48)
    alt = 4636737291354636288;
    var_56 = pri;
    var_64 = alt;
    pri = floatadd(var_64, var_56)
    var_72 = pri;
    var_80 = 8802641224559852288;
    pri = GetFieldObjectPositionX_(var_80)
    var_88 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_96 = 72;
    pri = fun_01B0(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    var_104 = 8802641224559852288;
    var_112 = 8;
    pri = fun_0228(var_104)
// lab_13C0
    pri = 0;
    return pri;
}
// fun_13D0
fun_13D0() {
    pri = PlayerGetZoneID()
    var_8 = pri;
    pri = 208;
    OP_ADDR_ALT -176
    OP_MOVS 168
    OP_ZERO_P_S -184
    OP_ZERO_P_S -192
    OP_JUMP lab_1470
// lab_1470
    pri = var_192;
    alt = 7;
    OP_JSGEQ lab_15D0
    OP_ADDR_P_ALT -176
    pri = var_192;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_LOAD_I 
    var_200 = pri;
    OP_LOAD_S_BOTH -8, -200
    OP_JNEQ lab_15B8
    OP_ADDR_P_ALT -176
    pri = var_192;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_208 = pri;
    var_24 = var_208;
    pri = FlagGet(var_24)
    OP_JZER lab_1598
    OP_CONST_S -184, 1
// lab_15D0
    pri = var_184;
    OP_JNZ lab_16B0
    arg_-3 = 3;
    var_8 = 0;
    var_16 = 7831651703129466055;
    var_24 = 24;
    pri = fun_0B38(var_16, var_8, var_0)
    var_32 = 1;
    var_40 = 8;
    pri = fun_0C20(var_32)
    var_48 = 0;
    pri = fun_0CE0()
    pri = arg_0;
    OP_JZER lab_1698
    var_56 = var_8;
    var_64 = 8;
    pri = fun_0F98(var_56)
// lab_16B0
    pri = 376;
    OP_ADDR_ALT -576
    OP_MOVS 392
    var_400 = 3;
    var_408 = 0;
    var_416 = -761382771522838640;
    var_424 = 24;
    pri = fun_0B38(var_416, var_408, var_400)
    var_432 = 1;
    var_440 = 8;
    pri = fun_0C20(var_432)
    OP_ZERO_P_S -584
    OP_ZERO_P_S -584
    OP_JUMP lab_1770
// lab_1770
    pri = var_584;
    alt = 7;
    OP_JSGEQ lab_1918
    pri = CommandNOP()
    pri = CommandNOP()
    pri = var_8;
    var_8 = pri;
    OP_ADDR_P_ALT -576
    pri = var_584;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 8
    OP_LOAD_I 
    OP_POP_ALT 
    OP_JEQ lab_1908
    OP_ADDR_P_ALT -576
    pri = var_584;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 32
    OP_LOAD_I 
    var_16 = pri;
    pri = FlagGet(var_16)
    OP_JZER lab_1908
    var_24 = 0;
    OP_ADDR_P_ALT -576
    pri = var_584;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 40
    OP_LOAD_I 
    var_32 = pri;
    var_40 = var_584;
    var_48 = 24;
    pri = fun_0D10(var_40, var_32, var_24)
// lab_1918
    var_8 = 0;
    var_16 = 1217385582048210183;
    var_24 = 7;
    var_32 = 24;
    pri = fun_0D10(var_24, var_16, var_8)
    OP_ZERO_P_S -592
    var_48 = 0;
    var_56 = 1;
    var_64 = 0;
    var_72 = 1;
    var_80 = 32;
    pri = fun_0DF8(var_72, var_64, var_56, var_48)
    var_592 = pri;
    pri = CommandNOP()
    var_88 = 0;
    pri = fun_0CE0()
    pri = var_592;
    OP_EQ_P_C_PRI 7
    OP_JZER lab_1A40
    pri = arg_0;
    OP_JZER lab_1A28
    var_96 = var_8;
    var_104 = 8;
    pri = fun_0F98(var_96)
// lab_1A40
    OP_ADDR_P_ALT -576
    pri = var_592;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_LOAD_I 
    var_600 = pri;
    OP_ADDR_P_ALT -576
    pri = var_592;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_608 = pri;
    OP_ADDR_P_ALT -576
    pri = var_592;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 16
    OP_LOAD_I 
    var_616 = pri;
    OP_ADDR_P_ALT -576
    pri = var_592;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 24
    OP_LOAD_I 
    var_624 = pri;
    pri = CommandNOP()
    pri = CommandNOP()
    var_40 = 0;
    var_48 = 1;
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = var_624;
    pri = float(var_80)
    var_88 = pri;
    var_96 = var_616;
    pri = float(var_96)
    var_104 = pri;
    var_112 = var_608;
    var_120 = var_600;
    var_128 = 72;
    pri = fun_0110(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_136 = 0;
    var_144 = 0;
    var_152 = 768;
    pri = PokeMemoryCheckParty(var_152, var_144, var_136)
    pri = 0;
    return pri;
// lab_1A28
    pri = 0;
    return pri;
// lab_1908
    OP_JUMP lab_1768
// lab_1768
    OP_INC_P_S -584
// lab_1698
    pri = 0;
    return pri;
// lab_15B8
    OP_JUMP lab_1468
// lab_1468
    OP_INC_P_S -192
// lab_1598
    OP_JUMP lab_15D0
}
// fun_1C90
fun_1C90() {
    var_8 = 0;
    var_16 = 8;
    pri = fun_13D0(var_8)
    pri = 0;
    return pri;
}
// fun_1CC8
fun_1CC8() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_13D0(var_8)
    pri = 0;
    return pri;
}
