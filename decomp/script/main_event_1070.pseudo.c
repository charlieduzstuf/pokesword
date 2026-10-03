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
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0400
fun_0400() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0438
fun_0438() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0490
fun_0490() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C00(var_8)
    OP_JZER lab_0508
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0C30(var_24)
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
    pri = fun_0C00(var_8)
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
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_08F0
    pri = 0;
    return pri;
// lab_08F0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C00(var_8)
    OP_JZER lab_0A20
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0948
    OP_ZERO_P_S 64
// lab_0A20
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A58
    OP_CONST_S 64, 1
// lab_0A58
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A90
    OP_CONST_S 72, 1
// lab_0A90
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
// lab_0948
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0970
    OP_ZERO_P_S 72
// lab_0970
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
    OP_JUMP lab_0B30
// lab_0B30
    pri = 0;
    return pri;
}
// fun_0B40
fun_0B40() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0B80
fun_0B80() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0BC0
fun_0BC0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C00
fun_0C00() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0C30
fun_0C30() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0C60
fun_0C60() {
    OP_JUMP lab_0C78
// lab_0C78
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0D08
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0CF8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0668(var_8)
    pri = 0;
    return pri;
// lab_0D08
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0D98
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0D88
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0668(var_8)
    pri = 0;
    return pri;
// lab_0D98
    pri = 0;
    return pri;
// lab_0D88
    OP_JUMP lab_0DA8
// lab_0DA8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0C78
    pri = 0;
    return pri;
// lab_0CF8
    OP_JUMP lab_0DA8
}
// fun_0DE8
fun_0DE8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0668(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0C60(var_40)
    pri = 0;
    return pri;
}
// fun_0E70
fun_0E70() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_0EA8
fun_0EA8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_0ED0
fun_0ED0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_0F08
fun_0F08() {
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
// switch_1520
        case default:
        {
// switch_1520_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1568
// lab_1568
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
            OP_JNZ lab_1610
            var_88 = 0;
            pri = fun_17C8()
// lab_1610
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1520_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1108
                case default:
                {
// switch_1108_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1180
// lab_1180
                    OP_JUMP lab_1568
                }
                case 0x0:
                {
// switch_1108_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1180
                }
                case 0x1:
                {
// switch_1108_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1180
                }
                case 0x2:
                {
// switch_1108_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1180
                }
                case 0x3:
                {
// switch_1108_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1180
                }
                case 0x4:
                {
// switch_1108_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1180
                }
                case 0x5:
                {
// switch_1108_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1180
                }
            }
        }
        case 0x65:
        {
// switch_1520_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_12C0
                case default:
                {
// switch_12C0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1338
// lab_1338
                    OP_JUMP lab_1568
                }
                case 0x0:
                {
// switch_12C0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1338
                }
                case 0x1:
                {
// switch_12C0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1338
                }
                case 0x2:
                {
// switch_12C0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1338
                }
                case 0x3:
                {
// switch_12C0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1338
                }
                case 0x4:
                {
// switch_12C0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1338
                }
                case 0x5:
                {
// switch_12C0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1338
                }
            }
        }
        case 0x66:
        {
// switch_1520_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1478
                case default:
                {
// switch_1478_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_14F0
// lab_14F0
                    OP_JUMP lab_1568
                }
                case 0x0:
                {
// switch_1478_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_14F0
                }
                case 0x1:
                {
// switch_1478_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_14F0
                }
                case 0x2:
                {
// switch_1478_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_14F0
                }
                case 0x3:
                {
// switch_1478_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_14F0
                }
                case 0x4:
                {
// switch_1478_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_14F0
                }
                case 0x5:
                {
// switch_1478_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_14F0
                }
            }
        }
    }
}
// fun_1628
fun_1628() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0630(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_16D0
    pri = 1;
    return pri;
// lab_16D0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1718
fun_1718() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1768
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1628(var_8)
    arg_2 = pri;
// lab_1768
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0F08(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_17C8
fun_17C8() {
    OP_JUMP lab_17E0
// lab_17E0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1820
    pri = 0;
    return pri;
// lab_1820
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_17E0
    pri = 0;
    return pri;
}
// fun_1860
fun_1860() {
    var_8 = 0;
    pri = fun_17C8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1910
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1910
    pri = 0;
    return pri;
}
// fun_1920
fun_1920() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1950
fun_1950() {
    pri = arg_1;
    OP_JNZ lab_1998
    var_8 = 648;
    pri = GetFnvHash64(var_8)
    arg_1 = pri;
// lab_1998
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
// fun_19F0
fun_19F0() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_1A68
fun_1A68() {
    var_8 = 0;
    pri = fun_19F0()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1AE8
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_1AE8
    pri = 1;
    return pri;
// lab_1AE8
    var_8 = 0;
    pri = fun_19F0()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_1B28
    pri = 1;
    return pri;
// lab_1B28
    var_8 = 0;
    pri = fun_19F0()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_1B58
fun_1B58() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_1BA8
fun_1BA8() {
    OP_JUMP lab_1BC0
// lab_1BC0
    pri = EvCameraMoveWait_()
    OP_JZER lab_1BF8
    pri = 0;
    return pri;
// lab_1BF8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1BC0
    pri = 0;
    return pri;
}
// fun_1C38
fun_1C38() {
    pri = arg_6;
    OP_JNZ lab_1C70
    var_8 = 0;
    pri = fun_0B40()
// lab_1C70
    pri = arg_1;
    switch (pri) {
// switch_31D8
        case default:
        {
// switch_31D8_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3528
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3528
            pri = 1;
            OP_JUMP lab_3530
// lab_3528
            pri = 0;
// lab_3530
            OP_JZER lab_3688
            var_16 = 8328;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0630(var_24, var_16)
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
            OP_JUMP lab_36E8
// lab_3688
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
            pri = fun_0138(var_16, var_8, var_0)
// lab_36E8
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3748
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_37A8
// lab_3748
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_37A8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_37A8
            pri = arg_2;
            OP_JZER lab_37E8
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_37E8
            var_8 = 0;
            pri = fun_0B80()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_31D8_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x1:
        {
// switch_31D8_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x2:
        {
// switch_31D8_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x3:
        {
// switch_31D8_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x4:
        {
// switch_31D8_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x5:
        {
// switch_31D8_case_0x5
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
            pri = fun_08A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31D8_case_default
        }
        case 0x6:
        {
// switch_31D8_case_0x6
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
            pri = fun_08A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31D8_case_default
        }
        case 0x7:
        {
// switch_31D8_case_0x7
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
            pri = fun_08A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31D8_case_default
        }
        case 0x8:
        {
// switch_31D8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x9:
        {
// switch_31D8_case_0x9
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
            pri = fun_08A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31D8_case_default
        }
        case 0xa:
        {
// switch_31D8_case_0xa
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
            pri = fun_08A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31D8_case_default
        }
        case 0xb:
        {
// switch_31D8_case_0xb
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
            pri = fun_08A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31D8_case_default
        }
        case 0xc:
        {
// switch_31D8_case_0xc
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
            pri = fun_08A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31D8_case_default
        }
        case 0xd:
        {
// switch_31D8_case_0xd
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
            pri = fun_08A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31D8_case_default
        }
        case 0xe:
        {
// switch_31D8_case_0xe
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
            pri = fun_08A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31D8_case_default
        }
        case 0xf:
        {
// switch_31D8_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x10:
        {
// switch_31D8_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x11:
        {
// switch_31D8_case_0x11
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
            pri = fun_08A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31D8_case_default
        }
        case 0x12:
        {
// switch_31D8_case_0x12
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
            pri = fun_08A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31D8_case_default
        }
        case 0x13:
        {
// switch_31D8_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x14:
        {
// switch_31D8_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x15:
        {
// switch_31D8_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x16:
        {
// switch_31D8_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x17:
        {
// switch_31D8_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x18:
        {
// switch_31D8_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x19:
        {
// switch_31D8_case_0x19
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
            pri = fun_08A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31D8_case_default
        }
        case 0x1a:
        {
// switch_31D8_case_0x1a
            var_8 = 1;
            var_16 = 5888;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_05F0(var_24, var_16, var_8)
            var_40 = 6024;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_05B8(var_48, var_40)
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
            pri = fun_08A0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_31D8_case_default
        }
        case 0x1b:
        {
// switch_31D8_case_0x1b
            var_8 = 3;
            var_16 = 6112;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_05F0(var_24, var_16, var_8)
            var_40 = 6248;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_05B8(var_48, var_40)
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
            pri = fun_08A0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_31D8_case_default
        }
        case 0x1c:
        {
// switch_31D8_case_0x1c
            var_8 = 2;
            var_16 = 6336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_05F0(var_24, var_16, var_8)
            var_40 = 6472;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_05B8(var_48, var_40)
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
            pri = fun_08A0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_31D8_case_default
        }
        case 0x1d:
        {
// switch_31D8_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6560;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x1e:
        {
// switch_31D8_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6696;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x1f:
        {
// switch_31D8_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6832;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x20:
        {
// switch_31D8_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6968;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x21:
        {
// switch_31D8_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7088;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x22:
        {
// switch_31D8_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7208;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x23:
        {
// switch_31D8_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7344;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x24:
        {
// switch_31D8_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7480;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x25:
        {
// switch_31D8_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7616;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x26:
        {
// switch_31D8_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7752;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x27:
        {
// switch_31D8_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7896;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x28:
        {
// switch_31D8_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8040;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
        case 0x29:
        {
// switch_31D8_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8184;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31D8_case_default
        }
    }
}
// fun_3818
fun_3818() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_3A28(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 8448;
    OP_ADDR_ALT -256
    OP_MOVS 56
    pri = 0;
    OP_ADDR_ALT -384
    OP_FILL 128
    OP_PUSH_P_ADR -384
    pri = arg_1;
    OP_ADD_P_C 1
    var_416 = pri;
    pri = NumericToString(var_416, var_408)
    OP_PUSH_P_ADR -384
    OP_PUSH_P_ADR -384
    var_424 = 8504;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 8520;
    OP_PUSH_P_ADR -384
    pri = ConcatString(var_432, var_424, var_416)
    OP_PUSH_P_ADR -256
    OP_PUSH_P_ADR -384
    OP_PUSH_P_ADR -256
    pri = ConcatString(var_432, var_424, var_416)
    var_440 = 0;
    OP_PUSH_P_ADR -256
    var_448 = arg_0;
    pri = AddParallelCommandMonitorState_(var_448, var_440, var_432)
    pri = arg_2;
    OP_JZER lab_3A10
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_3A10
    pri = 0;
    return pri;
}
// fun_3A28
fun_3A28() {
    var_8 = arg_1;
    var_16 = 8568;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_05F0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_3A70
fun_3A70() {
    pri = 8672;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_3AF8
// lab_3AF8
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_3C78
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_3C68
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_3BB8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_3BB8
    pri = 0;
    OP_JUMP lab_3BC0
// lab_3C78
    pri = 0;
    return pri;
// lab_3C68
    OP_JUMP lab_3AF0
// lab_3AF0
    OP_INC_P_S -936
// lab_3BB8
    pri = 1;
// lab_3BC0
    OP_JZER lab_3C38
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_3C30
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_3C38
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_3C30
}
// fun_3C98
fun_3C98() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_3D30
    var_8 = 1;
    var_16 = 0;
    var_24 = 9592;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0280(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_02F0()
    var_56 = 0;
    pri = fun_0EA8()
// lab_3D30
    pri = arg_4;
    OP_JZER lab_3D68
    var_8 = 1;
    var_16 = 8;
    pri = fun_0ED0(var_8)
// lab_3D68
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_3DC0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_3DC0
    pri = 0;
    OP_JUMP lab_3DC8
// lab_3DC0
    pri = 1;
// lab_3DC8
    OP_JZER lab_3E90
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_3E90
    var_16 = 0;
    pri = fun_0380()
    OP_JZER lab_3E68
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_0DE8(var_32, var_24)
    OP_JUMP lab_3E90
// lab_3E90
    pri = arg_2;
    OP_JZER lab_3F68
    var_8 = 0;
    pri = fun_0380()
    OP_JZER lab_3F38
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0BC0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0400(var_40)
    OP_JUMP lab_3F68
// lab_3F68
    pri = arg_3;
    OP_JZER lab_3FA0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0E70(var_8)
// lab_3FA0
    pri = 0;
    return pri;
// lab_3F38
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0BC0(var_16, var_8)
// lab_3E68
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0DE8(var_16, var_8)
}
// fun_3FB0
fun_3FB0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_3A70(var_24)
    pri = 0;
    return pri;
}
// fun_4018
fun_4018() {
    pri = g_mode;
    switch (pri) {
// switch_4100
        case default:
        {
// switch_4100_case_default
            pri = CommandNOP()
            OP_JUMP lab_4158
// lab_4158
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4100_case_0x0
            var_8 = 0;
            pri = fun_4168()
            OP_JUMP lab_4158
        }
        case 0x2bd763276f11313c:
        {
// switch_4100_case_0x2bd763276f11313c
            var_8 = 0;
            pri = fun_4A30()
            OP_JUMP lab_4158
        }
        case 0x3e07a30951a3e1d9:
        {
// switch_4100_case_0x3e07a30951a3e1d9
            var_8 = 0;
            pri = fun_4A78()
            OP_JUMP lab_4158
        }
        case 0x4acebd2afa60bb60:
        {
// switch_4100_case_0x4acebd2afa60bb60
            var_8 = 0;
            pri = fun_4940()
            OP_JUMP lab_4158
        }
    }
}
// fun_4168
fun_4168() {
    pri = 0;
    return pri;
}
// fun_4180
fun_4180() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_3C98(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_41D8
fun_41D8() {
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
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 9640;
    pri = SoundPostEvent(var_24)
    var_32 = 0;
    var_40 = 4631966290499390669;
    var_48 = 0;
    OP_PUSH5_C 4670197898591464325, 4660736331654103040, 4670358768137724232, 4670211812911113830, 4660742181055962808
    var_56 = 4670359743954293883;
    var_64 = 1;
    pri = EvCameraMove(var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_72 = 0;
    pri = fun_1BA8()
    var_80 = 1;
    var_88 = 1;
    OP_PUSH4_C 4639882774219377869, 4670237898824482816, 4670359917127375258, 8802641224559852288
    var_96 = 48;
    pri = fun_03A8(var_88, var_80, var_72, var_64, var_56, var_48)
    var_104 = 0;
    var_112 = 0;
    var_120 = -4374024216485124166;
    var_128 = 24;
    pri = fun_3818(var_120, var_112, var_104)
    var_136 = 1;
    var_144 = 8;
    pri = fun_0060(var_136)
    var_152 = 0;
    var_160 = 4631966290499390669;
    var_168 = 3;
    OP_PUSH5_C 4670193539027860193, 4660736331654103040, 4670374309734582845, 4670207453347509699, 4660742181055962808
    var_176 = 4670375285551152497;
    var_184 = 15;
    pri = EvCameraMove(var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_192 = 30;
    var_200 = 8;
    pri = fun_0060(var_192)
    var_208 = 1;
    var_216 = 8;
    pri = fun_0060(var_208)
    var_224 = -4374024216485124166;
    var_232 = 8;
    pri = fun_0668(var_224)
    var_240 = 0;
    var_248 = 0;
    var_256 = 0;
    var_264 = 0;
    OP_PUSH2_C 8802641224559852288, -4374024216485124166
    var_272 = 48;
    pri = fun_0438(var_264, var_256, var_248, var_240, var_232, var_224)
    var_280 = -4374024216485124166;
    var_288 = 8;
    pri = fun_0490(var_280)
    var_296 = 1;
    var_304 = -1;
    var_312 = -1;
    var_320 = 3;
    var_328 = 0;
    var_336 = 10;
    var_344 = -4374024216485124166;
    var_352 = 56;
    pri = fun_1C38(var_344, var_336, var_328, var_320, var_312, var_304, var_296)
    var_360 = 0;
    var_368 = 3;
    var_376 = 0;
    var_384 = 100;
    var_392 = -1;
    OP_PUSH2_C 71956615966372321, -4374024216485124166
    var_400 = 56;
    pri = fun_1718(var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_408 = 1;
    var_416 = 8;
    pri = fun_1860(var_408)
    var_424 = -4374024216485124166;
    var_432 = 8;
    pri = fun_0668(var_424)
    var_440 = 0;
    var_448 = 4630207071894949069;
    var_456 = 0;
    OP_PUSH5_C 4670249938476806963, 4660665259222483599, 4670376242126268662, 4670278638479070986, 4660674231237366252
    var_464 = 4670390090475220500;
    var_472 = 1;
    pri = EvCameraMove(var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416, var_408, var_400)
    var_480 = 0;
    pri = fun_1BA8()
    var_488 = 0;
    var_496 = 1;
    var_504 = -4374024216485124166;
    var_512 = 24;
    pri = fun_3818(var_504, var_496, var_488)
    var_520 = 1;
    var_528 = 8;
    pri = fun_0060(var_520)
    var_536 = -4374024216485124166;
    var_544 = 8;
    pri = fun_0668(var_536)
    var_552 = 0;
    var_560 = 3;
    var_568 = 0;
    var_576 = 100;
    var_584 = -1;
    OP_PUSH2_C 71953317431487688, -4374024216485124166
    var_592 = 56;
    pri = fun_1718(var_584, var_576, var_568, var_560, var_552, var_544, var_536)
    var_600 = 1;
    var_608 = 8;
    pri = fun_1860(var_600)
    var_616 = 0;
    var_624 = 3;
    var_632 = 0;
    var_640 = 100;
    var_648 = -1;
    OP_PUSH2_C 71954416943115899, -4374024216485124166
    var_656 = 56;
    pri = fun_1718(var_648, var_640, var_632, var_624, var_616, var_608, var_600)
    var_664 = 1;
    var_672 = 8;
    pri = fun_1860(var_664)
    var_680 = 0;
    pri = fun_1920()
    var_688 = 11;
    var_696 = 0;
    var_704 = 0;
    var_712 = 0;
    var_720 = 133;
    var_728 = 40;
    pri = fun_1950(var_720, var_712, var_704, var_696, var_688)
    var_736 = 0;
    pri = fun_1A68()
    OP_JZER lab_48A0
    var_744 = 0;
    pri = fun_1B58()
// lab_48A0
    pri = 0;
    return pri;
}
// fun_48B0
fun_48B0() {
    pri = 0;
    return pri;
}
// fun_48C8
fun_48C8() {
    var_8 = 1090;
    var_16 = 8;
    pri = fun_3FB0(var_8)
    pri = 0;
    return pri;
}
// fun_4900
fun_4900() {
    var_8 = 5403845847924942750;
    pri = ReserveScript(var_8)
    pri = 0;
    return pri;
}
// fun_4940
fun_4940() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_4180()
    var_16 = 0;
    pri = fun_41D8()
    var_24 = 0;
    pri = fun_41F0()
    var_32 = 0;
    pri = fun_4208()
    var_40 = 0;
    pri = fun_48B0()
    var_48 = 0;
    pri = fun_48C8()
    var_56 = 0;
    pri = fun_4900()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_4A30
fun_4A30() {
    var_8 = 0;
    pri = fun_41D8()
    var_16 = 0;
    pri = fun_48C8()
    pri = 0;
    return pri;
}
// fun_4A78
fun_4A78() {
    pri = 0;
    return pri;
}
