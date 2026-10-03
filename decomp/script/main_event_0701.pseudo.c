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
// fun_02F0
fun_02F0() {
    OP_JUMP lab_0308
// lab_0308
    pri = FadeWait_()
    OP_JZER lab_0340
    pri = 0;
    return pri;
// lab_0340
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0308
    pri = 0;
    return pri;
}
// fun_0380
fun_0380() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_03A8
fun_03A8() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
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
    pri = fun_0900(var_8)
    OP_JZER lab_04A8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0930(var_24)
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
    pri = fun_0900(var_8)
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
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0880
fun_0880() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_08C0
fun_08C0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0900
fun_0900() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0930
fun_0930() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0960
fun_0960() {
    OP_JUMP lab_0978
// lab_0978
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0A08
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_09F8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0608(var_8)
    pri = 0;
    return pri;
// lab_0A08
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0A98
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0A88
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0608(var_8)
    pri = 0;
    return pri;
// lab_0A98
    pri = 0;
    return pri;
// lab_0A88
    OP_JUMP lab_0AA8
// lab_0AA8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0978
    pri = 0;
    return pri;
// lab_09F8
    OP_JUMP lab_0AA8
}
// fun_0AE8
fun_0AE8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0608(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0960(var_40)
    pri = 0;
    return pri;
}
// fun_0B70
fun_0B70() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_0BA8
fun_0BA8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_0BD0
fun_0BD0() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_0C00
fun_0C00() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_0C38
fun_0C38() {
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
// switch_1250
        case default:
        {
// switch_1250_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1298
// lab_1298
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
            OP_JNZ lab_1340
            var_88 = 0;
            pri = fun_14F8()
// lab_1340
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1250_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0E38
                case default:
                {
// switch_0E38_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0EB0
// lab_0EB0
                    OP_JUMP lab_1298
                }
                case 0x0:
                {
// switch_0E38_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0EB0
                }
                case 0x1:
                {
// switch_0E38_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0EB0
                }
                case 0x2:
                {
// switch_0E38_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0EB0
                }
                case 0x3:
                {
// switch_0E38_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0EB0
                }
                case 0x4:
                {
// switch_0E38_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0EB0
                }
                case 0x5:
                {
// switch_0E38_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0EB0
                }
            }
        }
        case 0x65:
        {
// switch_1250_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_0FF0
                case default:
                {
// switch_0FF0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1068
// lab_1068
                    OP_JUMP lab_1298
                }
                case 0x0:
                {
// switch_0FF0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1068
                }
                case 0x1:
                {
// switch_0FF0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1068
                }
                case 0x2:
                {
// switch_0FF0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1068
                }
                case 0x3:
                {
// switch_0FF0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1068
                }
                case 0x4:
                {
// switch_0FF0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1068
                }
                case 0x5:
                {
// switch_0FF0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1068
                }
            }
        }
        case 0x66:
        {
// switch_1250_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_11A8
                case default:
                {
// switch_11A8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1220
// lab_1220
                    OP_JUMP lab_1298
                }
                case 0x0:
                {
// switch_11A8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1220
                }
                case 0x1:
                {
// switch_11A8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1220
                }
                case 0x2:
                {
// switch_11A8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1220
                }
                case 0x3:
                {
// switch_11A8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1220
                }
                case 0x4:
                {
// switch_11A8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1220
                }
                case 0x5:
                {
// switch_11A8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1220
                }
            }
        }
    }
}
// fun_1358
fun_1358() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_05D0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1400
    pri = 1;
    return pri;
// lab_1400
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1448
fun_1448() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1498
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1358(var_8)
    arg_2 = pri;
