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
    pri = fun_05B8()
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
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_05B8
fun_05B8() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_05E0
fun_05E0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0638
fun_0638() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0670
fun_0670() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_06A8
fun_06A8() {
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
// fun_0720
fun_0720() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0770
fun_0770() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07C8
fun_07C8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F38(var_8)
    OP_JZER lab_0840
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0F68(var_24)
    OP_JNZ lab_0840
    pri = 0;
    return pri;
// lab_0840
    OP_JUMP lab_0850
// lab_0850
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_08B0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_08B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0850
    pri = 0;
    return pri;
}
// fun_08F0
fun_08F0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0928
fun_0928() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0968
fun_0968() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_09A0
fun_09A0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_09E8
    pri = 0;
    return pri;
// lab_09E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0A28
// lab_0A28
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F38(var_8)
    OP_JNZ lab_0AB0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0AA0
    pri = 0;
    return pri;
// lab_0AB0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0AF8
    pri = 0;
    return pri;
// lab_0AF8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0B58
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0BA0(var_8)
    pri = 0;
    return pri;
// lab_0B58
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A28
    pri = 0;
    return pri;
// lab_0AA0
    OP_JUMP lab_0AF8
}
// fun_0BA0
fun_0BA0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0BD8
fun_0BD8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0C28
    pri = 0;
    return pri;
// lab_0C28
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F38(var_8)
    OP_JZER lab_0D58
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C80
    OP_ZERO_P_S 64
// lab_0D58
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D90
    OP_CONST_S 64, 1
// lab_0D90
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DC8
    OP_CONST_S 72, 1
// lab_0DC8
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
// lab_0C80
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0CA8
    OP_ZERO_P_S 72
// lab_0CA8
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
    OP_JUMP lab_0E68
