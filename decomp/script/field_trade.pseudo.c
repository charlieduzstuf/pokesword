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
    OP_ZERO_P_S -8
    OP_JUMP lab_0168
// lab_0168
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_0268
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_01E8
    pri = 0;
    return pri;
// lab_0268
    pri = 0;
    return pri;
// lab_01E8
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
    OP_JUMP lab_0160
// lab_0160
    OP_INC_P_S -8
}
// fun_0280
fun_0280() {
    var_8 = arg_0;
    pri = IncRecord_(var_8)
    return pri;
}
// fun_02B0
fun_02B0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0300
fun_0300() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_07D0(var_8)
    OP_JZER lab_0378
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0800(var_24)
    OP_JNZ lab_0378
    pri = 0;
    return pri;
// lab_0378
    OP_JUMP lab_0388
// lab_0388
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_03E8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_03E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0388
    pri = 0;
    return pri;
}
// fun_0428
fun_0428() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0460
fun_0460() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_04A0
fun_04A0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_04D8
fun_04D8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0520
    pri = 0;
    return pri;
// lab_0520
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0560
// lab_0560
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_07D0(var_8)
    OP_JNZ lab_05E8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_05D8
    pri = 0;
    return pri;
// lab_05E8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0630
    pri = 0;
    return pri;
// lab_0630
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0690
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_06D8(var_8)
    pri = 0;
    return pri;
// lab_0690
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0560
    pri = 0;
    return pri;
// lab_05D8
    OP_JUMP lab_0630
}
// fun_06D8
fun_06D8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0710
fun_0710() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0750
fun_0750() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0790
fun_0790() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_07D0
fun_07D0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0800
fun_0800() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0830
fun_0830() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_0860
fun_0860() {
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
// switch_0E78
        case default:
        {
// switch_0E78_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_0EC0
// lab_0EC0
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
            OP_JNZ lab_0F68
            var_88 = 0;
            pri = fun_1120()
// lab_0F68
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_0E78_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0A60
                case default:
                {
// switch_0A60_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0AD8
// lab_0AD8
                    OP_JUMP lab_0EC0
                }
                case 0x0:
                {
// switch_0A60_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0AD8
                }
                case 0x1:
                {
// switch_0A60_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0AD8
                }
                case 0x2:
                {
// switch_0A60_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0AD8
                }
                case 0x3:
                {
// switch_0A60_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0AD8
                }
                case 0x4:
                {
// switch_0A60_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0AD8
                }
                case 0x5:
                {
// switch_0A60_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0AD8
                }
            }
        }
        case 0x65:
        {
// switch_0E78_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_0C18
                case default:
                {
// switch_0C18_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0C90
// lab_0C90
                    OP_JUMP lab_0EC0
                }
                case 0x0:
                {
// switch_0C18_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_0C90
                }
                case 0x1:
                {
// switch_0C18_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_0C90
                }
                case 0x2:
                {
// switch_0C18_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_0C90
                }
                case 0x3:
                {
// switch_0C18_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0C90
                }
                case 0x4:
                {
// switch_0C18_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_0C90
                }
                case 0x5:
                {
// switch_0C18_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_0C90
                }
            }
        }
        case 0x66:
        {
// switch_0E78_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_0DD0
                case default:
                {
// switch_0DD0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0E48
// lab_0E48
                    OP_JUMP lab_0EC0
                }
                case 0x0:
                {
// switch_0DD0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_0E48
                }
                case 0x1:
                {
// switch_0DD0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_0E48
                }
                case 0x2:
                {
// switch_0DD0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_0E48
                }
                case 0x3:
                {
// switch_0DD0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0E48
                }
                case 0x4:
                {
// switch_0DD0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_0E48
                }
                case 0x5:
                {
// switch_0DD0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_0E48
                }
            }
        }
    }
}
// fun_0F80
fun_0F80() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_04A0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1028
    pri = 1;
    return pri;
// lab_1028
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1070
fun_1070() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_10C0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F80(var_8)
    arg_2 = pri;
