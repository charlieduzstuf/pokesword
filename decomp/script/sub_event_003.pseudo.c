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
    pri = ABKeyWait_()
    return pri;
}
// fun_0160
fun_0160() {
    OP_ZERO_P_S -8
    OP_JUMP lab_0190
// lab_0190
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_0290
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_0210
    pri = 0;
    return pri;
// lab_0290
    pri = 0;
    return pri;
// lab_0210
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
    OP_JUMP lab_0188
// lab_0188
    OP_INC_P_S -8
}
// fun_02A8
fun_02A8() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_02F0
// lab_02F0
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0330
    OP_JUMP lab_03A0
// lab_0330
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0370
    OP_JUMP lab_03A0
// lab_0370
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_02F0
// lab_03A0
    pri = 0;
    return pri;
}
// fun_03B8
fun_03B8() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_03E8
fun_03E8() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0420
// lab_0420
    var_8 = 0;
    pri = fun_0538()
    OP_JNZ lab_0458
    OP_JUMP lab_0488
// lab_0458
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0420
// lab_0488
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_04B8
// lab_04B8
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_04F8
    pri = 0;
    return pri;
// lab_04F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_04B8
    pri = 0;
    return pri;
}
// fun_0538
fun_0538() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0560
fun_0560() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05B0
fun_05B0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0A80(var_8)
    OP_JZER lab_0628
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0AB0(var_24)
    OP_JNZ lab_0628
    pri = 0;
    return pri;
// lab_0628
    OP_JUMP lab_0638
// lab_0638
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0698
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0698
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0638
    pri = 0;
    return pri;
}
// fun_06D8
fun_06D8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0710
fun_0710() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0750
fun_0750() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0788
fun_0788() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_07D0
    pri = 0;
    return pri;
// lab_07D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0810
// lab_0810
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0A80(var_8)
    OP_JNZ lab_0898
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0888
    pri = 0;
    return pri;
// lab_0898
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_08E0
    pri = 0;
    return pri;
// lab_08E0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0940
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0988(var_8)
    pri = 0;
    return pri;
// lab_0940
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0810
    pri = 0;
    return pri;
