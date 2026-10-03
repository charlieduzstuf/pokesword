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
    pri = StartLoadLogoFade_(var_8)
    pri = 0;
    return pri;
}
// fun_0418
fun_0418() {
    OP_JUMP lab_0430
// lab_0430
    pri = IsLoadedLogoFade_()
    OP_JZER lab_0468
    pri = 0;
    return pri;
// lab_0468
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0430
    pri = 0;
    return pri;
}
// fun_04A8
fun_04A8() {
    var_8 = arg_8;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_7;
    var_40 = arg_6;
    var_48 = arg_3;
    var_56 = 0;
    pri = float(var_56)
    var_64 = pri;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    pri = MapChangeCore_(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0548
fun_0548() {
    pri = arg_8;
    OP_JZER lab_05B8
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
// lab_05B8
    var_8 = arg_9;
    var_16 = 0;
    var_24 = arg_7;
    var_32 = arg_6;
    var_40 = arg_5;
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = arg_1;
    var_72 = arg_0;
    var_80 = 72;
    pri = fun_04A8(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_88 = 1;
    var_96 = arg_4;
    var_104 = 8802641224559852288;
    var_112 = 24;
    pri = fun_06B8(var_104, var_96, var_88)
    pri = arg_8;
    OP_JZER lab_06A8
    var_120 = 80;
    var_128 = 8;
    var_136 = 16;
    pri = fun_0280(var_128, var_120)
    var_144 = 0;
    pri = fun_0350()
// lab_06A8
    pri = 0;
    return pri;
}
// fun_06B8
fun_06B8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_06F8
fun_06F8() {
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
// fun_0770
fun_0770() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07C0
fun_07C0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0CD0(var_8)
    OP_JZER lab_0838
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0D00(var_24)
    OP_JNZ lab_0838
    pri = 0;
    return pri;
// lab_0838
    OP_JUMP lab_0848
// lab_0848
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_08A8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_08A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0848
    pri = 0;
    return pri;
}
// fun_08E8
fun_08E8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0920
fun_0920() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0960
fun_0960() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateFloatParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_09A0
fun_09A0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_09D8
fun_09D8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0A20
    pri = 0;
    return pri;
// lab_0A20
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0A60
// lab_0A60
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0CD0(var_8)
    OP_JNZ lab_0AE8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0AD8
    pri = 0;
    return pri;
// lab_0AE8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0B30
    pri = 0;
    return pri;
// lab_0B30
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0B90
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0BD8(var_8)
    pri = 0;
    return pri;
// lab_0B90
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A60
    pri = 0;
    return pri;
// lab_0AD8
    OP_JUMP lab_0B30
}
// fun_0BD8
fun_0BD8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0C10
fun_0C10() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C50
fun_0C50() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C90
fun_0C90() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0CD0
fun_0CD0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0D00
fun_0D00() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0D30
fun_0D30() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_0D60
fun_0D60() {
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
// switch_1378
        case default:
        {
// switch_1378_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_13C0
// lab_13C0
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
            OP_JNZ lab_1468
            var_88 = 0;
            pri = fun_1620()
// lab_1468
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1378_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0F60
                case default:
                {
// switch_0F60_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0FD8
// lab_0FD8
                    OP_JUMP lab_13C0
                }
                case 0x0:
                {
// switch_0F60_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0FD8
                }
                case 0x1:
                {
// switch_0F60_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0FD8
                }
                case 0x2:
                {
// switch_0F60_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0FD8
                }
                case 0x3:
                {
// switch_0F60_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0FD8
                }
                case 0x4:
                {
// switch_0F60_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0FD8
                }
                case 0x5:
                {
// switch_0F60_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0FD8
                }
            }
        }
        case 0x65:
        {
// switch_1378_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1118
                case default:
                {
// switch_1118_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1190
// lab_1190
                    OP_JUMP lab_13C0
                }
                case 0x0:
                {
// switch_1118_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1190
                }
                case 0x1:
                {
// switch_1118_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1190
                }
                case 0x2:
                {
// switch_1118_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1190
                }
                case 0x3:
                {
// switch_1118_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1190
                }
                case 0x4:
                {
// switch_1118_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1190
                }
                case 0x5:
                {
// switch_1118_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1190
                }
            }
        }
        case 0x66:
        {
// switch_1378_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_12D0
                case default:
                {
// switch_12D0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1348
// lab_1348
                    OP_JUMP lab_13C0
                }
                case 0x0:
                {
// switch_12D0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1348
                }
                case 0x1:
                {
// switch_12D0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1348
                }
                case 0x2:
                {
// switch_12D0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1348
                }
                case 0x3:
                {
// switch_12D0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1348
                }
                case 0x4:
                {
// switch_12D0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1348
                }
                case 0x5:
                {
// switch_12D0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1348
                }
            }
        }
    }
}
// fun_1480
fun_1480() {
    pri = 128;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 208;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_09A0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1528
    pri = 1;
    return pri;
// lab_1528
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1570
fun_1570() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_15C0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1480(var_8)
    arg_2 = pri;
// lab_15C0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0D60(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1620
fun_1620() {
    OP_JUMP lab_1638
// lab_1638
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1678
    pri = 0;
    return pri;
// lab_1678
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1638
    pri = 0;
    return pri;
}
// fun_16B8
fun_16B8() {
    var_8 = 0;
    pri = fun_1620()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1768
    var_32 = 256;
    pri = SoundPostEvent(var_32)
// lab_1768
    pri = 0;
    return pri;
}
// fun_1778
fun_1778() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_17A8
fun_17A8() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_17E0
fun_17E0() {
    OP_JUMP lab_17F8
// lab_17F8
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1840
    OP_JUMP lab_1870
    OP_JUMP lab_1860
// lab_1840
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_1870
    pri = 0;
    return pri;
// lab_1860
    OP_JUMP lab_17F8
}
// fun_1880
fun_1880() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_18B0
fun_18B0() {
    pri = arg_4;
    OP_JNZ lab_18E8
    var_8 = 0;
    pri = fun_0C10()
// lab_18E8
    pri = arg_1;
    switch (pri) {
// switch_2CC0
        case default:
        {
// switch_2CC0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 952;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0CD0(var_264)
            OP_JZER lab_3288
            pri = arg_3;
            switch (pri) {
// switch_3230
                case default:
                {
// switch_3230_case_default
                    OP_JUMP lab_3540
// lab_3540
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_35B0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_35B0
                    var_8 = 0;
                    pri = fun_0C50()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_3230_case_0x1
                    var_8 = 32;
                    var_16 = 1104;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_3230_case_default
                }
                case 0x2:
                {
// switch_3230_case_0x2
                    var_8 = 32;
                    var_16 = 1208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_3230_case_default
                }
                case 0x3:
                {
// switch_3230_case_0x3
                    var_8 = 32;
                    var_16 = 1008;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_3230_case_default
                }
            }
// lab_3288
            pri = arg_1;
            OP_JZER lab_32D8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_32D8
            pri = 0;
            OP_JUMP lab_32E0
// lab_32D8
            pri = 1;
// lab_32E0
            OP_JZER lab_3348
            var_8 = 1304;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_09A0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_3348
            pri = 1;
            OP_JUMP lab_3350
// lab_3348
            pri = 0;
// lab_3350
            OP_JZER lab_33A0
            var_8 = 32;
            var_16 = 1400;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3540
// lab_33A0
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_3408
            var_8 = 32;
            var_16 = 1560;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3540
// lab_3408
            var_16 = 1680;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_09A0(var_24, var_16)
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
            var_176 = 1784;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 1800;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_2CC0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x1:
        {
// switch_2CC0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x2:
        {
// switch_2CC0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x3:
        {
// switch_2CC0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x4:
        {
// switch_2CC0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x5:
        {
// switch_2CC0_case_0x5
            var_8 = 1;
            var_16 = 432;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0920(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0BD8(var_40)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x6:
        {
// switch_2CC0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x7:
        {
// switch_2CC0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x8:
        {
// switch_2CC0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x9:
        {
// switch_2CC0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0xa:
        {
// switch_2CC0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0xb:
        {
// switch_2CC0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0xc:
        {
// switch_2CC0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0xd:
        {
// switch_2CC0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0xe:
        {
// switch_2CC0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0xf:
        {
// switch_2CC0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x10:
        {
// switch_2CC0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x11:
        {
// switch_2CC0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x12:
        {
// switch_2CC0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x13:
        {
// switch_2CC0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x14:
        {
// switch_2CC0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x15:
        {
// switch_2CC0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x16:
        {
// switch_2CC0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x17:
        {
// switch_2CC0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x18:
        {
// switch_2CC0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x19:
        {
// switch_2CC0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x1a:
        {
// switch_2CC0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x1b:
        {
// switch_2CC0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x1c:
        {
// switch_2CC0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x1d:
        {
// switch_2CC0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x1e:
        {
// switch_2CC0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x1f:
        {
// switch_2CC0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x20:
        {
// switch_2CC0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x21:
        {
// switch_2CC0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x22:
        {
// switch_2CC0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x23:
        {
// switch_2CC0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x24:
        {
// switch_2CC0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x25:
        {
// switch_2CC0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x26:
        {
// switch_2CC0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x27:
        {
// switch_2CC0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x28:
        {
// switch_2CC0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x29:
        {
// switch_2CC0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x2a:
        {
// switch_2CC0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x2b:
        {
// switch_2CC0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x2c:
        {
// switch_2CC0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x2d:
        {
// switch_2CC0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x2e:
        {
// switch_2CC0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x2f:
        {
// switch_2CC0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x30:
        {
// switch_2CC0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x31:
        {
// switch_2CC0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x32:
        {
// switch_2CC0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x33:
        {
// switch_2CC0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x34:
        {
// switch_2CC0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x35:
        {
// switch_2CC0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x36:
        {
// switch_2CC0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x37:
        {
// switch_2CC0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x38:
        {
// switch_2CC0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x39:
        {
// switch_2CC0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x3a:
        {
// switch_2CC0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x3b:
        {
// switch_2CC0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x3c:
        {
// switch_2CC0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 528;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x3d:
        {
// switch_2CC0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 704;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
        case 0x3e:
        {
// switch_2CC0_case_0x3e
            var_8 = 3;
            var_16 = 848;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0920(var_24, var_16, var_8)
            OP_JUMP switch_2CC0_case_default
        }
    }
}
// fun_35E0
fun_35E0() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_36E0
        case default:
        {
// switch_36E0_case_default
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
// switch_36E0_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_36E0_case_default
        }
        case 0x1:
        {
// switch_36E0_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_36E0_case_default
        }
        case 0x2:
        {
// switch_36E0_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_36E0_case_default
        }
        case 0x3:
        {
// switch_36E0_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_36E0_case_default
        }
    }
}
// fun_37A0
fun_37A0() {
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
    pri = fun_1570(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_1620()
    pri = 0;
    return pri;
}
// fun_3838
fun_3838() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_35E0(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_37A0(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_38E0
fun_38E0() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_3930
// lab_3930
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 1848;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_39A8
    OP_JUMP lab_39D8
// lab_39A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_3930
// lab_39D8
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_3A60
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_18B0(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0D30(var_56)
// lab_3A60
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_3AC8
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0C90(var_24, var_16)
// lab_3AC8
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0C90(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_3B88
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_09D8(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0770(var_88, var_80, var_72, var_64, var_56)
// lab_3B88
    pri = IsPlayerRideBicycle()
    OP_JZER lab_3BC8
    pri = 0;
    return pri;
// lab_3BC8
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_3D10
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 1968;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_08E8(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_3CD8
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_3D10
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_07C0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_07C0(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_09D8(var_40)
    pri = 0;
    return pri;
// lab_3CD8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0C90(var_16, var_8)
}
// fun_3D98
fun_3D98() {
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
    pri = fun_3838(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_16B8(var_112)
    var_128 = 0;
    pri = fun_1778()
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
    pri = fun_38E0(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_3F10
fun_3F10() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_17A8(var_8)
    var_24 = 0;
    pri = fun_17E0()
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
    pri = fun_3D98(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
    var_120 = 0;
    pri = fun_1880()
    pri = 0;
    return pri;
}
// fun_4000
fun_4000() {
    var_8 = arg_8;
    var_16 = arg_7;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = 8802641224559852288;
    pri = GetFieldObjectPositionZ_(var_48)
    OP_MOVE_ALT 
    pri = arg_3;
    var_56 = pri;
    var_64 = alt;
    pri = floatadd(var_64, var_56)
    var_72 = pri;
    var_80 = 8802641224559852288;
    pri = GetFieldObjectPositionX_(var_80)
    OP_MOVE_ALT 
    pri = arg_2;
    var_88 = pri;
    var_96 = alt;
    pri = floatadd(var_96, var_88)
    var_104 = pri;
    var_112 = arg_1;
    var_120 = arg_0;
    var_128 = 72;
    pri = fun_06F8(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    pri = 0;
    return pri;
}
// fun_4138
fun_4138() {
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    OP_LOAD_P_S_ALT 24
    OP_JSLESS lab_4190
    pri = arg_2;
    return pri;
// lab_4190
    pri = arg_1;
    return pri;
}
// fun_41A0
fun_41A0() {
    pri = g_mode;
    switch (pri) {
// switch_4440
        case default:
        {
// switch_4440_case_default
            pri = CommandNOP()
            OP_JUMP lab_4548
// lab_4548
            pri = 0;
            return pri;
        }
        case 0x962dd58a0edb99da:
        {
// switch_4440_case_0x962dd58a0edb99da
            var_8 = 0;
            pri = fun_53B8()
            OP_JUMP lab_4548
        }
        case 0x9d171f342d462792:
        {
// switch_4440_case_0x9d171f342d462792
            var_8 = 0;
            pri = fun_54D8()
            OP_JUMP lab_4548
        }
        case 0xa58155c324050233:
        {
// switch_4440_case_0xa58155c324050233
            var_8 = 0;
            pri = fun_5328()
            OP_JUMP lab_4548
        }
        case 0xa8305d04c3033de0:
        {
// switch_4440_case_0xa8305d04c3033de0
            var_8 = 0;
            pri = fun_4AD0()
            OP_JUMP lab_4548
        }
        case 0xb4d3afc64b924934:
        {
// switch_4440_case_0xb4d3afc64b924934
            var_8 = 0;
            pri = fun_4570()
            OP_JUMP lab_4548
        }
        case 0xcc13987522f9d90e:
        {
// switch_4440_case_0xcc13987522f9d90e
            var_8 = 0;
            pri = fun_4588()
            OP_JUMP lab_4548
        }
        case 0xe0ea1ef52a234017:
        {
// switch_4440_case_0xe0ea1ef52a234017
            var_8 = 0;
            pri = fun_5448()
            OP_JUMP lab_4548
        }
        case 0xeed40bbda3c3f515:
        {
// switch_4440_case_0xeed40bbda3c3f515
            var_8 = 0;
            pri = fun_5208()
            OP_JUMP lab_4548
        }
        case 0x0:
        {
// switch_4440_case_0x0
            var_8 = 0;
            pri = fun_4558()
            OP_JUMP lab_4548
        }
        case 0xd7ded96f4c32da0:
        {
// switch_4440_case_0xd7ded96f4c32da0
            var_8 = 0;
            pri = fun_5688()
            OP_JUMP lab_4548
        }
        case 0xe9eca1cb1c20ae7:
        {
// switch_4440_case_0xe9eca1cb1c20ae7
            var_8 = 0;
            pri = fun_5568()
            OP_JUMP lab_4548
        }
        case 0x1a251d174d43b5ed:
        {
// switch_4440_case_0x1a251d174d43b5ed
            var_8 = 0;
            pri = fun_4B58()
            OP_JUMP lab_4548
        }
        case 0x3637b9857ee8389e:
        {
// switch_4440_case_0x3637b9857ee8389e
            var_8 = 0;
            pri = fun_5298()
            OP_JUMP lab_4548
        }
        case 0x490b48bdef7e96b5:
        {
// switch_4440_case_0x490b48bdef7e96b5
            var_8 = 0;
            pri = fun_55F8()
            OP_JUMP lab_4548
        }
        case 0x79c5ba478fd1b523:
        {
// switch_4440_case_0x79c5ba478fd1b523
            var_8 = 0;
            pri = fun_4BE0()
            OP_JUMP lab_4548
        }
    }
}
// fun_4558
fun_4558() {
    pri = 0;
    return pri;
}
// fun_4570
fun_4570() {
    pri = 0;
    return pri;
}
// fun_4588
fun_4588() {
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    alt = 1790;
    OP_JSLESS lab_4650
    var_16 = 1;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 0;
    var_64 = 0;
    var_72 = 1;
    var_80 = 1;
    var_88 = 2078698830796363294;
    var_96 = 80;
    pri = fun_3D98(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    OP_JUMP lab_4AC0
// lab_4650
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    alt = 1730;
    OP_JSLESS lab_4710
    var_16 = 1;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 0;
    var_64 = 0;
    var_72 = 1;
    var_80 = 1;
    var_88 = 2078703228842876138;
    var_96 = 80;
    pri = fun_3D98(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    OP_JUMP lab_4AC0
// lab_4710
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    alt = 1720;
    OP_JSLESS lab_47D0
    var_16 = 1;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 0;
    var_64 = 0;
    var_72 = 1;
    var_80 = 1;
    var_88 = 2078704328354504349;
    var_96 = 80;
    pri = fun_3D98(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    OP_JUMP lab_4AC0
// lab_47D0
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    alt = 1705;
    OP_JSLESS lab_4890
    var_16 = 1;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 0;
    var_64 = 0;
    var_72 = 1;
    var_80 = 1;
    var_88 = 2078701029819619716;
    var_96 = 80;
    pri = fun_3D98(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    OP_JUMP lab_4AC0
// lab_4890
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    alt = 1675;
    OP_JSLESS lab_4950
    var_16 = 1;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 0;
    var_64 = 0;
    var_72 = 1;
    var_80 = 1;
    var_88 = 2078699930307991505;
    var_96 = 80;
    pri = fun_3D98(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    OP_JUMP lab_4AC0
// lab_4950
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    alt = 1540;
    OP_JSLESS lab_4A10
    var_16 = 1;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 0;
    var_64 = 0;
    var_72 = 1;
    var_80 = 1;
    var_88 = 2078696631773106872;
    var_96 = 80;
    pri = fun_3D98(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    OP_JUMP lab_4AC0
// lab_4A10
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    alt = 1520;
    OP_JSLESS lab_4AC0
    var_16 = 1;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 0;
    var_64 = 0;
    var_72 = 1;
    var_80 = 1;
    var_88 = 2078697731284735083;
    var_96 = 80;
    pri = fun_3D98(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
// lab_4AC0
    pri = 0;
    return pri;
}
// fun_4AD0
fun_4AD0() {
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 0;
    var_72 = 1;
    var_80 = -7724153429165048278;
    var_88 = 80;
    pri = fun_3D98(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4B58
fun_4B58() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 0;
    var_72 = 1;
    var_80 = -1498582220583335009;
    var_88 = 80;
    pri = fun_3D98(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4BE0
fun_4BE0() {
    pri = EvCameraStart()
    var_8 = 2104;
    pri = SoundPostEvent(var_8)
    var_16 = 2336;
    var_24 = 7748853160478964706;
    var_32 = 16;
    pri = fun_08E8(var_24, var_16)
    var_40 = 0;
    var_48 = 2472;
    var_56 = 8802641224559852288;
    var_64 = 24;
    pri = fun_0960(var_56, var_48, var_40)
    var_72 = 8802641224559852288;
    var_80 = 8;
    pri = fun_07C0(var_72)
    var_88 = 15;
    var_96 = 8;
    pri = fun_0060(var_88)
    var_104 = 1;
    var_112 = 0;
    var_120 = 4641240890982006784;
    var_128 = 0;
    var_136 = 0;
    var_144 = -300;
    pri = float(var_144)
    var_152 = pri;
    var_160 = 0;
    pri = float(var_160)
    var_168 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_176 = 72;
    pri = fun_4000(var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104)
    var_184 = 50;
    var_192 = 8;
    pri = fun_0060(var_184)
    var_200 = 10;
    var_208 = 12;
    var_216 = 2030;
    var_224 = 24;
    pri = fun_4138(var_216, var_208, var_200)
    var_232 = pri;
    var_240 = 8;
    pri = fun_03E0(var_232)
    var_248 = 0;
    pri = fun_0418()
    var_256 = 6910712898869243;
    pri = WorkGet(var_256)
    alt = 2030;
    OP_JSLESS lab_4EB0
    var_264 = 2584;
    pri = SoundPostEvent(var_264)
    var_272 = 1;
    var_280 = 0;
    var_288 = 2856;
    var_296 = 8;
    var_304 = 32;
    pri = fun_02E0(var_296, var_288, var_280, var_272)
    OP_JUMP lab_4F08
// lab_4EB0
    var_8 = 2928;
    pri = SoundPostEvent(var_8)
    var_16 = 1;
    var_24 = 0;
    var_32 = 3192;
    var_40 = 8;
    var_48 = 32;
    pri = fun_02E0(var_40, var_32, var_24, var_16)
// lab_4F08
    var_8 = 0;
    pri = fun_0350()
    var_16 = 3;
    var_24 = 0;
    pri = EvCameraEnd(var_24, var_16)
    var_32 = 8802641224559852288;
    var_40 = 8;
    pri = fun_07C0(var_32)
    var_48 = 0;
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 4640537203540230144;
    var_96 = 27250;
    pri = float(var_96)
    var_104 = pri;
    var_112 = 20000;
    pri = float(var_112)
    var_120 = pri;
    OP_PUSH2_C 9116614320094512028, -3307772254259144861
    var_128 = 80;
    pri = fun_0548(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48)
    var_136 = 1;
    var_144 = 0;
    var_152 = 4641240890982006784;
    var_160 = 0;
    var_168 = 0;
    var_176 = -150;
    pri = float(var_176)
    var_184 = pri;
    var_192 = 0;
    pri = float(var_192)
    var_200 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_208 = 72;
    pri = fun_4000(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_216 = 6910712898869243;
    pri = WorkGet(var_216)
    alt = 2030;
    OP_JSLESS lab_5170
    var_224 = 3248;
    pri = SoundPostEvent(var_224)
    var_232 = 3528;
    var_240 = 8;
    var_248 = 16;
    pri = fun_0280(var_240, var_232)
    OP_JUMP lab_51B8
// lab_5170
    var_8 = 3600;
    pri = SoundPostEvent(var_8)
    var_16 = 3872;
    var_24 = 8;
    var_32 = 16;
    pri = fun_0280(var_24, var_16)
// lab_51B8
    var_8 = 0;
    pri = fun_0350()
    var_16 = 8802641224559852288;
    var_24 = 8;
    pri = fun_07C0(var_16)
    pri = 0;
    return pri;
}
// fun_5208
fun_5208() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -6044277429414766814;
    var_88 = 3928;
    var_96 = 88;
    pri = fun_3F10(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_5298
fun_5298() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -2699932390330475915;
    var_88 = 4144;
    var_96 = 88;
    pri = fun_3F10(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_5328
fun_5328() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -9017440363198514560;
    var_88 = 4360;
    var_96 = 88;
    pri = fun_3F10(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_53B8
fun_53B8() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -5550653709220867501;
    var_88 = 4576;
    var_96 = 88;
    pri = fun_3F10(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_5448
fun_5448() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 472440158184084286;
    var_88 = 4792;
    var_96 = 88;
    pri = fun_3F10(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_54D8
fun_54D8() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -5440152714749046991;
    var_88 = 5008;
    var_96 = 88;
    pri = fun_3F10(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_5568
fun_5568() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -2378140423217896292;
    var_88 = 5224;
    var_96 = 88;
    pri = fun_3F10(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_55F8
fun_55F8() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -2243899452581950688;
    var_88 = 5440;
    var_96 = 88;
    pri = fun_3F10(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_5688
fun_5688() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -8389540487996566891;
    var_88 = 5656;
    var_96 = 88;
    pri = fun_3F10(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