// lab_10C0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0860(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1120
fun_1120() {
    OP_JUMP lab_1138
// lab_1138
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1178
    pri = 0;
    return pri;
// lab_1178
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1138
    pri = 0;
    return pri;
}
// fun_11B8
fun_11B8() {
    var_8 = 0;
    pri = fun_1120()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1268
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_1268
    pri = 0;
    return pri;
}
// fun_1278
fun_1278() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_12A8
fun_12A8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_1320()
    return pri;
}
// fun_1320
fun_1320() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_1360
fun_1360() {
    pri = arg_4;
    OP_JNZ lab_1398
    var_8 = 0;
    pri = fun_0710()
// lab_1398
    pri = arg_1;
    switch (pri) {
// switch_2770
        case default:
        {
// switch_2770_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 856;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_07D0(var_264)
            OP_JZER lab_2D38
            pri = arg_3;
            switch (pri) {
// switch_2CE0
                case default:
                {
// switch_2CE0_case_default
                    OP_JUMP lab_2FF0
// lab_2FF0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_3060
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_3060
                    var_8 = 0;
                    pri = fun_0750()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_2CE0_case_0x1
                    var_8 = 32;
                    var_16 = 1008;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_2CE0_case_default
                }
                case 0x2:
                {
// switch_2CE0_case_0x2
                    var_8 = 32;
                    var_16 = 1112;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_2CE0_case_default
                }
                case 0x3:
                {
// switch_2CE0_case_0x3
                    var_8 = 32;
                    var_16 = 912;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_2CE0_case_default
                }
            }
// lab_2D38
            pri = arg_1;
            OP_JZER lab_2D88
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_2D88
            pri = 0;
            OP_JUMP lab_2D90
// lab_2D88
            pri = 1;
// lab_2D90
            OP_JZER lab_2DF8
            var_8 = 1208;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_04A0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_2DF8
            pri = 1;
            OP_JUMP lab_2E00
// lab_2DF8
            pri = 0;
// lab_2E00
            OP_JZER lab_2E50
            var_8 = 32;
            var_16 = 1304;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_2FF0
// lab_2E50
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_2EB8
            var_8 = 32;
            var_16 = 1464;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_2FF0
// lab_2EB8
            var_16 = 1584;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_04A0(var_24, var_16)
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
            var_176 = 1688;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 1704;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_2770_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x1:
        {
// switch_2770_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x2:
        {
// switch_2770_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x3:
        {
// switch_2770_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x4:
        {
// switch_2770_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x5:
        {
// switch_2770_case_0x5
            var_8 = 1;
            var_16 = 336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0460(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_06D8(var_40)
            OP_JUMP switch_2770_case_default
        }
        case 0x6:
        {
// switch_2770_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x7:
        {
// switch_2770_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x8:
        {
// switch_2770_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x9:
        {
// switch_2770_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0xa:
        {
// switch_2770_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0xb:
        {
// switch_2770_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0xc:
        {
// switch_2770_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0xd:
        {
// switch_2770_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0xe:
        {
// switch_2770_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0xf:
        {
// switch_2770_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x10:
        {
// switch_2770_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x11:
        {
// switch_2770_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x12:
        {
// switch_2770_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x13:
        {
// switch_2770_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x14:
        {
// switch_2770_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x15:
        {
// switch_2770_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x16:
        {
// switch_2770_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x17:
        {
// switch_2770_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x18:
        {
// switch_2770_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x19:
        {
// switch_2770_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x1a:
        {
// switch_2770_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x1b:
        {
// switch_2770_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x1c:
        {
// switch_2770_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x1d:
        {
// switch_2770_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x1e:
        {
// switch_2770_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x1f:
        {
// switch_2770_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x20:
        {
// switch_2770_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x21:
        {
// switch_2770_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x22:
        {
// switch_2770_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x23:
        {
// switch_2770_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x24:
        {
// switch_2770_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x25:
        {
// switch_2770_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x26:
        {
// switch_2770_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x27:
        {
// switch_2770_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x28:
        {
// switch_2770_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x29:
        {
// switch_2770_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x2a:
        {
// switch_2770_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x2b:
        {
// switch_2770_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x2c:
        {
// switch_2770_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x2d:
        {
// switch_2770_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x2e:
        {
// switch_2770_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x2f:
        {
// switch_2770_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x30:
        {
// switch_2770_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x31:
        {
// switch_2770_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x32:
        {
// switch_2770_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x33:
        {
// switch_2770_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x34:
        {
// switch_2770_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x35:
        {
// switch_2770_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x36:
        {
// switch_2770_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x37:
        {
// switch_2770_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x38:
        {
// switch_2770_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x39:
        {
// switch_2770_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x3a:
        {
// switch_2770_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x3b:
        {
// switch_2770_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x3c:
        {
// switch_2770_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 432;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x3d:
        {
// switch_2770_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 608;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
        case 0x3e:
        {
// switch_2770_case_0x3e
            var_8 = 3;
            var_16 = 752;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0460(var_24, var_16, var_8)
            OP_JUMP switch_2770_case_default
        }
    }
}
// fun_3090
fun_3090() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_3190
        case default:
        {
// switch_3190_case_default
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
// switch_3190_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_3190_case_default
        }
        case 0x1:
        {
// switch_3190_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_3190_case_default
        }
        case 0x2:
        {
// switch_3190_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_3190_case_default
        }
        case 0x3:
        {
// switch_3190_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_3190_case_default
        }
    }
}
// fun_3250
fun_3250() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_32A0
// lab_32A0
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 1752;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_3318
    OP_JUMP lab_3348
// lab_3318
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_32A0
// lab_3348
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_33D0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_1360(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0830(var_56)
// lab_33D0
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_3438
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0790(var_24, var_16)
// lab_3438
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0790(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_34F8
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_04D8(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_02B0(var_88, var_80, var_72, var_64, var_56)
// lab_34F8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_3538
    pri = 0;
    return pri;
// lab_3538
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_3680
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 1872;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0428(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_3648
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_3680
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0300(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0300(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_04D8(var_40)
    pri = 0;
    return pri;
// lab_3648
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0790(var_16, var_8)
}
// fun_3708
fun_3708() {
    pri = g_mode;
    switch (pri) {
// switch_3930
        case default:
        {
// switch_3930_case_default
            pri = CommandNOP()
            OP_JUMP lab_3A08
// lab_3A08
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3930_case_0x0
            var_8 = 0;
            pri = fun_3A18()
            OP_JUMP lab_3A08
        }
        case 0x65471f5d06ea0cd0:
        {
// switch_3930_case_0x65471f5d06ea0cd0
            var_8 = 0;
            pri = fun_4950()
            OP_JUMP lab_3A08
        }
        case 0x654a225d06ec47c0:
        {
// switch_3930_case_0x654a225d06ec47c0
            var_8 = 0;
            pri = fun_4480()
            OP_JUMP lab_3A08
        }
        case 0x654a235d06ec4973:
        {
// switch_3930_case_0x654a235d06ec4973
            var_8 = 0;
            pri = fun_43D0()
            OP_JUMP lab_3A08
        }
        case 0x654a245d06ec4b26:
        {
// switch_3930_case_0x654a245d06ec4b26
            var_8 = 0;
            pri = fun_4320()
            OP_JUMP lab_3A08
        }
        case 0x654a255d06ec4cd9:
        {
// switch_3930_case_0x654a255d06ec4cd9
            var_8 = 0;
            pri = fun_4270()
            OP_JUMP lab_3A08
        }
        case 0x654a265d06ec4e8c:
        {
// switch_3930_case_0x654a265d06ec4e8c
            var_8 = 0;
            pri = fun_4740()
            OP_JUMP lab_3A08
        }
        case 0x654a275d06ec503f:
        {
// switch_3930_case_0x654a275d06ec503f
            var_8 = 0;
            pri = fun_4690()
            OP_JUMP lab_3A08
        }
        case 0x654a285d06ec51f2:
        {
// switch_3930_case_0x654a285d06ec51f2
            var_8 = 0;
            pri = fun_45E0()
            OP_JUMP lab_3A08
        }
        case 0x654a295d06ec53a5:
        {
// switch_3930_case_0x654a295d06ec53a5
            var_8 = 0;
            pri = fun_4530()
            OP_JUMP lab_3A08
        }
        case 0x654a2c5d06ec58be:
        {
// switch_3930_case_0x654a2c5d06ec58be
            var_8 = 0;
            pri = fun_48A0()
            OP_JUMP lab_3A08
        }
        case 0x654a2d5d06ec5a71:
        {
// switch_3930_case_0x654a2d5d06ec5a71
            var_8 = 0;
            pri = fun_47F0()
            OP_JUMP lab_3A08
        }
    }
}
// fun_3A18
fun_3A18() {
    pri = 0;
    return pri;
}
// fun_3A30
fun_3A30() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 1;
    var_48 = arg_3;
    var_56 = 48;
    pri = fun_3090(var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = arg_3;
    var_80 = arg_2;
    var_88 = arg_1;
    var_96 = arg_0;
    var_104 = 32;
    pri = fun_3BD8(var_96, var_88, var_80, var_72)
    OP_NOT 
    var_8 = pri;
    pri = var_8;
    OP_JZER lab_3B88
    var_112 = 0;
    var_120 = 3;
    var_128 = 0;
    var_136 = 100;
    var_144 = -1;
    pri = arg_2;
    OP_ADD_P_C 16
    OP_LOAD_I 
    var_152 = pri;
    var_160 = arg_3;
    var_168 = 56;
    pri = fun_1070(var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_176 = 1;
    var_184 = 8;
    pri = fun_11B8(var_176)
    var_192 = 0;
    pri = fun_1278()
// lab_3B88
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = 32;
    pri = fun_3250(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_3BD8
fun_3BD8() {
    var_8 = arg_1;
    pri = FlagGet(var_8)
    OP_JZER lab_3CC0
    var_16 = 0;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    pri = arg_2;
    OP_ADD_P_C 32
    OP_LOAD_I 
    var_56 = pri;
    var_64 = arg_3;
    var_72 = 56;
    pri = fun_1070(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = 1;
    var_88 = 8;
    pri = fun_11B8(var_80)
    var_96 = 0;
    pri = fun_1278()
    pri = 1;
    return pri;
// lab_3CC0
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    pri = arg_2;
    OP_LOAD_I 
    var_48 = pri;
    var_56 = arg_3;
    var_64 = 56;
    pri = fun_1070(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_11B8(var_72)
    var_88 = 0;
    var_96 = 0;
    var_104 = 1;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 48;
    pri = fun_12A8(var_128, var_120, var_112, var_104, var_96, var_88)
    OP_JNZ lab_3DA8
    pri = 0;
    return pri;
// lab_3DA8
    var_8 = 0;
    var_16 = 2;
    pri = PokePartyGetCount(var_16, var_8)
    alt = 1;
    OP_JSGRTR lab_3E98
    var_24 = 0;
    var_32 = 3;
    var_40 = 0;
    var_48 = 100;
    var_56 = -1;
    pri = arg_2;
    OP_ADD_P_C 40
    OP_LOAD_I 
    var_64 = pri;
    var_72 = arg_3;
    var_80 = 56;
    pri = fun_1070(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    var_88 = 1;
    var_96 = 8;
    pri = fun_11B8(var_88)
    var_104 = 0;
    pri = fun_1278()
    pri = 1;
    return pri;
// lab_3E98
    var_8 = 0;
    pri = fun_1278()
    var_16 = arg_0;
    pri = CallFieldTradeBox_(var_16)
    var_32 = 8;
    pri = TempWorkGet(var_32)
    var_8 = pri;
    var_48 = 9;
    pri = TempWorkGet(var_48)
    var_16 = pri;
    var_64 = 10;
    pri = TempWorkGet(var_64)
    var_24 = pri;
    pri = CommandNOP()
    pri = var_8;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_3FB0
    pri = 0;
    return pri;
// lab_3FB0
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    pri = arg_2;
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_48 = pri;
    var_56 = arg_3;
    var_64 = 56;
    pri = fun_1070(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_11B8(var_72)
    var_88 = 0;
    var_96 = 0;
    var_104 = 1;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 48;
    pri = fun_12A8(var_128, var_120, var_112, var_104, var_96, var_88)
    OP_JNZ lab_40A8
    pri = 0;
    return pri;
// lab_40A8
    var_8 = 0;
    pri = fun_1278()
    pri = var_8;
    OP_JNZ lab_4120
    var_16 = var_24;
    var_24 = var_16;
    var_32 = 1;
    var_40 = arg_0;
    pri = CallFieldTradeDemo_(var_40, var_32, var_24, var_16)
    OP_JUMP lab_4178
// lab_4120
    pri = var_8;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_4178
    var_8 = var_24;
    var_16 = var_16;
    var_24 = 0;
    var_32 = arg_0;
    pri = CallFieldTradeDemo_(var_32, var_24, var_16, var_8)
// lab_4178
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    pri = arg_2;
    OP_ADD_P_C 24
    OP_LOAD_I 
    var_48 = pri;
    var_56 = arg_3;
    var_64 = 56;
    pri = fun_1070(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_11B8(var_72)
    var_88 = 0;
    pri = fun_1278()
    var_96 = arg_1;
    pri = FlagSet(var_96)
    var_104 = 11;
    var_112 = 8;
    pri = fun_0280(var_104)
    pri = 1;
    return pri;
}
// fun_4270
fun_4270() {
    pri = 2008;
    OP_ADDR_ALT -48
    OP_MOVS 48
    pri = GetTargetFieldObjectID()
    var_56 = pri;
    OP_PUSH_P_ADR -48
    OP_PUSH2_C 2598138641957714790, 784347198528779235
    var_64 = 32;
    pri = fun_3A30(var_56, var_48, var_40, var_32)
    pri = 0;
    return pri;
}
// fun_4320
fun_4320() {
    pri = 2056;
    OP_ADDR_ALT -48
    OP_MOVS 48
    pri = GetTargetFieldObjectID()
    var_56 = pri;
    OP_PUSH_P_ADR -48
    OP_PUSH2_C 2597289818980925123, 784346099017151024
    var_64 = 32;
    pri = fun_3A30(var_56, var_48, var_40, var_32)
    pri = 0;
    return pri;
}
// fun_43D0
fun_43D0() {
    pri = 2104;
    OP_ADDR_ALT -48
    OP_MOVS 48
    pri = GetTargetFieldObjectID()
    var_56 = pri;
    OP_PUSH_P_ADR -48
    OP_PUSH2_C 2597290918492553334, 784349397552035657
    var_64 = 32;
    pri = fun_3A30(var_56, var_48, var_40, var_32)
    pri = 0;
    return pri;
}
// fun_4480
fun_4480() {
    pri = 2152;
    OP_ADDR_ALT -48
    OP_MOVS 48
    pri = GetTargetFieldObjectID()
    var_56 = pri;
    OP_PUSH_P_ADR -48
    OP_PUSH2_C 2597292018004181545, 784348298040407446
    var_64 = 32;
    pri = fun_3A30(var_56, var_48, var_40, var_32)
    pri = 0;
    return pri;
}
// fun_4530
fun_4530() {
    pri = 2200;
    OP_ADDR_ALT -48
    OP_MOVS 48
    pri = GetTargetFieldObjectID()
    var_56 = pri;
    OP_PUSH_P_ADR -48
    OP_PUSH2_C 2597293117515809756, 784351596575292079
    var_64 = 32;
    pri = fun_3A30(var_56, var_48, var_40, var_32)
    pri = 0;
    return pri;
}
// fun_45E0
fun_45E0() {
    pri = 2248;
    OP_ADDR_ALT -48
    OP_MOVS 48
    pri = GetTargetFieldObjectID()
    var_56 = pri;
    OP_PUSH_P_ADR -48
    OP_PUSH2_C 2597294217027437967, 784350497063663868
    var_64 = 32;
    pri = fun_3A30(var_56, var_48, var_40, var_32)
    pri = 0;
    return pri;
}
// fun_4690
fun_4690() {
    pri = 2296;
    OP_ADDR_ALT -48
    OP_MOVS 48
    pri = GetTargetFieldObjectID()
    var_56 = pri;
    OP_PUSH_P_ADR -48
    OP_PUSH2_C 2597295316539066178, 784353795598548501
    var_64 = 32;
    pri = fun_3A30(var_56, var_48, var_40, var_32)
    pri = 0;
    return pri;
}
// fun_4740
fun_4740() {
    pri = 2344;
    OP_ADDR_ALT -48
    OP_MOVS 48
    pri = GetTargetFieldObjectID()
    var_56 = pri;
    OP_PUSH_P_ADR -48
    OP_PUSH2_C 2597296416050694389, 784352696086920290
    var_64 = 32;
    pri = fun_3A30(var_56, var_48, var_40, var_32)
    pri = 0;
    return pri;
}
// fun_47F0
fun_47F0() {
    pri = 2392;
    OP_ADDR_ALT -48
    OP_MOVS 48
    pri = GetTargetFieldObjectID()
    var_56 = pri;
    OP_PUSH_P_ADR -48
    OP_PUSH2_C 2597297515562322600, 784355994621804923
    var_64 = 32;
    pri = fun_3A30(var_56, var_48, var_40, var_32)
    pri = 0;
    return pri;
}
// fun_48A0
fun_48A0() {
    pri = 2440;
    OP_ADDR_ALT -48
    OP_MOVS 48
    pri = GetTargetFieldObjectID()
    var_56 = pri;
    OP_PUSH_P_ADR -48
    OP_PUSH2_C 2597298615073950811, 784354895110176712
    var_64 = 32;
    pri = fun_3A30(var_56, var_48, var_40, var_32)
    pri = 0;
    return pri;
}
// fun_4950
fun_4950() {
    pri = 2488;
    OP_ADDR_ALT -48
    OP_MOVS 48
    pri = GetTargetFieldObjectID()
    var_56 = pri;
    OP_PUSH_P_ADR -48
    OP_PUSH2_C 2598139741469343001, 783390623412424890
    var_64 = 32;
    pri = fun_3A30(var_56, var_48, var_40, var_32)
    pri = 0;
    return pri;
}
