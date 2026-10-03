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
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_03C8
// lab_03C8
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0408
    OP_JUMP lab_0478
// lab_0408
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0448
    OP_JUMP lab_0478
// lab_0448
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_03C8
// lab_0478
    pri = 0;
    return pri;
}
// fun_0490
fun_0490() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_04E0
fun_04E0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C50(var_8)
    OP_JZER lab_0558
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0C80(var_24)
    OP_JNZ lab_0558
    pri = 0;
    return pri;
// lab_0558
    OP_JUMP lab_0568
// lab_0568
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_05C8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_05C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0568
    pri = 0;
    return pri;
}
// fun_0608
fun_0608() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0640
fun_0640() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0680
fun_0680() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_06B8
fun_06B8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0700
    pri = 0;
    return pri;
// lab_0700
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0740
// lab_0740
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C50(var_8)
    OP_JNZ lab_07C8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_07B8
    pri = 0;
    return pri;
// lab_07C8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0810
    pri = 0;
    return pri;
// lab_0810
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0870
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_08B8(var_8)
    pri = 0;
    return pri;
// lab_0870
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0740
    pri = 0;
    return pri;
// lab_07B8
    OP_JUMP lab_0810
}
// fun_08B8
fun_08B8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_08F0
fun_08F0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0940
    pri = 0;
    return pri;
// lab_0940
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C50(var_8)
    OP_JZER lab_0A70
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0998
    OP_ZERO_P_S 64
// lab_0A70
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0AA8
    OP_CONST_S 64, 1
// lab_0AA8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0AE0
    OP_CONST_S 72, 1
// lab_0AE0
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
// lab_0998
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_09C0
    OP_ZERO_P_S 72
// lab_09C0
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
    OP_JUMP lab_0B80
