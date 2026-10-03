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
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0328
fun_0328() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0850(var_8)
    OP_JZER lab_03A0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0880(var_24)
    OP_JNZ lab_03A0
    pri = 0;
    return pri;
// lab_03A0
    OP_JUMP lab_03B0
// lab_03B0
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0410
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0410
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_03B0
    pri = 0;
    return pri;
}
// fun_0450
fun_0450() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0488
fun_0488() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_04C8
fun_04C8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0500
fun_0500() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0548
    pri = 0;
    return pri;
// lab_0548
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0588
// lab_0588
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0850(var_8)
    OP_JNZ lab_0610
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0600
    pri = 0;
    return pri;
// lab_0610
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0658
    pri = 0;
    return pri;
// lab_0658
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_06B8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0700(var_8)
    pri = 0;
    return pri;
// lab_06B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0588
    pri = 0;
    return pri;
// lab_0600
    OP_JUMP lab_0658
}
// fun_0700
fun_0700() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0738
fun_0738() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0778
fun_0778() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_07B8
fun_07B8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0810
fun_0810() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0850
fun_0850() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0880
fun_0880() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_08B0
fun_08B0() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_08E0
fun_08E0() {
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
// switch_0EF8
        case default:
        {
// switch_0EF8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_0F40
// lab_0F40
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
            OP_JNZ lab_0FE8
            var_88 = 0;
            pri = fun_11A0()
// lab_0FE8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_0EF8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0AE0
                case default:
                {
// switch_0AE0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0B58
// lab_0B58
                    OP_JUMP lab_0F40
                }
                case 0x0:
                {
// switch_0AE0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0B58
                }
                case 0x1:
                {
// switch_0AE0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0B58
                }
                case 0x2:
                {
// switch_0AE0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0B58
                }
                case 0x3:
                {
// switch_0AE0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0B58
                }
                case 0x4:
                {
// switch_0AE0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0B58
                }
                case 0x5:
                {
// switch_0AE0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0B58
                }
            }
        }
        case 0x65:
        {
// switch_0EF8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_0C98
                case default:
                {
// switch_0C98_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0D10
// lab_0D10
                    OP_JUMP lab_0F40
                }
                case 0x0:
                {
// switch_0C98_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_0D10
                }
                case 0x1:
                {
// switch_0C98_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_0D10
                }
                case 0x2:
                {
// switch_0C98_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_0D10
                }
                case 0x3:
                {
// switch_0C98_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0D10
                }
                case 0x4:
                {
// switch_0C98_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_0D10
                }
                case 0x5:
                {
// switch_0C98_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_0D10
                }
            }
        }
        case 0x66:
        {
// switch_0EF8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_0E50
                case default:
                {
// switch_0E50_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0EC8
// lab_0EC8
                    OP_JUMP lab_0F40
                }
                case 0x0:
                {
// switch_0E50_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_0EC8
                }
                case 0x1:
                {
// switch_0E50_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_0EC8
                }
                case 0x2:
                {
// switch_0E50_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_0EC8
                }
                case 0x3:
                {
// switch_0E50_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0EC8
                }
                case 0x4:
                {
// switch_0E50_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_0EC8
                }
                case 0x5:
                {
// switch_0E50_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_0EC8
                }
            }
        }
    }
}
// fun_1000
fun_1000() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_04C8(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_10A8
    pri = 1;
    return pri;
// lab_10A8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_10F0
fun_10F0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1140
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1000(var_8)
    arg_2 = pri;
// lab_1140
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_08E0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11A0
fun_11A0() {
    OP_JUMP lab_11B8
// lab_11B8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_11F8
    pri = 0;
    return pri;
// lab_11F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_11B8
    pri = 0;
    return pri;
}
// fun_1238
fun_1238() {
    var_8 = 0;
    pri = fun_11A0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_12E8
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_12E8
    pri = 0;
    return pri;
}
// fun_12F8
fun_12F8() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1328
fun_1328() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1360
fun_1360() {
    OP_JUMP lab_1378
// lab_1378
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_13C0
    OP_JUMP lab_13F0
    OP_JUMP lab_13E0
// lab_13C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_13F0
    pri = 0;
    return pri;
// lab_13E0
    OP_JUMP lab_1378
}
// fun_1400
fun_1400() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_1430
fun_1430() {
    pri = arg_4;
    OP_JNZ lab_1468
    var_8 = 0;
    pri = fun_0738()
// lab_1468
    pri = arg_1;
    switch (pri) {
// switch_2840
        case default:
        {
// switch_2840_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 856;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0850(var_264)
            OP_JZER lab_2E08
            pri = arg_3;
            switch (pri) {
// switch_2DB0
                case default:
                {
// switch_2DB0_case_default
                    OP_JUMP lab_30C0
// lab_30C0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_3130
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_3130
                    var_8 = 0;
                    pri = fun_0778()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_2DB0_case_0x1
                    var_8 = 32;
                    var_16 = 1008;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_2DB0_case_default
                }
                case 0x2:
                {
// switch_2DB0_case_0x2
                    var_8 = 32;
                    var_16 = 1112;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_2DB0_case_default
                }
                case 0x3:
                {
// switch_2DB0_case_0x3
                    var_8 = 32;
                    var_16 = 912;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_2DB0_case_default
                }
            }
// lab_2E08
            pri = arg_1;
            OP_JZER lab_2E58
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_2E58
            pri = 0;
            OP_JUMP lab_2E60
// lab_2E58
            pri = 1;
// lab_2E60
            OP_JZER lab_2EC8
            var_8 = 1208;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_04C8(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_2EC8
            pri = 1;
            OP_JUMP lab_2ED0
// lab_2EC8
            pri = 0;
// lab_2ED0
            OP_JZER lab_2F20
            var_8 = 32;
            var_16 = 1304;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_30C0
// lab_2F20
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_2F88
            var_8 = 32;
            var_16 = 1464;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_30C0
// lab_2F88
            var_16 = 1584;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_04C8(var_24, var_16)
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
// switch_2840_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x1:
        {
// switch_2840_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x2:
        {
// switch_2840_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x3:
        {
// switch_2840_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x4:
        {
// switch_2840_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x5:
        {
// switch_2840_case_0x5
            var_8 = 1;
            var_16 = 336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0488(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0700(var_40)
            OP_JUMP switch_2840_case_default
        }
        case 0x6:
        {
// switch_2840_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x7:
        {
// switch_2840_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x8:
        {
// switch_2840_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x9:
        {
// switch_2840_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0xa:
        {
// switch_2840_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0xb:
        {
// switch_2840_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0xc:
        {
// switch_2840_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0xd:
        {
// switch_2840_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0xe:
        {
// switch_2840_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0xf:
        {
// switch_2840_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x10:
        {
// switch_2840_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x11:
        {
// switch_2840_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x12:
        {
// switch_2840_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x13:
        {
// switch_2840_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x14:
        {
// switch_2840_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x15:
        {
// switch_2840_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x16:
        {
// switch_2840_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x17:
        {
// switch_2840_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x18:
        {
// switch_2840_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x19:
        {
// switch_2840_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x1a:
        {
// switch_2840_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x1b:
        {
// switch_2840_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x1c:
        {
// switch_2840_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x1d:
        {
// switch_2840_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x1e:
        {
// switch_2840_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x1f:
        {
// switch_2840_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x20:
        {
// switch_2840_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x21:
        {
// switch_2840_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x22:
        {
// switch_2840_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x23:
        {
// switch_2840_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x24:
        {
// switch_2840_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x25:
        {
// switch_2840_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x26:
        {
// switch_2840_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x27:
        {
// switch_2840_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x28:
        {
// switch_2840_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x29:
        {
// switch_2840_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x2a:
        {
// switch_2840_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x2b:
        {
// switch_2840_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x2c:
        {
// switch_2840_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x2d:
        {
// switch_2840_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x2e:
        {
// switch_2840_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x2f:
        {
// switch_2840_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x30:
        {
// switch_2840_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x31:
        {
// switch_2840_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x32:
        {
// switch_2840_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x33:
        {
// switch_2840_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x34:
        {
// switch_2840_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x35:
        {
// switch_2840_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x36:
        {
// switch_2840_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x37:
        {
// switch_2840_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x38:
        {
// switch_2840_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x39:
        {
// switch_2840_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x3a:
        {
// switch_2840_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x3b:
        {
// switch_2840_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x3c:
        {
// switch_2840_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 432;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x3d:
        {
// switch_2840_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 608;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
        case 0x3e:
        {
// switch_2840_case_0x3e
            var_8 = 3;
            var_16 = 752;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0488(var_24, var_16, var_8)
            OP_JUMP switch_2840_case_default
        }
    }
}
// fun_3160
fun_3160() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_3260
        case default:
        {
// switch_3260_case_default
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
// switch_3260_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_3260_case_default
        }
        case 0x1:
        {
// switch_3260_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_3260_case_default
        }
        case 0x2:
        {
// switch_3260_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_3260_case_default
        }
        case 0x3:
        {
// switch_3260_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_3260_case_default
        }
    }
}
// fun_3320
fun_3320() {
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
    pri = fun_10F0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_11A0()
    pri = 0;
    return pri;
}
// fun_33B8
fun_33B8() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_3160(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_3320(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_3460
fun_3460() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_34B0
// lab_34B0
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 1752;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_3528
    OP_JUMP lab_3558
// lab_3528
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_34B0
// lab_3558
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_35E0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_1430(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_08B0(var_56)
// lab_35E0
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_3648
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0810(var_24, var_16)
// lab_3648
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0810(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_3708
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0500(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0280(var_88, var_80, var_72, var_64, var_56)
// lab_3708
    pri = IsPlayerRideBicycle()
    OP_JZER lab_3748
    pri = 0;
    return pri;
// lab_3748
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_3890
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 1872;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0450(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_3858
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_3890
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0328(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0328(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0500(var_40)
    pri = 0;
    return pri;
// lab_3858
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0810(var_16, var_8)
}
// fun_3918
fun_3918() {
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
    pri = fun_33B8(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1238(var_112)
    var_128 = 0;
    pri = fun_12F8()
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
    pri = fun_3460(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_3A90
fun_3A90() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1328(var_8)
    var_24 = 0;
    pri = fun_1360()
    pri = arg_8;
    alt = 1;
    pri |= alt;
    arg_8 = pri;
    var_32 = arg_10;
    var_40 = arg_9;
    var_48 = arg_8;
    var_56 = arg_7;
    var_64 = arg_6;
    var_72 = arg_5;
    var_80 = arg_4;
    var_88 = arg_3;
    var_96 = arg_2;
    var_104 = arg_1;
    var_112 = 80;
    pri = fun_3918(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
    var_120 = 0;
    pri = fun_1400()
    pri = 0;
    return pri;
}
// fun_3B80
fun_3B80() {
    pri = g_mode;
    switch (pri) {
// switch_3CB8
        case default:
        {
// switch_3CB8_case_default
            pri = CommandNOP()
            OP_JUMP lab_3D30
// lab_3D30
            pri = 0;
            return pri;
        }
        case 0x84f7c551fca9ad38:
        {
// switch_3CB8_case_0x84f7c551fca9ad38
            var_8 = 0;
            pri = fun_3D70()
            OP_JUMP lab_3D30
        }
        case 0xac19b4bef28b3e98:
        {
// switch_3CB8_case_0xac19b4bef28b3e98
            var_8 = 0;
            pri = fun_4170()
            OP_JUMP lab_3D30
        }
        case 0xeb614be7b30ede0e:
        {
// switch_3CB8_case_0xeb614be7b30ede0e
            var_8 = 0;
            pri = fun_40E0()
            OP_JUMP lab_3D30
        }
        case 0x0:
        {
// switch_3CB8_case_0x0
            var_8 = 0;
            pri = fun_3D40()
            OP_JUMP lab_3D30
        }
        case 0x4bdde49268f4b0a8:
        {
// switch_3CB8_case_0x4bdde49268f4b0a8
            var_8 = 0;
            pri = fun_40C8()
            OP_JUMP lab_3D30
        }
        case 0x586d1d3c1db9be48:
        {
// switch_3CB8_case_0x586d1d3c1db9be48
            var_8 = 0;
            pri = fun_3D58()
            OP_JUMP lab_3D30
        }
    }
}
// fun_3D40
fun_3D40() {
    pri = 0;
    return pri;
}
// fun_3D58
fun_3D58() {
    pri = 0;
    return pri;
}
// fun_3D70
fun_3D70() {
    var_8 = 4839993442856726707;
    pri = EndTrainerPauseMotion(var_8)
    var_16 = 8802641224559852288;
    var_24 = 8;
    pri = fun_0500(var_16)
    var_32 = 999;
    var_40 = -8697999404008829828;
    pri = WorkSet(var_40, var_32)
    var_48 = 1;
    var_56 = 1;
    var_64 = -1;
    OP_PUSH2_C 4839993442856726707, 8802641224559852288
    var_72 = 40;
    pri = fun_07B8(var_64, var_56, var_48, var_40, var_32)
    var_80 = 0;
    var_88 = 0;
    var_96 = 1;
    var_104 = 0;
    OP_PUSH2_C 4839993442856726707, 8802641224559852288
    var_112 = 48;
    pri = fun_02D0(var_104, var_96, var_88, var_80, var_72, var_64)
    var_120 = 10;
    var_128 = 8;
    pri = fun_0060(var_120)
    pri = EvCameraStart()
    var_136 = 0;
    var_144 = -4616189618054758400;
    var_152 = 3;
    var_160 = 33356;
    pri = float(var_160)
    var_168 = pri;
    var_176 = -909;
    pri = float(var_176)
    var_184 = pri;
    var_192 = 32660;
    pri = float(var_192)
    var_200 = pri;
    var_208 = 33604;
    pri = float(var_208)
    var_216 = pri;
    var_224 = -854;
    pri = float(var_224)
    var_232 = pri;
    var_240 = 32605;
    pri = float(var_240)
    var_248 = pri;
    var_256 = 70;
    pri = EvCameraMove(var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_264 = 120;
    var_272 = 8;
    pri = fun_0060(var_264)
    var_280 = 3;
    var_288 = 50;
    pri = EvCameraEnd(var_288, var_280)
    var_296 = 50;
    var_304 = 8;
    pri = fun_0060(var_296)
    var_312 = -1;
    var_320 = 8802641224559852288;
    var_328 = 16;
    pri = fun_0810(var_320, var_312)
    var_336 = 8802641224559852288;
    var_344 = 8;
    pri = fun_0328(var_336)
    pri = 0;
    return pri;
}
// fun_40C8
fun_40C8() {
    pri = 0;
    return pri;
}
// fun_40E0
fun_40E0() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 6898187146507051956;
    var_88 = 2008;
    var_96 = 88;
    pri = fun_3A90(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4170
fun_4170() {
    var_8 = 6399049165662858200;
    pri = FlagSet(var_8)
    pri = 0;
    return pri;
}
