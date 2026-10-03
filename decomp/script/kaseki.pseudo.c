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
            pri = fun_1528()
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
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_0AD0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1258
fun_1258() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0710(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1300
    pri = 1;
    return pri;
// lab_1300
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1348
fun_1348() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1398
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1258(var_8)
    arg_2 = pri;
// lab_1398
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
// fun_13F8
fun_13F8() {
    var_8 = arg_6;
    var_16 = arg_5;
    pri = arg_4;
    alt = 16;
    pri |= alt;
    var_24 = pri;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1348(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1478
fun_1478() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_11F0(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_14C8
fun_14C8() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1478(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1528
fun_1528() {
    OP_JUMP lab_1540
// lab_1540
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1580
    pri = 0;
    return pri;
// lab_1580
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1540
    pri = 0;
    return pri;
}
// fun_15C0
fun_15C0() {
    var_8 = 0;
    pri = fun_1528()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1670
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_1670
    pri = 0;
    return pri;
}
// fun_1680
fun_1680() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_16B0
fun_16B0() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_16E0
// lab_16E0
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1720
    OP_JUMP lab_1750
// lab_1720
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_16E0
// lab_1750
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1798
fun_1798() {
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
// fun_1808
fun_1808() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_1880()
    return pri;
}
// fun_1880
fun_1880() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_18C0
fun_18C0() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_18F8
fun_18F8() {
    OP_JUMP lab_1910
// lab_1910
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1958
    OP_JUMP lab_1988
    OP_JUMP lab_1978
// lab_1958
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_1988
    pri = 0;
    return pri;
// lab_1978
    OP_JUMP lab_1910
}
// fun_1998
fun_1998() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_19C8
fun_19C8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1A18
fun_1A18() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 3;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1A68
fun_1A68() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1AB8
fun_1AB8() {
    var_8 = 0;
    var_16 = 0;
    pri = PokePartyGetCount(var_16, var_8)
    OP_EQ_P_C_PRI 6
    OP_JZER lab_1B40
    pri = PokeBoxIsFull()
    OP_JZER lab_1B40
    pri = 1;
    OP_JUMP lab_1B48
// lab_1B40
    pri = 0;
// lab_1B48
    return pri;
}
// fun_1B50
fun_1B50() {
    pri = arg_4;
    OP_JNZ lab_1B88
    var_8 = 0;
    pri = fun_0980()
// lab_1B88
    pri = arg_1;
    switch (pri) {
// switch_2F60
        case default:
        {
// switch_2F60_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 856;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0A40(var_264)
            OP_JZER lab_3528
            pri = arg_3;
            switch (pri) {
// switch_34D0
                case default:
                {
// switch_34D0_case_default
                    OP_JUMP lab_37E0
// lab_37E0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_3850
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_3850
                    var_8 = 0;
                    pri = fun_09C0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_34D0_case_0x1
                    var_8 = 32;
                    var_16 = 1008;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_34D0_case_default
                }
                case 0x2:
                {
// switch_34D0_case_0x2
                    var_8 = 32;
                    var_16 = 1112;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_34D0_case_default
                }
                case 0x3:
                {
// switch_34D0_case_0x3
                    var_8 = 32;
                    var_16 = 912;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_34D0_case_default
                }
            }
// lab_3528
            pri = arg_1;
            OP_JZER lab_3578
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_3578
            pri = 0;
            OP_JUMP lab_3580
// lab_3578
            pri = 1;
// lab_3580
            OP_JZER lab_35E8
            var_8 = 1208;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0710(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_35E8
            pri = 1;
            OP_JUMP lab_35F0
// lab_35E8
            pri = 0;
// lab_35F0
            OP_JZER lab_3640
            var_8 = 32;
            var_16 = 1304;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_37E0
// lab_3640
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_36A8
            var_8 = 32;
            var_16 = 1464;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_37E0
// lab_36A8
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
// switch_2F60_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x1:
        {
// switch_2F60_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x2:
        {
// switch_2F60_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x3:
        {
// switch_2F60_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x4:
        {
// switch_2F60_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x5:
        {
// switch_2F60_case_0x5
            var_8 = 1;
            var_16 = 336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06D0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0948(var_40)
            OP_JUMP switch_2F60_case_default
        }
        case 0x6:
        {
// switch_2F60_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x7:
        {
// switch_2F60_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x8:
        {
// switch_2F60_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x9:
        {
// switch_2F60_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0xa:
        {
// switch_2F60_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0xb:
        {
// switch_2F60_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0xc:
        {
// switch_2F60_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0xd:
        {
// switch_2F60_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0xe:
        {
// switch_2F60_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0xf:
        {
// switch_2F60_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x10:
        {
// switch_2F60_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x11:
        {
// switch_2F60_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x12:
        {
// switch_2F60_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x13:
        {
// switch_2F60_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x14:
        {
// switch_2F60_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x15:
        {
// switch_2F60_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x16:
        {
// switch_2F60_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x17:
        {
// switch_2F60_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x18:
        {
// switch_2F60_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x19:
        {
// switch_2F60_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x1a:
        {
// switch_2F60_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x1b:
        {
// switch_2F60_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x1c:
        {
// switch_2F60_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x1d:
        {
// switch_2F60_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x1e:
        {
// switch_2F60_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x1f:
        {
// switch_2F60_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x20:
        {
// switch_2F60_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x21:
        {
// switch_2F60_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x22:
        {
// switch_2F60_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x23:
        {
// switch_2F60_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x24:
        {
// switch_2F60_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x25:
        {
// switch_2F60_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x26:
        {
// switch_2F60_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x27:
        {
// switch_2F60_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x28:
        {
// switch_2F60_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x29:
        {
// switch_2F60_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x2a:
        {
// switch_2F60_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x2b:
        {
// switch_2F60_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x2c:
        {
// switch_2F60_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x2d:
        {
// switch_2F60_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x2e:
        {
// switch_2F60_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x2f:
        {
// switch_2F60_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x30:
        {
// switch_2F60_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x31:
        {
// switch_2F60_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x32:
        {
// switch_2F60_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x33:
        {
// switch_2F60_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x34:
        {
// switch_2F60_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x35:
        {
// switch_2F60_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x36:
        {
// switch_2F60_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x37:
        {
// switch_2F60_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x38:
        {
// switch_2F60_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x39:
        {
// switch_2F60_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x3a:
        {
// switch_2F60_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x3b:
        {
// switch_2F60_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x3c:
        {
// switch_2F60_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 432;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x3d:
        {
// switch_2F60_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 608;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
        case 0x3e:
        {
// switch_2F60_case_0x3e
            var_8 = 3;
            var_16 = 752;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06D0(var_24, var_16, var_8)
            OP_JUMP switch_2F60_case_default
        }
    }
}
// fun_3880
fun_3880() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_3980
        case default:
        {
// switch_3980_case_default
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
// switch_3980_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_3980_case_default
        }
        case 0x1:
        {
// switch_3980_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_3980_case_default
        }
        case 0x2:
        {
// switch_3980_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_3980_case_default
        }
        case 0x3:
        {
// switch_3980_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_3980_case_default
        }
    }
}
// fun_3A40
fun_3A40() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_3A90
// lab_3A90
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 1752;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_3B08
    OP_JUMP lab_3B38
// lab_3B08
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_3A90
// lab_3B38
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_3BC0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_1B50(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0AA0(var_56)
// lab_3BC0
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_3C28
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0A00(var_24, var_16)
// lab_3C28
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0A00(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_3CE8
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
// lab_3CE8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_3D28
    pri = 0;
    return pri;
// lab_3D28
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_3E70
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
    OP_JSLESS lab_3E38
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_3E70
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
// lab_3E38
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0A00(var_16, var_8)
}
// fun_3EF8
fun_3EF8() {
    var_8 = 2008;
    var_16 = 8;
    pri = fun_18C0(var_8)
    var_24 = 0;
    pri = fun_18F8()
    var_32 = 2184;
    pri = SoundPostEvent(var_32)
    var_40 = 0;
    var_48 = 8;
    pri = fun_19C8(var_40)
    var_56 = arg_1;
    var_64 = 1;
    var_72 = 16;
    pri = fun_1A18(var_64, var_56)
    var_80 = 3;
    var_88 = 0;
    var_96 = -1785521252434788896;
    var_104 = 24;
    pri = fun_14C8(var_96, var_88, var_80)
    var_112 = 0;
    var_120 = 8;
    pri = fun_0410(var_112)
    var_128 = 1;
    var_136 = 8;
    pri = fun_15C0(var_128)
    var_144 = 0;
    pri = fun_1680()
    var_152 = arg_0;
    pri = PokePartyAddMember(var_152)
    var_160 = 0;
    pri = fun_1998()
    pri = 0;
    return pri;
}
// fun_4078
fun_4078() {
    pri = g_mode;
    switch (pri) {
// switch_4110
        case default:
        {
// switch_4110_case_default
            pri = CommandNOP()
            OP_JUMP lab_4148
// lab_4148
            pri = 0;
            return pri;
        }
        case 0xbafb240616fcef4a:
        {
// switch_4110_case_0xbafb240616fcef4a
            var_8 = 0;
            pri = fun_4170()
            OP_JUMP lab_4148
        }
        case 0x0:
        {
// switch_4110_case_0x0
            var_8 = 0;
            pri = fun_4158()
            OP_JUMP lab_4148
        }
    }
}
// fun_4158
fun_4158() {
    pri = 0;
    return pri;
}
// fun_4170
fun_4170() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    pri = GetTargetFieldObjectID()
    var_48 = pri;
    var_56 = 48;
    pri = fun_3880(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_4250()
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    pri = GetTargetFieldObjectID()
    var_96 = pri;
    var_104 = 32;
    pri = fun_3A40(var_96, var_88, var_80, var_72)
    pri = 0;
    return pri;
}
// fun_4250
fun_4250() {
    var_8 = -249317762861201392;
    pri = FlagGet(var_8)
    OP_JNZ lab_4348
    var_16 = 0;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 8489578393414799188;
    pri = GetTargetFieldObjectID()
    var_64 = pri;
    var_72 = 56;
    pri = fun_1348(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = 1;
    var_88 = 8;
    pri = fun_15C0(var_80)
    var_96 = -249317762861201392;
    pri = FlagSet(var_96)
// lab_4348
    var_8 = 1105;
    pri = ItemGetNum(var_8)
    OP_JNZ lab_4420
    var_16 = 1106;
    pri = ItemGetNum(var_16)
    OP_JNZ lab_4420
    var_24 = 1107;
    pri = ItemGetNum(var_24)
    OP_JNZ lab_4420
    var_32 = 1108;
    pri = ItemGetNum(var_32)
    OP_JNZ lab_4420
    pri = 1;
    OP_JUMP lab_4428
// lab_4420
    pri = 0;
// lab_4428
    OP_JZER lab_44F0
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 8489581691949683821;
    pri = GetTargetFieldObjectID()
    var_56 = pri;
    var_64 = 56;
    pri = fun_1348(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_15C0(var_72)
    var_88 = 0;
    pri = fun_1680()
    pri = 0;
    return pri;
// lab_44F0
    var_8 = 1105;
    pri = ItemGetNum(var_8)
    OP_JNZ lab_4568
    var_16 = 1106;
    pri = ItemGetNum(var_16)
    OP_JNZ lab_4568
    pri = 1;
    OP_JUMP lab_4570
// lab_4568
    pri = 0;
// lab_4570
    OP_JZER lab_4638
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 8489581691949683821;
    pri = GetTargetFieldObjectID()
    var_56 = pri;
    var_64 = 56;
    pri = fun_1348(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_15C0(var_72)
    var_88 = 0;
    pri = fun_1680()
    pri = 0;
    return pri;
// lab_4638
    var_8 = 1107;
    pri = ItemGetNum(var_8)
    OP_JNZ lab_46B0
    var_16 = 1108;
    pri = ItemGetNum(var_16)
    OP_JNZ lab_46B0
    pri = 1;
    OP_JUMP lab_46B8
// lab_46B0
    pri = 0;
// lab_46B8
    OP_JZER lab_4780
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 8489581691949683821;
    pri = GetTargetFieldObjectID()
    var_56 = pri;
    var_64 = 56;
    pri = fun_1348(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_15C0(var_72)
    var_88 = 0;
    pri = fun_1680()
    pri = 0;
    return pri;
// lab_4780
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 8489580592438055610;
    pri = GetTargetFieldObjectID()
    var_56 = pri;
    var_64 = 56;
    pri = fun_1348(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    var_80 = 0;
    var_88 = 1;
    var_96 = 0;
    var_104 = 0;
    var_112 = 0;
    var_120 = 48;
    pri = fun_1808(var_112, var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_4900
    var_128 = 0;
    var_136 = 3;
    var_144 = 0;
    var_152 = 100;
    var_160 = -1;
    var_168 = 8489575094879914555;
    pri = GetTargetFieldObjectID()
    var_176 = pri;
    var_184 = 56;
    pri = fun_1348(var_176, var_168, var_160, var_152, var_144, var_136, var_128)
    var_192 = 1;
    var_200 = 8;
    pri = fun_15C0(var_192)
    var_208 = 0;
    pri = fun_1680()
    pri = 0;
    return pri;
// lab_4900
    var_8 = 0;
    pri = fun_1AB8()
    OP_JZER lab_49E0
    var_16 = 0;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 8488588832949598513;
    pri = GetTargetFieldObjectID()
    var_64 = pri;
    var_72 = 56;
    pri = fun_1348(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = 1;
    var_88 = 8;
    pri = fun_15C0(var_80)
    var_96 = 0;
    pri = fun_1680()
    pri = 0;
    return pri;
// lab_49E0
    OP_ZERO_P_S -8
    OP_ZERO_P_S -16
    OP_CONST_S -24, 1
}
// lab_4A20
var_8 = 0;
var_16 = 3;
var_24 = 0;
var_32 = 100;
var_40 = -1;
var_48 = 8489573995368286344;
pri = GetTargetFieldObjectID()
var_56 = pri;
var_64 = 56;
pri = fun_1348(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
var_72 = 1105;
pri = ItemGetNum(var_72)
OP_MOVE_ALT 
pri = 0;
OP_JSGEQ lab_4B08
var_80 = 0;
var_88 = 3328602190285576814;
var_96 = 1105;
var_104 = 24;
pri = fun_16B0(var_96, var_88, var_80)
// lab_4B08
var_8 = 1106;
pri = ItemGetNum(var_8)
OP_MOVE_ALT 
pri = 0;
OP_JSGEQ lab_4B80
var_16 = 0;
var_24 = 3328601090773948603;
var_32 = 1106;
var_40 = 24;
pri = fun_16B0(var_32, var_24, var_16)
// lab_4B80
var_8 = 0;
var_16 = 3328606588332089658;
var_24 = 0;
var_32 = 24;
pri = fun_16B0(var_24, var_16, var_8)
var_40 = 0;
var_48 = 1;
var_56 = 0;
var_64 = 1;
var_72 = 32;
pri = fun_1798(var_64, var_56, var_48, var_40)
var_8 = pri;
pri = var_8;
OP_JNZ lab_4CD0
var_80 = 0;
var_88 = 3;
var_96 = 0;
var_104 = 100;
var_112 = -1;
var_120 = 8489575094879914555;
pri = GetTargetFieldObjectID()
var_128 = pri;
var_136 = 56;
pri = fun_1348(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
var_144 = 1;
var_152 = 8;
pri = fun_15C0(var_144)
var_160 = 0;
pri = fun_1680()
pri = 0;
return pri;
// lab_4CD0
var_8 = 0;
var_16 = 3;
var_24 = 0;
var_32 = 100;
var_40 = -1;
var_48 = 8489577293903170977;
pri = GetTargetFieldObjectID()
var_56 = pri;
var_64 = 56;
pri = fun_1348(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
var_72 = 1107;
pri = ItemGetNum(var_72)
OP_MOVE_ALT 
pri = 0;
OP_JSGEQ lab_4DB8
var_80 = 0;
var_88 = 3328599991262320392;
var_96 = 1107;
var_104 = 24;
pri = fun_16B0(var_96, var_88, var_80)
// lab_4DB8
var_8 = 1108;
pri = ItemGetNum(var_8)
OP_MOVE_ALT 
pri = 0;
OP_JSGEQ lab_4E30
var_16 = 0;
var_24 = 3328607687843717869;
var_32 = 1108;
var_40 = 24;
pri = fun_16B0(var_32, var_24, var_16)
// lab_4E30
var_8 = 0;
var_16 = 3328606588332089658;
var_24 = 0;
var_32 = 24;
pri = fun_16B0(var_24, var_16, var_8)
var_40 = 0;
var_48 = 1;
var_56 = 0;
var_64 = 1;
var_72 = 32;
pri = fun_1798(var_64, var_56, var_48, var_40)
var_16 = pri;
pri = var_16;
OP_JNZ lab_4F80
var_80 = 0;
var_88 = 3;
var_96 = 0;
var_104 = 100;
var_112 = -1;
var_120 = 8489575094879914555;
pri = GetTargetFieldObjectID()
var_128 = pri;
var_136 = 56;
pri = fun_1348(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
var_144 = 1;
var_152 = 8;
pri = fun_15C0(var_144)
var_160 = 0;
pri = fun_1680()
pri = 0;
return pri;
// lab_4F80
var_8 = 1;
var_16 = var_8;
var_24 = 1;
var_32 = 24;
pri = fun_1A68(var_24, var_16, var_8)
var_40 = 1;
var_48 = var_16;
var_56 = 2;
var_64 = 24;
pri = fun_1A68(var_56, var_48, var_40)
var_72 = 0;
var_80 = 3;
var_88 = 0;
var_96 = 100;
var_104 = -1;
var_112 = 8489576194391542766;
pri = GetTargetFieldObjectID()
var_120 = pri;
var_128 = 56;
pri = fun_1348(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
var_136 = 0;
var_144 = 3328605488820461447;
var_152 = 0;
var_160 = 24;
pri = fun_16B0(var_152, var_144, var_136)
var_168 = 0;
var_176 = 3328604389308833236;
var_184 = 1;
var_192 = 24;
pri = fun_16B0(var_184, var_176, var_168)
var_200 = 0;
var_208 = 3328594493704179337;
var_216 = 2;
var_224 = 24;
pri = fun_16B0(var_216, var_208, var_200)
var_240 = 0;
var_248 = 1;
var_256 = 0;
var_264 = 1;
var_272 = 32;
pri = fun_1798(var_264, var_256, var_248, var_240)
var_32 = pri;
pri = var_32;
OP_EQ_P_C_PRI 2
OP_JZER lab_5220
var_280 = 0;
var_288 = 3;
var_296 = 0;
var_304 = 100;
var_312 = -1;
var_320 = 8489575094879914555;
pri = GetTargetFieldObjectID()
var_328 = pri;
var_336 = 56;
pri = fun_1348(var_328, var_320, var_312, var_304, var_296, var_288, var_280)
var_344 = 1;
var_352 = 8;
pri = fun_15C0(var_344)
var_360 = 0;
pri = fun_1680()
pri = 0;
return pri;
// lab_5220
pri = var_32;
OP_JNZ lab_5240
OP_ZERO_P_S -24
// lab_5240
pri = var_24;
OP_JZER lab_5270
OP_JUMP lab_4A20
// lab_5270
OP_ZERO_P_S -32
pri = var_8;
OP_EQ_P_C_PRI 1105
OP_JZER lab_5310
pri = var_16;
OP_EQ_P_C_PRI 1107
OP_JZER lab_52C8
OP_ZERO_P_S -32
// lab_5310
pri = var_8;
OP_EQ_P_C_PRI 1106
OP_JZER lab_53A0
pri = var_16;
OP_EQ_P_C_PRI 1107
OP_JZER lab_5368
OP_CONST_S -32, 2
// lab_53A0
var_8 = 0;
var_16 = 3;
var_24 = 0;
var_32 = 100;
var_40 = -1;
var_48 = 8489570696833401711;
pri = GetTargetFieldObjectID()
var_56 = pri;
var_64 = 56;
pri = fun_1348(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
var_72 = 1;
var_80 = 8;
pri = fun_15C0(var_72)
var_88 = 0;
pri = fun_1680()
var_96 = 1;
var_104 = 0;
var_112 = 2368;
var_120 = 8;
var_128 = 32;
pri = fun_02E0(var_120, var_112, var_104, var_96)
var_136 = 0;
pri = fun_0350()
var_144 = 2416;
pri = SoundPostEvent(var_144)
var_152 = 0;
var_160 = 3;
var_168 = 0;
var_176 = 100;
var_184 = -1;
var_192 = 8489569597321773500;
pri = GetTargetFieldObjectID()
var_200 = pri;
var_208 = 56;
pri = fun_13F8(var_200, var_192, var_184, var_176, var_168, var_160, var_152)
var_216 = 0;
var_224 = 8;
pri = fun_0410(var_216)
var_232 = 1;
var_240 = 8;
pri = fun_15C0(var_232)
var_248 = 0;
pri = fun_1680()
var_256 = 2656;
var_264 = 8;
var_272 = 16;
pri = fun_0280(var_264, var_256)
var_280 = 0;
pri = fun_0350()
var_288 = 0;
var_296 = 3;
var_304 = 0;
var_312 = 100;
var_320 = -1;
var_328 = 8488587733437970302;
pri = GetTargetFieldObjectID()
var_336 = pri;
var_344 = 56;
pri = fun_1348(var_336, var_328, var_320, var_312, var_304, var_296, var_288)
var_352 = 1;
var_360 = 8;
pri = fun_15C0(var_352)
var_368 = 0;
pri = fun_1680()
pri = var_32;
switch (pri) {
// switch_58C0
    case default:
    {
// switch_58C0_case_default
        var_8 = 15;
        var_16 = 8;
        pri = fun_03E0(var_8)
        pri = 0;
        return pri;
    }
    case 0x0:
    {
// switch_58C0_case_0x0
        var_8 = 1;
        var_16 = 1105;
        pri = ItemSub(var_16, var_8)
        var_24 = 1;
        var_32 = 1107;
        pri = ItemSub(var_32, var_24)
        var_40 = 880;
        var_48 = -7438903106087098507;
        var_56 = 16;
        pri = fun_3EF8(var_48, var_40)
        OP_JUMP switch_58C0_case_default
    }
    case 0x1:
    {
// switch_58C0_case_0x1
        var_8 = 1;
        var_16 = 1105;
        pri = ItemSub(var_16, var_8)
        var_24 = 1;
        var_32 = 1108;
        pri = ItemSub(var_32, var_24)
        var_40 = 881;
        var_48 = -7438906404621983140;
        var_56 = 16;
        pri = fun_3EF8(var_48, var_40)
        OP_JUMP switch_58C0_case_default
    }
    case 0x2:
    {
// switch_58C0_case_0x2
        var_8 = 1;
        var_16 = 1106;
        pri = ItemSub(var_16, var_8)
        var_24 = 1;
        var_32 = 1107;
        pri = ItemSub(var_32, var_24)
        var_40 = 882;
        var_48 = -7438905305110354929;
        var_56 = 16;
        pri = fun_3EF8(var_48, var_40)
        OP_JUMP switch_58C0_case_default
    }
    case 0x3:
    {
// switch_58C0_case_0x3
        var_8 = 1;
        var_16 = 1106;
        pri = ItemSub(var_16, var_8)
        var_24 = 1;
        var_32 = 1108;
        pri = ItemSub(var_32, var_24)
        var_40 = 883;
        var_48 = -7438908603645239562;
        var_56 = 16;
        pri = fun_3EF8(var_48, var_40)
        OP_JUMP switch_58C0_case_default
    }
}
// lab_5368
pri = var_16;
OP_EQ_P_C_PRI 1108
OP_JZER lab_53A0
OP_CONST_S -32, 3
// lab_52C8
pri = var_16;
OP_EQ_P_C_PRI 1108
OP_JZER lab_5300
OP_CONST_S -32, 1
// lab_5300
OP_JUMP lab_53A0
