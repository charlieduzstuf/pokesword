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
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_02E0
fun_02E0() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    pri = GetFnvHash64(var_24)
    var_32 = pri;
    var_40 = arg_0;
    pri = FadeOut_(var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0350
fun_0350() {
    OP_JUMP lab_0368
// lab_0368
    pri = FadeWait_()
    OP_JZER lab_03A0
    pri = 0;
    return pri;
// lab_03A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0368
    pri = 0;
    return pri;
}
// fun_03E0
fun_03E0() {
    var_8 = arg_0;
    pri = IncRecord_(var_8)
    return pri;
}
// fun_0410
fun_0410() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0458
// lab_0458
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0498
    OP_JUMP lab_0508
// lab_0498
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_04D8
    OP_JUMP lab_0508
// lab_04D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0458
// lab_0508
    pri = 0;
    return pri;
}
// fun_0520
fun_0520() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0570
fun_0570() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0A40(var_8)
    OP_JZER lab_05E8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0A70(var_24)
    OP_JNZ lab_05E8
    pri = 0;
    return pri;
// lab_05E8
    OP_JUMP lab_05F8
// lab_05F8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0658
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0658
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05F8
    pri = 0;
    return pri;
}
// fun_0698
fun_0698() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_06D0
fun_06D0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0710
fun_0710() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0748
fun_0748() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0790
    pri = 0;
    return pri;
// lab_0790
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_07D0
// lab_07D0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0A40(var_8)
    OP_JNZ lab_0858
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0848
    pri = 0;
    return pri;
// lab_0858
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_08A0
    pri = 0;
    return pri;
// lab_08A0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0900
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0948(var_8)
    pri = 0;
    return pri;
// lab_0900
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_07D0
    pri = 0;
    return pri;
