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
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0430
fun_0430() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0BA0(var_8)
    OP_JZER lab_04A8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0BD0(var_24)
    OP_JNZ lab_04A8
    pri = 0;
    return pri;
// lab_04A8
    OP_JUMP lab_04B8
// lab_04B8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0518
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0518
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_04B8
    pri = 0;
    return pri;
}
// fun_0558
fun_0558() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0590
fun_0590() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_05D0
fun_05D0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0608
fun_0608() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0650
    pri = 0;
    return pri;
// lab_0650
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0690
// lab_0690
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0BA0(var_8)
    OP_JNZ lab_0718
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0708
    pri = 0;
    return pri;
// lab_0718
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0760
    pri = 0;
    return pri;
// lab_0760
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_07C0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0808(var_8)
    pri = 0;
    return pri;
// lab_07C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0690
    pri = 0;
    return pri;
// lab_0708
    OP_JUMP lab_0760
}
// fun_0808
fun_0808() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0840
fun_0840() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0890
    pri = 0;
    return pri;
// lab_0890
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0BA0(var_8)
    OP_JZER lab_09C0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_08E8
    OP_ZERO_P_S 64
// lab_09C0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_09F8
    OP_CONST_S 64, 1
// lab_09F8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A30
    OP_CONST_S 72, 1
// lab_0A30
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
// lab_08E8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0910
    OP_ZERO_P_S 72
// lab_0910
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
    OP_JUMP lab_0AD0
// lab_0AD0
    pri = 0;
    return pri;
}
// fun_0AE0
fun_0AE0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0B20
fun_0B20() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0B60
fun_0B60() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0BA0
fun_0BA0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0BD0
fun_0BD0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0C00
fun_0C00() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_0C30
fun_0C30() {
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
// switch_1248
        case default:
        {
// switch_1248_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1290
// lab_1290
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
            OP_JNZ lab_1338
            var_88 = 0;
            pri = fun_14F0()
// lab_1338
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1248_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0E30
                case default:
                {
// switch_0E30_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0EA8
// lab_0EA8
                    OP_JUMP lab_1290
                }
                case 0x0:
                {
// switch_0E30_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0EA8
                }
                case 0x1:
                {
// switch_0E30_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0EA8
                }
                case 0x2:
                {
// switch_0E30_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0EA8
                }
                case 0x3:
                {
// switch_0E30_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0EA8
                }
                case 0x4:
                {
// switch_0E30_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0EA8
                }
                case 0x5:
                {
// switch_0E30_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0EA8
                }
            }
        }
        case 0x65:
        {
// switch_1248_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_0FE8
                case default:
                {
// switch_0FE8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1060
// lab_1060
                    OP_JUMP lab_1290
                }
                case 0x0:
                {
// switch_0FE8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1060
                }
                case 0x1:
                {
// switch_0FE8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1060
                }
                case 0x2:
                {
// switch_0FE8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1060
                }
                case 0x3:
                {
// switch_0FE8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1060
                }
                case 0x4:
                {
// switch_0FE8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1060
                }
                case 0x5:
                {
// switch_0FE8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1060
                }
            }
        }
        case 0x66:
        {
// switch_1248_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_11A0
                case default:
                {
// switch_11A0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1218
// lab_1218
                    OP_JUMP lab_1290
                }
                case 0x0:
                {
// switch_11A0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1218
                }
                case 0x1:
                {
// switch_11A0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1218
                }
                case 0x2:
                {
// switch_11A0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1218
                }
                case 0x3:
                {
// switch_11A0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1218
                }
                case 0x4:
                {
// switch_11A0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1218
                }
                case 0x5:
                {
// switch_11A0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1218
                }
            }
        }
    }
}
// fun_1350
fun_1350() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_05D0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_13F8
    pri = 1;
    return pri;
// lab_13F8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1440
fun_1440() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1490
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1350(var_8)
    arg_2 = pri;
