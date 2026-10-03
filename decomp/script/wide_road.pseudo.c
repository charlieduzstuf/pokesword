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
    pri = arg_1;
    OP_JZER lab_01A8
    var_8 = arg_0;
    pri = GetPublicRand(var_8)
    return pri;
// lab_01A8
    pri = arg_0;
    OP_ADD_P_C -1
    var_8 = pri;
    pri = GetPublicRand(var_8)
    return pri;
}
// fun_01E0
fun_01E0() {
    OP_ZERO_P_S -8
    OP_JUMP lab_0210
// lab_0210
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_0310
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_0290
    pri = 0;
    return pri;
// lab_0310
    pri = 0;
    return pri;
// lab_0290
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
    OP_JUMP lab_0208
// lab_0208
    OP_INC_P_S -8
}
// fun_0328
fun_0328() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0388
fun_0388() {
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
// fun_03F8
fun_03F8() {
    OP_JUMP lab_0410
// lab_0410
    pri = FadeWait_()
    OP_JZER lab_0448
    pri = 0;
    return pri;
// lab_0448
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0410
    pri = 0;
    return pri;
}
// fun_0488
fun_0488() {
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
// fun_0528
fun_0528() {
    var_8 = arg_0;
    pri = IncRecord_(var_8)
    return pri;
}
// fun_0558
fun_0558() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_05A0
// lab_05A0
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_05E0
    OP_JUMP lab_0650
// lab_05E0
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0620
    OP_JUMP lab_0650
// lab_0620
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05A0
// lab_0650
    pri = 0;
    return pri;
}
// fun_0668
fun_0668() {
    pri = ReportStart_()
    pri = 0;
    return pri;
}
// fun_0698
fun_0698() {
    OP_JUMP lab_06B0
// lab_06B0
    pri = ReportWait_()
    OP_JZER lab_06E8
    OP_JUMP lab_06F8
// lab_06E8
    OP_JUMP lab_06B0
// lab_06F8
    pri = 0;
    return pri;
}
// fun_0708
fun_0708() {
    var_16 = 0;
    pri = fun_0888()
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_07C8
        case default:
        {
// switch_07C8_case_default
            var_8 = 0;
            pri = DebugAssert(var_8)
            pri = arg_0;
            return pri;
        }
        case 0x0:
        {
// switch_07C8_case_0x2
            pri = arg_0;
            return pri;
            OP_JUMP switch_07C8_case_default
        }
        case 0x1:
        {
// switch_07C8_case_0x2
            pri = arg_0;
            return pri;
            OP_JUMP switch_07C8_case_default
        }
        case 0x2:
        {
// switch_07C8_case_0x2
            pri = arg_0;
            return pri;
            OP_JUMP switch_07C8_case_default
        }
        case 0x3:
        {
// switch_07C8_case_0x4
            pri = arg_1;
            return pri;
            OP_JUMP switch_07C8_case_default
        }
        case 0x4:
        {
// switch_07C8_case_0x4
            pri = arg_1;
            return pri;
            OP_JUMP switch_07C8_case_default
        }
        case 0x5:
        {
// switch_07C8_case_0x6
            pri = arg_2;
            return pri;
            OP_JUMP switch_07C8_case_default
        }
        case 0x6:
        {
// switch_07C8_case_0x6
            pri = arg_2;
            return pri;
            OP_JUMP switch_07C8_case_default
        }
    }
}
// fun_0888
fun_0888() {
    pri = GetMinuteTimeZone_()
    return pri;
}
// fun_08B0
fun_08B0() {
    OP_ZERO_P_S -8
    OP_CONST_S -16, 1800
    OP_JUMP lab_08F8
// lab_08F8
    pri = IsRunningAutoSave()
    OP_JNZ lab_0938
    pri = 0;
    return pri;
// lab_0938
    OP_INC_P_S -8
    OP_LOAD_S_BOTH -8, -16
    OP_JSLESS lab_0980
    pri = 0;
    return pri;
// lab_0980
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_08F8
    pri = 0;
    return pri;
}
// fun_09C8
fun_09C8() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_09F8
fun_09F8() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0A28
fun_0A28() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0A80
fun_0A80() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0AC0
fun_0AC0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0B10
fun_0B10() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0B68
fun_0B68() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1038(var_8)
    OP_JZER lab_0BE0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1068(var_24)
    OP_JNZ lab_0BE0
    pri = 0;
    return pri;
// lab_0BE0
    OP_JUMP lab_0BF0
// lab_0BF0
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0C50
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0C50
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0BF0
    pri = 0;
    return pri;
}
// fun_0C90
fun_0C90() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0CC8
fun_0CC8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0D08
fun_0D08() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0D40
fun_0D40() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0D88
    pri = 0;
    return pri;
// lab_0D88
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0DC8
// lab_0DC8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1038(var_8)
    OP_JNZ lab_0E50
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0E40
    pri = 0;
    return pri;
// lab_0E50
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0E98
    pri = 0;
    return pri;
// lab_0E98
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0EF8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F40(var_8)
    pri = 0;
    return pri;
// lab_0EF8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0DC8
    pri = 0;
    return pri;