// lab_0848
    OP_JUMP lab_08A0
}
// fun_0948
fun_0948() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0980
fun_0980() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_09C0
fun_09C0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0A00
fun_0A00() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0A40
fun_0A40() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0A70
fun_0A70() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0AA0
fun_0AA0() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_0AD0
fun_0AD0() {
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
// switch_10E8
        case default:
        {
// switch_10E8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1130
// lab_1130
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
            OP_JNZ lab_11D8
            var_88 = 0;
            pri = fun_1390()
// lab_11D8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_10E8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0CD0
                case default:
                {
// switch_0CD0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0D48
// lab_0D48
                    OP_JUMP lab_1130
                }
                case 0x0:
                {
// switch_0CD0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0D48
                }
                case 0x1:
                {
// switch_0CD0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0D48
                }
                case 0x2:
                {
// switch_0CD0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0D48
                }
                case 0x3:
                {
// switch_0CD0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0D48
                }
                case 0x4:
                {
// switch_0CD0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0D48
                }
                case 0x5:
                {
// switch_0CD0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0D48
                }
            }
        }
        case 0x65:
        {
// switch_10E8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_0E88
                case default:
                {
// switch_0E88_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0F00
// lab_0F00
                    OP_JUMP lab_1130
                }
                case 0x0:
                {
// switch_0E88_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_0F00
                }
                case 0x1:
                {
// switch_0E88_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_0F00
                }
                case 0x2:
                {
// switch_0E88_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_0F00
                }
                case 0x3:
                {
// switch_0E88_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0F00
                }
                case 0x4:
                {
// switch_0E88_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_0F00
                }
                case 0x5:
                {
// switch_0E88_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_0F00
                }
            }
        }
        case 0x66:
        {
// switch_10E8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1040
                case default:
                {
// switch_1040_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_10B8
// lab_10B8
                    OP_JUMP lab_1130
                }
                case 0x0:
                {
// switch_1040_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_10B8
                }
                case 0x1:
                {
// switch_1040_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_10B8
                }
                case 0x2:
                {
// switch_1040_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_10B8
                }
                case 0x3:
                {
// switch_1040_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_10B8
                }
                case 0x4:
                {
// switch_1040_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_10B8
                }
                case 0x5:
                {
// switch_1040_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_10B8
                }
            }
        }
    }
}
// fun_11F0
fun_11F0() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0710(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1298
    pri = 1;
    return pri;
// lab_1298
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_12E0
fun_12E0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1330
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_11F0(var_8)
    arg_2 = pri;
// lab_1330
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0AD0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1390
fun_1390() {
    OP_JUMP lab_13A8
// lab_13A8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_13E8
    pri = 0;
    return pri;
// lab_13E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_13A8
    pri = 0;
    return pri;
}
// fun_1428
fun_1428() {
    var_8 = 0;
    pri = fun_1390()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_14D8
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_14D8
    pri = 0;
    return pri;
}
// fun_14E8
fun_14E8() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1518
fun_1518() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1548
// lab_1548
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1588
    OP_JUMP lab_15B8
// lab_1588
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1548
// lab_15B8
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1600
fun_1600() {
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
// fun_1670
fun_1670() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_16E8()
    return pri;
}
// fun_16E8
fun_16E8() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_1728
fun_1728() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1778
fun_1778() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 17;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_17C8
fun_17C8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 18;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1818
fun_1818() {
    pri = arg_2;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1878
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1778(var_16, var_8)
    OP_JUMP lab_18A8
// lab_1878
    var_8 = arg_1;
    var_16 = arg_3;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_17C8(var_24, var_16, var_8)
// lab_18A8
    pri = 0;
    return pri;
}
// fun_18B8
fun_18B8() {
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
// fun_1948
fun_1948() {
    pri = arg_3;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_19A8
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = PokePartyGetParam(var_24, var_16, var_8)
    return pri;
// lab_19A8
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = arg_4;
    pri = PokeBoxGetParam(var_32, var_24, var_16, var_8)
    return pri;
}
// fun_19E8
fun_19E8() {
    pri = arg_4;
    OP_JNZ lab_1A20
    var_8 = 0;
    pri = fun_0980()
// lab_1A20
    pri = arg_1;
    switch (pri) {
// switch_2DF8
        case default:
        {
// switch_2DF8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 856;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0A40(var_264)
            OP_JZER lab_33C0
            pri = arg_3;
            switch (pri) {
// switch_3368
                case default:
                {
// switch_3368_case_default
                    OP_JUMP lab_3678
// lab_3678
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_36E8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_36E8
                    var_8 = 0;
                    pri = fun_09C0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_3368_case_0x1
                    var_8 = 32;
                    var_16 = 1008;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_3368_case_default
                }
                case 0x2:
                {
// switch_3368_case_0x2
                    var_8 = 32;
                    var_16 = 1112;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_3368_case_default
                }
                case 0x3:
                {
// switch_3368_case_0x3
                    var_8 = 32;
                    var_16 = 912;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_3368_case_default
                }
            }
// lab_33C0
            pri = arg_1;
            OP_JZER lab_3410
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_3410
            pri = 0;
            OP_JUMP lab_3418
// lab_3410
            pri = 1;
// lab_3418
            OP_JZER lab_3480
            var_8 = 1208;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0710(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_3480
            pri = 1;
            OP_JUMP lab_3488
// lab_3480
            pri = 0;
// lab_3488
            OP_JZER lab_34D8
            var_8 = 32;
            var_16 = 1304;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3678
// lab_34D8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_3540
            var_8 = 32;
            var_16 = 1464;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3678
// lab_3540
            var_16 = 1584;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0710(var_24, var_16)
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
// switch_2DF8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x1:
        {
// switch_2DF8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x2:
        {
// switch_2DF8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x3:
        {
// switch_2DF8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x4:
        {
// switch_2DF8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x5:
        {
// switch_2DF8_case_0x5
            var_8 = 1;
            var_16 = 336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06D0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0948(var_40)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x6:
        {
// switch_2DF8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x7:
        {
// switch_2DF8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x8:
        {
// switch_2DF8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x9:
        {
// switch_2DF8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0xa:
        {
// switch_2DF8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0xb:
        {
// switch_2DF8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0xc:
        {
// switch_2DF8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0xd:
        {
// switch_2DF8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0xe:
        {
// switch_2DF8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0xf:
        {
// switch_2DF8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x10:
        {
// switch_2DF8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x11:
        {
// switch_2DF8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x12:
        {
// switch_2DF8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x13:
        {
// switch_2DF8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x14:
        {
// switch_2DF8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x15:
        {
// switch_2DF8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x16:
        {
// switch_2DF8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x17:
        {
// switch_2DF8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x18:
        {
// switch_2DF8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x19:
        {
// switch_2DF8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x1a:
        {
// switch_2DF8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x1b:
        {
// switch_2DF8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x1c:
        {
// switch_2DF8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x1d:
        {
// switch_2DF8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x1e:
        {
// switch_2DF8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x1f:
        {
// switch_2DF8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x20:
        {
// switch_2DF8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x21:
        {
// switch_2DF8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x22:
        {
// switch_2DF8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x23:
        {
// switch_2DF8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x24:
        {
// switch_2DF8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x25:
        {
// switch_2DF8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x26:
        {
// switch_2DF8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x27:
        {
// switch_2DF8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x28:
        {
// switch_2DF8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x29:
        {
// switch_2DF8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x2a:
        {
// switch_2DF8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x2b:
        {
// switch_2DF8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x2c:
        {
// switch_2DF8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x2d:
        {
// switch_2DF8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x2e:
        {
// switch_2DF8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x2f:
        {
// switch_2DF8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x30:
        {
// switch_2DF8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x31:
        {
// switch_2DF8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x32:
        {
// switch_2DF8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x33:
        {
// switch_2DF8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x34:
        {
// switch_2DF8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x35:
        {
// switch_2DF8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x36:
        {
// switch_2DF8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x37:
        {
// switch_2DF8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x38:
        {
// switch_2DF8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x39:
        {
// switch_2DF8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x3a:
        {
// switch_2DF8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x3b:
        {
// switch_2DF8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x3c:
        {
// switch_2DF8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 432;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x3d:
        {
// switch_2DF8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 608;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
        case 0x3e:
        {
// switch_2DF8_case_0x3e
            var_8 = 3;
            var_16 = 752;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06D0(var_24, var_16, var_8)
            OP_JUMP switch_2DF8_case_default
        }
    }
}
// fun_3718
fun_3718() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_3818
        case default:
        {
// switch_3818_case_default
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
// switch_3818_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_3818_case_default
        }
        case 0x1:
        {
// switch_3818_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_3818_case_default
        }
        case 0x2:
        {
// switch_3818_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_3818_case_default
        }
        case 0x3:
        {
// switch_3818_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_3818_case_default
        }
    }
}
// fun_38D8
fun_38D8() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_3928
// lab_3928
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 1752;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_39A0
    OP_JUMP lab_39D0
// lab_39A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_3928
// lab_39D0
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_3A58
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_19E8(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0AA0(var_56)
// lab_3A58
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_3AC0
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0A00(var_24, var_16)
// lab_3AC0
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0A00(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_3B80
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0748(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0520(var_88, var_80, var_72, var_64, var_56)
// lab_3B80
    pri = IsPlayerRideBicycle()
    OP_JZER lab_3BC0
    pri = 0;
    return pri;
// lab_3BC0
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_3D08
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 1872;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0698(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_3CD0
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_3D08
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0570(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0570(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0748(var_40)
    pri = 0;
    return pri;
// lab_3CD0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0A00(var_16, var_8)
}
// fun_3D90
fun_3D90() {
    pri = g_mode;
    switch (pri) {
// switch_3E28
        case default:
        {
// switch_3E28_case_default
            pri = CommandNOP()
            OP_JUMP lab_3E60
// lab_3E60
            pri = 0;
            return pri;
        }
        case 0xee7eefc4f23f438e:
        {
// switch_3E28_case_0xee7eefc4f23f438e
            var_8 = 0;
            pri = fun_3E88()
            OP_JUMP lab_3E60
        }
        case 0x0:
        {
// switch_3E28_case_0x0
            var_8 = 0;
            pri = fun_3E70()
            OP_JUMP lab_3E60
        }
    }
}
// fun_3E70
fun_3E70() {
    pri = 0;
    return pri;
}
// fun_3E88
fun_3E88() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = var_8;
    var_64 = 48;
    pri = fun_3718(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = var_8;
    var_80 = 8;
    pri = fun_3F70(var_72)
    var_88 = 0;
    var_96 = 0;
    var_104 = 0;
    var_112 = var_8;
    var_120 = 32;
    pri = fun_38D8(var_112, var_104, var_96, var_88)
    pri = 0;
    return pri;
}
// fun_3F70
fun_3F70() {
    var_8 = -8721056234655372150;
    pri = FlagGet(var_8)
    OP_JNZ lab_4068
    var_16 = 0;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = -1313915296121765355;
    var_64 = arg_0;
    var_72 = 56;
    pri = fun_12E0(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = 1;
    var_88 = 8;
    pri = fun_1428(var_80)
    var_96 = 0;
    pri = fun_14E8()
    var_104 = -8721056234655372150;
    pri = FlagSet(var_104)
// lab_4068
    OP_LCTRL 5
    OP_SCTRL 4
    var_16 = 796;
    pri = ItemGetNum(var_16)
    OP_MOVE_ALT 
    pri = 0;
    OP_XCHG 
    OP_SGRTR 
    var_8 = pri;
    var_32 = 795;
    pri = ItemGetNum(var_32)
    OP_MOVE_ALT 
    pri = 0;
    OP_XCHG 
    OP_SGRTR 
    var_16 = pri;
    pri = var_8;
    OP_JNZ lab_4170
    pri = var_16;
    OP_JNZ lab_4170
    pri = 1;
    OP_JUMP lab_4178
// lab_4170
    pri = 0;
// lab_4178
    OP_JZER lab_4238
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -1313918594656649988;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_12E0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1428(var_72)
    var_88 = arg_0;
    var_96 = 8;
    pri = fun_5270(var_88)
    pri = 0;
    return pri;
// lab_4238
    OP_LCTRL 5
    OP_ADD_C -16
    OP_SCTRL 4
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -1313917495145021777;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_12E0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1428(var_72)
    var_88 = 0;
    pri = fun_14E8()
    var_96 = 4;
    var_104 = 0;
    var_112 = 2;
    var_120 = 0;
    var_128 = 1;
    pri = CallSelectModeBox(var_128, var_120, var_112, var_104, var_96)
    OP_ZERO_P_S -24
    OP_ZERO_P_S -32
    OP_ZERO_P_S -40
    OP_PUSH_P_ADR -40
    OP_PUSH_P_ADR -32
    OP_PUSH_P_ADR -24
    var_160 = 24;
    pri = fun_18B8(var_152, var_144, var_136)
    pri = var_24;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_43F0
    var_168 = arg_0;
    var_176 = 8;
    pri = fun_5270(var_168)
    pri = 0;
    return pri;
// lab_43F0
    var_16 = var_32;
    var_24 = var_24;
    var_32 = 0;
    var_40 = 14;
    var_48 = var_40;
    var_56 = 40;
    pri = fun_1948(var_48, var_40, var_32, var_24, var_16)
    var_48 = pri;
    pri = var_48;
    alt = 100;
    OP_JSGEQ lab_4500
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 100;
    var_96 = -1;
    var_104 = -1313920793679906410;
    var_112 = arg_0;
    var_120 = 56;
    pri = fun_12E0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_128 = 1;
    var_136 = 8;
    pri = fun_1428(var_128)
    var_144 = 0;
    pri = fun_14E8()
    OP_JUMP lab_4238
// lab_4500
    var_16 = var_32;
    var_24 = var_24;
    var_32 = 0;
    var_40 = 16;
    var_48 = var_40;
    var_56 = 40;
    pri = fun_1948(var_48, var_40, var_32, var_24, var_16)
    OP_EQ_P_C_PRI 31
    var_56 = pri;
    var_72 = var_32;
    var_80 = var_24;
    var_88 = 0;
    var_96 = 17;
    var_104 = var_40;
    var_112 = 40;
    pri = fun_1948(var_104, var_96, var_88, var_80, var_72)
    OP_EQ_P_C_PRI 31
    var_64 = pri;
    var_128 = var_32;
    var_136 = var_24;
    var_144 = 0;
    var_152 = 18;
    var_160 = var_40;
    var_168 = 40;
    pri = fun_1948(var_160, var_152, var_144, var_136, var_128)
    OP_EQ_P_C_PRI 31
    var_72 = pri;
    var_184 = var_32;
    var_192 = var_24;
    var_200 = 0;
    var_208 = 19;
    var_216 = var_40;
    var_224 = 40;
    pri = fun_1948(var_216, var_208, var_200, var_192, var_184)
    OP_EQ_P_C_PRI 31
    var_80 = pri;
    var_240 = var_32;
    var_248 = var_24;
    var_256 = 0;
    var_264 = 20;
    var_272 = var_40;
    var_280 = 40;
    pri = fun_1948(var_272, var_264, var_256, var_248, var_240)
    OP_EQ_P_C_PRI 31
    var_88 = pri;
    var_296 = var_32;
    var_304 = var_24;
    var_312 = 0;
    var_320 = 21;
    var_328 = var_40;
    var_336 = 40;
    pri = fun_1948(var_328, var_320, var_312, var_304, var_296)
    OP_EQ_P_C_PRI 31
    var_96 = pri;
    pri = var_56;
    OP_JZER lab_47B8
    pri = var_64;
    OP_JZER lab_47B8
    pri = var_72;
    OP_JZER lab_47B8
    pri = var_80;
    OP_JZER lab_47B8
    pri = var_88;
    OP_JZER lab_47B8
    pri = var_96;
    OP_JZER lab_47B8
    pri = 1;
    OP_JUMP lab_47C0
// lab_47B8
    pri = 0;
// lab_47C0
    OP_JZER lab_4890
    var_8 = var_32;
    var_16 = var_24;
    var_24 = var_40;
    var_32 = 1;
    var_40 = 32;
    pri = fun_1818(var_32, var_24, var_16, var_8)
    var_48 = 0;
    var_56 = 3;
    var_64 = 0;
    var_72 = 100;
    var_80 = -1;
    var_88 = -1313919694168278199;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_12E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1428(var_112)
    OP_JUMP lab_4238
// lab_4890
    OP_LCTRL 5
    OP_ADD_C -96
    OP_SCTRL 4
    OP_CONST_S -104, 1
    var_16 = 0;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = -1313922992703162832;
    var_64 = arg_0;
    var_72 = 56;
    pri = fun_12E0(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = var_8;
    OP_JZER lab_4A30
    var_80 = 796;
    pri = ItemGetNum(var_80)
    var_88 = pri;
    var_96 = 796;
    var_104 = 0;
    var_112 = 24;
    pri = fun_1728(var_104, var_96, var_88)
    var_120 = 0;
    var_128 = 0;
    var_136 = 796;
    pri = ItemGetNum(var_136)
    var_144 = pri;
    var_152 = 1;
    pri = WordSetNumber(var_152, var_144, var_136, var_128)
    var_160 = 0;
    var_168 = 4359204963365081801;
    var_176 = 0;
    var_184 = 24;
    pri = fun_1518(var_176, var_168, var_160)
// lab_4A30
    pri = var_16;
    OP_JZER lab_4B28
    var_8 = 795;
    pri = ItemGetNum(var_8)
    var_16 = pri;
    var_24 = 795;
    var_32 = 0;
    var_40 = 24;
    pri = fun_1728(var_32, var_24, var_16)
    var_48 = 0;
    var_56 = 0;
    var_64 = 795;
    pri = ItemGetNum(var_64)
    var_72 = pri;
    var_80 = 1;
    pri = WordSetNumber(var_80, var_72, var_64, var_56)
    var_88 = 0;
    var_96 = 4359204963365081801;
    var_104 = 1;
    var_112 = 24;
    pri = fun_1518(var_104, var_96, var_88)
// lab_4B28
    var_8 = 0;
    var_16 = 4359201664830197168;
    var_24 = 2;
    var_32 = 24;
    pri = fun_1518(var_24, var_16, var_8)
    var_48 = 0;
    var_56 = 1;
    var_64 = 0;
    var_72 = 1;
    var_80 = 32;
    pri = fun_1600(var_72, var_64, var_56, var_48)
    var_112 = pri;
    pri = var_112;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_4BD8
    OP_JUMP lab_4238
// lab_4BD8
    pri = var_112;
    OP_JNZ lab_4C18
    OP_CONST_S -104, 1
    OP_JUMP lab_4C70
// lab_4C18
    pri = var_112;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_4C50
    OP_ZERO_P_S -104
    OP_JUMP lab_4C70
// lab_4C50
    var_8 = 0;
    pri = DebugAssert(var_8)
// lab_4C70
    pri = var_104;
    OP_JZER lab_4CF0
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -1313921893191534621;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_12E0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    OP_JUMP lab_4D48
// lab_4CF0
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -1313907599540367878;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_12E0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_4D48
    var_8 = 1;
    var_16 = 8;
    pri = fun_1428(var_8)
    var_24 = 0;
    pri = fun_14E8()
    OP_ZERO_P_S -120
    pri = var_104;
    OP_JZER lab_4DD0
    OP_CONST_S -120, 1
    OP_JUMP lab_4DD8
// lab_4DD0
    OP_ZERO_P_S -120
// lab_4DD8
    var_8 = var_120;
    var_16 = var_40;
    var_24 = var_24;
    pri = CallHyperTrainingEvent(var_24, var_16, var_8)
    var_32 = 796;
    pri = ItemGetNum(var_32)
    OP_MOVE_ALT 
    pri = 0;
    OP_XCHG 
    OP_SGRTR 
    var_8 = pri;
    var_40 = 795;
    pri = ItemGetNum(var_40)
    OP_MOVE_ALT 
    pri = 0;
    OP_XCHG 
    OP_SGRTR 
    var_16 = pri;
    var_56 = 3;
    pri = TempWorkGet(var_56)
    OP_ZERO_ALT 
    OP_EQ 
    var_128 = pri;
    pri = var_128;
    OP_JZER lab_4F00
    OP_JUMP lab_4890
// lab_4F00
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 7209916386650819488;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_12E0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1428(var_72)
    var_88 = 0;
    pri = fun_14E8()
    var_96 = 1;
    var_104 = 0;
    var_112 = 2008;
    var_120 = 8;
    var_128 = 32;
    pri = fun_02E0(var_120, var_112, var_104, var_96)
    var_136 = 0;
    pri = fun_0350()
    var_144 = 2056;
    pri = SoundPostEvent(var_144)
    var_152 = 0;
    var_160 = 8;
    pri = fun_0410(var_152)
    var_168 = 8;
    var_176 = 8;
    pri = fun_03E0(var_168)
    var_184 = 2232;
    var_192 = 8;
    var_200 = 16;
    pri = fun_0280(var_192, var_184)
    var_208 = 0;
    pri = fun_0350()
    var_216 = var_32;
    var_224 = var_24;
    var_232 = var_40;
    var_240 = 0;
    var_248 = 32;
    pri = fun_1818(var_240, var_232, var_224, var_216)
    var_256 = 0;
    var_264 = 3;
    var_272 = 0;
    var_280 = 100;
    var_288 = -1;
    var_296 = -1313906500028739667;
    var_304 = arg_0;
    var_312 = 56;
    pri = fun_12E0(var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    var_320 = 1;
    var_328 = 8;
    pri = fun_1428(var_320)
    var_336 = 0;
    var_344 = 3;
    var_352 = 0;
    var_360 = 100;
    var_368 = -1;
    var_376 = -1312924636144936469;
    var_384 = arg_0;
    var_392 = 56;
    pri = fun_12E0(var_384, var_376, var_368, var_360, var_352, var_344, var_336)
    var_400 = 0;
    var_408 = 0;
    var_416 = 1;
    var_424 = 0;
    var_432 = 0;
    var_440 = 0;
    var_448 = 48;
    pri = fun_1670(var_440, var_432, var_424, var_416, var_408, var_400)
    OP_JZER lab_51F0
    OP_JUMP lab_4068
// lab_51F0
    var_8 = 0;
    var_16 = 0;
    var_24 = 2280;
    var_32 = var_40;
    var_40 = var_32;
    var_48 = var_24;
    pri = PokeMemoryCheck(var_48, var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_5270(var_56)
    pri = 0;
    return pri;
}
// fun_5270
fun_5270() {
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -1312922437121680047;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_12E0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1428(var_72)
    var_88 = 0;
    pri = fun_14E8()
    pri = 0;
    return pri;
}
