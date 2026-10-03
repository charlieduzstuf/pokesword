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
    OP_LOAD_S_BOTH 24, 32
    OP_SUB_ALT 
    var_8 = pri;
    pri = GetPublicRand(var_8)
    OP_LOAD_P_S_ALT 24
    OP_ADD 
    return pri;
}
// fun_0240
fun_0240() {
    OP_ZERO_P_S -8
    OP_JUMP lab_0270
// lab_0270
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_0370
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_02F0
    pri = 0;
    return pri;
// lab_0370
    pri = 0;
    return pri;
// lab_02F0
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
    OP_JUMP lab_0268
// lab_0268
    OP_INC_P_S -8
}
// fun_0388
fun_0388() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_03E8
fun_03E8() {
    OP_JUMP lab_0400
// lab_0400
    pri = FadeWait_()
    OP_JZER lab_0438
    pri = 0;
    return pri;
// lab_0438
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0400
    pri = 0;
    return pri;
}
// fun_0478
fun_0478() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_04C0
// lab_04C0
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0500
    OP_JUMP lab_0570
// lab_0500
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0540
    OP_JUMP lab_0570
// lab_0540
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_04C0
// lab_0570
    pri = 0;
    return pri;
}
// fun_0588
fun_0588() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05D8
fun_05D8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E48(var_8)
    OP_JZER lab_0650
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0E78(var_24)
    OP_JNZ lab_0650
    pri = 0;
    return pri;
// lab_0650
    OP_JUMP lab_0660
// lab_0660
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_06C0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_06C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0660
    pri = 0;
    return pri;
}
// fun_0700
fun_0700() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0738
fun_0738() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0778
fun_0778() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_07B0
fun_07B0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_07F8
    pri = 0;
    return pri;
// lab_07F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0838
// lab_0838
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E48(var_8)
    OP_JNZ lab_08C0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_08B0
    pri = 0;
    return pri;
// lab_08C0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0908
    pri = 0;
    return pri;
// lab_0908
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0968
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_09B0(var_8)
    pri = 0;
    return pri;
// lab_0968
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0838
    pri = 0;
    return pri;
// lab_08B0
    OP_JUMP lab_0908
}
// fun_09B0
fun_09B0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_09E8
fun_09E8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0A38
    pri = 0;
    return pri;
// lab_0A38
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E48(var_8)
    OP_JZER lab_0B68
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A90
    OP_ZERO_P_S 64
// lab_0B68
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0BA0
    OP_CONST_S 64, 1
// lab_0BA0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0BD8
    OP_CONST_S 72, 1
// lab_0BD8
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
// lab_0A90
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0AB8
    OP_ZERO_P_S 72
// lab_0AB8
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
    OP_JUMP lab_0C78
