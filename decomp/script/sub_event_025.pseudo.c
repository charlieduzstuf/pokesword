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
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_03E8
fun_03E8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0438
fun_0438() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E50(var_8)
    OP_JZER lab_04B0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0E80(var_24)
    OP_JNZ lab_04B0
    pri = 0;
    return pri;
// lab_04B0
    OP_JUMP lab_04C0
// lab_04C0
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0520
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0520
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_04C0
    pri = 0;
    return pri;
}
// fun_0560
fun_0560() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0598
fun_0598() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_05D8
fun_05D8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0610
fun_0610() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0658
    pri = 0;
    return pri;
// lab_0658
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0698
// lab_0698
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E50(var_8)
    OP_JNZ lab_0720
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0710
    pri = 0;
    return pri;
// lab_0720
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0768
    pri = 0;
    return pri;
// lab_0768
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_07C8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0810(var_8)
    pri = 0;
    return pri;
// lab_07C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0698
    pri = 0;
    return pri;
// lab_0710
    OP_JUMP lab_0768
}
// fun_0810
fun_0810() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0848
fun_0848() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0898
    pri = 0;
    return pri;
// lab_0898
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E50(var_8)
    OP_JZER lab_09C8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_08F0
    OP_ZERO_P_S 64
// lab_09C8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A00
    OP_CONST_S 64, 1
// lab_0A00
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A38
    OP_CONST_S 72, 1
// lab_0A38
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
// lab_08F0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0918
    OP_ZERO_P_S 72
// lab_0918
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
    OP_JUMP lab_0AD8
