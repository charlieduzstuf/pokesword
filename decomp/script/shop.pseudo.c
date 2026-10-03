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
    pri = arg_1;
    OP_JZER lab_0180
    var_8 = arg_0;
    pri = GetPublicRand(var_8)
    return pri;
// lab_0180
    pri = arg_0;
    OP_ADD_P_C -1
    var_8 = pri;
    pri = GetPublicRand(var_8)
    return pri;
}
// fun_01B8
fun_01B8() {
    OP_ZERO_P_S -8
    OP_JUMP lab_01E8
// lab_01E8
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_02E8
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_0268
    pri = 0;
    return pri;
// lab_02E8
    pri = 0;
    return pri;
// lab_0268
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
    OP_JUMP lab_01E0
// lab_01E0
    OP_INC_P_S -8
}
// fun_0300
fun_0300() {
    var_8 = arg_0;
    pri = GetRecord_(var_8)
    return pri;
}
// fun_0330
fun_0330() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0378
// lab_0378
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_03B8
    OP_JUMP lab_0428
// lab_03B8
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_03F8
    OP_JUMP lab_0428
// lab_03F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0378
// lab_0428
    pri = 0;
    return pri;
}
// fun_0440
fun_0440() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0490
fun_0490() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0960(var_8)
    OP_JZER lab_0508
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0990(var_24)
    OP_JNZ lab_0508
    pri = 0;
    return pri;
// lab_0508
    OP_JUMP lab_0518
// lab_0518
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0578
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0578
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0518
    pri = 0;
    return pri;
}
// fun_05B8
fun_05B8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_05F0
fun_05F0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0630
fun_0630() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0668
fun_0668() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_06B0
    pri = 0;
    return pri;
// lab_06B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_06F0
// lab_06F0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0960(var_8)
    OP_JNZ lab_0778
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0768
    pri = 0;
    return pri;
// lab_0778
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_07C0
    pri = 0;
    return pri;
// lab_07C0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0820
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0868(var_8)
    pri = 0;
    return pri;
// lab_0820
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_06F0
    pri = 0;
    return pri;