// lab_0E68
    pri = 0;
    return pri;
}
// fun_0E78
fun_0E78() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0EB8
fun_0EB8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0EF8
fun_0EF8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F38
fun_0F38() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0F68
fun_0F68() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0F98
fun_0F98() {
    OP_JUMP lab_0FB0
// lab_0FB0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1040
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1030
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09A0(var_8)
    pri = 0;
    return pri;
// lab_1040
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_10D0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_10C0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09A0(var_8)
    pri = 0;
    return pri;
// lab_10D0
    pri = 0;
    return pri;
// lab_10C0
    OP_JUMP lab_10E0
// lab_10E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0FB0
    pri = 0;
    return pri;
// lab_1030
    OP_JUMP lab_10E0
}
// fun_1120
fun_1120() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09A0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0F98(var_40)
    pri = 0;
    return pri;
}
// fun_11A8
fun_11A8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_11E0
fun_11E0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1208
fun_1208() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1240
fun_1240() {
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
// switch_1858
        case default:
        {
// switch_1858_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_18A0
// lab_18A0
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
            OP_JNZ lab_1948
            var_88 = 0;
            pri = fun_1B00()
// lab_1948
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1858_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1440
                case default:
                {
// switch_1440_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_14B8
// lab_14B8
                    OP_JUMP lab_18A0
                }
                case 0x0:
                {
// switch_1440_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_14B8
                }
                case 0x1:
                {
// switch_1440_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_14B8
                }
                case 0x2:
                {
// switch_1440_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_14B8
                }
                case 0x3:
                {
// switch_1440_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_14B8
                }
                case 0x4:
                {
// switch_1440_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_14B8
                }
                case 0x5:
                {
// switch_1440_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_14B8
                }
            }
        }
        case 0x65:
        {
// switch_1858_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_15F8
                case default:
                {
// switch_15F8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1670
// lab_1670
                    OP_JUMP lab_18A0
                }
                case 0x0:
                {
// switch_15F8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1670
                }
                case 0x1:
                {
// switch_15F8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1670
                }
                case 0x2:
                {
// switch_15F8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1670
                }
                case 0x3:
                {
// switch_15F8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1670
                }
                case 0x4:
                {
// switch_15F8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1670
                }
                case 0x5:
                {
// switch_15F8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1670
                }
            }
        }
        case 0x66:
        {
// switch_1858_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_17B0
                case default:
                {
// switch_17B0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1828
// lab_1828
                    OP_JUMP lab_18A0
                }
                case 0x0:
                {
// switch_17B0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1828
                }
                case 0x1:
                {
// switch_17B0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1828
                }
                case 0x2:
                {
// switch_17B0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1828
                }
                case 0x3:
                {
// switch_17B0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1828
                }
                case 0x4:
                {
// switch_17B0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1828
                }
                case 0x5:
                {
// switch_17B0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1828
                }
            }
        }
    }
}
// fun_1960
fun_1960() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0968(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1A08
    pri = 1;
    return pri;
// lab_1A08
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1A50
fun_1A50() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1AA0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1960(var_8)
    arg_2 = pri;
// lab_1AA0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1240(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B00
fun_1B00() {
    OP_JUMP lab_1B18
// lab_1B18
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1B58
    pri = 0;
    return pri;
// lab_1B58
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1B18
    pri = 0;
    return pri;
}
// fun_1B98
fun_1B98() {
    var_8 = 0;
    pri = fun_1B00()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1C48
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1C48
    pri = 0;
    return pri;
}
// fun_1C58
fun_1C58() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1C88
fun_1C88() {
    OP_JUMP lab_1CA0
// lab_1CA0
    pri = EvCameraMoveWait_()
    OP_JZER lab_1CD8
    pri = 0;
    return pri;
// lab_1CD8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1CA0
    pri = 0;
    return pri;
}
// fun_1D18
fun_1D18() {
    pri = arg_6;
    OP_JNZ lab_1D50
    var_8 = 0;
    pri = fun_0E78()
// lab_1D50
    pri = arg_1;
    switch (pri) {
// switch_32B8
        case default:
        {
// switch_32B8_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3608
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3608
            pri = 1;
            OP_JUMP lab_3610
// lab_3608
            pri = 0;
// lab_3610
            OP_JZER lab_3768
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0968(var_24, var_16)
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
            var_64 = 8424;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_37C8
// lab_3768
            var_8 = 64;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_37C8
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3828
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3888
// lab_3828
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3888
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3888
            pri = arg_2;
            OP_JZER lab_38C8
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_38C8
            var_8 = 0;
            pri = fun_0EB8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_32B8_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32B8_case_default
        }
        case 0x1:
        {
// switch_32B8_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32B8_case_default
        }
        case 0x2:
        {
// switch_32B8_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32B8_case_default
        }
        case 0x3:
        {
// switch_32B8_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32B8_case_default
        }
        case 0x4:
        {
// switch_32B8_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32B8_case_default
        }
        case 0x5:
        {
// switch_32B8_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5608;
            var_72 = 5600;
            var_80 = 5592;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_32B8_case_default
        }
        case 0x6:
        {
// switch_32B8_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5632;
            var_72 = 5624;
            var_80 = 5616;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_32B8_case_default
        }
        case 0x7:
        {
// switch_32B8_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5656;
            var_72 = 5648;
            var_80 = 5640;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_32B8_case_default
        }
        case 0x8:
        {
// switch_32B8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32B8_case_default
        }
        case 0x9:
        {
// switch_32B8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5680;
            var_72 = 5672;
            var_80 = 5664;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_32B8_case_default
        }
        case 0xa:
        {
// switch_32B8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5704;
            var_72 = 5696;
            var_80 = 5688;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_32B8_case_default
        }
        case 0xb:
        {
// switch_32B8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5728;
            var_72 = 5720;
            var_80 = 5712;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_32B8_case_default
        }
        case 0xc:
        {
// switch_32B8_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5752;
            var_72 = 5744;
            var_80 = 5736;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_32B8_case_default
        }
        case 0xd:
        {
// switch_32B8_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5776;
            var_72 = 5768;
            var_80 = 5760;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_32B8_case_default
        }
        case 0xe:
        {
// switch_32B8_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5800;
            var_72 = 5792;
            var_80 = 5784;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_32B8_case_default
        }
        case 0xf:
        {
// switch_32B8_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32B8_case_default
        }
        case 0x10:
        {
// switch_32B8_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32B8_case_default
        }
        case 0x11:
        {
// switch_32B8_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5824;
            var_72 = 5816;
            var_80 = 5808;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_32B8_case_default
        }
        case 0x12:
        {
// switch_32B8_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5848;
            var_72 = 5840;
            var_80 = 5832;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_32B8_case_default
        }
        case 0x13:
        {
// switch_32B8_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32B8_case_default
        }
        case 0x14:
        {
// switch_32B8_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32B8_case_default
        }
        case 0x15:
        {
// switch_32B8_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32B8_case_default
        }
        case 0x16:
        {
// switch_32B8_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32B8_case_default
        }
        case 0x17:
        {
// switch_32B8_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32B8_case_default
        }
        case 0x18:
        {
// switch_32B8_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32B8_case_default
        }
        case 0x19:
        {
// switch_32B8_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5872;
            var_72 = 5864;
            var_80 = 5856;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_32B8_case_default
        }
        case 0x1a:
        {
// switch_32B8_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0928(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_08F0(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6096;
            var_88 = 6088;
            var_96 = 6080;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0BD8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_32B8_case_default
        }
        case 0x1b:
        {
// switch_32B8_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0928(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_08F0(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6320;
            var_88 = 6312;
            var_96 = 6304;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0BD8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_32B8_case_default
        }
        case 0x1c:
        {
// switch_32B8_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0928(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_08F0(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6544;
            var_88 = 6536;
            var_96 = 6528;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0BD8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_32B8_case_default
        }
        case 0x1d:
        {
// switch_32B8_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32B8_case_default
        }
        case 0x1e:
        {
// switch_32B8_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32B8_case_default
        }
        case 0x1f:
        {
// switch_32B8_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32B8_case_default
        }
        case 0x20:
        {
// switch_32B8_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32B8_case_default
        }
        case 0x21:
        {
// switch_32B8_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32B8_case_default
        }
        case 0x22:
        {
// switch_32B8_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32B8_case_default
        }
        case 0x23:
        {
// switch_32B8_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32B8_case_default
        }
        case 0x24:
        {
// switch_32B8_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32B8_case_default
        }
        case 0x25:
        {
// switch_32B8_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32B8_case_default
        }
        case 0x26:
        {
// switch_32B8_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32B8_case_default
        }
        case 0x27:
        {
// switch_32B8_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32B8_case_default
        }
        case 0x28:
        {
// switch_32B8_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32B8_case_default
        }
        case 0x29:
        {
// switch_32B8_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32B8_case_default
        }
    }
}
// fun_38F8
fun_38F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_3B08(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 8440;
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
    var_424 = 8496;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 8512;
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
    OP_JZER lab_3AF0
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_3AF0
    pri = 0;
    return pri;
}
// fun_3B08
fun_3B08() {
    var_8 = arg_1;
    var_16 = 8560;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0928(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_3B50
fun_3B50() {
    pri = 8664;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_3BD8
// lab_3BD8
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_3D58
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_3D48
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_3C98
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_3C98
    pri = 0;
    OP_JUMP lab_3CA0
// lab_3D58
    pri = 0;
    return pri;
// lab_3D48
    OP_JUMP lab_3BD0
// lab_3BD0
    OP_INC_P_S -936
// lab_3C98
    pri = 1;
// lab_3CA0
    OP_JZER lab_3D18
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_3D10
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_3D18
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_3D10
}
// fun_3D78
fun_3D78() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_3E10
    var_8 = 1;
    var_16 = 0;
    var_24 = 9584;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_11E0()
// lab_3E10
    pri = arg_4;
    OP_JZER lab_3E48
    var_8 = 1;
    var_16 = 8;
    pri = fun_1208(var_8)
// lab_3E48
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_3EA0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_3EA0
    pri = 0;
    OP_JUMP lab_3EA8
// lab_3EA0
    pri = 1;
// lab_3EA8
    OP_JZER lab_3F70
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_3F70
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_3F48
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1120(var_32, var_24)
    OP_JUMP lab_3F70
// lab_3F70
    pri = arg_2;
    OP_JZER lab_4048
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_4018
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0EF8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0670(var_40)
    OP_JUMP lab_4048
// lab_4048
    pri = arg_3;
    OP_JZER lab_4080
    var_8 = 1;
    var_16 = 8;
    pri = fun_11A8(var_8)
// lab_4080
    pri = 0;
    return pri;
// lab_4018
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0EF8(var_16, var_8)
// lab_3F48
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1120(var_16, var_8)
}
// fun_4090
fun_4090() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_3B50(var_24)
    pri = 0;
    return pri;
}
// fun_40F8
fun_40F8() {
    pri = g_mode;
    switch (pri) {
// switch_41B8
        case default:
        {
// switch_41B8_case_default
            pri = CommandNOP()
            OP_JUMP lab_4200
// lab_4200
            pri = 0;
            return pri;
        }
        case 0xbd38c61ea42b392a:
        {
// switch_41B8_case_0xbd38c61ea42b392a
            var_8 = 0;
            pri = fun_5AE8()
            OP_JUMP lab_4200
        }
        case 0x0:
        {
// switch_41B8_case_0x0
            var_8 = 0;
            pri = fun_4210()
            OP_JUMP lab_4200
        }
        case 0x4f939821df437dee:
        {
// switch_41B8_case_0x4f939821df437dee
            var_8 = 0;
            pri = fun_59F8()
            OP_JUMP lab_4200
        }
    }
}
// fun_4210
fun_4210() {
    pri = 0;
    return pri;
}
// fun_4228
fun_4228() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 9584;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 1;
    var_64 = 1;
    var_72 = 1;
    var_80 = 1;
    var_88 = 0;
    var_96 = 40;
    pri = fun_3D78(var_88, var_80, var_72, var_64, var_56)
    pri = 0;
    return pri;
}
// fun_42D0
fun_42D0() {
    var_8 = -5399359210222382523;
    var_16 = 8;
    pri = fun_0408(var_8)
    var_24 = 0;
    pri = ChangeWideRoadOtherPlayerVisibility(var_24)
    pri = 0;
    return pri;
}
// fun_4330
fun_4330() {
    var_8 = 0;
    pri = fun_0438()
    var_16 = 0;
    var_24 = -5399359210222382523;
    var_32 = 16;
    pri = fun_0638(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_4390
fun_4390() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C -4583411857016802509, 4671251538594129510, 4677903803844499866, 8802641224559852288
    var_24 = 48;
    pri = fun_05E0(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 1;
    OP_PUSH4_C 4636976545084840346, 4671282792212149043, 4677860235696249242, -5399359210222382523
    var_48 = 48;
    pri = fun_05E0(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 1;
    var_64 = 1;
    OP_PUSH4_C 4625309407300183654, 4671192302405183078, 4677889757583455027, -7653547417971305915
    var_72 = 48;
    pri = fun_05E0(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 1;
    var_88 = 8;
    pri = fun_0060(var_80)
    var_96 = 0;
    var_104 = 4631952216750555136;
    var_112 = 0;
    OP_PUSH5_C 4671249490753722778, 4659755853155150070, 4677895824138861281, 4671307300326332170, 4659687991297483735
    var_120 = 4677883627806130176;
    var_128 = 1;
    pri = EvCameraMove(var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_136 = 0;
    pri = fun_1C88()
    var_144 = 0;
    var_152 = 4631952216750555136;
    var_160 = 0;
    OP_PUSH5_C 4671249490753722778, 4659755853155150070, 4677895824138861281, 4671288454697032090, 4659710113471434588
    var_168 = 4677887603915054121;
    var_176 = 200;
    pri = EvCameraMove(var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104)
    var_184 = 0;
    var_192 = 0;
    var_200 = -7653547417971305915;
    var_208 = 24;
    pri = fun_38F8(var_200, var_192, var_184)
    var_216 = -7653547417971305915;
    var_224 = 8;
    pri = fun_09A0(var_216)
    var_232 = 0;
    var_240 = 0;
    var_248 = 0;
    var_256 = 0;
    OP_PUSH2_C -7653547417971305915, 8802641224559852288
    var_264 = 48;
    pri = fun_0770(var_256, var_248, var_240, var_232, var_224, var_216)
    var_272 = 0;
    var_280 = 0;
    var_288 = 0;
    var_296 = 0;
    OP_PUSH2_C 8802641224559852288, -7653547417971305915
    var_304 = 48;
    pri = fun_0770(var_296, var_288, var_280, var_272, var_264, var_256)
    var_312 = 8802641224559852288;
    var_320 = 8;
    pri = fun_07C8(var_312)
    var_328 = -7653547417971305915;
    var_336 = 8;
    pri = fun_07C8(var_328)
    var_344 = 5;
    var_352 = 8;
    pri = fun_0060(var_344)
    var_360 = 9632;
    var_368 = 8;
    var_376 = 16;
    pri = fun_0280(var_368, var_360)
    var_384 = 0;
    pri = fun_0350()
    var_392 = 0;
    var_400 = 3;
    var_408 = 0;
    var_416 = 100;
    var_424 = -1;
    OP_PUSH2_C 6788618373863516625, -7653547417971305915
    var_432 = 56;
    pri = fun_1A50(var_424, var_416, var_408, var_400, var_392, var_384, var_376)
    var_440 = 1;
    var_448 = 8;
    pri = fun_1B98(var_440)
    var_456 = 0;
    pri = fun_1C58()
    var_464 = 0;
    var_472 = 3;
    var_480 = 0;
    var_488 = 100;
    var_496 = -1;
    OP_PUSH2_C 6788615075328631992, -7653547417971305915
    var_504 = 56;
    pri = fun_1A50(var_496, var_488, var_480, var_472, var_464, var_456, var_448)
    var_512 = 1;
    var_520 = 8;
    pri = fun_1B98(var_512)
    var_528 = 0;
    pri = fun_1C58()
    var_536 = 0;
    var_544 = 3;
    var_552 = 0;
    var_560 = 100;
    var_568 = -1;
    OP_PUSH2_C 6788616174840260203, -7653547417971305915
    var_576 = 56;
    pri = fun_1A50(var_568, var_560, var_552, var_544, var_536, var_528, var_520)
    var_584 = 1;
    var_592 = 8;
    pri = fun_1B98(var_584)
    var_600 = 0;
    pri = fun_1C58()
    var_608 = 0;
    var_616 = 3;
    var_624 = 0;
    var_632 = 100;
    var_640 = -1;
    OP_PUSH2_C 6788621672398401258, -7653547417971305915
    var_648 = 56;
    pri = fun_1A50(var_640, var_632, var_624, var_616, var_608, var_600, var_592)
    var_656 = 1;
    var_664 = 8;
    pri = fun_1B98(var_656)
    var_672 = 0;
    pri = fun_1C58()
    var_680 = 0;
    var_688 = 3;
    var_696 = 0;
    var_704 = 100;
    var_712 = -1;
    OP_PUSH2_C 6788622771910029469, -7653547417971305915
    var_720 = 56;
    pri = fun_1A50(var_712, var_704, var_696, var_688, var_680, var_672, var_664)
    var_728 = 1;
    var_736 = 8;
    pri = fun_1B98(var_728)
    var_744 = 0;
    pri = fun_1C58()
    var_752 = 1;
    var_760 = -5399359210222382523;
    var_768 = 16;
    pri = fun_0638(var_760, var_752)
    var_776 = 0;
    pri = fun_1C88()
    var_784 = 1;
    var_792 = 0;
    var_800 = 4641240890982006784;
    var_808 = 0;
    var_816 = 0;
    OP_PUSH4_C 4671264925148197683, 4677875766297991578, 4607182418800017408, -5399359210222382523
    var_824 = 72;
    pri = fun_06A8(var_816, var_808, var_800, var_792, var_784, var_776, var_768, var_760, var_752)
    var_832 = 0;
    var_840 = 4631952216750555136;
    var_848 = 3;
    OP_PUSH5_C 4671243091596049121, 4659772015976078377, 4677887887039298273, 4671309122766855209, 4659694500406320169
    var_856 = 4677873957601363886;
    var_864 = 15;
    pri = EvCameraMove(var_864, var_856, var_848, var_840, var_832, var_824, var_816, var_808, var_800, var_792)
    var_872 = -5399359210222382523;
    var_880 = 8;
    pri = fun_07C8(var_872)
    var_888 = 0;
    var_896 = 0;
    var_904 = 0;
    var_912 = 0;
    OP_PUSH2_C -5399359210222382523, 8802641224559852288
    var_920 = 48;
    pri = fun_0770(var_912, var_904, var_896, var_888, var_880, var_872)
    var_928 = 0;
    var_936 = 0;
    var_944 = 0;
    var_952 = 0;
    OP_PUSH2_C 8802641224559852288, -5399359210222382523
    var_960 = 48;
    pri = fun_0770(var_952, var_944, var_936, var_928, var_920, var_912)
    var_968 = 0;
    var_976 = 0;
    var_984 = 0;
    var_992 = 0;
    OP_PUSH2_C -5399359210222382523, -7653547417971305915
    var_1000 = 48;
    pri = fun_0770(var_992, var_984, var_976, var_968, var_960, var_952)
    var_1008 = 8802641224559852288;
    var_1016 = 8;
    pri = fun_07C8(var_1008)
    var_1024 = -7653547417971305915;
    var_1032 = 8;
    pri = fun_07C8(var_1024)
    var_1040 = -5399359210222382523;
    var_1048 = 8;
    pri = fun_07C8(var_1040)
    var_1056 = 0;
    pri = fun_1C88()
    var_1064 = 15;
    var_1072 = 8;
    pri = fun_0060(var_1064)
    var_1080 = 0;
    var_1088 = 4630615210611179520;
    var_1096 = 0;
    OP_PUSH5_C 4671244026180932731, 4659742395132826092, 4677888350208571474, 4671324524175981281, 4659743648576081756
    var_1104 = 4677908942686970184;
    var_1112 = 1;
    pri = EvCameraMove(var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040)
    var_1120 = 0;
    pri = fun_1C88()
    var_1128 = 0;
    var_1136 = 1;
    var_1144 = -5399359210222382523;
    var_1152 = 24;
    pri = fun_38F8(var_1144, var_1136, var_1128)
    var_1160 = 1;
    var_1168 = 8;
    pri = fun_0060(var_1160)
    var_1176 = -5399359210222382523;
    var_1184 = 8;
    pri = fun_09A0(var_1176)
    var_1192 = 0;
    var_1200 = 3;
    var_1208 = 0;
    var_1216 = 100;
    var_1224 = -1;
    OP_PUSH2_C -425613704564082229, -5399359210222382523
    var_1232 = 56;
    pri = fun_1A50(var_1224, var_1216, var_1208, var_1200, var_1192, var_1184, var_1176)
    var_1240 = 1;
    var_1248 = 8;
    pri = fun_1B98(var_1240)
    var_1256 = 0;
    pri = fun_1C58()
    var_1264 = 1;
    var_1272 = -1;
    var_1280 = -1;
    var_1288 = 3;
    var_1296 = 0;
    var_1304 = 10;
    var_1312 = -5399359210222382523;
    var_1320 = 56;
    pri = fun_1D18(var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264)
    var_1328 = 0;
    var_1336 = 3;
    var_1344 = 0;
    var_1352 = 100;
    var_1360 = -1;
    OP_PUSH2_C -425612605052454018, -5399359210222382523
    var_1368 = 56;
    pri = fun_1A50(var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312)
    var_1376 = 1;
    var_1384 = 8;
    pri = fun_1B98(var_1376)
    var_1392 = 0;
    pri = fun_1C58()
    var_1400 = -5399359210222382523;
    var_1408 = 8;
    pri = fun_09A0(var_1400)
    var_1416 = 1;
    var_1424 = 0;
    var_1432 = 4641240890982006784;
    var_1440 = 0;
    var_1448 = 0;
    OP_PUSH4_C 4671236337845875507, 4677881951050897818, 4607182418800017408, -5399359210222382523
    var_1456 = 72;
    pri = fun_06A8(var_1448, var_1440, var_1432, var_1424, var_1416, var_1408, var_1400, var_1392, var_1384)
    var_1464 = -5399359210222382523;
    var_1472 = 8;
    pri = fun_07C8(var_1464)
    var_1480 = 0;
    var_1488 = 3;
    var_1496 = 0;
    var_1504 = 100;
    var_1512 = -1;
    OP_PUSH2_C -425611505540825807, -5399359210222382523
    var_1520 = 56;
    pri = fun_1A50(var_1512, var_1504, var_1496, var_1488, var_1480, var_1472, var_1464)
    var_1528 = 1;
    var_1536 = 8;
    pri = fun_1B98(var_1528)
    var_1544 = 0;
    pri = fun_1C58()
    var_1552 = 30;
    var_1560 = 8;
    pri = fun_0060(var_1552)
    var_1568 = 0;
    var_1576 = 3;
    var_1584 = 0;
    var_1592 = 100;
    var_1600 = -1;
    OP_PUSH2_C 1432241333579286549, -7653547417971305915
    var_1608 = 56;
    pri = fun_1A50(var_1600, var_1592, var_1584, var_1576, var_1568, var_1560, var_1552)
    var_1616 = 1;
    var_1624 = 8;
    pri = fun_1B98(var_1616)
    var_1632 = 0;
    pri = fun_1C58()
    var_1640 = 1;
    var_1648 = 0;
    var_1656 = 30;
    pri = float(var_1656)
    var_1664 = pri;
    var_1672 = 0;
    pri = float(var_1672)
    var_1680 = pri;
    var_1688 = 1;
    OP_PUSH4_C 4671192302405183078, 4677906800013685555, 4607182418800017408, -7653547417971305915
    var_1696 = 72;
    pri = fun_06A8(var_1688, var_1680, var_1672, var_1664, var_1656, var_1648, var_1640, var_1632, var_1624)
    var_1704 = 0;
    var_1712 = 0;
    var_1720 = 0;
    var_1728 = 0;
    OP_PUSH2_C 8802641224559852288, -5399359210222382523
    var_1736 = 48;
    pri = fun_0770(var_1728, var_1720, var_1712, var_1704, var_1696, var_1688)
    var_1744 = -5399359210222382523;
    var_1752 = 8;
    pri = fun_07C8(var_1744)
    var_1760 = 0;
    var_1768 = 3;
    var_1776 = 0;
    var_1784 = 100;
    var_1792 = -1;
    OP_PUSH2_C -425610406029197596, -5399359210222382523
    var_1800 = 56;
    pri = fun_1A50(var_1792, var_1784, var_1776, var_1768, var_1760, var_1752, var_1744)
    var_1808 = 1;
    var_1816 = 8;
    pri = fun_1B98(var_1808)
    var_1824 = 0;
    pri = fun_1C58()
    var_1832 = -7653547417971305915;
    var_1840 = 8;
    pri = fun_07C8(var_1832)
    var_1848 = 1;
    var_1856 = 0;
    var_1864 = 4641240890982006784;
    var_1872 = 0;
    var_1880 = 0;
    OP_PUSH4_C 4671042274043573043, 4677889647632292250, 4607182418800017408, -5399359210222382523
    var_1888 = 72;
    pri = fun_06A8(var_1880, var_1872, var_1864, var_1856, var_1848, var_1840, var_1832, var_1824, var_1816)
    var_1896 = 30;
    var_1904 = 8;
    pri = fun_0060(var_1896)
    var_1912 = 0;
    var_1920 = 0;
    var_1928 = 0;
    var_1936 = -156;
    pri = float(var_1936)
    var_1944 = pri;
    var_1952 = 8802641224559852288;
    var_1960 = 40;
    pri = fun_0720(var_1952, var_1944, var_1936, var_1928, var_1920)
    var_1968 = 8802641224559852288;
    var_1976 = 8;
    pri = fun_07C8(var_1968)
    var_1984 = 50;
    var_1992 = 8;
    pri = fun_0060(var_1984)
    var_2000 = 1;
    var_2008 = 0;
    var_2016 = 9584;
    var_2024 = 8;
    var_2032 = 32;
    pri = fun_02E0(var_2024, var_2016, var_2008, var_2000)
    var_2040 = 0;
    pri = fun_0350()
    var_2048 = -5399359210222382523;
    var_2056 = 8;
    pri = fun_07C8(var_2048)
    var_2064 = -5399359210222382523;
    var_2072 = 8;
    pri = fun_0588(var_2064)
    var_2080 = 3;
    var_2088 = 1;
    pri = EvCameraEnd(var_2088, var_2080)
    pri = 0;
    return pri;
}
// fun_55D8
fun_55D8() {
    pri = 0;
    return pri;
}
// fun_55F0
fun_55F0() {
    var_8 = -9221739579950643884;
    var_16 = 8;
    pri = fun_0588(var_8)
    var_24 = 840;
    var_32 = 8;
    pri = fun_4090(var_24)
    var_40 = 10;
    var_48 = -2203346105920404122;
    pri = WorkSet(var_48, var_40)
    var_56 = 10;
    var_64 = -2203345006408775911;
    pri = WorkSet(var_64, var_56)
    var_72 = 20;
    var_80 = 5131457787967621499;
    pri = WorkSet(var_80, var_72)
    var_88 = 1590452028359343224;
    pri = VanishFlagReset(var_88)
    var_96 = 1590455326894227857;
    pri = VanishFlagReset(var_96)
    var_104 = 3469112159760161694;
    pri = VanishFlagReset(var_104)
    var_112 = 1058120175172563091;
    pri = VanishFlagReset(var_112)
    var_120 = 1058121274684191302;
    pri = VanishFlagReset(var_120)
    var_128 = -6885374073561345874;
    pri = VanishFlagReset(var_128)
    var_136 = -6245882449017408807;
    pri = VanishFlagReset(var_136)
    var_144 = -7748209240823921678;
    pri = VanishFlagReset(var_144)
    var_152 = -5399359210222382523;
    pri = VanishFlagSet(var_152)
    var_160 = 3728213071223358512;
    pri = VanishFlagSet(var_160)
    var_168 = 7116314638901664256;
    pri = VanishFlagSet(var_168)
    var_176 = 279354136510782265;
    pri = VanishFlagSet(var_176)
    var_184 = 577590369271743373;
    pri = VanishFlagSet(var_184)
    var_192 = 1;
    pri = ChangeWideRoadOtherPlayerVisibility(var_192)
    pri = 0;
    return pri;
}
// fun_5908
fun_5908() {
    OP_PUSH2_C -7653547417971305915, 3501000296093186743
    pri = SetBamiriInfoToChara(var_0, var_-8)
    var_8 = 20;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 0;
    pri = WideRoadCameraSetYaw(var_24)
    var_32 = -4606056518893174784;
    pri = WideRoadCameraSetPitch(var_32)
    var_40 = 9632;
    var_48 = 8;
    var_56 = 16;
    pri = fun_0280(var_48, var_40)
    var_64 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_59F8
fun_59F8() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_4228()
    var_16 = 0;
    pri = fun_42D0()
    var_24 = 0;
    pri = fun_4330()
    var_32 = 0;
    pri = fun_4390()
    var_40 = 0;
    pri = fun_55D8()
    var_48 = 0;
    pri = fun_55F0()
    var_56 = 0;
    pri = fun_5908()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_5AE8
fun_5AE8() {
    var_8 = 0;
    pri = fun_42D0()
    var_16 = 0;
    pri = fun_55F0()
    pri = 0;
    return pri;
}
