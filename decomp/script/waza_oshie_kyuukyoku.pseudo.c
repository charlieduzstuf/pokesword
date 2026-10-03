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
// fun_1608
fun_1608() {
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
// fun_16A0
fun_16A0() {
    pri = arg_3;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1700
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = PokePartyGetParam(var_24, var_16, var_8)
    return pri;
// lab_1700
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = arg_4;
    pri = PokeBoxGetParam(var_32, var_24, var_16, var_8)
    return pri;
}
// fun_1740
fun_1740() {
    OP_ZERO_P_S -8
    OP_JUMP lab_1770
// lab_1770
    pri = var_8;
    var_8 = pri;
    var_16 = 0;
    var_24 = 0;
    pri = PokePartyGetCount(var_24, var_16)
    OP_POP_ALT 
    OP_JSLEQ lab_1870
    var_32 = 0;
    var_40 = 8;
    var_48 = var_8;
    pri = PokePartyGetParam(var_48, var_40, var_32)
    OP_JZER lab_1810
    OP_JUMP lab_1768
// lab_1870
    OP_ZERO_P_S -8
    OP_JUMP lab_18A0
// lab_18A0
    pri = var_8;
    var_8 = pri;
    pri = PokeBoxGetTrayNum()
    OP_POP_ALT 
    OP_JSLEQ lab_1A50
    OP_ZERO_P_S -16
    OP_JUMP lab_1908
// lab_1A50
    pri = 0;
    return pri;
// lab_1908
    pri = var_16;
    alt = 30;
    OP_JSGEQ lab_1A38
    var_8 = 0;
    var_16 = 8;
    var_24 = var_16;
    var_32 = var_8;
    pri = PokeBoxGetParam(var_32, var_24, var_16, var_8)
    OP_JZER lab_1980
    OP_JUMP lab_1900
// lab_1A38
    OP_JUMP lab_1898
// lab_1898
    OP_INC_P_S -8
// lab_1980
    var_8 = 0;
    var_16 = var_16;
    var_24 = var_8;
    pri = PokeBoxIsExist(var_24, var_16, var_8)
    OP_JNZ lab_19D0
    OP_JUMP lab_1900
// lab_19D0
    var_8 = arg_0;
    var_16 = var_16;
    var_24 = var_8;
    pri = PokeBoxCheckWazaOshie(var_24, var_16, var_8)
    OP_JZER lab_1A28
    pri = 1;
    return pri;
// lab_1A28
    OP_JUMP lab_1900
// lab_1900
    OP_INC_P_S -16
// lab_1810
    var_8 = arg_0;
    var_16 = var_8;
    pri = PokePartyCheckWazaOshie(var_16, var_8)
    OP_JZER lab_1860
    pri = 1;
    return pri;
// lab_1860
    OP_JUMP lab_1768
// lab_1768
    OP_INC_P_S -8
}
// fun_1A68
fun_1A68() {
    pri = arg_4;
    OP_JNZ lab_1AA0
    var_8 = 0;
    pri = fun_06E0()
// lab_1AA0
    pri = arg_1;
    switch (pri) {
// switch_2E78
        case default:
        {
// switch_2E78_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 856;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_07A0(var_264)
            OP_JZER lab_3440
            pri = arg_3;
            switch (pri) {
// switch_33E8
                case default:
                {
// switch_33E8_case_default
                    OP_JUMP lab_36F8
// lab_36F8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_3768
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_3768
                    var_8 = 0;
                    pri = fun_0720()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_33E8_case_0x1
                    var_8 = 32;
                    var_16 = 1008;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_33E8_case_default
                }
                case 0x2:
                {
// switch_33E8_case_0x2
                    var_8 = 32;
                    var_16 = 1112;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_33E8_case_default
                }
                case 0x3:
                {
// switch_33E8_case_0x3
                    var_8 = 32;
                    var_16 = 912;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_33E8_case_default
                }
            }
// lab_3440
            pri = arg_1;
            OP_JZER lab_3490
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_3490
            pri = 0;
            OP_JUMP lab_3498
// lab_3490
            pri = 1;
// lab_3498
            OP_JZER lab_3500
            var_8 = 1208;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0470(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_3500
            pri = 1;
            OP_JUMP lab_3508
// lab_3500
            pri = 0;
// lab_3508
            OP_JZER lab_3558
            var_8 = 32;
            var_16 = 1304;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_36F8
// lab_3558
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_35C0
            var_8 = 32;
            var_16 = 1464;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_36F8
// lab_35C0
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
// switch_2E78_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x1:
        {
// switch_2E78_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x2:
        {
// switch_2E78_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x3:
        {
// switch_2E78_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x4:
        {
// switch_2E78_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x5:
        {
// switch_2E78_case_0x5
            var_8 = 1;
            var_16 = 336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0430(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_06A8(var_40)
            OP_JUMP switch_2E78_case_default
        }
        case 0x6:
        {
// switch_2E78_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x7:
        {
// switch_2E78_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x8:
        {
// switch_2E78_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x9:
        {
// switch_2E78_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0xa:
        {
// switch_2E78_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0xb:
        {
// switch_2E78_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0xc:
        {
// switch_2E78_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0xd:
        {
// switch_2E78_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0xe:
        {
// switch_2E78_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0xf:
        {
// switch_2E78_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x10:
        {
// switch_2E78_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x11:
        {
// switch_2E78_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x12:
        {
// switch_2E78_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x13:
        {
// switch_2E78_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x14:
        {
// switch_2E78_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x15:
        {
// switch_2E78_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x16:
        {
// switch_2E78_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x17:
        {
// switch_2E78_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x18:
        {
// switch_2E78_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x19:
        {
// switch_2E78_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x1a:
        {
// switch_2E78_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x1b:
        {
// switch_2E78_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x1c:
        {
// switch_2E78_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x1d:
        {
// switch_2E78_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x1e:
        {
// switch_2E78_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x1f:
        {
// switch_2E78_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x20:
        {
// switch_2E78_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x21:
        {
// switch_2E78_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x22:
        {
// switch_2E78_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x23:
        {
// switch_2E78_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x24:
        {
// switch_2E78_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x25:
        {
// switch_2E78_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x26:
        {
// switch_2E78_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x27:
        {
// switch_2E78_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x28:
        {
// switch_2E78_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x29:
        {
// switch_2E78_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x2a:
        {
// switch_2E78_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x2b:
        {
// switch_2E78_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x2c:
        {
// switch_2E78_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x2d:
        {
// switch_2E78_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x2e:
        {
// switch_2E78_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x2f:
        {
// switch_2E78_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x30:
        {
// switch_2E78_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x31:
        {
// switch_2E78_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x32:
        {
// switch_2E78_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x33:
        {
// switch_2E78_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x34:
        {
// switch_2E78_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x35:
        {
// switch_2E78_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x36:
        {
// switch_2E78_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x37:
        {
// switch_2E78_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x38:
        {
// switch_2E78_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x39:
        {
// switch_2E78_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x3a:
        {
// switch_2E78_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x3b:
        {
// switch_2E78_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x3c:
        {
// switch_2E78_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 432;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x3d:
        {
// switch_2E78_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 608;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
        case 0x3e:
        {
// switch_2E78_case_0x3e
            var_8 = 3;
            var_16 = 752;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0430(var_24, var_16, var_8)
            OP_JUMP switch_2E78_case_default
        }
    }
}
// fun_3798
fun_3798() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_3898
        case default:
        {
// switch_3898_case_default
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
// switch_3898_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_3898_case_default
        }
        case 0x1:
        {
// switch_3898_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_3898_case_default
        }
        case 0x2:
        {
// switch_3898_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_3898_case_default
        }
        case 0x3:
        {
// switch_3898_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_3898_case_default
        }
    }
}
// fun_3958
fun_3958() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_39A8
// lab_39A8
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 1752;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_3A20
    OP_JUMP lab_3A50
// lab_3A20
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_39A8
// lab_3A50
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_3AD8
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_1A68(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0800(var_56)
// lab_3AD8
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_3B40
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0760(var_24, var_16)
// lab_3B40
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0760(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_3C00
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
// lab_3C00
    pri = IsPlayerRideBicycle()
    OP_JZER lab_3C40
    pri = 0;
    return pri;
// lab_3C40
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_3D88
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
    OP_JSLESS lab_3D50
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_3D88
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
// lab_3D50
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0760(var_16, var_8)
}
// fun_3E10
fun_3E10() {
    pri = g_mode;
    switch (pri) {
// switch_3EA8
        case default:
        {
// switch_3EA8_case_default
            pri = CommandNOP()
            OP_JUMP lab_3EE0
// lab_3EE0
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3EA8_case_0x0
            var_8 = 0;
            pri = fun_3EF0()
            OP_JUMP lab_3EE0
        }
        case 0x345af67cb4f25e59:
        {
// switch_3EA8_case_0x345af67cb4f25e59
            var_8 = 0;
            pri = fun_3F08()
            OP_JUMP lab_3EE0
        }
    }
}
// fun_3EF0
fun_3EF0() {
    pri = 0;
    return pri;
}
// fun_3F08
fun_3F08() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = var_8;
    var_64 = 48;
    pri = fun_3798(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    var_112 = -1127438262713618035;
    var_120 = var_8;
    var_128 = 56;
    pri = fun_10A8(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = 0;
    var_144 = 0;
    var_152 = 1;
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    var_184 = 48;
    pri = fun_1330(var_176, var_168, var_160, var_152, var_144, var_136)
    OP_JNZ lab_4078
    var_192 = -1127441561248502668;
    var_200 = var_8;
    var_208 = 16;
    pri = fun_52A0(var_200, var_192)
    pri = 0;
    return pri;
// lab_4078
    var_8 = 307;
    var_16 = 8;
    pri = fun_1740(var_8)
    OP_JNZ lab_4120
    var_24 = 308;
    var_32 = 8;
    pri = fun_1740(var_24)
    OP_JNZ lab_4120
    var_40 = 338;
    var_48 = 8;
    pri = fun_1740(var_40)
    OP_JNZ lab_4120
    pri = 1;
    OP_JUMP lab_4128
// lab_4120
    pri = 0;
// lab_4128
    OP_JZER lab_4180
    var_8 = -1127443760271759090;
    var_16 = var_8;
    var_24 = 16;
    pri = fun_52A0(var_16, var_8)
    pri = 0;
    return pri;
// lab_4180
    OP_LCTRL 5
    OP_ADD_C -8
    OP_SCTRL 4
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -1127442660760130879;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_10A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1240(var_72)
    var_88 = 0;
    pri = fun_1300()
    var_96 = 2;
    var_104 = 1;
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
    pri = fun_1578(var_152, var_144, var_136)
    pri = var_16;
    OP_ZERO_ALT 
    OP_EQ 
    var_40 = pri;
    pri = var_16;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_4370
    var_176 = -1127441561248502668;
    var_184 = var_8;
    var_192 = 16;
    pri = fun_52A0(var_184, var_176)
    pri = 0;
    return pri;
// lab_4370
    var_8 = var_24;
    var_16 = var_16;
    var_24 = 0;
    var_32 = 8;
    var_40 = var_32;
    var_48 = 40;
    pri = fun_16A0(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4460
    var_56 = 0;
    var_64 = 3;
    var_72 = 0;
    var_80 = 100;
    var_88 = -1;
    var_96 = -1127444859783387301;
    var_104 = var_8;
    var_112 = 56;
    pri = fun_10A8(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_120 = 1;
    var_128 = 8;
    pri = fun_1240(var_120)
    var_136 = 0;
    pri = fun_1300()
    OP_JUMP lab_4180
// lab_4460
    pri = 0;
    OP_ADDR_ALT -104
    OP_FILL 64
    pri = 2008;
    OP_ADDR_ALT -104
    OP_MOVS 24
    pri = 0;
    OP_ADDR_ALT -168
    OP_FILL 64
    pri = 2032;
    OP_ADDR_ALT -168
    OP_MOVS 24
    pri = 0;
    OP_ADDR_ALT -232
    OP_FILL 64
    pri = 2056;
    OP_ADDR_ALT -232
    OP_MOVS 24
    OP_CONST_S -240, 307
    var_216 = var_24;
    var_224 = var_16;
    var_232 = 0;
    var_240 = 0;
    var_248 = var_32;
    var_256 = 40;
    pri = fun_16A0(var_248, var_240, var_232, var_224, var_216)
    var_248 = pri;
    OP_ZERO_P_S -256
    OP_JUMP lab_4618
// lab_4618
    pri = var_256;
    alt = 8;
    OP_JSGEQ lab_46A8
    OP_ADDR_P_ALT -104
    pri = var_256;
    OP_LIDX_P_B 3
    OP_MOVE_ALT 
    pri = var_248;
    OP_JNEQ lab_4698
    OP_CONST_S -240, 307
    OP_JUMP lab_4830
// lab_46A8
    OP_ZERO_P_S -256
    OP_JUMP lab_46D8
// lab_46D8
    pri = var_256;
    alt = 8;
    OP_JSGEQ lab_4768
    OP_ADDR_P_ALT -168
    pri = var_256;
    OP_LIDX_P_B 3
    OP_MOVE_ALT 
    pri = var_248;
    OP_JNEQ lab_4758
    OP_CONST_S -240, 308
    OP_JUMP lab_4830
// lab_4768
    OP_ZERO_P_S -256
    OP_JUMP lab_4798
// lab_4798
    pri = var_256;
    alt = 8;
    OP_JSGEQ lab_4828
    OP_ADDR_P_ALT -232
    pri = var_256;
    OP_LIDX_P_B 3
    OP_MOVE_ALT 
    pri = var_248;
    OP_JNEQ lab_4818
    OP_CONST_S -240, 338
    OP_JUMP lab_4830
// lab_4828
// lab_4818
    OP_JUMP lab_4790
// lab_4790
    OP_INC_P_S -256
// lab_4830
    OP_LCTRL 5
    OP_ADD_C -248
    OP_SCTRL 4
    pri = var_40;
    OP_JZER lab_49A0
    var_8 = var_240;
    var_16 = var_32;
    var_24 = var_24;
    pri = PokeBoxCheckWazaOshie(var_24, var_16, var_8)
    OP_JNZ lab_4990
    var_32 = var_24;
    var_40 = var_16;
    var_48 = var_32;
    var_56 = 1;
    var_64 = 32;
    pri = fun_14D8(var_56, var_48, var_40, var_32)
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    var_112 = -1127445959295015512;
    var_120 = var_8;
    var_128 = 56;
    pri = fun_10A8(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = 1;
    var_144 = 8;
    pri = fun_1240(var_136)
    var_152 = 0;
    pri = fun_1300()
    OP_JUMP lab_4180
// lab_49A0
    var_8 = var_240;
    var_16 = var_32;
    pri = PokePartyCheckWazaOshie(var_16, var_8)
    OP_JNZ lab_4AB0
    var_24 = var_24;
    var_32 = var_16;
    var_40 = var_32;
    var_48 = 1;
    var_56 = 32;
    pri = fun_14D8(var_48, var_40, var_32, var_24)
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 100;
    var_96 = -1;
    var_104 = -1127445959295015512;
    var_112 = var_8;
    var_120 = 56;
    pri = fun_10A8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_128 = 1;
    var_136 = 8;
    pri = fun_1240(var_128)
    var_144 = 0;
    pri = fun_1300()
    OP_JUMP lab_4180
// lab_4AB0
    pri = var_40;
    OP_JZER lab_4C08
    var_8 = var_240;
    var_16 = var_32;
    var_24 = var_24;
    pri = PokeBoxIsHaveWaza(var_24, var_16, var_8)
    OP_JZER lab_4BF8
    var_32 = var_24;
    var_40 = var_16;
    var_48 = var_32;
    var_56 = 1;
    var_64 = 32;
    pri = fun_14D8(var_56, var_48, var_40, var_32)
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    var_112 = -1127448158318271934;
    pri = GetTargetFieldObjectID()
    var_120 = pri;
    var_128 = 56;
    pri = fun_10A8(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = 1;
    var_144 = 8;
    pri = fun_1240(var_136)
    var_152 = 0;
    pri = fun_1300()
    OP_JUMP lab_4180
// lab_4C08
    var_8 = var_240;
    var_16 = var_32;
    pri = PokePartyHaveWaza(var_16, var_8)
    OP_JZER lab_4D30
    var_24 = var_24;
    var_32 = var_16;
    var_40 = var_32;
    var_48 = 1;
    var_56 = 32;
    pri = fun_14D8(var_48, var_40, var_32, var_24)
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 100;
    var_96 = -1;
    var_104 = -1127448158318271934;
    pri = GetTargetFieldObjectID()
    var_112 = pri;
    var_120 = 56;
    pri = fun_10A8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_128 = 1;
    var_136 = 8;
    pri = fun_1240(var_128)
    var_144 = 0;
    pri = fun_1300()
    OP_JUMP lab_4180
// lab_4D30
    OP_ZERO_P_S -256
    var_16 = var_24;
    var_24 = var_16;
    var_32 = 0;
    var_40 = 66;
    var_48 = var_32;
    var_56 = 40;
    pri = fun_16A0(var_48, var_40, var_32, var_24, var_16)
    alt = 3;
    OP_JSGRTR lab_4ED0
    pri = var_40;
    OP_JZER lab_4E40
    var_64 = var_240;
    var_72 = 5;
    var_80 = var_32;
    var_88 = var_24;
    pri = PokeBoxSetWaza(var_88, var_80, var_72, var_64)
    var_96 = var_240;
    var_104 = 3;
    var_112 = 2080;
    var_120 = var_32;
    var_128 = var_24;
    var_136 = 0;
    pri = PokeMemoryCheck(var_136, var_128, var_120, var_112, var_104, var_96)
    OP_JUMP lab_4EB8
// lab_4ED0
    pri = var_256;
    OP_JZER lab_4FC8
    var_8 = var_24;
    var_16 = var_16;
    var_24 = var_32;
    var_32 = 0;
    var_40 = 32;
    pri = fun_14D8(var_32, var_24, var_16, var_8)
    var_48 = var_240;
    var_56 = 1;
    var_64 = 16;
    pri = fun_13E8(var_56, var_48)
    var_72 = 3;
    var_80 = 0;
    var_88 = -5382819693173695114;
    var_96 = 24;
    pri = fun_1158(var_88, var_80, var_72)
    var_104 = 1;
    var_112 = 8;
    pri = fun_1240(var_104)
    var_120 = 0;
    pri = fun_1300()
    OP_JUMP lab_5258
// lab_4FC8
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -1126482787108891901;
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
    var_112 = var_40;
    var_120 = var_240;
    var_128 = 0;
    pri = CallWazaEvent(var_128, var_120, var_112, var_104, var_96)
    OP_ZERO_P_S -264
    OP_ZERO_P_S -272
    OP_ZERO_P_S -280
    OP_PUSH_P_ADR -280
    OP_PUSH_P_ADR -272
    OP_PUSH_P_ADR -264
    var_160 = 24;
    pri = fun_1608(var_152, var_144, var_136)
    pri = var_264;
    OP_JZER lab_5158
    var_168 = -1127441561248502668;
    var_176 = var_8;
    var_184 = 16;
    pri = fun_52A0(var_176, var_168)
    pri = 0;
    return pri;
// lab_5158
    var_8 = var_24;
    var_16 = var_16;
    var_24 = var_32;
    var_32 = 0;
    var_40 = 32;
    pri = fun_14D8(var_32, var_24, var_16, var_8)
    var_48 = var_272;
    var_56 = 1;
    var_64 = 16;
    pri = fun_13E8(var_56, var_48)
    var_72 = var_280;
    var_80 = 2;
    var_88 = 16;
    pri = fun_13E8(var_80, var_72)
    var_96 = 3;
    var_104 = 0;
    var_112 = -5382818593662066903;
    var_120 = 24;
    pri = fun_1158(var_112, var_104, var_96)
    var_128 = 1;
    var_136 = 8;
    pri = fun_1240(var_128)
    var_144 = 0;
    pri = fun_1300()
// lab_5258
    var_8 = -1127447058806643723;
    var_16 = var_8;
    var_24 = 16;
    pri = fun_52A0(var_16, var_8)
    pri = 0;
    return pri;
// lab_4E40
    var_8 = var_240;
    var_16 = 5;
    var_24 = var_32;
    pri = PokePartySetWaza(var_24, var_16, var_8)
    var_32 = var_240;
    var_40 = 3;
    var_48 = 2176;
    var_56 = var_32;
    var_64 = 0;
    var_72 = 1;
    pri = PokeMemoryCheck(var_72, var_64, var_56, var_48, var_40, var_32)
// lab_4EB8
    OP_CONST_S -256, 1
// lab_4BF8
    OP_JUMP lab_4D30
// lab_4990
    OP_JUMP lab_4AB0
// lab_4758
    OP_JUMP lab_46D0
// lab_46D0
    OP_INC_P_S -256
// lab_4698
    OP_JUMP lab_4610
// lab_4610
    OP_INC_P_S -256
}
// fun_52A0
fun_52A0() {
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
    pri = fun_3958(var_120, var_112, var_104, var_96)
    pri = 0;
    return pri;
}