// lab_0C78
    pri = 0;
    return pri;
}
// fun_0C88
fun_0C88() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0CC8
fun_0CC8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D08
fun_0D08() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D48
fun_0D48() {
    OP_ZERO_P_S -8
    OP_JUMP lab_0D70
// lab_0D70
    var_8 = arg_0;
    pri = IsFinishFieldObjectLookAt_(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0DC0
    pri = 0;
    return pri;
// lab_0DC0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0E00
    pri = 0;
    return pri;
// lab_0E00
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D70
    pri = 0;
    return pri;
}
// fun_0E48
fun_0E48() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0E78
fun_0E78() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0EA8
fun_0EA8() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_0ED8
fun_0ED8() {
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
// switch_14F0
        case default:
        {
// switch_14F0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1538
// lab_1538
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
            OP_JNZ lab_15E0
            var_88 = 0;
            pri = fun_18B0()
// lab_15E0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_14F0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_10D8
                case default:
                {
// switch_10D8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1150
// lab_1150
                    OP_JUMP lab_1538
                }
                case 0x0:
                {
// switch_10D8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1150
                }
                case 0x1:
                {
// switch_10D8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1150
                }
                case 0x2:
                {
// switch_10D8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1150
                }
                case 0x3:
                {
// switch_10D8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1150
                }
                case 0x4:
                {
// switch_10D8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1150
                }
                case 0x5:
                {
// switch_10D8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1150
                }
            }
        }
        case 0x65:
        {
// switch_14F0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1290
                case default:
                {
// switch_1290_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1308
// lab_1308
                    OP_JUMP lab_1538
                }
                case 0x0:
                {
// switch_1290_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1308
                }
                case 0x1:
                {
// switch_1290_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1308
                }
                case 0x2:
                {
// switch_1290_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1308
                }
                case 0x3:
                {
// switch_1290_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1308
                }
                case 0x4:
                {
// switch_1290_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1308
                }
                case 0x5:
                {
// switch_1290_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1308
                }
            }
        }
        case 0x66:
        {
// switch_14F0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1448
                case default:
                {
// switch_1448_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_14C0
// lab_14C0
                    OP_JUMP lab_1538
                }
                case 0x0:
                {
// switch_1448_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_14C0
                }
                case 0x1:
                {
// switch_1448_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_14C0
                }
                case 0x2:
                {
// switch_1448_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_14C0
                }
                case 0x3:
                {
// switch_1448_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_14C0
                }
                case 0x4:
                {
// switch_1448_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_14C0
                }
                case 0x5:
                {
// switch_1448_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_14C0
                }
            }
        }
    }
}
// fun_15F8
fun_15F8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_0ED8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1660
fun_1660() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0778(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1708
    pri = 1;
    return pri;
// lab_1708
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1750
fun_1750() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_17A0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1660(var_8)
    arg_2 = pri;
// lab_17A0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0ED8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1800
fun_1800() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_15F8(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1850
fun_1850() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1800(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_18B0
fun_18B0() {
    OP_JUMP lab_18C8
// lab_18C8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1908
    pri = 0;
    return pri;
// lab_1908
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_18C8
    pri = 0;
    return pri;
}
// fun_1948
fun_1948() {
    var_8 = 0;
    pri = fun_18B0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_19F8
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_19F8
    pri = 0;
    return pri;
}
// fun_1A08
fun_1A08() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1A38
fun_1A38() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_1AB0()
    return pri;
}
// fun_1AB0
fun_1AB0() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_1AF0
fun_1AF0() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1B28
fun_1B28() {
    OP_JUMP lab_1B40
// lab_1B40
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1B88
    OP_JUMP lab_1BB8
    OP_JUMP lab_1BA8
// lab_1B88
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_1BB8
    pri = 0;
    return pri;
// lab_1BA8
    OP_JUMP lab_1B40
}
// fun_1BC8
fun_1BC8() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_1BF8
fun_1BF8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1C48
fun_1C48() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1C98
fun_1C98() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1CE8
fun_1CE8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1D38
fun_1D38() {
    pri = arg_1;
    OP_JNZ lab_1D80
    var_8 = 648;
    pri = GetFnvHash64(var_8)
    arg_1 = pri;
// lab_1D80
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
// fun_1DD8
fun_1DD8() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_1E50
fun_1E50() {
    var_8 = 0;
    pri = fun_1DD8()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1ED0
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_1ED0
    pri = 1;
    return pri;
// lab_1ED0
    var_8 = 0;
    pri = fun_1DD8()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_1F10
    pri = 1;
    return pri;
// lab_1F10
    var_8 = 0;
    pri = fun_1DD8()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_1F40
fun_1F40() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_1F90
fun_1F90() {
    pri = arg_6;
    OP_JNZ lab_1FC8
    var_8 = 0;
    pri = fun_0C88()
// lab_1FC8
    pri = arg_1;
    switch (pri) {
// switch_3530
        case default:
        {
// switch_3530_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3880
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3880
            pri = 1;
            OP_JUMP lab_3888
// lab_3880
            pri = 0;
// lab_3888
            OP_JZER lab_39E0
            var_16 = 8328;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0778(var_24, var_16)
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
            var_64 = 8432;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_3A40
// lab_39E0
            var_8 = 64;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0240(var_16, var_8, var_0)
// lab_3A40
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3AA0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3B00
// lab_3AA0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3B00
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3B00
            pri = arg_2;
            OP_JZER lab_3B40
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3B40
            var_8 = 0;
            pri = fun_0CC8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3530_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3530_case_default
        }
        case 0x1:
        {
// switch_3530_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3530_case_default
        }
        case 0x2:
        {
// switch_3530_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3530_case_default
        }
        case 0x3:
        {
// switch_3530_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3530_case_default
        }
        case 0x4:
        {
// switch_3530_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3530_case_default
        }
        case 0x5:
        {
// switch_3530_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5616;
            var_72 = 5608;
            var_80 = 5600;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3530_case_default
        }
        case 0x6:
        {
// switch_3530_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5640;
            var_72 = 5632;
            var_80 = 5624;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3530_case_default
        }
        case 0x7:
        {
// switch_3530_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5664;
            var_72 = 5656;
            var_80 = 5648;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3530_case_default
        }
        case 0x8:
        {
// switch_3530_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3530_case_default
        }
        case 0x9:
        {
// switch_3530_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5688;
            var_72 = 5680;
            var_80 = 5672;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3530_case_default
        }
        case 0xa:
        {
// switch_3530_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5712;
            var_72 = 5704;
            var_80 = 5696;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3530_case_default
        }
        case 0xb:
        {
// switch_3530_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5736;
            var_72 = 5728;
            var_80 = 5720;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3530_case_default
        }
        case 0xc:
        {
// switch_3530_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5760;
            var_72 = 5752;
            var_80 = 5744;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3530_case_default
        }
        case 0xd:
        {
// switch_3530_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5784;
            var_72 = 5776;
            var_80 = 5768;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3530_case_default
        }
        case 0xe:
        {
// switch_3530_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5808;
            var_72 = 5800;
            var_80 = 5792;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3530_case_default
        }
        case 0xf:
        {
// switch_3530_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3530_case_default
        }
        case 0x10:
        {
// switch_3530_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3530_case_default
        }
        case 0x11:
        {
// switch_3530_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5832;
            var_72 = 5824;
            var_80 = 5816;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3530_case_default
        }
        case 0x12:
        {
// switch_3530_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5856;
            var_72 = 5848;
            var_80 = 5840;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3530_case_default
        }
        case 0x13:
        {
// switch_3530_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3530_case_default
        }
        case 0x14:
        {
// switch_3530_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3530_case_default
        }
        case 0x15:
        {
// switch_3530_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3530_case_default
        }
        case 0x16:
        {
// switch_3530_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3530_case_default
        }
        case 0x17:
        {
// switch_3530_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3530_case_default
        }
        case 0x18:
        {
// switch_3530_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3530_case_default
        }
        case 0x19:
        {
// switch_3530_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5880;
            var_72 = 5872;
            var_80 = 5864;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3530_case_default
        }
        case 0x1a:
        {
// switch_3530_case_0x1a
            var_8 = 1;
            var_16 = 5888;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0738(var_24, var_16, var_8)
            var_40 = 6024;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0700(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6104;
            var_88 = 6096;
            var_96 = 6088;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_09E8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3530_case_default
        }
        case 0x1b:
        {
// switch_3530_case_0x1b
            var_8 = 3;
            var_16 = 6112;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0738(var_24, var_16, var_8)
            var_40 = 6248;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0700(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6328;
            var_88 = 6320;
            var_96 = 6312;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_09E8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3530_case_default
        }
        case 0x1c:
        {
// switch_3530_case_0x1c
            var_8 = 2;
            var_16 = 6336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0738(var_24, var_16, var_8)
            var_40 = 6472;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0700(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6552;
            var_88 = 6544;
            var_96 = 6536;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_09E8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3530_case_default
        }
        case 0x1d:
        {
// switch_3530_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6560;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3530_case_default
        }
        case 0x1e:
        {
// switch_3530_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6696;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3530_case_default
        }
        case 0x1f:
        {
// switch_3530_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6832;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3530_case_default
        }
        case 0x20:
        {
// switch_3530_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6968;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3530_case_default
        }
        case 0x21:
        {
// switch_3530_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7088;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3530_case_default
        }
        case 0x22:
        {
// switch_3530_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7208;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3530_case_default
        }
        case 0x23:
        {
// switch_3530_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7344;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3530_case_default
        }
        case 0x24:
        {
// switch_3530_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7480;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3530_case_default
        }
        case 0x25:
        {
// switch_3530_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7616;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3530_case_default
        }
        case 0x26:
        {
// switch_3530_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7752;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3530_case_default
        }
        case 0x27:
        {
// switch_3530_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7896;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3530_case_default
        }
        case 0x28:
        {
// switch_3530_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8040;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3530_case_default
        }
        case 0x29:
        {
// switch_3530_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8184;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3530_case_default
        }
    }
}
// fun_3B70
fun_3B70() {
    pri = arg_5;
    OP_JNZ lab_3BA8
    var_8 = 0;
    pri = fun_0C88()
// lab_3BA8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3BF8
    OP_CONST_S -8, -1
// lab_3BF8
    pri = arg_1;
    switch (pri) {
// switch_56B0
        case default:
        {
// switch_56B0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5B58
            var_520 = 28192;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0778(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5B58
            pri = 1;
            OP_JUMP lab_5B60
// lab_5B58
            pri = 0;
// lab_5B60
            OP_JZER lab_5BB0
            var_8 = 64;
            var_16 = 28288;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0240(var_16, var_8, var_0)
            OP_JUMP lab_5E08
// lab_5BB0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5C18
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5C18
            pri = 1;
            OP_JUMP lab_5C20
// lab_5C18
            pri = 0;
// lab_5C20
            OP_JZER lab_5DA8
            var_16 = 28464;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0778(var_24, var_16)
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
            var_176 = 28568;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 28584;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 8448;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_5E08
// lab_5DA8
            var_8 = 64;
            alt = 8448;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0240(var_16, var_8, var_0)
// lab_5E08
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_5E78
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_5E78
            var_8 = 0;
            pri = fun_0CC8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_56B0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x1:
        {
// switch_56B0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x2:
        {
// switch_56B0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x3:
        {
// switch_56B0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x4:
        {
// switch_56B0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x5:
        {
// switch_56B0_case_0x5
            var_8 = 2;
            var_16 = 18448;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0738(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_09B0(var_40)
            OP_JUMP switch_56B0_case_default
        }
        case 0x6:
        {
// switch_56B0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x7:
        {
// switch_56B0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x8:
        {
// switch_56B0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x9:
        {
// switch_56B0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0xa:
        {
// switch_56B0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0xb:
        {
// switch_56B0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0xc:
        {
// switch_56B0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0xd:
        {
// switch_56B0_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19096;
            var_72 = 18920;
            var_80 = 18736;
            var_88 = 18544;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56B0_case_default
        }
        case 0xe:
        {
// switch_56B0_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19752;
            var_72 = 19544;
            var_80 = 19328;
            var_88 = 19104;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56B0_case_default
        }
        case 0xf:
        {
// switch_56B0_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20144;
            var_72 = 20024;
            var_80 = 19896;
            var_88 = 19760;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56B0_case_default
        }
        case 0x10:
        {
// switch_56B0_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20488;
            var_72 = 20384;
            var_80 = 20272;
            var_88 = 20152;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56B0_case_default
        }
        case 0x11:
        {
// switch_56B0_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20832;
            var_72 = 20728;
            var_80 = 20616;
            var_88 = 20496;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56B0_case_default
        }
        case 0x12:
        {
// switch_56B0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x13:
        {
// switch_56B0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x14:
        {
// switch_56B0_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21392;
            var_72 = 21216;
            var_80 = 21032;
            var_88 = 20840;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56B0_case_default
        }
        case 0x15:
        {
// switch_56B0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x16:
        {
// switch_56B0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x17:
        {
// switch_56B0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x18:
        {
// switch_56B0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x19:
        {
// switch_56B0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x1a:
        {
// switch_56B0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x1b:
        {
// switch_56B0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x1c:
        {
// switch_56B0_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 21784;
            var_72 = 21664;
            var_80 = 21536;
            var_88 = 21400;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56B0_case_default
        }
        case 0x1d:
        {
// switch_56B0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x1e:
        {
// switch_56B0_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 22248;
            var_72 = 22104;
            var_80 = 21952;
            var_88 = 21792;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56B0_case_default
        }
        case 0x1f:
        {
// switch_56B0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x20:
        {
// switch_56B0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x21:
        {
// switch_56B0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x22:
        {
// switch_56B0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x23:
        {
// switch_56B0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x24:
        {
// switch_56B0_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22616;
            var_72 = 22504;
            var_80 = 22384;
            var_88 = 22256;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56B0_case_default
        }
        case 0x25:
        {
// switch_56B0_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22984;
            var_72 = 22872;
            var_80 = 22752;
            var_88 = 22624;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56B0_case_default
        }
        case 0x26:
        {
// switch_56B0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x27:
        {
// switch_56B0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x28:
        {
// switch_56B0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x29:
        {
// switch_56B0_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23424;
            var_72 = 23288;
            var_80 = 23144;
            var_88 = 22992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56B0_case_default
        }
        case 0x2a:
        {
// switch_56B0_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23816;
            var_72 = 23696;
            var_80 = 23568;
            var_88 = 23432;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56B0_case_default
        }
        case 0x2b:
        {
// switch_56B0_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24232;
            var_72 = 24104;
            var_80 = 23968;
            var_88 = 23824;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56B0_case_default
        }
        case 0x2c:
        {
// switch_56B0_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24672;
            var_72 = 24536;
            var_80 = 24392;
            var_88 = 24240;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56B0_case_default
        }
        case 0x2d:
        {
// switch_56B0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x2e:
        {
// switch_56B0_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24992;
            var_72 = 24896;
            var_80 = 24792;
            var_88 = 24680;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56B0_case_default
        }
        case 0x2f:
        {
// switch_56B0_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25384;
            var_72 = 25264;
            var_80 = 25136;
            var_88 = 25000;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56B0_case_default
        }
        case 0x30:
        {
// switch_56B0_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25776;
            var_72 = 25656;
            var_80 = 25528;
            var_88 = 25392;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56B0_case_default
        }
        case 0x31:
        {
// switch_56B0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x32:
        {
// switch_56B0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x33:
        {
// switch_56B0_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26168;
            var_72 = 26048;
            var_80 = 25920;
            var_88 = 25784;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56B0_case_default
        }
        case 0x34:
        {
// switch_56B0_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26536;
            var_72 = 26424;
            var_80 = 26304;
            var_88 = 26176;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56B0_case_default
        }
        case 0x35:
        {
// switch_56B0_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27024;
            var_72 = 26872;
            var_80 = 26712;
            var_88 = 26544;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56B0_case_default
        }
        case 0x36:
        {
// switch_56B0_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27392;
            var_72 = 27280;
            var_80 = 27160;
            var_88 = 27032;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56B0_case_default
        }
        case 0x37:
        {
// switch_56B0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x38:
        {
// switch_56B0_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27760;
            var_72 = 27648;
            var_80 = 27528;
            var_88 = 27400;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56B0_case_default
        }
        case 0x39:
        {
// switch_56B0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x3a:
        {
// switch_56B0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x3b:
        {
// switch_56B0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x3c:
        {
// switch_56B0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27768;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x3d:
        {
// switch_56B0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27944;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
        case 0x3e:
        {
// switch_56B0_case_0x3e
            var_8 = 4;
            var_16 = 28088;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0738(var_24, var_16, var_8)
            OP_JUMP switch_56B0_case_default
        }
    }
}
// fun_5EA8
fun_5EA8() {
    pri = arg_4;
    OP_JNZ lab_5EE0
    var_8 = 0;
    pri = fun_0C88()
// lab_5EE0
    pri = arg_1;
    switch (pri) {
// switch_72B8
        case default:
        {
// switch_72B8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29160;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0E48(var_264)
            OP_JZER lab_7880
            pri = arg_3;
            switch (pri) {
// switch_7828
                case default:
                {
// switch_7828_case_default
                    OP_JUMP lab_7B38
// lab_7B38
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7BA8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7BA8
                    var_8 = 0;
                    pri = fun_0CC8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7828_case_0x1
                    var_8 = 32;
                    var_16 = 29312;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0240(var_16, var_8, var_0)
                    OP_JUMP switch_7828_case_default
                }
                case 0x2:
                {
// switch_7828_case_0x2
                    var_8 = 32;
                    var_16 = 29416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0240(var_16, var_8, var_0)
                    OP_JUMP switch_7828_case_default
                }
                case 0x3:
                {
// switch_7828_case_0x3
                    var_8 = 32;
                    var_16 = 29216;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0240(var_16, var_8, var_0)
                    OP_JUMP switch_7828_case_default
                }
            }
// lab_7880
            pri = arg_1;
            OP_JZER lab_78D0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_78D0
            pri = 0;
            OP_JUMP lab_78D8
// lab_78D0
            pri = 1;
// lab_78D8
            OP_JZER lab_7940
            var_8 = 29512;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0778(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7940
            pri = 1;
            OP_JUMP lab_7948
// lab_7940
            pri = 0;
// lab_7948
            OP_JZER lab_7998
            var_8 = 32;
            var_16 = 29608;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0240(var_16, var_8, var_0)
            OP_JUMP lab_7B38
// lab_7998
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7A00
            var_8 = 32;
            var_16 = 29768;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0240(var_16, var_8, var_0)
            OP_JUMP lab_7B38
// lab_7A00
            var_16 = 29888;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0778(var_24, var_16)
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
            var_176 = 29992;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 30008;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_72B8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x1:
        {
// switch_72B8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x2:
        {
// switch_72B8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x3:
        {
// switch_72B8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x4:
        {
// switch_72B8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x5:
        {
// switch_72B8_case_0x5
            var_8 = 1;
            var_16 = 28640;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0738(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_09B0(var_40)
            OP_JUMP switch_72B8_case_default
        }
        case 0x6:
        {
// switch_72B8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x7:
        {
// switch_72B8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x8:
        {
// switch_72B8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x9:
        {
// switch_72B8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0xa:
        {
// switch_72B8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0xb:
        {
// switch_72B8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0xc:
        {
// switch_72B8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0xd:
        {
// switch_72B8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0xe:
        {
// switch_72B8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0xf:
        {
// switch_72B8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x10:
        {
// switch_72B8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x11:
        {
// switch_72B8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x12:
        {
// switch_72B8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x13:
        {
// switch_72B8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x14:
        {
// switch_72B8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x15:
        {
// switch_72B8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x16:
        {
// switch_72B8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x17:
        {
// switch_72B8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x18:
        {
// switch_72B8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x19:
        {
// switch_72B8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x1a:
        {
// switch_72B8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x1b:
        {
// switch_72B8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x1c:
        {
// switch_72B8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x1d:
        {
// switch_72B8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x1e:
        {
// switch_72B8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x1f:
        {
// switch_72B8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x20:
        {
// switch_72B8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x21:
        {
// switch_72B8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x22:
        {
// switch_72B8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x23:
        {
// switch_72B8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x24:
        {
// switch_72B8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x25:
        {
// switch_72B8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x26:
        {
// switch_72B8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x27:
        {
// switch_72B8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x28:
        {
// switch_72B8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x29:
        {
// switch_72B8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x2a:
        {
// switch_72B8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x2b:
        {
// switch_72B8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x2c:
        {
// switch_72B8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x2d:
        {
// switch_72B8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x2e:
        {
// switch_72B8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x2f:
        {
// switch_72B8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x30:
        {
// switch_72B8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x31:
        {
// switch_72B8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x32:
        {
// switch_72B8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x33:
        {
// switch_72B8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x34:
        {
// switch_72B8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x35:
        {
// switch_72B8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x36:
        {
// switch_72B8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x37:
        {
// switch_72B8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x38:
        {
// switch_72B8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x39:
        {
// switch_72B8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x3a:
        {
// switch_72B8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x3b:
        {
// switch_72B8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x3c:
        {
// switch_72B8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28736;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x3d:
        {
// switch_72B8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28912;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
        case 0x3e:
        {
// switch_72B8_case_0x3e
            var_8 = 3;
            var_16 = 29056;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0738(var_24, var_16, var_8)
            OP_JUMP switch_72B8_case_default
        }
    }
}
// fun_7BD8
fun_7BD8() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_7CD8
        case default:
        {
// switch_7CD8_case_default
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
// switch_7CD8_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_7CD8_case_default
        }
        case 0x1:
        {
// switch_7CD8_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_7CD8_case_default
        }
        case 0x2:
        {
// switch_7CD8_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_7CD8_case_default
        }
        case 0x3:
        {
// switch_7CD8_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_7CD8_case_default
        }
    }
}
// fun_7D98
fun_7D98() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_7DE8
// lab_7DE8
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30056;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_7E60
    OP_JUMP lab_7E90
// lab_7E60
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_7DE8
// lab_7E90
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_7F18
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_5EA8(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0EA8(var_56)
// lab_7F18
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_7F80
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0D08(var_24, var_16)
// lab_7F80
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0D08(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_8040
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_07B0(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0588(var_88, var_80, var_72, var_64, var_56)
// lab_8040
    pri = IsPlayerRideBicycle()
    OP_JZER lab_8080
    pri = 0;
    return pri;
// lab_8080
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_81C8
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 30176;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0700(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_8190
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_81C8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_05D8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_05D8(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_07B0(var_40)
    pri = 0;
    return pri;
// lab_8190
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0D08(var_16, var_8)
}
// fun_8250
fun_8250() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_82E8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_07B0(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_1F90(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_82E8
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_8440
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_83A8
    var_24 = 30312;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_83A8
    pri = 1;
    OP_JUMP lab_83B0
// lab_8440
    pri = 0;
    return pri;
// lab_83A8
    pri = 0;
// lab_83B0
    OP_JZER lab_8440
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_07B0(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_1F90(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_8450
fun_8450() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_8250(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_84D8(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_84D8
fun_84D8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_8670(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8540
fun_8540() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_85B0
    OP_CONST_S -8, 1
// lab_85B0
    pri = arg_0;
    OP_JNZ lab_85D0
    OP_ZERO_P_S -8
// lab_85D0
    pri = var_8;
    OP_JZER lab_8658
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_8658
    pri = 0;
    return pri;
}
// fun_8670
fun_8670() {
    var_8 = 30416;
    var_16 = 8;
    pri = fun_1AF0(var_8)
    var_24 = 0;
    pri = fun_1B28()
    pri = arg_3;
    OP_JNZ lab_8790
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_8758
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_8800(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_8780
// lab_8790
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_89A0(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_8758
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_88C8(var_16, var_8)
// lab_8780
    OP_JUMP lab_87D8
// lab_87D8
    var_8 = 0;
    pri = fun_1BC8()
    pri = 0;
    return pri;
}
// fun_8800
fun_8800() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_89A0(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_88B0
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_88B0
    pri = 0;
    return pri;
}
// fun_88C8
fun_88C8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_1C48(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_1850(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1948(var_72)
    var_88 = 0;
    pri = fun_1A08()
    var_96 = 0;
    var_104 = 8;
    pri = fun_1BF8(var_96)
    pri = 0;
    return pri;
}
// fun_89A0
fun_89A0() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_89E8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_8CA8(var_8)
// lab_89E8
    pri = arg_4;
    OP_JNZ lab_8A50
    var_8 = 0;
    var_16 = 8;
    pri = fun_1BF8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1C48(var_40, var_32, var_24)
// lab_8A50
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_8AF0
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_1C98(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1850(var_56, var_48, var_40)
    OP_JUMP lab_8BE0
// lab_8AF0
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_8BA8
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_8BA8
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_8BA8
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1850(var_24, var_16, var_8)
// lab_8BE0
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8C20
    var_8 = 0;
    var_16 = 8;
    pri = fun_0478(var_8)
// lab_8C20
    var_8 = 1;
    var_16 = 8;
    pri = fun_1948(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_8EB0(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_8540(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_8CA8
fun_8CA8() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_8D08
    var_16 = 30576;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_8D08
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_8E48
        case default:
        {
// switch_8E48_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_8E38
            var_16 = 31120;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_8E38
            OP_JUMP lab_8E80
// lab_8E80
            var_8 = 31336;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_8E48_case_0x1
            var_8 = 30792;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8E80
        }
        case 0x2:
        {
// switch_8E48_case_0x2
            var_8 = 30920;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8E80
        }
    }
}
// fun_8EB0
fun_8EB0() {
    pri = arg_2;
    OP_JNZ lab_8F98
    var_8 = 0;
    var_16 = 8;
    pri = fun_1BF8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1C48(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_1CE8(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_8F98
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_1850(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1948(var_40)
    var_56 = 0;
    pri = fun_1A08()
    pri = 0;
    return pri;
}
// fun_9010
fun_9010() {
    pri = g_mode;
    switch (pri) {
// switch_90A8
        case default:
        {
// switch_90A8_case_default
            pri = CommandNOP()
            OP_JUMP lab_90E0
// lab_90E0
            pri = 0;
            return pri;
        }
        case 0xbef12ab89017ef09:
        {
// switch_90A8_case_0xbef12ab89017ef09
            var_8 = 0;
            pri = fun_9108()
            OP_JUMP lab_90E0
        }
        case 0x0:
        {
// switch_90A8_case_0x0
            var_8 = 0;
            pri = fun_90F0()
            OP_JUMP lab_90E0
        }
    }
}
// fun_90F0
fun_90F0() {
    pri = 0;
    return pri;
}
// fun_9108
fun_9108() {
    pri = CommandNOP()
    pri = PlayerGetZoneID()
    var_8 = pri;
    pri = GetTargetFieldObjectID()
    var_16 = pri;
    var_24 = 1;
    var_32 = 1;
    var_40 = 1;
    var_48 = 1;
    var_56 = 1;
    var_64 = var_16;
    var_72 = 48;
    pri = fun_7BD8(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 0;
    var_88 = 3;
    var_96 = 0;
    var_104 = 100;
    var_112 = -1;
    var_120 = 3285392767719697248;
    var_128 = var_16;
    var_136 = 56;
    pri = fun_1750(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_144 = 1;
    var_152 = 8;
    pri = fun_1948(var_144)
    var_160 = 0;
    pri = fun_1A08()
    var_168 = var_8;
    var_176 = 8;
    pri = fun_9B28(var_168)
    OP_JZER lab_9360
    var_184 = 0;
    var_192 = 3;
    var_200 = 0;
    var_208 = 100;
    var_216 = -1;
    var_224 = 3285396066254581881;
    var_232 = var_16;
    var_240 = 56;
    pri = fun_1750(var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_248 = 1;
    var_256 = 8;
    pri = fun_1948(var_248)
    var_264 = 0;
    pri = fun_1A08()
    var_272 = 1;
    var_280 = 0;
    var_288 = 0;
    var_296 = var_16;
    var_304 = 32;
    pri = fun_7D98(var_296, var_288, var_280, var_272)
    pri = 0;
    return pri;
// lab_9360
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 3285394966742953670;
    var_56 = var_16;
    var_64 = 56;
    pri = fun_1750(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_80 = 0;
    var_88 = 0;
    var_96 = 1;
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 48;
    pri = fun_1A38(var_120, var_112, var_104, var_96, var_88, var_80)
    var_24 = pri;
    var_136 = 0;
    pri = fun_1A08()
    pri = var_24;
    OP_JNZ lab_9520
    var_144 = 0;
    var_152 = 3;
    var_160 = 0;
    var_168 = 100;
    var_176 = -1;
    var_184 = 3285402663324351147;
    var_192 = var_16;
    var_200 = 56;
    pri = fun_1750(var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_208 = 1;
    var_216 = 8;
    pri = fun_1948(var_208)
    var_224 = 0;
    pri = fun_1A08()
    var_232 = 1;
    var_240 = 0;
    var_248 = 0;
    var_256 = var_16;
    var_264 = 32;
    pri = fun_7D98(var_256, var_248, var_240, var_232)
    pri = 0;
    return pri;
// lab_9520
    var_8 = -6338460143570643299;
    pri = FlagGet(var_8)
    OP_JZER lab_9678
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    alt = 2;
    OP_JSGEQ lab_9678
    var_32 = 0;
    var_40 = 3;
    var_48 = 0;
    var_56 = 100;
    var_64 = -1;
    var_72 = 3285399364789466514;
    var_80 = var_16;
    var_88 = 56;
    pri = fun_1750(var_80, var_72, var_64, var_56, var_48, var_40, var_32)
    var_96 = 1;
    var_104 = 8;
    pri = fun_1948(var_96)
    var_112 = 0;
    pri = fun_1A08()
    var_120 = 1;
    var_128 = 0;
    var_136 = 0;
    var_144 = var_16;
    var_152 = 32;
    pri = fun_7D98(var_144, var_136, var_128, var_120)
    pri = 0;
    return pri;
// lab_9678
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 3285398265277838303;
    var_56 = var_16;
    var_64 = 56;
    pri = fun_1750(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1948(var_72)
    var_88 = 0;
    pri = fun_1A08()
    var_104 = var_8;
    var_112 = 8;
    pri = fun_9C60(var_104)
    var_32 = pri;
    var_120 = -1;
    var_128 = 0;
    var_136 = 0;
    var_144 = 0;
    var_152 = var_32;
    var_160 = 40;
    pri = fun_1D38(var_152, var_144, var_136, var_128, var_120)
    var_168 = 0;
    pri = fun_1E50()
    OP_JZER lab_97B8
    var_176 = 0;
    pri = fun_1F40()
// lab_97B8
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 1;
    var_48 = var_16;
    var_56 = 48;
    pri = fun_7BD8(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 8802641224559852288;
    var_72 = 8;
    pri = fun_0D48(var_64)
    var_80 = var_16;
    var_88 = 8;
    pri = fun_0D48(var_80)
    var_96 = 31520;
    var_104 = 10;
    var_112 = 16;
    pri = fun_0388(var_104, var_96)
    var_120 = 0;
    pri = fun_03E8()
    var_128 = var_16;
    var_136 = 8;
    pri = fun_9D80(var_128)
    var_144 = 1;
    var_152 = 8;
    pri = fun_1948(var_144)
    var_160 = 0;
    pri = fun_1A08()
    var_168 = 0;
    var_176 = 3;
    var_184 = 0;
    var_192 = 100;
    var_200 = -1;
    var_208 = 3285400464301094725;
    var_216 = var_16;
    var_224 = 56;
    pri = fun_1750(var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_232 = 1;
    var_240 = 8;
    pri = fun_1948(var_232)
    var_248 = 0;
    pri = fun_1A08()
    var_256 = 1;
    var_264 = 3;
    var_272 = 0;
    var_280 = 1;
    var_288 = var_16;
    var_296 = 40;
    pri = fun_5EA8(var_288, var_280, var_272, var_264, var_256)
    var_304 = var_16;
    var_312 = var_8;
    var_320 = 16;
    pri = fun_9FB8(var_312, var_304)
    var_328 = 1;
    var_336 = 1;
    var_344 = -1;
    var_352 = -1;
    var_360 = 0;
    var_368 = 1;
    var_376 = var_16;
    var_384 = 56;
    pri = fun_3B70(var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_392 = 0;
    var_400 = 3;
    var_408 = 0;
    var_416 = 100;
    var_424 = -1;
    var_432 = 3285402663324351147;
    var_440 = var_16;
    var_448 = 56;
    pri = fun_1750(var_440, var_432, var_424, var_416, var_408, var_400, var_392)
    var_456 = 1;
    var_464 = 8;
    pri = fun_1948(var_456)
    var_472 = 0;
    pri = fun_1A08()
    var_480 = 1;
    var_488 = 0;
    var_496 = 0;
    var_504 = var_16;
    var_512 = 32;
    pri = fun_7D98(var_504, var_496, var_488, var_480)
    var_520 = var_8;
    var_528 = 8;
    pri = fun_A378(var_520)
    pri = 0;
    return pri;
}
// fun_9B28
fun_9B28() {
    pri = arg_0;
    switch (pri) {
// switch_9C08
        case default:
        {
// switch_9C08_case_default
            pri = 1;
            return pri;
        }
        case 0xad65494023fe34a1:
        {
// switch_9C08_case_0xad65494023fe34a1
            var_8 = -8209701084702246452;
            pri = FlagGet(var_8)
            return pri;
            OP_JUMP switch_9C08_case_default
        }
        case 0xd191f45ad6680385:
        {
// switch_9C08_case_0xd191f45ad6680385
            var_8 = -8209698885678990030;
            pri = FlagGet(var_8)
            return pri;
            OP_JUMP switch_9C08_case_default
        }
        case 0x7a75174c99405da7:
        {
// switch_9C08_case_0x7a75174c99405da7
            var_8 = -8209697786167361819;
            pri = FlagGet(var_8)
            return pri;
            OP_JUMP switch_9C08_case_default
        }
    }
}
// fun_9C60
fun_9C60() {
    pri = arg_0;
    switch (pri) {
// switch_9D28
        case default:
        {
// switch_9D28_case_default
            pri = 0;
            return pri;
        }
        case 0xad65494023fe34a1:
        {
// switch_9D28_case_0xad65494023fe34a1
            var_8 = -6338460143570643299;
            pri = FlagGet(var_8)
            OP_JZER lab_9CC8
            pri = 242;
            return pri;
// lab_9CC8
            pri = 241;
            return pri;
            OP_JUMP switch_9D28_case_default
        }
        case 0xd191f45ad6680385:
        {
// switch_9D28_case_0xd191f45ad6680385
            pri = 244;
            return pri;
            OP_JUMP switch_9D28_case_default
        }
        case 0x7a75174c99405da7:
        {
// switch_9D28_case_0x7a75174c99405da7
            pri = 243;
            return pri;
            OP_JUMP switch_9D28_case_default
        }
    }
}
// fun_9D80
fun_9D80() {
    OP_ZERO_P_S -8
    var_24 = 0;
    var_32 = 6;
    var_40 = 16;
    pri = fun_0160(var_32, var_24)
    var_16 = pri;
    pri = var_16;
    switch (pri) {
// switch_9ED8
        case default:
        {
// switch_9ED8_case_default
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            var_48 = var_8;
            var_56 = arg_0;
            var_64 = 56;
            pri = fun_1750(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_9ED8_case_0x0
            OP_CONST_S -8, 818282101215246551
            OP_JUMP switch_9ED8_case_default
        }
        case 0x1:
        {
// switch_9ED8_case_0x1
            OP_CONST_S -8, 818283200726874762
            OP_JUMP switch_9ED8_case_default
        }
        case 0x2:
        {
// switch_9ED8_case_0x2
            OP_CONST_S -8, 818284300238502973
            OP_JUMP switch_9ED8_case_default
        }
        case 0x3:
        {
// switch_9ED8_case_0x3
            OP_CONST_S -8, 818276603657105496
            OP_JUMP switch_9ED8_case_default
        }
        case 0x4:
        {
// switch_9ED8_case_0x4
            OP_CONST_S -8, 818277703168733707
            OP_JUMP switch_9ED8_case_default
        }
        case 0x5:
        {
// switch_9ED8_case_0x5
            OP_CONST_S -8, 818278802680361918
            OP_JUMP switch_9ED8_case_default
        }
    }
}
// fun_9FB8
fun_9FB8() {
    OP_ZERO_P_S -8
    OP_CONST_S -16, 1
    pri = arg_0;
    switch (pri) {
// switch_A0C8
        case default:
        {
// switch_A0C8_case_default
            var_16 = var_8;
            pri = WorkGet(var_16)
            var_24 = pri;
            OP_ZERO_P_S -32
            OP_ZERO_P_S -40
            OP_ZERO_P_S -48
            OP_JUMP lab_A188
// lab_A188
            pri = var_48;
            OP_LOAD_P_ALT 31568
            OP_JSGEQ lab_A2B0
            pri = var_40;
            var_8 = pri;
            alt = 31576;
            pri = var_48;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            pri = var_16;
            OP_POP_ALT 
            OP_IDXADDR_P_B 3
            OP_LOAD_I 
            OP_POP_ALT 
            OP_ADD 
            var_40 = pri;
            OP_LOAD_S_BOTH -24, -40
            OP_JSGRTR lab_A2A0
            alt = 31576;
            pri = var_48;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            OP_LOAD_I 
            var_32 = pri;
            OP_JUMP lab_A2B0
// lab_A2B0
            arg_-3 = 6;
            var_8 = 4;
            var_16 = 2;
            var_24 = 0;
            var_32 = 9;
            var_40 = 1;
            var_48 = var_32;
            var_56 = arg_1;
            var_64 = 64;
            pri = fun_8450(var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0)
            var_72 = 100;
            var_80 = 1;
            var_88 = 16;
            pri = fun_01E0(var_80, var_72)
            var_96 = pri;
            var_104 = var_8;
            pri = WorkSet(var_104, var_96)
            pri = 0;
            return pri;
// lab_A2A0
            OP_JUMP lab_A180
// lab_A180
            OP_INC_P_S -48
        }
        case 0xad65494023fe34a1:
        {
// switch_A0C8_case_0xad65494023fe34a1
            OP_CONST_S -8, 776807753077357730
            OP_CONST_S -16, 1
            OP_JUMP switch_A0C8_case_default
        }
        case 0xd191f45ad6680385:
        {
// switch_A0C8_case_0xd191f45ad6680385
            OP_CONST_S -8, 776805554054101308
            OP_CONST_S -16, 3
            OP_JUMP switch_A0C8_case_default
        }
        case 0x7a75174c99405da7:
        {
// switch_A0C8_case_0x7a75174c99405da7
            OP_CONST_S -8, 776806653565729519
            OP_CONST_S -16, 2
            OP_JUMP switch_A0C8_case_default
        }
    }
}
// fun_A378
fun_A378() {
    pri = arg_0;
    switch (pri) {
// switch_A440
        case default:
        {
// switch_A440_case_default
            pri = 0;
            return pri;
        }
        case 0xad65494023fe34a1:
        {
// switch_A440_case_0xad65494023fe34a1
            var_8 = -8209701084702246452;
            pri = FlagSet(var_8)
            OP_JUMP switch_A440_case_default
        }
        case 0xd191f45ad6680385:
        {
// switch_A440_case_0xd191f45ad6680385
            var_8 = -8209698885678990030;
            pri = FlagSet(var_8)
            OP_JUMP switch_A440_case_default
        }
        case 0x7a75174c99405da7:
        {
// switch_A440_case_0x7a75174c99405da7
            var_8 = -8209697786167361819;
            pri = FlagSet(var_8)
            OP_JUMP switch_A440_case_default
        }
    }
}
