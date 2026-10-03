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
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_02D0
fun_02D0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_07A0(var_8)
    OP_JZER lab_0348
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_07D0(var_24)
    OP_JNZ lab_0348
    pri = 0;
    return pri;
// lab_0348
    OP_JUMP lab_0358
// lab_0358
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_03B8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_03B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0358
    pri = 0;
    return pri;
}
// fun_03F8
fun_03F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0430
fun_0430() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0470
fun_0470() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_04A8
fun_04A8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_04F0
    pri = 0;
    return pri;
// lab_04F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0530
// lab_0530
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_07A0(var_8)
    OP_JNZ lab_05B8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_05A8
    pri = 0;
    return pri;
// lab_05B8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0600
    pri = 0;
    return pri;
// lab_0600
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0660
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_06A8(var_8)
    pri = 0;
    return pri;
// lab_0660
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0530
    pri = 0;
    return pri;
// lab_05A8
    OP_JUMP lab_0600
}
// fun_06A8
fun_06A8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_06E0
fun_06E0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0720
fun_0720() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0760
fun_0760() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_07A0
fun_07A0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_07D0
fun_07D0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0800
fun_0800() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_0830
fun_0830() {
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
// switch_0E48
        case default:
        {
// switch_0E48_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_0E90
// lab_0E90
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
            OP_JNZ lab_0F38
            var_88 = 0;
            pri = fun_11A8()
// lab_0F38
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_0E48_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0A30
                case default:
                {
// switch_0A30_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0AA8
// lab_0AA8
                    OP_JUMP lab_0E90
                }
                case 0x0:
                {
// switch_0A30_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0AA8
                }
                case 0x1:
                {
// switch_0A30_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0AA8
                }
                case 0x2:
                {
// switch_0A30_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0AA8
                }
                case 0x3:
                {
// switch_0A30_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0AA8
                }
                case 0x4:
                {
// switch_0A30_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0AA8
                }
                case 0x5:
                {
// switch_0A30_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0AA8
                }
            }
        }
        case 0x65:
        {
// switch_0E48_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_0BE8
                case default:
                {
// switch_0BE8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0C60
// lab_0C60
                    OP_JUMP lab_0E90
                }
                case 0x0:
                {
// switch_0BE8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_0C60
                }
                case 0x1:
                {
// switch_0BE8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_0C60
                }
                case 0x2:
                {
// switch_0BE8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_0C60
                }
                case 0x3:
                {
// switch_0BE8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0C60
                }
                case 0x4:
                {
// switch_0BE8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_0C60
                }
                case 0x5:
                {
// switch_0BE8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_0C60
                }
            }
        }
        case 0x66:
        {
// switch_0E48_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_0DA0
                case default:
                {
// switch_0DA0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0E18
// lab_0E18
                    OP_JUMP lab_0E90
                }
                case 0x0:
                {
// switch_0DA0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_0E18
                }
                case 0x1:
                {
// switch_0DA0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_0E18
                }
                case 0x2:
                {
// switch_0DA0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_0E18
                }
                case 0x3:
                {
// switch_0DA0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0E18
                }
                case 0x4:
                {
// switch_0DA0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_0E18
                }
                case 0x5:
                {
// switch_0DA0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_0E18
                }
            }
        }
    }
}
// fun_0F50
fun_0F50() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_0830(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FB8
fun_0FB8() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0470(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1060
    pri = 1;
    return pri;
// lab_1060
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_10A8
fun_10A8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_10F8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0FB8(var_8)
    arg_2 = pri;
// lab_10F8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0830(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1158
fun_1158() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0F50(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11A8
fun_11A8() {
    OP_JUMP lab_11C0
// lab_11C0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1200
    pri = 0;
    return pri;
// lab_1200
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_11C0
    pri = 0;
    return pri;
}
// fun_1240
fun_1240() {
    var_8 = 0;
    pri = fun_11A8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_12F0
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_12F0
    pri = 0;
    return pri;
}
// fun_1300
fun_1300() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1330
fun_1330() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1360
// lab_1360
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_13A0
    OP_JUMP lab_13D0
// lab_13A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1360
// lab_13D0
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1418
fun_1418() {
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
// fun_1488
fun_1488() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_1500()
    return pri;
}
// fun_1500
fun_1500() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_1540
fun_1540() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 9;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1590
fun_1590() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 17;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_15E0
fun_15E0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 18;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1630
fun_1630() {
    pri = arg_2;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1690
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1590(var_16, var_8)
    OP_JUMP lab_16C0
// lab_1690
    var_8 = arg_1;
    var_16 = arg_3;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_15E0(var_24, var_16, var_8)
// lab_16C0
    pri = 0;
    return pri;
}
// fun_16D0
fun_16D0() {
    var_8 = 0;
    pri = TempWorkGet(var_8)
    OP_SREF_P_S_PRI 24
    var_16 = 1;
    pri = TempWorkGet(var_16)
    OP_SREF_P_S_PRI 32
    var_24 = 2;
    pri = TempWorkGet(var_24)
    OP_SREF_P_S_PRI 40
    pri = 0;
    return pri;
}
// fun_1760
fun_1760() {
    var_8 = 0;
    pri = TempWorkGet(var_8)
    OP_NOT 
    OP_SREF_P_S_PRI 24
    var_16 = 1;
    pri = TempWorkGet(var_16)
    OP_SREF_P_S_PRI 32
    var_24 = 2;
    pri = TempWorkGet(var_24)
    OP_SREF_P_S_PRI 40
    pri = 0;
    return pri;
}
// fun_17F8
fun_17F8() {
    pri = arg_3;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1858
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = PokePartyGetParam(var_24, var_16, var_8)
    return pri;
// lab_1858
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = arg_4;
    pri = PokeBoxGetParam(var_32, var_24, var_16, var_8)
    return pri;
}
// fun_1898
fun_1898() {
    pri = arg_4;
    OP_JNZ lab_18D0
    var_8 = 0;
    pri = fun_06E0()
// lab_18D0
    pri = arg_1;
    switch (pri) {
// switch_2CA8
        case default:
        {
// switch_2CA8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 856;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_07A0(var_264)
            OP_JZER lab_3270
            pri = arg_3;
            switch (pri) {
// switch_3218
                case default:
                {
// switch_3218_case_default
                    OP_JUMP lab_3528
// lab_3528
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_3598
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_3598
                    var_8 = 0;
                    pri = fun_0720()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_3218_case_0x1
                    var_8 = 32;
                    var_16 = 1008;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_3218_case_default
                }
                case 0x2:
                {
// switch_3218_case_0x2
                    var_8 = 32;
                    var_16 = 1112;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_3218_case_default
                }
                case 0x3:
                {
// switch_3218_case_0x3
                    var_8 = 32;
                    var_16 = 912;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_3218_case_default
                }
            }
// lab_3270
            pri = arg_1;
            OP_JZER lab_32C0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_32C0
            pri = 0;
            OP_JUMP lab_32C8
// lab_32C0
            pri = 1;
// lab_32C8
            OP_JZER lab_3330
            var_8 = 1208;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0470(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_3330
            pri = 1;
            OP_JUMP lab_3338
// lab_3330
            pri = 0;
// lab_3338
            OP_JZER lab_3388
            var_8 = 32;
            var_16 = 1304;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3528
// lab_3388
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_33F0
            var_8 = 32;
            var_16 = 1464;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3528
// lab_33F0
            var_16 = 1584;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0470(var_24, var_16)
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
// switch_2CA8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x1:
        {
// switch_2CA8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x2:
        {
// switch_2CA8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x3:
        {
// switch_2CA8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x4:
        {
// switch_2CA8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x5:
        {
// switch_2CA8_case_0x5
            var_8 = 1;
            var_16 = 336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0430(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_06A8(var_40)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x6:
        {
// switch_2CA8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x7:
        {
// switch_2CA8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x8:
        {
// switch_2CA8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x9:
        {
// switch_2CA8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0xa:
        {
// switch_2CA8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0xb:
        {
// switch_2CA8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0xc:
        {
// switch_2CA8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0xd:
        {
// switch_2CA8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0xe:
        {
// switch_2CA8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0xf:
        {
// switch_2CA8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x10:
        {
// switch_2CA8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x11:
        {
// switch_2CA8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x12:
        {
// switch_2CA8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x13:
        {
// switch_2CA8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x14:
        {
// switch_2CA8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x15:
        {
// switch_2CA8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x16:
        {
// switch_2CA8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x17:
        {
// switch_2CA8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x18:
        {
// switch_2CA8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x19:
        {
// switch_2CA8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x1a:
        {
// switch_2CA8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x1b:
        {
// switch_2CA8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x1c:
        {
// switch_2CA8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x1d:
        {
// switch_2CA8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x1e:
        {
// switch_2CA8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x1f:
        {
// switch_2CA8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x20:
        {
// switch_2CA8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x21:
        {
// switch_2CA8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x22:
        {
// switch_2CA8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x23:
        {
// switch_2CA8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x24:
        {
// switch_2CA8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x25:
        {
// switch_2CA8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x26:
        {
// switch_2CA8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x27:
        {
// switch_2CA8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x28:
        {
// switch_2CA8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x29:
        {
// switch_2CA8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x2a:
        {
// switch_2CA8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x2b:
        {
// switch_2CA8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x2c:
        {
// switch_2CA8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x2d:
        {
// switch_2CA8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x2e:
        {
// switch_2CA8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x2f:
        {
// switch_2CA8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x30:
        {
// switch_2CA8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x31:
        {
// switch_2CA8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x32:
        {
// switch_2CA8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x33:
        {
// switch_2CA8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x34:
        {
// switch_2CA8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x35:
        {
// switch_2CA8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x36:
        {
// switch_2CA8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x37:
        {
// switch_2CA8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x38:
        {
// switch_2CA8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x39:
        {
// switch_2CA8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x3a:
        {
// switch_2CA8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x3b:
        {
// switch_2CA8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x3c:
        {
// switch_2CA8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 432;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x3d:
        {
// switch_2CA8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 608;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
        case 0x3e:
        {
// switch_2CA8_case_0x3e
            var_8 = 3;
            var_16 = 752;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0430(var_24, var_16, var_8)
            OP_JUMP switch_2CA8_case_default
        }
    }
}
// fun_35C8
fun_35C8() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_36C8
        case default:
        {
// switch_36C8_case_default
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
// switch_36C8_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_36C8_case_default
        }
        case 0x1:
        {
// switch_36C8_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_36C8_case_default
        }
        case 0x2:
        {
// switch_36C8_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_36C8_case_default
        }
        case 0x3:
        {
// switch_36C8_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_36C8_case_default
        }
    }
}
// fun_3788
fun_3788() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_37D8
// lab_37D8
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 1752;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_3850
    OP_JUMP lab_3880
// lab_3850
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_37D8
// lab_3880
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_3908
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_1898(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0800(var_56)
// lab_3908
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_3970
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0760(var_24, var_16)
// lab_3970
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0760(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_3A30
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_04A8(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0280(var_88, var_80, var_72, var_64, var_56)
// lab_3A30
    pri = IsPlayerRideBicycle()
    OP_JZER lab_3A70
    pri = 0;
    return pri;
// lab_3A70
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_3BB8
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 1872;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_03F8(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_3B80
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_3BB8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_02D0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_02D0(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_04A8(var_40)
    pri = 0;
    return pri;
// lab_3B80
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0760(var_16, var_8)
}
// fun_3C40
fun_3C40() {
    OP_ZERO_P_S -8
    pri = var_8;
    var_16 = pri;
    var_24 = 2491457344527812609;
    pri = FlagGet(var_24)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_32 = pri;
    var_40 = -6338460143570643299;
    pri = FlagGet(var_40)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_48 = pri;
    var_56 = -9019446742694110882;
    pri = FlagGet(var_56)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_64 = pri;
    var_72 = -2229912894659633455;
    pri = FlagGet(var_72)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_80 = pri;
    var_88 = -3467343721533817634;
    pri = FlagGet(var_88)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_96 = pri;
    var_104 = -2282713863028048545;
    pri = FlagGet(var_104)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_112 = pri;
    var_120 = -3446232929749219646;
    pri = FlagGet(var_120)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_128 = pri;
    var_136 = 2483696471998715560;
    pri = FlagGet(var_136)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    return pri;
}
// fun_3EF0
fun_3EF0() {
    pri = g_mode;
    switch (pri) {
// switch_3F88
        case default:
        {
// switch_3F88_case_default
            pri = CommandNOP()
            OP_JUMP lab_3FC0
// lab_3FC0
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3F88_case_0x0
            var_8 = 0;
            pri = fun_3FD0()
            OP_JUMP lab_3FC0
        }
        case 0x42fca554ef6cd676:
        {
// switch_3F88_case_0x42fca554ef6cd676
            var_8 = 0;
            pri = fun_3FE8()
            OP_JUMP lab_3FC0
        }
    }
}
// fun_3FD0
fun_3FD0() {
    pri = 0;
    return pri;
}
// fun_3FE8
fun_3FE8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    pri = GetTargetFieldObjectID()
    var_48 = pri;
    var_56 = 48;
    pri = fun_35C8(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    OP_ZERO_P_S -16
    OP_CONST_S -24, 1
    OP_CONST_S -32, 1
    var_96 = 0;
    pri = fun_3C40()
    alt = 3;
    OP_JSLESS lab_4108
    OP_CONST_S -16, 1
// lab_4108
    OP_ZERO_P_S -40
}
// lab_4118
pri = var_40;
OP_JNZ lab_41A0
var_8 = 0;
var_16 = 3;
var_24 = 0;
var_32 = 100;
var_40 = -1;
var_48 = 959852843970692981;
pri = GetTargetFieldObjectID()
var_56 = pri;
var_64 = 56;
pri = fun_10A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_41A0
pri = var_8;
OP_JZER lab_41F0
var_8 = 0;
var_16 = -8184588150079196271;
var_24 = 0;
var_32 = 24;
pri = fun_1330(var_24, var_16, var_8)
// lab_41F0
pri = var_16;
OP_JZER lab_4240
var_8 = 0;
var_16 = -8184587050567568060;
var_24 = 1;
var_32 = 24;
pri = fun_1330(var_24, var_16, var_8)
// lab_4240
pri = var_32;
OP_JZER lab_4290
var_8 = 0;
var_16 = -8183602987660508440;
var_24 = 2;
var_32 = 24;
pri = fun_1330(var_24, var_16, var_8)
// lab_4290
pri = var_24;
OP_JZER lab_42E0
var_8 = 0;
var_16 = -8183595291079110963;
var_24 = 3;
var_32 = 24;
pri = fun_1330(var_24, var_16, var_8)
// lab_42E0
var_8 = 0;
var_16 = -8183596390590739174;
var_24 = 4;
var_32 = 24;
pri = fun_1330(var_24, var_16, var_8)
var_48 = 0;
var_56 = 1;
var_64 = 0;
var_72 = 1;
var_80 = 32;
pri = fun_1418(var_72, var_64, var_56, var_48)
var_48 = pri;
pri = var_48;
switch (pri) {
// switch_4470
    case default:
    {
// switch_4470_case_default
        pri = var_40;
        OP_JZER lab_4508
        OP_JUMP lab_4118
// lab_4508
        var_8 = 0;
        var_16 = 3;
        var_24 = 0;
        var_32 = 100;
        var_40 = -1;
        var_48 = 959851744459064770;
        pri = GetTargetFieldObjectID()
        var_56 = pri;
        var_64 = 56;
        pri = fun_10A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
        var_72 = 1;
        var_80 = 8;
        pri = fun_1240(var_72)
        var_88 = 0;
        pri = fun_1300()
        var_96 = 0;
        var_104 = 0;
        var_112 = 0;
        pri = GetTargetFieldObjectID()
        var_120 = pri;
        var_128 = 32;
        pri = fun_3788(var_120, var_112, var_104, var_96)
        pri = 0;
        return pri;
    }
    case 0x0:
    {
// switch_4470_case_0x0
        var_8 = 0;
        pri = fun_4618()
        OP_NOT 
        var_40 = pri;
        OP_JUMP switch_4470_case_default
    }
    case 0x1:
    {
// switch_4470_case_0x1
        var_8 = 0;
        pri = fun_53E8()
        OP_NOT 
        var_40 = pri;
        OP_JUMP switch_4470_case_default
    }
    case 0x2:
    {
// switch_4470_case_0x2
        var_8 = 0;
        pri = fun_62F8()
        OP_NOT 
        var_40 = pri;
        OP_JUMP switch_4470_case_default
    }
    case 0x3:
    {
// switch_4470_case_0x3
        var_8 = 0;
        pri = fun_5A38()
        OP_NOT 
        var_40 = pri;
        OP_JUMP switch_4470_case_default
    }
    case 0x4:
    {
// switch_4470_case_0x4
        OP_ZERO_P_S -40
        OP_JUMP switch_4470_case_default
    }
}
// fun_4618
fun_4618() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
}
// lab_4648
OP_LCTRL 5
OP_ADD_C -8
OP_SCTRL 4
var_8 = 0;
var_16 = 3;
var_24 = 0;
var_32 = 100;
var_40 = -1;
var_48 = -862338024746741645;
var_56 = var_8;
var_64 = 56;
pri = fun_10A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
var_72 = 1;
var_80 = 8;
pri = fun_1240(var_72)
var_88 = 0;
pri = fun_1300()
var_96 = 5;
var_104 = 0;
var_112 = 2;
var_120 = 0;
var_128 = 1;
pri = CallSelectModeBox(var_128, var_120, var_112, var_104, var_96)
OP_ZERO_P_S -16
OP_ZERO_P_S -24
OP_ZERO_P_S -32
OP_PUSH_P_ADR -32
OP_PUSH_P_ADR -24
OP_PUSH_P_ADR -16
var_160 = 24;
pri = fun_16D0(var_152, var_144, var_136)
pri = var_16;
OP_EQ_P_C_PRI 2
OP_JZER lab_47E0
pri = 1;
return pri;
// lab_47E0
var_8 = var_24;
var_16 = var_16;
var_24 = 0;
var_32 = 8;
var_40 = var_32;
var_48 = 40;
pri = fun_17F8(var_40, var_32, var_24, var_16, var_8)
OP_JZER lab_48D0
var_56 = 0;
var_64 = 3;
var_72 = 0;
var_80 = 100;
var_88 = -1;
var_96 = 957896812784484062;
var_104 = var_8;
var_112 = 56;
pri = fun_10A8(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
var_120 = 1;
var_128 = 8;
pri = fun_1240(var_120)
var_136 = 0;
pri = fun_1300()
OP_JUMP lab_4648
// lab_48D0
var_8 = var_24;
var_16 = var_16;
var_24 = var_32;
var_32 = 0;
var_40 = 32;
pri = fun_1630(var_32, var_24, var_16, var_8)
pri = RomGetLanguageID()
var_48 = pri;
var_56 = var_24;
var_64 = var_16;
var_72 = 0;
var_80 = 69;
var_88 = var_32;
var_96 = 40;
pri = fun_17F8(var_88, var_80, var_72, var_64, var_56)
OP_POP_ALT 
OP_JEQ lab_4A08
var_104 = 0;
var_112 = 3;
var_120 = 0;
var_128 = 100;
var_136 = -1;
var_144 = -862327029630459535;
var_152 = var_8;
var_160 = 56;
pri = fun_10A8(var_152, var_144, var_136, var_128, var_120, var_112, var_104)
var_168 = 1;
var_176 = 8;
pri = fun_1240(var_168)
OP_JUMP lab_52E0
// lab_4A08
OP_ZERO_P_S -40
pri = var_16;
OP_JNZ lab_4A70
var_16 = var_32;
var_24 = var_24;
pri = PokeBoxIsOwner(var_24, var_16)
var_40 = pri;
OP_JUMP lab_4A98
// lab_4A70
var_8 = var_32;
pri = PokePartyIsOwner(var_8)
var_40 = pri;
// lab_4A98
pri = var_40;
OP_JZER lab_4AC0
OP_JUMP lab_4C58
// lab_4AC0
var_16 = var_24;
var_24 = var_16;
var_32 = 0;
var_40 = 45;
var_48 = var_32;
var_56 = 40;
pri = fun_17F8(var_48, var_40, var_32, var_24, var_16)
var_48 = pri;
var_72 = var_24;
var_80 = var_16;
var_88 = 0;
var_96 = 53;
var_104 = var_32;
var_112 = 40;
pri = fun_17F8(var_104, var_96, var_88, var_80, var_72)
var_56 = pri;
pri = var_48;
OP_JNZ lab_4BA8
pri = var_56;
OP_JZER lab_4BA8
pri = 0;
OP_JUMP lab_4BB0
// lab_4BA8
pri = 1;
// lab_4BB0
OP_JZER lab_4C48
var_8 = 0;
var_16 = 3;
var_24 = 0;
var_32 = 100;
var_40 = -1;
var_48 = -862327029630459535;
var_56 = var_8;
var_64 = 56;
pri = fun_10A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
var_72 = 1;
var_80 = 8;
pri = fun_1240(var_72)
OP_JUMP lab_52E0
// lab_4C48
OP_JUMP lab_4C58
// lab_4C58
OP_LCTRL 5
OP_ADD_C -40
OP_SCTRL 4
var_8 = 0;
var_16 = 3;
var_24 = 0;
var_32 = 100;
var_40 = -1;
var_48 = -862339124258369856;
var_56 = var_8;
var_64 = 56;
pri = fun_10A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
var_72 = 0;
var_80 = 0;
var_88 = 1;
var_96 = 0;
var_104 = 0;
var_112 = 0;
var_120 = 48;
pri = fun_1488(var_112, var_104, var_96, var_88, var_80, var_72)
OP_JNZ lab_4DC0
var_128 = 0;
var_136 = 3;
var_144 = 0;
var_152 = 100;
var_160 = -1;
var_168 = -863183549188646679;
var_176 = var_8;
var_184 = 56;
pri = fun_10A8(var_176, var_168, var_160, var_152, var_144, var_136, var_128)
var_192 = 1;
var_200 = 8;
pri = fun_1240(var_192)
OP_JUMP lab_52E0
// lab_4DC0
var_8 = 0;
var_16 = 3;
var_24 = 0;
var_32 = 100;
var_40 = -1;
var_48 = -862331427676972379;
var_56 = var_8;
var_64 = 56;
pri = fun_10A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
var_72 = 1;
var_80 = 8;
pri = fun_1240(var_72)
var_88 = 0;
pri = fun_1300()
var_96 = var_32;
var_104 = var_24;
var_112 = var_16;
pri = CallChangeNicknameEvent(var_112, var_104, var_96)
var_120 = var_24;
var_128 = var_16;
var_136 = var_32;
var_144 = 0;
var_152 = 32;
pri = fun_1630(var_144, var_136, var_128, var_120)
var_168 = 3;
pri = TempWorkGet(var_168)
var_48 = pri;
pri = var_48;
OP_JZER lab_5250
pri = var_40;
OP_JZER lab_5000
var_176 = 0;
var_184 = 3;
var_192 = 0;
var_200 = 100;
var_208 = -1;
var_216 = -862332527188600590;
var_224 = var_8;
var_232 = 56;
pri = fun_10A8(var_224, var_216, var_208, var_200, var_192, var_184, var_176)
var_240 = 1;
var_248 = 8;
pri = fun_1240(var_240)
var_256 = 0;
pri = fun_1300()
var_264 = 0;
var_272 = 0;
var_280 = 2008;
var_288 = var_32;
var_296 = var_24;
var_304 = var_16;
pri = PokeMemoryCheck(var_304, var_296, var_288, var_280, var_272, var_264)
OP_JUMP lab_5240
// lab_5250
var_8 = 0;
var_16 = 3;
var_24 = 0;
var_32 = 100;
var_40 = -1;
var_48 = -862334726211857012;
var_56 = var_8;
var_64 = 56;
pri = fun_10A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
var_72 = 1;
var_80 = 8;
pri = fun_1240(var_72)
var_88 = 0;
pri = fun_1300()
// lab_5000
var_8 = 0;
var_16 = 3;
var_24 = 0;
var_32 = 100;
var_40 = -1;
var_48 = -863184648700274890;
var_56 = var_8;
var_64 = 56;
pri = fun_10A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
var_72 = 0;
var_80 = 0;
var_88 = 1;
var_96 = 0;
var_104 = 0;
var_112 = 0;
var_120 = 48;
pri = fun_1488(var_112, var_104, var_96, var_88, var_80, var_72)
OP_JZER lab_5180
var_128 = 0;
var_136 = 3;
var_144 = 0;
var_152 = 100;
var_160 = -1;
var_168 = -862332527188600590;
var_176 = var_8;
var_184 = 56;
pri = fun_10A8(var_176, var_168, var_160, var_152, var_144, var_136, var_128)
var_192 = 1;
var_200 = 8;
pri = fun_1240(var_192)
var_208 = 0;
var_216 = 0;
var_224 = 2104;
var_232 = var_32;
var_240 = var_24;
var_248 = var_16;
pri = PokeMemoryCheck(var_248, var_240, var_232, var_224, var_216, var_208)
OP_JUMP lab_5228
// lab_5180
var_8 = var_32;
var_16 = var_24;
var_24 = var_16;
pri = SetDefaultNickname(var_24, var_16, var_8)
var_32 = 0;
var_40 = 3;
var_48 = 0;
var_56 = 100;
var_64 = -1;
var_72 = -863183549188646679;
var_80 = var_8;
var_88 = 56;
pri = fun_10A8(var_80, var_72, var_64, var_56, var_48, var_40, var_32)
var_96 = 1;
var_104 = 8;
pri = fun_1240(var_96)
// lab_5228
var_8 = 0;
pri = fun_1300()
// lab_5240
OP_JUMP lab_52E0
// lab_52E0
OP_LCTRL 5
OP_ADD_C -48
OP_SCTRL 4
var_8 = 0;
var_16 = 3;
var_24 = 0;
var_32 = 100;
var_40 = -1;
var_48 = -863182449677018468;
var_56 = var_8;
var_64 = 56;
pri = fun_10A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
var_72 = 0;
var_80 = 0;
var_88 = 1;
var_96 = 0;
var_104 = 0;
var_112 = 0;
var_120 = 48;
pri = fun_1488(var_112, var_104, var_96, var_88, var_80, var_72)
OP_JZER lab_53D0
OP_JUMP lab_4648
// lab_53D0
pri = 1;
return pri;
// fun_53E8
fun_53E8() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 2419567362312712855;
    pri = FlagGet(var_16)
    OP_JNZ lab_54F0
    var_24 = 0;
    var_32 = 3;
    var_40 = 0;
    var_48 = 100;
    var_56 = -1;
    var_64 = -3812290718507912982;
    var_72 = var_8;
    var_80 = 56;
    pri = fun_10A8(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    var_88 = 1;
    var_96 = 8;
    pri = fun_1240(var_88)
    var_104 = 2419567362312712855;
    pri = FlagSet(var_104)
// lab_54F0
    OP_LCTRL 5
    OP_ADD_C -8
    OP_SCTRL 4
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -3812291818019541193;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_10A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1240(var_72)
    var_88 = 0;
    pri = fun_1300()
    var_96 = 5;
    var_104 = 0;
    var_112 = 2;
    var_120 = 0;
    var_128 = 1;
    pri = CallSelectModeBox(var_128, var_120, var_112, var_104, var_96)
    OP_ZERO_P_S -16
    OP_ZERO_P_S -24
    OP_ZERO_P_S -32
    OP_PUSH_P_ADR -32
    OP_PUSH_P_ADR -24
    OP_PUSH_P_ADR -16
    var_160 = 24;
    pri = fun_16D0(var_152, var_144, var_136)
    pri = var_16;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_5688
    pri = 1;
    return pri;
// lab_5688
    var_8 = 1;
    var_16 = var_32;
    var_24 = var_24;
    var_32 = var_16;
    pri = PokeMemoryWordSet(var_32, var_24, var_16, var_8)
    var_48 = 1;
    var_56 = var_32;
    var_64 = var_24;
    var_72 = var_16;
    pri = PokeMemoryGetMsgId(var_72, var_64, var_56, var_48)
    var_40 = pri;
    var_80 = 0;
    var_88 = 3;
    var_96 = 0;
    var_104 = 100;
    var_112 = -1;
    var_120 = var_40;
    var_128 = var_8;
    var_136 = 56;
    pri = fun_10A8(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_144 = 1;
    var_152 = 8;
    pri = fun_1240(var_144)
    var_160 = 0;
    pri = fun_1300()
    var_168 = 0;
    var_176 = var_32;
    var_184 = var_24;
    var_192 = var_16;
    pri = PokeMemoryGetCode(var_192, var_184, var_176, var_168)
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_5960
    var_200 = 0;
    var_208 = 3;
    var_216 = 0;
    var_224 = 100;
    var_232 = -1;
    var_240 = -3812289618996284771;
    var_248 = var_8;
    var_256 = 56;
    pri = fun_10A8(var_248, var_240, var_232, var_224, var_216, var_208, var_200)
    var_264 = 1;
    var_272 = 8;
    pri = fun_1240(var_264)
    var_280 = 0;
    var_288 = var_32;
    var_296 = var_24;
    var_304 = var_16;
    pri = PokeMemoryWordSet(var_304, var_296, var_288, var_280)
    var_312 = 0;
    var_320 = var_32;
    var_328 = var_24;
    var_336 = var_16;
    pri = PokeMemoryGetMsgId(var_336, var_328, var_320, var_312)
    var_40 = pri;
    var_344 = 0;
    var_352 = 3;
    var_360 = 0;
    var_368 = 100;
    var_376 = -1;
    var_384 = var_40;
    var_392 = var_8;
    var_400 = 56;
    pri = fun_10A8(var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_408 = 1;
    var_416 = 8;
    pri = fun_1240(var_408)
    var_424 = 0;
    pri = fun_1300()
// lab_5960
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -3812297315577682248;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_10A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    var_80 = 0;
    var_88 = 1;
    var_96 = 0;
    var_104 = 0;
    var_112 = 0;
    var_120 = 48;
    pri = fun_1488(var_112, var_104, var_96, var_88, var_80, var_72)
    OP_JZER lab_5A20
    OP_JUMP lab_54F0
// lab_5A20
    pri = 1;
    return pri;
}
// fun_5A38
fun_5A38() {
    var_8 = 999592903914525945;
    pri = FlagGet(var_8)
    OP_JNZ lab_5B48
    var_16 = 0;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 6799426636469852592;
    pri = GetTargetFieldObjectID()
    var_64 = pri;
    var_72 = 56;
    pri = fun_10A8(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = 1;
    var_88 = 8;
    pri = fun_1240(var_80)
    var_96 = 0;
    pri = fun_1300()
    var_104 = 999592903914525945;
    pri = FlagSet(var_104)
// lab_5B48
    OP_LCTRL 5
    OP_SCTRL 4
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 958868781063633361;
    pri = GetTargetFieldObjectID()
    var_56 = pri;
    var_64 = 56;
    pri = fun_10A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1240(var_72)
    var_88 = 0;
    pri = fun_1300()
    var_96 = 5;
    var_104 = 1;
    var_112 = 2;
    var_120 = 0;
    var_128 = 1;
    pri = CallSelectModeBox(var_128, var_120, var_112, var_104, var_96)
    OP_ZERO_P_S -8
    OP_ZERO_P_S -16
    OP_ZERO_P_S -24
    OP_PUSH_P_ADR -24
    OP_PUSH_P_ADR -16
    OP_PUSH_P_ADR -8
    var_160 = 24;
    pri = fun_16D0(var_152, var_144, var_136)
    pri = var_8;
    OP_ZERO_ALT 
    OP_EQ 
    var_32 = pri;
    pri = var_8;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_5D10
    pri = 1;
    return pri;
// lab_5D10
    var_8 = var_16;
    var_16 = var_8;
    var_24 = 0;
    var_32 = 8;
    var_40 = var_24;
    var_48 = 40;
    pri = fun_17F8(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5E18
    var_56 = 0;
    var_64 = 3;
    var_72 = 0;
    var_80 = 100;
    var_88 = -1;
    var_96 = 957896812784484062;
    pri = GetTargetFieldObjectID()
    var_104 = pri;
    var_112 = 56;
    pri = fun_10A8(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_120 = 1;
    var_128 = 8;
    pri = fun_1240(var_120)
    var_136 = 0;
    pri = fun_1300()
    OP_JUMP lab_5B48
// lab_5E18
    OP_CONST_S -40, 1
    var_16 = var_16;
    var_24 = var_8;
    var_32 = 0;
    var_40 = 66;
    var_48 = var_24;
    var_56 = 40;
    pri = fun_17F8(var_48, var_40, var_32, var_24, var_16)
    alt = 1;
    OP_JSGRTR lab_5E98
    OP_ZERO_P_S -40
// lab_5E98
    pri = var_40;
    OP_JZER lab_6140
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 956902854272770543;
    pri = GetTargetFieldObjectID()
    var_56 = pri;
    var_64 = 56;
    pri = fun_10A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1240(var_72)
    var_88 = 0;
    pri = fun_1300()
    var_96 = var_24;
    var_104 = var_16;
    var_112 = var_32;
    var_120 = 0;
    var_128 = 2;
    pri = CallWazaEvent(var_128, var_120, var_112, var_104, var_96)
    OP_ZERO_P_S -48
    OP_ZERO_P_S -56
    OP_ZERO_P_S -64
    OP_PUSH_P_ADR -64
    OP_PUSH_P_ADR -56
    OP_PUSH_P_ADR -48
    var_160 = 24;
    pri = fun_1760(var_152, var_144, var_136)
    pri = var_48;
    OP_JNZ lab_6128
    var_168 = var_16;
    var_176 = var_8;
    var_184 = var_24;
    var_192 = 0;
    var_200 = 32;
    pri = fun_1630(var_192, var_184, var_176, var_168)
    var_208 = var_56;
    var_216 = 2;
    var_224 = 16;
    pri = fun_1540(var_216, var_208)
    var_232 = 3;
    var_240 = 0;
    var_248 = 956907252319283387;
    var_256 = 24;
    pri = fun_1158(var_248, var_240, var_232)
    var_264 = 1;
    var_272 = 8;
    pri = fun_1240(var_264)
    var_280 = 0;
    pri = fun_1300()
    var_288 = var_56;
    var_296 = 3;
    var_304 = 2200;
    var_312 = var_24;
    var_320 = var_16;
    var_328 = var_8;
    pri = PokeMemoryCheck(var_328, var_320, var_312, var_304, var_296, var_288)
// lab_6140
    var_8 = var_16;
    var_16 = var_8;
    var_24 = var_24;
    var_32 = 1;
    var_40 = 32;
    pri = fun_1630(var_32, var_24, var_16, var_8)
    var_48 = 0;
    var_56 = 3;
    var_64 = 0;
    var_72 = 100;
    var_80 = -1;
    var_88 = 957899011807740484;
    pri = GetTargetFieldObjectID()
    var_96 = pri;
    var_104 = 56;
    pri = fun_10A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1240(var_112)
// lab_6128
    OP_JUMP lab_6208
// lab_6208
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 957893514249599429;
    pri = GetTargetFieldObjectID()
    var_56 = pri;
    var_64 = 56;
    pri = fun_10A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    var_80 = 0;
    var_88 = 1;
    var_96 = 0;
    var_104 = 0;
    var_112 = 0;
    var_120 = 48;
    pri = fun_1488(var_112, var_104, var_96, var_88, var_80, var_72)
    OP_JZER lab_62E0
    OP_JUMP lab_5B48
// lab_62E0
    pri = 1;
    return pri;
}
// fun_62F8
fun_62F8() {
    var_8 = 6393539315507873497;
    pri = FlagGet(var_8)
    OP_JNZ lab_6408
    var_16 = 0;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = -5124619008059429526;
    pri = GetTargetFieldObjectID()
    var_64 = pri;
    var_72 = 56;
    pri = fun_10A8(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = 1;
    var_88 = 8;
    pri = fun_1240(var_80)
    var_96 = 0;
    pri = fun_1300()
    var_104 = 6393539315507873497;
    pri = FlagSet(var_104)
// lab_6408
    OP_LCTRL 5
    OP_SCTRL 4
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 958867681552005150;
    pri = GetTargetFieldObjectID()
    var_56 = pri;
    var_64 = 56;
    pri = fun_10A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1240(var_72)
    var_88 = 0;
    pri = fun_1300()
    var_96 = 5;
    var_104 = 1;
    var_112 = 2;
    var_120 = 0;
    var_128 = 1;
    pri = CallSelectModeBox(var_128, var_120, var_112, var_104, var_96)
    OP_ZERO_P_S -8
    OP_ZERO_P_S -16
    OP_ZERO_P_S -24
    OP_PUSH_P_ADR -24
    OP_PUSH_P_ADR -16
    OP_PUSH_P_ADR -8
    var_160 = 24;
    pri = fun_16D0(var_152, var_144, var_136)
    pri = var_8;
    OP_ZERO_ALT 
    OP_EQ 
    var_32 = pri;
    pri = var_8;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_65D0
    pri = 1;
    return pri;
// lab_65D0
    var_8 = var_16;
    var_16 = var_8;
    var_24 = 0;
    var_32 = 8;
    var_40 = var_24;
    var_48 = 40;
    pri = fun_17F8(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_66D8
    var_56 = 0;
    var_64 = 3;
    var_72 = 0;
    var_80 = 100;
    var_88 = -1;
    var_96 = 957896812784484062;
    pri = GetTargetFieldObjectID()
    var_104 = pri;
    var_112 = 56;
    pri = fun_10A8(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_120 = 1;
    var_128 = 8;
    pri = fun_1240(var_120)
    var_136 = 0;
    pri = fun_1300()
    OP_JUMP lab_6408
// lab_66D8
    OP_CONST_S -40, 1
    var_16 = var_16;
    var_24 = var_8;
    var_32 = 0;
    var_40 = 68;
    var_48 = var_24;
    var_56 = 40;
    pri = fun_17F8(var_48, var_40, var_32, var_24, var_16)
    OP_MOVE_ALT 
    pri = 0;
    OP_JSLESS lab_6760
    OP_ZERO_P_S -40
// lab_6760
    pri = var_40;
    OP_JZER lab_6B38
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 955918791365710923;
    pri = GetTargetFieldObjectID()
    var_56 = pri;
    var_64 = 56;
    pri = fun_10A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1240(var_72)
    var_88 = 0;
    pri = fun_1300()
    var_96 = var_24;
    var_104 = var_16;
    var_112 = var_32;
    var_120 = 0;
    var_128 = 1;
    pri = CallWazaEvent(var_128, var_120, var_112, var_104, var_96)
    OP_ZERO_P_S -48
    OP_ZERO_P_S -56
    OP_ZERO_P_S -64
    OP_PUSH_P_ADR -64
    OP_PUSH_P_ADR -56
    OP_PUSH_P_ADR -48
    var_160 = 24;
    pri = fun_1760(var_152, var_144, var_136)
    pri = var_48;
    OP_JNZ lab_6B20
    pri = var_56;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_6A08
    var_168 = var_16;
    var_176 = var_8;
    var_184 = var_24;
    var_192 = 0;
    var_200 = 32;
    pri = fun_1630(var_192, var_184, var_176, var_168)
    var_208 = var_56;
    var_216 = 1;
    var_224 = 16;
    pri = fun_1540(var_216, var_208)
    var_232 = var_64;
    var_240 = 2;
    var_248 = 16;
    pri = fun_1540(var_240, var_232)
    var_256 = 3;
    var_264 = 0;
    var_272 = 956906152807655176;
    var_280 = 24;
    pri = fun_1158(var_272, var_264, var_256)
    var_288 = 1;
    var_296 = 8;
    pri = fun_1240(var_288)
    var_304 = 0;
    pri = fun_1300()
    OP_JUMP lab_6AD8
// lab_6B38
    var_8 = var_16;
    var_16 = var_8;
    var_24 = var_24;
    var_32 = 1;
    var_40 = 32;
    pri = fun_1630(var_32, var_24, var_16, var_8)
    var_48 = 0;
    var_56 = 3;
    var_64 = 0;
    var_72 = 100;
    var_80 = -1;
    var_88 = 957897912296112273;
    pri = GetTargetFieldObjectID()
    var_96 = pri;
    var_104 = 56;
    pri = fun_10A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1240(var_112)
// lab_6B20
    OP_JUMP lab_6C00
// lab_6C00
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 957894613761227640;
    pri = GetTargetFieldObjectID()
    var_56 = pri;
    var_64 = 56;
    pri = fun_10A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    var_80 = 0;
    var_88 = 1;
    var_96 = 0;
    var_104 = 0;
    var_112 = 0;
    var_120 = 48;
    pri = fun_1488(var_112, var_104, var_96, var_88, var_80, var_72)
    OP_JZER lab_6CD8
    OP_JUMP lab_6408
// lab_6CD8
    pri = 1;
    return pri;
// lab_6A08
    var_8 = var_16;
    var_16 = var_8;
    var_24 = var_24;
    var_32 = 0;
    var_40 = 32;
    pri = fun_1630(var_32, var_24, var_16, var_8)
    var_48 = var_64;
    var_56 = 1;
    var_64 = 16;
    pri = fun_1540(var_56, var_48)
    var_72 = 3;
    var_80 = 0;
    var_88 = -883086327610093516;
    var_96 = 24;
    pri = fun_1158(var_88, var_80, var_72)
    var_104 = 1;
    var_112 = 8;
    pri = fun_1240(var_104)
    var_120 = 0;
    pri = fun_1300()
// lab_6AD8
    var_8 = var_64;
    var_16 = 3;
    var_24 = 2296;
    var_32 = var_24;
    var_40 = var_16;
    var_48 = var_8;
    pri = PokeMemoryCheck(var_48, var_40, var_32, var_24, var_16, var_8)
}
