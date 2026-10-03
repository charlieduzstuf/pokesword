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
    OP_JUMP lab_02F8
// lab_02F8
    pri = FadeWait_()
    OP_JZER lab_0330
    pri = 0;
    return pri;
// lab_0330
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_02F8
    pri = 0;
    return pri;
}
// fun_0370
fun_0370() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_03C0
fun_03C0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0418
fun_0418() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0940(var_8)
    OP_JZER lab_0490
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0970(var_24)
    OP_JNZ lab_0490
    pri = 0;
    return pri;
// lab_0490
    OP_JUMP lab_04A0
// lab_04A0
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0500
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0500
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_04A0
    pri = 0;
    return pri;
}
// fun_0540
fun_0540() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0578
fun_0578() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_05B8
fun_05B8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_05F0
fun_05F0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0638
    pri = 0;
    return pri;
// lab_0638
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0678
// lab_0678
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0940(var_8)
    OP_JNZ lab_0700
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_06F0
    pri = 0;
    return pri;
// lab_0700
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0748
    pri = 0;
    return pri;
// lab_0748
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_07A8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_07F0(var_8)
    pri = 0;
    return pri;
// lab_07A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0678
    pri = 0;
    return pri;
// lab_06F0
    OP_JUMP lab_0748
}
// fun_07F0
fun_07F0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0828
fun_0828() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0868
fun_0868() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_08A8
fun_08A8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0900
fun_0900() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0940
fun_0940() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0970
fun_0970() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_09A0
fun_09A0() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_09D0
fun_09D0() {
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
// switch_0FE8
        case default:
        {
// switch_0FE8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1030
// lab_1030
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
            OP_JNZ lab_10D8
            var_88 = 0;
            pri = fun_1358()
// lab_10D8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_0FE8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0BD0
                case default:
                {
// switch_0BD0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0C48
// lab_0C48
                    OP_JUMP lab_1030
                }
                case 0x0:
                {
// switch_0BD0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0C48
                }
                case 0x1:
                {
// switch_0BD0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0C48
                }
                case 0x2:
                {
// switch_0BD0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0C48
                }
                case 0x3:
                {
// switch_0BD0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0C48
                }
                case 0x4:
                {
// switch_0BD0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0C48
                }
                case 0x5:
                {
// switch_0BD0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0C48
                }
            }
        }
        case 0x65:
        {
// switch_0FE8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_0D88
                case default:
                {
// switch_0D88_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0E00
// lab_0E00
                    OP_JUMP lab_1030
                }
                case 0x0:
                {
// switch_0D88_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_0E00
                }
                case 0x1:
                {
// switch_0D88_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_0E00
                }
                case 0x2:
                {
// switch_0D88_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_0E00
                }
                case 0x3:
                {
// switch_0D88_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0E00
                }
                case 0x4:
                {
// switch_0D88_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_0E00
                }
                case 0x5:
                {
// switch_0D88_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_0E00
                }
            }
        }
        case 0x66:
        {
// switch_0FE8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_0F40
                case default:
                {
// switch_0F40_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0FB8
// lab_0FB8
                    OP_JUMP lab_1030
                }
                case 0x0:
                {
// switch_0F40_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_0FB8
                }
                case 0x1:
                {
// switch_0F40_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_0FB8
                }
                case 0x2:
                {
// switch_0F40_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_0FB8
                }
                case 0x3:
                {
// switch_0F40_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0FB8
                }
                case 0x4:
                {
// switch_0F40_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_0FB8
                }
                case 0x5:
                {
// switch_0F40_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_0FB8
                }
            }
        }
    }
}
// fun_10F0
fun_10F0() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_05B8(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1198
    pri = 1;
    return pri;
// lab_1198
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_11E0
fun_11E0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1230
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_10F0(var_8)
    arg_2 = pri;
// lab_1230
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_09D0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1290
fun_1290() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_12E0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_10F0(var_8)
    arg_2 = pri;
// lab_12E0
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
    pri = fun_11E0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1358
fun_1358() {
    OP_JUMP lab_1370
// lab_1370
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_13B0
    pri = 0;
    return pri;
// lab_13B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1370
    pri = 0;
    return pri;
}
// fun_13F0
fun_13F0() {
    var_8 = 0;
    pri = fun_1358()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_14A0
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_14A0
    pri = 0;
    return pri;
}
// fun_14B0
fun_14B0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_14E0
fun_14E0() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1518
fun_1518() {
    OP_JUMP lab_1530
// lab_1530
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1578
    OP_JUMP lab_15A8
    OP_JUMP lab_1598
// lab_1578
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_15A8
    pri = 0;
    return pri;
// lab_1598
    OP_JUMP lab_1530
}
// fun_15B8
fun_15B8() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_15E8
fun_15E8() {
    pri = arg_1;
    OP_JNZ lab_1630
    var_8 = 336;
    pri = GetFnvHash64(var_8)
    arg_1 = pri;
// lab_1630
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
// fun_1688
fun_1688() {
    pri = arg_2;
    OP_JNZ lab_16D0
    var_8 = 344;
    pri = GetFnvHash64(var_8)
    arg_2 = pri;
// lab_16D0
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    pri = CallTrainerBattleCore(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_1728
fun_1728() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_17A0
fun_17A0() {
    var_8 = 0;
    pri = fun_1728()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1820
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_1820
    pri = 1;
    return pri;
// lab_1820
    var_8 = 0;
    pri = fun_1728()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_1860
    pri = 1;
    return pri;
// lab_1860
    var_8 = 0;
    pri = fun_1728()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_1890
fun_1890() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_18E0
fun_18E0() {
    var_16 = arg_0;
    pri = ConvertTrainerIDIndexToHash(var_16)
    var_8 = pri;
    var_24 = var_8;
    pri = FlagGet(var_24)
    return pri;
}
// fun_1948
fun_1948() {
    var_8 = arg_0;
    pri = ConvertTrainerIDIndexToHash(var_8)
    var_16 = pri;
    pri = GetTrainerUniqueHash_(var_16)
    return pri;
}
// fun_1998
fun_1998() {
    var_16 = arg_1;
    var_24 = arg_0;
    pri = GetTrainerMsgID(var_24, var_16)
    var_8 = pri;
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1948(var_40)
    var_16 = pri;
    var_56 = 0;
    var_64 = 3;
    var_72 = 0;
    var_80 = 100;
    var_88 = -1;
    var_96 = var_8;
    var_104 = var_16;
    var_112 = 56;
    pri = fun_1290(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_120 = 1;
    var_128 = 8;
    pri = fun_13F0(var_120)
    var_136 = 0;
    pri = fun_14B0()
    pri = 0;
    return pri;
}
// fun_1AA8
fun_1AA8() {
    OP_JUMP lab_1AC0
// lab_1AC0
    pri = IsEndTrainerHitCamera_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1B00
    pri = 0;
    return pri;
// lab_1B00
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1AC0
    pri = 0;
    return pri;
}
// fun_1B40
fun_1B40() {
    pri = arg_4;
    OP_JNZ lab_1B78
    var_8 = 0;
    pri = fun_0828()
// lab_1B78
    pri = arg_1;
    switch (pri) {
// switch_2F50
        case default:
        {
// switch_2F50_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 872;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0940(var_264)
            OP_JZER lab_3518
            pri = arg_3;
            switch (pri) {
// switch_34C0
                case default:
                {
// switch_34C0_case_default
                    OP_JUMP lab_37D0
// lab_37D0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_3840
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_3840
                    var_8 = 0;
                    pri = fun_0868()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_34C0_case_0x1
                    var_8 = 32;
                    var_16 = 1024;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_34C0_case_default
                }
                case 0x2:
                {
// switch_34C0_case_0x2
                    var_8 = 32;
                    var_16 = 1128;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_34C0_case_default
                }
                case 0x3:
                {
// switch_34C0_case_0x3
                    var_8 = 32;
                    var_16 = 928;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_34C0_case_default
                }
            }
// lab_3518
            pri = arg_1;
            OP_JZER lab_3568
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_3568
            pri = 0;
            OP_JUMP lab_3570
// lab_3568
            pri = 1;
// lab_3570
            OP_JZER lab_35D8
            var_8 = 1224;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_05B8(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_35D8
            pri = 1;
            OP_JUMP lab_35E0
// lab_35D8
            pri = 0;
// lab_35E0
            OP_JZER lab_3630
            var_8 = 32;
            var_16 = 1320;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_37D0
// lab_3630
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_3698
            var_8 = 32;
            var_16 = 1480;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_37D0
// lab_3698
            var_16 = 1600;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_05B8(var_24, var_16)
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
            var_176 = 1704;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 1720;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_2F50_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x1:
        {
// switch_2F50_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x2:
        {
// switch_2F50_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x3:
        {
// switch_2F50_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x4:
        {
// switch_2F50_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x5:
        {
// switch_2F50_case_0x5
            var_8 = 1;
            var_16 = 352;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0578(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_07F0(var_40)
            OP_JUMP switch_2F50_case_default
        }
        case 0x6:
        {
// switch_2F50_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x7:
        {
// switch_2F50_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x8:
        {
// switch_2F50_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x9:
        {
// switch_2F50_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0xa:
        {
// switch_2F50_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0xb:
        {
// switch_2F50_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0xc:
        {
// switch_2F50_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0xd:
        {
// switch_2F50_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0xe:
        {
// switch_2F50_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0xf:
        {
// switch_2F50_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x10:
        {
// switch_2F50_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x11:
        {
// switch_2F50_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x12:
        {
// switch_2F50_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x13:
        {
// switch_2F50_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x14:
        {
// switch_2F50_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x15:
        {
// switch_2F50_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x16:
        {
// switch_2F50_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x17:
        {
// switch_2F50_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x18:
        {
// switch_2F50_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x19:
        {
// switch_2F50_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x1a:
        {
// switch_2F50_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x1b:
        {
// switch_2F50_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x1c:
        {
// switch_2F50_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x1d:
        {
// switch_2F50_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x1e:
        {
// switch_2F50_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x1f:
        {
// switch_2F50_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x20:
        {
// switch_2F50_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x21:
        {
// switch_2F50_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x22:
        {
// switch_2F50_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x23:
        {
// switch_2F50_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x24:
        {
// switch_2F50_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x25:
        {
// switch_2F50_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x26:
        {
// switch_2F50_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x27:
        {
// switch_2F50_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x28:
        {
// switch_2F50_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x29:
        {
// switch_2F50_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x2a:
        {
// switch_2F50_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x2b:
        {
// switch_2F50_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x2c:
        {
// switch_2F50_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x2d:
        {
// switch_2F50_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x2e:
        {
// switch_2F50_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x2f:
        {
// switch_2F50_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x30:
        {
// switch_2F50_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x31:
        {
// switch_2F50_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x32:
        {
// switch_2F50_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x33:
        {
// switch_2F50_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x34:
        {
// switch_2F50_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x35:
        {
// switch_2F50_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x36:
        {
// switch_2F50_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x37:
        {
// switch_2F50_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x38:
        {
// switch_2F50_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x39:
        {
// switch_2F50_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x3a:
        {
// switch_2F50_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x3b:
        {
// switch_2F50_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x3c:
        {
// switch_2F50_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 448;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x3d:
        {
// switch_2F50_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 624;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
        case 0x3e:
        {
// switch_2F50_case_0x3e
            var_8 = 3;
            var_16 = 768;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0578(var_24, var_16, var_8)
            OP_JUMP switch_2F50_case_default
        }
    }
}
// fun_3870
fun_3870() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_3970
        case default:
        {
// switch_3970_case_default
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
// switch_3970_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_3970_case_default
        }
        case 0x1:
        {
// switch_3970_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_3970_case_default
        }
        case 0x2:
        {
// switch_3970_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_3970_case_default
        }
        case 0x3:
        {
// switch_3970_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_3970_case_default
        }
    }
}
// fun_3A30
fun_3A30() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_3A80
// lab_3A80
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 1768;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_3AF8
    OP_JUMP lab_3B28
// lab_3AF8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_3A80
// lab_3B28
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_3BB0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_1B40(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_09A0(var_56)
// lab_3BB0
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_3C18
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0900(var_24, var_16)
// lab_3C18
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0900(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_3CD8
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_05F0(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0370(var_88, var_80, var_72, var_64, var_56)
// lab_3CD8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_3D18
    pri = 0;
    return pri;
// lab_3D18
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_3E60
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 1888;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0540(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_3E28
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_3E60
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0418(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0418(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_05F0(var_40)
    pri = 0;
    return pri;
// lab_3E28
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0900(var_16, var_8)
}
// fun_3EE8
fun_3EE8() {
    pri = g_mode;
    switch (pri) {
// switch_3FA8
        case default:
        {
// switch_3FA8_case_default
            pri = CommandNOP()
            OP_JUMP lab_3FF0
// lab_3FF0
            pri = 0;
            return pri;
        }
        case 0x91a1499231e51107:
        {
// switch_3FA8_case_0x91a1499231e51107
            var_8 = 0;
            pri = fun_46D0()
            OP_JUMP lab_3FF0
        }
        case 0x0:
        {
// switch_3FA8_case_0x0
            var_8 = 0;
            pri = fun_4000()
            OP_JUMP lab_3FF0
        }
        case 0x233d326bbb672632:
        {
// switch_3FA8_case_0x233d326bbb672632
            var_8 = 0;
            pri = fun_4018()
            OP_JUMP lab_3FF0
        }
    }
}
// fun_4000
fun_4000() {
    pri = 0;
    return pri;
}
// fun_4018
fun_4018() {
    var_8 = 2024;
    var_16 = 8;
    pri = fun_14E0(var_8)
    var_24 = 0;
    pri = fun_1518()
    var_40 = 0;
    pri = TempWorkGet(var_40)
    var_48 = pri;
    pri = ConvertTrainerIDHashToIndex(var_48)
    var_8 = pri;
    pri = GetTargetFieldObjectID()
    var_16 = pri;
    var_72 = 1;
    pri = TempWorkGet(var_72)
    var_24 = pri;
    var_88 = 2;
    pri = TempWorkGet(var_88)
    var_96 = pri;
    pri = ConvertTrainerIDHashToIndex(var_96)
    var_32 = pri;
    pri = var_24;
    OP_JZER lab_41B0
    pri = var_32;
    OP_ZERO_ALT 
    OP_XCHG 
    OP_JSGEQ lab_41B0
    pri = 1;
    OP_JUMP lab_41B8
// lab_41B0
    pri = 0;
// lab_41B8
    var_40 = pri;
    var_8 = 8802641224559852288;
    pri = StartTrainerPauseMotion(var_8)
    var_16 = var_16;
    pri = StartTrainerPauseMotion(var_16)
    pri = var_40;
    OP_JZER lab_4240
    var_24 = var_24;
    pri = StartTrainerPauseMotion(var_24)
// lab_4240
    var_8 = 1;
    var_16 = var_16;
    pri = StartTrainerHitAction(var_16, var_8)
    pri = var_40;
    OP_JZER lab_42A8
    var_24 = 0;
    var_32 = var_24;
    pri = StartTrainerHitAction(var_32, var_24)
// lab_42A8
    var_8 = var_16;
    pri = StartTrainerBgm(var_8)
    var_16 = 15;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = var_16;
    pri = StartTrainerHitCamera(var_32)
    var_40 = 2;
    var_48 = 8;
    pri = fun_0060(var_40)
    var_56 = 8802641224559852288;
    pri = EndTrainerPauseMotion(var_56)
    var_64 = var_16;
    pri = EndTrainerPauseMotion(var_64)
    pri = var_40;
    OP_JZER lab_43A8
    var_72 = var_24;
    pri = EndTrainerPauseMotion(var_72)
// lab_43A8
    var_8 = 3;
    var_16 = var_16;
    pri = StartTrainerFightMotion(var_16, var_8)
    var_24 = 1;
    var_32 = 1;
    var_40 = -1;
    var_48 = 8802641224559852288;
    var_56 = var_16;
    var_64 = 40;
    pri = fun_08A8(var_56, var_48, var_40, var_32, var_24)
    pri = var_40;
    OP_JZER lab_44A0
    var_72 = 3;
    var_80 = var_24;
    pri = StartTrainerFightMotion(var_80, var_72)
    var_88 = 1;
    var_96 = 1;
    var_104 = -1;
    var_112 = 8802641224559852288;
    var_120 = var_24;
    var_128 = 40;
    pri = fun_08A8(var_120, var_112, var_104, var_96, var_88)
// lab_44A0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_4520
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    var_32 = var_16;
    var_40 = 8802641224559852288;
    var_48 = 40;
    pri = fun_08A8(var_40, var_32, var_24, var_16, var_8)
    OP_JUMP lab_45E0
// lab_4520
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_05F0(var_8)
    var_24 = 0;
    var_32 = 0;
    var_40 = 1;
    var_48 = 0;
    var_56 = var_16;
    var_64 = 8802641224559852288;
    var_72 = 48;
    pri = fun_03C0(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 1;
    var_88 = 1;
    var_96 = -1;
    var_104 = var_16;
    var_112 = 8802641224559852288;
    var_120 = 40;
    pri = fun_08A8(var_112, var_104, var_96, var_88, var_80)
// lab_45E0
    var_8 = 0;
    pri = fun_1AA8()
    var_16 = 7;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = var_24;
    var_40 = var_32;
    var_48 = var_8;
    var_56 = 24;
    pri = fun_4E08(var_48, var_40, var_32)
    var_64 = 0;
    pri = fun_15B8()
    pri = IsPlayerRideBicycle()
    OP_JZER lab_46B8
    var_72 = -1;
    var_80 = 8802641224559852288;
    var_88 = 16;
    pri = fun_0900(var_80, var_72)
// lab_46B8
    pri = 0;
    return pri;
}
// fun_46D0
fun_46D0() {
    var_8 = 2160;
    var_16 = 8;
    pri = fun_14E0(var_8)
    var_24 = 0;
    pri = fun_1518()
    var_40 = 0;
    pri = TempWorkGet(var_40)
    var_48 = pri;
    pri = ConvertTrainerIDHashToIndex(var_48)
    var_8 = pri;
    pri = GetTargetFieldObjectID()
    var_16 = pri;
    var_72 = 1;
    pri = TempWorkGet(var_72)
    var_24 = pri;
    var_88 = 2;
    pri = TempWorkGet(var_88)
    var_96 = pri;
    pri = ConvertTrainerIDHashToIndex(var_96)
    var_32 = pri;
    pri = var_24;
    OP_JZER lab_4868
    pri = var_32;
    OP_ZERO_ALT 
    OP_XCHG 
    OP_JSGEQ lab_4868
    pri = 1;
    OP_JUMP lab_4870
// lab_4868
    pri = 0;
// lab_4870
    var_40 = pri;
    var_8 = var_8;
    var_16 = 8;
    pri = fun_18E0(var_8)
    OP_JZER lab_4928
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 1;
    var_56 = 1;
    var_64 = var_16;
    var_72 = 48;
    pri = fun_3870(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 2;
    var_88 = var_8;
    var_96 = 16;
    pri = fun_1998(var_88, var_80)
    OP_JUMP lab_4DA0
// lab_4928
    pri = var_40;
    OP_JZER lab_4998
    var_8 = 0;
    var_16 = 1;
    pri = PokePartyGetCount(var_16, var_8)
    alt = 2;
    OP_JSGEQ lab_4998
    pri = 1;
    OP_JUMP lab_49A0
// lab_4998
    pri = 0;
// lab_49A0
    OP_JZER lab_4A30
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = var_16;
    var_56 = 48;
    pri = fun_3870(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 8;
    var_72 = var_8;
    var_80 = 16;
    pri = fun_1998(var_72, var_64)
    OP_JUMP lab_4DA0
// lab_4A30
    var_8 = 8802641224559852288;
    pri = StartTrainerPauseMotion(var_8)
    var_16 = var_16;
    pri = StartTrainerPauseMotion(var_16)
    pri = var_40;
    OP_JZER lab_4AB0
    var_24 = var_24;
    pri = StartTrainerPauseMotion(var_24)
// lab_4AB0
    var_8 = 1;
    var_16 = var_16;
    pri = StartTrainerHitAction(var_16, var_8)
    pri = var_40;
    OP_JZER lab_4B18
    var_24 = 0;
    var_32 = var_24;
    pri = StartTrainerHitAction(var_32, var_24)
// lab_4B18
    var_8 = var_16;
    pri = StartTrainerBgm(var_8)
    var_16 = 15;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = var_16;
    pri = StartTrainerHitCamera(var_32)
    var_40 = 2;
    var_48 = 8;
    pri = fun_0060(var_40)
    var_56 = 8802641224559852288;
    pri = EndTrainerPauseMotion(var_56)
    var_64 = var_16;
    pri = EndTrainerPauseMotion(var_64)
    pri = var_40;
    OP_JZER lab_4C18
    var_72 = var_24;
    pri = EndTrainerPauseMotion(var_72)
// lab_4C18
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    var_32 = var_16;
    var_40 = 8802641224559852288;
    var_48 = 40;
    pri = fun_08A8(var_40, var_32, var_24, var_16, var_8)
    var_56 = 7;
    var_64 = var_16;
    pri = StartTrainerFightMotion(var_64, var_56)
    var_72 = 1;
    var_80 = 1;
    var_88 = -1;
    var_96 = 8802641224559852288;
    var_104 = var_16;
    var_112 = 40;
    pri = fun_08A8(var_104, var_96, var_88, var_80, var_72)
    pri = var_40;
    OP_JZER lab_4D58
    var_120 = 7;
    var_128 = var_24;
    pri = StartTrainerFightMotion(var_128, var_120)
    var_136 = 1;
    var_144 = 1;
    var_152 = -1;
    var_160 = 8802641224559852288;
    var_168 = var_24;
    var_176 = 40;
    pri = fun_08A8(var_168, var_160, var_152, var_144, var_136)
// lab_4D58
    var_8 = 0;
    pri = fun_1AA8()
    var_16 = var_24;
    var_24 = var_32;
    var_32 = var_8;
    var_40 = 24;
    pri = fun_4E08(var_32, var_24, var_16)
// lab_4DA0
    var_8 = 0;
    pri = fun_15B8()
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = var_16;
    var_48 = 32;
    pri = fun_3A30(var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_4E08
fun_4E08() {
    var_8 = 0;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1998(var_16, var_8)
    pri = arg_1;
    OP_ZERO_ALT 
    OP_JSLEQ lab_4EB8
    var_32 = arg_2;
    pri = StartTrainerHitCamera(var_32)
    var_40 = 0;
    pri = fun_1AA8()
    var_48 = 0;
    var_56 = arg_1;
    var_64 = 16;
    pri = fun_1998(var_56, var_48)
// lab_4EB8
    pri = arg_1;
    OP_ZERO_ALT 
    OP_JSLEQ lab_4F30
    var_8 = -1;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_1688(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_JUMP lab_4F70
// lab_4F30
    var_8 = -1;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_15E8(var_40, var_32, var_24, var_16, var_8)
// lab_4F70
    var_8 = 0;
    pri = fun_17A0()
    OP_JZER lab_4FC8
    var_16 = 0;
    pri = fun_15B8()
    var_24 = 0;
    pri = fun_1890()
// lab_4FC8
    var_8 = 2296;
    var_16 = 10;
    var_24 = 16;
    pri = fun_0280(var_16, var_8)
    var_32 = 0;
    pri = fun_02E0()
    pri = 0;
    return pri;
}
