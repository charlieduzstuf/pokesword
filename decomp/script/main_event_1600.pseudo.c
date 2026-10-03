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
    pri = FadeCheckOut_()
    return pri;
}
// fun_0408
fun_0408() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0438
fun_0438() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0470
// lab_0470
    var_8 = 0;
    pri = fun_0588()
    OP_JNZ lab_04A8
    OP_JUMP lab_04D8
// lab_04A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0470
// lab_04D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0508
// lab_0508
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0548
    pri = 0;
    return pri;
// lab_0548
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0508
    pri = 0;
    return pri;
}
// fun_0588
fun_0588() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_05B0
fun_05B0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0608
fun_0608() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0640
fun_0640() {
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
// fun_06B8
fun_06B8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0708
fun_0708() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0760
fun_0760() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F10(var_8)
    OP_JZER lab_07D8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0F40(var_24)
    OP_JNZ lab_07D8
    pri = 0;
    return pri;
// lab_07D8
    OP_JUMP lab_07E8
// lab_07E8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0848
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0848
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_07E8
    pri = 0;
    return pri;
}
// fun_0888
fun_0888() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_08C0
fun_08C0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateBoolParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0900
fun_0900() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0940
fun_0940() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0978
fun_0978() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_09C0
    pri = 0;
    return pri;
// lab_09C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0A00
// lab_0A00
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F10(var_8)
    OP_JNZ lab_0A88
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0A78
    pri = 0;
    return pri;
// lab_0A88
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0AD0
    pri = 0;
    return pri;
// lab_0AD0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0B30
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B78(var_8)
    pri = 0;
    return pri;
// lab_0B30
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A00
    pri = 0;
    return pri;
// lab_0A78
    OP_JUMP lab_0AD0
}
// fun_0B78
fun_0B78() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0BB0
fun_0BB0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0C00
    pri = 0;
    return pri;
// lab_0C00
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F10(var_8)
    OP_JZER lab_0D30
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C58
    OP_ZERO_P_S 64
// lab_0D30
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D68
    OP_CONST_S 64, 1
// lab_0D68
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DA0
    OP_CONST_S 72, 1
// lab_0DA0
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
// lab_0C58
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C80
    OP_ZERO_P_S 72
// lab_0C80
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
    OP_JUMP lab_0E40