// lab_0768
    OP_JUMP lab_07C0
}
// fun_0868
fun_0868() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_08A0
fun_08A0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_08E0
fun_08E0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0920
fun_0920() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0960
fun_0960() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0990
fun_0990() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_09C0
fun_09C0() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_09F0
fun_09F0() {
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
// switch_1008
        case default:
        {
// switch_1008_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1050
// lab_1050
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
            OP_JNZ lab_10F8
            var_88 = 0;
            pri = fun_13C8()
// lab_10F8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1008_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0BF0
                case default:
                {
// switch_0BF0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0C68
// lab_0C68
                    OP_JUMP lab_1050
                }
                case 0x0:
                {
// switch_0BF0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0C68
                }
                case 0x1:
                {
// switch_0BF0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0C68
                }
                case 0x2:
                {
// switch_0BF0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0C68
                }
                case 0x3:
                {
// switch_0BF0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0C68
                }
                case 0x4:
                {
// switch_0BF0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0C68
                }
                case 0x5:
                {
// switch_0BF0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0C68
                }
            }
        }
        case 0x65:
        {
// switch_1008_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_0DA8
                case default:
                {
// switch_0DA8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0E20
// lab_0E20
                    OP_JUMP lab_1050
                }
                case 0x0:
                {
// switch_0DA8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_0E20
                }
                case 0x1:
                {
// switch_0DA8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_0E20
                }
                case 0x2:
                {
// switch_0DA8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_0E20
                }
                case 0x3:
                {
// switch_0DA8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0E20
                }
                case 0x4:
                {
// switch_0DA8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_0E20
                }
                case 0x5:
                {
// switch_0DA8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_0E20
                }
            }
        }
        case 0x66:
        {
// switch_1008_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_0F60
                case default:
                {
// switch_0F60_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0FD8
// lab_0FD8
                    OP_JUMP lab_1050
                }
                case 0x0:
                {
// switch_0F60_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_0FD8
                }
                case 0x1:
                {
// switch_0F60_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_0FD8
                }
                case 0x2:
                {
// switch_0F60_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_0FD8
                }
                case 0x3:
                {
// switch_0F60_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0FD8
                }
                case 0x4:
                {
// switch_0F60_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_0FD8
                }
                case 0x5:
                {
// switch_0F60_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_0FD8
                }
            }
        }
    }
}
// fun_1110
fun_1110() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_09F0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1178
fun_1178() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0630(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1220
    pri = 1;
    return pri;
// lab_1220
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1268
fun_1268() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_12B8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1178(var_8)
    arg_2 = pri;
// lab_12B8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_09F0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1318
fun_1318() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1110(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1368
fun_1368() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1318(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13C8
fun_13C8() {
    OP_JUMP lab_13E0
// lab_13E0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1420
    pri = 0;
    return pri;
// lab_1420
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_13E0
    pri = 0;
    return pri;
}
// fun_1460
fun_1460() {
    var_8 = 0;
    pri = fun_13C8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1510
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_1510
    pri = 0;
    return pri;
}
// fun_1520
fun_1520() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1550
fun_1550() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1580
// lab_1580
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_15C0
    OP_JUMP lab_15F0
// lab_15C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1580
// lab_15F0
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1638
fun_1638() {
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
// fun_16A8
fun_16A8() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_16E0
fun_16E0() {
    OP_JUMP lab_16F8
// lab_16F8
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1740
    OP_JUMP lab_1770
    OP_JUMP lab_1760
// lab_1740
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_1770
    pri = 0;
    return pri;
// lab_1760
    OP_JUMP lab_16F8
}
// fun_1780
fun_1780() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_17B0
fun_17B0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1800
fun_1800() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1850
fun_1850() {
    var_8 = arg_0;
    pri = PlayerAddDressupItemByPreset(var_8)
    pri = 0;
    return pri;
}
// fun_1888
fun_1888() {
    pri = arg_4;
    OP_JNZ lab_18C0
    var_8 = 0;
    pri = fun_08A0()
// lab_18C0
    pri = arg_1;
    switch (pri) {
// switch_2C98
        case default:
        {
// switch_2C98_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 856;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0960(var_264)
            OP_JZER lab_3260
            pri = arg_3;
            switch (pri) {
// switch_3208
                case default:
                {
// switch_3208_case_default
                    OP_JUMP lab_3518
// lab_3518
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_3588
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_3588
                    var_8 = 0;
                    pri = fun_08E0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_3208_case_0x1
                    var_8 = 32;
                    var_16 = 1008;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01B8(var_16, var_8, var_0)
                    OP_JUMP switch_3208_case_default
                }
                case 0x2:
                {
// switch_3208_case_0x2
                    var_8 = 32;
                    var_16 = 1112;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01B8(var_16, var_8, var_0)
                    OP_JUMP switch_3208_case_default
                }
                case 0x3:
                {
// switch_3208_case_0x3
                    var_8 = 32;
                    var_16 = 912;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01B8(var_16, var_8, var_0)
                    OP_JUMP switch_3208_case_default
                }
            }
// lab_3260
            pri = arg_1;
            OP_JZER lab_32B0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_32B0
            pri = 0;
            OP_JUMP lab_32B8
// lab_32B0
            pri = 1;
// lab_32B8
            OP_JZER lab_3320
            var_8 = 1208;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0630(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_3320
            pri = 1;
            OP_JUMP lab_3328
// lab_3320
            pri = 0;
// lab_3328
            OP_JZER lab_3378
            var_8 = 32;
            var_16 = 1304;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_01B8(var_16, var_8, var_0)
            OP_JUMP lab_3518
// lab_3378
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_33E0
            var_8 = 32;
            var_16 = 1464;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_01B8(var_16, var_8, var_0)
            OP_JUMP lab_3518
// lab_33E0
            var_16 = 1584;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0630(var_24, var_16)
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
// switch_2C98_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x1:
        {
// switch_2C98_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x2:
        {
// switch_2C98_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x3:
        {
// switch_2C98_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x4:
        {
// switch_2C98_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x5:
        {
// switch_2C98_case_0x5
            var_8 = 1;
            var_16 = 336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_05F0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0868(var_40)
            OP_JUMP switch_2C98_case_default
        }
        case 0x6:
        {
// switch_2C98_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x7:
        {
// switch_2C98_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x8:
        {
// switch_2C98_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x9:
        {
// switch_2C98_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0xa:
        {
// switch_2C98_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0xb:
        {
// switch_2C98_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0xc:
        {
// switch_2C98_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0xd:
        {
// switch_2C98_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0xe:
        {
// switch_2C98_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0xf:
        {
// switch_2C98_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x10:
        {
// switch_2C98_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x11:
        {
// switch_2C98_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x12:
        {
// switch_2C98_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x13:
        {
// switch_2C98_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x14:
        {
// switch_2C98_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x15:
        {
// switch_2C98_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x16:
        {
// switch_2C98_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x17:
        {
// switch_2C98_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x18:
        {
// switch_2C98_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x19:
        {
// switch_2C98_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x1a:
        {
// switch_2C98_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x1b:
        {
// switch_2C98_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x1c:
        {
// switch_2C98_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x1d:
        {
// switch_2C98_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x1e:
        {
// switch_2C98_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x1f:
        {
// switch_2C98_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x20:
        {
// switch_2C98_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x21:
        {
// switch_2C98_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x22:
        {
// switch_2C98_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x23:
        {
// switch_2C98_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x24:
        {
// switch_2C98_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x25:
        {
// switch_2C98_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x26:
        {
// switch_2C98_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x27:
        {
// switch_2C98_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x28:
        {
// switch_2C98_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x29:
        {
// switch_2C98_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x2a:
        {
// switch_2C98_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x2b:
        {
// switch_2C98_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x2c:
        {
// switch_2C98_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x2d:
        {
// switch_2C98_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x2e:
        {
// switch_2C98_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x2f:
        {
// switch_2C98_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x30:
        {
// switch_2C98_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x31:
        {
// switch_2C98_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x32:
        {
// switch_2C98_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x33:
        {
// switch_2C98_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x34:
        {
// switch_2C98_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x35:
        {
// switch_2C98_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x36:
        {
// switch_2C98_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x37:
        {
// switch_2C98_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x38:
        {
// switch_2C98_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x39:
        {
// switch_2C98_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x3a:
        {
// switch_2C98_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x3b:
        {
// switch_2C98_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x3c:
        {
// switch_2C98_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 432;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x3d:
        {
// switch_2C98_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 608;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
        case 0x3e:
        {
// switch_2C98_case_0x3e
            var_8 = 3;
            var_16 = 752;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_05F0(var_24, var_16, var_8)
            OP_JUMP switch_2C98_case_default
        }
    }
}
// fun_35B8
fun_35B8() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_36B8
        case default:
        {
// switch_36B8_case_default
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
// switch_36B8_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_36B8_case_default
        }
        case 0x1:
        {
// switch_36B8_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_36B8_case_default
        }
        case 0x2:
        {
// switch_36B8_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_36B8_case_default
        }
        case 0x3:
        {
// switch_36B8_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_36B8_case_default
        }
    }
}
// fun_3778
fun_3778() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_37C8
// lab_37C8
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 1752;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_3840
    OP_JUMP lab_3870
// lab_3840
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_37C8
// lab_3870
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_38F8
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_1888(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_09C0(var_56)
// lab_38F8
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_3960
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0920(var_24, var_16)
// lab_3960
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0920(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_3A20
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0668(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0440(var_88, var_80, var_72, var_64, var_56)
// lab_3A20
    pri = IsPlayerRideBicycle()
    OP_JZER lab_3A60
    pri = 0;
    return pri;
// lab_3A60
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_3BA8
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 1872;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_05B8(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_3B70
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_3BA8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0490(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0490(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0668(var_40)
    pri = 0;
    return pri;
// lab_3B70
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0920(var_16, var_8)
}
// fun_3C30
fun_3C30() {
    var_8 = 2008;
    var_16 = 8;
    pri = fun_16A8(var_8)
    var_24 = 0;
    pri = fun_16E0()
    var_32 = 0;
    var_40 = 8;
    pri = fun_17B0(var_32)
    var_48 = 1;
    var_56 = arg_1;
    var_64 = 1;
    var_72 = 24;
    pri = fun_1800(var_64, var_56, var_48)
    var_80 = 0;
    pri = fun_1780()
    var_88 = 2240;
    var_96 = 8;
    pri = fun_16A8(var_88)
    var_104 = 0;
    pri = fun_16E0()
    var_112 = 2400;
    pri = SoundPostEvent(var_112)
    var_120 = 3;
    var_128 = 0;
    var_136 = -5174137429720893594;
    var_144 = 24;
    pri = fun_1368(var_136, var_128, var_120)
    var_152 = 0;
    var_160 = 8;
    pri = fun_0330(var_152)
    var_168 = 1;
    var_176 = 8;
    pri = fun_1460(var_168)
    var_184 = 0;
    pri = fun_1520()
    var_192 = 0;
    pri = fun_1780()
    var_200 = arg_0;
    var_208 = 8;
    pri = fun_1850(var_200)
    pri = 0;
    return pri;
}
// fun_3E08
fun_3E08() {
    OP_ZERO_P_S -8
    pri = var_8;
    var_16 = pri;
    var_24 = 2491457344527812609;
    pri = FlagGet(var_24)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_32 = pri;
    var_40 = -6338460143570643299;
    pri = FlagGet(var_40)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_48 = pri;
    var_56 = -9019446742694110882;
    pri = FlagGet(var_56)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_64 = pri;
    var_72 = -2229912894659633455;
    pri = FlagGet(var_72)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_80 = pri;
    var_88 = -3467343721533817634;
    pri = FlagGet(var_88)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_96 = pri;
    var_104 = -2282713863028048545;
    pri = FlagGet(var_104)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_112 = pri;
    var_120 = -3446232929749219646;
    pri = FlagGet(var_120)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_128 = pri;
    var_136 = 2483696471998715560;
    pri = FlagGet(var_136)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    return pri;
}
// fun_40B8
fun_40B8() {
    pri = g_mode;
    switch (pri) {
// switch_43D0
        case default:
        {
// switch_43D0_case_default
            pri = CommandNOP()
            OP_JUMP lab_4508
// lab_4508
            pri = 0;
            return pri;
        }
        case 0xe08b875bedb81eb3:
        {
// switch_43D0_case_0xe08b875bedb81eb3
            var_8 = 0;
            pri = fun_4C98()
            OP_JUMP lab_4508
        }
        case 0x0:
        {
// switch_43D0_case_0x0
            var_8 = 0;
            pri = fun_4518()
            OP_JUMP lab_4508
        }
        case 0x21e3f5394b3186c:
        {
// switch_43D0_case_0x21e3f5394b3186c
            var_8 = 0;
            pri = fun_4EA8()
            OP_JUMP lab_4508
        }
        case 0x21e405394b31a1f:
        {
// switch_43D0_case_0x21e405394b31a1f
            var_8 = 0;
            pri = fun_4DF8()
            OP_JUMP lab_4508
        }
        case 0x21e425394b31d85:
        {
// switch_43D0_case_0x21e425394b31d85
            var_8 = 0;
            pri = fun_4F58()
            OP_JUMP lab_4508
        }
        case 0x3d6727b68fcff76:
        {
// switch_43D0_case_0x3d6727b68fcff76
            var_8 = 0;
            pri = fun_5008()
            OP_JUMP lab_4508
        }
        case 0x3d6737b68fd0129:
        {
// switch_43D0_case_0x3d6737b68fd0129
            var_8 = 0;
            pri = fun_5290()
            OP_JUMP lab_4508
        }
        case 0x1aec5e3eb6c6cebf:
        {
// switch_43D0_case_0x1aec5e3eb6c6cebf
            var_8 = 0;
            pri = fun_4530()
            OP_JUMP lab_4508
        }
        case 0x239c92f21a29c0a6:
        {
// switch_43D0_case_0x239c92f21a29c0a6
            var_8 = 0;
            pri = fun_4928()
            OP_JUMP lab_4508
        }
        case 0x239c94f21a29c40c:
        {
// switch_43D0_case_0x239c94f21a29c40c
            var_8 = 0;
            pri = fun_47C8()
            OP_JUMP lab_4508
        }
        case 0x239c95f21a29c5bf:
        {
// switch_43D0_case_0x239c95f21a29c5bf
            var_8 = 0;
            pri = fun_4878()
            OP_JUMP lab_4508
        }
        case 0x239c96f21a29c772:
        {
// switch_43D0_case_0x239c96f21a29c772
            var_8 = 0;
            pri = fun_4668()
            OP_JUMP lab_4508
        }
        case 0x239c97f21a29c925:
        {
// switch_43D0_case_0x239c97f21a29c925
            var_8 = 0;
            pri = fun_4718()
            OP_JUMP lab_4508
        }
        case 0x276b029b62a4fe8c:
        {
// switch_43D0_case_0x276b029b62a4fe8c
            var_8 = 0;
            pri = fun_4A88()
            OP_JUMP lab_4508
        }
        case 0x276b039b62a5003f:
        {
// switch_43D0_case_0x276b039b62a5003f
            var_8 = 0;
            pri = fun_49D8()
            OP_JUMP lab_4508
        }
        case 0x276b059b62a503a5:
        {
// switch_43D0_case_0x276b059b62a503a5
            var_8 = 0;
            pri = fun_4B38()
            OP_JUMP lab_4508
        }
        case 0x29c93d00c22bd7ce:
        {
// switch_43D0_case_0x29c93d00c22bd7ce
            var_8 = 0;
            pri = fun_4D48()
            OP_JUMP lab_4508
        }
        case 0x3960168adbb75254:
        {
// switch_43D0_case_0x3960168adbb75254
            var_8 = 0;
            pri = fun_4BE8()
            OP_JUMP lab_4508
        }
    }
}
// fun_4518
fun_4518() {
    pri = 0;
    return pri;
}
// fun_4530
fun_4530() {
    OP_CONST_S -8, 7406859748029216881
    var_24 = 6910712898869243;
    pri = WorkGet(var_24)
    var_16 = pri;
    pri = var_16;
    alt = 270;
    OP_JSGEQ lab_45C8
    OP_CONST_S -8, 2251782434697921680
// lab_45C8
    pri = GetTargetFieldObjectID()
    var_24 = pri;
    var_16 = 1;
    OP_PUSH3_C 3705487983237817438, 3705486883726189227, 3705489082749445649
    var_24 = 0;
    var_32 = 0;
    var_40 = var_8;
    var_48 = var_24;
    var_56 = 64;
    pri = fun_5BD0(var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_4668
fun_4668() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    OP_PUSH3_C 3705487983237817438, 3705486883726189227, 3705485784214561016
    var_24 = 0;
    var_32 = 3;
    var_40 = -8200897117025191756;
    var_48 = var_8;
    var_56 = 64;
    pri = fun_5BD0(var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_4718
fun_4718() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    OP_PUSH3_C 3705487983237817438, 3705486883726189227, 3705485784214561016
    var_24 = 0;
    var_32 = 3;
    var_40 = -8200896017513563545;
    var_48 = var_8;
    var_56 = 64;
    pri = fun_5BD0(var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_47C8
fun_47C8() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    OP_PUSH3_C 3705487983237817438, 3705486883726189227, 3705485784214561016
    var_24 = 0;
    var_32 = 3;
    var_40 = -8200894918001935334;
    var_48 = var_8;
    var_56 = 64;
    pri = fun_5BD0(var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_4878
fun_4878() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    OP_PUSH3_C 3705487983237817438, 3705486883726189227, 3705485784214561016
    var_24 = 0;
    var_32 = 3;
    var_40 = -8200893818490307123;
    var_48 = var_8;
    var_56 = 64;
    pri = fun_5BD0(var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_4928
fun_4928() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    OP_PUSH3_C 3705487983237817438, 3705486883726189227, 3705485784214561016
    var_24 = 0;
    var_32 = 3;
    var_40 = -8200901515071704600;
    var_48 = var_8;
    var_56 = 64;
    pri = fun_5BD0(var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_49D8
fun_49D8() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    OP_PUSH3_C 3705487983237817438, 3705486883726189227, 3705489082749445649
    var_24 = 0;
    var_32 = 0;
    var_40 = -3758683343484136549;
    var_48 = var_8;
    var_56 = 64;
    pri = fun_5BD0(var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_4A88
fun_4A88() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    OP_PUSH3_C 3705487983237817438, 3705486883726189227, 3705489082749445649
    var_24 = 0;
    var_32 = 0;
    var_40 = -3758684442995764760;
    var_48 = var_8;
    var_56 = 64;
    pri = fun_5BD0(var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_4B38
fun_4B38() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    OP_PUSH3_C 3705487983237817438, 3705486883726189227, 3705489082749445649
    var_24 = 0;
    var_32 = 0;
    var_40 = -3758681144460880127;
    var_48 = var_8;
    var_56 = 64;
    pri = fun_5BD0(var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_4BE8
fun_4BE8() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 0;
    OP_PUSH3_C 6517347562821770050, 6517348662333398261, 6517345363798513628
    var_24 = 0;
    var_32 = 5;
    var_40 = 348752365037108344;
    var_48 = var_8;
    var_56 = 64;
    pri = fun_5BD0(var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_4C98
fun_4C98() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 0;
    OP_PUSH3_C -6720229986196844629, -6720231085708472840, -6720227787173588207
    var_24 = 0;
    var_32 = 4;
    var_40 = 5417723256143283975;
    var_48 = var_8;
    var_56 = 64;
    pri = fun_5BD0(var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_4D48
fun_4D48() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 0;
    OP_PUSH3_C 7963484070250891294, 7963485169762519505, 7963481871227634872
    var_24 = 0;
    var_32 = 6;
    var_40 = -2055385296422735760;
    var_48 = var_8;
    var_56 = 64;
    pri = fun_5BD0(var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_4DF8
fun_4DF8() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 0;
    OP_PUSH3_C 3705487983237817438, 3705486883726189227, 3704501721307501396
    var_24 = 1;
    var_32 = 1;
    var_40 = 4600326148189008059;
    var_48 = var_8;
    var_56 = 64;
    pri = fun_5BD0(var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_4EA8
fun_4EA8() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 0;
    OP_PUSH3_C 3705487983237817438, 3705486883726189227, 3704501721307501396
    var_24 = 1;
    var_32 = 1;
    var_40 = 4600325048677379848;
    var_48 = var_8;
    var_56 = 64;
    pri = fun_5BD0(var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_4F58
fun_4F58() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 0;
    OP_PUSH3_C 3705487983237817438, 3705486883726189227, 3704501721307501396
    var_24 = 1;
    var_32 = 1;
    var_40 = 4600328347212264481;
    var_48 = var_8;
    var_56 = 64;
    pri = fun_5BD0(var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_5008
fun_5008() {
    var_8 = -38168293165934061;
    pri = FlagGet(var_8)
    OP_JNZ lab_50E0
    var_16 = -38168293165934061;
    pri = FlagSet(var_16)
    var_32 = 0;
    var_40 = 21;
    var_48 = 16;
    pri = fun_0138(var_40, var_32)
    var_8 = pri;
    var_56 = var_8;
    var_64 = 1182613467310404540;
    pri = WorkSet(var_64, var_56)
// lab_50E0
    OP_ZERO_P_S -8
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_5190
    var_24 = 1182613467310404540;
    pri = WorkGet(var_24)
    var_16 = pri;
    alt = 2584;
    pri = var_16;
    OP_LIDX_P_B 3
    var_8 = pri;
    OP_JUMP lab_51F0
// lab_5190
    var_16 = 1182613467310404540;
    pri = WorkGet(var_16)
    var_16 = pri;
    alt = 2752;
    pri = var_16;
    OP_LIDX_P_B 3
    var_8 = pri;
// lab_51F0
    pri = GetTargetFieldObjectID()
    var_16 = pri;
    var_16 = 0;
    OP_PUSH3_C -8109971209704030157, -8109972309215658368, -8109969010680773735
    var_24 = 0;
    var_32 = 7;
    var_40 = var_8;
    var_48 = var_16;
    var_56 = 64;
    pri = fun_5BD0(var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_5290
fun_5290() {
    var_8 = -38167193654305850;
    pri = FlagGet(var_8)
    OP_JNZ lab_5368
    var_16 = -38167193654305850;
    pri = FlagSet(var_16)
    var_32 = 0;
    var_40 = 21;
    var_48 = 16;
    pri = fun_0138(var_40, var_32)
    var_8 = pri;
    var_56 = var_8;
    var_64 = 1182616765845289173;
    pri = WorkSet(var_64, var_56)
// lab_5368
    OP_ZERO_P_S -8
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_5418
    var_24 = 1182616765845289173;
    pri = WorkGet(var_24)
    var_16 = pri;
    alt = 2920;
    pri = var_16;
    OP_LIDX_P_B 3
    var_8 = pri;
    OP_JUMP lab_5478
// lab_5418
    var_16 = 1182616765845289173;
    pri = WorkGet(var_16)
    var_16 = pri;
    alt = 3088;
    pri = var_16;
    OP_LIDX_P_B 3
    var_8 = pri;
// lab_5478
    pri = GetTargetFieldObjectID()
    var_16 = pri;
    var_16 = 0;
    OP_PUSH3_C -8109971209704030157, -8109972309215658368, -8109969010680773735
    var_24 = 0;
    var_32 = 7;
    var_40 = var_8;
    var_48 = var_16;
    var_56 = 64;
    pri = fun_5BD0(var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_5518
fun_5518() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    var_32 = 0;
    var_40 = 1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_35B8(var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_5578
fun_5578() {
    var_16 = arg_0;
    var_24 = 8;
    pri = fun_5898(var_16)
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_55F8
    pri = arg_1;
    OP_JZER lab_55F8
    pri = 1;
    OP_JUMP lab_5600
// lab_55F8
    pri = 0;
// lab_5600
    OP_JZER lab_5638
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_5650(var_8)
    var_8 = pri;
// lab_5638
    pri = 0;
    return pri;
}
// fun_5650
fun_5650() {
    var_16 = 0;
    pri = fun_3E08()
    var_8 = pri;
    var_32 = -4522550749447832008;
    pri = WorkGet(var_32)
    var_16 = pri;
    OP_LOAD_S_BOTH -16, -8
    OP_JSGEQ lab_5880
    var_40 = var_8;
    var_48 = -4522550749447832008;
    pri = WorkSet(var_48, var_40)
    pri = 3256;
    OP_ADDR_ALT -80
    OP_MOVS 64
    var_120 = 0;
    var_128 = 3;
    var_136 = 0;
    var_144 = 100;
    var_152 = -1;
    OP_ADDR_P_PRI -80
    var_160 = pri;
    pri = var_8;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    var_168 = pri;
    var_176 = arg_0;
    var_184 = 56;
    pri = fun_1268(var_176, var_168, var_160, var_152, var_144, var_136, var_128)
    var_192 = 1;
    var_200 = 8;
    pri = fun_1460(var_192)
    var_208 = 0;
    var_216 = 3;
    var_224 = 0;
    var_232 = 100;
    var_240 = -1;
    var_248 = -7820468912550554221;
    var_256 = arg_0;
    var_264 = 56;
    pri = fun_1268(var_256, var_248, var_240, var_232, var_224, var_216, var_208)
    var_272 = 1;
    var_280 = 8;
    pri = fun_1460(var_272)
    pri = 1;
    return pri;
// lab_5880
    pri = 0;
    return pri;
}
// fun_5898
fun_5898() {
    var_8 = 7490112706014529862;
    pri = FlagGet(var_8)
    OP_JZER lab_5960
    var_16 = 3826436706156159871;
    pri = FlagGet(var_16)
    OP_JNZ lab_5960
    var_24 = -7228061449536297730;
    pri = FlagGet(var_24)
    OP_JZER lab_5960
    pri = 1;
    OP_JUMP lab_5968
// lab_5960
    pri = 0;
// lab_5968
    OP_JZER lab_5A28
    var_8 = 3826436706156159871;
    pri = FlagSet(var_8)
    var_16 = 0;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = -7819471655503956069;
    var_64 = arg_0;
    var_72 = 56;
    pri = fun_1268(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = 1;
    var_88 = 8;
    pri = fun_1460(var_80)
    pri = 1;
    return pri;
// lab_5A28
    var_8 = 9010327285021969031;
    pri = FlagGet(var_8)
    OP_JZER lab_5AB0
    var_16 = 7640617178953142632;
    pri = FlagGet(var_16)
    OP_JNZ lab_5AB0
    pri = 1;
    OP_JUMP lab_5AB8
// lab_5AB0
    pri = 0;
// lab_5AB8
    OP_JZER lab_5BC0
    var_8 = 7640617178953142632;
    pri = FlagSet(var_8)
    var_16 = 0;
    pri = fun_3E08()
    var_24 = pri;
    var_32 = -4522550749447832008;
    pri = WorkSet(var_32, var_24)
    var_40 = 0;
    var_48 = 3;
    var_56 = 0;
    var_64 = 100;
    var_72 = -1;
    var_80 = -7819469456480699647;
    var_88 = arg_0;
    var_96 = 56;
    pri = fun_1268(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 1;
    var_112 = 8;
    pri = fun_1460(var_104)
    pri = 1;
    return pri;
// lab_5BC0
    pri = 0;
    return pri;
}
// fun_5BD0
fun_5BD0() {
    var_8 = 0;
    var_16 = 8;
    pri = TempWorkSet(var_16, var_8)
    var_24 = 0;
    var_32 = 9;
    pri = TempWorkSet(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_5518(var_40)
    pri = arg_2;
    OP_JZER lab_5C98
    pri = arg_2;
    OP_EQ_P_C_PRI 3
    OP_JNZ lab_5C98
    pri = 0;
    OP_JUMP lab_5CA0
// lab_5C98
    pri = 1;
// lab_5CA0
    OP_JZER lab_5D40
    pri = arg_1;
    OP_EQ_C_PRI 7406859748029216881
    var_8 = pri;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_5578(var_16, var_8)
    var_32 = 7640617178953142632;
    pri = FlagGet(var_32)
    OP_JZER lab_5D40
    OP_CONST_S 56, -7819470555992327858
// lab_5D40
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = arg_4;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1268(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1460(var_72)
    pri = arg_2;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_60B0
    pri = 0;
    OP_ADDR_ALT -64
    OP_FILL 64
    pri = 3320;
    OP_ADDR_ALT -64
    OP_MOVS 56
    var_160 = 33;
    var_168 = 8;
    pri = fun_0300(var_160)
    OP_MOVE_ALT 
    pri = 0;
    OP_XCHG 
    OP_SGRTR 
    var_72 = pri;
    OP_PUSH_P_ADR -64
    pri = PlayerIsGetDressupItemByPreset(var_176)
    var_80 = pri;
    pri = var_72;
    OP_JZER lab_5EF8
    pri = var_80;
    OP_JNZ lab_5EF8
    pri = 1;
    OP_JUMP lab_5F00
// lab_60B0
    pri = arg_7;
    OP_JZER lab_6120
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_61C0(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_JUMP lab_6160
// lab_6120
    var_8 = arg_5;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_6400(var_40, var_32, var_24, var_16, var_8)
// lab_6160
    var_8 = 0;
    pri = fun_1520()
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = arg_0;
    var_48 = 32;
    pri = fun_3778(var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
// lab_5EF8
    pri = 0;
// lab_5F00
    OP_JZER lab_60A8
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 3707442914912398146;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1268(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1460(var_72)
    var_88 = 0;
    pri = fun_1520()
    var_96 = 8901966799088269872;
    OP_PUSH_P_ADR -64
    var_104 = 16;
    pri = fun_3C30(var_96, var_88)
    var_112 = 0;
    var_120 = 3;
    var_128 = 0;
    var_136 = 100;
    var_144 = -1;
    var_152 = arg_5;
    var_160 = arg_0;
    var_168 = 56;
    pri = fun_1268(var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_176 = 1;
    var_184 = 8;
    pri = fun_1460(var_176)
    var_192 = 0;
    pri = fun_1520()
    var_200 = 0;
    var_208 = 0;
    var_216 = 0;
    var_224 = arg_0;
    var_232 = 32;
    pri = fun_3778(var_224, var_216, var_208, var_200)
    pri = 0;
    return pri;
// lab_60A8
}
// fun_61C0
fun_61C0() {
    var_16 = 0;
    var_24 = 8;
    pri = fun_64D0(var_16)
    var_8 = pri;
    OP_JUMP lab_6208
// lab_6208
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 0;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_1888(var_40, var_32, var_24, var_16, var_8)
    pri = var_8;
    OP_JNZ lab_62D8
    pri = MsgWinClose()
    var_56 = arg_5;
    var_64 = var_8;
    var_72 = arg_3;
    var_80 = arg_2;
    var_88 = arg_1;
    var_96 = arg_0;
    var_104 = 48;
    pri = fun_65E0(var_96, var_88, var_80, var_72, var_64, var_56)
    var_8 = pri;
    OP_JUMP lab_63D8
// lab_62D8
    pri = var_8;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6358
    pri = MsgWinClose()
    var_8 = arg_5;
    var_16 = var_8;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_66F0(var_24, var_16, var_8)
    var_8 = pri;
    OP_JUMP lab_63D8
// lab_6358
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = arg_4;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1268(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1460(var_72)
    OP_JUMP lab_63E8
// lab_63E8
    pri = 0;
    return pri;
// lab_63D8
    OP_JUMP lab_6208
}
// fun_6400
fun_6400() {
    var_8 = 0;
    pri = fun_1520()
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    pri = ExecuteBuyShopEvent_(var_32, var_24, var_16)
    var_40 = 0;
    var_48 = 3;
    var_56 = 0;
    var_64 = 100;
    var_72 = -1;
    var_80 = arg_4;
    var_88 = arg_0;
    var_96 = 56;
    pri = fun_1268(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 1;
    var_112 = 8;
    pri = fun_1460(var_104)
    pri = 0;
    return pri;
}
// fun_64D0
fun_64D0() {
    var_8 = 0;
    var_16 = 4364771403952998898;
    var_24 = 0;
    var_32 = 24;
    pri = fun_1550(var_24, var_16, var_8)
    var_40 = 0;
    var_48 = 4364772503464627109;
    var_56 = 1;
    var_64 = 24;
    pri = fun_1550(var_56, var_48, var_40)
    var_72 = 0;
    var_80 = 4364769204929742476;
    var_88 = 2;
    var_96 = 24;
    pri = fun_1550(var_88, var_80, var_72)
    var_112 = 0;
    var_120 = 1;
    var_128 = arg_0;
    var_136 = 1;
    var_144 = 32;
    pri = fun_1638(var_136, var_128, var_120, var_112)
    var_8 = pri;
    pri = var_8;
    return pri;
}
// fun_65E0
fun_65E0() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    pri = ExecuteBuyShopEvent_(var_24, var_16, var_8)
    var_32 = 0;
    var_40 = 3;
    var_48 = 0;
    var_56 = 100;
    var_64 = -1;
    var_72 = arg_5;
    var_80 = arg_0;
    var_88 = 56;
    pri = fun_1268(var_80, var_72, var_64, var_56, var_48, var_40, var_32)
    var_96 = arg_4;
    var_104 = 8;
    pri = fun_64D0(var_96)
    arg_4 = pri;
    var_112 = 0;
    var_120 = 8;
    pri = TempWorkSet(var_120, var_112)
    var_128 = 0;
    var_136 = 9;
    pri = TempWorkSet(var_136, var_128)
    pri = arg_4;
    return pri;
}
// fun_66F0
fun_66F0() {
    pri = ExecuteSellShopEvent_()
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = arg_2;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1268(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = arg_1;
    var_80 = 8;
    pri = fun_64D0(var_72)
    arg_1 = pri;
    pri = arg_1;
    return pri;
}
