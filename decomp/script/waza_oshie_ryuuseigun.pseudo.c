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
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_13A8()
    return pri;
}
// fun_13A8
fun_13A8() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_13E8
fun_13E8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 9;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1438
fun_1438() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 17;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1488
fun_1488() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 18;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_14D8
fun_14D8() {
    pri = arg_2;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1538
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1438(var_16, var_8)
    OP_JUMP lab_1568
// lab_1538
    var_8 = arg_1;
    var_16 = arg_3;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1488(var_24, var_16, var_8)
// lab_1568
    pri = 0;
    return pri;
}
// fun_1578
fun_1578() {
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
// fun_1610
fun_1610() {
    pri = arg_3;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1670
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = PokePartyGetParam(var_24, var_16, var_8)
    return pri;
// lab_1670
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = arg_4;
    pri = PokeBoxGetParam(var_32, var_24, var_16, var_8)
    return pri;
}
// fun_16B0
fun_16B0() {
    OP_ZERO_P_S -8
    OP_JUMP lab_16E0
// lab_16E0
    pri = var_8;
    var_8 = pri;
    var_16 = 0;
    var_24 = 0;
    pri = PokePartyGetCount(var_24, var_16)
    OP_POP_ALT 
    OP_JSLEQ lab_17E0
    var_32 = 0;
    var_40 = 8;
    var_48 = var_8;
    pri = PokePartyGetParam(var_48, var_40, var_32)
    OP_JZER lab_1780
    OP_JUMP lab_16D8
// lab_17E0
    OP_ZERO_P_S -8
    OP_JUMP lab_1810
// lab_1810
    pri = var_8;
    var_8 = pri;
    pri = PokeBoxGetTrayNum()
    OP_POP_ALT 
    OP_JSLEQ lab_19C0
    OP_ZERO_P_S -16
    OP_JUMP lab_1878
// lab_19C0
    pri = 0;
    return pri;
// lab_1878
    pri = var_16;
    alt = 30;
    OP_JSGEQ lab_19A8
    var_8 = 0;
    var_16 = 8;
    var_24 = var_16;
    var_32 = var_8;
    pri = PokeBoxGetParam(var_32, var_24, var_16, var_8)
    OP_JZER lab_18F0
    OP_JUMP lab_1870
// lab_19A8
    OP_JUMP lab_1808
// lab_1808
    OP_INC_P_S -8
// lab_18F0
    var_8 = 0;
    var_16 = var_16;
    var_24 = var_8;
    pri = PokeBoxIsExist(var_24, var_16, var_8)
    OP_JNZ lab_1940
    OP_JUMP lab_1870
// lab_1940
    var_8 = arg_0;
    var_16 = var_16;
    var_24 = var_8;
    pri = PokeBoxCheckWazaOshie(var_24, var_16, var_8)
    OP_JZER lab_1998
    pri = 1;
    return pri;
// lab_1998
    OP_JUMP lab_1870
// lab_1870
    OP_INC_P_S -16
// lab_1780
    var_8 = arg_0;
    var_16 = var_8;
    pri = PokePartyCheckWazaOshie(var_16, var_8)
    OP_JZER lab_17D0
    pri = 1;
    return pri;
// lab_17D0
    OP_JUMP lab_16D8
// lab_16D8
    OP_INC_P_S -8
}
// fun_19D8
fun_19D8() {
    pri = arg_4;
    OP_JNZ lab_1A10
    var_8 = 0;
    pri = fun_06E0()
// lab_1A10
    pri = arg_1;
    switch (pri) {
// switch_2DE8
        case default:
        {
// switch_2DE8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 856;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_07A0(var_264)
            OP_JZER lab_33B0
            pri = arg_3;
            switch (pri) {
// switch_3358
                case default:
                {
// switch_3358_case_default
                    OP_JUMP lab_3668
// lab_3668
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_36D8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_36D8
                    var_8 = 0;
                    pri = fun_0720()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_3358_case_0x1
                    var_8 = 32;
                    var_16 = 1008;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_3358_case_default
                }
                case 0x2:
                {
// switch_3358_case_0x2
                    var_8 = 32;
                    var_16 = 1112;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_3358_case_default
                }
                case 0x3:
                {
// switch_3358_case_0x3
                    var_8 = 32;
                    var_16 = 912;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_3358_case_default
                }
            }
// lab_33B0
            pri = arg_1;
            OP_JZER lab_3400
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_3400
            pri = 0;
            OP_JUMP lab_3408
// lab_3400
            pri = 1;
// lab_3408
            OP_JZER lab_3470
            var_8 = 1208;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0470(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_3470
            pri = 1;
            OP_JUMP lab_3478
// lab_3470
            pri = 0;
// lab_3478
            OP_JZER lab_34C8
            var_8 = 32;
            var_16 = 1304;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3668
// lab_34C8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_3530
            var_8 = 32;
            var_16 = 1464;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3668
// lab_3530
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
// switch_2DE8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x1:
        {
// switch_2DE8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x2:
        {
// switch_2DE8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x3:
        {
// switch_2DE8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x4:
        {
// switch_2DE8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x5:
        {
// switch_2DE8_case_0x5
            var_8 = 1;
            var_16 = 336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0430(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_06A8(var_40)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x6:
        {
// switch_2DE8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x7:
        {
// switch_2DE8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x8:
        {
// switch_2DE8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x9:
        {
// switch_2DE8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0xa:
        {
// switch_2DE8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0xb:
        {
// switch_2DE8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0xc:
        {
// switch_2DE8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0xd:
        {
// switch_2DE8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0xe:
        {
// switch_2DE8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0xf:
        {
// switch_2DE8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x10:
        {
// switch_2DE8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x11:
        {
// switch_2DE8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x12:
        {
// switch_2DE8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x13:
        {
// switch_2DE8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x14:
        {
// switch_2DE8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x15:
        {
// switch_2DE8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x16:
        {
// switch_2DE8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x17:
        {
// switch_2DE8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x18:
        {
// switch_2DE8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x19:
        {
// switch_2DE8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x1a:
        {
// switch_2DE8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x1b:
        {
// switch_2DE8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x1c:
        {
// switch_2DE8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x1d:
        {
// switch_2DE8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x1e:
        {
// switch_2DE8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x1f:
        {
// switch_2DE8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x20:
        {
// switch_2DE8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x21:
        {
// switch_2DE8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x22:
        {
// switch_2DE8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x23:
        {
// switch_2DE8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x24:
        {
// switch_2DE8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x25:
        {
// switch_2DE8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x26:
        {
// switch_2DE8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x27:
        {
// switch_2DE8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x28:
        {
// switch_2DE8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x29:
        {
// switch_2DE8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x2a:
        {
// switch_2DE8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x2b:
        {
// switch_2DE8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x2c:
        {
// switch_2DE8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x2d:
        {
// switch_2DE8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x2e:
        {
// switch_2DE8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x2f:
        {
// switch_2DE8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x30:
        {
// switch_2DE8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x31:
        {
// switch_2DE8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x32:
        {
// switch_2DE8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x33:
        {
// switch_2DE8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x34:
        {
// switch_2DE8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x35:
        {
// switch_2DE8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x36:
        {
// switch_2DE8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x37:
        {
// switch_2DE8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x38:
        {
// switch_2DE8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x39:
        {
// switch_2DE8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x3a:
        {
// switch_2DE8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x3b:
        {
// switch_2DE8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x3c:
        {
// switch_2DE8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 432;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x3d:
        {
// switch_2DE8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 608;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
        case 0x3e:
        {
// switch_2DE8_case_0x3e
            var_8 = 3;
            var_16 = 752;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0430(var_24, var_16, var_8)
            OP_JUMP switch_2DE8_case_default
        }
    }
}
// fun_3708
fun_3708() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_3808
        case default:
        {
// switch_3808_case_default
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
// switch_3808_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_3808_case_default
        }
        case 0x1:
        {
// switch_3808_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_3808_case_default
        }
        case 0x2:
        {
// switch_3808_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_3808_case_default
        }
        case 0x3:
        {
// switch_3808_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_3808_case_default
        }
    }
}
// fun_38C8
fun_38C8() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_3918
// lab_3918
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 1752;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_3990
    OP_JUMP lab_39C0
// lab_3990
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_3918
// lab_39C0
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_3A48
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_19D8(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0800(var_56)
// lab_3A48
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_3AB0
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0760(var_24, var_16)
// lab_3AB0
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0760(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_3B70
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
// lab_3B70
    pri = IsPlayerRideBicycle()
    OP_JZER lab_3BB0
    pri = 0;
    return pri;
// lab_3BB0
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_3CF8
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
    OP_JSLESS lab_3CC0
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_3CF8
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
// lab_3CC0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0760(var_16, var_8)
}
// fun_3D80
fun_3D80() {
    pri = g_mode;
    switch (pri) {
// switch_3E18
        case default:
        {
// switch_3E18_case_default
            pri = CommandNOP()
            OP_JUMP lab_3E50
// lab_3E50
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3E18_case_0x0
            var_8 = 0;
            pri = fun_3E60()
            OP_JUMP lab_3E50
        }
        case 0x64f1576e3a7cf376:
        {
// switch_3E18_case_0x64f1576e3a7cf376
            var_8 = 0;
            pri = fun_3E78()
            OP_JUMP lab_3E50
        }
    }
}
// fun_3E60
fun_3E60() {
    pri = 0;
    return pri;
}
// fun_3E78
fun_3E78() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    OP_CONST_S -16, 434
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 1;
    var_56 = 1;
    var_64 = var_8;
    var_72 = 48;
    pri = fun_3708(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 0;
    var_88 = 3;
    var_96 = 0;
    var_104 = 100;
    var_112 = -1;
    var_120 = 6448206270928471282;
    var_128 = var_8;
    var_136 = 56;
    pri = fun_10A8(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_144 = 0;
    var_152 = 0;
    var_160 = 1;
    var_168 = 0;
    var_176 = 0;
    var_184 = 0;
    var_192 = 48;
    pri = fun_1330(var_184, var_176, var_168, var_160, var_152, var_144)
    OP_JNZ lab_4008
    var_200 = 6448205171416843071;
    var_208 = var_8;
    var_216 = 16;
    pri = fun_4DD0(var_208, var_200)
    pri = 0;
    return pri;
// lab_4008
    var_8 = var_16;
    var_16 = 8;
    pri = fun_16B0(var_8)
    OP_JNZ lab_4080
    var_24 = 6448202972393586649;
    var_32 = var_8;
    var_40 = 16;
    pri = fun_4DD0(var_32, var_24)
    pri = 0;
    return pri;
// lab_4080
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 6448201872881958438;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_10A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1240(var_72)
    var_88 = 0;
    pri = fun_1300()
}
// lab_4110
OP_LCTRL 5
OP_ADD_C -16
OP_SCTRL 4
var_8 = 0;
var_16 = 1;
var_24 = 2;
var_32 = 0;
var_40 = 1;
pri = CallSelectModeBox(var_40, var_32, var_24, var_16, var_8)
var_56 = 0;
pri = TempWorkGet(var_56)
var_24 = pri;
pri = var_24;
OP_ZERO_ALT 
OP_EQ 
var_32 = pri;
var_80 = 1;
pri = TempWorkGet(var_80)
var_40 = pri;
var_96 = 2;
pri = TempWorkGet(var_96)
var_48 = pri;
pri = var_24;
OP_EQ_P_C_PRI 2
OP_JZER lab_42A0
var_104 = 6448205171416843071;
var_112 = var_8;
var_120 = 16;
pri = fun_4DD0(var_112, var_104)
pri = 0;
return pri;
// lab_42A0
var_8 = var_40;
var_16 = var_24;
var_24 = 0;
var_32 = 8;
var_40 = var_48;
var_48 = 40;
pri = fun_1610(var_40, var_32, var_24, var_16, var_8)
OP_JZER lab_4390
var_56 = 0;
var_64 = 3;
var_72 = 0;
var_80 = 100;
var_88 = -1;
var_96 = 6448199673858702016;
var_104 = var_8;
var_112 = 56;
pri = fun_10A8(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
var_120 = 1;
var_128 = 8;
pri = fun_1240(var_120)
var_136 = 0;
pri = fun_1300()
OP_JUMP lab_4110
// lab_4390
pri = var_32;
OP_JZER lab_44D0
var_8 = var_16;
var_16 = var_48;
var_24 = var_40;
pri = PokeBoxCheckWazaOshie(var_24, var_16, var_8)
OP_JNZ lab_44C0
var_32 = var_40;
var_40 = var_24;
var_48 = var_48;
var_56 = 1;
var_64 = 32;
pri = fun_14D8(var_56, var_48, var_40, var_32)
var_72 = 0;
var_80 = 3;
var_88 = 0;
var_96 = 100;
var_104 = -1;
var_112 = 6448200773370330227;
var_120 = var_8;
var_128 = 56;
pri = fun_10A8(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
var_136 = 1;
var_144 = 8;
pri = fun_1240(var_136)
var_152 = 0;
pri = fun_1300()
OP_JUMP lab_4110
// lab_44D0
var_8 = var_16;
var_16 = var_48;
pri = PokePartyCheckWazaOshie(var_16, var_8)
OP_JNZ lab_45E0
var_24 = var_40;
var_32 = var_24;
var_40 = var_48;
var_48 = 1;
var_56 = 32;
pri = fun_14D8(var_48, var_40, var_32, var_24)
var_64 = 0;
var_72 = 3;
var_80 = 0;
var_88 = 100;
var_96 = -1;
var_104 = 6448200773370330227;
var_112 = var_8;
var_120 = 56;
pri = fun_10A8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
var_128 = 1;
var_136 = 8;
pri = fun_1240(var_128)
var_144 = 0;
pri = fun_1300()
OP_JUMP lab_4110
// lab_45E0
pri = var_32;
OP_JZER lab_4738
var_8 = var_16;
var_16 = var_48;
var_24 = var_40;
pri = PokeBoxIsHaveWaza(var_24, var_16, var_8)
OP_JZER lab_4728
var_32 = var_40;
var_40 = var_24;
var_48 = var_48;
var_56 = 1;
var_64 = 32;
pri = fun_14D8(var_56, var_48, var_40, var_32)
var_72 = 0;
var_80 = 3;
var_88 = 0;
var_96 = 100;
var_104 = -1;
var_112 = 6448216166533125181;
pri = GetTargetFieldObjectID()
var_120 = pri;
var_128 = 56;
pri = fun_10A8(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
var_136 = 1;
var_144 = 8;
pri = fun_1240(var_136)
var_152 = 0;
pri = fun_1300()
OP_JUMP lab_4110
// lab_4738
var_8 = var_16;
var_16 = var_48;
pri = PokePartyHaveWaza(var_16, var_8)
OP_JZER lab_4860
var_24 = var_40;
var_32 = var_24;
var_40 = var_48;
var_48 = 1;
var_56 = 32;
pri = fun_14D8(var_48, var_40, var_32, var_24)
var_64 = 0;
var_72 = 3;
var_80 = 0;
var_88 = 100;
var_96 = -1;
var_104 = 6448216166533125181;
pri = GetTargetFieldObjectID()
var_112 = pri;
var_120 = 56;
pri = fun_10A8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
var_128 = 1;
var_136 = 8;
pri = fun_1240(var_128)
var_144 = 0;
pri = fun_1300()
OP_JUMP lab_4110
// lab_4860
OP_ZERO_P_S -56
var_16 = var_40;
var_24 = var_24;
var_32 = 0;
var_40 = 66;
var_48 = var_48;
var_56 = 40;
pri = fun_1610(var_48, var_40, var_32, var_24, var_16)
alt = 3;
OP_JSGRTR lab_4A00
pri = var_32;
OP_JZER lab_4970
var_64 = var_16;
var_72 = 5;
var_80 = var_48;
var_88 = var_40;
pri = PokeBoxSetWaza(var_88, var_80, var_72, var_64)
var_96 = var_16;
var_104 = 3;
var_112 = 2008;
var_120 = var_48;
var_128 = var_40;
var_136 = 0;
pri = PokeMemoryCheck(var_136, var_128, var_120, var_112, var_104, var_96)
OP_JUMP lab_49E8
// lab_4A00
pri = var_56;
OP_JZER lab_4AF8
var_8 = var_40;
var_16 = var_24;
var_24 = var_48;
var_32 = 0;
var_40 = 32;
pri = fun_14D8(var_32, var_24, var_16, var_8)
var_48 = var_16;
var_56 = 1;
var_64 = 16;
pri = fun_13E8(var_56, var_48)
var_72 = 3;
var_80 = 0;
var_88 = -8976898776229798433;
var_96 = 24;
pri = fun_1158(var_88, var_80, var_72)
var_104 = 1;
var_112 = 8;
pri = fun_1240(var_104)
var_120 = 0;
pri = fun_1300()
OP_JUMP lab_4D88
// lab_4AF8
var_8 = 0;
var_16 = 3;
var_24 = 0;
var_32 = 100;
var_40 = -1;
var_48 = 6447356348440053404;
var_56 = var_8;
var_64 = 56;
pri = fun_10A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
var_72 = 1;
var_80 = 8;
pri = fun_1240(var_72)
var_88 = 0;
pri = fun_1300()
var_96 = var_48;
var_104 = var_40;
var_112 = var_32;
var_120 = var_16;
var_128 = 0;
pri = CallWazaEvent(var_128, var_120, var_112, var_104, var_96)
OP_ZERO_P_S -64
OP_ZERO_P_S -72
OP_ZERO_P_S -80
OP_PUSH_P_ADR -80
OP_PUSH_P_ADR -72
OP_PUSH_P_ADR -64
var_160 = 24;
pri = fun_1578(var_152, var_144, var_136)
pri = var_64;
OP_JZER lab_4C88
var_168 = 6448205171416843071;
var_176 = var_8;
var_184 = 16;
pri = fun_4DD0(var_176, var_168)
pri = 0;
return pri;
// lab_4C88
var_8 = var_40;
var_16 = var_24;
var_24 = var_48;
var_32 = 0;
var_40 = 32;
pri = fun_14D8(var_32, var_24, var_16, var_8)
var_48 = var_72;
var_56 = 1;
var_64 = 16;
pri = fun_13E8(var_56, var_48)
var_72 = var_80;
var_80 = 2;
var_88 = 16;
pri = fun_13E8(var_80, var_72)
var_96 = 3;
var_104 = 0;
var_112 = -8976899875741426644;
var_120 = 24;
pri = fun_1158(var_112, var_104, var_96)
var_128 = 1;
var_136 = 8;
pri = fun_1240(var_128)
var_144 = 0;
pri = fun_1300()
// lab_4D88
var_8 = 6448215067021496970;
var_16 = var_8;
var_24 = 16;
pri = fun_4DD0(var_16, var_8)
pri = 0;
return pri;
// lab_4970
var_8 = var_16;
var_16 = 5;
var_24 = var_48;
pri = PokePartySetWaza(var_24, var_16, var_8)
var_32 = var_16;
var_40 = 3;
var_48 = 2104;
var_56 = var_48;
var_64 = 0;
var_72 = 1;
pri = PokeMemoryCheck(var_72, var_64, var_56, var_48, var_40, var_32)
// lab_49E8
OP_CONST_S -56, 1
// lab_4728
OP_JUMP lab_4860
// lab_44C0
OP_JUMP lab_45E0
// fun_4DD0
fun_4DD0() {
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = arg_1;
    var_56 = arg_0;
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
    var_120 = arg_0;
    var_128 = 32;
    pri = fun_38C8(var_120, var_112, var_104, var_96)
    pri = 0;
    return pri;
}