// lab_0AD8
    pri = 0;
    return pri;
}
// fun_0AE8
fun_0AE8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0B28
fun_0B28() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0B68
fun_0B68() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0BA8
fun_0BA8() {
    var_8 = arg_1;
    var_16 = 8;
    pri = fun_0E50(var_8)
    OP_JZER lab_0C48
    var_24 = arg_5;
    var_32 = arg_4;
    var_40 = arg_3;
    var_48 = 0;
    var_56 = arg_2;
    var_64 = 0;
    var_72 = 344;
    var_80 = arg_1;
    var_88 = arg_0;
    pri = PlayParticleVfx_(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    return pri;
// lab_0C48
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = 0;
    var_40 = arg_2;
    var_48 = 0;
    var_56 = 456;
    var_64 = arg_1;
    var_72 = arg_0;
    pri = PlayParticleVfx_(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0CB0
fun_0CB0() {
    pri = 0;
    OP_ADDR_ALT -1376
    OP_FILL 1376
    pri = 560;
    OP_ADDR_ALT -1376
    OP_MOVS 1368
    pri = 0;
    OP_ADDR_ALT -2560
    OP_FILL 1184
    pri = 1928;
    OP_ADDR_ALT -2560
    OP_MOVS 1176
    OP_ADDR_P_ALT -2560
    pri = arg_0;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_2568 = pri;
    pri = SoundPostEvent(var_2568)
    var_2576 = arg_3;
    var_2584 = arg_5;
    var_2592 = arg_2;
    var_2600 = arg_4;
    var_2608 = arg_1;
    OP_ADDR_P_ALT -1376
    pri = arg_0;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_2616 = pri;
    var_2624 = 48;
    pri = fun_0BA8(var_2616, var_2608, var_2600, var_2592, var_2584, var_2576)
    return pri;
}
// fun_0E50
fun_0E50() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0E80
fun_0E80() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0EB0
fun_0EB0() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_0EE0
fun_0EE0() {
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
// switch_14F8
        case default:
        {
// switch_14F8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1540
// lab_1540
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
            OP_JNZ lab_15E8
            var_88 = 0;
            pri = fun_18B8()
// lab_15E8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_14F8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_10E0
                case default:
                {
// switch_10E0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1158
// lab_1158
                    OP_JUMP lab_1540
                }
                case 0x0:
                {
// switch_10E0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1158
                }
                case 0x1:
                {
// switch_10E0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1158
                }
                case 0x2:
                {
// switch_10E0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1158
                }
                case 0x3:
                {
// switch_10E0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1158
                }
                case 0x4:
                {
// switch_10E0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1158
                }
                case 0x5:
                {
// switch_10E0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1158
                }
            }
        }
        case 0x65:
        {
// switch_14F8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1298
                case default:
                {
// switch_1298_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1310
// lab_1310
                    OP_JUMP lab_1540
                }
                case 0x0:
                {
// switch_1298_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1310
                }
                case 0x1:
                {
// switch_1298_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1310
                }
                case 0x2:
                {
// switch_1298_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1310
                }
                case 0x3:
                {
// switch_1298_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1310
                }
                case 0x4:
                {
// switch_1298_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1310
                }
                case 0x5:
                {
// switch_1298_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1310
                }
            }
        }
        case 0x66:
        {
// switch_14F8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1450
                case default:
                {
// switch_1450_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_14C8
// lab_14C8
                    OP_JUMP lab_1540
                }
                case 0x0:
                {
// switch_1450_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_14C8
                }
                case 0x1:
                {
// switch_1450_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_14C8
                }
                case 0x2:
                {
// switch_1450_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_14C8
                }
                case 0x3:
                {
// switch_1450_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_14C8
                }
                case 0x4:
                {
// switch_1450_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_14C8
                }
                case 0x5:
                {
// switch_1450_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_14C8
                }
            }
        }
    }
}
// fun_1600
fun_1600() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_0EE0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1668
fun_1668() {
    pri = 3104;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 3184;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_05D8(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1710
    pri = 1;
    return pri;
// lab_1710
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1758
fun_1758() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_17A8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1668(var_8)
    arg_2 = pri;
// lab_17A8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0EE0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1808
fun_1808() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1600(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1858
fun_1858() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1808(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_18B8
fun_18B8() {
    OP_JUMP lab_18D0
// lab_18D0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1910
    pri = 0;
    return pri;
// lab_1910
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_18D0
    pri = 0;
    return pri;
}
// fun_1950
fun_1950() {
    var_8 = 0;
    pri = fun_18B8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1A00
    var_32 = 3232;
    pri = SoundPostEvent(var_32)
// lab_1A00
    pri = 0;
    return pri;
}
// fun_1A10
fun_1A10() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1A40
fun_1A40() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1A70
// lab_1A70
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1AB0
    OP_JUMP lab_1AE0
// lab_1AB0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1A70
// lab_1AE0
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B28
fun_1B28() {
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
// fun_1B98
fun_1B98() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1BD0
fun_1BD0() {
    OP_JUMP lab_1BE8
// lab_1BE8
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1C30
    OP_JUMP lab_1C60
    OP_JUMP lab_1C50
// lab_1C30
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_1C60
    pri = 0;
    return pri;
// lab_1C50
    OP_JUMP lab_1BE8
}
// fun_1C70
fun_1C70() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_1CA0
fun_1CA0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1CF0
fun_1CF0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1D40
fun_1D40() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1D90
fun_1D90() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1DE0
fun_1DE0() {
    pri = arg_6;
    OP_JNZ lab_1E18
    var_8 = 0;
    pri = fun_0AE8()
// lab_1E18
    pri = arg_1;
    switch (pri) {
// switch_3380
        case default:
        {
// switch_3380_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_36D0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_36D0
            pri = 1;
            OP_JUMP lab_36D8
// lab_36D0
            pri = 0;
// lab_36D8
            OP_JZER lab_3830
            var_16 = 11080;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_05D8(var_24, var_16)
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
            var_64 = 11184;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_3890
// lab_3830
            var_8 = 64;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
// lab_3890
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_38F0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3950
// lab_38F0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3950
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3950
            pri = arg_2;
            OP_JZER lab_3990
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3990
            var_8 = 0;
            pri = fun_0B28()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3380_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3380_case_default
        }
        case 0x1:
        {
// switch_3380_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3380_case_default
        }
        case 0x2:
        {
// switch_3380_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3380_case_default
        }
        case 0x3:
        {
// switch_3380_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3380_case_default
        }
        case 0x4:
        {
// switch_3380_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3380_case_default
        }
        case 0x5:
        {
// switch_3380_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8368;
            var_72 = 8360;
            var_80 = 8352;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3380_case_default
        }
        case 0x6:
        {
// switch_3380_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8392;
            var_72 = 8384;
            var_80 = 8376;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3380_case_default
        }
        case 0x7:
        {
// switch_3380_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8416;
            var_72 = 8408;
            var_80 = 8400;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3380_case_default
        }
        case 0x8:
        {
// switch_3380_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3380_case_default
        }
        case 0x9:
        {
// switch_3380_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8440;
            var_72 = 8432;
            var_80 = 8424;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3380_case_default
        }
        case 0xa:
        {
// switch_3380_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8464;
            var_72 = 8456;
            var_80 = 8448;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3380_case_default
        }
        case 0xb:
        {
// switch_3380_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8488;
            var_72 = 8480;
            var_80 = 8472;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3380_case_default
        }
        case 0xc:
        {
// switch_3380_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8512;
            var_72 = 8504;
            var_80 = 8496;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3380_case_default
        }
        case 0xd:
        {
// switch_3380_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8536;
            var_72 = 8528;
            var_80 = 8520;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3380_case_default
        }
        case 0xe:
        {
// switch_3380_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8560;
            var_72 = 8552;
            var_80 = 8544;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3380_case_default
        }
        case 0xf:
        {
// switch_3380_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3380_case_default
        }
        case 0x10:
        {
// switch_3380_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3380_case_default
        }
        case 0x11:
        {
// switch_3380_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8584;
            var_72 = 8576;
            var_80 = 8568;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3380_case_default
        }
        case 0x12:
        {
// switch_3380_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8608;
            var_72 = 8600;
            var_80 = 8592;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3380_case_default
        }
        case 0x13:
        {
// switch_3380_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3380_case_default
        }
        case 0x14:
        {
// switch_3380_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3380_case_default
        }
        case 0x15:
        {
// switch_3380_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3380_case_default
        }
        case 0x16:
        {
// switch_3380_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3380_case_default
        }
        case 0x17:
        {
// switch_3380_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3380_case_default
        }
        case 0x18:
        {
// switch_3380_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3380_case_default
        }
        case 0x19:
        {
// switch_3380_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8632;
            var_72 = 8624;
            var_80 = 8616;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3380_case_default
        }
        case 0x1a:
        {
// switch_3380_case_0x1a
            var_8 = 1;
            var_16 = 8640;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0598(var_24, var_16, var_8)
            var_40 = 8776;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0560(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 8856;
            var_88 = 8848;
            var_96 = 8840;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0848(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3380_case_default
        }
        case 0x1b:
        {
// switch_3380_case_0x1b
            var_8 = 3;
            var_16 = 8864;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0598(var_24, var_16, var_8)
            var_40 = 9000;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0560(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 9080;
            var_88 = 9072;
            var_96 = 9064;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0848(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3380_case_default
        }
        case 0x1c:
        {
// switch_3380_case_0x1c
            var_8 = 2;
            var_16 = 9088;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0598(var_24, var_16, var_8)
            var_40 = 9224;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0560(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 9304;
            var_88 = 9296;
            var_96 = 9288;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0848(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3380_case_default
        }
        case 0x1d:
        {
// switch_3380_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9312;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3380_case_default
        }
        case 0x1e:
        {
// switch_3380_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9448;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3380_case_default
        }
        case 0x1f:
        {
// switch_3380_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9584;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3380_case_default
        }
        case 0x20:
        {
// switch_3380_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9720;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3380_case_default
        }
        case 0x21:
        {
// switch_3380_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9840;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3380_case_default
        }
        case 0x22:
        {
// switch_3380_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9960;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3380_case_default
        }
        case 0x23:
        {
// switch_3380_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10096;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3380_case_default
        }
        case 0x24:
        {
// switch_3380_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10232;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3380_case_default
        }
        case 0x25:
        {
// switch_3380_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10368;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3380_case_default
        }
        case 0x26:
        {
// switch_3380_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10504;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3380_case_default
        }
        case 0x27:
        {
// switch_3380_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10648;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3380_case_default
        }
        case 0x28:
        {
// switch_3380_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10792;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3380_case_default
        }
        case 0x29:
        {
// switch_3380_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10936;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3380_case_default
        }
    }
}
// fun_39C0
fun_39C0() {
    pri = arg_5;
    OP_JNZ lab_39F8
    var_8 = 0;
    pri = fun_0AE8()
// lab_39F8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3A48
    OP_CONST_S -8, -1
// lab_3A48
    pri = arg_1;
    switch (pri) {
// switch_5500
        case default:
        {
// switch_5500_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_59A8
            var_520 = 30944;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_05D8(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_59A8
            pri = 1;
            OP_JUMP lab_59B0
// lab_59A8
            pri = 0;
// lab_59B0
            OP_JZER lab_5A00
            var_8 = 64;
            var_16 = 31040;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_5C58
// lab_5A00
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5A68
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5A68
            pri = 1;
            OP_JUMP lab_5A70
// lab_5A68
            pri = 0;
// lab_5A70
            OP_JZER lab_5BF8
            var_16 = 31216;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_05D8(var_24, var_16)
            var_528 = pri;
            pri = 0;
            OP_ADDR_ALT -656
            OP_FILL 128
            OP_PUSH_P_ADR -656
            pri = var_528;
            OP_ADD_P_C 1
            var_168 = pri;
            pri = NumericToString(var_168, var_160)
            OP_PUSH_P_ADR -656
            OP_PUSH_P_ADR -656
            var_176 = 31320;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 31336;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 11200;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_5C58
// lab_5BF8
            var_8 = 64;
            alt = 11200;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
// lab_5C58
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_5CC8
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_5CC8
            var_8 = 0;
            pri = fun_0B28()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5500_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x1:
        {
// switch_5500_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x2:
        {
// switch_5500_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x3:
        {
// switch_5500_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x4:
        {
// switch_5500_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x5:
        {
// switch_5500_case_0x5
            var_8 = 2;
            var_16 = 21200;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0598(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0810(var_40)
            OP_JUMP switch_5500_case_default
        }
        case 0x6:
        {
// switch_5500_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x7:
        {
// switch_5500_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x8:
        {
// switch_5500_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x9:
        {
// switch_5500_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0xa:
        {
// switch_5500_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0xb:
        {
// switch_5500_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0xc:
        {
// switch_5500_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0xd:
        {
// switch_5500_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21848;
            var_72 = 21672;
            var_80 = 21488;
            var_88 = 21296;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5500_case_default
        }
        case 0xe:
        {
// switch_5500_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22504;
            var_72 = 22296;
            var_80 = 22080;
            var_88 = 21856;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5500_case_default
        }
        case 0xf:
        {
// switch_5500_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22896;
            var_72 = 22776;
            var_80 = 22648;
            var_88 = 22512;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5500_case_default
        }
        case 0x10:
        {
// switch_5500_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23240;
            var_72 = 23136;
            var_80 = 23024;
            var_88 = 22904;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5500_case_default
        }
        case 0x11:
        {
// switch_5500_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23584;
            var_72 = 23480;
            var_80 = 23368;
            var_88 = 23248;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5500_case_default
        }
        case 0x12:
        {
// switch_5500_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x13:
        {
// switch_5500_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x14:
        {
// switch_5500_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24144;
            var_72 = 23968;
            var_80 = 23784;
            var_88 = 23592;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5500_case_default
        }
        case 0x15:
        {
// switch_5500_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x16:
        {
// switch_5500_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x17:
        {
// switch_5500_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x18:
        {
// switch_5500_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x19:
        {
// switch_5500_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x1a:
        {
// switch_5500_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x1b:
        {
// switch_5500_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x1c:
        {
// switch_5500_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 24536;
            var_72 = 24416;
            var_80 = 24288;
            var_88 = 24152;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5500_case_default
        }
        case 0x1d:
        {
// switch_5500_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x1e:
        {
// switch_5500_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 25000;
            var_72 = 24856;
            var_80 = 24704;
            var_88 = 24544;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5500_case_default
        }
        case 0x1f:
        {
// switch_5500_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x20:
        {
// switch_5500_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x21:
        {
// switch_5500_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x22:
        {
// switch_5500_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x23:
        {
// switch_5500_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x24:
        {
// switch_5500_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25368;
            var_72 = 25256;
            var_80 = 25136;
            var_88 = 25008;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5500_case_default
        }
        case 0x25:
        {
// switch_5500_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25736;
            var_72 = 25624;
            var_80 = 25504;
            var_88 = 25376;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5500_case_default
        }
        case 0x26:
        {
// switch_5500_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x27:
        {
// switch_5500_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x28:
        {
// switch_5500_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x29:
        {
// switch_5500_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26176;
            var_72 = 26040;
            var_80 = 25896;
            var_88 = 25744;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5500_case_default
        }
        case 0x2a:
        {
// switch_5500_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26568;
            var_72 = 26448;
            var_80 = 26320;
            var_88 = 26184;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5500_case_default
        }
        case 0x2b:
        {
// switch_5500_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26984;
            var_72 = 26856;
            var_80 = 26720;
            var_88 = 26576;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5500_case_default
        }
        case 0x2c:
        {
// switch_5500_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27424;
            var_72 = 27288;
            var_80 = 27144;
            var_88 = 26992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5500_case_default
        }
        case 0x2d:
        {
// switch_5500_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x2e:
        {
// switch_5500_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27744;
            var_72 = 27648;
            var_80 = 27544;
            var_88 = 27432;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5500_case_default
        }
        case 0x2f:
        {
// switch_5500_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28136;
            var_72 = 28016;
            var_80 = 27888;
            var_88 = 27752;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5500_case_default
        }
        case 0x30:
        {
// switch_5500_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28528;
            var_72 = 28408;
            var_80 = 28280;
            var_88 = 28144;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5500_case_default
        }
        case 0x31:
        {
// switch_5500_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x32:
        {
// switch_5500_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x33:
        {
// switch_5500_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28920;
            var_72 = 28800;
            var_80 = 28672;
            var_88 = 28536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5500_case_default
        }
        case 0x34:
        {
// switch_5500_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 29288;
            var_72 = 29176;
            var_80 = 29056;
            var_88 = 28928;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5500_case_default
        }
        case 0x35:
        {
// switch_5500_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 29776;
            var_72 = 29624;
            var_80 = 29464;
            var_88 = 29296;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5500_case_default
        }
        case 0x36:
        {
// switch_5500_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 30144;
            var_72 = 30032;
            var_80 = 29912;
            var_88 = 29784;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5500_case_default
        }
        case 0x37:
        {
// switch_5500_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x38:
        {
// switch_5500_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 30512;
            var_72 = 30400;
            var_80 = 30280;
            var_88 = 30152;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0848(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5500_case_default
        }
        case 0x39:
        {
// switch_5500_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x3a:
        {
// switch_5500_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x3b:
        {
// switch_5500_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x3c:
        {
// switch_5500_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 30520;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x3d:
        {
// switch_5500_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 30696;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
        case 0x3e:
        {
// switch_5500_case_0x3e
            var_8 = 4;
            var_16 = 30840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0598(var_24, var_16, var_8)
            OP_JUMP switch_5500_case_default
        }
    }
}
// fun_5CF8
fun_5CF8() {
    pri = arg_4;
    OP_JNZ lab_5D30
    var_8 = 0;
    pri = fun_0AE8()
// lab_5D30
    pri = arg_1;
    switch (pri) {
// switch_7108
        case default:
        {
// switch_7108_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 31912;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0E50(var_264)
            OP_JZER lab_76D0
            pri = arg_3;
            switch (pri) {
// switch_7678
                case default:
                {
// switch_7678_case_default
                    OP_JUMP lab_7988
// lab_7988
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_79F8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_79F8
                    var_8 = 0;
                    pri = fun_0B28()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7678_case_0x1
                    var_8 = 32;
                    var_16 = 32064;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7678_case_default
                }
                case 0x2:
                {
// switch_7678_case_0x2
                    var_8 = 32;
                    var_16 = 32168;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7678_case_default
                }
                case 0x3:
                {
// switch_7678_case_0x3
                    var_8 = 32;
                    var_16 = 31968;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7678_case_default
                }
            }
// lab_76D0
            pri = arg_1;
            OP_JZER lab_7720
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7720
            pri = 0;
            OP_JUMP lab_7728
// lab_7720
            pri = 1;
// lab_7728
            OP_JZER lab_7790
            var_8 = 32264;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_05D8(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7790
            pri = 1;
            OP_JUMP lab_7798
// lab_7790
            pri = 0;
// lab_7798
            OP_JZER lab_77E8
            var_8 = 32;
            var_16 = 32360;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_7988
// lab_77E8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7850
            var_8 = 32;
            var_16 = 32520;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_7988
// lab_7850
            var_16 = 32640;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_05D8(var_24, var_16)
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
            var_176 = 32744;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 32760;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_7108_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x1:
        {
// switch_7108_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x2:
        {
// switch_7108_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x3:
        {
// switch_7108_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x4:
        {
// switch_7108_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x5:
        {
// switch_7108_case_0x5
            var_8 = 1;
            var_16 = 31392;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0598(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0810(var_40)
            OP_JUMP switch_7108_case_default
        }
        case 0x6:
        {
// switch_7108_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x7:
        {
// switch_7108_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x8:
        {
// switch_7108_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x9:
        {
// switch_7108_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0xa:
        {
// switch_7108_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0xb:
        {
// switch_7108_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0xc:
        {
// switch_7108_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0xd:
        {
// switch_7108_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0xe:
        {
// switch_7108_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0xf:
        {
// switch_7108_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x10:
        {
// switch_7108_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x11:
        {
// switch_7108_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x12:
        {
// switch_7108_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x13:
        {
// switch_7108_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x14:
        {
// switch_7108_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x15:
        {
// switch_7108_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x16:
        {
// switch_7108_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x17:
        {
// switch_7108_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x18:
        {
// switch_7108_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x19:
        {
// switch_7108_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x1a:
        {
// switch_7108_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x1b:
        {
// switch_7108_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x1c:
        {
// switch_7108_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x1d:
        {
// switch_7108_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x1e:
        {
// switch_7108_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x1f:
        {
// switch_7108_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x20:
        {
// switch_7108_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x21:
        {
// switch_7108_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x22:
        {
// switch_7108_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x23:
        {
// switch_7108_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x24:
        {
// switch_7108_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x25:
        {
// switch_7108_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x26:
        {
// switch_7108_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x27:
        {
// switch_7108_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x28:
        {
// switch_7108_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x29:
        {
// switch_7108_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x2a:
        {
// switch_7108_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x2b:
        {
// switch_7108_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x2c:
        {
// switch_7108_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x2d:
        {
// switch_7108_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x2e:
        {
// switch_7108_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x2f:
        {
// switch_7108_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x30:
        {
// switch_7108_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x31:
        {
// switch_7108_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x32:
        {
// switch_7108_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x33:
        {
// switch_7108_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x34:
        {
// switch_7108_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x35:
        {
// switch_7108_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x36:
        {
// switch_7108_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x37:
        {
// switch_7108_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x38:
        {
// switch_7108_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x39:
        {
// switch_7108_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x3a:
        {
// switch_7108_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x3b:
        {
// switch_7108_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x3c:
        {
// switch_7108_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31488;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x3d:
        {
// switch_7108_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31664;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
        case 0x3e:
        {
// switch_7108_case_0x3e
            var_8 = 3;
            var_16 = 31808;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0598(var_24, var_16, var_8)
            OP_JUMP switch_7108_case_default
        }
    }
}
// fun_7A28
fun_7A28() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_7B28
        case default:
        {
// switch_7B28_case_default
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
// switch_7B28_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_7B28_case_default
        }
        case 0x1:
        {
// switch_7B28_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_7B28_case_default
        }
        case 0x2:
        {
// switch_7B28_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_7B28_case_default
        }
        case 0x3:
        {
// switch_7B28_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_7B28_case_default
        }
    }
}
// fun_7BE8
fun_7BE8() {
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
    pri = fun_1758(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_18B8()
    pri = 0;
    return pri;
}
// fun_7C80
fun_7C80() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_7A28(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_7BE8(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_7D28
fun_7D28() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_7D78
// lab_7D78
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 32808;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_7DF0
    OP_JUMP lab_7E20
// lab_7DF0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_7D78
// lab_7E20
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_7EA8
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_5CF8(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0EB0(var_56)
// lab_7EA8
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_7F10
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0B68(var_24, var_16)
// lab_7F10
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0B68(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_7FD0
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0610(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_03E8(var_88, var_80, var_72, var_64, var_56)
// lab_7FD0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_8010
    pri = 0;
    return pri;
// lab_8010
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8158
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 32928;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0560(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_8120
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_8158
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0438(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0438(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0610(var_40)
    pri = 0;
    return pri;
// lab_8120
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0B68(var_16, var_8)
}
// fun_81E0
fun_81E0() {
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
    pri = fun_7C80(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1950(var_112)
    var_128 = 0;
    pri = fun_1A10()
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
    pri = fun_7D28(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_8358
fun_8358() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_83F0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0610(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_1DE0(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_83F0
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_8548
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_84B0
    var_24 = 33064;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_84B0
    pri = 1;
    OP_JUMP lab_84B8
// lab_8548
    pri = 0;
    return pri;
// lab_84B0
    pri = 0;
// lab_84B8
    OP_JZER lab_8548
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0610(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_1DE0(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_8558
fun_8558() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_8358(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_85E0(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_85E0
fun_85E0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_8778(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8648
fun_8648() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_86B8
    OP_CONST_S -8, 1
// lab_86B8
    pri = arg_0;
    OP_JNZ lab_86D8
    OP_ZERO_P_S -8
// lab_86D8
    pri = var_8;
    OP_JZER lab_8760
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_8760
    pri = 0;
    return pri;
}
// fun_8778
fun_8778() {
    var_8 = 33168;
    var_16 = 8;
    pri = fun_1B98(var_8)
    var_24 = 0;
    pri = fun_1BD0()
    pri = arg_3;
    OP_JNZ lab_8898
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_8860
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_8908(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_8888
// lab_8898
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8AA8(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_8860
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_89D0(var_16, var_8)
// lab_8888
    OP_JUMP lab_88E0
// lab_88E0
    var_8 = 0;
    pri = fun_1C70()
    pri = 0;
    return pri;
}
// fun_8908
fun_8908() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8AA8(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_89B8
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_89B8
    pri = 0;
    return pri;
}
// fun_89D0
fun_89D0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_1CF0(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_1858(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1950(var_72)
    var_88 = 0;
    pri = fun_1A10()
    var_96 = 0;
    var_104 = 8;
    pri = fun_1CA0(var_96)
    pri = 0;
    return pri;
}
// fun_8AA8
fun_8AA8() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8AF0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_8DB0(var_8)
// lab_8AF0
    pri = arg_4;
    OP_JNZ lab_8B58
    var_8 = 0;
    var_16 = 8;
    pri = fun_1CA0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1CF0(var_40, var_32, var_24)
// lab_8B58
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_8BF8
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_1D40(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1858(var_56, var_48, var_40)
    OP_JUMP lab_8CE8
// lab_8BF8
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_8CB0
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_8CB0
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_8CB0
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1858(var_24, var_16, var_8)
// lab_8CE8
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8D28
    var_8 = 0;
    var_16 = 8;
    pri = fun_02A8(var_8)
// lab_8D28
    var_8 = 1;
    var_16 = 8;
    pri = fun_1950(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_8FB8(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_8648(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_8DB0
fun_8DB0() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_8E10
    var_16 = 33328;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_8E10
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_8F50
        case default:
        {
// switch_8F50_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_8F40
            var_16 = 33872;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_8F40
            OP_JUMP lab_8F88
// lab_8F88
            var_8 = 34088;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_8F50_case_0x1
            var_8 = 33544;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8F88
        }
        case 0x2:
        {
// switch_8F50_case_0x2
            var_8 = 33672;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8F88
        }
    }
}
// fun_8FB8
fun_8FB8() {
    pri = arg_2;
    OP_JNZ lab_90A0
    var_8 = 0;
    var_16 = 8;
    pri = fun_1CA0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1CF0(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_1D90(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_90A0
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_1858(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1950(var_40)
    var_56 = 0;
    pri = fun_1A10()
    pri = 0;
    return pri;
}
// fun_9118
fun_9118() {
    pri = g_mode;
    switch (pri) {
// switch_9228
        case default:
        {
// switch_9228_case_default
            pri = CommandNOP()
            OP_JUMP lab_9290
// lab_9290
            pri = 0;
            return pri;
        }
        case 0x9f938078c808f788:
        {
// switch_9228_case_0x9f938078c808f788
            var_8 = 0;
            pri = fun_AC00()
            OP_JUMP lab_9290
        }
        case 0xa8e3989a560e95cc:
        {
// switch_9228_case_0xa8e3989a560e95cc
            var_8 = 0;
            pri = fun_A9D8()
            OP_JUMP lab_9290
        }
        case 0xbeedbeb8901501ae:
        {
// switch_9228_case_0xbeedbeb8901501ae
            var_8 = 0;
            pri = fun_92B8()
            OP_JUMP lab_9290
        }
        case 0x0:
        {
// switch_9228_case_0x0
            var_8 = 0;
            pri = fun_92A0()
            OP_JUMP lab_9290
        }
        case 0x4f7eb8399af6e9e1:
        {
// switch_9228_case_0x4f7eb8399af6e9e1
            var_8 = 0;
            pri = fun_9C98()
            OP_JUMP lab_9290
        }
    }
}
// fun_92A0
fun_92A0() {
    pri = 0;
    return pri;
}
// fun_92B8
fun_92B8() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = var_8;
    var_64 = 48;
    pri = fun_7A28(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = -3961876595160614838;
    pri = WorkGet(var_72)
    alt = 1;
    OP_JSGRTR lab_93A0
    var_80 = var_8;
    var_88 = 8;
    pri = fun_9450(var_80)
    OP_JUMP lab_9400
// lab_93A0
    var_8 = -3961876595160614838;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 2
    OP_JZER lab_9400
    var_16 = var_8;
    var_24 = 8;
    pri = fun_9BF0(var_16)
// lab_9400
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = var_8;
    var_40 = 32;
    pri = fun_7D28(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9450
fun_9450() {
    var_8 = -3961876595160614838;
    pri = WorkGet(var_8)
    OP_JNZ lab_9620
    var_16 = 0;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 2903808384633503053;
    var_64 = arg_0;
    var_72 = 56;
    pri = fun_1758(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = 1;
    var_88 = 8;
    pri = fun_1950(var_80)
    var_96 = 0;
    pri = fun_1A10()
    var_104 = 0;
    var_112 = 3;
    var_120 = 0;
    var_128 = 100;
    var_136 = -1;
    var_144 = 2903805086098618420;
    var_152 = arg_0;
    var_160 = 56;
    pri = fun_1758(var_152, var_144, var_136, var_128, var_120, var_112, var_104)
    var_168 = 1;
    var_176 = 8;
    pri = fun_1950(var_168)
    var_184 = 0;
    var_192 = 3;
    var_200 = 0;
    var_208 = 100;
    var_216 = -1;
    var_224 = 2903806185610246631;
    var_232 = arg_0;
    var_240 = 56;
    pri = fun_1758(var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_248 = 1;
    var_256 = 8;
    pri = fun_1950(var_248)
    OP_JUMP lab_96D8
// lab_9620
    var_8 = -3961876595160614838;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_96D8
    var_16 = 0;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 2903803986586990209;
    var_64 = arg_0;
    var_72 = 56;
    pri = fun_1758(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = 1;
    var_88 = 8;
    pri = fun_1950(var_80)
// lab_96D8
    var_8 = 0;
    var_16 = -5668410425208453111;
    var_24 = 0;
    var_32 = 24;
    pri = fun_1A40(var_24, var_16, var_8)
    var_40 = 0;
    var_48 = -5668413723743337744;
    var_56 = 1;
    var_64 = 24;
    pri = fun_1A40(var_56, var_48, var_40)
    var_80 = 0;
    var_88 = 1;
    var_96 = 0;
    var_104 = 1;
    var_112 = 32;
    pri = fun_1B28(var_104, var_96, var_88, var_80)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_9BA0
        case default:
        {
// switch_9BA0_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_9BA0_case_0x0
            var_8 = 0;
            pri = fun_1A10()
            var_16 = 0;
            var_24 = 3;
            var_32 = 0;
            var_40 = 100;
            var_48 = -1;
            var_56 = 2903800688052105576;
            var_64 = arg_0;
            var_72 = 56;
            pri = fun_1758(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
            var_80 = 1;
            var_88 = 8;
            pri = fun_1950(var_80)
            var_96 = 0;
            pri = fun_1A10()
            var_104 = 0;
            var_112 = 3;
            var_120 = 0;
            var_128 = 100;
            var_136 = -1;
            var_144 = 2903801787563733787;
            var_152 = arg_0;
            var_160 = 56;
            pri = fun_1758(var_152, var_144, var_136, var_128, var_120, var_112, var_104)
            var_168 = 1;
            var_176 = 8;
            pri = fun_1950(var_168)
            var_184 = 0;
            pri = fun_1A10()
            var_192 = 1;
            var_200 = 3;
            var_208 = 0;
            var_216 = 0;
            var_224 = arg_0;
            var_232 = 40;
            pri = fun_5CF8(var_224, var_216, var_208, var_200, var_192)
            var_240 = arg_0;
            var_248 = 8;
            pri = fun_0610(var_240)
            var_256 = 6;
            var_264 = 4;
            var_272 = 2;
            var_280 = 0;
            var_288 = 8;
            var_296 = 1;
            var_304 = 1269;
            var_312 = arg_0;
            var_320 = 64;
            pri = fun_8558(var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256)
            var_328 = 1;
            var_336 = 1;
            var_344 = -1;
            var_352 = -1;
            var_360 = 0;
            var_368 = 0;
            var_376 = arg_0;
            var_384 = 56;
            pri = fun_39C0(var_376, var_368, var_360, var_352, var_344, var_336, var_328)
            var_392 = 0;
            var_400 = 3;
            var_408 = 0;
            var_416 = 100;
            var_424 = -1;
            var_432 = 2903798489028849154;
            var_440 = arg_0;
            var_448 = 56;
            pri = fun_1758(var_440, var_432, var_424, var_416, var_408, var_400, var_392)
            var_456 = 1;
            var_464 = 8;
            pri = fun_1950(var_456)
            var_472 = 0;
            pri = fun_1A10()
            var_480 = 2;
            var_488 = -3961876595160614838;
            pri = WorkSet(var_488, var_480)
            OP_JUMP switch_9BA0_case_default
        }
        case 0x1:
        {
// switch_9BA0_case_0x1
            var_8 = 0;
            pri = fun_1A10()
            var_16 = 0;
            var_24 = 3;
            var_32 = 0;
            var_40 = 100;
            var_48 = -1;
            var_56 = 2903802887075361998;
            var_64 = arg_0;
            var_72 = 56;
            pri = fun_1758(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
            var_80 = 1;
            var_88 = 8;
            pri = fun_1950(var_80)
            var_96 = 0;
            pri = fun_1A10()
            var_104 = 1;
            var_112 = -3961876595160614838;
            pri = WorkSet(var_112, var_104)
            OP_JUMP switch_9BA0_case_default
        }
    }
}
// fun_9BF0
fun_9BF0() {
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 2903799588540477365;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1758(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1950(var_72)
    var_88 = 0;
    pri = fun_1A10()
    pri = 0;
    return pri;
}
// fun_9C98
fun_9C98() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = var_8;
    var_64 = 48;
    pri = fun_7A28(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = -3961876595160614838;
    pri = WorkGet(var_72)
    OP_EQ_P_C_PRI 2
    OP_JZER lab_9D80
    var_80 = var_8;
    var_88 = 8;
    pri = fun_9ED0(var_80)
    OP_JUMP lab_9E80
// lab_9D80
    var_8 = -3961876595160614838;
    pri = WorkGet(var_8)
    alt = 3;
    OP_JSLESS lab_9DF0
    var_16 = var_8;
    var_24 = 8;
    pri = fun_A930(var_16)
    OP_JUMP lab_9E80
// lab_9DF0
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -2108215777740408759;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_1758(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1950(var_72)
    var_88 = 0;
    pri = fun_1A10()
// lab_9E80
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = var_8;
    var_40 = 32;
    pri = fun_7D28(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9ED0
fun_9ED0() {
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -2109173452368391315;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1758(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1950(var_72)
    var_88 = 0;
    pri = fun_1A10()
    var_96 = 0;
    var_104 = 3;
    var_112 = 0;
    var_120 = 100;
    var_128 = -1;
    var_136 = -2109176750903275948;
    var_144 = arg_0;
    var_152 = 56;
    pri = fun_1758(var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_160 = 1;
    var_168 = 8;
    pri = fun_1950(var_160)
    var_176 = 0;
    pri = fun_1A10()
    var_184 = 1;
    var_192 = 3;
    var_200 = 0;
    var_208 = 0;
    var_216 = arg_0;
    var_224 = 40;
    pri = fun_5CF8(var_216, var_208, var_200, var_192, var_184)
    var_232 = arg_0;
    var_240 = 8;
    pri = fun_0610(var_232)
    var_248 = 1;
    var_256 = 1269;
    pri = ItemSub(var_256, var_248)
    var_264 = 1;
    var_272 = -1;
    var_280 = -1;
    var_288 = 3;
    var_296 = 0;
    var_304 = 21;
    var_312 = 8802641224559852288;
    var_320 = 56;
    pri = fun_1DE0(var_312, var_304, var_296, var_288, var_280, var_272, var_264)
    var_328 = 5;
    var_336 = 8;
    pri = fun_0060(var_328)
    var_344 = 1;
    var_352 = -1;
    var_360 = -1;
    var_368 = 3;
    var_376 = 0;
    var_384 = 2;
    var_392 = arg_0;
    var_400 = 56;
    pri = fun_1DE0(var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_408 = 3;
    var_416 = 0;
    var_424 = -629619820798957410;
    var_432 = 24;
    pri = fun_1808(var_424, var_416, var_408)
    var_440 = 8802641224559852288;
    var_448 = 8;
    pri = fun_0610(var_440)
    var_456 = arg_0;
    var_464 = 8;
    pri = fun_0610(var_456)
    var_472 = 1;
    var_480 = 8;
    pri = fun_1950(var_472)
    var_488 = 0;
    pri = fun_1A10()
    var_496 = 1;
    var_504 = 1;
    var_512 = -1;
    var_520 = -1;
    var_528 = 0;
    var_536 = 0;
    var_544 = arg_0;
    var_552 = 56;
    pri = fun_39C0(var_544, var_536, var_528, var_520, var_512, var_504, var_496)
    var_560 = 0;
    var_568 = 3;
    var_576 = 0;
    var_584 = 100;
    var_592 = -1;
    var_600 = -2109175651391647737;
    var_608 = arg_0;
    var_616 = 56;
    pri = fun_1758(var_608, var_600, var_592, var_584, var_576, var_568, var_560)
    var_624 = 1;
    var_632 = 8;
    pri = fun_1950(var_624)
    var_640 = 0;
    pri = fun_1A10()
    var_648 = 0;
    var_656 = 3;
    var_664 = 0;
    var_672 = 100;
    var_680 = -1;
    var_688 = -2109178949926532370;
    var_696 = arg_0;
    var_704 = 56;
    pri = fun_1758(var_696, var_688, var_680, var_672, var_664, var_656, var_648)
    var_712 = 1;
    var_720 = 8;
    pri = fun_1950(var_712)
    var_728 = 0;
    var_736 = 3;
    var_744 = 0;
    var_752 = 100;
    var_760 = -1;
    var_768 = -2109177850414904159;
    var_776 = arg_0;
    var_784 = 56;
    pri = fun_1758(var_776, var_768, var_760, var_752, var_744, var_736, var_728)
    var_792 = 1;
    var_800 = 8;
    pri = fun_1950(var_792)
    var_808 = 0;
    var_816 = 3;
    var_824 = 0;
    var_832 = 100;
    var_840 = -1;
    var_848 = -2109181148949788792;
    var_856 = arg_0;
    var_864 = 56;
    pri = fun_1758(var_856, var_848, var_840, var_832, var_824, var_816, var_808)
    var_872 = 1;
    var_880 = 8;
    pri = fun_1950(var_872)
    var_888 = 0;
    pri = fun_1A10()
    var_896 = 0;
    var_904 = 3;
    var_912 = 0;
    var_920 = 100;
    var_928 = -1;
    var_936 = -2109180049438160581;
    var_944 = arg_0;
    var_952 = 56;
    pri = fun_1758(var_944, var_936, var_928, var_920, var_912, var_904, var_896)
    var_960 = 1;
    var_968 = 8;
    pri = fun_1950(var_960)
    var_976 = 0;
    var_984 = -5668412624231709533;
    var_992 = 0;
    var_1000 = 24;
    pri = fun_1A40(var_992, var_984, var_976)
    var_1008 = 0;
    var_1016 = -5668407126673568478;
    var_1024 = 1;
    var_1032 = 24;
    pri = fun_1A40(var_1024, var_1016, var_1008)
    var_1048 = 0;
    var_1056 = 0;
    var_1064 = 0;
    var_1072 = 1;
    var_1080 = 32;
    pri = fun_1B28(var_1072, var_1064, var_1056, var_1048)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_A718
        case default:
        {
// switch_A718_case_default
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            var_48 = -2108217976763665181;
            var_56 = arg_0;
            var_64 = 56;
            pri = fun_1758(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_1950(var_72)
            var_88 = 0;
            pri = fun_1A10()
            var_96 = 1;
            var_104 = 3;
            var_112 = 0;
            var_120 = 0;
            var_128 = arg_0;
            var_136 = 40;
            pri = fun_5CF8(var_128, var_120, var_112, var_104, var_96)
            var_144 = arg_0;
            var_152 = 8;
            pri = fun_0610(var_144)
            var_160 = 6;
            var_168 = 4;
            var_176 = 2;
            var_184 = 0;
            var_192 = 8;
            var_200 = 1;
            var_208 = 287;
            var_216 = arg_0;
            var_224 = 64;
            pri = fun_8558(var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160)
            var_232 = 3;
            var_240 = -3961876595160614838;
            pri = WorkSet(var_240, var_232)
            var_248 = 3902377138055507979;
            pri = VanishFlagSet(var_248)
            var_256 = 1359373253614330205;
            pri = VanishFlagReset(var_256)
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_A718_case_0x0
            var_8 = 0;
            pri = fun_1A10()
            var_16 = 0;
            var_24 = 3;
            var_32 = 0;
            var_40 = 100;
            var_48 = -1;
            var_56 = -2109183347973045214;
            var_64 = arg_0;
            var_72 = 56;
            pri = fun_1758(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
            var_80 = 1;
            var_88 = 8;
            pri = fun_1950(var_80)
            var_96 = 0;
            pri = fun_1A10()
            OP_JUMP switch_A718_case_default
        }
        case 0x1:
        {
// switch_A718_case_0x1
            var_8 = 0;
            pri = fun_1A10()
            var_16 = 0;
            var_24 = 3;
            var_32 = 0;
            var_40 = 100;
            var_48 = -1;
            var_56 = -2109182248461417003;
            var_64 = arg_0;
            var_72 = 56;
            pri = fun_1758(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
            var_80 = 1;
            var_88 = 8;
            pri = fun_1950(var_80)
            var_96 = 0;
            pri = fun_1A10()
            OP_JUMP switch_A718_case_default
        }
    }
}
// fun_A930
fun_A930() {
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -2108219076275293392;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1758(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1950(var_72)
    var_88 = 0;
    pri = fun_1A10()
    pri = 0;
    return pri;
}
// fun_A9D8
fun_A9D8() {
    var_8 = -3961876595160614838;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 3
    OP_JZER lab_ABF0
    var_16 = 3;
    var_24 = 0;
    var_32 = -629620920310585621;
    var_40 = 24;
    pri = fun_1808(var_32, var_24, var_16)
    var_48 = 1;
    var_56 = 8;
    pri = fun_1950(var_48)
    var_64 = 0;
    pri = fun_1A10()
    var_72 = 2;
    var_80 = 0;
    var_88 = 8;
    var_96 = 1;
    var_104 = 325;
    var_112 = 40;
    pri = fun_85E0(var_104, var_96, var_88, var_80, var_72)
    var_120 = 3;
    var_128 = 0;
    var_136 = 100;
    var_144 = 2904763860238229187;
    var_152 = 32;
    pri = fun_1600(var_144, var_136, var_128, var_120)
    var_160 = 1;
    var_168 = 8;
    pri = fun_1950(var_160)
    var_176 = 0;
    pri = fun_1A10()
    var_184 = 1;
    var_192 = 0;
    var_200 = 0;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_208 = 1;
    var_216 = 48;
    pri = fun_0CB0(var_208, var_200, var_192, var_184, var_176, var_168)
    var_224 = 4;
    var_232 = -3961876595160614838;
    pri = WorkSet(var_232, var_224)
    var_240 = 1359373253614330205;
    var_248 = 8;
    pri = fun_03B8(var_240)
// lab_ABF0
    pri = 0;
    return pri;
}
// fun_AC00
fun_AC00() {
    var_8 = -3961876595160614838;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 2
    OP_JZER lab_ACC8
    var_16 = 1;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 0;
    var_64 = 0;
    var_72 = 1;
    var_80 = 1;
    var_88 = -4339616270012835038;
    var_96 = 80;
    pri = fun_81E0(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    OP_JUMP lab_ADF8
// lab_ACC8
    var_8 = -3961876595160614838;
    pri = WorkGet(var_8)
    alt = 3;
    OP_JSLESS lab_AD88
    var_16 = 1;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 0;
    var_64 = 0;
    var_72 = 1;
    var_80 = 1;
    var_88 = -4339618469036091460;
    var_96 = 80;
    pri = fun_81E0(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    OP_JUMP lab_ADF8
// lab_AD88
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -4339617369524463249;
    var_88 = 80;
    pri = fun_81E0(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_ADF8
    pri = 0;
    return pri;
}