// lab_1498
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0C38(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_14F8
fun_14F8() {
    OP_JUMP lab_1510
// lab_1510
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1550
    pri = 0;
    return pri;
// lab_1550
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1510
    pri = 0;
    return pri;
}
// fun_1590
fun_1590() {
    var_8 = 0;
    pri = fun_14F8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1640
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_1640
    pri = 0;
    return pri;
}
// fun_1650
fun_1650() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1680
fun_1680() {
    pri = arg_4;
    OP_JNZ lab_16B8
    var_8 = 0;
    pri = fun_0840()
// lab_16B8
    pri = arg_1;
    switch (pri) {
// switch_2A90
        case default:
        {
// switch_2A90_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 856;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0900(var_264)
            OP_JZER lab_3058
            pri = arg_3;
            switch (pri) {
// switch_3000
                case default:
                {
// switch_3000_case_default
                    OP_JUMP lab_3310
// lab_3310
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_3380
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_3380
                    var_8 = 0;
                    pri = fun_0880()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_3000_case_0x1
                    var_8 = 32;
                    var_16 = 1008;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_3000_case_default
                }
                case 0x2:
                {
// switch_3000_case_0x2
                    var_8 = 32;
                    var_16 = 1112;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_3000_case_default
                }
                case 0x3:
                {
// switch_3000_case_0x3
                    var_8 = 32;
                    var_16 = 912;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_3000_case_default
                }
            }
// lab_3058
            pri = arg_1;
            OP_JZER lab_30A8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_30A8
            pri = 0;
            OP_JUMP lab_30B0
// lab_30A8
            pri = 1;
// lab_30B0
            OP_JZER lab_3118
            var_8 = 1208;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_05D0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_3118
            pri = 1;
            OP_JUMP lab_3120
// lab_3118
            pri = 0;
// lab_3120
            OP_JZER lab_3170
            var_8 = 32;
            var_16 = 1304;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3310
// lab_3170
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_31D8
            var_8 = 32;
            var_16 = 1464;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3310
// lab_31D8
            var_16 = 1584;
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
// switch_2A90_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x1:
        {
// switch_2A90_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x2:
        {
// switch_2A90_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x3:
        {
// switch_2A90_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x4:
        {
// switch_2A90_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x5:
        {
// switch_2A90_case_0x5
            var_8 = 1;
            var_16 = 336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0590(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0808(var_40)
            OP_JUMP switch_2A90_case_default
        }
        case 0x6:
        {
// switch_2A90_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x7:
        {
// switch_2A90_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x8:
        {
// switch_2A90_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x9:
        {
// switch_2A90_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0xa:
        {
// switch_2A90_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0xb:
        {
// switch_2A90_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0xc:
        {
// switch_2A90_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0xd:
        {
// switch_2A90_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0xe:
        {
// switch_2A90_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0xf:
        {
// switch_2A90_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x10:
        {
// switch_2A90_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x11:
        {
// switch_2A90_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x12:
        {
// switch_2A90_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x13:
        {
// switch_2A90_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x14:
        {
// switch_2A90_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x15:
        {
// switch_2A90_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x16:
        {
// switch_2A90_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x17:
        {
// switch_2A90_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x18:
        {
// switch_2A90_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x19:
        {
// switch_2A90_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x1a:
        {
// switch_2A90_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x1b:
        {
// switch_2A90_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x1c:
        {
// switch_2A90_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x1d:
        {
// switch_2A90_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x1e:
        {
// switch_2A90_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x1f:
        {
// switch_2A90_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x20:
        {
// switch_2A90_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x21:
        {
// switch_2A90_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x22:
        {
// switch_2A90_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x23:
        {
// switch_2A90_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x24:
        {
// switch_2A90_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x25:
        {
// switch_2A90_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x26:
        {
// switch_2A90_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x27:
        {
// switch_2A90_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x28:
        {
// switch_2A90_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x29:
        {
// switch_2A90_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x2a:
        {
// switch_2A90_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x2b:
        {
// switch_2A90_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x2c:
        {
// switch_2A90_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x2d:
        {
// switch_2A90_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x2e:
        {
// switch_2A90_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x2f:
        {
// switch_2A90_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x30:
        {
// switch_2A90_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x31:
        {
// switch_2A90_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x32:
        {
// switch_2A90_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x33:
        {
// switch_2A90_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x34:
        {
// switch_2A90_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x35:
        {
// switch_2A90_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x36:
        {
// switch_2A90_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x37:
        {
// switch_2A90_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x38:
        {
// switch_2A90_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x39:
        {
// switch_2A90_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x3a:
        {
// switch_2A90_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x3b:
        {
// switch_2A90_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x3c:
        {
// switch_2A90_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 432;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x3d:
        {
// switch_2A90_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 608;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x3e:
        {
// switch_2A90_case_0x3e
            var_8 = 3;
            var_16 = 752;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0590(var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
    }
}
// fun_33B0
fun_33B0() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_34B0
        case default:
        {
// switch_34B0_case_default
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
// switch_34B0_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_34B0_case_default
        }
        case 0x1:
        {
// switch_34B0_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_34B0_case_default
        }
        case 0x2:
        {
// switch_34B0_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_34B0_case_default
        }
        case 0x3:
        {
// switch_34B0_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_34B0_case_default
        }
    }
}
// fun_3570
fun_3570() {
    var_8 = 0;
    var_16 = arg_5;
    pri = arg_4;
    alt = 2;
    pri |= alt;
    var_24 = pri;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1448(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_14F8()
    pri = 0;
    return pri;
}
// fun_3608
fun_3608() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_33B0(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_3570(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_36B0
fun_36B0() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_3700
// lab_3700
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 1752;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_3778
    OP_JUMP lab_37A8
// lab_3778
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_3700
// lab_37A8
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_3830
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_1680(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0BD0(var_56)
// lab_3830
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_3898
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_08C0(var_24, var_16)
// lab_3898
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_08C0(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_3958
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
// lab_3958
    pri = IsPlayerRideBicycle()
    OP_JZER lab_3998
    pri = 0;
    return pri;
// lab_3998
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_3AE0
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 1872;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0558(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_3AA8
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_3AE0
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
// lab_3AA8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_08C0(var_16, var_8)
}
// fun_3B68
fun_3B68() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = arg_9;
    var_32 = arg_8;
    var_40 = arg_7;
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = var_8;
    var_104 = 88;
    pri = fun_3608(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1590(var_112)
    var_128 = 0;
    pri = fun_1650()
    var_144 = 13;
    pri = TempWorkGet(var_144)
    var_152 = pri;
    pri = float(var_152)
    var_16 = pri;
    var_160 = arg_4;
    var_168 = var_16;
    var_176 = arg_3;
    var_184 = var_8;
    var_192 = 32;
    pri = fun_36B0(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_3CE0
fun_3CE0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_3D78
    var_8 = 1;
    var_16 = 0;
    var_24 = 2008;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0280(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_02F0()
    var_56 = 0;
    pri = fun_0BA8()
// lab_3D78
    pri = arg_4;
    OP_JZER lab_3DB0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0C00(var_8)
// lab_3DB0
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_3E08
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_3E08
    pri = 0;
    OP_JUMP lab_3E10
// lab_3E08
    pri = 1;
// lab_3E10
    OP_JZER lab_3ED8
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_3ED8
    var_16 = 0;
    pri = fun_0380()
    OP_JZER lab_3EB0
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_0AE8(var_32, var_24)
    OP_JUMP lab_3ED8
// lab_3ED8
    pri = arg_2;
    OP_JZER lab_3FB0
    var_8 = 0;
    pri = fun_0380()
    OP_JZER lab_3F80
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_08C0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_03A8(var_40)
    OP_JUMP lab_3FB0
// lab_3FB0
    pri = arg_3;
    OP_JZER lab_3FE8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0B70(var_8)
// lab_3FE8
    pri = 0;
    return pri;
// lab_3F80
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_08C0(var_16, var_8)
// lab_3EB0
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0AE8(var_16, var_8)
}
// fun_3FF8
fun_3FF8() {
    pri = g_mode;
    switch (pri) {
// switch_4108
        case default:
        {
// switch_4108_case_default
            pri = CommandNOP()
            OP_JUMP lab_4170
// lab_4170
            pri = 0;
            return pri;
        }
        case 0xaf4c4b22159b2b1c:
        {
// switch_4108_case_0xaf4c4b22159b2b1c
            var_8 = 0;
            pri = fun_4280()
            OP_JUMP lab_4170
        }
        case 0x0:
        {
// switch_4108_case_0x0
            var_8 = 0;
            pri = fun_4180()
            OP_JUMP lab_4170
        }
        case 0x234481aaf802ba6:
        {
// switch_4108_case_0x234481aaf802ba6
            var_8 = 0;
            pri = fun_43B8()
            OP_JUMP lab_4170
        }
        case 0x15cb41eec8b8ab45:
        {
// switch_4108_case_0x15cb41eec8b8ab45
            var_8 = 0;
            pri = fun_4440()
            OP_JUMP lab_4170
        }
        case 0x4b5aa91e6350f778:
        {
// switch_4108_case_0x4b5aa91e6350f778
            var_8 = 0;
            pri = fun_4370()
            OP_JUMP lab_4170
        }
    }
}
// fun_4180
fun_4180() {
    pri = 0;
    return pri;
}
// fun_4198
fun_4198() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_3CE0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_41F0
fun_41F0() {
    pri = 0;
    return pri;
}
// fun_4208
fun_4208() {
    pri = 0;
    return pri;
}
// fun_4220
fun_4220() {
    pri = 0;
    return pri;
}
// fun_4238
fun_4238() {
    pri = 0;
    return pri;
}
// fun_4250
fun_4250() {
    pri = 0;
    return pri;
}
// fun_4268
fun_4268() {
    pri = 0;
    return pri;
}
// fun_4280
fun_4280() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_4198()
    var_16 = 0;
    pri = fun_41F0()
    var_24 = 0;
    pri = fun_4208()
    var_32 = 0;
    pri = fun_4220()
    var_40 = 0;
    pri = fun_4238()
    var_48 = 0;
    pri = fun_4250()
    var_56 = 0;
    pri = fun_4268()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_4370
fun_4370() {
    var_8 = 0;
    pri = fun_41F0()
    var_16 = 0;
    pri = fun_4250()
    pri = 0;
    return pri;
}
// fun_43B8
fun_43B8() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 1099578556163859800;
    var_88 = 80;
    pri = fun_3B68(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4440
fun_4440() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -5217784281169254993;
    var_88 = 80;
    pri = fun_3B68(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
