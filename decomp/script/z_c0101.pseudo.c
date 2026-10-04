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
    var_32 = arg_0;
    pri = SetFieldObjectAngleToTargetPosition_(var_32, var_24, var_16, var_8)
    return pri;
}
// fun_02C8
fun_02C8() {
    pri = arg_1;
    OP_NOT 
    var_8 = pri;
    var_16 = arg_0;
    pri = SetFieldObjectTerrainHieghtAdjustFlag_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0318
fun_0318() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectActiveDynamicCollision_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0358
fun_0358() {
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
// fun_03D0
fun_03D0() {
    var_8 = arg_4;
    var_16 = arg_5;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartPathMove_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0428
fun_0428() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0478
fun_0478() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0948(var_8)
    OP_JZER lab_04F0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0978(var_24)
    OP_JNZ lab_04F0
    pri = 0;
    return pri;
// lab_04F0
    OP_JUMP lab_0500
// lab_0500
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0560
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0560
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0500
    pri = 0;
    return pri;
}
// fun_05A0
fun_05A0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_05D8
fun_05D8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0618
fun_0618() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0650
fun_0650() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0698
    pri = 0;
    return pri;
// lab_0698
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_06D8
// lab_06D8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0948(var_8)
    OP_JNZ lab_0760
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0750
    pri = 0;
    return pri;
// lab_0760
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_07A8
    pri = 0;
    return pri;
// lab_07A8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0808
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0850(var_8)
    pri = 0;
    return pri;
// lab_0808
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_06D8
    pri = 0;
    return pri;
// lab_0750
    OP_JUMP lab_07A8
}
// fun_0850
fun_0850() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0888
fun_0888() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_08C8
fun_08C8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0908
fun_0908() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0948
fun_0948() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0978
fun_0978() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_09A8
fun_09A8() {
    OP_JUMP lab_09C0
// lab_09C0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0A50
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0A40
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0650(var_8)
    pri = 0;
    return pri;
// lab_0A50
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0AE0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0AD0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0650(var_8)
    pri = 0;
    return pri;
// lab_0AE0
    pri = 0;
    return pri;
// lab_0AD0
    OP_JUMP lab_0AF0
// lab_0AF0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_09C0
    pri = 0;
    return pri;
// lab_0A40
    OP_JUMP lab_0AF0
}
// fun_0B30
fun_0B30() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0650(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_09A8(var_40)
    pri = 0;
    return pri;
}
// fun_0BB8
fun_0BB8() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_0BE8
fun_0BE8() {
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
// switch_1200
        case default:
        {
// switch_1200_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1248
// lab_1248
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
            OP_JNZ lab_12F0
            var_88 = 0;
            pri = fun_14A8()
// lab_12F0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1200_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0DE8
                case default:
                {
// switch_0DE8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0E60
// lab_0E60
                    OP_JUMP lab_1248
                }
                case 0x0:
                {
// switch_0DE8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0E60
                }
                case 0x1:
                {
// switch_0DE8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0E60
                }
                case 0x2:
                {
// switch_0DE8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0E60
                }
                case 0x3:
                {
// switch_0DE8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0E60
                }
                case 0x4:
                {
// switch_0DE8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0E60
                }
                case 0x5:
                {
// switch_0DE8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0E60
                }
            }
        }
        case 0x65:
        {
// switch_1200_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_0FA0
                case default:
                {
// switch_0FA0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1018
// lab_1018
                    OP_JUMP lab_1248
                }
                case 0x0:
                {
// switch_0FA0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1018
                }
                case 0x1:
                {
// switch_0FA0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1018
                }
                case 0x2:
                {
// switch_0FA0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1018
                }
                case 0x3:
                {
// switch_0FA0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1018
                }
                case 0x4:
                {
// switch_0FA0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1018
                }
                case 0x5:
                {
// switch_0FA0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1018
                }
            }
        }
        case 0x66:
        {
// switch_1200_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1158
                case default:
                {
// switch_1158_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_11D0
// lab_11D0
                    OP_JUMP lab_1248
                }
                case 0x0:
                {
// switch_1158_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_11D0
                }
                case 0x1:
                {
// switch_1158_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_11D0
                }
                case 0x2:
                {
// switch_1158_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_11D0
                }
                case 0x3:
                {
// switch_1158_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_11D0
                }
                case 0x4:
                {
// switch_1158_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_11D0
                }
                case 0x5:
                {
// switch_1158_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_11D0
                }
            }
        }
    }
}
// fun_1308
fun_1308() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0618(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_13B0
    pri = 1;
    return pri;
// lab_13B0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_13F8
fun_13F8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1448
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1308(var_8)
    arg_2 = pri;
// lab_1448
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0BE8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_14A8
fun_14A8() {
    OP_JUMP lab_14C0
// lab_14C0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1500
    pri = 0;
    return pri;
// lab_1500
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_14C0
    pri = 0;
    return pri;
}
// fun_1540
fun_1540() {
    var_8 = 0;
    pri = fun_14A8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_15F0
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_15F0
    pri = 0;
    return pri;
}
// fun_1600
fun_1600() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1630
fun_1630() {
    pri = arg_4;
    OP_JNZ lab_1668
    var_8 = 0;
    pri = fun_0888()
// lab_1668
    pri = arg_1;
    switch (pri) {
// switch_2A40
        case default:
        {
// switch_2A40_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 856;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0948(var_264)
            OP_JZER lab_3008
            pri = arg_3;
            switch (pri) {
// switch_2FB0
                case default:
                {
// switch_2FB0_case_default
                    OP_JUMP lab_32C0
// lab_32C0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_3330
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_3330
                    var_8 = 0;
                    pri = fun_08C8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_2FB0_case_0x1
                    var_8 = 32;
                    var_16 = 1008;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_2FB0_case_default
                }
                case 0x2:
                {
// switch_2FB0_case_0x2
                    var_8 = 32;
                    var_16 = 1112;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_2FB0_case_default
                }
                case 0x3:
                {
// switch_2FB0_case_0x3
                    var_8 = 32;
                    var_16 = 912;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_2FB0_case_default
                }
            }
// lab_3008
            pri = arg_1;
            OP_JZER lab_3058
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_3058
            pri = 0;
            OP_JUMP lab_3060
// lab_3058
            pri = 1;
// lab_3060
            OP_JZER lab_30C8
            var_8 = 1208;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0618(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_30C8
            pri = 1;
            OP_JUMP lab_30D0
// lab_30C8
            pri = 0;
// lab_30D0
            OP_JZER lab_3120
            var_8 = 32;
            var_16 = 1304;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_32C0
// lab_3120
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_3188
            var_8 = 32;
            var_16 = 1464;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_32C0
// lab_3188
            var_16 = 1584;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0618(var_24, var_16)
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
// switch_2A40_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x1:
        {
// switch_2A40_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x2:
        {
// switch_2A40_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x3:
        {
// switch_2A40_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x4:
        {
// switch_2A40_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x5:
        {
// switch_2A40_case_0x5
            var_8 = 1;
            var_16 = 336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_05D8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0850(var_40)
            OP_JUMP switch_2A40_case_default
        }
        case 0x6:
        {
// switch_2A40_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x7:
        {
// switch_2A40_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x8:
        {
// switch_2A40_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x9:
        {
// switch_2A40_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0xa:
        {
// switch_2A40_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0xb:
        {
// switch_2A40_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0xc:
        {
// switch_2A40_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0xd:
        {
// switch_2A40_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0xe:
        {
// switch_2A40_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0xf:
        {
// switch_2A40_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x10:
        {
// switch_2A40_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x11:
        {
// switch_2A40_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x12:
        {
// switch_2A40_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x13:
        {
// switch_2A40_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x14:
        {
// switch_2A40_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x15:
        {
// switch_2A40_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x16:
        {
// switch_2A40_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x17:
        {
// switch_2A40_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x18:
        {
// switch_2A40_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x19:
        {
// switch_2A40_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x1a:
        {
// switch_2A40_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x1b:
        {
// switch_2A40_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x1c:
        {
// switch_2A40_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x1d:
        {
// switch_2A40_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x1e:
        {
// switch_2A40_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x1f:
        {
// switch_2A40_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x20:
        {
// switch_2A40_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x21:
        {
// switch_2A40_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x22:
        {
// switch_2A40_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x23:
        {
// switch_2A40_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x24:
        {
// switch_2A40_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x25:
        {
// switch_2A40_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x26:
        {
// switch_2A40_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x27:
        {
// switch_2A40_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x28:
        {
// switch_2A40_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x29:
        {
// switch_2A40_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x2a:
        {
// switch_2A40_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x2b:
        {
// switch_2A40_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x2c:
        {
// switch_2A40_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x2d:
        {
// switch_2A40_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x2e:
        {
// switch_2A40_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x2f:
        {
// switch_2A40_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x30:
        {
// switch_2A40_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x31:
        {
// switch_2A40_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x32:
        {
// switch_2A40_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x33:
        {
// switch_2A40_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x34:
        {
// switch_2A40_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x35:
        {
// switch_2A40_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x36:
        {
// switch_2A40_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x37:
        {
// switch_2A40_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x38:
        {
// switch_2A40_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x39:
        {
// switch_2A40_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x3a:
        {
// switch_2A40_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x3b:
        {
// switch_2A40_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x3c:
        {
// switch_2A40_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 432;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x3d:
        {
// switch_2A40_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 608;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
        case 0x3e:
        {
// switch_2A40_case_0x3e
            var_8 = 3;
            var_16 = 752;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_05D8(var_24, var_16, var_8)
            OP_JUMP switch_2A40_case_default
        }
    }
}
// fun_3360
fun_3360() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_3460
        case default:
        {
// switch_3460_case_default
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
// switch_3460_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_3460_case_default
        }
        case 0x1:
        {
// switch_3460_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_3460_case_default
        }
        case 0x2:
        {
// switch_3460_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_3460_case_default
        }
        case 0x3:
        {
// switch_3460_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_3460_case_default
        }
    }
}
// fun_3520
fun_3520() {
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
    pri = fun_13F8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_14A8()
    pri = 0;
    return pri;
}
// fun_35B8
fun_35B8() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_3360(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_3520(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_3660
fun_3660() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_36B0
// lab_36B0
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 1752;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_3728
    OP_JUMP lab_3758
// lab_3728
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_36B0
// lab_3758
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_37E0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_1630(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0BB8(var_56)
// lab_37E0
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_3848
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0908(var_24, var_16)
// lab_3848
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0908(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_3908
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0650(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0428(var_88, var_80, var_72, var_64, var_56)
// lab_3908
    pri = IsPlayerRideBicycle()
    OP_JZER lab_3948
    pri = 0;
    return pri;
// lab_3948
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_3A90
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 1872;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_05A0(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_3A58
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_3A90
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0478(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0478(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0650(var_40)
    pri = 0;
    return pri;
// lab_3A58
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0908(var_16, var_8)
}
// fun_3B18
fun_3B18() {
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
    pri = fun_35B8(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1540(var_112)
    var_128 = 0;
    pri = fun_1600()
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
    pri = fun_3660(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_3C90
fun_3C90() {
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    OP_LOAD_P_S_ALT 24
    OP_JSLESS lab_3CE8
    pri = arg_2;
    return pri;
// lab_3CE8
    pri = arg_1;
    return pri;
}
// fun_3CF8
fun_3CF8() {
    pri = g_mode;
    switch (pri) {
// switch_3F20
        case default:
        {
// switch_3F20_case_default
            pri = CommandNOP()
            OP_JUMP lab_3FF8
// lab_3FF8
            pri = 0;
            return pri;
        }
        case 0x9e5a105bd9a8b8b4:
        {
// switch_3F20_case_0x9e5a105bd9a8b8b4
            var_8 = 0;
            pri = fun_4670()
            OP_JUMP lab_3FF8
        }
        case 0xa0d2b01f596f5985:
        {
// switch_3F20_case_0xa0d2b01f596f5985
            var_8 = 0;
            pri = fun_4048()
            OP_JUMP lab_3FF8
        }
        case 0xbaf72336e9109099:
        {
// switch_3F20_case_0xbaf72336e9109099
            var_8 = 0;
            pri = fun_4A20()
            OP_JUMP lab_3FF8
        }
        case 0xde3b2e64024fcd34:
        {
// switch_3F20_case_0xde3b2e64024fcd34
            var_8 = 0;
            pri = fun_4710()
            OP_JUMP lab_3FF8
        }
        case 0xde3b3164024fd24d:
        {
// switch_3F20_case_0xde3b3164024fd24d
            var_8 = 0;
            pri = fun_4898()
            OP_JUMP lab_3FF8
        }
        case 0xf78e3741024ebc61:
        {
// switch_3F20_case_0xf78e3741024ebc61
            var_8 = 0;
            pri = fun_4B98()
            OP_JUMP lab_3FF8
        }
        case 0xfcb00b812d933dae:
        {
// switch_3F20_case_0xfcb00b812d933dae
            var_8 = 0;
            pri = fun_45D0()
            OP_JUMP lab_3FF8
        }
        case 0x0:
        {
// switch_3F20_case_0x0
            var_8 = 0;
            pri = fun_4008()
            OP_JUMP lab_3FF8
        }
        case 0x188731d0019434b7:
        {
// switch_3F20_case_0x188731d0019434b7
            var_8 = 0;
            pri = fun_4620()
            OP_JUMP lab_3FF8
        }
        case 0x4fedf3950a38f521:
        {
// switch_3F20_case_0x4fedf3950a38f521
            var_8 = 0;
            pri = fun_46C0()
            OP_JUMP lab_3FF8
        }
        case 0x58c89d5b3a4ce506:
        {
// switch_3F20_case_0x58c89d5b3a4ce506
            var_8 = 0;
            pri = fun_4AA8()
            OP_JUMP lab_3FF8
        }
        case 0x7585c0a56f32f444:
        {
// switch_3F20_case_0x7585c0a56f32f444
            var_8 = 0;
            pri = fun_4060()
            OP_JUMP lab_3FF8
        }
    }
}
// fun_4008
fun_4008() {
    pri = 0;
    return pri;
}
// public GetSceneChangeData
public GetSceneChangeData() {
    alt = 2008;
    pri = arg_0;
    OP_LIDX_P_B 3
    return pri;
}
// fun_4048
fun_4048() {
    pri = 0;
    return pri;
}
// fun_4060
fun_4060() {
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 418
    OP_JZER lab_4100
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 4979663873755384896;
    pri = GlobalCall(var_48, var_40, var_32, var_24, var_16)
    OP_JUMP lab_4100
// lab_4100
    pri = 0;
    return pri;
}
// fun_4110
fun_4110() {
    var_16 = arg_1;
    var_24 = arg_0;
    pri = GetElevatorC1LocTranslationX_(var_24, var_16)
    var_8 = pri;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = GetElevatorC1LocTranslationZ_(var_48, var_40)
    var_16 = pri;
    var_56 = 1;
    var_64 = var_16;
    var_72 = var_8;
    var_80 = 8802641224559852288;
    var_88 = 32;
    pri = fun_0280(var_80, var_72, var_64, var_56)
    var_96 = 1;
    var_104 = 8802641224559852288;
    var_112 = 16;
    pri = fun_02C8(var_104, var_96)
    var_120 = 2144;
    var_128 = arg_0;
    var_136 = 16;
    pri = fun_05A0(var_128, var_120)
    var_144 = 0;
    var_152 = 0;
    var_160 = 4641240890982006784;
    var_168 = 0;
    var_176 = 0;
    var_184 = var_16;
    var_192 = var_8;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_200 = 72;
    pri = fun_0358(var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128)
    var_208 = 8802641224559852288;
    var_216 = 8;
    pri = fun_0478(var_208)
    pri = IsPlayerRideBicycle()
    var_24 = pri;
    pri = var_24;
    OP_JZER lab_4320
    var_232 = 0;
    var_240 = 2;
    var_248 = 16;
    pri = fun_0B30(var_240, var_232)
// lab_4320
    var_8 = arg_1;
    var_16 = 8802641224559852288;
    var_24 = arg_0;
    pri = CallElevatorC1Gimmick_(var_24, var_16, var_8)
    var_32 = 2256;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_05A0(var_40, var_32)
    var_56 = 0;
    var_64 = 8802641224559852288;
    var_72 = 16;
    pri = fun_0318(var_64, var_56)
    var_88 = arg_2;
    pri = GetZonePlacementHash(var_88)
    var_32 = pri;
    var_96 = 1;
    var_104 = 4596373779694328218;
    var_112 = -1;
    var_120 = 4611686018427387904;
    var_128 = var_32;
    var_136 = 8802641224559852288;
    var_144 = 48;
    pri = fun_03D0(var_136, var_128, var_120, var_112, var_104, var_96)
    var_152 = 8802641224559852288;
    var_160 = 8;
    pri = fun_0478(var_152)
    pri = var_24;
    OP_JZER lab_44D0
    var_168 = 8802641224559852288;
    var_176 = 8;
    pri = fun_0650(var_168)
    var_184 = 0;
    var_192 = 1;
    pri = RequestPlayerRideBicycle(var_192, var_184)
// lab_44D0
    var_8 = 1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0318(var_16, var_8)
    var_32 = 0;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_02C8(var_40, var_32)
    var_56 = 2360;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_05A0(var_64, var_56)
    pri = var_24;
    OP_JZER lab_45B8
    var_80 = 1;
    var_88 = 8;
    pri = fun_09A8(var_80)
    var_96 = 8802641224559852288;
    var_104 = 8;
    pri = fun_0650(var_96)
// lab_45B8
    pri = 0;
    return pri;
}
// fun_45D0
fun_45D0() {
    var_8 = 2600;
    var_16 = 2456;
    var_24 = -8124396788174858245;
    var_32 = 24;
    pri = fun_4110(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4620
fun_4620() {
    var_8 = 2904;
    var_16 = 2760;
    var_24 = -8124396788174858245;
    var_32 = 24;
    pri = fun_4110(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4670
fun_4670() {
    var_8 = 3224;
    var_16 = 3080;
    var_24 = -8124395688663230034;
    var_32 = 24;
    pri = fun_4110(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_46C0
fun_46C0() {
    var_8 = 3528;
    var_16 = 3384;
    var_24 = -8124395688663230034;
    var_32 = 24;
    pri = fun_4110(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4710
fun_4710() {
    var_8 = -9019446742694110882;
    pri = FlagGet(var_8)
    OP_JZER lab_47D0
    var_16 = 1;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 0;
    var_64 = 0;
    var_72 = 1;
    var_80 = 1;
    var_88 = -8650808068466657001;
    var_96 = 80;
    pri = fun_3B18(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    OP_JUMP lab_4888
// lab_47D0
    OP_PUSH2_C -8650809167978285212, -8650805869443400579
    var_16 = 480;
    var_24 = 24;
    pri = fun_3C90(var_16, var_8, var_0)
    var_8 = pri;
    var_32 = 1;
    var_40 = 3;
    var_48 = 0;
    var_56 = 100;
    var_64 = -1;
    var_72 = 0;
    var_80 = 0;
    var_88 = 1;
    var_96 = 1;
    var_104 = var_8;
    var_112 = 80;
    pri = fun_3B18(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
// lab_4888
    pri = 0;
    return pri;
}
// fun_4898
fun_4898() {
    var_8 = -9019446742694110882;
    pri = FlagGet(var_8)
    OP_JZER lab_4958
    var_16 = 1;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 0;
    var_64 = 0;
    var_72 = 1;
    var_80 = 1;
    var_88 = 6623563456728334414;
    var_96 = 80;
    pri = fun_3B18(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    OP_JUMP lab_4A10
// lab_4958
    OP_PUSH2_C 6623564556239962625, 6623561257705077992
    var_16 = 480;
    var_24 = 24;
    pri = fun_3C90(var_16, var_8, var_0)
    var_8 = pri;
    var_32 = 1;
    var_40 = 3;
    var_48 = 0;
    var_56 = 100;
    var_64 = -1;
    var_72 = 0;
    var_80 = 0;
    var_88 = 1;
    var_96 = 1;
    var_104 = var_8;
    var_112 = 80;
    pri = fun_3B18(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
// lab_4A10
    pri = 0;
    return pri;
}
// fun_4A20
fun_4A20() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 6019300203597460005;
    var_88 = 80;
    pri = fun_3B18(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4AA8
fun_4AA8() {
    var_8 = -4883040369995537269;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_4B48
    var_16 = 3704;
    var_24 = 8802641224559852288;
    pri = IsAnimationStateName_(var_24, var_16)
    OP_JZER lab_4B48
    pri = 1;
    OP_JUMP lab_4B50
// lab_4B48
    pri = 0;
// lab_4B50
    OP_JZER lab_4B88
    var_8 = -3984747864468851993;
    pri = ReserveScript(var_8)
// lab_4B88
    pri = 0;
    return pri;
}
// fun_4B98
fun_4B98() {
    var_8 = -4883040369995537269;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_4C70
    var_16 = 4420545685523217190;
    pri = FlagGet(var_16)
    OP_JNZ lab_4C70
    var_24 = 3840;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JZER lab_4C70
    pri = 1;
    OP_JUMP lab_4C78
// lab_4C70
    pri = 0;
// lab_4C78
    OP_JZER lab_4CB0
    var_8 = -8671752420955643178;
    pri = ReserveScript(var_8)
// lab_4CB0
    pri = 0;
    return pri;
}