// lab_0E40
    pri = 0;
    return pri;
}
// fun_0E50
fun_0E50() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E90
fun_0E90() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0ED0
fun_0ED0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F10
fun_0F10() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0F40
fun_0F40() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0F70
fun_0F70() {
    OP_JUMP lab_0F88
// lab_0F88
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1018
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1008
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0978(var_8)
    pri = 0;
    return pri;
// lab_1018
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_10A8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1098
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0978(var_8)
    pri = 0;
    return pri;
// lab_10A8
    pri = 0;
    return pri;
// lab_1098
    OP_JUMP lab_10B8
// lab_10B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0F88
    pri = 0;
    return pri;
// lab_1008
    OP_JUMP lab_10B8
}
// fun_10F8
fun_10F8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0978(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0F70(var_40)
    pri = 0;
    return pri;
}
// fun_1180
fun_1180() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_11B8
fun_11B8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_11E0
fun_11E0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1218
fun_1218() {
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
// switch_1830
        case default:
        {
// switch_1830_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1878
// lab_1878
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
            OP_JNZ lab_1920
            var_88 = 0;
            pri = fun_1AD8()
// lab_1920
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1830_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1418
                case default:
                {
// switch_1418_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1490
// lab_1490
                    OP_JUMP lab_1878
                }
                case 0x0:
                {
// switch_1418_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1490
                }
                case 0x1:
                {
// switch_1418_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1490
                }
                case 0x2:
                {
// switch_1418_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1490
                }
                case 0x3:
                {
// switch_1418_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1490
                }
                case 0x4:
                {
// switch_1418_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1490
                }
                case 0x5:
                {
// switch_1418_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1490
                }
            }
        }
        case 0x65:
        {
// switch_1830_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_15D0
                case default:
                {
// switch_15D0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1648
// lab_1648
                    OP_JUMP lab_1878
                }
                case 0x0:
                {
// switch_15D0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1648
                }
                case 0x1:
                {
// switch_15D0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1648
                }
                case 0x2:
                {
// switch_15D0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1648
                }
                case 0x3:
                {
// switch_15D0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1648
                }
                case 0x4:
                {
// switch_15D0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1648
                }
                case 0x5:
                {
// switch_15D0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1648
                }
            }
        }
        case 0x66:
        {
// switch_1830_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1788
                case default:
                {
// switch_1788_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1800
// lab_1800
                    OP_JUMP lab_1878
                }
                case 0x0:
                {
// switch_1788_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1800
                }
                case 0x1:
                {
// switch_1788_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1800
                }
                case 0x2:
                {
// switch_1788_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1800
                }
                case 0x3:
                {
// switch_1788_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1800
                }
                case 0x4:
                {
// switch_1788_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1800
                }
                case 0x5:
                {
// switch_1788_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1800
                }
            }
        }
    }
}
// fun_1938
fun_1938() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0940(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_19E0
    pri = 1;
    return pri;
// lab_19E0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1A28
fun_1A28() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1A78
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1938(var_8)
    arg_2 = pri;
// lab_1A78
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1218(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1AD8
fun_1AD8() {
    OP_JUMP lab_1AF0
// lab_1AF0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1B30
    pri = 0;
    return pri;
// lab_1B30
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1AF0
    pri = 0;
    return pri;
}
// fun_1B70
fun_1B70() {
    var_8 = 0;
    pri = fun_1AD8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1C20
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1C20
    pri = 0;
    return pri;
}
// fun_1C30
fun_1C30() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1C60
fun_1C60() {
    pri = arg_1;
    OP_JNZ lab_1CA8
    var_8 = 648;
    pri = GetFnvHash64(var_8)
    arg_1 = pri;
// lab_1CA8
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
// fun_1D00
fun_1D00() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_1D78
fun_1D78() {
    var_8 = 0;
    pri = fun_1D00()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1DF8
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_1DF8
    pri = 1;
    return pri;
// lab_1DF8
    var_8 = 0;
    pri = fun_1D00()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_1E38
    pri = 1;
    return pri;
// lab_1E38
    var_8 = 0;
    pri = fun_1D00()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_1E68
fun_1E68() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_1EB8
fun_1EB8() {
    OP_JUMP lab_1ED0
// lab_1ED0
    pri = EvCameraMoveWait_()
    OP_JZER lab_1F08
    pri = 0;
    return pri;
// lab_1F08
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1ED0
    pri = 0;
    return pri;
}
// fun_1F48
fun_1F48() {
    pri = arg_6;
    OP_JNZ lab_1F80
    var_8 = 0;
    pri = fun_0E50()
// lab_1F80
    pri = arg_1;
    switch (pri) {
// switch_34E8
        case default:
        {
// switch_34E8_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3838
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3838
            pri = 1;
            OP_JUMP lab_3840
// lab_3838
            pri = 0;
// lab_3840
            OP_JZER lab_3998
            var_16 = 8328;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0940(var_24, var_16)
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
            OP_JUMP lab_39F8
// lab_3998
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
// lab_39F8
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3A58
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3AB8
// lab_3A58
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3AB8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3AB8
            pri = arg_2;
            OP_JZER lab_3AF8
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3AF8
            var_8 = 0;
            pri = fun_0E90()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_34E8_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34E8_case_default
        }
        case 0x1:
        {
// switch_34E8_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34E8_case_default
        }
        case 0x2:
        {
// switch_34E8_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34E8_case_default
        }
        case 0x3:
        {
// switch_34E8_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34E8_case_default
        }
        case 0x4:
        {
// switch_34E8_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34E8_case_default
        }
        case 0x5:
        {
// switch_34E8_case_0x5
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34E8_case_default
        }
        case 0x6:
        {
// switch_34E8_case_0x6
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34E8_case_default
        }
        case 0x7:
        {
// switch_34E8_case_0x7
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34E8_case_default
        }
        case 0x8:
        {
// switch_34E8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34E8_case_default
        }
        case 0x9:
        {
// switch_34E8_case_0x9
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34E8_case_default
        }
        case 0xa:
        {
// switch_34E8_case_0xa
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34E8_case_default
        }
        case 0xb:
        {
// switch_34E8_case_0xb
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34E8_case_default
        }
        case 0xc:
        {
// switch_34E8_case_0xc
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34E8_case_default
        }
        case 0xd:
        {
// switch_34E8_case_0xd
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34E8_case_default
        }
        case 0xe:
        {
// switch_34E8_case_0xe
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34E8_case_default
        }
        case 0xf:
        {
// switch_34E8_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34E8_case_default
        }
        case 0x10:
        {
// switch_34E8_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34E8_case_default
        }
        case 0x11:
        {
// switch_34E8_case_0x11
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34E8_case_default
        }
        case 0x12:
        {
// switch_34E8_case_0x12
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34E8_case_default
        }
        case 0x13:
        {
// switch_34E8_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34E8_case_default
        }
        case 0x14:
        {
// switch_34E8_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34E8_case_default
        }
        case 0x15:
        {
// switch_34E8_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34E8_case_default
        }
        case 0x16:
        {
// switch_34E8_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34E8_case_default
        }
        case 0x17:
        {
// switch_34E8_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34E8_case_default
        }
        case 0x18:
        {
// switch_34E8_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34E8_case_default
        }
        case 0x19:
        {
// switch_34E8_case_0x19
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34E8_case_default
        }
        case 0x1a:
        {
// switch_34E8_case_0x1a
            var_8 = 1;
            var_16 = 5888;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0900(var_24, var_16, var_8)
            var_40 = 6024;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0888(var_48, var_40)
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
            pri = fun_0BB0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_34E8_case_default
        }
        case 0x1b:
        {
// switch_34E8_case_0x1b
            var_8 = 3;
            var_16 = 6112;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0900(var_24, var_16, var_8)
            var_40 = 6248;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0888(var_48, var_40)
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
            pri = fun_0BB0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_34E8_case_default
        }
        case 0x1c:
        {
// switch_34E8_case_0x1c
            var_8 = 2;
            var_16 = 6336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0900(var_24, var_16, var_8)
            var_40 = 6472;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0888(var_48, var_40)
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
            pri = fun_0BB0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_34E8_case_default
        }
        case 0x1d:
        {
// switch_34E8_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6560;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34E8_case_default
        }
        case 0x1e:
        {
// switch_34E8_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6696;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34E8_case_default
        }
        case 0x1f:
        {
// switch_34E8_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6832;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34E8_case_default
        }
        case 0x20:
        {
// switch_34E8_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6968;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34E8_case_default
        }
        case 0x21:
        {
// switch_34E8_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7088;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34E8_case_default
        }
        case 0x22:
        {
// switch_34E8_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7208;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34E8_case_default
        }
        case 0x23:
        {
// switch_34E8_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7344;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34E8_case_default
        }
        case 0x24:
        {
// switch_34E8_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7480;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34E8_case_default
        }
        case 0x25:
        {
// switch_34E8_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7616;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34E8_case_default
        }
        case 0x26:
        {
// switch_34E8_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7752;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34E8_case_default
        }
        case 0x27:
        {
// switch_34E8_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7896;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34E8_case_default
        }
        case 0x28:
        {
// switch_34E8_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8040;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34E8_case_default
        }
        case 0x29:
        {
// switch_34E8_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8184;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34E8_case_default
        }
    }
}
// fun_3B28
fun_3B28() {
    pri = arg_5;
    OP_JNZ lab_3B60
    var_8 = 0;
    pri = fun_0E50()
// lab_3B60
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3BB0
    OP_CONST_S -8, -1
// lab_3BB0
    pri = arg_1;
    switch (pri) {
// switch_5668
        case default:
        {
// switch_5668_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5B10
            var_520 = 28192;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0940(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5B10
            pri = 1;
            OP_JUMP lab_5B18
// lab_5B10
            pri = 0;
// lab_5B18
            OP_JZER lab_5B68
            var_8 = 64;
            var_16 = 28288;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5DC0
// lab_5B68
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5BD0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5BD0
            pri = 1;
            OP_JUMP lab_5BD8
// lab_5BD0
            pri = 0;
// lab_5BD8
            OP_JZER lab_5D60
            var_16 = 28464;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0940(var_24, var_16)
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
            OP_JUMP lab_5DC0
// lab_5D60
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
            pri = fun_0138(var_16, var_8, var_0)
// lab_5DC0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_5E30
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_5E30
            var_8 = 0;
            pri = fun_0E90()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5668_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x1:
        {
// switch_5668_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x2:
        {
// switch_5668_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x3:
        {
// switch_5668_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x4:
        {
// switch_5668_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x5:
        {
// switch_5668_case_0x5
            var_8 = 2;
            var_16 = 18448;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0900(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0B78(var_40)
            OP_JUMP switch_5668_case_default
        }
        case 0x6:
        {
// switch_5668_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x7:
        {
// switch_5668_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x8:
        {
// switch_5668_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x9:
        {
// switch_5668_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0xa:
        {
// switch_5668_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0xb:
        {
// switch_5668_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0xc:
        {
// switch_5668_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0xd:
        {
// switch_5668_case_0xd
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5668_case_default
        }
        case 0xe:
        {
// switch_5668_case_0xe
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5668_case_default
        }
        case 0xf:
        {
// switch_5668_case_0xf
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5668_case_default
        }
        case 0x10:
        {
// switch_5668_case_0x10
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5668_case_default
        }
        case 0x11:
        {
// switch_5668_case_0x11
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5668_case_default
        }
        case 0x12:
        {
// switch_5668_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x13:
        {
// switch_5668_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x14:
        {
// switch_5668_case_0x14
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5668_case_default
        }
        case 0x15:
        {
// switch_5668_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x16:
        {
// switch_5668_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x17:
        {
// switch_5668_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x18:
        {
// switch_5668_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x19:
        {
// switch_5668_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x1a:
        {
// switch_5668_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x1b:
        {
// switch_5668_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x1c:
        {
// switch_5668_case_0x1c
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5668_case_default
        }
        case 0x1d:
        {
// switch_5668_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x1e:
        {
// switch_5668_case_0x1e
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5668_case_default
        }
        case 0x1f:
        {
// switch_5668_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x20:
        {
// switch_5668_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x21:
        {
// switch_5668_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x22:
        {
// switch_5668_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x23:
        {
// switch_5668_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x24:
        {
// switch_5668_case_0x24
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5668_case_default
        }
        case 0x25:
        {
// switch_5668_case_0x25
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5668_case_default
        }
        case 0x26:
        {
// switch_5668_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x27:
        {
// switch_5668_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x28:
        {
// switch_5668_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x29:
        {
// switch_5668_case_0x29
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5668_case_default
        }
        case 0x2a:
        {
// switch_5668_case_0x2a
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5668_case_default
        }
        case 0x2b:
        {
// switch_5668_case_0x2b
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5668_case_default
        }
        case 0x2c:
        {
// switch_5668_case_0x2c
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5668_case_default
        }
        case 0x2d:
        {
// switch_5668_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x2e:
        {
// switch_5668_case_0x2e
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5668_case_default
        }
        case 0x2f:
        {
// switch_5668_case_0x2f
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5668_case_default
        }
        case 0x30:
        {
// switch_5668_case_0x30
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5668_case_default
        }
        case 0x31:
        {
// switch_5668_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x32:
        {
// switch_5668_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x33:
        {
// switch_5668_case_0x33
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5668_case_default
        }
        case 0x34:
        {
// switch_5668_case_0x34
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5668_case_default
        }
        case 0x35:
        {
// switch_5668_case_0x35
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5668_case_default
        }
        case 0x36:
        {
// switch_5668_case_0x36
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5668_case_default
        }
        case 0x37:
        {
// switch_5668_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x38:
        {
// switch_5668_case_0x38
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
            pri = fun_0BB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5668_case_default
        }
        case 0x39:
        {
// switch_5668_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x3a:
        {
// switch_5668_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x3b:
        {
// switch_5668_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x3c:
        {
// switch_5668_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27768;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x3d:
        {
// switch_5668_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27944;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
        case 0x3e:
        {
// switch_5668_case_0x3e
            var_8 = 4;
            var_16 = 28088;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0900(var_24, var_16, var_8)
            OP_JUMP switch_5668_case_default
        }
    }
}
// fun_5E60
fun_5E60() {
    pri = arg_4;
    OP_JNZ lab_5E98
    var_8 = 0;
    pri = fun_0E50()
// lab_5E98
    pri = arg_1;
    switch (pri) {
// switch_7270
        case default:
        {
// switch_7270_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29160;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0F10(var_264)
            OP_JZER lab_7838
            pri = arg_3;
            switch (pri) {
// switch_77E0
                case default:
                {
// switch_77E0_case_default
                    OP_JUMP lab_7AF0
// lab_7AF0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7B60
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7B60
                    var_8 = 0;
                    pri = fun_0E90()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_77E0_case_0x1
                    var_8 = 32;
                    var_16 = 29312;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_77E0_case_default
                }
                case 0x2:
                {
// switch_77E0_case_0x2
                    var_8 = 32;
                    var_16 = 29416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_77E0_case_default
                }
                case 0x3:
                {
// switch_77E0_case_0x3
                    var_8 = 32;
                    var_16 = 29216;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_77E0_case_default
                }
            }
// lab_7838
            pri = arg_1;
            OP_JZER lab_7888
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7888
            pri = 0;
            OP_JUMP lab_7890
// lab_7888
            pri = 1;
// lab_7890
            OP_JZER lab_78F8
            var_8 = 29512;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0940(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_78F8
            pri = 1;
            OP_JUMP lab_7900
// lab_78F8
            pri = 0;
// lab_7900
            OP_JZER lab_7950
            var_8 = 32;
            var_16 = 29608;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7AF0
// lab_7950
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_79B8
            var_8 = 32;
            var_16 = 29768;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7AF0
// lab_79B8
            var_16 = 29888;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0940(var_24, var_16)
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
// switch_7270_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x1:
        {
// switch_7270_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x2:
        {
// switch_7270_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x3:
        {
// switch_7270_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x4:
        {
// switch_7270_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x5:
        {
// switch_7270_case_0x5
            var_8 = 1;
            var_16 = 28640;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0900(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0B78(var_40)
            OP_JUMP switch_7270_case_default
        }
        case 0x6:
        {
// switch_7270_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x7:
        {
// switch_7270_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x8:
        {
// switch_7270_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x9:
        {
// switch_7270_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0xa:
        {
// switch_7270_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0xb:
        {
// switch_7270_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0xc:
        {
// switch_7270_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0xd:
        {
// switch_7270_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0xe:
        {
// switch_7270_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0xf:
        {
// switch_7270_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x10:
        {
// switch_7270_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x11:
        {
// switch_7270_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x12:
        {
// switch_7270_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x13:
        {
// switch_7270_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x14:
        {
// switch_7270_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x15:
        {
// switch_7270_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x16:
        {
// switch_7270_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x17:
        {
// switch_7270_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x18:
        {
// switch_7270_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x19:
        {
// switch_7270_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x1a:
        {
// switch_7270_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x1b:
        {
// switch_7270_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x1c:
        {
// switch_7270_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x1d:
        {
// switch_7270_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x1e:
        {
// switch_7270_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x1f:
        {
// switch_7270_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x20:
        {
// switch_7270_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x21:
        {
// switch_7270_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x22:
        {
// switch_7270_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x23:
        {
// switch_7270_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x24:
        {
// switch_7270_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x25:
        {
// switch_7270_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x26:
        {
// switch_7270_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x27:
        {
// switch_7270_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x28:
        {
// switch_7270_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x29:
        {
// switch_7270_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x2a:
        {
// switch_7270_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x2b:
        {
// switch_7270_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x2c:
        {
// switch_7270_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x2d:
        {
// switch_7270_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x2e:
        {
// switch_7270_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x2f:
        {
// switch_7270_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x30:
        {
// switch_7270_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x31:
        {
// switch_7270_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x32:
        {
// switch_7270_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x33:
        {
// switch_7270_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x34:
        {
// switch_7270_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x35:
        {
// switch_7270_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x36:
        {
// switch_7270_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x37:
        {
// switch_7270_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x38:
        {
// switch_7270_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x39:
        {
// switch_7270_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x3a:
        {
// switch_7270_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x3b:
        {
// switch_7270_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x3c:
        {
// switch_7270_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28736;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x3d:
        {
// switch_7270_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28912;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
        case 0x3e:
        {
// switch_7270_case_0x3e
            var_8 = 3;
            var_16 = 29056;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0900(var_24, var_16, var_8)
            OP_JUMP switch_7270_case_default
        }
    }
}
// fun_7B90
fun_7B90() {
    pri = 30056;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_7C18
// lab_7C18
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_7D98
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_7D88
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_7CD8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_7CD8
    pri = 0;
    OP_JUMP lab_7CE0
// lab_7D98
    pri = 0;
    return pri;
// lab_7D88
    OP_JUMP lab_7C10
// lab_7C10
    OP_INC_P_S -936
// lab_7CD8
    pri = 1;
// lab_7CE0
    OP_JZER lab_7D58
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_7D50
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_7D58
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_7D50
}
// fun_7DB8
fun_7DB8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_7E50
    var_8 = 1;
    var_16 = 0;
    var_24 = 30976;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_11B8()
// lab_7E50
    pri = arg_4;
    OP_JZER lab_7E88
    var_8 = 1;
    var_16 = 8;
    pri = fun_11E0(var_8)
// lab_7E88
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_7EE0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_7EE0
    pri = 0;
    OP_JUMP lab_7EE8
// lab_7EE0
    pri = 1;
// lab_7EE8
    OP_JZER lab_7FB0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_7FB0
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_7F88
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_10F8(var_32, var_24)
    OP_JUMP lab_7FB0
// lab_7FB0
    pri = arg_2;
    OP_JZER lab_8088
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_8058
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0ED0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0608(var_40)
    OP_JUMP lab_8088
// lab_8088
    pri = arg_3;
    OP_JZER lab_80C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1180(var_8)
// lab_80C0
    pri = 0;
    return pri;
// lab_8058
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0ED0(var_16, var_8)
// lab_7F88
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_10F8(var_16, var_8)
}
// fun_80D0
fun_80D0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_7B90(var_24)
    pri = 0;
    return pri;
}
// fun_8138
fun_8138() {
    pri = g_mode;
    switch (pri) {
// switch_81F8
        case default:
        {
// switch_81F8_case_default
            pri = CommandNOP()
            OP_JUMP lab_8240
// lab_8240
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_81F8_case_0x0
            var_8 = 0;
            pri = fun_8250()
            OP_JUMP lab_8240
        }
        case 0x38b9f12aefebf389:
        {
// switch_81F8_case_0x38b9f12aefebf389
            var_8 = 0;
            pri = fun_A520()
            OP_JUMP lab_8240
        }
        case 0x6039df278cdb17f5:
        {
// switch_81F8_case_0x6039df278cdb17f5
            var_8 = 0;
            pri = fun_A628()
            OP_JUMP lab_8240
        }
    }
}
// fun_8250
fun_8250() {
    pri = 0;
    return pri;
}
// fun_8268
fun_8268() {
    var_8 = 31024;
    pri = SoundPostEvent(var_8)
    pri = 0;
    return pri;
}
// fun_82A0
fun_82A0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_7DB8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_82F8
fun_82F8() {
    var_8 = 5330537022675391310;
    var_16 = 8;
    pri = fun_0408(var_8)
    pri = 0;
    return pri;
}
// fun_8338
fun_8338() {
    var_8 = 0;
    pri = fun_0438()
    pri = 0;
    return pri;
}
// fun_8368
fun_8368() {
    pri = EvCameraStart()
    var_8 = 0;
    var_16 = 4631952216750555136;
    var_24 = 0;
    OP_PUSH5_C 4662658288974571766, 4639352897575720059, 4657345943569390633, 4662961534281512387, 4637707676336846275
    var_32 = 4656928349053161308;
    var_40 = 1;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 1;
    var_56 = 8;
    pri = fun_0060(var_48)
    var_64 = 1;
    var_72 = 1;
    OP_PUSH4_C 4640537203540230144, 4662960643677093888, 4657350935352180736, 8802641224559852288
    var_80 = 48;
    pri = fun_05B0(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 1;
    var_96 = 1;
    OP_PUSH4_C 4640537203540230144, 4662960643677093888, 4657746759538180096, 1520678507684672495
    var_104 = 48;
    pri = fun_05B0(var_96, var_88, var_80, var_72, var_64, var_56)
    var_112 = 1;
    var_120 = 8;
    pri = fun_0060(var_112)
    var_128 = 1;
    var_136 = 0;
    var_144 = 4641240890982006784;
    var_152 = 0;
    var_160 = 0;
    OP_PUSH4_C 4662740741351538688, 4657350935352180736, 4607182418800017408, 8802641224559852288
    var_168 = 72;
    pri = fun_0640(var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_176 = 1;
    var_184 = 0;
    var_192 = 4641240890982006784;
    var_200 = 0;
    var_208 = 0;
    OP_PUSH4_C 4662740741351538688, 4657746759538180096, 4607182418800017408, 1520678507684672495
    var_216 = 72;
    pri = fun_0640(var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_224 = 31208;
    var_232 = 8;
    var_240 = 16;
    pri = fun_0280(var_232, var_224)
    var_248 = 0;
    pri = fun_0350()
    var_256 = 50;
    var_264 = 8;
    pri = fun_0060(var_256)
    var_272 = 1520678507684672495;
    var_280 = 8;
    pri = fun_0760(var_272)
    var_288 = 8802641224559852288;
    var_296 = 8;
    pri = fun_0760(var_288)
    var_304 = 0;
    var_312 = 4631952216750555136;
    var_320 = 0;
    OP_PUSH5_C 4662163365805560955, 4647404665206388818, 4656729843223882629, 4662981259520114688, 4651576476204961628
    var_328 = 4654883367376660726;
    var_336 = 1;
    pri = EvCameraMove(var_336, var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264)
    var_344 = 1;
    var_352 = 8;
    pri = fun_0060(var_344)
    var_360 = 1;
    var_368 = 0;
    var_376 = 4641240890982006784;
    var_384 = 0;
    var_392 = 0;
    OP_PUSH4_C 4661753379909795840, 4657788540980035584, 4611686018427387904, 1520678507684672495
    var_400 = 72;
    pri = fun_0640(var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_408 = 30;
    var_416 = 8;
    pri = fun_0060(var_408)
    var_424 = 0;
    var_432 = 3;
    var_440 = 0;
    var_448 = 101;
    var_456 = -1;
    OP_PUSH2_C 214352499461015518, 1520678507684672495
    var_464 = 56;
    pri = fun_1A28(var_456, var_448, var_440, var_432, var_424, var_416, var_408)
    var_472 = 1;
    var_480 = 8;
    pri = fun_1B70(var_472)
    var_488 = 0;
    pri = fun_1C30()
    var_496 = 1520678507684672495;
    var_504 = 8;
    pri = fun_0760(var_496)
    var_512 = 0;
    var_520 = 4631952216750555136;
    var_528 = 0;
    OP_PUSH5_C 4661706463748638638, 4636104676344479089, 4657725802846554685, 4662056031480457462, 4639705093140329267
    var_536 = 4657354189906598953;
    var_544 = 1;
    pri = EvCameraMove(var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472)
    var_552 = 1;
    var_560 = 1;
    OP_PUSH4_C 4640537203540230144, 4662154701653934080, 4657452090421936128, 8802641224559852288
    var_568 = 48;
    pri = fun_05B0(var_560, var_552, var_544, var_536, var_528, var_520)
    var_576 = 1;
    var_584 = 8;
    pri = fun_0060(var_576)
    var_592 = 1;
    var_600 = 0;
    var_608 = 4641240890982006784;
    var_616 = 0;
    var_624 = 0;
    OP_PUSH4_C 4661766574049329152, 4657590628887035904, 4607182418800017408, 8802641224559852288
    var_632 = 72;
    pri = fun_0640(var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560)
    var_640 = 8802641224559852288;
    var_648 = 8;
    pri = fun_0760(var_640)
    var_656 = 0;
    var_664 = 0;
    var_672 = 0;
    var_680 = 0;
    OP_PUSH2_C 8802641224559852288, 1520678507684672495
    var_688 = 48;
    pri = fun_0708(var_680, var_672, var_664, var_656, var_648, var_640)
    var_696 = 4;
    var_704 = 8;
    pri = fun_0060(var_696)
    var_712 = 0;
    var_720 = 0;
    var_728 = 0;
    var_736 = 0;
    OP_PUSH2_C 1520678507684672495, 8802641224559852288
    var_744 = 48;
    pri = fun_0708(var_736, var_728, var_720, var_712, var_704, var_696)
    var_752 = 0;
    var_760 = 3;
    var_768 = 0;
    var_776 = 100;
    var_784 = -1;
    OP_PUSH2_C 214351399949387307, 1520678507684672495
    var_792 = 56;
    pri = fun_1A28(var_784, var_776, var_768, var_760, var_752, var_744, var_736)
    var_800 = 1;
    var_808 = 8;
    pri = fun_1B70(var_800)
    var_816 = 0;
    pri = fun_1C30()
    var_824 = 1520678507684672495;
    var_832 = 8;
    pri = fun_0760(var_824)
    var_840 = 8802641224559852288;
    var_848 = 8;
    pri = fun_0760(var_840)
    var_856 = 0;
    var_864 = 4631952216750555136;
    var_872 = 0;
    OP_PUSH5_C 4661103018781966336, 4639289213862239273, 4657127932403835208, 4661199709834512957, 4639233622554338918
    var_880 = 4657089977262444380;
    var_888 = 1;
    pri = EvCameraMove(var_888, var_880, var_872, var_864, var_856, var_848, var_840, var_832, var_824, var_816)
    var_896 = 1;
    var_904 = 8;
    pri = fun_0060(var_896)
    var_912 = 0;
    var_920 = 4631952216750555136;
    var_928 = 3;
    OP_PUSH5_C 4661103018781966336, 4639289213862239273, 4657127932403835208, 4661409859491929784, 4639007738885528617
    var_936 = 4656935188015486075;
    var_944 = 60;
    pri = EvCameraMove(var_944, var_936, var_928, var_920, var_912, var_904, var_896, var_888, var_880, var_872)
    var_952 = 1;
    var_960 = 1;
    OP_PUSH4_C 4640537203540230144, 4661420227886579712, 4657410308980080640, 8802641224559852288
    var_968 = 48;
    pri = fun_05B0(var_960, var_952, var_944, var_936, var_928, var_920)
    var_976 = 1;
    var_984 = 1;
    OP_PUSH4_C 4640537203540230144, 4661420227886579712, 4657737963445157888, 1520678507684672495
    var_992 = 48;
    pri = fun_05B0(var_984, var_976, var_968, var_960, var_952, var_944)
    var_1000 = 1;
    var_1008 = 0;
    var_1016 = 4641240890982006784;
    var_1024 = 0;
    var_1032 = 0;
    OP_PUSH4_C 4660994716886630400, 4657410308980080640, 4607182418800017408, 8802641224559852288
    var_1040 = 72;
    pri = fun_0640(var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968)
    var_1048 = 1;
    var_1056 = 0;
    var_1064 = 4641240890982006784;
    var_1072 = 0;
    var_1080 = 0;
    OP_PUSH4_C 4661001313956397056, 4657737963445157888, 4607182418800017408, 1520678507684672495
    var_1088 = 72;
    pri = fun_0640(var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016)
    var_1096 = 8802641224559852288;
    var_1104 = 8;
    pri = fun_0760(var_1096)
    var_1112 = 1520678507684672495;
    var_1120 = 8;
    pri = fun_0760(var_1112)
    var_1128 = 1;
    var_1136 = 1;
    var_1144 = -1;
    var_1152 = -1;
    var_1160 = 0;
    var_1168 = 3;
    var_1176 = 1520678507684672495;
    var_1184 = 56;
    pri = fun_3B28(var_1176, var_1168, var_1160, var_1152, var_1144, var_1136, var_1128)
    var_1192 = 0;
    var_1200 = 3;
    var_1208 = 0;
    var_1216 = 100;
    var_1224 = -1;
    OP_PUSH2_C 214350300437759096, 1520678507684672495
    var_1232 = 56;
    pri = fun_1A28(var_1224, var_1216, var_1208, var_1200, var_1192, var_1184, var_1176)
    var_1240 = 1;
    var_1248 = 8;
    pri = fun_1B70(var_1240)
    var_1256 = 0;
    var_1264 = 3;
    var_1272 = 0;
    var_1280 = 100;
    var_1288 = -1;
    OP_PUSH2_C 214357997019156573, 1520678507684672495
    var_1296 = 56;
    pri = fun_1A28(var_1288, var_1280, var_1272, var_1264, var_1256, var_1248, var_1240)
    var_1304 = 1;
    var_1312 = 8;
    pri = fun_1B70(var_1304)
    var_1320 = 0;
    pri = fun_1C30()
    var_1328 = 1;
    var_1336 = 3;
    var_1344 = 0;
    var_1352 = 3;
    var_1360 = 1520678507684672495;
    var_1368 = 40;
    pri = fun_5E60(var_1360, var_1352, var_1344, var_1336, var_1328)
    var_1376 = 0;
    var_1384 = 4631952216750555136;
    var_1392 = 0;
    OP_PUSH5_C 4659879042437926093, 4641030488436915569, 4657577500718200259, 4661312882566359941, 4637433238234553385
    var_1400 = 4657571453404247491;
    var_1408 = 1;
    pri = EvCameraMove(var_1408, var_1400, var_1392, var_1384, var_1376, var_1368, var_1360, var_1352, var_1344, var_1336)
    var_1416 = 0;
    pri = fun_1EB8()
    var_1424 = 20;
    var_1432 = 8;
    pri = fun_0060(var_1424)
    var_1440 = 0;
    var_1448 = 4631952216750555136;
    var_1456 = 3;
    OP_PUSH5_C 4659879042437926093, 4641030488436915569, 4657577500718200259, 4660898157775479112, 4639047145382268109
    var_1464 = 4657573454515410043;
    var_1472 = 50;
    pri = EvCameraMove(var_1472, var_1464, var_1456, var_1448, var_1440, var_1432, var_1424, var_1416, var_1408, var_1400)
    var_1480 = 20;
    var_1488 = 8;
    pri = fun_0060(var_1480)
    var_1496 = 1;
    var_1504 = 31256;
    var_1512 = -4927740921529361424;
    var_1520 = 24;
    pri = fun_08C0(var_1512, var_1504, var_1496)
    var_1528 = 31368;
    pri = SoundPostEvent(var_1528)
    var_1536 = 1;
    var_1544 = 0;
    var_1552 = 4641240890982006784;
    var_1560 = 0;
    var_1568 = 0;
    OP_PUSH4_C 4660447160095997952, 4657570837677735936, 4607182418800017408, 5330537022675391310
    var_1576 = 72;
    pri = fun_0640(var_1568, var_1560, var_1552, var_1544, var_1536, var_1528, var_1520, var_1512, var_1504)
    var_1584 = 0;
    var_1592 = 3;
    var_1600 = 0;
    var_1608 = 101;
    var_1616 = -1;
    OP_PUSH2_C 4304428778328180669, 5330537022675391310
    var_1624 = 56;
    pri = fun_1A28(var_1616, var_1608, var_1600, var_1592, var_1584, var_1576, var_1568)
    var_1632 = 1;
    var_1640 = 8;
    pri = fun_1B70(var_1632)
    var_1648 = 0;
    pri = fun_1C30()
    var_1656 = 5330537022675391310;
    var_1664 = 8;
    pri = fun_0760(var_1656)
    var_1672 = 0;
    var_1680 = 31520;
    var_1688 = -4927740921529361424;
    var_1696 = 24;
    pri = fun_08C0(var_1688, var_1680, var_1672)
    var_1704 = 31632;
    pri = SoundPostEvent(var_1704)
    var_1712 = 0;
    var_1720 = 4631952216750555136;
    var_1728 = 0;
    OP_PUSH5_C 4660405202732282020, -4594116350381108756, 4657877865304676106, 4661726661777240883, 4653027127866184172
    var_1736 = 4657146338228484178;
    var_1744 = 1;
    pri = EvCameraMove(var_1744, var_1736, var_1728, var_1720, var_1712, var_1704, var_1696, var_1688, var_1680, var_1672)
    var_1752 = 1;
    var_1760 = 8;
    pri = fun_0060(var_1752)
    var_1768 = 31792;
    pri = SoundPostEvent(var_1768)
    var_1776 = 31920;
    pri = SoundPostEvent(var_1776)
    var_1784 = 32072;
    pri = SoundPostEvent(var_1784)
    var_1792 = 0;
    var_1800 = 0;
    var_1808 = 0;
    var_1816 = 101;
    var_1824 = -1;
    OP_PUSH2_C -8689691237817835089, 5330537022675391310
    var_1832 = 56;
    pri = fun_1A28(var_1824, var_1816, var_1808, var_1800, var_1792, var_1784, var_1776)
    var_1840 = 1;
    var_1848 = 8;
    pri = fun_1B70(var_1840)
    var_1856 = 0;
    pri = fun_1C30()
    var_1864 = 0;
    var_1872 = 4631952216750555136;
    var_1880 = 0;
    OP_PUSH5_C 4660764874975960105, 4636403743507234161, 4657580579350758031, 4661268462296597791, 4638797688184158290
    var_1888 = 4657166283369412035;
    var_1896 = 1;
    pri = EvCameraMove(var_1896, var_1888, var_1880, var_1872, var_1864, var_1856, var_1848, var_1840, var_1832, var_1824)
    var_1904 = 1;
    var_1912 = 8;
    pri = fun_0060(var_1904)
    var_1920 = 1;
    var_1928 = 1;
    var_1936 = -1;
    var_1944 = -1;
    var_1952 = 0;
    var_1960 = 1;
    var_1968 = 5330537022675391310;
    var_1976 = 56;
    pri = fun_3B28(var_1968, var_1960, var_1952, var_1944, var_1936, var_1928, var_1920)
    var_1984 = 0;
    var_1992 = 3;
    var_2000 = 0;
    var_2008 = 100;
    var_2016 = -1;
    OP_PUSH2_C -8229722422448239670, 5330537022675391310
    var_2024 = 56;
    pri = fun_1A28(var_2016, var_2008, var_2000, var_1992, var_1984, var_1976, var_1968)
    var_2032 = 1;
    var_2040 = 8;
    pri = fun_1B70(var_2032)
    var_2048 = 0;
    pri = fun_1C30()
    var_2056 = 1;
    var_2064 = 3;
    var_2072 = 0;
    var_2080 = 1;
    var_2088 = 5330537022675391310;
    var_2096 = 40;
    pri = fun_5E60(var_2088, var_2080, var_2072, var_2064, var_2056)
    var_2104 = 5330537022675391310;
    var_2112 = 8;
    pri = fun_0978(var_2104)
    var_2120 = 1;
    var_2128 = 1;
    var_2136 = -1;
    var_2144 = -1;
    var_2152 = 0;
    var_2160 = 2;
    var_2168 = 5330537022675391310;
    var_2176 = 56;
    pri = fun_3B28(var_2168, var_2160, var_2152, var_2144, var_2136, var_2128, var_2120)
    var_2184 = 0;
    var_2192 = 3;
    var_2200 = 0;
    var_2208 = 101;
    var_2216 = -1;
    OP_PUSH2_C 4304425479793296036, 5330537022675391310
    var_2224 = 56;
    pri = fun_1A28(var_2216, var_2208, var_2200, var_2192, var_2184, var_2176, var_2168)
    var_2232 = 1;
    var_2240 = 8;
    pri = fun_1B70(var_2232)
    var_2248 = 0;
    pri = fun_1C30()
    var_2256 = 1;
    var_2264 = 3;
    var_2272 = 0;
    var_2280 = 2;
    var_2288 = 5330537022675391310;
    var_2296 = 40;
    pri = fun_5E60(var_2288, var_2280, var_2272, var_2264, var_2256)
    var_2304 = -1;
    var_2312 = 0;
    var_2320 = 0;
    var_2328 = 0;
    var_2336 = 139;
    var_2344 = 40;
    pri = fun_1C60(var_2336, var_2328, var_2320, var_2312, var_2304)
    var_2352 = 0;
    pri = fun_1D78()
    OP_JZER lab_9888
    var_2360 = 0;
    pri = fun_1E68()
// lab_9888
    var_8 = 0;
    var_16 = 4631952216750555136;
    var_24 = 0;
    OP_PUSH5_C 4660277395500669338, -4589011801678461010, 4657540183293553541, 4662026410637205176, 4645137208347124040
    var_32 = 4657535213500995994;
    var_40 = 1;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 31208;
    var_56 = 8;
    var_64 = 16;
    pri = fun_0280(var_56, var_48)
    var_72 = 0;
    pri = fun_0350()
    var_80 = 1;
    var_88 = -1;
    var_96 = -1;
    var_104 = 3;
    var_112 = 0;
    var_120 = 1;
    var_128 = 5330537022675391310;
    var_136 = 56;
    pri = fun_1F48(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_144 = 0;
    var_152 = 3;
    var_160 = 0;
    var_168 = 100;
    var_176 = -1;
    OP_PUSH2_C -8229723521959867881, 5330537022675391310
    var_184 = 56;
    pri = fun_1A28(var_176, var_168, var_160, var_152, var_144, var_136, var_128)
    var_192 = 1;
    var_200 = 8;
    pri = fun_1B70(var_192)
    var_208 = 0;
    pri = fun_1C30()
    var_216 = 1;
    var_224 = 1;
    var_232 = -1;
    var_240 = -1;
    var_248 = 0;
    var_256 = 2;
    var_264 = 1520678507684672495;
    var_272 = 56;
    pri = fun_3B28(var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_280 = 0;
    var_288 = 3;
    var_296 = 0;
    var_304 = 100;
    var_312 = -1;
    OP_PUSH2_C 214356897507528362, 1520678507684672495
    var_320 = 56;
    pri = fun_1A28(var_312, var_304, var_296, var_288, var_280, var_272, var_264)
    var_328 = 1;
    var_336 = 8;
    pri = fun_1B70(var_328)
    var_344 = 0;
    pri = fun_1C30()
    var_352 = 1;
    var_360 = 3;
    var_368 = 0;
    var_376 = 2;
    var_384 = 1520678507684672495;
    var_392 = 40;
    pri = fun_5E60(var_384, var_376, var_368, var_360, var_352)
    var_400 = 1;
    var_408 = 0;
    var_416 = 4641240890982006784;
    var_424 = 0;
    var_432 = 0;
    OP_PUSH4_C 4660576902468075520, 4657005688701059072, 4611686018427387904, 5330537022675391310
    var_440 = 72;
    pri = fun_0640(var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376, var_368)
    var_448 = 5330537022675391310;
    var_456 = 8;
    pri = fun_0760(var_448)
    var_464 = 0;
    var_472 = 0;
    var_480 = 0;
    var_488 = 60;
    pri = float(var_488)
    var_496 = pri;
    var_504 = 5330537022675391310;
    var_512 = 40;
    pri = fun_06B8(var_504, var_496, var_488, var_480, var_472)
    var_520 = 5330537022675391310;
    var_528 = 8;
    pri = fun_0760(var_520)
    var_536 = 0;
    var_544 = 0;
    var_552 = 0;
    var_560 = 0;
    OP_PUSH2_C 5330537022675391310, 1520678507684672495
    var_568 = 48;
    pri = fun_0708(var_560, var_552, var_544, var_536, var_528, var_520)
    var_576 = 0;
    var_584 = 0;
    var_592 = 0;
    var_600 = 0;
    OP_PUSH2_C 5330537022675391310, 8802641224559852288
    var_608 = 48;
    pri = fun_0708(var_600, var_592, var_584, var_576, var_568, var_560)
    var_616 = 8802641224559852288;
    var_624 = 8;
    pri = fun_0760(var_616)
    var_632 = 1520678507684672495;
    var_640 = 8;
    pri = fun_0760(var_632)
    var_648 = 0;
    var_656 = 3;
    var_664 = 0;
    var_672 = 100;
    var_680 = -1;
    OP_PUSH2_C 4304426579304924247, 5330537022675391310
    var_688 = 56;
    pri = fun_1A28(var_680, var_672, var_664, var_656, var_648, var_640, var_632)
    var_696 = 1;
    var_704 = 8;
    pri = fun_1B70(var_696)
    var_712 = 0;
    pri = fun_1C30()
    var_720 = 0;
    var_728 = 4631952216750555136;
    var_736 = 0;
    OP_PUSH5_C 4660277395500669338, -4589011801678461010, 4657540183293553541, 4662026410637205176, 4645137208347124040
    var_744 = 4657535213500995994;
    var_752 = 1;
    pri = EvCameraMove(var_752, var_744, var_736, var_728, var_720, var_712, var_704, var_696, var_688, var_680)
    var_760 = 1;
    var_768 = 8;
    pri = fun_0060(var_760)
    var_776 = 0;
    var_784 = 0;
    var_792 = 0;
    var_800 = 0;
    OP_PUSH2_C 8802641224559852288, 1520678507684672495
    var_808 = 48;
    pri = fun_0708(var_800, var_792, var_784, var_776, var_768, var_760)
    var_816 = 4;
    var_824 = 8;
    pri = fun_0060(var_816)
    var_832 = 0;
    var_840 = 0;
    var_848 = 0;
    var_856 = 0;
    OP_PUSH2_C 1520678507684672495, 8802641224559852288
    var_864 = 48;
    pri = fun_0708(var_856, var_848, var_840, var_832, var_824, var_816)
    var_872 = 8802641224559852288;
    var_880 = 8;
    pri = fun_0760(var_872)
    var_888 = 1520678507684672495;
    var_896 = 8;
    pri = fun_0760(var_888)
    var_904 = 1;
    var_912 = 1;
    var_920 = -1;
    var_928 = -1;
    var_936 = 0;
    var_944 = 2;
    var_952 = 1520678507684672495;
    var_960 = 56;
    pri = fun_3B28(var_952, var_944, var_936, var_928, var_920, var_912, var_904)
    var_968 = 0;
    var_976 = 3;
    var_984 = 0;
    var_992 = 100;
    var_1000 = -1;
    OP_PUSH2_C 214355797995900151, 1520678507684672495
    var_1008 = 56;
    pri = fun_1A28(var_1000, var_992, var_984, var_976, var_968, var_960, var_952)
    var_1016 = 1;
    var_1024 = 8;
    pri = fun_1B70(var_1016)
    var_1032 = 0;
    pri = fun_1C30()
    var_1040 = 1;
    var_1048 = 3;
    var_1056 = 0;
    var_1064 = 2;
    var_1072 = 1520678507684672495;
    var_1080 = 40;
    pri = fun_5E60(var_1072, var_1064, var_1056, var_1048, var_1040)
    var_1088 = 1520678507684672495;
    var_1096 = 8;
    pri = fun_0978(var_1088)
    var_1104 = 1;
    var_1112 = 0;
    var_1120 = 4641240890982006784;
    var_1128 = 0;
    var_1136 = 0;
    OP_PUSH4_C 4660447160095997952, 4657766550747480064, 4611686018427387904, 1520678507684672495
    var_1144 = 72;
    pri = fun_0640(var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072)
    var_1152 = 0;
    var_1160 = 3;
    var_1168 = 0;
    var_1176 = 100;
    var_1184 = -1;
    OP_PUSH2_C 214354698484271940, 1520678507684672495
    var_1192 = 56;
    pri = fun_1A28(var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136)
    var_1200 = 1;
    var_1208 = 8;
    pri = fun_1B70(var_1200)
    var_1216 = 0;
    pri = fun_1C30()
    var_1224 = 1520678507684672495;
    var_1232 = 8;
    pri = fun_0760(var_1224)
    var_1240 = 0;
    var_1248 = 0;
    var_1256 = 0;
    var_1264 = 0;
    OP_PUSH2_C 8802641224559852288, 1520678507684672495
    var_1272 = 48;
    pri = fun_0708(var_1264, var_1256, var_1248, var_1240, var_1232, var_1224)
    var_1280 = 4;
    var_1288 = 8;
    pri = fun_0060(var_1280)
    var_1296 = 0;
    var_1304 = 0;
    var_1312 = 0;
    var_1320 = 0;
    OP_PUSH2_C 1520678507684672495, 8802641224559852288
    var_1328 = 48;
    pri = fun_0708(var_1320, var_1312, var_1304, var_1296, var_1288, var_1280)
    var_1336 = 1520678507684672495;
    var_1344 = 8;
    pri = fun_0760(var_1336)
    var_1352 = 8802641224559852288;
    var_1360 = 8;
    pri = fun_0760(var_1352)
    var_1368 = 0;
    var_1376 = 3;
    var_1384 = 0;
    var_1392 = 100;
    var_1400 = -1;
    OP_PUSH2_C 214344802879618041, 1520678507684672495
    var_1408 = 56;
    pri = fun_1A28(var_1400, var_1392, var_1384, var_1376, var_1368, var_1360, var_1352)
    var_1416 = 1;
    var_1424 = 8;
    pri = fun_1B70(var_1416)
    var_1432 = 0;
    pri = fun_1C30()
    var_1440 = 3;
    var_1448 = 10;
    pri = EvCameraEnd(var_1448, var_1440)
    pri = 0;
    return pri;
}
// fun_A410
fun_A410() {
    pri = 0;
    return pri;
}
// fun_A428
fun_A428() {
    var_8 = -988081304844711546;
    var_16 = 8;
    pri = fun_0408(var_8)
    var_24 = 1610;
    var_32 = 8;
    pri = fun_80D0(var_24)
    var_40 = -4463401185607446837;
    pri = VanishFlagSet(var_40)
    pri = 0;
    return pri;
}
// fun_A4B0
fun_A4B0() {
    var_8 = 0;
    pri = fun_0438()
    var_16 = 31208;
    var_24 = 8;
    var_32 = 16;
    pri = fun_0280(var_24, var_16)
    var_40 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_A520
fun_A520() {
    var_8 = 0;
    pri = fun_8268()
    pri = CommandNOP()
    var_16 = 0;
    pri = fun_82A0()
    var_24 = 0;
    pri = fun_82F8()
    var_32 = 0;
    pri = fun_8338()
    var_40 = 0;
    pri = fun_8368()
    var_48 = 0;
    pri = fun_A410()
    var_56 = 0;
    pri = fun_A428()
    var_64 = 0;
    pri = fun_A4B0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_A628
fun_A628() {
    var_8 = 0;
    pri = fun_82F8()
    var_16 = 0;
    pri = fun_A428()
    pri = 0;
    return pri;
}