// lab_1490
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0C30(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_14F0
fun_14F0() {
    OP_JUMP lab_1508
// lab_1508
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1548
    pri = 0;
    return pri;
// lab_1548
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1508
    pri = 0;
    return pri;
}
// fun_1588
fun_1588() {
    var_8 = 0;
    pri = fun_14F0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1638
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1638
    pri = 0;
    return pri;
}
// fun_1648
fun_1648() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1678
fun_1678() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_16A8
// lab_16A8
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_16E8
    OP_JUMP lab_1718
// lab_16E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_16A8
// lab_1718
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1760
fun_1760() {
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
// fun_17D0
fun_17D0() {
    OP_JUMP lab_17E8
// lab_17E8
    pri = EvCameraMoveWait_()
    OP_JZER lab_1820
    pri = 0;
    return pri;
// lab_1820
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_17E8
    pri = 0;
    return pri;
}
// fun_1860
fun_1860() {
    pri = arg_6;
    OP_JNZ lab_1898
    var_8 = 0;
    pri = fun_0AE0()
// lab_1898
    pri = arg_1;
    switch (pri) {
// switch_2E00
        case default:
        {
// switch_2E00_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3150
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3150
            pri = 1;
            OP_JUMP lab_3158
// lab_3150
            pri = 0;
// lab_3158
            OP_JZER lab_32B0
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_05D0(var_24, var_16)
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
            OP_JUMP lab_3310
// lab_32B0
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
// lab_3310
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3370
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_33D0
// lab_3370
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_33D0
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_33D0
            pri = arg_2;
            OP_JZER lab_3410
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3410
            var_8 = 0;
            pri = fun_0B20()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_2E00_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E00_case_default
        }
        case 0x1:
        {
// switch_2E00_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E00_case_default
        }
        case 0x2:
        {
// switch_2E00_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E00_case_default
        }
        case 0x3:
        {
// switch_2E00_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E00_case_default
        }
        case 0x4:
        {
// switch_2E00_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E00_case_default
        }
        case 0x5:
        {
// switch_2E00_case_0x5
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
            pri = fun_0840(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E00_case_default
        }
        case 0x6:
        {
// switch_2E00_case_0x6
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
            pri = fun_0840(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E00_case_default
        }
        case 0x7:
        {
// switch_2E00_case_0x7
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
            pri = fun_0840(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E00_case_default
        }
        case 0x8:
        {
// switch_2E00_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E00_case_default
        }
        case 0x9:
        {
// switch_2E00_case_0x9
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
            pri = fun_0840(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E00_case_default
        }
        case 0xa:
        {
// switch_2E00_case_0xa
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
            pri = fun_0840(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E00_case_default
        }
        case 0xb:
        {
// switch_2E00_case_0xb
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
            pri = fun_0840(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E00_case_default
        }
        case 0xc:
        {
// switch_2E00_case_0xc
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
            pri = fun_0840(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E00_case_default
        }
        case 0xd:
        {
// switch_2E00_case_0xd
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
            pri = fun_0840(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E00_case_default
        }
        case 0xe:
        {
// switch_2E00_case_0xe
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
            pri = fun_0840(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E00_case_default
        }
        case 0xf:
        {
// switch_2E00_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E00_case_default
        }
        case 0x10:
        {
// switch_2E00_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E00_case_default
        }
        case 0x11:
        {
// switch_2E00_case_0x11
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
            pri = fun_0840(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E00_case_default
        }
        case 0x12:
        {
// switch_2E00_case_0x12
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
            pri = fun_0840(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E00_case_default
        }
        case 0x13:
        {
// switch_2E00_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E00_case_default
        }
        case 0x14:
        {
// switch_2E00_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E00_case_default
        }
        case 0x15:
        {
// switch_2E00_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E00_case_default
        }
        case 0x16:
        {
// switch_2E00_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E00_case_default
        }
        case 0x17:
        {
// switch_2E00_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E00_case_default
        }
        case 0x18:
        {
// switch_2E00_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E00_case_default
        }
        case 0x19:
        {
// switch_2E00_case_0x19
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
            pri = fun_0840(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2E00_case_default
        }
        case 0x1a:
        {
// switch_2E00_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0590(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0558(var_48, var_40)
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
            pri = fun_0840(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_2E00_case_default
        }
        case 0x1b:
        {
// switch_2E00_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0590(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0558(var_48, var_40)
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
            pri = fun_0840(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_2E00_case_default
        }
        case 0x1c:
        {
// switch_2E00_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0590(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0558(var_48, var_40)
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
            pri = fun_0840(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_2E00_case_default
        }
        case 0x1d:
        {
// switch_2E00_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E00_case_default
        }
        case 0x1e:
        {
// switch_2E00_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E00_case_default
        }
        case 0x1f:
        {
// switch_2E00_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E00_case_default
        }
        case 0x20:
        {
// switch_2E00_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E00_case_default
        }
        case 0x21:
        {
// switch_2E00_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E00_case_default
        }
        case 0x22:
        {
// switch_2E00_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E00_case_default
        }
        case 0x23:
        {
// switch_2E00_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E00_case_default
        }
        case 0x24:
        {
// switch_2E00_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E00_case_default
        }
        case 0x25:
        {
// switch_2E00_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E00_case_default
        }
        case 0x26:
        {
// switch_2E00_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E00_case_default
        }
        case 0x27:
        {
// switch_2E00_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E00_case_default
        }
        case 0x28:
        {
// switch_2E00_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E00_case_default
        }
        case 0x29:
        {
// switch_2E00_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2E00_case_default
        }
    }
}
// fun_3440
fun_3440() {
    pri = arg_4;
    OP_JNZ lab_3478
    var_8 = 0;
    pri = fun_0AE0()
// lab_3478
    pri = arg_1;
    switch (pri) {
// switch_4850
        case default:
        {
// switch_4850_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 8960;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0BA0(var_264)
            OP_JZER lab_4E18
            pri = arg_3;
            switch (pri) {
// switch_4DC0
                case default:
                {
// switch_4DC0_case_default
                    OP_JUMP lab_50D0
// lab_50D0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_5140
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_5140
                    var_8 = 0;
                    pri = fun_0B20()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_4DC0_case_0x1
                    var_8 = 32;
                    var_16 = 9112;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_4DC0_case_default
                }
                case 0x2:
                {
// switch_4DC0_case_0x2
                    var_8 = 32;
                    var_16 = 9216;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_4DC0_case_default
                }
                case 0x3:
                {
// switch_4DC0_case_0x3
                    var_8 = 32;
                    var_16 = 9016;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_4DC0_case_default
                }
            }
// lab_4E18
            pri = arg_1;
            OP_JZER lab_4E68
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_4E68
            pri = 0;
            OP_JUMP lab_4E70
// lab_4E68
            pri = 1;
// lab_4E70
            OP_JZER lab_4ED8
            var_8 = 9312;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_05D0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_4ED8
            pri = 1;
            OP_JUMP lab_4EE0
// lab_4ED8
            pri = 0;
// lab_4EE0
            OP_JZER lab_4F30
            var_8 = 32;
            var_16 = 9408;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_50D0
// lab_4F30
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_4F98
            var_8 = 32;
            var_16 = 9568;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_50D0
// lab_4F98
            var_16 = 9688;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_05D0(var_24, var_16)
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
// switch_4850_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x1:
        {
// switch_4850_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x2:
        {
// switch_4850_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x3:
        {
// switch_4850_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x4:
        {
// switch_4850_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x5:
        {
// switch_4850_case_0x5
            var_8 = 1;
            var_16 = 8440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0590(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0808(var_40)
            OP_JUMP switch_4850_case_default
        }
        case 0x6:
        {
// switch_4850_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x7:
        {
// switch_4850_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x8:
        {
// switch_4850_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x9:
        {
// switch_4850_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0xa:
        {
// switch_4850_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0xb:
        {
// switch_4850_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0xc:
        {
// switch_4850_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0xd:
        {
// switch_4850_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0xe:
        {
// switch_4850_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0xf:
        {
// switch_4850_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x10:
        {
// switch_4850_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x11:
        {
// switch_4850_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x12:
        {
// switch_4850_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x13:
        {
// switch_4850_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x14:
        {
// switch_4850_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x15:
        {
// switch_4850_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x16:
        {
// switch_4850_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x17:
        {
// switch_4850_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x18:
        {
// switch_4850_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x19:
        {
// switch_4850_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x1a:
        {
// switch_4850_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x1b:
        {
// switch_4850_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x1c:
        {
// switch_4850_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x1d:
        {
// switch_4850_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x1e:
        {
// switch_4850_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x1f:
        {
// switch_4850_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x20:
        {
// switch_4850_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x21:
        {
// switch_4850_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x22:
        {
// switch_4850_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x23:
        {
// switch_4850_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x24:
        {
// switch_4850_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x25:
        {
// switch_4850_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x26:
        {
// switch_4850_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x27:
        {
// switch_4850_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x28:
        {
// switch_4850_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x29:
        {
// switch_4850_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x2a:
        {
// switch_4850_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x2b:
        {
// switch_4850_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x2c:
        {
// switch_4850_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x2d:
        {
// switch_4850_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x2e:
        {
// switch_4850_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x2f:
        {
// switch_4850_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x30:
        {
// switch_4850_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x31:
        {
// switch_4850_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x32:
        {
// switch_4850_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x33:
        {
// switch_4850_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x34:
        {
// switch_4850_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x35:
        {
// switch_4850_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x36:
        {
// switch_4850_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x37:
        {
// switch_4850_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x38:
        {
// switch_4850_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x39:
        {
// switch_4850_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x3a:
        {
// switch_4850_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x3b:
        {
// switch_4850_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x3c:
        {
// switch_4850_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8536;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x3d:
        {
// switch_4850_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8712;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
        case 0x3e:
        {
// switch_4850_case_0x3e
            var_8 = 3;
            var_16 = 8856;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0590(var_24, var_16, var_8)
            OP_JUMP switch_4850_case_default
        }
    }
}
// fun_5170
fun_5170() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_5270
        case default:
        {
// switch_5270_case_default
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
// switch_5270_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_5270_case_default
        }
        case 0x1:
        {
// switch_5270_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_5270_case_default
        }
        case 0x2:
        {
// switch_5270_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_5270_case_default
        }
        case 0x3:
        {
// switch_5270_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_5270_case_default
        }
    }
}
// fun_5330
fun_5330() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_5380
// lab_5380
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 9856;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_53F8
    OP_JUMP lab_5428
// lab_53F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_5380
// lab_5428
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_54B0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_3440(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0C00(var_56)
// lab_54B0
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_5518
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0B60(var_24, var_16)
// lab_5518
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0B60(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_55D8
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0608(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_03E0(var_88, var_80, var_72, var_64, var_56)
// lab_55D8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_5618
    pri = 0;
    return pri;
// lab_5618
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_5760
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 9976;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0558(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_5728
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_5760
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0430(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0430(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0608(var_40)
    pri = 0;
    return pri;
// lab_5728
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0B60(var_16, var_8)
}
// fun_57E8
fun_57E8() {
    pri = g_mode;
    switch (pri) {
// switch_5880
        case default:
        {
// switch_5880_case_default
            pri = CommandNOP()
            OP_JUMP lab_58B8
// lab_58B8
            pri = 0;
            return pri;
        }
        case 0xbef129b89017ed56:
        {
// switch_5880_case_0xbef129b89017ed56
            var_8 = 0;
            pri = fun_58E0()
            OP_JUMP lab_58B8
        }
        case 0x0:
        {
// switch_5880_case_0x0
            var_8 = 0;
            pri = fun_58C8()
            OP_JUMP lab_58B8
        }
    }
}
// fun_58C8
fun_58C8() {
    pri = 0;
    return pri;
}
// fun_58E0
fun_58E0() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = var_8;
    var_64 = 48;
    pri = fun_5170(var_56, var_48, var_40, var_32, var_24, var_16)
    pri = EvCameraStart()
    OP_PUSH2_C -4620693217682128896, 4631276676806449562
    var_72 = 0;
    OP_PUSH5_C 4665213608973104579, -4580091507822779433, 4668859369628484239, 4665760121227690639, -4587305359632152658
    var_80 = 4668869023340576113;
    var_88 = 1;
    pri = EvCameraMove(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_96 = 0;
    pri = fun_17D0()
    OP_PUSH2_C -4620693217682128896, 4631276676806449562
    var_104 = 6;
    OP_PUSH5_C 4664867273805471416, -4578754149839682929, 4668740061621754266, 4665425253966335181, -4584393852841801810
    var_112 = 4668786312578376663;
    var_120 = 75;
    pri = EvCameraMove(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48)
    var_128 = 10;
    var_136 = 8;
    pri = fun_0060(var_128)
    var_144 = 0;
    var_152 = 3;
    var_160 = 0;
    var_168 = 100;
    var_176 = -1;
    var_184 = 7153760772397796502;
    var_192 = var_8;
    var_200 = 56;
    pri = fun_1440(var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_208 = 1;
    var_216 = 8;
    pri = fun_1588(var_208)
    var_224 = 15;
    var_232 = 8;
    pri = fun_0060(var_224)
    var_240 = 1;
    var_248 = -1;
    var_256 = -1;
    var_264 = 3;
    var_272 = 0;
    var_280 = 30;
    var_288 = -6412921588879773819;
    var_296 = 56;
    pri = fun_1860(var_288, var_280, var_272, var_264, var_256, var_248, var_240)
    var_304 = 1;
    var_312 = -1;
    var_320 = -1;
    var_328 = 2;
    var_336 = 0;
    var_344 = 30;
    var_352 = -6427247125880896563;
    var_360 = 56;
    pri = fun_1860(var_352, var_344, var_336, var_328, var_320, var_312, var_304)
    var_368 = -6412921588879773819;
    var_376 = 8;
    pri = fun_0608(var_368)
    var_384 = -6426402700950619740;
    var_392 = 8;
    pri = fun_0608(var_384)
    var_400 = -6427247125880896563;
    var_408 = 8;
    pri = fun_0608(var_400)
    var_416 = 0;
    var_424 = -1211398166574264595;
    var_432 = 0;
    var_440 = 24;
    pri = fun_1678(var_432, var_424, var_416)
    var_448 = 0;
    var_456 = -1211401465109149228;
    var_464 = 1;
    var_472 = 24;
    pri = fun_1678(var_464, var_456, var_448)
    var_488 = 0;
    var_496 = 1;
    var_504 = 0;
    var_512 = 1;
    var_520 = 32;
    pri = fun_1760(var_512, var_504, var_496, var_488)
    var_16 = pri;
    pri = var_16;
    switch (pri) {
// switch_6740
        case default:
        {
// switch_6740_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6740_case_0x0
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            var_48 = 7153766269955937557;
            var_56 = var_8;
            var_64 = 56;
            pri = fun_1440(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_1588(var_72)
            var_88 = 0;
            var_96 = -1210440491946282039;
            var_104 = 0;
            var_112 = 24;
            pri = fun_1678(var_104, var_96, var_88)
            var_120 = 0;
            var_128 = -1210441591457910250;
            var_136 = 1;
            var_144 = 24;
            pri = fun_1678(var_136, var_128, var_120)
            var_160 = 0;
            var_168 = 1;
            var_176 = 0;
            var_184 = 1;
            var_192 = 32;
            pri = fun_1760(var_184, var_176, var_168, var_160)
            var_24 = pri;
            pri = var_24;
            switch (pri) {
// switch_6540
                case default:
                {
// switch_6540_case_default
                    OP_JUMP switch_6740_case_default
                }
                case 0x0:
                {
// switch_6540_case_0x0
                    var_8 = 0;
                    pri = fun_1648()
                    var_16 = 1;
                    var_24 = 0;
                    var_32 = 10112;
                    var_40 = 8;
                    var_48 = 32;
                    pri = fun_02E0(var_40, var_32, var_24, var_16)
                    var_56 = 10160;
                    pri = SoundPostEvent(var_56)
                    var_64 = 0;
                    pri = fun_0350()
                    var_72 = 3;
                    var_80 = 1;
                    pri = EvCameraEnd(var_80, var_72)
                    pri = CallStaffRoll()
                    var_88 = 0;
                    var_96 = 0;
                    var_104 = 0;
                    var_112 = var_8;
                    var_120 = 32;
                    pri = fun_5330(var_112, var_104, var_96, var_88)
                    pri = EvCameraStart()
                    OP_PUSH2_C -4620693217682128896, 4630910759336725709
                    var_128 = 0;
                    OP_PUSH5_C 4664968296933831475, -4580364890393909658, 4668730891694778614, 4665551005111203922, -4583795366672570778
                    var_136 = 4668665151894553887;
                    var_144 = 1;
                    pri = EvCameraMove(var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72)
                    var_152 = 0;
                    pri = fun_17D0()
                    var_160 = 10344;
                    pri = SoundPostEvent(var_160)
                    var_168 = 10472;
                    pri = SoundPostEvent(var_168)
                    var_176 = 10624;
                    var_184 = 8;
                    var_192 = 16;
                    pri = fun_0280(var_184, var_176)
                    var_200 = 0;
                    pri = fun_0350()
                    var_208 = 1;
                    var_216 = -1;
                    var_224 = -1;
                    var_232 = 3;
                    var_240 = 0;
                    var_248 = 30;
                    var_256 = -6412921588879773819;
                    var_264 = 56;
                    pri = fun_1860(var_256, var_248, var_240, var_232, var_224, var_216, var_208)
                    var_272 = 1;
                    var_280 = -1;
                    var_288 = -1;
                    var_296 = 2;
                    var_304 = 0;
                    var_312 = 30;
                    var_320 = -6427247125880896563;
                    var_328 = 56;
                    pri = fun_1860(var_320, var_312, var_304, var_296, var_288, var_280, var_272)
                    var_336 = -6412921588879773819;
                    var_344 = 8;
                    pri = fun_0608(var_336)
                    var_352 = -6427247125880896563;
                    var_360 = 8;
                    pri = fun_0608(var_352)
                    OP_PUSH2_C -4620693217682128896, 4631276676806449562
                    var_368 = 3;
                    OP_PUSH5_C 4665213608973104579, -4580091507822779433, 4668859369628484239, 4665760121227690639, -4587305359632152658
                    var_376 = 4668869023340576113;
                    var_384 = 30;
                    pri = EvCameraMove(var_384, var_376, var_368, var_360, var_352, var_344, var_336, var_328, var_320, var_312)
                    var_392 = 1;
                    var_400 = 1;
                    var_408 = 0;
                    var_416 = 1;
                    var_424 = 1;
                    var_432 = var_8;
                    var_440 = 48;
                    pri = fun_5170(var_432, var_424, var_416, var_408, var_400, var_392)
                    var_448 = 0;
                    var_456 = 3;
                    var_464 = 0;
                    var_472 = 100;
                    var_480 = -1;
                    var_488 = 7153759672886168291;
                    var_496 = var_8;
                    var_504 = 56;
                    pri = fun_1440(var_496, var_488, var_480, var_472, var_464, var_456, var_448)
                    var_512 = 0;
                    pri = fun_17D0()
                    var_520 = 1;
                    var_528 = 8;
                    pri = fun_1588(var_520)
                    var_536 = 0;
                    pri = fun_1648()
                    var_544 = 3;
                    var_552 = 55;
                    pri = EvCameraEnd(var_552, var_544)
                    var_560 = 0;
                    var_568 = 0;
                    var_576 = 0;
                    var_584 = var_8;
                    var_592 = 32;
                    pri = fun_5330(var_584, var_576, var_568, var_560)
                    OP_JUMP switch_6540_case_default
                }
                case 0x1:
                {
// switch_6540_case_0x1
                    var_8 = 0;
                    pri = fun_1648()
                    OP_PUSH2_C -4620693217682128896, 4631276676806449562
                    var_16 = 3;
                    OP_PUSH5_C 4665213608973104579, -4580091507822779433, 4668859369628484239, 4665760121227690639, -4587305359632152658
                    var_24 = 4668869023340576113;
                    var_32 = 30;
                    pri = EvCameraMove(var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32, var_-40)
                    var_40 = 0;
                    var_48 = 3;
                    var_56 = 0;
                    var_64 = 100;
                    var_72 = -1;
                    var_80 = 7153758573374540080;
                    var_88 = var_8;
                    var_96 = 56;
                    pri = fun_1440(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
                    var_104 = 0;
                    pri = fun_17D0()
                    var_112 = 1;
                    var_120 = 8;
                    pri = fun_1588(var_112)
                    var_128 = 0;
                    pri = fun_1648()
                    var_136 = 0;
                    var_144 = 0;
                    var_152 = 0;
                    var_160 = var_8;
                    var_168 = 32;
                    pri = fun_5330(var_160, var_152, var_144, var_136)
                    var_176 = 3;
                    var_184 = 55;
                    pri = EvCameraEnd(var_184, var_176)
                    OP_JUMP switch_6540_case_default
                }
            }
        }
        case 0x1:
        {
// switch_6740_case_0x1
            var_8 = 0;
            pri = fun_1648()
            OP_PUSH2_C -4620693217682128896, 4631276676806449562
            var_16 = 3;
            OP_PUSH5_C 4665213608973104579, -4580091507822779433, 4668859369628484239, 4665760121227690639, -4587305359632152658
            var_24 = 4668869023340576113;
            var_32 = 30;
            pri = EvCameraMove(var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32, var_-40)
            var_40 = 0;
            var_48 = 3;
            var_56 = 0;
            var_64 = 100;
            var_72 = -1;
            var_80 = 7153758573374540080;
            var_88 = var_8;
            var_96 = 56;
            pri = fun_1440(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
            var_104 = 0;
            pri = fun_17D0()
            var_112 = 1;
            var_120 = 8;
            pri = fun_1588(var_112)
            var_128 = 0;
            pri = fun_1648()
            var_136 = 0;
            var_144 = 0;
            var_152 = 0;
            var_160 = var_8;
            var_168 = 32;
            pri = fun_5330(var_160, var_152, var_144, var_136)
            var_176 = 3;
            var_184 = 55;
            pri = EvCameraEnd(var_184, var_176)
            OP_JUMP switch_6740_case_default
        }
    }
}