// lab_0B80
    pri = 0;
    return pri;
}
// fun_0B90
fun_0B90() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0BD0
fun_0BD0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C10
fun_0C10() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C50
fun_0C50() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0C80
fun_0C80() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0CB0
fun_0CB0() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_0CE0
fun_0CE0() {
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
// switch_12F8
        case default:
        {
// switch_12F8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1340
// lab_1340
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
            OP_JNZ lab_13E8
            var_88 = 0;
            pri = fun_1658()
// lab_13E8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_12F8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0EE0
                case default:
                {
// switch_0EE0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0F58
// lab_0F58
                    OP_JUMP lab_1340
                }
                case 0x0:
                {
// switch_0EE0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0F58
                }
                case 0x1:
                {
// switch_0EE0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0F58
                }
                case 0x2:
                {
// switch_0EE0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0F58
                }
                case 0x3:
                {
// switch_0EE0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0F58
                }
                case 0x4:
                {
// switch_0EE0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0F58
                }
                case 0x5:
                {
// switch_0EE0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0F58
                }
            }
        }
        case 0x65:
        {
// switch_12F8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1098
                case default:
                {
// switch_1098_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1110
// lab_1110
                    OP_JUMP lab_1340
                }
                case 0x0:
                {
// switch_1098_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1110
                }
                case 0x1:
                {
// switch_1098_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1110
                }
                case 0x2:
                {
// switch_1098_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1110
                }
                case 0x3:
                {
// switch_1098_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1110
                }
                case 0x4:
                {
// switch_1098_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1110
                }
                case 0x5:
                {
// switch_1098_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1110
                }
            }
        }
        case 0x66:
        {
// switch_12F8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1250
                case default:
                {
// switch_1250_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_12C8
// lab_12C8
                    OP_JUMP lab_1340
                }
                case 0x0:
                {
// switch_1250_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_12C8
                }
                case 0x1:
                {
// switch_1250_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_12C8
                }
                case 0x2:
                {
// switch_1250_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_12C8
                }
                case 0x3:
                {
// switch_1250_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_12C8
                }
                case 0x4:
                {
// switch_1250_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_12C8
                }
                case 0x5:
                {
// switch_1250_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_12C8
                }
            }
        }
    }
}
// fun_1400
fun_1400() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_0CE0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1468
fun_1468() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0680(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1510
    pri = 1;
    return pri;
// lab_1510
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1558
fun_1558() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_15A8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1468(var_8)
    arg_2 = pri;
// lab_15A8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0CE0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1608
fun_1608() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1400(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1658
fun_1658() {
    OP_JUMP lab_1670
// lab_1670
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_16B0
    pri = 0;
    return pri;
// lab_16B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1670
    pri = 0;
    return pri;
}
// fun_16F0
fun_16F0() {
    var_8 = 0;
    pri = fun_1658()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_17A0
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_17A0
    pri = 0;
    return pri;
}
// fun_17B0
fun_17B0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_17E0
fun_17E0() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1810
// lab_1810
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1850
    OP_JUMP lab_1880
// lab_1850
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1810
// lab_1880
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_18C8
fun_18C8() {
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
// fun_1938
fun_1938() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_19B0()
    return pri;
}
// fun_19B0
fun_19B0() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_19F0
fun_19F0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1A40
fun_1A40() {
    pri = arg_3;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1AA0
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = PokePartyGetParam(var_24, var_16, var_8)
    return pri;
// lab_1AA0
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = arg_4;
    pri = PokeBoxGetParam(var_32, var_24, var_16, var_8)
    return pri;
}
// fun_1AE0
fun_1AE0() {
    var_8 = 0;
    var_16 = 0;
    pri = PokePartyGetCount(var_16, var_8)
    OP_EQ_P_C_PRI 6
    OP_JZER lab_1B68
    pri = PokeBoxIsFull()
    OP_JZER lab_1B68
    pri = 1;
    OP_JUMP lab_1B70
// lab_1B68
    pri = 0;
// lab_1B70
    return pri;
}
// fun_1B78
fun_1B78() {
    var_8 = arg_0;
    pri = ConsumePocketMoney_(var_8)
    return pri;
}
// fun_1BA8
fun_1BA8() {
    pri = GetPocketMoney_()
    return pri;
}
// fun_1BD0
fun_1BD0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1C60(var_8)
    var_24 = arg_0;
    pri = OpenWalletWindow_(var_24)
    pri = 0;
    return pri;
}
// fun_1C28
fun_1C28() {
    var_8 = 0;
    pri = CloseWalletWindow_(var_8)
    pri = 0;
    return pri;
}
// fun_1C60
fun_1C60() {
    var_8 = arg_0;
    pri = UpdateWalletWindow_(var_8)
    pri = 0;
    return pri;
}
// fun_1C98
fun_1C98() {
    pri = arg_5;
    OP_JNZ lab_1CD0
    var_8 = 0;
    pri = fun_0B90()
// lab_1CD0
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_1D20
    OP_CONST_S -8, -1
// lab_1D20
    pri = arg_1;
    switch (pri) {
// switch_37D8
        case default:
        {
// switch_37D8_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_3C80
            var_520 = 20392;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0680(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_3C80
            pri = 1;
            OP_JUMP lab_3C88
// lab_3C80
            pri = 0;
// lab_3C88
            OP_JZER lab_3CD8
            var_8 = 64;
            var_16 = 20488;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3F30
// lab_3CD8
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3D40
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3D40
            pri = 1;
            OP_JUMP lab_3D48
// lab_3D40
            pri = 0;
// lab_3D48
            OP_JZER lab_3ED0
            var_16 = 20664;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0680(var_24, var_16)
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
            var_176 = 20768;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 20784;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_3F30
// lab_3ED0
            var_8 = 64;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_3F30
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_3FA0
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_3FA0
            var_8 = 0;
            pri = fun_0BD0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_37D8_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x1:
        {
// switch_37D8_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x2:
        {
// switch_37D8_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x3:
        {
// switch_37D8_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x4:
        {
// switch_37D8_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x5:
        {
// switch_37D8_case_0x5
            var_8 = 2;
            var_16 = 10648;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0640(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_08B8(var_40)
            OP_JUMP switch_37D8_case_default
        }
        case 0x6:
        {
// switch_37D8_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x7:
        {
// switch_37D8_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x8:
        {
// switch_37D8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x9:
        {
// switch_37D8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0xa:
        {
// switch_37D8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0xb:
        {
// switch_37D8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0xc:
        {
// switch_37D8_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0xd:
        {
// switch_37D8_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 11296;
            var_72 = 11120;
            var_80 = 10936;
            var_88 = 10744;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_08F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0xe:
        {
// switch_37D8_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 11952;
            var_72 = 11744;
            var_80 = 11528;
            var_88 = 11304;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_08F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0xf:
        {
// switch_37D8_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12344;
            var_72 = 12224;
            var_80 = 12096;
            var_88 = 11960;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_08F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0x10:
        {
// switch_37D8_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12688;
            var_72 = 12584;
            var_80 = 12472;
            var_88 = 12352;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_08F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0x11:
        {
// switch_37D8_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13032;
            var_72 = 12928;
            var_80 = 12816;
            var_88 = 12696;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_08F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0x12:
        {
// switch_37D8_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x13:
        {
// switch_37D8_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x14:
        {
// switch_37D8_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13592;
            var_72 = 13416;
            var_80 = 13232;
            var_88 = 13040;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_08F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0x15:
        {
// switch_37D8_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x16:
        {
// switch_37D8_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x17:
        {
// switch_37D8_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x18:
        {
// switch_37D8_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x19:
        {
// switch_37D8_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x1a:
        {
// switch_37D8_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x1b:
        {
// switch_37D8_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x1c:
        {
// switch_37D8_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 13984;
            var_72 = 13864;
            var_80 = 13736;
            var_88 = 13600;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_08F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0x1d:
        {
// switch_37D8_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x1e:
        {
// switch_37D8_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 14448;
            var_72 = 14304;
            var_80 = 14152;
            var_88 = 13992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_08F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0x1f:
        {
// switch_37D8_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x20:
        {
// switch_37D8_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x21:
        {
// switch_37D8_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x22:
        {
// switch_37D8_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x23:
        {
// switch_37D8_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x24:
        {
// switch_37D8_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 14816;
            var_72 = 14704;
            var_80 = 14584;
            var_88 = 14456;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_08F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0x25:
        {
// switch_37D8_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15184;
            var_72 = 15072;
            var_80 = 14952;
            var_88 = 14824;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_08F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0x26:
        {
// switch_37D8_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x27:
        {
// switch_37D8_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x28:
        {
// switch_37D8_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x29:
        {
// switch_37D8_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15624;
            var_72 = 15488;
            var_80 = 15344;
            var_88 = 15192;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_08F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0x2a:
        {
// switch_37D8_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16016;
            var_72 = 15896;
            var_80 = 15768;
            var_88 = 15632;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_08F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0x2b:
        {
// switch_37D8_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16432;
            var_72 = 16304;
            var_80 = 16168;
            var_88 = 16024;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_08F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0x2c:
        {
// switch_37D8_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16872;
            var_72 = 16736;
            var_80 = 16592;
            var_88 = 16440;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_08F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0x2d:
        {
// switch_37D8_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x2e:
        {
// switch_37D8_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17192;
            var_72 = 17096;
            var_80 = 16992;
            var_88 = 16880;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_08F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0x2f:
        {
// switch_37D8_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17584;
            var_72 = 17464;
            var_80 = 17336;
            var_88 = 17200;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_08F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0x30:
        {
// switch_37D8_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17976;
            var_72 = 17856;
            var_80 = 17728;
            var_88 = 17592;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_08F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0x31:
        {
// switch_37D8_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x32:
        {
// switch_37D8_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x33:
        {
// switch_37D8_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18368;
            var_72 = 18248;
            var_80 = 18120;
            var_88 = 17984;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_08F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0x34:
        {
// switch_37D8_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18736;
            var_72 = 18624;
            var_80 = 18504;
            var_88 = 18376;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_08F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0x35:
        {
// switch_37D8_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19224;
            var_72 = 19072;
            var_80 = 18912;
            var_88 = 18744;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_08F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0x36:
        {
// switch_37D8_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19592;
            var_72 = 19480;
            var_80 = 19360;
            var_88 = 19232;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_08F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0x37:
        {
// switch_37D8_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x38:
        {
// switch_37D8_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19960;
            var_72 = 19848;
            var_80 = 19728;
            var_88 = 19600;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_08F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0x39:
        {
// switch_37D8_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x3a:
        {
// switch_37D8_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x3b:
        {
// switch_37D8_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x3c:
        {
// switch_37D8_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19968;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x3d:
        {
// switch_37D8_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20144;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x3e:
        {
// switch_37D8_case_0x3e
            var_8 = 4;
            var_16 = 20288;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0640(var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
    }
}
// fun_3FD0
fun_3FD0() {
    pri = arg_4;
    OP_JNZ lab_4008
    var_8 = 0;
    pri = fun_0B90()
// lab_4008
    pri = arg_1;
    switch (pri) {
// switch_53E0
        case default:
        {
// switch_53E0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21360;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0C50(var_264)
            OP_JZER lab_59A8
            pri = arg_3;
            switch (pri) {
// switch_5950
                case default:
                {
// switch_5950_case_default
                    OP_JUMP lab_5C60
// lab_5C60
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_5CD0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_5CD0
                    var_8 = 0;
                    pri = fun_0BD0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_5950_case_0x1
                    var_8 = 32;
                    var_16 = 21512;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5950_case_default
                }
                case 0x2:
                {
// switch_5950_case_0x2
                    var_8 = 32;
                    var_16 = 21616;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5950_case_default
                }
                case 0x3:
                {
// switch_5950_case_0x3
                    var_8 = 32;
                    var_16 = 21416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5950_case_default
                }
            }
// lab_59A8
            pri = arg_1;
            OP_JZER lab_59F8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_59F8
            pri = 0;
            OP_JUMP lab_5A00
// lab_59F8
            pri = 1;
// lab_5A00
            OP_JZER lab_5A68
            var_8 = 21712;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0680(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5A68
            pri = 1;
            OP_JUMP lab_5A70
// lab_5A68
            pri = 0;
// lab_5A70
            OP_JZER lab_5AC0
            var_8 = 32;
            var_16 = 21808;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5C60
// lab_5AC0
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_5B28
            var_8 = 32;
            var_16 = 21968;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5C60
// lab_5B28
            var_16 = 22088;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0680(var_24, var_16)
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
            var_176 = 22192;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 22208;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_53E0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x1:
        {
// switch_53E0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x2:
        {
// switch_53E0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x3:
        {
// switch_53E0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x4:
        {
// switch_53E0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x5:
        {
// switch_53E0_case_0x5
            var_8 = 1;
            var_16 = 20840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0640(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_08B8(var_40)
            OP_JUMP switch_53E0_case_default
        }
        case 0x6:
        {
// switch_53E0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x7:
        {
// switch_53E0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x8:
        {
// switch_53E0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x9:
        {
// switch_53E0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0xa:
        {
// switch_53E0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0xb:
        {
// switch_53E0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0xc:
        {
// switch_53E0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0xd:
        {
// switch_53E0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0xe:
        {
// switch_53E0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0xf:
        {
// switch_53E0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x10:
        {
// switch_53E0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x11:
        {
// switch_53E0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x12:
        {
// switch_53E0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x13:
        {
// switch_53E0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x14:
        {
// switch_53E0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x15:
        {
// switch_53E0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x16:
        {
// switch_53E0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x17:
        {
// switch_53E0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x18:
        {
// switch_53E0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x19:
        {
// switch_53E0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x1a:
        {
// switch_53E0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x1b:
        {
// switch_53E0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x1c:
        {
// switch_53E0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x1d:
        {
// switch_53E0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x1e:
        {
// switch_53E0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x1f:
        {
// switch_53E0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x20:
        {
// switch_53E0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x21:
        {
// switch_53E0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x22:
        {
// switch_53E0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x23:
        {
// switch_53E0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x24:
        {
// switch_53E0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x25:
        {
// switch_53E0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x26:
        {
// switch_53E0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x27:
        {
// switch_53E0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x28:
        {
// switch_53E0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x29:
        {
// switch_53E0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x2a:
        {
// switch_53E0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x2b:
        {
// switch_53E0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x2c:
        {
// switch_53E0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x2d:
        {
// switch_53E0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x2e:
        {
// switch_53E0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x2f:
        {
// switch_53E0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x30:
        {
// switch_53E0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x31:
        {
// switch_53E0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x32:
        {
// switch_53E0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x33:
        {
// switch_53E0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x34:
        {
// switch_53E0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x35:
        {
// switch_53E0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x36:
        {
// switch_53E0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x37:
        {
// switch_53E0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x38:
        {
// switch_53E0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x39:
        {
// switch_53E0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x3a:
        {
// switch_53E0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x3b:
        {
// switch_53E0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x3c:
        {
// switch_53E0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20936;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x3d:
        {
// switch_53E0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21112;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
        case 0x3e:
        {
// switch_53E0_case_0x3e
            var_8 = 3;
            var_16 = 21256;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0640(var_24, var_16, var_8)
            OP_JUMP switch_53E0_case_default
        }
    }
}
// fun_5D00
fun_5D00() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_5E00
        case default:
        {
// switch_5E00_case_default
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
// switch_5E00_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_5E00_case_default
        }
        case 0x1:
        {
// switch_5E00_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_5E00_case_default
        }
        case 0x2:
        {
// switch_5E00_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_5E00_case_default
        }
        case 0x3:
        {
// switch_5E00_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_5E00_case_default
        }
    }
}
// fun_5EC0
fun_5EC0() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_5F10
// lab_5F10
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 22256;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_5F88
    OP_JUMP lab_5FB8
// lab_5F88
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_5F10
// lab_5FB8
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_6040
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_3FD0(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0CB0(var_56)
// lab_6040
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_60A8
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0C10(var_24, var_16)
// lab_60A8
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0C10(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_6168
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_06B8(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0490(var_88, var_80, var_72, var_64, var_56)
// lab_6168
    pri = IsPlayerRideBicycle()
    OP_JZER lab_61A8
    pri = 0;
    return pri;
// lab_61A8
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_62F0
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 22376;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0608(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_62B8
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_62F0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_04E0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_04E0(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_06B8(var_40)
    pri = 0;
    return pri;
// lab_62B8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0C10(var_16, var_8)
}
// fun_6378
fun_6378() {
    pri = g_mode;
    switch (pri) {
// switch_6460
        case default:
        {
// switch_6460_case_default
            pri = CommandNOP()
            OP_JUMP lab_64B8
// lab_64B8
            pri = 0;
            return pri;
        }
        case 0xa6f1e26e69095a2f:
        {
// switch_6460_case_0xa6f1e26e69095a2f
            var_8 = 0;
            pri = fun_9B28()
            OP_JUMP lab_64B8
        }
        case 0xf433a9960e3d281f:
        {
// switch_6460_case_0xf433a9960e3d281f
            var_8 = 0;
            pri = fun_99E0()
            OP_JUMP lab_64B8
        }
        case 0xf8fc8d4b41eb05c4:
        {
// switch_6460_case_0xf8fc8d4b41eb05c4
            var_8 = 0;
            pri = fun_6690()
            OP_JUMP lab_64B8
        }
        case 0x0:
        {
// switch_6460_case_0x0
            var_8 = 0;
            pri = fun_64C8()
            OP_JUMP lab_64B8
        }
    }
}
// fun_64C8
fun_64C8() {
    pri = 0;
    return pri;
}
// fun_64E0
fun_64E0() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    pri = arg_0;
    OP_JNZ lab_6588
    var_16 = 0;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = 3;
    var_56 = arg_1;
    var_64 = var_8;
    var_72 = 56;
    pri = fun_1558(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    OP_JUMP lab_65D8
// lab_6588
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = 3;
    var_48 = arg_2;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_1558(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_65D8
    pri = arg_3;
    OP_JNZ lab_6620
    var_8 = 1;
    var_16 = 8;
    pri = fun_16F0(var_8)
    OP_JUMP lab_6678
// lab_6620
    pri = arg_3;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6678
    var_8 = 1;
    var_16 = 8;
    pri = fun_16F0(var_8)
    var_24 = 0;
    pri = fun_17B0()
// lab_6678
    pri = 0;
    return pri;
}
// fun_6690
fun_6690() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    OP_ZERO_P_S -16
    pri = PlayerGetZoneID()
    var_24 = pri;
    OP_ZERO_P_S -32
    pri = var_24;
    OP_EQ_C_PRI -1952989940832464680
    OP_JZER lab_6788
    OP_ZERO_P_S -16
    var_40 = -7469549744755191017;
    pri = FlagSet(var_40)
    OP_CONST_S -32, 4110257680278979931
    OP_JUMP lab_6808
// lab_6788
    pri = var_24;
    OP_EQ_C_PRI 8605954963873100932
    OP_JZER lab_6808
    OP_CONST_S -16, 1
    var_8 = 2650171815447182853;
    pri = FlagSet(var_8)
    OP_CONST_S -32, -2378170245571334502
// lab_6808
    var_8 = var_16;
    pri = Azukariya_IsEggExist_(var_8)
    OP_JZER lab_6870
    var_16 = var_16;
    var_24 = 8;
    pri = fun_6D50(var_16)
    pri = 0;
    return pri;
// lab_6870
    var_8 = 1;
    var_16 = 1;
    var_24 = 2;
    var_32 = 1;
    var_40 = 1;
    var_48 = var_8;
    var_56 = 48;
    pri = fun_5D00(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = var_32;
    pri = FlagGet(var_64)
    OP_JNZ lab_6958
    var_72 = 2;
    OP_PUSH2_C -2032562333816117187, -8539874898016932463
    var_80 = var_16;
    var_88 = 32;
    pri = fun_64E0(var_80, var_72, var_64, var_56)
    var_96 = var_32;
    pri = FlagSet(var_96)
    OP_JUMP lab_6998
// lab_6958
    var_8 = 2;
    OP_PUSH2_C -2032565632351001820, -8539878196551817096
    var_16 = var_16;
    var_24 = 32;
    pri = fun_64E0(var_16, var_8, var_0, var_-8)
// lab_6998
    var_8 = 1;
    var_16 = 8;
    pri = fun_16F0(var_8)
    var_24 = 0;
    var_32 = 8;
    pri = fun_1BD0(var_24)
    var_48 = var_16;
    pri = Azukariya_GetPokeNum_(var_48)
    var_40 = pri;
    pri = var_40;
    alt = 2;
    OP_JSGEQ lab_6A60
    var_56 = 0;
    var_64 = -4919381573884104565;
    var_72 = 0;
    var_80 = 24;
    pri = fun_17E0(var_72, var_64, var_56)
// lab_6A60
    pri = var_40;
    alt = 1;
    OP_JSLESS lab_6AF0
    var_8 = 0;
    var_16 = -4919380474372476354;
    var_24 = 1;
    var_32 = 24;
    pri = fun_17E0(var_24, var_16, var_8)
    var_40 = 0;
    var_48 = -4919378275349219932;
    var_56 = 2;
    var_64 = 24;
    pri = fun_17E0(var_56, var_48, var_40)
// lab_6AF0
    var_8 = 0;
    var_16 = -4919379374860848143;
    var_24 = 3;
    var_32 = 24;
    pri = fun_17E0(var_24, var_16, var_8)
    var_48 = 0;
    var_56 = 1;
    var_64 = 0;
    var_72 = 1;
    var_80 = 32;
    pri = fun_18C8(var_72, var_64, var_56, var_48)
    var_48 = pri;
    var_88 = 0;
    pri = fun_17B0()
    pri = var_48;
    switch (pri) {
// switch_6CB8
        case default:
        {
// switch_6CB8_case_default
            var_8 = 1;
            OP_PUSH2_C -2032563433327745398, -8539875997528560674
            var_16 = var_16;
            var_24 = 32;
            pri = fun_64E0(var_16, var_8, var_0, var_-8)
            var_32 = 2;
            var_40 = 0;
            var_48 = 0;
            var_56 = var_8;
            var_64 = 32;
            pri = fun_5EC0(var_56, var_48, var_40, var_32)
            OP_JUMP lab_6D00
// lab_6D00
            pri = var_48;
            alt = 1;
            OP_JEQ lab_6D38
            var_8 = 0;
            pri = fun_1C28()
// lab_6D38
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6CB8_case_0x0
            var_8 = var_16;
            var_16 = 8;
            pri = fun_7258(var_8)
            OP_JUMP lab_6D00
        }
        case 0x1:
        {
// switch_6CB8_case_0x1
            var_8 = var_16;
            var_16 = 8;
            pri = fun_8DB0(var_8)
            OP_JUMP lab_6D00
        }
        case 0x2:
        {
// switch_6CB8_case_0x2
            var_8 = var_16;
            var_16 = 8;
            pri = fun_9628(var_8)
            OP_JUMP lab_6D00
        }
    }
}
// fun_6D50
fun_6D50() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    pri = arg_0;
    OP_JNZ lab_6E10
    var_16 = 0;
    var_24 = 22512;
    var_32 = -6747924587209772797;
    var_40 = 24;
    pri = fun_0640(var_32, var_24, var_16)
    var_48 = 0;
    var_56 = -5686157121352957502;
    pri = WorkSet(var_56, var_48)
    OP_JUMP lab_6E78
// lab_6E10
    var_8 = 0;
    var_16 = 22640;
    var_24 = -8753057709848650353;
    var_32 = 24;
    pri = fun_0640(var_24, var_16, var_8)
    var_40 = 0;
    var_48 = 3709265103350776868;
    pri = WorkSet(var_48, var_40)
// lab_6E78
    var_8 = 1;
    var_16 = 1;
    var_24 = 2;
    var_32 = 1;
    var_40 = 1;
    var_48 = var_8;
    var_56 = 48;
    pri = fun_5D00(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 2;
    OP_PUSH2_C -2032568930885886453, -8539872698993676041
    var_72 = arg_0;
    var_80 = 32;
    pri = fun_64E0(var_72, var_64, var_56, var_48)
    var_88 = 0;
    var_96 = 0;
    var_104 = 1;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 48;
    pri = fun_1938(var_128, var_120, var_112, var_104, var_96, var_88)
    OP_JNZ lab_7008
    var_144 = 1;
    OP_PUSH2_C -2032570030397514664, -8539873798505304252
    var_152 = arg_0;
    var_160 = 32;
    pri = fun_64E0(var_152, var_144, var_136, var_128)
    var_168 = arg_0;
    pri = Azukariya_RefuseEgg_(var_168)
    var_176 = 2;
    var_184 = 0;
    var_192 = 0;
    var_200 = var_8;
    var_208 = 32;
    pri = fun_5EC0(var_200, var_192, var_184, var_176)
    pri = 0;
    return pri;
// lab_7008
    var_8 = 0;
    pri = fun_1AE0()
    OP_JZER lab_70C0
    var_16 = 1;
    OP_PUSH2_C -2032573328932399297, -8539885893133214573
    var_24 = arg_0;
    var_32 = 32;
    pri = fun_64E0(var_24, var_16, var_8, var_0)
    var_40 = 2;
    var_48 = 0;
    var_56 = 0;
    var_64 = var_8;
    var_72 = 32;
    pri = fun_5EC0(var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
// lab_70C0
    var_8 = 0;
    pri = fun_17B0()
    var_16 = 22768;
    pri = SoundPostEvent(var_16)
    var_24 = 0;
    var_32 = 8;
    pri = fun_19F0(var_24)
    var_40 = 3;
    var_48 = 0;
    var_56 = -8539870499970419619;
    var_64 = 24;
    pri = fun_1608(var_56, var_48, var_40)
    var_72 = 0;
    var_80 = 8;
    pri = fun_0380(var_72)
    var_88 = 1;
    var_96 = 8;
    pri = fun_16F0(var_88)
    var_104 = 0;
    pri = fun_17B0()
    var_112 = arg_0;
    pri = Azukariya_EggAdopt_(var_112)
    var_120 = 1;
    OP_PUSH2_C -2032567831374258242, -8539871599482047830
    var_128 = arg_0;
    var_136 = 32;
    pri = fun_64E0(var_128, var_120, var_112, var_104)
    var_144 = 2;
    var_152 = 0;
    var_160 = 0;
    var_168 = var_8;
    var_176 = 32;
    pri = fun_5EC0(var_168, var_160, var_152, var_144)
    pri = 0;
    return pri;
}
// fun_7258
fun_7258() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    OP_CONST_S -16, 2
    OP_ZERO_P_S -24
    var_40 = 0;
    var_48 = 1;
    pri = PokePartyGetCount(var_48, var_40)
    var_56 = pri;
    var_64 = 0;
    pri = PokeBoxGetCount(var_64)
    OP_POP_ALT 
    OP_ADD 
    var_32 = pri;
    var_80 = arg_0;
    pri = Azukariya_GetPokeNum_(var_80)
    var_40 = pri;
    pri = var_40;
    OP_JNZ lab_73A8
    pri = var_32;
    alt = 4;
    OP_JSLESS lab_73A8
    pri = 1;
    OP_JUMP lab_73B0
// lab_73A8
    pri = 0;
// lab_73B0
    OP_JZER lab_73F0
    OP_CONST_S -16, 2
    OP_ZERO_P_S -24
    OP_JUMP lab_7618
// lab_73F0
    pri = var_40;
    OP_JNZ lab_7440
    pri = var_32;
    OP_EQ_P_C_PRI 3
    OP_JZER lab_7440
    pri = 1;
    OP_JUMP lab_7448
// lab_7440
    pri = 0;
// lab_7448
    OP_JZER lab_7498
    OP_CONST_S -16, 1
    OP_CONST_S -24, 1
    OP_JUMP lab_7618
// lab_7498
    pri = var_40;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_74F0
    pri = var_32;
    alt = 3;
    OP_JSLESS lab_74F0
    pri = 1;
    OP_JUMP lab_74F8
// lab_74F0
    pri = 0;
// lab_74F8
    OP_JZER lab_7548
    OP_CONST_S -16, 1
    OP_CONST_S -24, 2
    OP_JUMP lab_7618
// lab_7548
    var_8 = 0;
    OP_PUSH2_C -2033411156792906854, -8540873254575158826
    var_16 = arg_0;
    var_24 = 32;
    pri = fun_64E0(var_16, var_8, var_0, var_-8)
    var_32 = 1;
    OP_PUSH2_C -2032563433327745398, -8539875997528560674
    var_40 = arg_0;
    var_48 = 32;
    pri = fun_64E0(var_40, var_32, var_24, var_16)
    var_56 = 2;
    var_64 = 0;
    var_72 = 0;
    var_80 = var_8;
    var_88 = 32;
    pri = fun_5EC0(var_80, var_72, var_64, var_56)
    pri = 0;
    return pri;
// lab_7618
    pri = var_24;
    OP_JNZ lab_7688
    arg_-2 = 1;
    OP_PUSH2_C -2033410057281278643, -8540872155063530615
    arg_-3 = arg_0;
    var_8 = 32;
    pri = fun_64E0(var_0, var_-8, var_-16, var_-24)
    OP_JUMP lab_77B0
// lab_7688
    pri = var_24;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_76F8
    var_8 = 1;
    OP_PUSH2_C -2034415010909274272, -8541859516505474868
    var_16 = arg_0;
    var_24 = 32;
    pri = fun_64E0(var_16, var_8, var_0, var_-8)
    OP_JUMP lab_77B0
// lab_76F8
    pri = var_24;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_7798
    var_8 = 0;
    var_16 = arg_0;
    var_24 = 0;
    pri = Azukariya_WordSetPokeName_(var_24, var_16, var_8)
    var_32 = 1;
    OP_PUSH2_C -2033413355816163276, -8540875453598415248
    var_40 = arg_0;
    var_48 = 32;
    pri = fun_64E0(var_40, var_32, var_24, var_16)
    OP_JUMP lab_77B0
// lab_7798
    pri = 0;
    return pri;
// lab_77B0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 2;
    var_40 = var_8;
    var_48 = 40;
    pri = fun_3FD0(var_40, var_32, var_24, var_16, var_8)
    var_56 = 0;
    pri = fun_1C28()
    var_64 = 5;
    var_72 = 0;
    var_80 = 1;
    var_88 = 0;
    var_96 = var_16;
    pri = CallSelectModeBox(var_96, var_88, var_80, var_72, var_64)
    var_104 = 0;
    var_112 = 8;
    pri = fun_1BD0(var_104)
    pri = 0;
    OP_ADDR_ALT -40
    OP_FILL 16
    pri = 0;
    OP_ADDR_ALT -56
    OP_FILL 16
    pri = 0;
    OP_ADDR_ALT -72
    OP_FILL 16
    OP_ADDR_P_PRI -40
    var_168 = pri;
    var_176 = 0;
    pri = TempWorkGet(var_176)
    OP_POP_ALT 
    OP_STOR_I 
    OP_ADDR_P_PRI -56
    var_184 = pri;
    var_192 = 1;
    pri = TempWorkGet(var_192)
    OP_POP_ALT 
    OP_STOR_I 
    OP_ADDR_P_PRI -72
    var_200 = pri;
    var_208 = 2;
    pri = TempWorkGet(var_208)
    OP_POP_ALT 
    OP_STOR_I 
    OP_ADDR_P_PRI -40
    OP_ADD_P_C 8
    var_216 = pri;
    var_224 = 3;
    pri = TempWorkGet(var_224)
    OP_POP_ALT 
    OP_STOR_I 
    OP_ADDR_P_PRI -56
    OP_ADD_P_C 8
    var_232 = pri;
    var_240 = 4;
    pri = TempWorkGet(var_240)
    OP_POP_ALT 
    OP_STOR_I 
    OP_ADDR_P_PRI -72
    OP_ADD_P_C 8
    var_248 = pri;
    var_256 = 5;
    pri = TempWorkGet(var_256)
    OP_POP_ALT 
    OP_STOR_I 
    OP_ZERO_P_S -80
    OP_ZERO_P_S -88
    OP_JUMP lab_7AC8
// lab_7AC8
    pri = var_88;
    alt = 2;
    OP_JSGEQ lab_7B98
    OP_ADDR_P_ALT -40
    pri = var_88;
    OP_LIDX_P_B 3
    OP_JZER lab_7B58
    OP_ADDR_P_ALT -40
    pri = var_88;
    OP_LIDX_P_B 3
    alt = 1;
    OP_JEQ lab_7B58
    pri = 1;
    OP_JUMP lab_7B60
// lab_7B98
    OP_ADDR_P_PRI -40
    OP_LOAD_I 
    OP_EQ_P_C_PRI 1
    OP_JZER lab_7C10
    OP_ADDR_P_PRI -40
    OP_ADD_P_C 8
    OP_LOAD_I 
    OP_EQ_P_C_PRI 1
    OP_JZER lab_7C10
    pri = 1;
    OP_JUMP lab_7C18
// lab_7C10
    pri = 0;
// lab_7C18
    OP_JZER lab_7CA8
    OP_ADDR_P_PRI -72
    OP_LOAD_I 
    var_8 = pri;
    OP_ADDR_P_PRI -72
    OP_ADD_P_C 8
    OP_LOAD_I 
    OP_POP_ALT 
    OP_JSLEQ lab_7CA8
    OP_ADDR_P_PRI -72
    OP_ADD_P_C 8
    var_16 = pri;
    OP_LOAD_I 
    OP_SWAP_PRI 
    OP_DEC_I 
    OP_POP_PRI 
// lab_7CA8
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    var_32 = -1;
    var_40 = 0;
    var_48 = 2;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_1C98(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = var_80;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8610
    var_72 = 0;
    OP_PUSH2_C -2033412256304535065, -8540874354086787037
    var_80 = arg_0;
    var_88 = 32;
    pri = fun_64E0(var_80, var_72, var_64, var_56)
    var_96 = 0;
    var_104 = 0;
    var_112 = 1;
    var_120 = 0;
    var_128 = 0;
    var_136 = 0;
    var_144 = 48;
    pri = fun_1938(var_136, var_128, var_120, var_112, var_104, var_96)
    OP_JNZ lab_7E40
    var_152 = 1;
    OP_PUSH2_C -2032563433327745398, -8539875997528560674
    var_160 = arg_0;
    var_168 = 32;
    pri = fun_64E0(var_160, var_152, var_144, var_136)
    var_176 = 2;
    var_184 = 0;
    var_192 = 0;
    var_200 = var_8;
    var_208 = 32;
    pri = fun_5EC0(var_200, var_192, var_184, var_176)
    pri = 0;
    return pri;
// lab_8610
    pri = var_80;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8C90
    var_8 = arg_0;
    pri = Azukariya_GetPokeNum_(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_86B8
    var_16 = 0;
    OP_PUSH2_C -8541851819924077391, -8541851819924077391
    var_24 = arg_0;
    var_32 = 32;
    pri = fun_64E0(var_24, var_16, var_8, var_0)
    OP_JUMP lab_86F8
// lab_8C90
    var_8 = 1;
    OP_PUSH2_C -2032563433327745398, -8539875997528560674
    var_16 = arg_0;
    var_24 = 32;
    pri = fun_64E0(var_16, var_8, var_0, var_-8)
    var_32 = 2;
    var_40 = 0;
    var_48 = 0;
    var_56 = var_8;
    var_64 = 32;
    pri = fun_5EC0(var_56, var_48, var_40, var_32)
    pri = 0;
    return pri;
// lab_86B8
    var_8 = 0;
    OP_PUSH2_C -2033424350932445386, -8540860060435620294
    var_16 = arg_0;
    var_24 = 32;
    pri = fun_64E0(var_16, var_8, var_0, var_-8)
// lab_86F8
    var_8 = 0;
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 48;
    pri = fun_1938(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_87E0
    var_64 = 1;
    OP_PUSH2_C -2032563433327745398, -8539875997528560674
    var_72 = arg_0;
    var_80 = 32;
    pri = fun_64E0(var_72, var_64, var_56, var_48)
    var_88 = 2;
    var_96 = 0;
    var_104 = 0;
    var_112 = var_8;
    var_120 = 32;
    pri = fun_5EC0(var_112, var_104, var_96, var_88)
    pri = 0;
    return pri;
// lab_87E0
    var_8 = 0;
    pri = fun_17B0()
    var_16 = 0;
    pri = fun_1BA8()
    alt = 500;
    OP_JSGEQ lab_88F8
    var_24 = 0;
    OP_PUSH2_C -2034409513351133217, -8541862815040359501
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_64E0(var_32, var_24, var_16, var_8)
    var_48 = 1;
    OP_PUSH2_C -2032563433327745398, -8539875997528560674
    var_56 = arg_0;
    var_64 = 32;
    pri = fun_64E0(var_56, var_48, var_40, var_32)
    var_72 = 2;
    var_80 = 0;
    var_88 = 0;
    var_96 = var_8;
    var_104 = 32;
    pri = fun_5EC0(var_96, var_88, var_80, var_72)
    pri = 0;
    return pri;
// lab_88F8
    pri = var_24;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_89D0
    var_16 = 0;
    var_24 = arg_0;
    pri = Azukariya_GetLeftPokeMonsNo_(var_24, var_16)
    var_88 = pri;
    var_32 = var_88;
    var_40 = 4;
    var_48 = 23320;
    OP_ADDR_P_PRI -72
    OP_LOAD_I 
    var_56 = pri;
    OP_ADDR_P_PRI -56
    OP_LOAD_I 
    var_64 = pri;
    OP_ADDR_P_PRI -40
    OP_LOAD_I 
    var_72 = pri;
    pri = PokeMemoryCheck(var_72, var_64, var_56, var_48, var_40, var_32)
// lab_89D0
    OP_ADDR_P_PRI -72
    OP_LOAD_I 
    var_8 = pri;
    OP_ADDR_P_PRI -56
    OP_LOAD_I 
    var_16 = pri;
    OP_ADDR_P_PRI -40
    OP_LOAD_I 
    var_24 = pri;
    var_32 = arg_0;
    pri = Azukariya_LeavePokemon_(var_32, var_24, var_16, var_8)
    var_40 = 500;
    var_48 = 8;
    pri = fun_1B78(var_40)
    var_56 = 0;
    var_64 = 8;
    pri = fun_1C60(var_56)
    var_72 = 23400;
    pri = SoundPostEvent(var_72)
    var_80 = 0;
    var_88 = 8;
    pri = fun_0380(var_80)
    OP_ZERO_P_S -88
    var_104 = arg_0;
    pri = Azukariya_GetPokeNum_(var_104)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8B18
    OP_ZERO_P_S -88
    OP_JUMP lab_8B30
// lab_8B18
    OP_CONST_S -88, 1
// lab_8B30
    var_16 = var_88;
    var_24 = arg_0;
    pri = Azukariya_GetLeftPokeMonsNo_(var_24, var_16)
    var_96 = pri;
    var_40 = var_88;
    var_48 = arg_0;
    pri = Azukariya_GetLeftPokeFormNo_(var_48, var_40)
    var_104 = pri;
    var_64 = 0;
    var_72 = 0;
    var_80 = var_104;
    var_88 = var_96;
    pri = SoundPlayPokeVoice(var_88, var_80, var_72, var_64)
    var_112 = pri;
    var_96 = var_112;
    var_104 = 8;
    pri = fun_0380(var_96)
    var_112 = var_88;
    var_120 = arg_0;
    var_128 = 0;
    pri = Azukariya_WordSetPokeName_(var_128, var_120, var_112)
    var_136 = 0;
    OP_PUSH2_C -2034407314327876795, -8541860616017103079
    var_144 = arg_0;
    var_152 = 32;
    pri = fun_64E0(var_144, var_136, var_128, var_120)
    OP_JUMP lab_8D20
// lab_8D20
    var_8 = 1;
    OP_PUSH2_C -2034408413839505006, -8541861715528731290
    var_16 = arg_0;
    var_24 = 32;
    pri = fun_64E0(var_16, var_8, var_0, var_-8)
    var_32 = 2;
    var_40 = 0;
    var_48 = 0;
    var_56 = var_8;
    var_64 = 32;
    pri = fun_5EC0(var_56, var_48, var_40, var_32)
    pri = 0;
    return pri;
// lab_7E40
    var_8 = 0;
    pri = fun_17B0()
    var_16 = 0;
    pri = fun_1BA8()
    alt = 1000;
    OP_JSGEQ lab_7F58
    var_24 = 0;
    OP_PUSH2_C -2034409513351133217, -8541862815040359501
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_64E0(var_32, var_24, var_16, var_8)
    var_48 = 1;
    OP_PUSH2_C -2032563433327745398, -8539875997528560674
    var_56 = arg_0;
    var_64 = 32;
    pri = fun_64E0(var_56, var_48, var_40, var_32)
    var_72 = 2;
    var_80 = 0;
    var_88 = 0;
    var_96 = var_8;
    var_104 = 32;
    pri = fun_5EC0(var_96, var_88, var_80, var_72)
    pri = 0;
    return pri;
// lab_7F58
    pri = 0;
    OP_ADDR_ALT -96
    OP_FILL 16
    OP_ADDR_P_PRI -96
    var_24 = pri;
    OP_ADDR_P_PRI -56
    OP_LOAD_I 
    var_32 = pri;
    OP_ADDR_P_PRI -40
    OP_LOAD_I 
    var_40 = pri;
    var_48 = 0;
    var_56 = 0;
    OP_ADDR_P_PRI -72
    OP_LOAD_I 
    var_64 = pri;
    var_72 = 40;
    pri = fun_1A40(var_64, var_56, var_48, var_40, var_32)
    OP_POP_ALT 
    OP_STOR_I 
    OP_ADDR_P_PRI -96
    OP_ADD_P_C 8
    var_80 = pri;
    OP_ADDR_P_PRI -56
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_88 = pri;
    OP_ADDR_P_PRI -40
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_96 = pri;
    var_104 = 0;
    var_112 = 0;
    OP_ADDR_P_PRI -72
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_120 = pri;
    var_128 = 40;
    pri = fun_1A40(var_120, var_112, var_104, var_96, var_88)
    OP_POP_ALT 
    OP_STOR_I 
    OP_ADDR_P_PRI -96
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_136 = pri;
    var_144 = 4;
    var_152 = 22968;
    OP_ADDR_P_PRI -72
    OP_LOAD_I 
    var_160 = pri;
    OP_ADDR_P_PRI -56
    OP_LOAD_I 
    var_168 = pri;
    OP_ADDR_P_PRI -40
    OP_LOAD_I 
    var_176 = pri;
    pri = PokeMemoryCheck(var_176, var_168, var_160, var_152, var_144, var_136)
    OP_ADDR_P_PRI -96
    OP_LOAD_I 
    var_184 = pri;
    var_192 = 4;
    var_200 = 23048;
    OP_ADDR_P_PRI -72
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_208 = pri;
    OP_ADDR_P_PRI -56
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_216 = pri;
    OP_ADDR_P_PRI -40
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_224 = pri;
    pri = PokeMemoryCheck(var_224, var_216, var_208, var_200, var_192, var_184)
    OP_ADDR_P_PRI -72
    OP_LOAD_I 
    var_232 = pri;
    OP_ADDR_P_PRI -56
    OP_LOAD_I 
    var_240 = pri;
    OP_ADDR_P_PRI -40
    OP_LOAD_I 
    var_248 = pri;
    var_256 = arg_0;
    pri = Azukariya_LeavePokemon_(var_256, var_248, var_240, var_232)
    OP_ADDR_P_PRI -72
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_264 = pri;
    OP_ADDR_P_PRI -56
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_272 = pri;
    OP_ADDR_P_PRI -40
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_280 = pri;
    var_288 = arg_0;
    pri = Azukariya_LeavePokemon_(var_288, var_280, var_272, var_264)
    var_296 = 1000;
    var_304 = 8;
    pri = fun_1B78(var_296)
    var_312 = 0;
    var_320 = 8;
    pri = fun_1C60(var_312)
    var_328 = 23128;
    pri = SoundPostEvent(var_328)
    var_336 = 0;
    var_344 = 8;
    pri = fun_0380(var_336)
    pri = 0;
    OP_ADDR_ALT -112
    OP_FILL 16
    OP_ZERO_P_S -120
    OP_JUMP lab_83B8
// lab_83B8
    pri = var_120;
    alt = 2;
    OP_JSGEQ lab_84E8
    var_16 = var_120;
    var_24 = arg_0;
    pri = Azukariya_GetLeftPokeMonsNo_(var_24, var_16)
    var_128 = pri;
    var_40 = var_120;
    var_48 = arg_0;
    pri = Azukariya_GetLeftPokeFormNo_(var_48, var_40)
    var_136 = pri;
    OP_ADDR_P_ALT -112
    pri = var_120;
    OP_IDXADDR_P_B 3
    var_56 = pri;
    var_64 = 0;
    var_72 = 0;
    var_80 = var_136;
    var_88 = var_128;
    pri = SoundPlayPokeVoice(var_88, var_80, var_72, var_64)
    OP_POP_ALT 
    OP_STOR_I 
    var_96 = 15;
    var_104 = 8;
    pri = fun_0060(var_96)
    OP_JUMP lab_83B0
// lab_84E8
    OP_ADDR_P_PRI -112
    OP_LOAD_I 
    arg_-3 = pri;
    var_8 = 8;
    pri = fun_0380(var_0)
    OP_ADDR_P_PRI -112
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_16 = pri;
    var_24 = 8;
    pri = fun_0380(var_16)
    var_32 = 0;
    var_40 = arg_0;
    var_48 = 0;
    pri = Azukariya_WordSetPokeName_(var_48, var_40, var_32)
    var_56 = 1;
    var_64 = arg_0;
    var_72 = 1;
    pri = Azukariya_WordSetPokeName_(var_72, var_64, var_56)
    var_80 = 0;
    OP_PUSH2_C -2033423251420817175, -8540858960923992083
    var_88 = arg_0;
    var_96 = 32;
    pri = fun_64E0(var_88, var_80, var_72, var_64)
    OP_JUMP lab_8D20
// lab_83B0
    OP_INC_P_S -120
// lab_7B58
    pri = 0;
// lab_7B60
    OP_JZER lab_7B80
    OP_JUMP lab_7AC0
// lab_7B80
    OP_INC_P_S -80
    OP_JUMP lab_7AC0
// lab_7AC0
    OP_INC_P_S -88
}
// fun_8DB0
fun_8DB0() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 0;
    pri = fun_1AE0()
    OP_JZER lab_8EB0
    var_24 = 1;
    OP_PUSH2_C -2032573328932399297, -8539885893133214573
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_64E0(var_32, var_24, var_16, var_8)
    var_48 = 2;
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = 32;
    pri = fun_5EC0(var_72, var_64, var_56, var_48)
    var_88 = 0;
    pri = fun_1C28()
    pri = 0;
    return pri;
// lab_8EB0
    var_8 = 2;
    OP_PUSH2_C -2034410612862761428, -8541863914551987712
    var_16 = arg_0;
    var_24 = 32;
    pri = fun_64E0(var_16, var_8, var_0, var_-8)
    var_40 = arg_0;
    pri = Azukariya_GetPokeNum_(var_40)
    var_16 = pri;
    OP_ZERO_P_S -24
    OP_ZERO_P_S -24
    OP_JUMP lab_8F50
// lab_8F50
    OP_LOAD_S_BOTH -24, -16
    OP_JSGEQ lab_8FB8
    var_8 = var_24;
    var_16 = arg_0;
    var_24 = var_24;
    var_32 = 24;
    pri = fun_9498(var_24, var_16, var_8)
    OP_JUMP lab_8F48
// lab_8FB8
    var_8 = 0;
    var_16 = -4919379374860848143;
    var_24 = var_24;
    var_32 = 24;
    pri = fun_17E0(var_24, var_16, var_8)
    var_48 = 0;
    var_56 = 1;
    var_64 = 0;
    var_72 = 1;
    var_80 = 32;
    pri = fun_18C8(var_72, var_64, var_56, var_48)
    var_32 = pri;
    OP_LOAD_S_BOTH -24, -32
    OP_JNEQ lab_9108
    var_88 = 1;
    OP_PUSH2_C -2032563433327745398, -8539875997528560674
    var_96 = arg_0;
    var_104 = 32;
    pri = fun_64E0(var_96, var_88, var_80, var_72)
    var_112 = 2;
    var_120 = 0;
    var_128 = 0;
    var_136 = var_8;
    var_144 = 32;
    pri = fun_5EC0(var_136, var_128, var_120, var_112)
    var_152 = 0;
    pri = fun_1C28()
    pri = 0;
    return pri;
// lab_9108
    var_8 = var_32;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_9368(var_16, var_8)
    var_32 = arg_0;
    pri = Azukariya_GetPokeNum_(var_32)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_92D8
    var_40 = 0;
    var_48 = arg_0;
    var_56 = 0;
    pri = Azukariya_WordSetPokeName_(var_56, var_48, var_40)
    var_64 = 2;
    OP_PUSH2_C -2034413911397646061, -8541858416993846657
    var_72 = arg_0;
    var_80 = 32;
    pri = fun_64E0(var_72, var_64, var_56, var_48)
    var_88 = 0;
    var_96 = 0;
    var_104 = 1;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 48;
    pri = fun_1938(var_128, var_120, var_112, var_104, var_96, var_88)
    OP_JZER lab_92D8
    var_144 = 0;
    pri = fun_1AE0()
    OP_JZER lab_92B0
    var_152 = 1;
    OP_PUSH2_C -2032573328932399297, -8539885893133214573
    var_160 = arg_0;
    var_168 = 32;
    pri = fun_64E0(var_160, var_152, var_144, var_136)
    pri = 0;
    return pri;
// lab_92D8
    var_8 = 1;
    OP_PUSH2_C -2032563433327745398, -8539875997528560674
    var_16 = arg_0;
    var_24 = 32;
    pri = fun_64E0(var_16, var_8, var_0, var_-8)
    var_32 = 2;
    var_40 = 0;
    var_48 = 0;
    var_56 = var_8;
    var_64 = 32;
    pri = fun_5EC0(var_56, var_48, var_40, var_32)
    pri = 0;
    return pri;
// lab_92B0
    var_8 = 0;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_9368(var_16, var_8)
// lab_8F48
    OP_INC_P_S -24
}
// fun_9368
fun_9368() {
    pri = CommandNOP()
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    pri = Azukariya_WordSetPokeName_(var_24, var_16, var_8)
    var_32 = 1;
    OP_PUSH2_C -2034411712374389639, -8541856217970590235
    var_40 = arg_0;
    var_48 = 32;
    pri = fun_64E0(var_40, var_32, var_24, var_16)
    var_56 = 1;
    var_64 = 8;
    pri = fun_19F0(var_56)
    var_72 = arg_1;
    var_80 = arg_0;
    var_88 = 0;
    pri = Azukariya_WordSetPokeName_(var_88, var_80, var_72)
    var_96 = 0;
    pri = fun_1C28()
    var_104 = arg_1;
    var_112 = arg_0;
    pri = Azukariya_TakeBackPokemon_(var_112, var_104)
    pri = 0;
    return pri;
}
// fun_9498
fun_9498() {
    var_16 = arg_2;
    var_24 = arg_1;
    pri = Azukariya_WordSetTakeBackMenu_(var_24, var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_95C8
        case default:
        {
// switch_95C8_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_95C8_case_0x0
            var_8 = 0;
            var_16 = -4919376076325963510;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_17E0(var_24, var_16, var_8)
            OP_JUMP switch_95C8_case_default
        }
        case 0x1:
        {
// switch_95C8_case_0x1
            var_8 = 0;
            var_16 = -4919374976814335299;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_17E0(var_24, var_16, var_8)
            OP_JUMP switch_95C8_case_default
        }
        case 0x2:
        {
// switch_95C8_case_0x2
            var_8 = 0;
            var_16 = -4919391469488758464;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_17E0(var_24, var_16, var_8)
            OP_JUMP switch_95C8_case_default
        }
    }
}
// fun_9628
fun_9628() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_24 = arg_0;
    pri = Azukariya_GetPokeNum_(var_24)
    var_16 = pri;
    pri = var_16;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9728
    var_32 = 0;
    var_40 = arg_0;
    var_48 = 0;
    pri = Azukariya_WordSetPokeName_(var_48, var_40, var_32)
    var_56 = 1;
    OP_PUSH2_C -2032574428444027508, -8539886992644842784
    var_64 = arg_0;
    var_72 = 32;
    pri = fun_64E0(var_64, var_56, var_48, var_40)
    OP_JUMP lab_9990
// lab_9728
    pri = var_16;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_9990
    var_8 = 0;
    var_16 = arg_0;
    var_24 = 0;
    pri = Azukariya_WordSetPokeName_(var_24, var_16, var_8)
    var_32 = 1;
    var_40 = arg_0;
    var_48 = 1;
    pri = Azukariya_WordSetPokeName_(var_48, var_40, var_32)
    var_64 = arg_0;
    pri = Azukariya_LoveCheck_(var_64)
    var_24 = pri;
    pri = var_24;
    switch (pri) {
// switch_9930
        case default:
        {
// switch_9930_case_default
        }
        case 0x0:
        {
// switch_9930_case_0x0
            var_8 = 1;
            OP_PUSH2_C -2033415554839419698, -8540868856528645982
            var_16 = arg_0;
            var_24 = 32;
            pri = fun_64E0(var_16, var_8, var_0, var_-8)
            OP_JUMP switch_9930_case_default
        }
        case 0x1:
        {
// switch_9930_case_0x1
            var_8 = 1;
            OP_PUSH2_C -2033414455327791487, -8540867757017017771
            var_16 = arg_0;
            var_24 = 32;
            pri = fun_64E0(var_16, var_8, var_0, var_-8)
            OP_JUMP switch_9930_case_default
        }
        case 0x2:
        {
// switch_9930_case_0x2
            var_8 = 1;
            OP_PUSH2_C -2033417753862676120, -8540871055551902404
            var_16 = arg_0;
            var_24 = 32;
            pri = fun_64E0(var_16, var_8, var_0, var_-8)
            OP_JUMP switch_9930_case_default
        }
        case 0x3:
        {
// switch_9930_case_0x3
            var_8 = 1;
            OP_PUSH2_C -2033416654351047909, -8540869956040274193
            var_16 = arg_0;
            var_24 = 32;
            pri = fun_64E0(var_16, var_8, var_0, var_-8)
            OP_JUMP switch_9930_case_default
        }
    }
// lab_9990
    var_8 = 2;
    var_16 = 0;
    var_24 = 0;
    var_32 = var_8;
    var_40 = 32;
    pri = fun_5EC0(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_99E0
fun_99E0() {
    var_8 = 3;
    var_16 = 0;
    var_24 = -3708648786667491433;
    var_32 = 24;
    pri = fun_1608(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_16F0(var_40)
    var_56 = 0;
    pri = fun_17B0()
    var_72 = 0;
    pri = TempWorkGet(var_72)
    var_8 = pri;
    pri = CommandNOP()
    var_80 = 1;
    var_88 = 0;
    var_96 = 23592;
    var_104 = 8;
    var_112 = 32;
    pri = fun_0280(var_104, var_96, var_88, var_80)
    var_120 = 0;
    pri = fun_02F0()
    var_128 = var_8;
    pri = CallHatchEvent(var_128)
    pri = 0;
    return pri;
}
// fun_9B28
fun_9B28() {
    pri = 0;
    return pri;
}