// lab_0E40
    OP_JUMP lab_0E98
}
// fun_0F40
fun_0F40() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0F78
fun_0F78() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FB8
fun_0FB8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FF8
fun_0FF8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1038
fun_1038() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1068
fun_1068() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1098
fun_1098() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_10C8
fun_10C8() {
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
// switch_16E0
        case default:
        {
// switch_16E0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1728
// lab_1728
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
            OP_JNZ lab_17D0
            var_88 = 0;
            pri = fun_1C38()
// lab_17D0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_16E0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_12C8
                case default:
                {
// switch_12C8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1340
// lab_1340
                    OP_JUMP lab_1728
                }
                case 0x0:
                {
// switch_12C8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1340
                }
                case 0x1:
                {
// switch_12C8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1340
                }
                case 0x2:
                {
// switch_12C8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1340
                }
                case 0x3:
                {
// switch_12C8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1340
                }
                case 0x4:
                {
// switch_12C8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1340
                }
                case 0x5:
                {
// switch_12C8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1340
                }
            }
        }
        case 0x65:
        {
// switch_16E0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1480
                case default:
                {
// switch_1480_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_14F8
// lab_14F8
                    OP_JUMP lab_1728
                }
                case 0x0:
                {
// switch_1480_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_14F8
                }
                case 0x1:
                {
// switch_1480_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_14F8
                }
                case 0x2:
                {
// switch_1480_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_14F8
                }
                case 0x3:
                {
// switch_1480_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_14F8
                }
                case 0x4:
                {
// switch_1480_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_14F8
                }
                case 0x5:
                {
// switch_1480_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_14F8
                }
            }
        }
        case 0x66:
        {
// switch_16E0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1638
                case default:
                {
// switch_1638_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_16B0
// lab_16B0
                    OP_JUMP lab_1728
                }
                case 0x0:
                {
// switch_1638_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_16B0
                }
                case 0x1:
                {
// switch_1638_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_16B0
                }
                case 0x2:
                {
// switch_1638_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_16B0
                }
                case 0x3:
                {
// switch_1638_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_16B0
                }
                case 0x4:
                {
// switch_1638_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_16B0
                }
                case 0x5:
                {
// switch_1638_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_16B0
                }
            }
        }
    }
}
// fun_17E8
fun_17E8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_10C8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1850
fun_1850() {
    var_8 = arg_3;
    pri = arg_2;
    alt = 16;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_17E8(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_18B8
fun_18B8() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0D08(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1960
    pri = 1;
    return pri;
// lab_1960
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_19A8
fun_19A8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_19F8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_18B8(var_8)
    arg_2 = pri;
// lab_19F8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_10C8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1A58
fun_1A58() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1AA8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_18B8(var_8)
    arg_2 = pri;
// lab_1AA8
    var_8 = arg_6;
    var_16 = arg_5;
    pri = arg_4;
    alt = 1;
    pri |= alt;
    var_24 = pri;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_19A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B20
fun_1B20() {
    var_8 = arg_2;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_19A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B88
fun_1B88() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_17E8(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1BD8
fun_1BD8() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1B88(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1C38
fun_1C38() {
    OP_JUMP lab_1C50
// lab_1C50
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1C90
    pri = 0;
    return pri;
// lab_1C90
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1C50
    pri = 0;
    return pri;
}
// fun_1CD0
fun_1CD0() {
    var_8 = 0;
    pri = fun_1C38()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1D80
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_1D80
    pri = 0;
    return pri;
}
// fun_1D90
fun_1D90() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1DC0
fun_1DC0() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1DF0
// lab_1DF0
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1E30
    OP_JUMP lab_1E60
// lab_1E30
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1DF0
// lab_1E60
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1EA8
fun_1EA8() {
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
// fun_1F18
fun_1F18() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_1F90()
    return pri;
}
// fun_1F90
fun_1F90() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_1FD0
fun_1FD0() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_2008
fun_2008() {
    OP_JUMP lab_2020
// lab_2020
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_2068
    OP_JUMP lab_2098
    OP_JUMP lab_2088
// lab_2068
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_2098
    pri = 0;
    return pri;
// lab_2088
    OP_JUMP lab_2020
}
// fun_20A8
fun_20A8() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_20D8
fun_20D8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2128
fun_2128() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2178
fun_2178() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_21C8
fun_21C8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2218
fun_2218() {
    var_8 = arg_0;
    pri = CallRaidBattleMatchingEvent_(var_8)
    pri = 0;
    return pri;
}
// fun_2250
fun_2250() {
    pri = arg_1;
    OP_JNZ lab_2298
    var_8 = 336;
    pri = GetFnvHash64(var_8)
    arg_1 = pri;
// lab_2298
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = 0;
    var_48 = arg_0;
    var_56 = 0;
    pri = CallTrainerBattleCore(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_22F0
fun_22F0() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2368
fun_2368() {
    var_8 = 0;
    pri = fun_22F0()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_23E8
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_23E8
    pri = 1;
    return pri;
// lab_23E8
    var_8 = 0;
    pri = fun_22F0()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2428
    pri = 1;
    return pri;
// lab_2428
    var_8 = 0;
    pri = fun_22F0()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2458
fun_2458() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_24E8(var_8)
    var_24 = arg_0;
    pri = OpenWalletWindow_(var_24)
    pri = 0;
    return pri;
}
// fun_24B0
fun_24B0() {
    var_8 = 0;
    pri = CloseWalletWindow_(var_8)
    pri = 0;
    return pri;
}
// fun_24E8
fun_24E8() {
    var_8 = arg_0;
    pri = UpdateWalletWindow_(var_8)
    pri = 0;
    return pri;
}
// fun_2520
fun_2520() {
    var_8 = arg_0;
    pri = AddWatt_(var_8)
    return pri;
}
// fun_2550
fun_2550() {
    var_8 = arg_0;
    pri = ConsumeWatt_(var_8)
    return pri;
}
// fun_2580
fun_2580() {
    pri = GetWatt_()
    return pri;
}
// fun_25A8
fun_25A8() {
    pri = arg_4;
    OP_JNZ lab_25E0
    var_8 = 0;
    pri = fun_0F78()
// lab_25E0
    pri = arg_1;
    switch (pri) {
// switch_39B8
        case default:
        {
// switch_39B8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 864;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1038(var_264)
            OP_JZER lab_3F80
            pri = arg_3;
            switch (pri) {
// switch_3F28
                case default:
                {
// switch_3F28_case_default
                    OP_JUMP lab_4238
// lab_4238
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_42A8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_42A8
                    var_8 = 0;
                    pri = fun_0FB8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_3F28_case_0x1
                    var_8 = 32;
                    var_16 = 1016;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01E0(var_16, var_8, var_0)
                    OP_JUMP switch_3F28_case_default
                }
                case 0x2:
                {
// switch_3F28_case_0x2
                    var_8 = 32;
                    var_16 = 1120;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01E0(var_16, var_8, var_0)
                    OP_JUMP switch_3F28_case_default
                }
                case 0x3:
                {
// switch_3F28_case_0x3
                    var_8 = 32;
                    var_16 = 920;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01E0(var_16, var_8, var_0)
                    OP_JUMP switch_3F28_case_default
                }
            }
// lab_3F80
            pri = arg_1;
            OP_JZER lab_3FD0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_3FD0
            pri = 0;
            OP_JUMP lab_3FD8
// lab_3FD0
            pri = 1;
// lab_3FD8
            OP_JZER lab_4040
            var_8 = 1216;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0D08(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_4040
            pri = 1;
            OP_JUMP lab_4048
// lab_4040
            pri = 0;
// lab_4048
            OP_JZER lab_4098
            var_8 = 32;
            var_16 = 1312;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_01E0(var_16, var_8, var_0)
            OP_JUMP lab_4238
// lab_4098
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_4100
            var_8 = 32;
            var_16 = 1472;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_01E0(var_16, var_8, var_0)
            OP_JUMP lab_4238
// lab_4100
            var_16 = 1592;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0D08(var_24, var_16)
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
            var_176 = 1696;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 1712;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_39B8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x1:
        {
// switch_39B8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x2:
        {
// switch_39B8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x3:
        {
// switch_39B8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x4:
        {
// switch_39B8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x5:
        {
// switch_39B8_case_0x5
            var_8 = 1;
            var_16 = 344;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CC8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0F40(var_40)
            OP_JUMP switch_39B8_case_default
        }
        case 0x6:
        {
// switch_39B8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x7:
        {
// switch_39B8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x8:
        {
// switch_39B8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x9:
        {
// switch_39B8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0xa:
        {
// switch_39B8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0xb:
        {
// switch_39B8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0xc:
        {
// switch_39B8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0xd:
        {
// switch_39B8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0xe:
        {
// switch_39B8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0xf:
        {
// switch_39B8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x10:
        {
// switch_39B8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x11:
        {
// switch_39B8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x12:
        {
// switch_39B8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x13:
        {
// switch_39B8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x14:
        {
// switch_39B8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x15:
        {
// switch_39B8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x16:
        {
// switch_39B8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x17:
        {
// switch_39B8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x18:
        {
// switch_39B8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x19:
        {
// switch_39B8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x1a:
        {
// switch_39B8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x1b:
        {
// switch_39B8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x1c:
        {
// switch_39B8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x1d:
        {
// switch_39B8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x1e:
        {
// switch_39B8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x1f:
        {
// switch_39B8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x20:
        {
// switch_39B8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x21:
        {
// switch_39B8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x22:
        {
// switch_39B8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x23:
        {
// switch_39B8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x24:
        {
// switch_39B8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x25:
        {
// switch_39B8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x26:
        {
// switch_39B8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x27:
        {
// switch_39B8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x28:
        {
// switch_39B8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x29:
        {
// switch_39B8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x2a:
        {
// switch_39B8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x2b:
        {
// switch_39B8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x2c:
        {
// switch_39B8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x2d:
        {
// switch_39B8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x2e:
        {
// switch_39B8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x2f:
        {
// switch_39B8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x30:
        {
// switch_39B8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x31:
        {
// switch_39B8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x32:
        {
// switch_39B8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x33:
        {
// switch_39B8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x34:
        {
// switch_39B8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x35:
        {
// switch_39B8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x36:
        {
// switch_39B8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x37:
        {
// switch_39B8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x38:
        {
// switch_39B8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x39:
        {
// switch_39B8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x3a:
        {
// switch_39B8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x3b:
        {
// switch_39B8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x3c:
        {
// switch_39B8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 440;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x3d:
        {
// switch_39B8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 616;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
        case 0x3e:
        {
// switch_39B8_case_0x3e
            var_8 = 3;
            var_16 = 760;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CC8(var_24, var_16, var_8)
            OP_JUMP switch_39B8_case_default
        }
    }
}
// fun_42D8
fun_42D8() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_43D8
        case default:
        {
// switch_43D8_case_default
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
// switch_43D8_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_43D8_case_default
        }
        case 0x1:
        {
// switch_43D8_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_43D8_case_default
        }
        case 0x2:
        {
// switch_43D8_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_43D8_case_default
        }
        case 0x3:
        {
// switch_43D8_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_43D8_case_default
        }
    }
}
// fun_4498
fun_4498() {
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
    pri = fun_19A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_1C38()
    pri = 0;
    return pri;
}
// fun_4530
fun_4530() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_42D8(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_4498(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_45D8
fun_45D8() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_4628
// lab_4628
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 1760;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_46A0
    OP_JUMP lab_46D0
// lab_46A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_4628
// lab_46D0
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_4758
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_25A8(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1098(var_56)
// lab_4758
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_47C0
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0FF8(var_24, var_16)
// lab_47C0
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0FF8(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_4880
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0D40(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0AC0(var_88, var_80, var_72, var_64, var_56)
// lab_4880
    pri = IsPlayerRideBicycle()
    OP_JZER lab_48C0
    pri = 0;
    return pri;
// lab_48C0
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_4A08
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 1880;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0C90(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_49D0
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_4A08
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B68(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0B68(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0D40(var_40)
    pri = 0;
    return pri;
// lab_49D0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0FF8(var_16, var_8)
}
// fun_4A90
fun_4A90() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_4DB8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4AF8
fun_4AF8() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_4B68
    OP_CONST_S -8, 1
// lab_4B68
    pri = arg_0;
    OP_JNZ lab_4B88
    OP_ZERO_P_S -8
// lab_4B88
    pri = var_8;
    OP_JZER lab_4C10
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_4C10
    pri = 0;
    return pri;
}
// fun_4C28
fun_4C28() {
    var_8 = 2016;
    var_16 = 8;
    pri = fun_1FD0(var_8)
    var_24 = 0;
    pri = fun_2008()
    var_32 = arg_0;
    var_40 = 8;
    pri = fun_2520(var_32)
    var_48 = 1;
    var_56 = 8;
    pri = fun_24E8(var_48)
    var_64 = 2192;
    pri = SoundPostEvent(var_64)
    var_72 = 0;
    var_80 = 8;
    pri = fun_20D8(var_72)
    var_88 = 0;
    var_96 = 0;
    var_104 = arg_0;
    var_112 = 2;
    pri = WordSetNumber(var_112, var_104, var_96, var_88)
    var_120 = 3;
    var_128 = 0;
    var_136 = 3920114689893802877;
    var_144 = 24;
    pri = fun_1BD8(var_136, var_128, var_120)
    var_152 = 1;
    var_160 = 8;
    pri = fun_1CD0(var_152)
    var_168 = 0;
    pri = fun_1D90()
    var_176 = 0;
    pri = fun_20A8()
    pri = 0;
    return pri;
}
// fun_4DB8
fun_4DB8() {
    var_8 = 2384;
    var_16 = 8;
    pri = fun_1FD0(var_8)
    var_24 = 0;
    pri = fun_2008()
    pri = arg_3;
    OP_JNZ lab_4ED8
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_4EA0
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_4F48(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_4EC8
// lab_4ED8
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_50E8(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_4EA0
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_5010(var_16, var_8)
// lab_4EC8
    OP_JUMP lab_4F20
// lab_4F20
    var_8 = 0;
    pri = fun_20A8()
    pri = 0;
    return pri;
}
// fun_4F48
fun_4F48() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_50E8(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_4FF8
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_4FF8
    pri = 0;
    return pri;
}
// fun_5010
fun_5010() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_2128(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_1BD8(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1CD0(var_72)
    var_88 = 0;
    pri = fun_1D90()
    var_96 = 0;
    var_104 = 8;
    pri = fun_20D8(var_96)
    pri = 0;
    return pri;
}
// fun_50E8
fun_50E8() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_5130
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_53F0(var_8)
// lab_5130
    pri = arg_4;
    OP_JNZ lab_5198
    var_8 = 0;
    var_16 = 8;
    pri = fun_20D8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2128(var_40, var_32, var_24)
// lab_5198
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_5238
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_2178(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1BD8(var_56, var_48, var_40)
    OP_JUMP lab_5328
// lab_5238
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_52F0
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_52F0
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_52F0
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1BD8(var_24, var_16, var_8)
// lab_5328
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_5368
    var_8 = 0;
    var_16 = 8;
    pri = fun_0558(var_8)
// lab_5368
    var_8 = 1;
    var_16 = 8;
    pri = fun_1CD0(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_55F8(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_4AF8(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_53F0
fun_53F0() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_5450
    var_16 = 2544;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_5450
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_5590
        case default:
        {
// switch_5590_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_5580
            var_16 = 3088;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_5580
            OP_JUMP lab_55C8
// lab_55C8
            var_8 = 3304;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_5590_case_0x1
            var_8 = 2760;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_55C8
        }
        case 0x2:
        {
// switch_5590_case_0x2
            var_8 = 2888;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_55C8
        }
    }
}
// fun_55F8
fun_55F8() {
    pri = arg_2;
    OP_JNZ lab_56E0
    var_8 = 0;
    var_16 = 8;
    pri = fun_20D8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2128(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_21C8(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_56E0
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_1BD8(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1CD0(var_40)
    var_56 = 0;
    pri = fun_1D90()
    pri = 0;
    return pri;
}
// fun_5758
fun_5758() {
    pri = 3488;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_57E0
// lab_57E0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_5960
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_5950
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_58A0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_58A0
    pri = 0;
    OP_JUMP lab_58A8
// lab_5960
    pri = 0;
    return pri;
// lab_5950
    OP_JUMP lab_57D8
// lab_57D8
    OP_INC_P_S -936
// lab_58A0
    pri = 1;
// lab_58A8
    OP_JZER lab_5920
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_5918
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_5920
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_5918
}
// fun_5980
fun_5980() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_5B00
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_5A18
    var_8 = 1;
    var_16 = 0;
    var_24 = 4408;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0388(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03F8()
// lab_5B00
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_5A18
    pri = arg_0;
    OP_JNZ lab_5A60
    var_8 = 4456;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_5A80
// lab_5A60
    var_8 = 4632;
    pri = SoundPostEvent(var_8)
// lab_5A80
    var_8 = 0;
    var_16 = 8;
    pri = fun_0558(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_5B00
    var_24 = 4896;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0328(var_32, var_24)
    var_48 = 0;
    pri = fun_03F8()
}
// fun_5B40
fun_5B40() {
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_5980(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_5B80
fun_5B80() {
    var_16 = 6910712898869243;
    pri = WorkGet(var_16)
    var_8 = pri;
    pri = var_8;
    alt = 600;
    OP_JSLESS lab_5C18
    pri = var_8;
    alt = 610;
    OP_JSGRTR lab_5C18
    pri = 1;
    OP_JUMP lab_5C20
// lab_5C18
    pri = 0;
// lab_5C20
    OP_JZER lab_5CB8
    var_8 = -3293621181990616472;
    pri = FlagReset(var_8)
    var_16 = 590;
    var_24 = 8;
    pri = fun_6408(var_16)
    var_32 = 0;
    var_40 = 7474429120239519668;
    pri = WorkSet(var_40, var_32)
    OP_JUMP lab_63D0
// lab_5CB8
    pri = var_8;
    alt = 660;
    OP_JSLESS lab_5D10
    pri = var_8;
    alt = 670;
    OP_JSGRTR lab_5D10
    pri = 1;
    OP_JUMP lab_5D18
// lab_5D10
    pri = 0;
// lab_5D18
    OP_JZER lab_5D80
    var_8 = -3293621181990616472;
    pri = FlagReset(var_8)
    var_16 = 650;
    var_24 = 8;
    pri = fun_6408(var_16)
    OP_JUMP lab_63D0
// lab_5D80
    pri = var_8;
    alt = 780;
    OP_JSLESS lab_5DD8
    pri = var_8;
    alt = 790;
    OP_JSGRTR lab_5DD8
    pri = 1;
    OP_JUMP lab_5DE0
// lab_5DD8
    pri = 0;
// lab_5DE0
    OP_JZER lab_5E90
    var_8 = -3293621181990616472;
    pri = FlagReset(var_8)
    var_16 = 770;
    var_24 = 8;
    pri = fun_6408(var_16)
    pri = var_8;
    OP_EQ_P_C_PRI 780
    OP_JZER lab_5E80
    var_32 = -5769160658289007030;
    pri = FlagSet(var_32)
// lab_5E90
    pri = var_8;
    alt = 970;
    OP_JSLESS lab_5EE8
    pri = var_8;
    alt = 990;
    OP_JSGRTR lab_5EE8
    pri = 1;
    OP_JUMP lab_5EF0
// lab_5EE8
    pri = 0;
// lab_5EF0
    OP_JZER lab_5F58
    var_8 = -3293621181990616472;
    pri = FlagReset(var_8)
    var_16 = 960;
    var_24 = 8;
    pri = fun_6408(var_16)
    OP_JUMP lab_63D0
// lab_5F58
    pri = var_8;
    alt = 1130;
    OP_JSLESS lab_5FB0
    pri = var_8;
    alt = 1140;
    OP_JSGRTR lab_5FB0
    pri = 1;
    OP_JUMP lab_5FB8
// lab_5FB0
    pri = 0;
// lab_5FB8
    OP_JZER lab_6070
    var_8 = -3293621181990616472;
    pri = FlagReset(var_8)
    var_16 = 1120;
    var_24 = 8;
    pri = fun_6408(var_16)
    pri = var_8;
    OP_EQ_P_C_PRI 1130
    OP_JZER lab_6060
    var_32 = 0;
    var_40 = -1068280264362630289;
    pri = WorkSet(var_40, var_32)
// lab_6070
    pri = var_8;
    alt = 1243;
    OP_JSLESS lab_60C8
    pri = var_8;
    alt = 1246;
    OP_JSGRTR lab_60C8
    pri = 1;
    OP_JUMP lab_60D0
// lab_60C8
    pri = 0;
// lab_60D0
    OP_JZER lab_6138
    var_8 = -3293621181990616472;
    pri = FlagReset(var_8)
    var_16 = 1240;
    var_24 = 8;
    pri = fun_6408(var_16)
    OP_JUMP lab_63D0
// lab_6138
    pri = var_8;
    alt = 1340;
    OP_JSLESS lab_6190
    pri = var_8;
    alt = 1350;
    OP_JSGRTR lab_6190
    pri = 1;
    OP_JUMP lab_6198
// lab_6190
    pri = 0;
// lab_6198
    OP_JZER lab_6278
    var_8 = -3293621181990616472;
    pri = FlagReset(var_8)
    var_16 = 1330;
    var_24 = 8;
    pri = fun_6408(var_16)
    var_32 = 5871714809546737952;
    pri = FlagReset(var_32)
    var_40 = 0;
    var_48 = 0;
    pri = float(var_48)
    var_56 = pri;
    var_64 = 4944;
    pri = SoundSetRTPC(var_64, var_56, var_48)
    OP_JUMP lab_63D0
// lab_6278
    pri = var_8;
    alt = 1422;
    OP_JSLESS lab_62D0
    pri = var_8;
    alt = 1430;
    OP_JSGRTR lab_62D0
    pri = 1;
    OP_JUMP lab_62D8
// lab_62D0
    pri = 0;
// lab_62D8
    OP_JZER lab_63D0
    var_8 = -3293621181990616472;
    pri = FlagReset(var_8)
    var_16 = -4807553854326954453;
    pri = FlagSet(var_16)
    var_24 = 7589307597612998181;
    pri = FlagSet(var_24)
    var_32 = 1437989026607552983;
    pri = FlagSet(var_32)
    var_40 = 1437990126119181194;
    pri = FlagSet(var_40)
    var_48 = 1420;
    var_56 = 8;
    pri = fun_6408(var_48)
// lab_63D0
    var_8 = 41;
    var_16 = 8;
    pri = fun_0528(var_8)
    pri = 0;
    return pri;
// lab_6060
    OP_JUMP lab_63D0
// lab_5E80
    OP_JUMP lab_63D0
}
// fun_6408
fun_6408() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_5758(var_24)
    pri = 0;
    return pri;
}
// fun_6470
fun_6470() {
    pri = g_mode;
    switch (pri) {
// switch_66E8
        case default:
        {
// switch_66E8_case_default
            pri = CommandNOP()
            OP_JUMP lab_67E0
// lab_67E0
            pri = 0;
            return pri;
        }
        case 0x8d076e6f082f4ec0:
        {
// switch_66E8_case_0x8d076e6f082f4ec0
            var_8 = 0;
            pri = fun_AE90()
            OP_JUMP lab_67E0
        }
        case 0x994ecc300b230c39:
        {
// switch_66E8_case_0x994ecc300b230c39
            var_8 = 0;
            pri = fun_AFF8()
            OP_JUMP lab_67E0
        }
        case 0xc451a65441a51c66:
        {
// switch_66E8_case_0xc451a65441a51c66
            var_8 = 0;
            pri = fun_B160()
            OP_JUMP lab_67E0
        }
        case 0xd6e1b961c5c37405:
        {
// switch_66E8_case_0xd6e1b961c5c37405
            var_8 = 0;
            pri = fun_ABC0()
            OP_JUMP lab_67E0
        }
        case 0xf22c14aa90163c15:
        {
// switch_66E8_case_0xf22c14aa90163c15
            var_8 = 0;
            pri = fun_8948()
            OP_JUMP lab_67E0
        }
        case 0xf98c36fd09c9865a:
        {
// switch_66E8_case_0xf98c36fd09c9865a
            var_8 = 0;
            pri = fun_85D0()
            OP_JUMP lab_67E0
        }
        case 0xfafb5541e4e8e593:
        {
// switch_66E8_case_0xfafb5541e4e8e593
            var_8 = 0;
            pri = fun_9068()
            OP_JUMP lab_67E0
        }
        case 0x0:
        {
// switch_66E8_case_0x0
            var_8 = 0;
            pri = fun_67F0()
            OP_JUMP lab_67E0
        }
        case 0x1ea6a78268369e56:
        {
// switch_66E8_case_0x1ea6a78268369e56
            var_8 = 0;
            pri = fun_AD28()
            OP_JUMP lab_67E0
        }
        case 0x3c19a9eea61b839d:
        {
// switch_66E8_case_0x3c19a9eea61b839d
            var_8 = 0;
            pri = fun_7BC0()
            OP_JUMP lab_67E0
        }
        case 0x494757dfc389b41a:
        {
// switch_66E8_case_0x494757dfc389b41a
            var_8 = 0;
            pri = fun_7BF8()
            OP_JUMP lab_67E0
        }
        case 0x5e5893784ec1b591:
        {
// switch_66E8_case_0x5e5893784ec1b591
            var_8 = 0;
            pri = fun_A388()
            OP_JUMP lab_67E0
        }
        case 0x6ded3ce924f4b2c1:
        {
// switch_66E8_case_0x6ded3ce924f4b2c1
            var_8 = 0;
            pri = fun_8CD8()
            OP_JUMP lab_67E0
        }
        case 0x70146665c87f1faf:
        {
// switch_66E8_case_0x70146665c87f1faf
            var_8 = 0;
            pri = fun_9850()
            OP_JUMP lab_67E0
        }
    }
}
// fun_67F0
fun_67F0() {
    pri = 0;
    return pri;
}
// fun_6808
fun_6808() {
    pri = arg_1;
    OP_JZER lab_6878
    var_8 = 1;
    var_16 = 0;
    var_24 = 4408;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0388(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03F8()
// lab_6878
    pri = 5072;
    OP_ADDR_ALT -1200
    OP_MOVS 1200
    OP_CONST_S -1208, 50
    OP_ZERO_P_S -1216
    OP_CONST_S -1224, 5
    var_1232 = -9019446742694110882;
    pri = FlagGet(var_1232)
    OP_JZER lab_6958
    pri = var_1208;
    var_1216 = pri;
    OP_JUMP lab_6970
// lab_6958
    OP_CONST_S -1216, 22
// lab_6970
    OP_ZERO_P_S -1232
    OP_ZERO_P_S -1240
    OP_ZERO_P_S -1232
    OP_JUMP lab_69B0
// lab_69B0
    OP_LOAD_S_BOTH -1232, -1208
    OP_JSGEQ lab_6AB8
    OP_ADDR_P_ALT -1200
    pri = var_1232;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_LOAD_I 
    var_8 = pri;
    pri = FlagSet(var_8)
    pri = arg_0;
    OP_JZER lab_6AA8
    OP_ADDR_P_ALT -1200
    pri = var_1232;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_16 = pri;
    var_24 = 8;
    pri = fun_09F8(var_16)
// lab_6AB8
    OP_ZERO_P_S -1232
    OP_JUMP lab_6AD8
// lab_6AD8
    OP_LOAD_S_BOTH -1232, -1224
    OP_JSGEQ lab_6D88
    OP_ZERO_P_S -1240
    OP_JUMP lab_6B20
// lab_6D88
    pri = arg_1;
    OP_JZER lab_6E00
    var_8 = 10;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 4896;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0328(var_32, var_24)
    var_48 = 0;
    pri = fun_03F8()
// lab_6E00
    pri = 0;
    return pri;
// lab_6B20
    pri = var_1240;
    alt = 100;
    OP_JSGEQ lab_6D78
    var_16 = 0;
    var_24 = var_1216;
    var_32 = 16;
    pri = fun_0160(var_24, var_16)
    var_1248 = pri;
    OP_ADDR_P_ALT -1200
    pri = var_1248;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_LOAD_I 
    var_40 = pri;
    pri = VanishFlagGet(var_40)
    OP_JZER lab_6C60
    pri = arg_2;
    var_48 = pri;
    OP_ADDR_P_ALT -1200
    pri = var_1248;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 8
    OP_LOAD_I 
    OP_POP_ALT 
    OP_JEQ lab_6C60
    pri = 1;
    OP_JUMP lab_6C68
// lab_6D78
    OP_JUMP lab_6AD0
// lab_6AD0
    OP_INC_P_S -1232
// lab_6C60
    pri = 0;
// lab_6C68
    OP_JZER lab_6D60
    OP_ADDR_P_ALT -1200
    pri = var_1248;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_LOAD_I 
    var_8 = pri;
    pri = FlagReset(var_8)
    pri = arg_0;
    OP_JZER lab_6D48
    OP_ADDR_P_ALT -1200
    pri = var_1248;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_16 = pri;
    var_24 = 8;
    pri = fun_09C8(var_16)
// lab_6D60
    OP_JUMP lab_6B18
// lab_6B18
    OP_INC_P_S -1240
// lab_6D48
    OP_JUMP lab_6D78
// lab_6AA8
    OP_JUMP lab_69A8
// lab_69A8
    OP_INC_P_S -1232
}
// fun_6E18
fun_6E18() {
    pri = IsPlayerInsideWorld()
    OP_JNZ lab_6E78
    var_8 = 30;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
// lab_6E78
    var_8 = -4697073698780370424;
    pri = FlagGet(var_8)
    OP_JNZ lab_6F18
    var_16 = -4697073698780370424;
    pri = FlagSet(var_16)
    var_24 = 6272;
    pri = CallTips(var_24)
    var_32 = 10;
    var_40 = 8;
    pri = fun_0060(var_32)
// lab_6F18
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = var_8;
    pri = IsDaiNestHole(var_16)
    OP_JZER lab_7098
    pri = IsDaiDeliveryExistDataNestHole()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_7010
    var_24 = 0;
    pri = fun_78D0()
    OP_JZER lab_7000
    var_32 = 0;
    pri = fun_7A28()
    var_40 = var_8;
    var_48 = 8;
    pri = fun_2218(var_40)
// lab_7098
    var_8 = var_8;
    pri = IsWattGetFlagNestHole(var_8)
    OP_JNZ lab_73A8
    OP_ZERO_P_S -16
    var_24 = 1;
    var_32 = 8;
    pri = fun_24E8(var_24)
    var_40 = 1;
    var_48 = 8;
    pri = fun_2458(var_40)
    var_56 = var_8;
    pri = IsActiveNestHole(var_56)
    OP_JZER lab_7220
    OP_CONST_S -16, 300
    var_64 = 6910712898869243;
    pri = WorkGet(var_64)
    alt = 2020;
    OP_JSLESS lab_71B8
    OP_CONST_S -16, 2000
// lab_73A8
    var_8 = var_8;
    pri = IsActiveNestHole(var_8)
    OP_JZER lab_7408
    var_16 = var_8;
    var_24 = 8;
    pri = fun_2218(var_16)
    OP_JUMP lab_78B8
// lab_7408
    var_16 = 1252;
    pri = ItemGetNum(var_16)
    var_16 = pri;
    pri = var_16;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSLESS lab_74E8
    var_24 = 3;
    var_32 = 0;
    var_40 = 4173647593302321688;
    var_48 = 24;
    pri = fun_1B88(var_40, var_32, var_24)
    var_56 = 1;
    var_64 = 8;
    pri = fun_1CD0(var_56)
    var_72 = 0;
    pri = fun_1D90()
    pri = 0;
    return pri;
// lab_74E8
    var_8 = 1;
    var_16 = 1252;
    var_24 = 0;
    var_32 = 24;
    pri = fun_2128(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 4173650891837206321;
    var_64 = 24;
    pri = fun_1B88(var_56, var_48, var_40)
    var_80 = 0;
    var_88 = 0;
    var_96 = 1;
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 48;
    pri = fun_1F18(var_120, var_112, var_104, var_96, var_88, var_80)
    var_24 = pri;
    pri = var_24;
    OP_JZER lab_7898
    var_136 = 0;
    pri = fun_1D90()
    var_144 = var_8;
    pri = IsUseItemNestHole(var_144)
    OP_JZER lab_7618
    OP_JUMP lab_7888
// lab_7898
    var_8 = 0;
    pri = fun_1D90()
// lab_7618
    var_8 = 0;
    pri = fun_78D0()
    OP_JZER lab_7888
    var_16 = 8802641224559852288;
    var_24 = 8;
    pri = fun_0D40(var_16)
    var_32 = 1;
    var_40 = 1252;
    pri = ItemSub(var_40, var_32)
    var_48 = 0;
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = var_8;
    var_88 = 8802641224559852288;
    var_96 = 48;
    pri = fun_0B10(var_88, var_80, var_72, var_64, var_56, var_48)
    var_104 = 8802641224559852288;
    var_112 = 8;
    pri = fun_0D40(var_104)
    OP_CONST_S -32, 4
    var_128 = var_32;
    var_136 = 6344;
    var_144 = 8802641224559852288;
    var_152 = 24;
    pri = fun_0CC8(var_144, var_136, var_128)
    var_160 = 6472;
    var_168 = 8802641224559852288;
    var_176 = 16;
    pri = fun_0C90(var_168, var_160)
    var_184 = 4;
    var_192 = 8;
    pri = fun_0060(var_184)
    var_200 = var_8;
    pri = UseItemNestHole(var_200)
    var_208 = 0;
    pri = fun_7A28()
    var_216 = 3;
    var_224 = 0;
    var_232 = 4173649792325578110;
    var_240 = 24;
    pri = fun_1B88(var_232, var_224, var_216)
    var_248 = 1;
    var_256 = 8;
    pri = fun_1CD0(var_248)
    var_264 = 0;
    pri = fun_1D90()
    var_272 = 8802641224559852288;
    var_280 = 8;
    pri = fun_0D40(var_272)
// lab_7888
    OP_JUMP lab_78B0
// lab_78B0
// lab_78B8
    pri = 0;
    return pri;
// lab_7220
    OP_CONST_S -16, 50
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    alt = 2020;
    OP_JSLESS lab_7290
    OP_CONST_S -16, 200
// lab_7290
    var_8 = 3;
    var_16 = 0;
    var_24 = 4173654190372090954;
    var_32 = 24;
    pri = fun_1B88(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1CD0(var_40)
// lab_71B8
    var_8 = 3;
    var_16 = 0;
    var_24 = 4173655289883719165;
    var_32 = 24;
    pri = fun_1B88(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1CD0(var_40)
    OP_JUMP lab_72E8
// lab_72E8
    var_8 = var_16;
    var_16 = 8;
    pri = fun_4C28(var_8)
    var_24 = var_8;
    pri = EnableWattGetFlagNestHole(var_24)
    var_32 = 0;
    pri = fun_24B0()
    var_40 = var_8;
    pri = IsActiveNestHole(var_40)
    OP_JNZ lab_73A0
    var_48 = 0;
    pri = fun_1D90()
    pri = 0;
    return pri;
// lab_73A0
// lab_7010
    var_8 = 3;
    var_16 = 0;
    var_24 = 4173647593302321688;
    var_32 = 24;
    pri = fun_1B88(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1CD0(var_40)
    var_56 = 0;
    pri = fun_1D90()
// lab_7000
    OP_JUMP lab_7080
// lab_7080
    pri = 0;
    return pri;
}
// fun_78D0
fun_78D0() {
    var_8 = 6608;
    var_16 = 8;
    pri = fun_1FD0(var_8)
    var_24 = 0;
    pri = fun_2008()
    OP_ZERO_P_S -8
    var_40 = 3;
    var_48 = 1;
    var_56 = 8343654448023770297;
    var_64 = 24;
    pri = fun_1B88(var_56, var_48, var_40)
    var_72 = 0;
    var_80 = 0;
    var_88 = 1;
    var_96 = 0;
    var_104 = 0;
    var_112 = 0;
    var_120 = 48;
    pri = fun_1F18(var_112, var_104, var_96, var_88, var_80, var_72)
    OP_JZER lab_79D8
    OP_CONST_S -8, 1
    OP_JUMP lab_79E0
// lab_79D8
    OP_ZERO_P_S -8
// lab_79E0
    var_8 = 0;
    pri = fun_1D90()
    var_16 = 0;
    pri = fun_20A8()
    pri = var_8;
    return pri;
}
// fun_7A28
fun_7A28() {
    var_8 = 6784;
    var_16 = 8;
    pri = fun_1FD0(var_8)
    var_24 = 0;
    pri = fun_2008()
    var_32 = 3;
    var_40 = 1;
    var_48 = 8343651149488885664;
    var_56 = 24;
    pri = fun_1B88(var_48, var_40, var_32)
    var_64 = 0;
    pri = fun_08B0()
    var_72 = 0;
    pri = fun_0668()
    var_80 = 0;
    pri = fun_0698()
    var_88 = 6960;
    pri = SoundPostEvent(var_88)
    var_96 = 0;
    var_104 = 8;
    pri = fun_20D8(var_96)
    var_112 = 3;
    var_120 = 1;
    var_128 = 8343652249000513875;
    var_136 = 24;
    pri = fun_1B88(var_128, var_120, var_112)
    var_144 = 1;
    var_152 = 8;
    pri = fun_1CD0(var_144)
    var_160 = 0;
    pri = fun_1D90()
    var_168 = 0;
    pri = fun_20A8()
    pri = 0;
    return pri;
}
// fun_7BC0
fun_7BC0() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_6E18(var_8)
    pri = 0;
    return pri;
}
// fun_7BF8
fun_7BF8() {
    var_8 = 0;
    pri = fun_5B80()
    var_16 = 7136;
    var_24 = 8;
    pri = fun_1FD0(var_16)
    var_32 = 0;
    pri = fun_2008()
    var_40 = 1;
    var_48 = 1;
    var_56 = 80;
    pri = float(var_56)
    var_64 = pri;
    var_72 = 116882;
    pri = float(var_72)
    var_80 = pri;
    var_88 = 38282;
    pri = float(var_88)
    var_96 = pri;
    var_104 = 8802641224559852288;
    var_112 = 48;
    pri = fun_0A28(var_104, var_96, var_88, var_80, var_72, var_64)
    OP_CONST_S -8, 8082238904398227463
    var_128 = 60;
    var_136 = 8;
    pri = fun_0060(var_128)
    var_144 = 1;
    var_152 = 1;
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    var_184 = var_8;
    var_192 = 48;
    pri = fun_42D8(var_184, var_176, var_168, var_160, var_152, var_144)
    var_200 = 4896;
    var_208 = 30;
    var_216 = 16;
    pri = fun_0328(var_208, var_200)
    var_224 = 0;
    pri = fun_03F8()
    var_232 = 0;
    var_240 = 3;
    var_248 = 0;
    var_256 = 100;
    var_264 = -1;
    var_272 = 8335812058147818953;
    var_280 = var_8;
    var_288 = 56;
    pri = fun_1A58(var_280, var_272, var_264, var_256, var_248, var_240, var_232)
    var_296 = 1;
    var_304 = 8;
    pri = fun_1CD0(var_296)
    var_312 = 1;
    var_320 = 1;
    var_328 = 16;
    pri = fun_5980(var_320, var_312)
    var_336 = 0;
    var_344 = 3;
    var_352 = 0;
    var_360 = 100;
    var_368 = -1;
    var_376 = -6358626930435393729;
    var_384 = var_8;
    var_392 = 56;
    pri = fun_1A58(var_384, var_376, var_368, var_360, var_352, var_344, var_336)
    var_400 = 1;
    var_408 = 8;
    pri = fun_1CD0(var_400)
    var_416 = 0;
    pri = fun_1D90()
    var_424 = 0;
    pri = fun_20A8()
    var_432 = 0;
    var_440 = 3;
    var_448 = 0;
    var_456 = 100;
    var_464 = -1;
    var_472 = 3158569036488054236;
    var_480 = var_8;
    var_488 = 56;
    pri = fun_19A8(var_480, var_472, var_464, var_456, var_448, var_440, var_432)
    var_496 = 0;
    var_504 = 7834234665732594667;
    var_512 = 0;
    var_520 = 24;
    pri = fun_1DC0(var_512, var_504, var_496)
    var_528 = -9019446742694110882;
    pri = FlagGet(var_528)
    OP_JZER lab_8010
    var_536 = 0;
    var_544 = 7834235765244222878;
    var_552 = 1;
    var_560 = 24;
    pri = fun_1DC0(var_552, var_544, var_536)
// lab_8010
    var_8 = 0;
    var_16 = 7834236864755851089;
    var_24 = 2;
    var_32 = 24;
    pri = fun_1DC0(var_24, var_16, var_8)
    var_48 = 0;
    var_56 = 1;
    var_64 = 0;
    var_72 = 1;
    var_80 = 32;
    pri = fun_1EA8(var_72, var_64, var_56, var_48)
    var_16 = pri;
    var_88 = 0;
    pri = fun_1D90()
    pri = var_16;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_81A8
    var_96 = 0;
    var_104 = 3;
    var_112 = 0;
    var_120 = 100;
    var_128 = -1;
    var_136 = 3158564638441541392;
    var_144 = var_8;
    var_152 = 56;
    pri = fun_19A8(var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_160 = 1;
    var_168 = 8;
    pri = fun_1CD0(var_160)
    var_176 = 0;
    pri = fun_1D90()
    var_184 = 0;
    var_192 = 0;
    var_200 = 0;
    var_208 = var_8;
    var_216 = 32;
    pri = fun_45D8(var_208, var_200, var_192, var_184)
    pri = 0;
    return pri;
// lab_81A8
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 3158571235511310658;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_19A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1CD0(var_72)
    var_88 = 0;
    pri = fun_1D90()
    var_96 = 1;
    var_104 = 0;
    var_112 = 4408;
    var_120 = 8;
    var_128 = 32;
    pri = fun_0388(var_120, var_112, var_104, var_96)
    var_136 = 0;
    pri = fun_03F8()
    var_144 = 0;
    var_152 = 0;
    var_160 = 0;
    var_168 = var_8;
    var_176 = 32;
    pri = fun_45D8(var_168, var_160, var_152, var_144)
    pri = var_16;
    switch (pri) {
// switch_84C8
        case default:
        {
// switch_84C8_case_default
            OP_JUMP lab_8500
// lab_8500
            var_8 = 3;
            var_16 = 0;
            var_24 = 100;
            var_32 = 3158565737953169603;
            var_40 = 32;
            pri = fun_1850(var_32, var_24, var_16, var_8)
            var_48 = 1;
            var_56 = 8;
            pri = fun_1CD0(var_48)
            var_64 = 0;
            pri = fun_1D90()
            var_72 = 4896;
            var_80 = 8;
            var_88 = 16;
            pri = fun_0328(var_80, var_72)
            var_96 = 0;
            pri = fun_03F8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_84C8_case_0x0
            var_8 = 0;
            var_16 = 0;
            var_24 = 0;
            var_32 = 1;
            var_40 = 1;
            var_48 = 86090;
            pri = float(var_48)
            var_56 = pri;
            var_64 = 37812;
            pri = float(var_64)
            var_72 = pri;
            OP_PUSH2_C 8603979141477584215, 6287735723334650320
            var_80 = 72;
            pri = fun_0488(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_88 = 1;
            var_96 = 0;
            pri = float(var_96)
            var_104 = pri;
            var_112 = 8802641224559852288;
            var_120 = 24;
            pri = fun_0A80(var_112, var_104, var_96)
            OP_JUMP lab_8500
        }
        case 0x1:
        {
// switch_84C8_case_0x1
            var_8 = 0;
            var_16 = 0;
            var_24 = 0;
            var_32 = 1;
            var_40 = 1;
            OP_PUSH4_C 4671355137328477635, 4677892335938222162, 8606918136059224543, 6287735723334650320
            var_48 = 72;
            pri = fun_0488(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24)
            var_56 = 1;
            var_64 = 0;
            pri = float(var_64)
            var_72 = pri;
            var_80 = 8802641224559852288;
            var_88 = 24;
            pri = fun_0A80(var_80, var_72, var_64)
            OP_JUMP lab_8500
        }
    }
}
// fun_85D0
fun_85D0() {
    var_8 = 7336;
    var_16 = 8;
    pri = fun_1FD0(var_8)
    var_24 = 0;
    pri = fun_2008()
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_40 = 1;
    var_48 = 1;
    var_56 = 3;
    var_64 = 0;
    var_72 = 100;
    var_80 = -1;
    var_88 = 0;
    var_96 = 1;
    var_104 = 1;
    var_112 = 660873996538936696;
    var_120 = var_8;
    var_128 = 88;
    pri = fun_4530(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_136 = 1;
    var_144 = 8;
    pri = fun_1CD0(var_136)
    var_152 = 0;
    var_160 = 0;
    var_168 = 1;
    var_176 = 0;
    var_184 = 0;
    var_192 = 0;
    var_200 = 48;
    pri = fun_1F18(var_192, var_184, var_176, var_168, var_160, var_152)
    OP_JZER lab_8850
    var_208 = 0;
    var_216 = 3;
    var_224 = 0;
    var_232 = 100;
    var_240 = -1;
    var_248 = -246491909461458569;
    var_256 = var_8;
    var_264 = 56;
    pri = fun_1A58(var_256, var_248, var_240, var_232, var_224, var_216, var_208)
    var_272 = 1;
    var_280 = 8;
    pri = fun_1CD0(var_272)
    var_288 = 1;
    var_296 = 1;
    var_304 = 16;
    pri = fun_5980(var_296, var_288)
    var_312 = 0;
    var_320 = 3;
    var_328 = 0;
    var_336 = 100;
    var_344 = -1;
    var_352 = -6358626930435393729;
    var_360 = var_8;
    var_368 = 56;
    pri = fun_1A58(var_360, var_352, var_344, var_336, var_328, var_320, var_312)
    var_376 = 1;
    var_384 = 8;
    pri = fun_1CD0(var_376)
    OP_JUMP lab_88C8
// lab_8850
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 3158564638441541392;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_19A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1CD0(var_72)
// lab_88C8
    var_8 = 0;
    pri = fun_1D90()
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = var_8;
    var_48 = 32;
    pri = fun_45D8(var_40, var_32, var_24, var_16)
    var_56 = 0;
    pri = fun_20A8()
    pri = 0;
    return pri;
}
// fun_8948
fun_8948() {
    pri = 7536;
    OP_ADDR_ALT -120
    OP_MOVS 120
    pri = 7656;
    OP_ADDR_ALT -216
    OP_MOVS 96
    pri = GetTargetFieldObjectID()
    var_224 = pri;
    var_232 = var_224;
    var_240 = 8;
    pri = fun_8DB0(var_232)
    var_248 = var_224;
    pri = IsReceivedNetPlayer(var_248)
    OP_JZER lab_8A50
    pri = 0;
    return pri;
// lab_8A50
    var_16 = 1;
    var_24 = 5;
    var_32 = 16;
    pri = fun_0160(var_24, var_16)
    var_232 = pri;
    var_40 = var_224;
    OP_ADDR_P_PRI -216
    var_48 = pri;
    pri = var_232;
    OP_SMUL_P_C 2
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    var_56 = pri;
    var_64 = var_224;
    var_72 = 24;
    pri = fun_1B20(var_64, var_56, var_48)
    var_80 = 1;
    var_88 = 8;
    pri = fun_1CD0(var_80)
    var_96 = 0;
    pri = fun_1D90()
    var_104 = 2;
    var_112 = 0;
    var_120 = 9;
    var_128 = 1;
    OP_ADDR_P_PRI -120
    var_136 = pri;
    var_144 = 1;
    var_152 = 14;
    var_160 = 16;
    pri = fun_0160(var_152, var_144)
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    var_168 = pri;
    var_176 = 40;
    pri = fun_4A90(var_168, var_160, var_152, var_144, var_136)
    var_184 = var_224;
    OP_ADDR_P_PRI -216
    var_192 = pri;
    pri = var_232;
    OP_SMUL_P_C 2
    OP_ADD_P_C 1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    var_200 = pri;
    var_208 = var_224;
    var_216 = 24;
    pri = fun_1B20(var_208, var_200, var_192)
    var_224 = 1;
    var_232 = 8;
    pri = fun_1CD0(var_224)
    pri = IsRunningAutoSave()
    OP_JZER lab_8C88
    var_240 = 0;
    pri = fun_08B0()
// lab_8C88
    var_8 = 0;
    pri = fun_1D90()
    var_16 = var_224;
    pri = RegisterReceivedNetPlayer(var_16)
    pri = 0;
    return pri;
}
// fun_8CD8
fun_8CD8() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = var_8;
    var_24 = 8;
    pri = fun_8DB0(var_16)
    var_32 = var_8;
    var_40 = -6943028663550697760;
    var_48 = var_8;
    var_56 = 24;
    pri = fun_1B20(var_48, var_40, var_32)
    var_64 = 1;
    var_72 = 8;
    pri = fun_1CD0(var_64)
    var_80 = 0;
    pri = fun_1D90()
    pri = 0;
    return pri;
}
// fun_8DB0
fun_8DB0() {
    pri = 7752;
    OP_ADDR_ALT -320
    OP_MOVS 320
    var_336 = arg_0;
    pri = GetWideRoadOtherPlayerLanguageID(var_336)
    var_328 = pri;
    pri = var_328;
    OP_JZER lab_8E70
    pri = var_328;
    OP_EQ_P_C_PRI 6
    OP_JNZ lab_8E70
    pri = 0;
    OP_JUMP lab_8E78
// lab_8E70
    pri = 1;
// lab_8E78
    OP_JZER lab_8EA8
    pri = RomGetLanguageID()
    var_328 = pri;
// lab_8EA8
    OP_ADDR_P_PRI -320
    var_16 = pri;
    pri = var_328;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 16
    OP_LOAD_I 
    var_24 = pri;
    OP_ADDR_P_PRI -320
    var_32 = pri;
    pri = var_328;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_40 = pri;
    OP_ADDR_P_PRI -320
    var_48 = pri;
    pri = var_328;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_LOAD_I 
    var_56 = pri;
    var_64 = 24;
    pri = fun_0708(var_56, var_48, var_40)
    var_336 = pri;
    var_72 = arg_0;
    var_80 = var_336;
    var_88 = arg_0;
    var_96 = 24;
    pri = fun_1B20(var_88, var_80, var_72)
    var_104 = 1;
    var_112 = 8;
    pri = fun_1CD0(var_104)
    var_120 = 0;
    pri = fun_1D90()
    pri = 0;
    return pri;
}
// fun_9068
fun_9068() {
    OP_ZERO_P_S -8
    var_16 = 1;
    var_24 = 8;
    pri = fun_24E8(var_16)
    var_32 = 1;
    var_40 = 8;
    pri = fun_2458(var_32)
    OP_CONST_S -16, 100
    pri = 8072;
    OP_ADDR_ALT -240
    OP_MOVS 224
    OP_PUSH_P_ADR -240
    var_288 = 7;
    var_296 = 1325346859704536274;
    pri = WorkGet(var_296)
    var_304 = pri;
    var_312 = 24;
    pri = fun_A210(var_304, var_296, var_288)
    var_248 = pri;
    pri = GetTargetFieldObjectID()
    var_256 = pri;
    var_328 = 0;
    var_336 = 0;
    var_344 = var_16;
    var_352 = 0;
    pri = WordSetNumber(var_352, var_344, var_336, var_328)
    var_360 = 1;
    var_368 = 1;
    var_376 = 3;
    var_384 = 0;
    var_392 = 100;
    var_400 = -1;
    var_408 = 0;
    var_416 = 1;
    var_424 = 1;
    var_432 = 3745434079752472775;
    var_440 = var_256;
    var_448 = 88;
    pri = fun_4530(var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376, var_368, var_360)
    var_464 = 0;
    var_472 = 0;
    var_480 = 1;
    var_488 = 0;
    var_496 = 0;
    var_504 = 0;
    var_512 = 48;
    pri = fun_1F18(var_504, var_496, var_488, var_480, var_472, var_464)
    var_264 = pri;
    pri = var_264;
    OP_JZER lab_9630
    var_520 = 0;
    pri = fun_2580()
    OP_LOAD_P_S_ALT -16
    OP_JSLESS lab_9590
    var_528 = var_16;
    var_536 = 8;
    pri = fun_2550(var_528)
    var_544 = 1;
    var_552 = 8;
    pri = fun_24E8(var_544)
    var_560 = 0;
    var_568 = 3;
    var_576 = 0;
    var_584 = 100;
    var_592 = -1;
    var_600 = 3745435179264100986;
    var_608 = var_256;
    var_616 = 56;
    pri = fun_19A8(var_608, var_600, var_592, var_584, var_576, var_568, var_560)
    var_624 = 1;
    var_632 = 8;
    pri = fun_1CD0(var_624)
    var_640 = 0;
    pri = fun_1D90()
    var_648 = 2;
    var_656 = 0;
    var_664 = 9;
    OP_ADDR_P_ALT -240
    pri = var_248;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 16
    OP_LOAD_I 
    var_672 = pri;
    OP_ADDR_P_ALT -240
    pri = var_248;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_LOAD_I 
    var_680 = pri;
    var_688 = 40;
    pri = fun_4A90(var_680, var_672, var_664, var_656, var_648)
    var_696 = 0;
    var_704 = 3;
    var_712 = 0;
    var_720 = 100;
    var_728 = -1;
    var_736 = 3745436278775729197;
    var_744 = var_256;
    var_752 = 56;
    pri = fun_19A8(var_744, var_736, var_728, var_720, var_712, var_704, var_696)
    var_760 = 1;
    var_768 = 8;
    pri = fun_1CD0(var_760)
    var_776 = 0;
    pri = fun_1D90()
    var_784 = 0;
    var_792 = 100;
    var_800 = 16;
    pri = fun_0160(var_792, var_784)
    var_808 = pri;
    var_816 = 1325346859704536274;
    pri = WorkSet(var_816, var_808)
    OP_CONST_S -8, 1
    OP_JUMP lab_9620
// lab_9630
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 3745428582194331720;
    var_56 = var_256;
    var_64 = 56;
    pri = fun_19A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1CD0(var_72)
    var_88 = 0;
    pri = fun_1D90()
// lab_9590
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 3745429681705959931;
    var_56 = var_256;
    var_64 = 56;
    pri = fun_19A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1CD0(var_72)
    var_88 = 0;
    pri = fun_1D90()
// lab_9620
    OP_JUMP lab_96C0
// lab_96C0
    var_8 = 0;
    pri = fun_24B0()
    pri = var_8;
    OP_JZER lab_9740
    var_16 = 1;
    var_24 = 0;
    var_32 = 4408;
    var_40 = 8;
    var_48 = 32;
    pri = fun_0388(var_40, var_32, var_24, var_16)
    var_56 = 0;
    pri = fun_03F8()
// lab_9740
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = var_256;
    var_40 = 32;
    pri = fun_45D8(var_32, var_24, var_16, var_8)
    pri = var_8;
    OP_JZER lab_97C0
    var_48 = var_256;
    var_56 = 0;
    var_64 = 1;
    var_72 = 24;
    pri = fun_6808(var_64, var_56, var_48)
// lab_97C0
    pri = var_8;
    OP_JZER lab_9838
    var_8 = 10;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 4896;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0328(var_32, var_24)
    var_48 = 0;
    pri = fun_03F8()
// lab_9838
    pri = 0;
    return pri;
}
// fun_9850
fun_9850() {
    OP_ZERO_P_S -8
    var_16 = 1;
    var_24 = 8;
    pri = fun_24E8(var_16)
    var_32 = 1;
    var_40 = 8;
    pri = fun_2458(var_32)
    OP_CONST_S -16, 100
    pri = 8296;
    OP_ADDR_ALT -240
    OP_MOVS 224
    pri = 8520;
    OP_ADDR_ALT -464
    OP_MOVS 224
    pri = 8744;
    OP_ADDR_ALT -688
    OP_MOVS 224
    pri = 0;
    OP_ADDR_ALT -912
    OP_FILL 224
    pri = 8968;
    OP_ADDR_ALT -912
    OP_MOVS 56
    var_952 = 9010327285021969031;
    pri = FlagGet(var_952)
    OP_JZER lab_9A40
    OP_ADDR_P_PRI -912
    var_960 = pri;
    OP_ADDR_P_PRI -688
    OP_POP_ALT 
    OP_MOVS_P 224
    OP_JUMP lab_9AD8
// lab_9A40
    var_8 = -9019446742694110882;
    pri = FlagGet(var_8)
    OP_JZER lab_9AB0
    OP_ADDR_P_PRI -912
    var_16 = pri;
    OP_ADDR_P_PRI -464
    OP_POP_ALT 
    OP_MOVS_P 224
    OP_JUMP lab_9AD8
// lab_9AB0
    OP_ADDR_P_PRI -912
    var_8 = pri;
    OP_ADDR_P_PRI -240
    OP_POP_ALT 
    OP_MOVS_P 224
// lab_9AD8
    OP_PUSH_P_ADR -912
    var_16 = 7;
    var_24 = 4889868170595686847;
    pri = WorkGet(var_24)
    var_32 = pri;
    var_40 = 24;
    pri = fun_A210(var_32, var_24, var_16)
    var_920 = pri;
    pri = GetTargetFieldObjectID()
    var_928 = pri;
    var_56 = 0;
    var_64 = 0;
    var_72 = var_16;
    var_80 = 0;
    pri = WordSetNumber(var_80, var_72, var_64, var_56)
    var_88 = 1;
    var_96 = 1;
    var_104 = 3;
    var_112 = 0;
    var_120 = 100;
    var_128 = -1;
    var_136 = 0;
    var_144 = 1;
    var_152 = 1;
    var_160 = -1764280882859780903;
    var_168 = var_928;
    var_176 = 88;
    pri = fun_4530(var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_192 = 0;
    var_200 = 0;
    var_208 = 1;
    var_216 = 0;
    var_224 = 0;
    var_232 = 0;
    var_240 = 48;
    pri = fun_1F18(var_232, var_224, var_216, var_208, var_200, var_192)
    var_936 = pri;
    pri = var_936;
    OP_JZER lab_9FF0
    var_248 = 0;
    pri = fun_2580()
    OP_LOAD_P_S_ALT -16
    OP_JSLESS lab_9F50
    var_256 = var_16;
    var_264 = 8;
    pri = fun_2550(var_256)
    var_272 = 1;
    var_280 = 8;
    pri = fun_24E8(var_272)
    var_288 = 0;
    var_296 = 3;
    var_304 = 0;
    var_312 = 100;
    var_320 = -1;
    var_328 = -1764284181394665536;
    var_336 = var_928;
    var_344 = 56;
    pri = fun_19A8(var_336, var_328, var_320, var_312, var_304, var_296, var_288)
    var_352 = 1;
    var_360 = 8;
    pri = fun_1CD0(var_352)
    var_368 = 0;
    pri = fun_1D90()
    var_376 = 2;
    var_384 = 0;
    var_392 = 9;
    OP_ADDR_P_ALT -912
    pri = var_920;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 16
    OP_LOAD_I 
    var_400 = pri;
    OP_ADDR_P_ALT -912
    pri = var_920;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_LOAD_I 
    var_408 = pri;
    var_416 = 40;
    pri = fun_4A90(var_408, var_400, var_392, var_384, var_376)
    var_424 = 0;
    var_432 = 3;
    var_440 = 0;
    var_448 = 100;
    var_456 = -1;
    var_464 = -1764283081883037325;
    var_472 = var_928;
    var_480 = 56;
    pri = fun_19A8(var_472, var_464, var_456, var_448, var_440, var_432, var_424)
    var_488 = 1;
    var_496 = 8;
    pri = fun_1CD0(var_488)
    var_504 = 0;
    pri = fun_1D90()
    var_512 = 0;
    var_520 = 100;
    var_528 = 16;
    pri = fun_0160(var_520, var_512)
    var_536 = pri;
    var_544 = 4889868170595686847;
    pri = WorkSet(var_544, var_536)
    OP_CONST_S -8, 1
    OP_JUMP lab_9FE0
// lab_9FF0
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -1764277584324896270;
    var_56 = var_928;
    var_64 = 56;
    pri = fun_19A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1CD0(var_72)
    var_88 = 0;
    pri = fun_1D90()
// lab_9F50
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -1764276484813268059;
    var_56 = var_928;
    var_64 = 56;
    pri = fun_19A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1CD0(var_72)
    var_88 = 0;
    pri = fun_1D90()
// lab_9FE0
    OP_JUMP lab_A080
// lab_A080
    var_8 = 0;
    pri = fun_24B0()
    pri = var_8;
    OP_JZER lab_A100
    var_16 = 1;
    var_24 = 0;
    var_32 = 4408;
    var_40 = 8;
    var_48 = 32;
    pri = fun_0388(var_40, var_32, var_24, var_16)
    var_56 = 0;
    pri = fun_03F8()
// lab_A100
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = var_928;
    var_40 = 32;
    pri = fun_45D8(var_32, var_24, var_16, var_8)
    pri = var_8;
    OP_JZER lab_A180
    var_48 = var_928;
    var_56 = 0;
    var_64 = 1;
    var_72 = 24;
    pri = fun_6808(var_64, var_56, var_48)
// lab_A180
    pri = var_8;
    OP_JZER lab_A1F8
    var_8 = 10;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 4896;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0328(var_32, var_24)
    var_48 = 0;
    pri = fun_03F8()
// lab_A1F8
    pri = 0;
    return pri;
}
// fun_A210
fun_A210() {
    OP_ZERO_P_S -8
    pri = arg_1;
    OP_ADD_P_C -1
    var_16 = pri;
    OP_ZERO_P_S -24
    OP_ZERO_P_S -24
    OP_JUMP lab_A278
// lab_A278
    OP_LOAD_S_BOTH -24, 32
    OP_JSGEQ lab_A370
    pri = var_8;
    var_8 = pri;
    pri = arg_2;
    var_16 = pri;
    pri = var_24;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 8
    OP_LOAD_I 
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    OP_LOAD_S_BOTH 24, -8
    OP_JSGEQ lab_A360
    pri = var_24;
    var_16 = pri;
    OP_JUMP lab_A370
// lab_A370
    pri = var_16;
    return pri;
// lab_A360
    OP_JUMP lab_A270
// lab_A270
    OP_INC_P_S -24
}
// fun_A388
fun_A388() {
    OP_ZERO_P_S -8
    pri = GetTargetFieldObjectID()
    var_16 = pri;
    var_24 = 1;
    var_32 = 1;
    var_40 = 3;
    var_48 = 0;
    var_56 = 100;
    var_64 = -1;
    var_72 = 0;
    var_80 = 1;
    var_88 = 1;
    var_96 = 572684183594310482;
    var_104 = var_16;
    var_112 = 88;
    pri = fun_4530(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    var_128 = 0;
    var_136 = 0;
    var_144 = 1;
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = 48;
    pri = fun_1F18(var_168, var_160, var_152, var_144, var_136, var_128)
    var_24 = pri;
    pri = var_24;
    OP_JZER lab_A9B8
    var_184 = 0;
    var_192 = 3;
    var_200 = 0;
    var_208 = 100;
    var_216 = -1;
    var_224 = 572679785547797638;
    var_232 = var_16;
    var_240 = 56;
    pri = fun_19A8(var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_248 = 1;
    var_256 = 8;
    pri = fun_1CD0(var_248)
    var_264 = 0;
    pri = fun_1D90()
    OP_CONST_S -32, 304
    var_280 = 9010327285021969031;
    pri = FlagGet(var_280)
    OP_JZER lab_A5C0
    OP_CONST_S -32, 306
    OP_JUMP lab_A638
// lab_A9B8
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 572678686036169427;
    var_56 = var_16;
    var_64 = 56;
    pri = fun_19A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1CD0(var_72)
    var_88 = 0;
    pri = fun_1D90()
// lab_A5C0
    var_8 = -9019446742694110882;
    pri = FlagGet(var_8)
    OP_JZER lab_A620
    OP_CONST_S -32, 305
    OP_JUMP lab_A638
// lab_A620
    OP_CONST_S -32, 304
// lab_A638
    var_8 = -1;
    var_16 = 0;
    var_24 = 4;
    var_32 = 0;
    var_40 = var_32;
    var_48 = 40;
    pri = fun_2250(var_40, var_32, var_24, var_16, var_8)
    var_56 = 0;
    pri = fun_2368()
    OP_JZER lab_A7E0
    var_64 = 0;
    pri = fun_5B40()
    var_72 = 1;
    var_80 = 1;
    var_88 = 0;
    var_96 = 1;
    var_104 = 1;
    var_112 = var_16;
    var_120 = 48;
    pri = fun_42D8(var_112, var_104, var_96, var_88, var_80, var_72)
    var_128 = 4896;
    var_136 = 8;
    var_144 = 16;
    pri = fun_0328(var_136, var_128)
    var_152 = 0;
    pri = fun_03F8()
    var_160 = 0;
    var_168 = 3;
    var_176 = 0;
    var_184 = 100;
    var_192 = -1;
    var_200 = 572680885059425849;
    var_208 = var_16;
    var_216 = 56;
    pri = fun_19A8(var_208, var_200, var_192, var_184, var_176, var_168, var_160)
    var_224 = 1;
    var_232 = 8;
    pri = fun_1CD0(var_224)
    var_240 = 0;
    pri = fun_1D90()
    OP_JUMP lab_A988
// lab_A7E0
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = var_16;
    var_56 = 48;
    pri = fun_42D8(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 4896;
    var_72 = 8;
    var_80 = 16;
    pri = fun_0328(var_72, var_64)
    var_88 = 0;
    pri = fun_03F8()
    var_96 = 0;
    var_104 = 3;
    var_112 = 0;
    var_120 = 100;
    var_128 = -1;
    var_136 = 572683084082682271;
    var_144 = var_16;
    var_152 = 56;
    pri = fun_19A8(var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_160 = 1;
    var_168 = 8;
    pri = fun_1CD0(var_160)
    var_176 = 0;
    pri = fun_1D90()
    var_184 = 0;
    var_192 = 3;
    var_200 = 0;
    var_208 = 100;
    var_216 = -1;
    var_224 = 572681984571054060;
    var_232 = var_16;
    var_240 = 56;
    pri = fun_19A8(var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_248 = 1;
    var_256 = 8;
    pri = fun_1CD0(var_248)
    var_264 = 0;
    pri = fun_1D90()
// lab_A988
    OP_CONST_S -8, 1
    OP_JUMP lab_AA48
// lab_AA48
    pri = var_8;
    OP_JZER lab_AAB0
    var_8 = 1;
    var_16 = 0;
    var_24 = 4408;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0388(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03F8()
// lab_AAB0
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = var_16;
    var_40 = 32;
    pri = fun_45D8(var_32, var_24, var_16, var_8)
    pri = var_8;
    OP_JZER lab_AB30
    var_48 = var_16;
    var_56 = 0;
    var_64 = 1;
    var_72 = 24;
    pri = fun_6808(var_64, var_56, var_48)
// lab_AB30
    pri = var_8;
    OP_JZER lab_ABA8
    var_8 = 10;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 4896;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0328(var_32, var_24)
    var_48 = 0;
    pri = fun_03F8()
// lab_ABA8
    pri = 0;
    return pri;
}
// fun_ABC0
fun_ABC0() {
    var_8 = 6;
    var_16 = 9024;
    var_24 = 8802641224559852288;
    var_32 = 24;
    pri = fun_0CC8(var_24, var_16, var_8)
    var_40 = 9152;
    var_48 = 8802641224559852288;
    var_56 = 16;
    pri = fun_0C90(var_48, var_40)
    var_64 = 5;
    var_72 = 8;
    pri = fun_0060(var_64)
    var_80 = 3;
    var_88 = 0;
    var_96 = -3210222825647724872;
    var_104 = 24;
    pri = fun_1B88(var_96, var_88, var_80)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1CD0(var_112)
    var_128 = 0;
    pri = fun_1D90()
    var_136 = 8802641224559852288;
    var_144 = 8;
    pri = fun_0B68(var_136)
    var_152 = 1;
    var_160 = -5699595958275463438;
    pri = WorkAdd(var_160, var_152)
    pri = 0;
    return pri;
}
// fun_AD28
fun_AD28() {
    var_8 = 6;
    var_16 = 9288;
    var_24 = 8802641224559852288;
    var_32 = 24;
    pri = fun_0CC8(var_24, var_16, var_8)
    var_40 = 9416;
    var_48 = 8802641224559852288;
    var_56 = 16;
    pri = fun_0C90(var_48, var_40)
    var_64 = 5;
    var_72 = 8;
    pri = fun_0060(var_64)
    var_80 = 3;
    var_88 = 0;
    var_96 = 2935422607813404175;
    var_104 = 24;
    pri = fun_1B88(var_96, var_88, var_80)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1CD0(var_112)
    var_128 = 0;
    pri = fun_1D90()
    var_136 = 8802641224559852288;
    var_144 = 8;
    pri = fun_0B68(var_136)
    var_152 = 1;
    var_160 = -7395063505759188052;
    pri = WorkAdd(var_160, var_152)
    pri = 0;
    return pri;
}
// fun_AE90
fun_AE90() {
    var_8 = 6;
    var_16 = 9552;
    var_24 = 8802641224559852288;
    var_32 = 24;
    pri = fun_0CC8(var_24, var_16, var_8)
    var_40 = 9680;
    var_48 = 8802641224559852288;
    var_56 = 16;
    pri = fun_0C90(var_48, var_40)
    var_64 = 5;
    var_72 = 8;
    pri = fun_0060(var_64)
    var_80 = 3;
    var_88 = 0;
    var_96 = -237059891863977126;
    var_104 = 24;
    pri = fun_1B88(var_96, var_88, var_80)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1CD0(var_112)
    var_128 = 0;
    pri = fun_1D90()
    var_136 = 8802641224559852288;
    var_144 = 8;
    pri = fun_0B68(var_136)
    var_152 = 1;
    var_160 = -322890048460026954;
    pri = WorkAdd(var_160, var_152)
    pri = 0;
    return pri;
}
// fun_AFF8
fun_AFF8() {
    var_8 = 6;
    var_16 = 9816;
    var_24 = 8802641224559852288;
    var_32 = 24;
    pri = fun_0CC8(var_24, var_16, var_8)
    var_40 = 9944;
    var_48 = 8802641224559852288;
    var_56 = 16;
    pri = fun_0C90(var_48, var_40)
    var_64 = 5;
    var_72 = 8;
    pri = fun_0060(var_64)
    var_80 = 3;
    var_88 = 0;
    var_96 = 367029638429639945;
    var_104 = 24;
    pri = fun_1B88(var_96, var_88, var_80)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1CD0(var_112)
    var_128 = 0;
    pri = fun_1D90()
    var_136 = 8802641224559852288;
    var_144 = 8;
    pri = fun_0B68(var_136)
    var_152 = 1;
    var_160 = -4870420589673811091;
    pri = WorkAdd(var_160, var_152)
    pri = 0;
    return pri;
}
// fun_B160
fun_B160() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = 3;
    var_40 = 0;
    var_48 = 100;
    var_56 = -1;
    var_64 = 0;
    var_72 = 1;
    var_80 = 1;
    var_88 = -775743715967814144;
    var_96 = var_8;
    var_104 = 88;
    pri = fun_4530(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1CD0(var_112)
    var_128 = 0;
    pri = fun_1D90()
    var_136 = 0;
    var_144 = 0;
    var_152 = 0;
    var_160 = var_8;
    var_168 = 32;
    pri = fun_45D8(var_160, var_152, var_144, var_136)
    pri = 0;
    return pri;
}
