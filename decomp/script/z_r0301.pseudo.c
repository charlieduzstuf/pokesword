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
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0428
// lab_0428
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0468
    OP_JUMP lab_04D8
// lab_0468
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_04A8
    OP_JUMP lab_04D8
// lab_04A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0428
// lab_04D8
    pri = 0;
    return pri;
}
// fun_04F0
fun_04F0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0540
fun_0540() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0CB0(var_8)
    OP_JZER lab_05B8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0CE0(var_24)
    OP_JNZ lab_05B8
    pri = 0;
    return pri;
// lab_05B8
    OP_JUMP lab_05C8
// lab_05C8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0628
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0628
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05C8
    pri = 0;
    return pri;
}
// fun_0668
fun_0668() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_06A0
fun_06A0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_06E0
fun_06E0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0718
fun_0718() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0760
    pri = 0;
    return pri;
// lab_0760
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_07A0
// lab_07A0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0CB0(var_8)
    OP_JNZ lab_0828
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0818
    pri = 0;
    return pri;
// lab_0828
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0870
    pri = 0;
    return pri;
// lab_0870
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_08D0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0918(var_8)
    pri = 0;
    return pri;
// lab_08D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_07A0
    pri = 0;
    return pri;
// lab_0818
    OP_JUMP lab_0870
}
// fun_0918
fun_0918() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0950
fun_0950() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_09A0
    pri = 0;
    return pri;
// lab_09A0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0CB0(var_8)
    OP_JZER lab_0AD0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_09F8
    OP_ZERO_P_S 64
// lab_0AD0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B08
    OP_CONST_S 64, 1
// lab_0B08
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B40
    OP_CONST_S 72, 1
// lab_0B40
    var_8 = 1;
    var_16 = 0;
    var_24 = 256;
    var_32 = -1;
    var_40 = -1;
    var_48 = 248;
    var_56 = arg_6;
    var_64 = 0;
    var_72 = 200;
    var_80 = arg_5;
    var_88 = 0;
    var_96 = 160;
    var_104 = arg_4;
    var_112 = arg_3;
    var_120 = arg_2;
    var_128 = arg_1;
    var_136 = arg_0;
    pri = AddParallelCommandControlFacial_(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_09F8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A20
    OP_ZERO_P_S 72
// lab_0A20
    var_8 = 0;
    var_16 = 0;
    var_24 = 152;
    var_32 = -1;
    var_40 = -1;
    var_48 = 144;
    var_56 = arg_6;
    var_64 = 0;
    var_72 = 80;
    var_80 = arg_5;
    var_88 = 0;
    var_96 = 32;
    var_104 = arg_4;
    var_112 = arg_3;
    var_120 = arg_2;
    var_128 = arg_1;
    var_136 = arg_0;
    pri = AddParallelCommandControlFacial_(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    OP_JUMP lab_0BE0
// lab_0BE0
    pri = 0;
    return pri;
}
// fun_0BF0
fun_0BF0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C30
fun_0C30() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C70
fun_0C70() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0CB0
fun_0CB0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0CE0
fun_0CE0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0D10
fun_0D10() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_0D40
fun_0D40() {
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
// switch_1358
        case default:
        {
// switch_1358_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_13A0
// lab_13A0
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
            OP_JNZ lab_1448
            var_88 = 0;
            pri = fun_1600()
// lab_1448
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1358_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0F40
                case default:
                {
// switch_0F40_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0FB8
// lab_0FB8
                    OP_JUMP lab_13A0
                }
                case 0x0:
                {
// switch_0F40_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0FB8
                }
                case 0x1:
                {
// switch_0F40_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0FB8
                }
                case 0x2:
                {
// switch_0F40_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0FB8
                }
                case 0x3:
                {
// switch_0F40_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0FB8
                }
                case 0x4:
                {
// switch_0F40_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0FB8
                }
                case 0x5:
                {
// switch_0F40_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0FB8
                }
            }
        }
        case 0x65:
        {
// switch_1358_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_10F8
                case default:
                {
// switch_10F8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1170
// lab_1170
                    OP_JUMP lab_13A0
                }
                case 0x0:
                {
// switch_10F8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1170
                }
                case 0x1:
                {
// switch_10F8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1170
                }
                case 0x2:
                {
// switch_10F8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1170
                }
                case 0x3:
                {
// switch_10F8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1170
                }
                case 0x4:
                {
// switch_10F8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1170
                }
                case 0x5:
                {
// switch_10F8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1170
                }
            }
        }
        case 0x66:
        {
// switch_1358_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_12B0
                case default:
                {
// switch_12B0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1328
// lab_1328
                    OP_JUMP lab_13A0
                }
                case 0x0:
                {
// switch_12B0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1328
                }
                case 0x1:
                {
// switch_12B0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1328
                }
                case 0x2:
                {
// switch_12B0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1328
                }
                case 0x3:
                {
// switch_12B0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1328
                }
                case 0x4:
                {
// switch_12B0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1328
                }
                case 0x5:
                {
// switch_12B0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1328
                }
            }
        }
    }
}
// fun_1460
fun_1460() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_06E0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1508
    pri = 1;
    return pri;