// lab_0888
    OP_JUMP lab_08E0
}
// fun_0988
fun_0988() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_09C0
fun_09C0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0A00
fun_0A00() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0A40
fun_0A40() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0A80
fun_0A80() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0AB0
fun_0AB0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0AE0
fun_0AE0() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_0B10
fun_0B10() {
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
// switch_1128
        case default:
        {
// switch_1128_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1170
// lab_1170
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
            OP_JNZ lab_1218
            var_88 = 0;
            pri = fun_14E8()
// lab_1218
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1128_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0D10
                case default:
                {
// switch_0D10_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0D88
// lab_0D88
                    OP_JUMP lab_1170
                }
                case 0x0:
                {
// switch_0D10_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0D88
                }
                case 0x1:
                {
// switch_0D10_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0D88
                }
                case 0x2:
                {
// switch_0D10_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0D88
                }
                case 0x3:
                {
// switch_0D10_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0D88
                }
                case 0x4:
                {
// switch_0D10_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0D88
                }
                case 0x5:
                {
// switch_0D10_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0D88
                }
            }
        }
        case 0x65:
        {
// switch_1128_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_0EC8
                case default:
                {
// switch_0EC8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0F40
// lab_0F40
                    OP_JUMP lab_1170
                }
                case 0x0:
                {
// switch_0EC8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_0F40
                }
                case 0x1:
                {
// switch_0EC8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_0F40
                }
                case 0x2:
                {
// switch_0EC8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_0F40
                }
                case 0x3:
                {
// switch_0EC8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0F40
                }
                case 0x4:
                {
// switch_0EC8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_0F40
                }
                case 0x5:
                {
// switch_0EC8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_0F40
                }
            }
        }
        case 0x66:
        {
// switch_1128_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1080
                case default:
                {
// switch_1080_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_10F8
// lab_10F8
                    OP_JUMP lab_1170
                }
                case 0x0:
                {
// switch_1080_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_10F8
                }
                case 0x1:
                {
// switch_1080_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_10F8
                }
                case 0x2:
                {
// switch_1080_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_10F8
                }
                case 0x3:
                {
// switch_1080_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_10F8
                }
                case 0x4:
                {
// switch_1080_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_10F8
                }
                case 0x5:
                {
// switch_1080_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_10F8
                }
            }
        }
    }
}
// fun_1230
fun_1230() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_0B10(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1298
fun_1298() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0750(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1340
    pri = 1;
    return pri;
// lab_1340
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1388
fun_1388() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_13D8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1298(var_8)
    arg_2 = pri;
// lab_13D8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0B10(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1438
fun_1438() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1230(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1488
fun_1488() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1438(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_14E8
fun_14E8() {
    OP_JUMP lab_1500
// lab_1500
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1540
    pri = 0;
    return pri;
// lab_1540
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1500
    pri = 0;
    return pri;
}
// fun_1580
fun_1580() {
    var_8 = 0;
    pri = fun_14E8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1630
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_1630
    pri = 0;
    return pri;
}
// fun_1640
fun_1640() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1670
fun_1670() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_16A8
fun_16A8() {
    OP_JUMP lab_16C0
// lab_16C0
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1708
    OP_JUMP lab_1738
    OP_JUMP lab_1728
// lab_1708
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_1738
    pri = 0;
    return pri;
// lab_1728
    OP_JUMP lab_16C0
}
// fun_1748
fun_1748() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_1778
fun_1778() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_17C8
fun_17C8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1818
fun_1818() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1868
fun_1868() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_18B8
fun_18B8() {
    pri = arg_4;
    OP_JNZ lab_18F0
    var_8 = 0;
    pri = fun_09C0()
// lab_18F0
    pri = arg_1;
    switch (pri) {
// switch_2CC8
        case default:
        {
// switch_2CC8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 856;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0A80(var_264)
            OP_JZER lab_3290
            pri = arg_3;
            switch (pri) {
// switch_3238
                case default:
                {
// switch_3238_case_default
                    OP_JUMP lab_3548
// lab_3548
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_35B8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_35B8
                    var_8 = 0;
                    pri = fun_0A00()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_3238_case_0x1
                    var_8 = 32;
                    var_16 = 1008;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_3238_case_default
                }
                case 0x2:
                {
// switch_3238_case_0x2
                    var_8 = 32;
                    var_16 = 1112;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_3238_case_default
                }
                case 0x3:
                {
// switch_3238_case_0x3
                    var_8 = 32;
                    var_16 = 912;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_3238_case_default
                }
            }
// lab_3290
            pri = arg_1;
            OP_JZER lab_32E0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_32E0
            pri = 0;
            OP_JUMP lab_32E8
// lab_32E0
            pri = 1;
// lab_32E8
            OP_JZER lab_3350
            var_8 = 1208;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0750(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_3350
            pri = 1;
            OP_JUMP lab_3358
// lab_3350
            pri = 0;
// lab_3358
            OP_JZER lab_33A8
            var_8 = 32;
            var_16 = 1304;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_3548
// lab_33A8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_3410
            var_8 = 32;
            var_16 = 1464;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_3548
// lab_3410
            var_16 = 1584;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0750(var_24, var_16)
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
// switch_2CC8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x1:
        {
// switch_2CC8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x2:
        {
// switch_2CC8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x3:
        {
// switch_2CC8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x4:
        {
// switch_2CC8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x5:
        {
// switch_2CC8_case_0x5
            var_8 = 1;
            var_16 = 336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0710(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0988(var_40)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x6:
        {
// switch_2CC8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x7:
        {
// switch_2CC8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x8:
        {
// switch_2CC8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x9:
        {
// switch_2CC8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0xa:
        {
// switch_2CC8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0xb:
        {
// switch_2CC8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0xc:
        {
// switch_2CC8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0xd:
        {
// switch_2CC8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0xe:
        {
// switch_2CC8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0xf:
        {
// switch_2CC8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x10:
        {
// switch_2CC8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x11:
        {
// switch_2CC8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x12:
        {
// switch_2CC8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x13:
        {
// switch_2CC8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x14:
        {
// switch_2CC8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x15:
        {
// switch_2CC8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x16:
        {
// switch_2CC8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x17:
        {
// switch_2CC8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x18:
        {
// switch_2CC8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x19:
        {
// switch_2CC8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x1a:
        {
// switch_2CC8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x1b:
        {
// switch_2CC8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x1c:
        {
// switch_2CC8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x1d:
        {
// switch_2CC8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x1e:
        {
// switch_2CC8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x1f:
        {
// switch_2CC8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x20:
        {
// switch_2CC8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x21:
        {
// switch_2CC8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x22:
        {
// switch_2CC8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x23:
        {
// switch_2CC8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x24:
        {
// switch_2CC8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x25:
        {
// switch_2CC8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x26:
        {
// switch_2CC8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x27:
        {
// switch_2CC8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x28:
        {
// switch_2CC8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x29:
        {
// switch_2CC8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x2a:
        {
// switch_2CC8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x2b:
        {
// switch_2CC8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x2c:
        {
// switch_2CC8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x2d:
        {
// switch_2CC8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x2e:
        {
// switch_2CC8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x2f:
        {
// switch_2CC8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x30:
        {
// switch_2CC8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x31:
        {
// switch_2CC8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x32:
        {
// switch_2CC8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x33:
        {
// switch_2CC8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x34:
        {
// switch_2CC8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x35:
        {
// switch_2CC8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x36:
        {
// switch_2CC8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x37:
        {
// switch_2CC8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x38:
        {
// switch_2CC8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x39:
        {
// switch_2CC8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x3a:
        {
// switch_2CC8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x3b:
        {
// switch_2CC8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x3c:
        {
// switch_2CC8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 432;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x3d:
        {
// switch_2CC8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 608;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
        case 0x3e:
        {
// switch_2CC8_case_0x3e
            var_8 = 3;
            var_16 = 752;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0710(var_24, var_16, var_8)
            OP_JUMP switch_2CC8_case_default
        }
    }
}
// fun_35E8
fun_35E8() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_36E8
        case default:
        {
// switch_36E8_case_default
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
// switch_36E8_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_36E8_case_default
        }
        case 0x1:
        {
// switch_36E8_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_36E8_case_default
        }
        case 0x2:
        {
// switch_36E8_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_36E8_case_default
        }
        case 0x3:
        {
// switch_36E8_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_36E8_case_default
        }
    }
}
// fun_37A8
fun_37A8() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_37F8
// lab_37F8
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 1752;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_3870
    OP_JUMP lab_38A0
// lab_3870
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_37F8
// lab_38A0
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_3928
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_18B8(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0AE0(var_56)
// lab_3928
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_3990
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0A40(var_24, var_16)
// lab_3990
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0A40(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_3A50
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0788(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0560(var_88, var_80, var_72, var_64, var_56)
// lab_3A50
    pri = IsPlayerRideBicycle()
    OP_JZER lab_3A90
    pri = 0;
    return pri;
// lab_3A90
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_3BD8
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 1872;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_06D8(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_3BA0
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_3BD8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_05B0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_05B0(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0788(var_40)
    pri = 0;
    return pri;
// lab_3BA0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0A40(var_16, var_8)
}
// fun_3C60
fun_3C60() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_3DF8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_3CC8
fun_3CC8() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_3D38
    OP_CONST_S -8, 1
// lab_3D38
    pri = arg_0;
    OP_JNZ lab_3D58
    OP_ZERO_P_S -8
// lab_3D58
    pri = var_8;
    OP_JZER lab_3DE0
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_3DE0
    pri = 0;
    return pri;
}
// fun_3DF8
fun_3DF8() {
    var_8 = 2008;
    var_16 = 8;
    pri = fun_1670(var_8)
    var_24 = 0;
    pri = fun_16A8()
    pri = arg_3;
    OP_JNZ lab_3F18
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_3EE0
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_3F88(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_3F08
// lab_3F18
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_4128(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_3EE0
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_4050(var_16, var_8)
// lab_3F08
    OP_JUMP lab_3F60
// lab_3F60
    var_8 = 0;
    pri = fun_1748()
    pri = 0;
    return pri;
}
// fun_3F88
fun_3F88() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_4128(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_4038
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_4038
    pri = 0;
    return pri;
}
// fun_4050
fun_4050() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_17C8(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_1488(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1580(var_72)
    var_88 = 0;
    pri = fun_1640()
    var_96 = 0;
    var_104 = 8;
    pri = fun_1778(var_96)
    pri = 0;
    return pri;
}
// fun_4128
fun_4128() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_4170
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_4430(var_8)
// lab_4170
    pri = arg_4;
    OP_JNZ lab_41D8
    var_8 = 0;
    var_16 = 8;
    pri = fun_1778(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_17C8(var_40, var_32, var_24)
// lab_41D8
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_4278
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_1818(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1488(var_56, var_48, var_40)
    OP_JUMP lab_4368
// lab_4278
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_4330
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_4330
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_4330
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1488(var_24, var_16, var_8)
// lab_4368
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_43A8
    var_8 = 0;
    var_16 = 8;
    pri = fun_02A8(var_8)
// lab_43A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1580(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_4638(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_3CC8(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_4430
fun_4430() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_4490
    var_16 = 2168;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_4490
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_45D0
        case default:
        {
// switch_45D0_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_45C0
            var_16 = 2712;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_45C0
            OP_JUMP lab_4608
// lab_4608
            var_8 = 2928;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_45D0_case_0x1
            var_8 = 2384;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_4608
        }
        case 0x2:
        {
// switch_45D0_case_0x2
            var_8 = 2512;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_4608
        }
    }
}
// fun_4638
fun_4638() {
    pri = arg_2;
    OP_JNZ lab_4720
    var_8 = 0;
    var_16 = 8;
    pri = fun_1778(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_17C8(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_1868(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_4720
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_1488(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1580(var_40)
    var_56 = 0;
    pri = fun_1640()
    pri = 0;
    return pri;
}
// fun_4798
fun_4798() {
    pri = g_mode;
    switch (pri) {
// switch_4920
        case default:
        {
// switch_4920_case_default
            pri = CommandNOP()
            OP_JUMP lab_49B8
// lab_49B8
            pri = 0;
            return pri;
        }
        case 0x8f7737e8c8d16641:
        {
// switch_4920_case_0x8f7737e8c8d16641
            var_8 = 0;
            pri = fun_59A0()
            OP_JUMP lab_49B8
        }
        case 0x9a39423971714c56:
        {
// switch_4920_case_0x9a39423971714c56
            var_8 = 0;
            pri = fun_5108()
            OP_JUMP lab_49B8
        }
        case 0xa428883fbfb3b097:
        {
// switch_4920_case_0xa428883fbfb3b097
            var_8 = 0;
            pri = fun_5710()
            OP_JUMP lab_49B8
        }
        case 0xb32afe69654f84fd:
        {
// switch_4920_case_0xb32afe69654f84fd
            var_8 = 0;
            pri = fun_52D0()
            OP_JUMP lab_49B8
        }
        case 0xbef4b0b8901b0892:
        {
// switch_4920_case_0xbef4b0b8901b0892
            var_8 = 0;
            pri = fun_49E0()
            OP_JUMP lab_49B8
        }
        case 0x0:
        {
// switch_4920_case_0x0
            var_8 = 0;
            pri = fun_49C8()
            OP_JUMP lab_49B8
        }
        case 0x10728a5faee9deb:
        {
// switch_4920_case_0x10728a5faee9deb
            var_8 = 0;
            pri = fun_5858()
            OP_JUMP lab_49B8
        }
        case 0x7032f23fa2466f90:
        {
// switch_4920_case_0x7032f23fa2466f90
            var_8 = 0;
            pri = fun_5498()
            OP_JUMP lab_49B8
        }
    }
}
// fun_49C8
fun_49C8() {
    pri = 0;
    return pri;
}
// fun_49E0
fun_49E0() {
    var_8 = 670600877987690846;
    pri = WorkGet(var_8)
    OP_JNZ lab_4A48
    var_16 = 0;
    pri = fun_4AD8()
    OP_JUMP lab_4AC8
// lab_4A48
    var_8 = 670600877987690846;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 4
    OP_JZER lab_4AB0
    var_16 = 0;
    pri = fun_4FB0()
    OP_JUMP lab_4AC8
// lab_4AB0
    var_8 = 0;
    pri = fun_4DE0()
// lab_4AC8
    pri = 0;
    return pri;
}
// fun_4AD8
fun_4AD8() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = var_8;
    var_64 = 48;
    pri = fun_35E8(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    var_112 = -244192633468431067;
    var_120 = var_8;
    var_128 = 56;
    pri = fun_1388(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = 1;
    var_144 = 8;
    pri = fun_1580(var_136)
    var_152 = 0;
    var_160 = 3;
    var_168 = 0;
    var_176 = 100;
    var_184 = -1;
    var_192 = -244195932003315700;
    var_200 = var_8;
    var_208 = 56;
    pri = fun_1388(var_200, var_192, var_184, var_176, var_168, var_160, var_152)
    var_216 = 1;
    var_224 = 8;
    pri = fun_1580(var_216)
    var_232 = 0;
    pri = fun_1640()
    var_240 = 0;
    var_248 = 0;
    var_256 = 0;
    var_264 = var_8;
    var_272 = 32;
    pri = fun_37A8(var_264, var_256, var_248, var_240)
    var_280 = 1;
    var_288 = 670600877987690846;
    pri = WorkSet(var_288, var_280)
    var_296 = 4297677812289604185;
    var_304 = 8;
    pri = fun_03B8(var_296)
    var_312 = 4030259161792003751;
    var_320 = 8;
    pri = fun_03B8(var_312)
    var_328 = -86091334692859052;
    var_336 = 8;
    pri = fun_03B8(var_328)
    var_344 = 5359895669450946422;
    var_352 = 8;
    pri = fun_03B8(var_344)
    var_360 = -3576349374177777326;
    var_368 = 8;
    pri = fun_03B8(var_360)
    var_376 = -125952833011027486;
    var_384 = 8;
    pri = fun_03B8(var_376)
    var_392 = 0;
    pri = fun_03E8()
    pri = 0;
    return pri;
}
// fun_4DE0
fun_4DE0() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = var_8;
    var_64 = 48;
    pri = fun_35E8(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    var_112 = -244192633468431067;
    var_120 = var_8;
    var_128 = 56;
    pri = fun_1388(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = 1;
    var_144 = 8;
    pri = fun_1580(var_136)
    var_152 = 0;
    var_160 = 3;
    var_168 = 0;
    var_176 = 100;
    var_184 = -1;
    var_192 = -244195932003315700;
    var_200 = var_8;
    var_208 = 56;
    pri = fun_1388(var_200, var_192, var_184, var_176, var_168, var_160, var_152)
    var_216 = 1;
    var_224 = 8;
    pri = fun_1580(var_216)
    var_232 = 0;
    pri = fun_1640()
    var_240 = 0;
    var_248 = 0;
    var_256 = 0;
    var_264 = var_8;
    var_272 = 32;
    pri = fun_37A8(var_264, var_256, var_248, var_240)
    pri = 0;
    return pri;
}
// fun_4FB0
fun_4FB0() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = var_8;
    var_64 = 48;
    pri = fun_35E8(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    var_112 = -244194832491687489;
    var_120 = var_8;
    var_128 = 56;
    pri = fun_1388(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = 1;
    var_144 = 8;
    pri = fun_1580(var_136)
    var_152 = 0;
    pri = fun_1640()
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    var_184 = var_8;
    var_192 = 32;
    pri = fun_37A8(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_5108
fun_5108() {
    var_8 = 670600877987690846;
    pri = WorkGet(var_8)
    alt = 1;
    OP_JSLESS lab_52C0
    var_16 = 3;
    var_24 = 0;
    var_32 = 8409575272093877754;
    var_40 = 24;
    pri = fun_1438(var_32, var_24, var_16)
    var_48 = 1;
    var_56 = 8;
    pri = fun_1580(var_48)
    var_64 = 0;
    pri = fun_1640()
    var_72 = 670600877987690846;
    pri = WorkGet(var_72)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_5240
    var_80 = 2;
    var_88 = 670600877987690846;
    pri = WorkSet(var_88, var_80)
    OP_JUMP lab_52C0
// lab_52C0
    pri = 0;
    return pri;
// lab_5240
    var_8 = 670600877987690846;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 4
    OP_JZER lab_5290
    OP_JUMP lab_52C0
// lab_5290
    var_8 = 1;
    var_16 = 670600877987690846;
    pri = WorkSet(var_16, var_8)
}
// fun_52D0
fun_52D0() {
    var_8 = 670600877987690846;
    pri = WorkGet(var_8)
    alt = 1;
    OP_JSLESS lab_5488
    var_16 = 3;
    var_24 = 0;
    var_32 = 8409574172582249543;
    var_40 = 24;
    pri = fun_1438(var_32, var_24, var_16)
    var_48 = 1;
    var_56 = 8;
    pri = fun_1580(var_48)
    var_64 = 0;
    pri = fun_1640()
    var_72 = 670600877987690846;
    pri = WorkGet(var_72)
    OP_EQ_P_C_PRI 2
    OP_JZER lab_5408
    var_80 = 3;
    var_88 = 670600877987690846;
    pri = WorkSet(var_88, var_80)
    OP_JUMP lab_5488
// lab_5488
    pri = 0;
    return pri;
// lab_5408
    var_8 = 670600877987690846;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 4
    OP_JZER lab_5458
    OP_JUMP lab_5488
// lab_5458
    var_8 = 1;
    var_16 = 670600877987690846;
    pri = WorkSet(var_16, var_8)
}
// fun_5498
fun_5498() {
    var_8 = 670600877987690846;
    pri = WorkGet(var_8)
    alt = 1;
    OP_JSLESS lab_5700
    var_16 = 3;
    var_24 = 0;
    var_32 = 8409573073070621332;
    var_40 = 24;
    pri = fun_1438(var_32, var_24, var_16)
    var_48 = 1;
    var_56 = 8;
    pri = fun_1580(var_48)
    var_64 = 0;
    pri = fun_1640()
    var_72 = 670600877987690846;
    pri = WorkGet(var_72)
    OP_EQ_P_C_PRI 3
    OP_JZER lab_5680
    var_80 = 3;
    var_88 = 0;
    var_96 = 8409568675024108488;
    var_104 = 24;
    pri = fun_1438(var_96, var_88, var_80)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1580(var_112)
    var_128 = 0;
    pri = fun_1640()
    var_136 = 2;
    var_144 = 0;
    var_152 = 8;
    var_160 = 1;
    var_168 = 268;
    var_176 = 40;
    pri = fun_3C60(var_168, var_160, var_152, var_144, var_136)
    var_184 = 4;
    var_192 = 670600877987690846;
    pri = WorkSet(var_192, var_184)
    OP_JUMP lab_5700
// lab_5700
    pri = 0;
    return pri;
// lab_5680
    var_8 = 670600877987690846;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 4
    OP_JZER lab_56D0
    OP_JUMP lab_5700
// lab_56D0
    var_8 = 1;
    var_16 = 670600877987690846;
    pri = WorkSet(var_16, var_8)
}
// fun_5710
fun_5710() {
    var_8 = 670600877987690846;
    pri = WorkGet(var_8)
    alt = 1;
    OP_JSLESS lab_5848
    var_16 = 3;
    var_24 = 0;
    var_32 = 8409571973558993121;
    var_40 = 24;
    pri = fun_1438(var_32, var_24, var_16)
    var_48 = 1;
    var_56 = 8;
    pri = fun_1580(var_48)
    var_64 = 0;
    pri = fun_1640()
    var_72 = 670600877987690846;
    pri = WorkGet(var_72)
    OP_EQ_P_C_PRI 4
    OP_JZER lab_5818
    OP_JUMP lab_5848
// lab_5848
    pri = 0;
    return pri;
// lab_5818
    var_8 = 1;
    var_16 = 670600877987690846;
    pri = WorkSet(var_16, var_8)
}
// fun_5858
fun_5858() {
    var_8 = 670600877987690846;
    pri = WorkGet(var_8)
    alt = 1;
    OP_JSLESS lab_5990
    var_16 = 3;
    var_24 = 0;
    var_32 = 8409570874047364910;
    var_40 = 24;
    pri = fun_1438(var_32, var_24, var_16)
    var_48 = 1;
    var_56 = 8;
    pri = fun_1580(var_48)
    var_64 = 0;
    pri = fun_1640()
    var_72 = 670600877987690846;
    pri = WorkGet(var_72)
    OP_EQ_P_C_PRI 4
    OP_JZER lab_5960
    OP_JUMP lab_5990
// lab_5990
    pri = 0;
    return pri;
// lab_5960
    var_8 = 1;
    var_16 = 670600877987690846;
    pri = WorkSet(var_16, var_8)
}
// fun_59A0
fun_59A0() {
    var_8 = 670600877987690846;
    pri = WorkGet(var_8)
    alt = 1;
    OP_JSLESS lab_5AD8
    var_16 = 3;
    var_24 = 0;
    var_32 = 8409569774535736699;
    var_40 = 24;
    pri = fun_1438(var_32, var_24, var_16)
    var_48 = 1;
    var_56 = 8;
    pri = fun_1580(var_48)
    var_64 = 0;
    pri = fun_1640()
    var_72 = 670600877987690846;
    pri = WorkGet(var_72)
    OP_EQ_P_C_PRI 4
    OP_JZER lab_5AA8
    OP_JUMP lab_5AD8
// lab_5AD8
    pri = 0;
    return pri;
// lab_5AA8
    var_8 = 1;
    var_16 = 670600877987690846;
    pri = WorkSet(var_16, var_8)
}