// lab_1508
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1550
fun_1550() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_15A0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1460(var_8)
    arg_2 = pri;
// lab_15A0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0D40(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1600
fun_1600() {
    OP_JUMP lab_1618
// lab_1618
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1658
    pri = 0;
    return pri;
// lab_1658
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1618
    pri = 0;
    return pri;
}
// fun_1698
fun_1698() {
    var_8 = 0;
    pri = fun_1600()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1748
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1748
    pri = 0;
    return pri;
}
// fun_1758
fun_1758() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1788
fun_1788() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_17C0
fun_17C0() {
    OP_JUMP lab_17D8
// lab_17D8
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1820
    OP_JUMP lab_1850
    OP_JUMP lab_1840
// lab_1820
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_1850
    pri = 0;
    return pri;
// lab_1840
    OP_JUMP lab_17D8
}
// fun_1860
fun_1860() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_1890
fun_1890() {
    pri = arg_6;
    OP_JNZ lab_18C8
    var_8 = 0;
    pri = fun_0BF0()
// lab_18C8
    pri = arg_1;
    switch (pri) {
// switch_2E30
        case default:
        {
// switch_2E30_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3180
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3180
            pri = 1;
            OP_JUMP lab_3188
// lab_3180
            pri = 0;
// lab_3188
            OP_JZER lab_32E0
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_06E0(var_24, var_16)
            var_520 = pri;
            pri = 0;
            OP_ADDR_ALT -536
            OP_FILL 16
            OP_PUSH_P_ADR -536
            pri = var_520;
            OP_ADD_P_C 1
            var_56 = pri;
            pri = NumericToString(var_56, var_48)
            OP_PUSH_P_ADR -536
            OP_PUSH_P_ADR -536
            var_64 = 8424;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_3340
// lab_32E0
            var_8 = 64;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_3340
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_33A0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3400
// lab_33A0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3400
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3400
            pri = arg_2;
            OP_JZER lab_3440
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3440
            var_8 = 0;
            pri = fun_0C30()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_2E30_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E30_case_default
        }
        case 0x1:
        {
// switch_2E30_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E30_case_default
        }
        case 0x2:
        {
// switch_2E30_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E30_case_default
        }
        case 0x3:
        {
// switch_2E30_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E30_case_default
        }
        case 0x4:
        {
// switch_2E30_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E30_case_default
        }
        case 0x5:
        {
// switch_2E30_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5608;
            var_72 = 5600;
            var_80 = 5592;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E30_case_default
        }
        case 0x6:
        {
// switch_2E30_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5632;
            var_72 = 5624;
            var_80 = 5616;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E30_case_default
        }
        case 0x7:
        {
// switch_2E30_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5656;
            var_72 = 5648;
            var_80 = 5640;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E30_case_default
        }
        case 0x8:
        {
// switch_2E30_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E30_case_default
        }
        case 0x9:
        {
// switch_2E30_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5680;
            var_72 = 5672;
            var_80 = 5664;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E30_case_default
        }
        case 0xa:
        {
// switch_2E30_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5704;
            var_72 = 5696;
            var_80 = 5688;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E30_case_default
        }
        case 0xb:
        {
// switch_2E30_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5728;
            var_72 = 5720;
            var_80 = 5712;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E30_case_default
        }
        case 0xc:
        {
// switch_2E30_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5752;
            var_72 = 5744;
            var_80 = 5736;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E30_case_default
        }
        case 0xd:
        {
// switch_2E30_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5776;
            var_72 = 5768;
            var_80 = 5760;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E30_case_default
        }
        case 0xe:
        {
// switch_2E30_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5800;
            var_72 = 5792;
            var_80 = 5784;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E30_case_default
        }
        case 0xf:
        {
// switch_2E30_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E30_case_default
        }
        case 0x10:
        {
// switch_2E30_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E30_case_default
        }
        case 0x11:
        {
// switch_2E30_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5824;
            var_72 = 5816;
            var_80 = 5808;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E30_case_default
        }
        case 0x12:
        {
// switch_2E30_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5848;
            var_72 = 5840;
            var_80 = 5832;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E30_case_default
        }
        case 0x13:
        {
// switch_2E30_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E30_case_default
        }
        case 0x14:
        {
// switch_2E30_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E30_case_default
        }
        case 0x15:
        {
// switch_2E30_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E30_case_default
        }
        case 0x16:
        {
// switch_2E30_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E30_case_default
        }
        case 0x17:
        {
// switch_2E30_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E30_case_default
        }
        case 0x18:
        {
// switch_2E30_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E30_case_default
        }
        case 0x19:
        {
// switch_2E30_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5872;
            var_72 = 5864;
            var_80 = 5856;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E30_case_default
        }
        case 0x1a:
        {
// switch_2E30_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06A0(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0668(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6096;
            var_88 = 6088;
            var_96 = 6080;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0950(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_2E30_case_default
        }
        case 0x1b:
        {
// switch_2E30_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06A0(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0668(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6320;
            var_88 = 6312;
            var_96 = 6304;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0950(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_2E30_case_default
        }
        case 0x1c:
        {
// switch_2E30_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06A0(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0668(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6544;
            var_88 = 6536;
            var_96 = 6528;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0950(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_2E30_case_default
        }
        case 0x1d:
        {
// switch_2E30_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E30_case_default
        }
        case 0x1e:
        {
// switch_2E30_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E30_case_default
        }
        case 0x1f:
        {
// switch_2E30_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E30_case_default
        }
        case 0x20:
        {
// switch_2E30_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E30_case_default
        }
        case 0x21:
        {
// switch_2E30_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E30_case_default
        }
        case 0x22:
        {
// switch_2E30_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E30_case_default
        }
        case 0x23:
        {
// switch_2E30_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E30_case_default
        }
        case 0x24:
        {
// switch_2E30_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E30_case_default
        }
        case 0x25:
        {
// switch_2E30_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E30_case_default
        }
        case 0x26:
        {
// switch_2E30_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E30_case_default
        }
        case 0x27:
        {
// switch_2E30_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E30_case_default
        }
        case 0x28:
        {
// switch_2E30_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E30_case_default
        }
        case 0x29:
        {
// switch_2E30_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E30_case_default
        }
    }
}
// fun_3470
fun_3470() {
    pri = arg_4;
    OP_JNZ lab_34A8
    var_8 = 0;
    pri = fun_0BF0()
// lab_34A8
    pri = arg_1;
    switch (pri) {
// switch_4880
        case default:
        {
// switch_4880_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 8960;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0CB0(var_264)
            OP_JZER lab_4E48
            pri = arg_3;
            switch (pri) {
// switch_4DF0
                case default:
                {
// switch_4DF0_case_default
                    OP_JUMP lab_5100
// lab_5100
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_5170
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_5170
                    var_8 = 0;
                    pri = fun_0C30()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_4DF0_case_0x1
                    var_8 = 32;
                    var_16 = 9112;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_4DF0_case_default
                }
                case 0x2:
                {
// switch_4DF0_case_0x2
                    var_8 = 32;
                    var_16 = 9216;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_4DF0_case_default
                }
                case 0x3:
                {
// switch_4DF0_case_0x3
                    var_8 = 32;
                    var_16 = 9016;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_4DF0_case_default
                }
            }
// lab_4E48
            pri = arg_1;
            OP_JZER lab_4E98
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_4E98
            pri = 0;
            OP_JUMP lab_4EA0
// lab_4E98
            pri = 1;
// lab_4EA0
            OP_JZER lab_4F08
            var_8 = 9312;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_06E0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_4F08
            pri = 1;
            OP_JUMP lab_4F10
// lab_4F08
            pri = 0;
// lab_4F10
            OP_JZER lab_4F60
            var_8 = 32;
            var_16 = 9408;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5100
// lab_4F60
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_4FC8
            var_8 = 32;
            var_16 = 9568;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5100
// lab_4FC8
            var_16 = 9688;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_06E0(var_24, var_16)
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
            var_176 = 9792;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 9808;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_4880_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x1:
        {
// switch_4880_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x2:
        {
// switch_4880_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x3:
        {
// switch_4880_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x4:
        {
// switch_4880_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x5:
        {
// switch_4880_case_0x5
            var_8 = 1;
            var_16 = 8440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06A0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0918(var_40)
            OP_JUMP switch_4880_case_default
        }
        case 0x6:
        {
// switch_4880_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x7:
        {
// switch_4880_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x8:
        {
// switch_4880_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x9:
        {
// switch_4880_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0xa:
        {
// switch_4880_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0xb:
        {
// switch_4880_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0xc:
        {
// switch_4880_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0xd:
        {
// switch_4880_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0xe:
        {
// switch_4880_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0xf:
        {
// switch_4880_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x10:
        {
// switch_4880_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x11:
        {
// switch_4880_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x12:
        {
// switch_4880_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x13:
        {
// switch_4880_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x14:
        {
// switch_4880_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x15:
        {
// switch_4880_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x16:
        {
// switch_4880_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x17:
        {
// switch_4880_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x18:
        {
// switch_4880_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x19:
        {
// switch_4880_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x1a:
        {
// switch_4880_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x1b:
        {
// switch_4880_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x1c:
        {
// switch_4880_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x1d:
        {
// switch_4880_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x1e:
        {
// switch_4880_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x1f:
        {
// switch_4880_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x20:
        {
// switch_4880_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x21:
        {
// switch_4880_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x22:
        {
// switch_4880_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x23:
        {
// switch_4880_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x24:
        {
// switch_4880_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x25:
        {
// switch_4880_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x26:
        {
// switch_4880_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x27:
        {
// switch_4880_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x28:
        {
// switch_4880_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x29:
        {
// switch_4880_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x2a:
        {
// switch_4880_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x2b:
        {
// switch_4880_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x2c:
        {
// switch_4880_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x2d:
        {
// switch_4880_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x2e:
        {
// switch_4880_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x2f:
        {
// switch_4880_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x30:
        {
// switch_4880_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x31:
        {
// switch_4880_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x32:
        {
// switch_4880_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x33:
        {
// switch_4880_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x34:
        {
// switch_4880_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x35:
        {
// switch_4880_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x36:
        {
// switch_4880_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x37:
        {
// switch_4880_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x38:
        {
// switch_4880_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x39:
        {
// switch_4880_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x3a:
        {
// switch_4880_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x3b:
        {
// switch_4880_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x3c:
        {
// switch_4880_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8536;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x3d:
        {
// switch_4880_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8712;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
        case 0x3e:
        {
// switch_4880_case_0x3e
            var_8 = 3;
            var_16 = 8856;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06A0(var_24, var_16, var_8)
            OP_JUMP switch_4880_case_default
        }
    }
}
// fun_51A0
fun_51A0() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_52A0
        case default:
        {
// switch_52A0_case_default
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
// switch_52A0_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_52A0_case_default
        }
        case 0x1:
        {
// switch_52A0_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_52A0_case_default
        }
        case 0x2:
        {
// switch_52A0_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_52A0_case_default
        }
        case 0x3:
        {
// switch_52A0_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_52A0_case_default
        }
    }
}
// fun_5360
fun_5360() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_53B0
// lab_53B0
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 9856;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_5428
    OP_JUMP lab_5458
// lab_5428
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_53B0
// lab_5458
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_54E0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_3470(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0D10(var_56)
// lab_54E0
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_5548
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0C70(var_24, var_16)
// lab_5548
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0C70(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_5608
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0718(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_04F0(var_88, var_80, var_72, var_64, var_56)
// lab_5608
    pri = IsPlayerRideBicycle()
    OP_JZER lab_5648
    pri = 0;
    return pri;
// lab_5648
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_5790
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 9976;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0668(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_5758
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_5790
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0540(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0540(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0718(var_40)
    pri = 0;
    return pri;
// lab_5758
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0C70(var_16, var_8)
}
// fun_5818
fun_5818() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_5998
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_58B0
    var_8 = 1;
    var_16 = 0;
    var_24 = 10112;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
// lab_5998
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_58B0
    pri = arg_0;
    OP_JNZ lab_58F8
    var_8 = 10160;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_5918
// lab_58F8
    var_8 = 10336;
    pri = SoundPostEvent(var_8)
// lab_5918
    var_8 = 0;
    var_16 = 8;
    pri = fun_03E0(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_5998
    var_24 = 10600;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0280(var_32, var_24)
    var_48 = 0;
    pri = fun_0350()
}
// fun_59D8
fun_59D8() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = var_8;
    var_64 = 48;
    pri = fun_51A0(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 0;
    var_80 = 3;
    var_88 = arg_3;
    var_96 = 100;
    var_104 = -1;
    var_112 = arg_0;
    var_120 = var_8;
    var_128 = 56;
    pri = fun_1550(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = 1;
    var_144 = 8;
    pri = fun_1698(var_136)
    var_152 = 0;
    pri = fun_1758()
    var_160 = 1;
    var_168 = 3;
    var_176 = 0;
    var_184 = 2;
    var_192 = var_8;
    var_200 = 40;
    pri = fun_3470(var_192, var_184, var_176, var_168, var_160)
    var_208 = var_8;
    var_216 = 8;
    pri = fun_0718(var_208)
    var_224 = 1;
    var_232 = -1;
    var_240 = -1;
    var_248 = 3;
    var_256 = 0;
    var_264 = 2;
    var_272 = var_8;
    var_280 = 56;
    pri = fun_1890(var_272, var_264, var_256, var_248, var_240, var_232, var_224)
    var_288 = 15;
    var_296 = 8;
    pri = fun_0060(var_288)
    var_304 = 1;
    var_312 = arg_2;
    var_320 = 16;
    pri = fun_5818(var_312, var_304)
    var_328 = var_8;
    var_336 = 8;
    pri = fun_0718(var_328)
    var_344 = 0;
    var_352 = 3;
    var_360 = arg_3;
    var_368 = 100;
    var_376 = -1;
    var_384 = arg_1;
    var_392 = var_8;
    var_400 = 56;
    pri = fun_1550(var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_408 = 1;
    var_416 = 8;
    pri = fun_1698(var_408)
    var_424 = 0;
    pri = fun_1758()
    var_432 = 0;
    var_440 = 0;
    var_448 = 0;
    var_456 = var_8;
    var_464 = 32;
    pri = fun_5360(var_456, var_448, var_440, var_432)
    pri = 0;
    return pri;
}
// fun_5CC8
fun_5CC8() {
    pri = g_mode;
    switch (pri) {
// switch_5DB0
        case default:
        {
// switch_5DB0_case_default
            pri = CommandNOP()
            OP_JUMP lab_5E08
// lab_5E08
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5DB0_case_0x0
            var_8 = 0;
            pri = fun_5E18()
            OP_JUMP lab_5E08
        }
        case 0x42c7ab9263b05043:
        {
// switch_5DB0_case_0x42c7ab9263b05043
            var_8 = 0;
            pri = fun_5E30()
            OP_JUMP lab_5E08
        }
        case 0x4d37da80ff45181e:
        {
// switch_5DB0_case_0x4d37da80ff45181e
            var_8 = 0;
            pri = fun_5E88()
            OP_JUMP lab_5E08
        }
        case 0x6c12762105f4ea09:
        {
// switch_5DB0_case_0x6c12762105f4ea09
            var_8 = 0;
            pri = fun_5E48()
            OP_JUMP lab_5E08
        }
    }
}
// fun_5E18
fun_5E18() {
    pri = 0;
    return pri;
}
// fun_5E30
fun_5E30() {
    pri = 0;
    return pri;
}
// fun_5E48
fun_5E48() {
    var_8 = -4743319563140151367;
    pri = FlagSet(var_8)
    pri = 0;
    return pri;
}
// fun_5E88
fun_5E88() {
    var_8 = 10648;
    var_16 = 8;
    pri = fun_1788(var_8)
    var_24 = 0;
    pri = fun_17C0()
    var_32 = 1;
    var_40 = 1;
    OP_PUSH2_C 3170779525156232642, 3170778425644604431
    var_48 = 32;
    pri = fun_59D8(var_40, var_32, var_24, var_16)
    var_56 = 0;
    pri = fun_1860()
    pri = 0;
    return pri;
}
