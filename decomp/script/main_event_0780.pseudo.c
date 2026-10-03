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
    pri = StartLoadLogoFade_(var_8)
    pri = 0;
    return pri;
}
// fun_0440
fun_0440() {
    OP_JUMP lab_0458
// lab_0458
    pri = IsLoadedLogoFade_()
    OP_JZER lab_0490
    pri = 0;
    return pri;
// lab_0490
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0458
    pri = 0;
    return pri;
}
// fun_04D0
fun_04D0() {
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
// fun_0570
fun_0570() {
    var_8 = arg_0;
    pri = ReserveScript(var_8)
    var_16 = arg_9;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_8;
    var_48 = arg_7;
    var_56 = arg_4;
    var_64 = 0;
    pri = float(var_64)
    var_72 = pri;
    var_80 = arg_3;
    var_88 = arg_2;
    var_96 = arg_1;
    pri = MapChangeCore_(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    pri = 0;
    return pri;
}
// fun_0630
fun_0630() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0680
fun_0680() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_06D8
fun_06D8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0718
fun_0718() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngleToTargetObject_(var_24, var_16, var_8)
    return pri;
}
// fun_0758
fun_0758() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0790
fun_0790() {
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
// fun_0808
fun_0808() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0858
fun_0858() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08B0
fun_08B0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1020(var_8)
    OP_JZER lab_0928
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1050(var_24)
    OP_JNZ lab_0928
    pri = 0;
    return pri;
// lab_0928
    OP_JUMP lab_0938
// lab_0938
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0998
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0998
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0938
    pri = 0;
    return pri;
}
// fun_09D8
fun_09D8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0A10
fun_0A10() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0A50
fun_0A50() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0A88
fun_0A88() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0AD0
    pri = 0;
    return pri;
// lab_0AD0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0B10
// lab_0B10
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1020(var_8)
    OP_JNZ lab_0B98
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0B88
    pri = 0;
    return pri;
// lab_0B98
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0BE0
    pri = 0;
    return pri;
// lab_0BE0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0C40
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C88(var_8)
    pri = 0;
    return pri;
// lab_0C40
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0B10
    pri = 0;
    return pri;
// lab_0B88
    OP_JUMP lab_0BE0
}
// fun_0C88
fun_0C88() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0CC0
fun_0CC0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0D10
    pri = 0;
    return pri;
// lab_0D10
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1020(var_8)
    OP_JZER lab_0E40
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D68
    OP_ZERO_P_S 64
// lab_0E40
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E78
    OP_CONST_S 64, 1
// lab_0E78
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EB0
    OP_CONST_S 72, 1
// lab_0EB0
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
// lab_0D68
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D90
    OP_ZERO_P_S 72
// lab_0D90
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
    OP_JUMP lab_0F50
// lab_0F50
    pri = 0;
    return pri;
}
// fun_0F60
fun_0F60() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FA0
fun_0FA0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FE0
fun_0FE0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1020
fun_1020() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1050
fun_1050() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1080
fun_1080() {
    OP_JUMP lab_1098
// lab_1098
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1128
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1118
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A88(var_8)
    pri = 0;
    return pri;
// lab_1128
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_11B8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_11A8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A88(var_8)
    pri = 0;
    return pri;
// lab_11B8
    pri = 0;
    return pri;
// lab_11A8
    OP_JUMP lab_11C8
// lab_11C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1098
    pri = 0;
    return pri;
// lab_1118
    OP_JUMP lab_11C8
}
// fun_1208
fun_1208() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A88(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1080(var_40)
    pri = 0;
    return pri;
}
// fun_1290
fun_1290() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_12C8
fun_12C8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_12F0
fun_12F0() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1320
fun_1320() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1358
fun_1358() {
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
// switch_1970
        case default:
        {
// switch_1970_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_19B8
// lab_19B8
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
            OP_JNZ lab_1A60
            var_88 = 0;
            pri = fun_1C18()
// lab_1A60
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1970_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1558
                case default:
                {
// switch_1558_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_15D0
// lab_15D0
                    OP_JUMP lab_19B8
                }
                case 0x0:
                {
// switch_1558_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_15D0
                }
                case 0x1:
                {
// switch_1558_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_15D0
                }
                case 0x2:
                {
// switch_1558_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_15D0
                }
                case 0x3:
                {
// switch_1558_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_15D0
                }
                case 0x4:
                {
// switch_1558_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_15D0
                }
                case 0x5:
                {
// switch_1558_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_15D0
                }
            }
        }
        case 0x65:
        {
// switch_1970_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1710
                case default:
                {
// switch_1710_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1788
// lab_1788
                    OP_JUMP lab_19B8
                }
                case 0x0:
                {
// switch_1710_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1788
                }
                case 0x1:
                {
// switch_1710_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1788
                }
                case 0x2:
                {
// switch_1710_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1788
                }
                case 0x3:
                {
// switch_1710_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1788
                }
                case 0x4:
                {
// switch_1710_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1788
                }
                case 0x5:
                {
// switch_1710_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1788
                }
            }
        }
        case 0x66:
        {
// switch_1970_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_18C8
                case default:
                {
// switch_18C8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1940
// lab_1940
                    OP_JUMP lab_19B8
                }
                case 0x0:
                {
// switch_18C8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1940
                }
                case 0x1:
                {
// switch_18C8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1940
                }
                case 0x2:
                {
// switch_18C8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1940
                }
                case 0x3:
                {
// switch_18C8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1940
                }
                case 0x4:
                {
// switch_18C8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1940
                }
                case 0x5:
                {
// switch_18C8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1940
                }
            }
        }
    }
}
// fun_1A78
fun_1A78() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0A50(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1B20
    pri = 1;
    return pri;
// lab_1B20
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1B68
fun_1B68() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1BB8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1A78(var_8)
    arg_2 = pri;
// lab_1BB8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1358(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1C18
fun_1C18() {
    OP_JUMP lab_1C30
// lab_1C30
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1C70
    pri = 0;
    return pri;
// lab_1C70
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1C30
    pri = 0;
    return pri;
}
// fun_1CB0
fun_1CB0() {
    var_8 = 0;
    pri = fun_1C18()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1D60
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1D60
    pri = 0;
    return pri;
}
// fun_1D70
fun_1D70() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1DA0
fun_1DA0() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1DD0
// lab_1DD0
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1E10
    OP_JUMP lab_1E40
// lab_1E10
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1DD0
// lab_1E40
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E88
fun_1E88() {
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
// fun_1EF8
fun_1EF8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_1F70()
    return pri;
}
// fun_1F70
fun_1F70() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_1FB0
fun_1FB0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = CallWildBattle(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1FF8
fun_1FF8() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetWildBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2070
fun_2070() {
    var_8 = 0;
    pri = fun_1FF8()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_20F0
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_20F0
    pri = 1;
    return pri;
// lab_20F0
    var_8 = 0;
    pri = fun_1FF8()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2120
fun_2120() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_2170
fun_2170() {
    OP_JUMP lab_2188
// lab_2188
    pri = EvCameraMoveWait_()
    OP_JZER lab_21C0
    pri = 0;
    return pri;
// lab_21C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2188
    pri = 0;
    return pri;
}
// fun_2200
fun_2200() {
    pri = arg_6;
    OP_JNZ lab_2238
    var_8 = 0;
    pri = fun_0F60()
// lab_2238
    pri = arg_1;
    switch (pri) {
// switch_37A0
        case default:
        {
// switch_37A0_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3AF0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3AF0
            pri = 1;
            OP_JUMP lab_3AF8
// lab_3AF0
            pri = 0;
// lab_3AF8
            OP_JZER lab_3C50
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A50(var_24, var_16)
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
            OP_JUMP lab_3CB0
// lab_3C50
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
// lab_3CB0
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3D10
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3D70
// lab_3D10
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3D70
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3D70
            pri = arg_2;
            OP_JZER lab_3DB0
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3DB0
            var_8 = 0;
            pri = fun_0FA0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_37A0_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A0_case_default
        }
        case 0x1:
        {
// switch_37A0_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A0_case_default
        }
        case 0x2:
        {
// switch_37A0_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A0_case_default
        }
        case 0x3:
        {
// switch_37A0_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A0_case_default
        }
        case 0x4:
        {
// switch_37A0_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A0_case_default
        }
        case 0x5:
        {
// switch_37A0_case_0x5
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
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A0_case_default
        }
        case 0x6:
        {
// switch_37A0_case_0x6
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
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A0_case_default
        }
        case 0x7:
        {
// switch_37A0_case_0x7
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
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A0_case_default
        }
        case 0x8:
        {
// switch_37A0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A0_case_default
        }
        case 0x9:
        {
// switch_37A0_case_0x9
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
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A0_case_default
        }
        case 0xa:
        {
// switch_37A0_case_0xa
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
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A0_case_default
        }
        case 0xb:
        {
// switch_37A0_case_0xb
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
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A0_case_default
        }
        case 0xc:
        {
// switch_37A0_case_0xc
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
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A0_case_default
        }
        case 0xd:
        {
// switch_37A0_case_0xd
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
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A0_case_default
        }
        case 0xe:
        {
// switch_37A0_case_0xe
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
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A0_case_default
        }
        case 0xf:
        {
// switch_37A0_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A0_case_default
        }
        case 0x10:
        {
// switch_37A0_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A0_case_default
        }
        case 0x11:
        {
// switch_37A0_case_0x11
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
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A0_case_default
        }
        case 0x12:
        {
// switch_37A0_case_0x12
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
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A0_case_default
        }
        case 0x13:
        {
// switch_37A0_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A0_case_default
        }
        case 0x14:
        {
// switch_37A0_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A0_case_default
        }
        case 0x15:
        {
// switch_37A0_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A0_case_default
        }
        case 0x16:
        {
// switch_37A0_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A0_case_default
        }
        case 0x17:
        {
// switch_37A0_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A0_case_default
        }
        case 0x18:
        {
// switch_37A0_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A0_case_default
        }
        case 0x19:
        {
// switch_37A0_case_0x19
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
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A0_case_default
        }
        case 0x1a:
        {
// switch_37A0_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A10(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09D8(var_48, var_40)
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
            pri = fun_0CC0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_37A0_case_default
        }
        case 0x1b:
        {
// switch_37A0_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A10(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09D8(var_48, var_40)
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
            pri = fun_0CC0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_37A0_case_default
        }
        case 0x1c:
        {
// switch_37A0_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A10(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09D8(var_48, var_40)
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
            pri = fun_0CC0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_37A0_case_default
        }
        case 0x1d:
        {
// switch_37A0_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A0_case_default
        }
        case 0x1e:
        {
// switch_37A0_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A0_case_default
        }
        case 0x1f:
        {
// switch_37A0_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A0_case_default
        }
        case 0x20:
        {
// switch_37A0_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A0_case_default
        }
        case 0x21:
        {
// switch_37A0_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A0_case_default
        }
        case 0x22:
        {
// switch_37A0_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A0_case_default
        }
        case 0x23:
        {
// switch_37A0_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A0_case_default
        }
        case 0x24:
        {
// switch_37A0_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A0_case_default
        }
        case 0x25:
        {
// switch_37A0_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A0_case_default
        }
        case 0x26:
        {
// switch_37A0_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A0_case_default
        }
        case 0x27:
        {
// switch_37A0_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A0_case_default
        }
        case 0x28:
        {
// switch_37A0_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A0_case_default
        }
        case 0x29:
        {
// switch_37A0_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A0_case_default
        }
    }
}
// fun_3DE0
fun_3DE0() {
    pri = arg_5;
    OP_JNZ lab_3E18
    var_8 = 0;
    pri = fun_0F60()
// lab_3E18
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3E68
    OP_CONST_S -8, -1
// lab_3E68
    pri = arg_1;
    switch (pri) {
// switch_5920
        case default:
        {
// switch_5920_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5DC8
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0A50(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5DC8
            pri = 1;
            OP_JUMP lab_5DD0
// lab_5DC8
            pri = 0;
// lab_5DD0
            OP_JZER lab_5E20
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6078
// lab_5E20
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5E88
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5E88
            pri = 1;
            OP_JUMP lab_5E90
// lab_5E88
            pri = 0;
// lab_5E90
            OP_JZER lab_6018
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A50(var_24, var_16)
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
            var_176 = 28560;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 28576;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 8440;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_6078
// lab_6018
            var_8 = 64;
            alt = 8440;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_6078
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_60E8
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_60E8
            var_8 = 0;
            pri = fun_0FA0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5920_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x1:
        {
// switch_5920_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x2:
        {
// switch_5920_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x3:
        {
// switch_5920_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x4:
        {
// switch_5920_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x5:
        {
// switch_5920_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A10(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C88(var_40)
            OP_JUMP switch_5920_case_default
        }
        case 0x6:
        {
// switch_5920_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x7:
        {
// switch_5920_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x8:
        {
// switch_5920_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x9:
        {
// switch_5920_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0xa:
        {
// switch_5920_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0xb:
        {
// switch_5920_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0xc:
        {
// switch_5920_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0xd:
        {
// switch_5920_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19088;
            var_72 = 18912;
            var_80 = 18728;
            var_88 = 18536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5920_case_default
        }
        case 0xe:
        {
// switch_5920_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19744;
            var_72 = 19536;
            var_80 = 19320;
            var_88 = 19096;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5920_case_default
        }
        case 0xf:
        {
// switch_5920_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20136;
            var_72 = 20016;
            var_80 = 19888;
            var_88 = 19752;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5920_case_default
        }
        case 0x10:
        {
// switch_5920_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20480;
            var_72 = 20376;
            var_80 = 20264;
            var_88 = 20144;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5920_case_default
        }
        case 0x11:
        {
// switch_5920_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20824;
            var_72 = 20720;
            var_80 = 20608;
            var_88 = 20488;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5920_case_default
        }
        case 0x12:
        {
// switch_5920_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x13:
        {
// switch_5920_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x14:
        {
// switch_5920_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21384;
            var_72 = 21208;
            var_80 = 21024;
            var_88 = 20832;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5920_case_default
        }
        case 0x15:
        {
// switch_5920_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x16:
        {
// switch_5920_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x17:
        {
// switch_5920_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x18:
        {
// switch_5920_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x19:
        {
// switch_5920_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x1a:
        {
// switch_5920_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x1b:
        {
// switch_5920_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x1c:
        {
// switch_5920_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 21776;
            var_72 = 21656;
            var_80 = 21528;
            var_88 = 21392;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5920_case_default
        }
        case 0x1d:
        {
// switch_5920_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x1e:
        {
// switch_5920_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 22240;
            var_72 = 22096;
            var_80 = 21944;
            var_88 = 21784;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5920_case_default
        }
        case 0x1f:
        {
// switch_5920_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x20:
        {
// switch_5920_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x21:
        {
// switch_5920_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x22:
        {
// switch_5920_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x23:
        {
// switch_5920_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x24:
        {
// switch_5920_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22608;
            var_72 = 22496;
            var_80 = 22376;
            var_88 = 22248;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5920_case_default
        }
        case 0x25:
        {
// switch_5920_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22976;
            var_72 = 22864;
            var_80 = 22744;
            var_88 = 22616;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5920_case_default
        }
        case 0x26:
        {
// switch_5920_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x27:
        {
// switch_5920_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x28:
        {
// switch_5920_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x29:
        {
// switch_5920_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23416;
            var_72 = 23280;
            var_80 = 23136;
            var_88 = 22984;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5920_case_default
        }
        case 0x2a:
        {
// switch_5920_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23808;
            var_72 = 23688;
            var_80 = 23560;
            var_88 = 23424;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5920_case_default
        }
        case 0x2b:
        {
// switch_5920_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24224;
            var_72 = 24096;
            var_80 = 23960;
            var_88 = 23816;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5920_case_default
        }
        case 0x2c:
        {
// switch_5920_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24664;
            var_72 = 24528;
            var_80 = 24384;
            var_88 = 24232;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5920_case_default
        }
        case 0x2d:
        {
// switch_5920_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x2e:
        {
// switch_5920_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24984;
            var_72 = 24888;
            var_80 = 24784;
            var_88 = 24672;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5920_case_default
        }
        case 0x2f:
        {
// switch_5920_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25376;
            var_72 = 25256;
            var_80 = 25128;
            var_88 = 24992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5920_case_default
        }
        case 0x30:
        {
// switch_5920_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25768;
            var_72 = 25648;
            var_80 = 25520;
            var_88 = 25384;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5920_case_default
        }
        case 0x31:
        {
// switch_5920_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x32:
        {
// switch_5920_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x33:
        {
// switch_5920_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26160;
            var_72 = 26040;
            var_80 = 25912;
            var_88 = 25776;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5920_case_default
        }
        case 0x34:
        {
// switch_5920_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26528;
            var_72 = 26416;
            var_80 = 26296;
            var_88 = 26168;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5920_case_default
        }
        case 0x35:
        {
// switch_5920_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27016;
            var_72 = 26864;
            var_80 = 26704;
            var_88 = 26536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5920_case_default
        }
        case 0x36:
        {
// switch_5920_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27384;
            var_72 = 27272;
            var_80 = 27152;
            var_88 = 27024;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5920_case_default
        }
        case 0x37:
        {
// switch_5920_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x38:
        {
// switch_5920_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27752;
            var_72 = 27640;
            var_80 = 27520;
            var_88 = 27392;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5920_case_default
        }
        case 0x39:
        {
// switch_5920_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x3a:
        {
// switch_5920_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x3b:
        {
// switch_5920_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x3c:
        {
// switch_5920_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x3d:
        {
// switch_5920_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
        case 0x3e:
        {
// switch_5920_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A10(var_24, var_16, var_8)
            OP_JUMP switch_5920_case_default
        }
    }
}
// fun_6118
fun_6118() {
    pri = arg_4;
    OP_JNZ lab_6150
    var_8 = 0;
    pri = fun_0F60()
// lab_6150
    pri = arg_1;
    switch (pri) {
// switch_7528
        case default:
        {
// switch_7528_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1020(var_264)
            OP_JZER lab_7AF0
            pri = arg_3;
            switch (pri) {
// switch_7A98
                case default:
                {
// switch_7A98_case_default
                    OP_JUMP lab_7DA8
// lab_7DA8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7E18
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7E18
                    var_8 = 0;
                    pri = fun_0FA0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7A98_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7A98_case_default
                }
                case 0x2:
                {
// switch_7A98_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7A98_case_default
                }
                case 0x3:
                {
// switch_7A98_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7A98_case_default
                }
            }
// lab_7AF0
            pri = arg_1;
            OP_JZER lab_7B40
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7B40
            pri = 0;
            OP_JUMP lab_7B48
// lab_7B40
            pri = 1;
// lab_7B48
            OP_JZER lab_7BB0
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0A50(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7BB0
            pri = 1;
            OP_JUMP lab_7BB8
// lab_7BB0
            pri = 0;
// lab_7BB8
            OP_JZER lab_7C08
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7DA8
// lab_7C08
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7C70
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7DA8
// lab_7C70
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A50(var_24, var_16)
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
            var_176 = 29984;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 30000;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_7528_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x1:
        {
// switch_7528_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x2:
        {
// switch_7528_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x3:
        {
// switch_7528_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x4:
        {
// switch_7528_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x5:
        {
// switch_7528_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A10(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C88(var_40)
            OP_JUMP switch_7528_case_default
        }
        case 0x6:
        {
// switch_7528_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x7:
        {
// switch_7528_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x8:
        {
// switch_7528_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x9:
        {
// switch_7528_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0xa:
        {
// switch_7528_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0xb:
        {
// switch_7528_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0xc:
        {
// switch_7528_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0xd:
        {
// switch_7528_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0xe:
        {
// switch_7528_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0xf:
        {
// switch_7528_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x10:
        {
// switch_7528_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x11:
        {
// switch_7528_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x12:
        {
// switch_7528_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x13:
        {
// switch_7528_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x14:
        {
// switch_7528_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x15:
        {
// switch_7528_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x16:
        {
// switch_7528_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x17:
        {
// switch_7528_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x18:
        {
// switch_7528_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x19:
        {
// switch_7528_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x1a:
        {
// switch_7528_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x1b:
        {
// switch_7528_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x1c:
        {
// switch_7528_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x1d:
        {
// switch_7528_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x1e:
        {
// switch_7528_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x1f:
        {
// switch_7528_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x20:
        {
// switch_7528_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x21:
        {
// switch_7528_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x22:
        {
// switch_7528_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x23:
        {
// switch_7528_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x24:
        {
// switch_7528_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x25:
        {
// switch_7528_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x26:
        {
// switch_7528_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x27:
        {
// switch_7528_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x28:
        {
// switch_7528_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x29:
        {
// switch_7528_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x2a:
        {
// switch_7528_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x2b:
        {
// switch_7528_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x2c:
        {
// switch_7528_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x2d:
        {
// switch_7528_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x2e:
        {
// switch_7528_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x2f:
        {
// switch_7528_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x30:
        {
// switch_7528_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x31:
        {
// switch_7528_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x32:
        {
// switch_7528_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x33:
        {
// switch_7528_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x34:
        {
// switch_7528_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x35:
        {
// switch_7528_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x36:
        {
// switch_7528_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x37:
        {
// switch_7528_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x38:
        {
// switch_7528_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x39:
        {
// switch_7528_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x3a:
        {
// switch_7528_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x3b:
        {
// switch_7528_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x3c:
        {
// switch_7528_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x3d:
        {
// switch_7528_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
        case 0x3e:
        {
// switch_7528_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A10(var_24, var_16, var_8)
            OP_JUMP switch_7528_case_default
        }
    }
}
// fun_7E48
fun_7E48() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_7F48
        case default:
        {
// switch_7F48_case_default
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
// switch_7F48_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_7F48_case_default
        }
        case 0x1:
        {
// switch_7F48_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_7F48_case_default
        }
        case 0x2:
        {
// switch_7F48_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_7F48_case_default
        }
        case 0x3:
        {
// switch_7F48_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_7F48_case_default
        }
    }
}
// fun_8008
fun_8008() {
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
    pri = fun_1B68(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_1C18()
    pri = 0;
    return pri;
}
// fun_80A0
fun_80A0() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_7E48(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_8008(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_8148
fun_8148() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_8198
// lab_8198
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30048;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_8210
    OP_JUMP lab_8240
// lab_8210
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_8198
// lab_8240
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_82C8
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_6118(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_12F0(var_56)
// lab_82C8
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_8330
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0FE0(var_24, var_16)
// lab_8330
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0FE0(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_83F0
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0A88(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0808(var_88, var_80, var_72, var_64, var_56)
// lab_83F0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_8430
    pri = 0;
    return pri;
// lab_8430
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8578
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 30168;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_09D8(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_8540
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_8578
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_08B0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_08B0(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0A88(var_40)
    pri = 0;
    return pri;
// lab_8540
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0FE0(var_16, var_8)
}
// fun_8600
fun_8600() {
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
    pri = fun_80A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1CB0(var_112)
    var_128 = 0;
    pri = fun_1D70()
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
    pri = fun_8148(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_8778
fun_8778() {
    pri = 30304;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_8800
// lab_8800
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_8980
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_8970
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_88C0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_88C0
    pri = 0;
    OP_JUMP lab_88C8
// lab_8980
    pri = 0;
    return pri;
// lab_8970
    OP_JUMP lab_87F8
// lab_87F8
    OP_INC_P_S -936
// lab_88C0
    pri = 1;
// lab_88C8
    OP_JZER lab_8940
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8938
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_8940
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_8938
}
// fun_89A0
fun_89A0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_8A38
    var_8 = 1;
    var_16 = 0;
    var_24 = 31224;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_12C8()
// lab_8A38
    pri = arg_4;
    OP_JZER lab_8A70
    var_8 = 1;
    var_16 = 8;
    pri = fun_1320(var_8)
// lab_8A70
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_8AC8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_8AC8
    pri = 0;
    OP_JUMP lab_8AD0
// lab_8AC8
    pri = 1;
// lab_8AD0
    OP_JZER lab_8B98
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_8B98
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_8B70
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1208(var_32, var_24)
    OP_JUMP lab_8B98
// lab_8B98
    pri = arg_2;
    OP_JZER lab_8C70
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_8C40
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0FE0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0758(var_40)
    OP_JUMP lab_8C70
// lab_8C70
    pri = arg_3;
    OP_JZER lab_8CA8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1290(var_8)
// lab_8CA8
    pri = 0;
    return pri;
// lab_8C40
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0FE0(var_16, var_8)
// lab_8B70
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1208(var_16, var_8)
}
// fun_8CB8
fun_8CB8() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 8802641224559852288;
    var_24 = 8;
    pri = fun_08B0(var_16)
    var_32 = 1;
    var_40 = 1;
    var_48 = 0;
    var_56 = 1;
    var_64 = 1;
    var_72 = arg_0;
    var_80 = 48;
    pri = fun_7E48(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 0;
    var_96 = 3;
    var_104 = 0;
    var_112 = 100;
    var_120 = -1;
    pri = arg_1;
    OP_LOAD_I 
    var_128 = pri;
    var_136 = arg_0;
    var_144 = 56;
    pri = fun_1B68(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 1;
    var_160 = 8;
    pri = fun_1CB0(var_152)
    pri = arg_1;
    OP_ADD_P_C 8
    OP_LOAD_I 
    alt = -1;
    OP_JEQ lab_8E50
    var_168 = 0;
    pri = arg_1;
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_176 = pri;
    var_184 = 0;
    var_192 = 24;
    pri = fun_1DA0(var_184, var_176, var_168)
// lab_8E50
    var_8 = 0;
    pri = arg_1;
    OP_ADD_P_C 16
    OP_LOAD_I 
    var_16 = pri;
    var_24 = 1;
    var_32 = 24;
    pri = fun_1DA0(var_24, var_16, var_8)
    var_40 = 0;
    pri = arg_1;
    OP_ADD_P_C 24
    OP_LOAD_I 
    var_48 = pri;
    var_56 = 2;
    var_64 = 24;
    pri = fun_1DA0(var_56, var_48, var_40)
    var_80 = 0;
    var_88 = 1;
    var_96 = 0;
    var_104 = 1;
    var_112 = 32;
    pri = fun_1E88(var_104, var_96, var_88, var_80)
    var_16 = pri;
    pri = var_16;
    switch (pri) {
// switch_96B8
        case default:
        {
// switch_96B8_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_96B8_case_0x0
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            pri = arg_1;
            OP_ADD_P_C 32
            OP_LOAD_I 
            var_48 = pri;
            var_56 = arg_0;
            var_64 = 56;
            pri = fun_1B68(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_1CB0(var_72)
            var_88 = 0;
            pri = fun_1D70()
            var_96 = 0;
            var_104 = 0;
            var_112 = 0;
            var_120 = arg_0;
            var_128 = 32;
            pri = fun_8148(var_120, var_112, var_104, var_96)
            OP_LOAD_S_BOTH 24, -8
            OP_JEQ lab_9118
            var_136 = 1;
            var_144 = 0;
            var_152 = 4641240890982006784;
            var_160 = 0;
            var_168 = 0;
            var_176 = arg_3;
            pri = float(var_176)
            var_184 = pri;
            var_192 = arg_2;
            pri = float(var_192)
            var_200 = pri;
            OP_PUSH2_C 4607182418800017408, 8802641224559852288
            var_208 = 72;
            pri = fun_0790(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136)
            var_216 = 8802641224559852288;
            var_224 = 8;
            pri = fun_08B0(var_216)
// lab_9118
            OP_JUMP switch_96B8_case_default
        }
        case 0x1:
        {
// switch_96B8_case_0x1
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            pri = arg_1;
            OP_ADD_P_C 40
            OP_LOAD_I 
            var_48 = pri;
            var_56 = arg_0;
            var_64 = 56;
            pri = fun_1B68(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_1CB0(var_72)
            var_96 = 0;
            var_104 = 0;
            var_112 = 1;
            var_120 = 0;
            var_128 = 0;
            var_136 = 0;
            var_144 = 48;
            pri = fun_1EF8(var_136, var_128, var_120, var_112, var_104, var_96)
            var_24 = pri;
            pri = var_24;
            OP_EQ_P_C_PRI 1
            OP_JZER lab_9338
            var_152 = 0;
            var_160 = 3;
            var_168 = 0;
            var_176 = 100;
            var_184 = -1;
            pri = arg_1;
            OP_ADD_P_C 48
            OP_LOAD_I 
            var_192 = pri;
            var_200 = arg_0;
            var_208 = 56;
            pri = fun_1B68(var_200, var_192, var_184, var_176, var_168, var_160, var_152)
            var_216 = 1;
            var_224 = 8;
            pri = fun_1CB0(var_216)
            var_232 = 0;
            pri = fun_1D70()
            var_240 = 0;
            var_248 = 0;
            var_256 = 0;
            var_264 = arg_0;
            var_272 = 32;
            pri = fun_8148(var_264, var_256, var_248, var_240)
            var_280 = 31272;
            pri = SoundPostEvent(var_280)
            pri = 1;
            return pri;
// lab_9338
            var_8 = 0;
            pri = fun_1D70()
            var_16 = 0;
            var_24 = 0;
            var_32 = 0;
            var_40 = arg_0;
            var_48 = 32;
            pri = fun_8148(var_40, var_32, var_24, var_16)
            OP_LOAD_S_BOTH 24, -8
            OP_JEQ lab_9488
            var_56 = 1;
            var_64 = 0;
            var_72 = 4641240890982006784;
            var_80 = 0;
            var_88 = 0;
            var_96 = arg_3;
            pri = float(var_96)
            var_104 = pri;
            var_112 = arg_2;
            pri = float(var_112)
            var_120 = pri;
            OP_PUSH2_C 4607182418800017408, 8802641224559852288
            var_128 = 72;
            pri = fun_0790(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
            var_136 = 8802641224559852288;
            var_144 = 8;
            pri = fun_08B0(var_136)
// lab_9488
            OP_JUMP switch_96B8_case_default
        }
        case 0x2:
        {
// switch_96B8_case_0x2
            pri = arg_1;
            OP_ADD_P_C 56
            OP_LOAD_I 
            alt = -1;
            OP_JEQ lab_9558
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            pri = arg_1;
            OP_ADD_P_C 56
            OP_LOAD_I 
            var_48 = pri;
            var_56 = arg_0;
            var_64 = 56;
            pri = fun_1B68(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_1CB0(var_72)
// lab_9558
            var_8 = 0;
            pri = fun_1D70()
            var_16 = 0;
            var_24 = 0;
            var_32 = 0;
            var_40 = arg_0;
            var_48 = 32;
            pri = fun_8148(var_40, var_32, var_24, var_16)
            OP_LOAD_S_BOTH 24, -8
            OP_JEQ lab_96A8
            var_56 = 1;
            var_64 = 0;
            var_72 = 4641240890982006784;
            var_80 = 0;
            var_88 = 0;
            var_96 = arg_3;
            pri = float(var_96)
            var_104 = pri;
            var_112 = arg_2;
            pri = float(var_112)
            var_120 = pri;
            OP_PUSH2_C 4607182418800017408, 8802641224559852288
            var_128 = 72;
            pri = fun_0790(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
            var_136 = 8802641224559852288;
            var_144 = 8;
            pri = fun_08B0(var_136)
// lab_96A8
            OP_JUMP switch_96B8_case_default
        }
    }
}
// fun_9718
fun_9718() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0408(var_8)
    var_24 = 0;
    pri = fun_0440()
    pri = arg_1;
    OP_JZER lab_9790
    var_32 = 31384;
    pri = SoundPostEvent(var_32)
// lab_9790
    var_8 = 31584;
    pri = SoundPostEvent(var_8)
    var_16 = 1;
    var_24 = 0;
    var_32 = 31848;
    var_40 = 8;
    var_48 = 32;
    pri = fun_02E0(var_40, var_32, var_24, var_16)
    var_56 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_9810
fun_9810() {
    pri = arg_0;
    alt = -1;
    OP_JEQ lab_9860
    var_8 = arg_8;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_9718(var_16, var_8)
// lab_9860
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_08B0(var_8)
    var_24 = arg_6;
    pri = SetPlayerUniform(var_24)
    pri = arg_1;
    alt = -1;
    OP_JEQ lab_9900
    pri = arg_2;
    alt = -1;
    OP_JEQ lab_9900
    pri = 1;
    OP_JUMP lab_9908
// lab_9900
    pri = 0;
// lab_9908
    OP_JZER lab_9AA0
    pri = arg_7;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_99E8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = arg_4;
    pri = float(var_48)
    var_56 = pri;
    var_64 = arg_3;
    pri = float(var_64)
    var_72 = pri;
    var_80 = arg_2;
    var_88 = arg_1;
    var_96 = 72;
    pri = fun_04D0(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    OP_JUMP lab_9A90
// lab_9AA0
    var_8 = 1;
    var_16 = 1;
    var_24 = arg_4;
    pri = float(var_24)
    var_32 = pri;
    var_40 = arg_3;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 8802641224559852288;
    var_64 = 40;
    pri = fun_0630(var_56, var_48, var_40, var_32, var_24)
    pri = CallReloadPlayer()
    var_72 = 5;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_99E8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = arg_4;
    pri = float(var_48)
    var_56 = pri;
    var_64 = arg_3;
    pri = float(var_64)
    var_72 = pri;
    var_80 = arg_2;
    var_88 = arg_1;
    var_96 = arg_7;
    var_104 = 80;
    pri = fun_0570(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_9A90
    OP_JUMP lab_9B60
// lab_9B60
    pri = arg_5;
    alt = -1;
    OP_JEQ lab_9BD8
    var_8 = 1;
    var_16 = arg_5;
    pri = float(var_16)
    var_24 = pri;
    var_32 = 8802641224559852288;
    var_40 = 24;
    pri = fun_06D8(var_32, var_24, var_16)
// lab_9BD8
    var_8 = 31864;
    pri = SoundPostEvent(var_8)
    var_16 = 32136;
    var_24 = 8;
    var_32 = 16;
    pri = fun_0280(var_24, var_16)
    var_40 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_9C48
fun_9C48() {
    var_8 = -3293621181990616472;
    pri = FlagReset(var_8)
    var_16 = 0;
    var_24 = arg_5;
    var_32 = 0;
    var_40 = arg_6;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = arg_0;
    var_88 = 72;
    pri = fun_9810(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_9CE8
fun_9CE8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_8778(var_24)
    pri = 0;
    return pri;
}
// fun_9D50
fun_9D50() {
    pri = g_mode;
    switch (pri) {
// switch_9FC8
        case default:
        {
// switch_9FC8_case_default
            pri = CommandNOP()
            OP_JUMP lab_A0C0
// lab_A0C0
            pri = 0;
            return pri;
        }
        case 0x88e04f0b35a3fde4:
        {
// switch_9FC8_case_0x88e04f0b35a3fde4
            var_8 = 0;
            pri = fun_C6C0()
            OP_JUMP lab_A0C0
        }
        case 0x917ab69d5dbc839f:
        {
// switch_9FC8_case_0x917ab69d5dbc839f
            var_8 = 0;
            pri = fun_BCF8()
            OP_JUMP lab_A0C0
        }
        case 0x9ebe3946113bc7e5:
        {
// switch_9FC8_case_0x9ebe3946113bc7e5
            var_8 = 0;
            pri = fun_C7E0()
            OP_JUMP lab_A0C0
        }
        case 0xa7f34830471538f9:
        {
// switch_9FC8_case_0xa7f34830471538f9
            var_8 = 0;
            pri = fun_C988()
            OP_JUMP lab_A0C0
        }
        case 0xaa365b61111b3e90:
        {
// switch_9FC8_case_0xaa365b61111b3e90
            var_8 = 0;
            pri = fun_CB30()
            OP_JUMP lab_A0C0
        }
        case 0xaf675c2215b20fb7:
        {
// switch_9FC8_case_0xaf675c2215b20fb7
            var_8 = 0;
            pri = fun_BBA8()
            OP_JUMP lab_A0C0
        }
        case 0xed8a4d14c2466ad1:
        {
// switch_9FC8_case_0xed8a4d14c2466ad1
            var_8 = 0;
            pri = fun_CA10()
            OP_JUMP lab_A0C0
        }
        case 0x0:
        {
// switch_9FC8_case_0x0
            var_8 = 0;
            pri = fun_A0D0()
            OP_JUMP lab_A0C0
        }
        case 0x9ae67798319382f:
        {
// switch_9FC8_case_0x9ae67798319382f
            var_8 = 0;
            pri = fun_D2A8()
            OP_JUMP lab_A0C0
        }
        case 0x33aac204fddd960e:
        {
// switch_9FC8_case_0x33aac204fddd960e
            var_8 = 0;
            pri = fun_CF30()
            OP_JUMP lab_A0C0
        }
        case 0x41bed8a0604b5265:
        {
// switch_9FC8_case_0x41bed8a0604b5265
            var_8 = 0;
            pri = fun_BDD0()
            OP_JUMP lab_A0C0
        }
        case 0x4b759a1e6367a5b3:
        {
// switch_9FC8_case_0x4b759a1e6367a5b3
            var_8 = 0;
            pri = fun_BC98()
            OP_JUMP lab_A0C0
        }
        case 0x62d632bf1facff82:
        {
// switch_9FC8_case_0x62d632bf1facff82
            var_8 = 0;
            pri = fun_CBB8()
            OP_JUMP lab_A0C0
        }
        case 0x6713ac73185a25a8:
        {
// switch_9FC8_case_0x6713ac73185a25a8
            var_8 = 0;
            pri = fun_C868()
            OP_JUMP lab_A0C0
        }
    }
}
// fun_A0D0
fun_A0D0() {
    pri = 0;
    return pri;
}
// fun_A0E8
fun_A0E8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_89A0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_A140
fun_A140() {
    pri = 0;
    return pri;
}
// fun_A158
fun_A158() {
    pri = 0;
    return pri;
}
// fun_A170
fun_A170() {
    pri = EvCameraStart()
    OP_PUSH2_C 1200556321856585219, -5090495376002294011
    pri = SetBamiriInfoToChara(var_0, var_-8)
    OP_PUSH2_C 1200566217461239118, 5505280047288130008
    pri = SetBamiriInfoToChara(var_0, var_-8)
    OP_PUSH2_C 6022826561815351177, -7586894728362472653
    pri = SetBamiriInfoToChara(var_0, var_-8)
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1711;
    pri = float(var_32)
    var_40 = pri;
    var_48 = 1900;
    pri = float(var_48)
    var_56 = pri;
    var_64 = -640719265393218035;
    var_72 = 48;
    pri = fun_0680(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 1;
    var_88 = 1;
    OP_PUSH4_C -4582834833314545664, 4659640118561210368, 4656071103817449472, 8802641224559852288
    var_96 = 48;
    pri = fun_0680(var_88, var_80, var_72, var_64, var_56, var_48)
    var_104 = 1;
    var_112 = 8;
    pri = fun_0060(var_104)
    var_120 = 8732945893112555196;
    pri = FlagGet(var_120)
    alt = 1;
    OP_JEQ lab_B120
    var_128 = 1;
    var_136 = 1;
    OP_PUSH4_C -4582834833314545664, 4659640118561210368, 4656071103817449472, 8802641224559852288
    var_144 = 48;
    pri = fun_0680(var_136, var_128, var_120, var_112, var_104, var_96)
    var_152 = 1;
    var_160 = 0;
    pri = float(var_160)
    var_168 = pri;
    var_176 = 1200556321856585219;
    var_184 = 24;
    pri = fun_06D8(var_176, var_168, var_160)
    var_192 = 1;
    var_200 = 0;
    pri = float(var_200)
    var_208 = pri;
    var_216 = 1200566217461239118;
    var_224 = 24;
    pri = fun_06D8(var_216, var_208, var_200)
    var_232 = 1;
    var_240 = 0;
    pri = float(var_240)
    var_248 = pri;
    var_256 = 6022826561815351177;
    var_264 = 24;
    pri = fun_06D8(var_256, var_248, var_240)
    var_272 = 15;
    var_280 = 8;
    pri = fun_0060(var_272)
    var_288 = 0;
    var_296 = 4631952216750555136;
    var_304 = 0;
    OP_PUSH5_C 4656937914804322959, 4635247585040395141, 4656145782647208018, 4659636798036094484, 4649257386279656489
    var_312 = 4656892944778746921;
    var_320 = 1;
    pri = EvCameraMove(var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248)
    var_328 = 0;
    pri = fun_2170()
    var_336 = 32152;
    pri = SoundPostEvent(var_336)
    var_344 = 32424;
    var_352 = 8;
    var_360 = 16;
    pri = fun_0280(var_352, var_344)
    var_368 = 0;
    pri = fun_0350()
    var_376 = 0;
    var_384 = 4631952216750555136;
    var_392 = 3;
    OP_PUSH5_C 4657075463708957737, 4634889408132530831, 4655630903342153073, 4659974392086286828, 4644492630650456637
    var_400 = 4654125188138611507;
    var_408 = 150;
    pri = EvCameraMove(var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336)
    var_416 = 135;
    var_424 = 8;
    pri = fun_0060(var_416)
    var_432 = 1;
    var_440 = 0;
    var_448 = 4641240890982006784;
    var_456 = 0;
    var_464 = 0;
    OP_PUSH4_C 4656836363910381568, 4656071103817449472, 4607182418800017408, 8802641224559852288
    var_472 = 72;
    pri = fun_0790(var_464, var_456, var_448, var_440, var_432, var_424, var_416, var_408, var_400)
    var_480 = 30;
    var_488 = 8;
    pri = fun_0060(var_480)
    var_496 = 0;
    var_504 = 4629728564434540954;
    var_512 = 0;
    OP_PUSH5_C 4656481925342051697, 4640732828649044050, 4655805505788643901, 4653096880883850281, 4648295445546747822
    var_520 = 4655053439835245117;
    var_528 = 1;
    pri = EvCameraMove(var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464, var_456)
    var_536 = 0;
    pri = fun_2170()
    var_544 = 0;
    var_552 = 4629728564434540954;
    var_560 = 0;
    OP_PUSH5_C 4656224507679756780, 4632326578469580308, 4655748375164464660, 4652662485829948539, 4644805067874605466
    var_568 = 4654960201249209713;
    var_576 = 150;
    pri = EvCameraMove(var_576, var_568, var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504)
    var_584 = 120;
    var_592 = 8;
    pri = fun_0060(var_584)
    var_600 = 0;
    var_608 = 4629728564434540954;
    var_616 = 0;
    OP_PUSH5_C 4656591392719713075, 4632912046421138473, 4655994138003505152, 4659088449597090038, 4636688736921153700
    var_624 = 4656071807504891249;
    var_632 = 1;
    pri = EvCameraMove(var_632, var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560)
    var_640 = 0;
    pri = fun_2170()
    var_648 = 0;
    var_656 = 4629728564434540954;
    var_664 = 2;
    OP_PUSH5_C 4654166837639071662, 4634719819459062661, 4656449555719729971, 4657342623044274749, 4635871052113809244
    var_672 = 4655684383587728097;
    var_680 = 110;
    pri = EvCameraMove(var_680, var_672, var_664, var_656, var_648, var_640, var_632, var_624, var_616, var_608)
    var_688 = 8802641224559852288;
    var_696 = 8;
    pri = fun_08B0(var_688)
    var_704 = 0;
    var_712 = 0;
    var_720 = 0;
    var_728 = 0;
    OP_PUSH2_C 8802641224559852288, 1200556321856585219
    var_736 = 48;
    pri = fun_0858(var_728, var_720, var_712, var_704, var_696, var_688)
    var_744 = 0;
    var_752 = 0;
    var_760 = 0;
    var_768 = 0;
    OP_PUSH2_C 8802641224559852288, 1200566217461239118
    var_776 = 48;
    pri = fun_0858(var_768, var_760, var_752, var_744, var_736, var_728)
    var_784 = 0;
    var_792 = 0;
    var_800 = 0;
    var_808 = 0;
    OP_PUSH2_C 8802641224559852288, 6022826561815351177
    var_816 = 48;
    pri = fun_0858(var_808, var_800, var_792, var_784, var_776, var_768)
    var_824 = 1200556321856585219;
    var_832 = 8;
    pri = fun_08B0(var_824)
    var_840 = 1200566217461239118;
    var_848 = 8;
    pri = fun_08B0(var_840)
    var_856 = 6022826561815351177;
    var_864 = 8;
    pri = fun_08B0(var_856)
    var_872 = 0;
    pri = fun_2170()
    var_880 = 15;
    var_888 = 8;
    pri = fun_0060(var_880)
    var_896 = 0;
    var_904 = 3;
    var_912 = 0;
    var_920 = 100;
    var_928 = -1;
    OP_PUSH2_C -3639933605060301579, -640719265393218035
    var_936 = 56;
    pri = fun_1B68(var_928, var_920, var_912, var_904, var_896, var_888, var_880)
    var_944 = 1;
    var_952 = 8;
    pri = fun_1CB0(var_944)
    var_960 = 0;
    pri = fun_1D70()
    var_968 = 0;
    var_976 = 4629728564434540954;
    var_984 = 0;
    OP_PUSH5_C 4656767182638761902, 4640959767849017016, 4655189251511508009, 4655828947376548086, 4645142310081076920
    var_992 = 4656681728595051151;
    var_1000 = 1;
    pri = EvCameraMove(var_1000, var_992, var_984, var_976, var_968, var_960, var_952, var_944, var_936, var_928)
    var_1008 = 0;
    pri = fun_2170()
    var_1016 = 0;
    var_1024 = 4629728564434540954;
    var_1032 = 2;
    OP_PUSH5_C 4656571997334599107, 4640959767849017016, 4655030965817573376, 4655588945978437140, 4645140374940612035
    var_1040 = 4656523882705767629;
    var_1048 = 240;
    pri = EvCameraMove(var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976)
    var_1056 = 0;
    var_1064 = 3;
    var_1072 = 0;
    var_1080 = 100;
    var_1088 = -1;
    OP_PUSH2_C -3639936903595186212, -640719265393218035
    var_1096 = 56;
    pri = fun_1B68(var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040)
    var_1104 = 1;
    var_1112 = 8;
    pri = fun_1CB0(var_1104)
    var_1120 = 0;
    pri = fun_1D70()
    var_1128 = 1;
    var_1136 = -1;
    var_1144 = -1;
    var_1152 = 3;
    var_1160 = 0;
    var_1168 = 30;
    var_1176 = 2148228232595585080;
    var_1184 = 56;
    pri = fun_2200(var_1176, var_1168, var_1160, var_1152, var_1144, var_1136, var_1128)
    var_1192 = 1;
    var_1200 = -1;
    var_1208 = -1;
    var_1216 = 3;
    var_1224 = 0;
    var_1232 = 0;
    var_1240 = 1200556321856585219;
    var_1248 = 56;
    pri = fun_2200(var_1240, var_1232, var_1224, var_1216, var_1208, var_1200, var_1192)
    var_1256 = 0;
    var_1264 = 3;
    var_1272 = 0;
    var_1280 = 100;
    var_1288 = -1;
    OP_PUSH2_C -3639935804083558001, -640719265393218035
    var_1296 = 56;
    pri = fun_1B68(var_1288, var_1280, var_1272, var_1264, var_1256, var_1248, var_1240)
    var_1304 = 2148228232595585080;
    var_1312 = 8;
    pri = fun_0A88(var_1304)
    var_1320 = 1200556321856585219;
    var_1328 = 8;
    pri = fun_0A88(var_1320)
    var_1336 = 1;
    var_1344 = 8;
    pri = fun_1CB0(var_1336)
    var_1352 = 0;
    pri = fun_1D70()
    var_1360 = 2148228232595585080;
    var_1368 = 8;
    pri = fun_0A88(var_1360)
    var_1376 = 1;
    var_1384 = 0;
    var_1392 = 31224;
    var_1400 = 8;
    var_1408 = 32;
    pri = fun_02E0(var_1400, var_1392, var_1384, var_1376)
    var_1416 = 0;
    pri = fun_0350()
    var_1424 = 3;
    var_1432 = 1;
    pri = EvCameraEnd(var_1432, var_1424)
    var_1440 = 1;
    var_1448 = 90;
    pri = float(var_1448)
    var_1456 = pri;
    var_1464 = 1200556321856585219;
    var_1472 = 24;
    pri = fun_06D8(var_1464, var_1456, var_1448)
    var_1480 = 1;
    var_1488 = 0;
    pri = float(var_1488)
    var_1496 = pri;
    var_1504 = 1200566217461239118;
    var_1512 = 24;
    pri = fun_06D8(var_1504, var_1496, var_1488)
    var_1520 = 1;
    var_1528 = -90;
    pri = float(var_1528)
    var_1536 = pri;
    var_1544 = 6022826561815351177;
    var_1552 = 24;
    pri = fun_06D8(var_1544, var_1536, var_1528)
    var_1560 = 15;
    var_1568 = 8;
    pri = fun_0060(var_1560)
    var_1576 = 32440;
    var_1584 = 8;
    var_1592 = 16;
    pri = fun_0280(var_1584, var_1576)
    var_1600 = 0;
    pri = fun_0350()
    var_1608 = 8732945893112555196;
    pri = FlagSet(var_1608)
    OP_JUMP lab_B440
// lab_B120
    var_8 = 3;
    var_16 = 1;
    pri = EvCameraEnd(var_16, var_8)
    var_24 = 1;
    var_32 = 1;
    OP_PUSH4_C -4582834833314545664, 4657715973212602368, 4656071103817449472, 8802641224559852288
    var_40 = 48;
    pri = fun_0680(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = 15;
    var_56 = 8;
    pri = fun_0060(var_48)
    var_64 = 1;
    var_72 = 0;
    var_80 = 4641240890982006784;
    var_88 = 0;
    var_96 = 0;
    OP_PUSH4_C 4656836363910381568, 4656071103817449472, 4607182418800017408, 8802641224559852288
    var_104 = 72;
    pri = fun_0790(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
    var_112 = 32488;
    var_120 = 8;
    var_128 = 16;
    pri = fun_0280(var_120, var_112)
    var_136 = 0;
    pri = fun_0350()
    var_144 = 8802641224559852288;
    var_152 = 8;
    pri = fun_08B0(var_144)
    var_160 = 0;
    var_168 = 3;
    var_176 = 0;
    var_184 = 100;
    var_192 = -1;
    OP_PUSH2_C -3639933605060301579, -640719265393218035
    var_200 = 56;
    pri = fun_1B68(var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_208 = 1;
    var_216 = 8;
    pri = fun_1CB0(var_208)
    var_224 = 0;
    pri = fun_1D70()
    var_232 = 0;
    var_240 = 3;
    var_248 = 0;
    var_256 = 100;
    var_264 = -1;
    OP_PUSH2_C -3639936903595186212, -640719265393218035
    var_272 = 56;
    pri = fun_1B68(var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_280 = 1;
    var_288 = 8;
    pri = fun_1CB0(var_280)
    var_296 = 0;
    pri = fun_1D70()
    var_304 = 0;
    var_312 = 3;
    var_320 = 0;
    var_328 = 100;
    var_336 = -1;
    OP_PUSH2_C -3639935804083558001, -640719265393218035
    var_344 = 56;
    pri = fun_1B68(var_336, var_328, var_320, var_312, var_304, var_296, var_288)
    var_352 = 1;
    var_360 = 8;
    pri = fun_1CB0(var_352)
    var_368 = 0;
    pri = fun_1D70()
// lab_B440
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C 8709384682135972558, -640719265393218035
    var_48 = 56;
    pri = fun_1B68(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_1CB0(var_56)
    var_72 = 0;
    pri = fun_1D70()
    var_80 = 1;
    var_88 = 1;
    var_96 = -1;
    var_104 = -1;
    var_112 = 0;
    var_120 = 3;
    var_128 = 1200556321856585219;
    var_136 = 56;
    pri = fun_3DE0(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_144 = 1;
    var_152 = 1;
    var_160 = -1;
    var_168 = -1;
    var_176 = 0;
    var_184 = 3;
    var_192 = 1200566217461239118;
    var_200 = 56;
    pri = fun_3DE0(var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_208 = 1;
    var_216 = 1;
    var_224 = -1;
    var_232 = -1;
    var_240 = 0;
    var_248 = 3;
    var_256 = 6022826561815351177;
    var_264 = 56;
    pri = fun_3DE0(var_256, var_248, var_240, var_232, var_224, var_216, var_208)
    var_272 = 1;
    var_280 = 0;
    var_288 = 100;
    pri = float(var_288)
    var_296 = pri;
    var_304 = 0;
    pri = float(var_304)
    var_312 = pri;
    var_320 = 1;
    OP_PUSH4_C 4655239873026850816, 4655305843724517376, 4611686018427387904, -640719265393218035
    var_328 = 72;
    pri = fun_0790(var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    var_336 = -640719265393218035;
    var_344 = 8;
    pri = fun_08B0(var_336)
    var_352 = 32504;
    pri = SoundPostEvent(var_352)
    pri = 0;
    return pri;
}
// fun_B6D8
fun_B6D8() {
    pri = 0;
    return pri;
}
// fun_B6F0
fun_B6F0() {
    var_8 = 785;
    var_16 = 8;
    pri = fun_9CE8(var_8)
    var_24 = 6023732433702693609;
    pri = VanishFlagReset(var_24)
    var_32 = -3293621181990616472;
    pri = FlagSet(var_32)
    pri = 0;
    return pri;
}
// fun_B778
fun_B778() {
    var_8 = 770;
    var_16 = 8;
    pri = fun_9CE8(var_8)
    var_24 = -3293621181990616472;
    pri = FlagSet(var_24)
    pri = 0;
    return pri;
}
// fun_B7D8
fun_B7D8() {
    var_8 = 790;
    var_16 = 8;
    pri = fun_9CE8(var_8)
    var_24 = 0;
    var_32 = 4853304701955607276;
    pri = WorkSet(var_32, var_24)
    var_40 = 0;
    var_48 = 4853308000490491909;
    pri = WorkSet(var_48, var_40)
    var_56 = 0;
    var_64 = 4853306900978863698;
    pri = WorkSet(var_64, var_56)
    var_72 = 0;
    var_80 = 7889727436089521219;
    pri = WorkSet(var_80, var_72)
    var_88 = 0;
    var_96 = -7033287532161752766;
    pri = WorkSet(var_96, var_88)
    var_104 = 0;
    var_112 = 1838359511291935061;
    pri = WorkSet(var_112, var_104)
    var_120 = -6053895580475888860;
    pri = FlagSet(var_120)
    var_128 = -3293621181990616472;
    pri = FlagReset(var_128)
    pri = 0;
    return pri;
}
// fun_B980
fun_B980() {
    var_8 = 32728;
    pri = SoundPostEvent(var_8)
    pri = 0;
    return pri;
}
// fun_B9B8
fun_B9B8() {
    var_8 = 180;
    var_16 = 7173170291637340478;
    var_24 = 1850;
    var_32 = 2410;
    OP_PUSH2_C 4970112047004925188, 1082012253497709453
    var_40 = 3;
    var_48 = 56;
    pri = fun_9C48(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_BA30
fun_BA30() {
    var_8 = 0;
    var_16 = 1;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 26500;
    pri = float(var_48)
    var_56 = pri;
    var_64 = 20000;
    pri = float(var_64)
    var_72 = pri;
    OP_PUSH2_C 4969121387028096302, 1082967729102435587
    var_80 = 72;
    pri = fun_04D0(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_88 = 1;
    var_96 = 180;
    pri = float(var_96)
    var_104 = pri;
    var_112 = 8802641224559852288;
    var_120 = 24;
    pri = fun_06D8(var_112, var_104, var_96)
    var_128 = 32992;
    pri = SoundPostEvent(var_128)
    var_136 = 33264;
    var_144 = 8;
    var_152 = 16;
    pri = fun_0280(var_144, var_136)
    var_160 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_BBA8
fun_BBA8() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_A0E8()
    var_16 = 0;
    pri = fun_A140()
    var_24 = 0;
    pri = fun_A158()
    var_32 = 0;
    pri = fun_A170()
    var_40 = 0;
    pri = fun_B6D8()
    var_48 = 0;
    pri = fun_B6F0()
    var_56 = 0;
    pri = fun_B980()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_BC98
fun_BC98() {
    var_8 = 0;
    pri = fun_A140()
    var_16 = 0;
    pri = fun_B6F0()
    var_24 = 0;
    pri = fun_B7D8()
    pri = 0;
    return pri;
}
// fun_BCF8
fun_BCF8() {
    pri = 33280;
    OP_ADDR_ALT -64
    OP_MOVS 64
    var_72 = 2933;
    var_80 = 1908;
    OP_PUSH_P_ADR -64
    var_88 = -640719265393218035;
    var_96 = 32;
    pri = fun_8CB8(var_88, var_80, var_72, var_64)
    OP_JZER lab_BDB8
    var_104 = 0;
    pri = fun_B778()
    var_112 = 0;
    pri = fun_B9B8()
// lab_BDB8
    pri = 0;
    return pri;
}
// fun_BDD0
fun_BDD0() {
    var_8 = 33344;
    pri = SoundPostEvent(var_8)
    var_16 = 33584;
    pri = SoundPostEvent(var_16)
    var_24 = 0;
    var_32 = 3;
    var_40 = 0;
    var_48 = 100;
    var_56 = -1;
    OP_PUSH2_C 8709390179694113613, -640719265393218035
    var_64 = 56;
    pri = fun_1B68(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1CB0(var_72)
    var_88 = 0;
    pri = fun_1D70()
    var_96 = 1;
    var_104 = 0;
    var_112 = 31224;
    var_120 = 8;
    var_128 = 32;
    pri = fun_02E0(var_120, var_112, var_104, var_96)
    var_136 = 0;
    pri = fun_0350()
    pri = EvCameraStart()
    var_144 = 1;
    var_152 = 1;
    var_160 = 1975;
    pri = float(var_160)
    var_168 = pri;
    var_176 = 1862;
    pri = float(var_176)
    var_184 = pri;
    var_192 = 8802641224559852288;
    var_200 = 40;
    pri = fun_0630(var_192, var_184, var_176, var_168, var_160)
    var_208 = 1;
    var_216 = 1;
    OP_PUSH4_C -4606056518893174784, 4655156310143139840, 4656062307724427264, 6022826561815351177
    var_224 = 48;
    pri = fun_0680(var_216, var_208, var_200, var_192, var_184, var_176)
    var_232 = 1;
    var_240 = 1;
    OP_PUSH4_C 4621819117588971520, 4655112329678028800, 4655653289398894592, 1200566217461239118
    var_248 = 48;
    pri = fun_0680(var_240, var_232, var_224, var_216, var_208, var_200)
    var_256 = 1;
    var_264 = 1;
    OP_PUSH4_C 4632233691727265792, 4655543338236116992, 4654989184375717888, 1200556321856585219
    var_272 = 48;
    pri = fun_0680(var_264, var_256, var_248, var_240, var_232, var_224)
    var_280 = 0;
    var_288 = 33808;
    var_296 = 6022826561815351177;
    var_304 = 24;
    pri = fun_0A10(var_296, var_288, var_280)
    var_312 = 0;
    var_320 = 33936;
    var_328 = 1200566217461239118;
    var_336 = 24;
    pri = fun_0A10(var_328, var_320, var_312)
    var_344 = 0;
    var_352 = 34064;
    var_360 = 1200556321856585219;
    var_368 = 24;
    pri = fun_0A10(var_360, var_352, var_344)
    var_376 = 6022826561815351177;
    var_384 = 8;
    pri = fun_0A88(var_376)
    var_392 = 1200566217461239118;
    var_400 = 8;
    pri = fun_0A88(var_392)
    var_408 = 1200556321856585219;
    var_416 = 8;
    pri = fun_0A88(var_408)
    var_424 = 5;
    var_432 = 8;
    pri = fun_0060(var_424)
    var_440 = 1;
    OP_PUSH2_C 8802641224559852288, -640719265393218035
    var_448 = 24;
    pri = fun_0718(var_440, var_432, var_424)
    var_456 = 1;
    OP_PUSH2_C -640719265393218035, 8802641224559852288
    var_464 = 24;
    pri = fun_0718(var_456, var_448, var_440)
    var_472 = 8802641224559852288;
    var_480 = 8;
    pri = fun_08B0(var_472)
    var_488 = -640719265393218035;
    var_496 = 8;
    pri = fun_08B0(var_488)
    var_504 = 0;
    var_512 = 4631952216750555136;
    var_520 = 0;
    OP_PUSH5_C 4653873927741432136, -4597640417089526170, 4655741602172837560, 4656804939868059730, 4638320588098633728
    var_528 = 4655621623464014643;
    var_536 = 1;
    pri = EvCameraMove(var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    var_544 = 0;
    pri = fun_2170()
    var_552 = 0;
    var_560 = 4631952216750555136;
    var_568 = 2;
    OP_PUSH5_C 4653873927741432136, -4597640417089526170, 4655741602172837560, 4656806193311315395, 4638308625412123525
    var_576 = 4655753081074231542;
    var_584 = 240;
    pri = EvCameraMove(var_584, var_576, var_568, var_560, var_552, var_544, var_536, var_528, var_520, var_512)
    var_592 = 32440;
    var_600 = 30;
    var_608 = 16;
    pri = fun_0280(var_600, var_592)
    var_616 = 0;
    pri = fun_0350()
    var_624 = 1;
    var_632 = 1;
    var_640 = 0;
    var_648 = 1;
    var_656 = 1;
    var_664 = -640719265393218035;
    var_672 = 48;
    pri = fun_7E48(var_664, var_656, var_648, var_640, var_632, var_624)
    var_680 = 0;
    var_688 = 3;
    var_696 = 0;
    var_704 = 100;
    var_712 = -1;
    OP_PUSH2_C 8709382483112716136, -640719265393218035
    var_720 = 56;
    pri = fun_1B68(var_712, var_704, var_696, var_688, var_680, var_672, var_664)
    var_728 = 1;
    var_736 = 8;
    pri = fun_1CB0(var_728)
    var_744 = 0;
    pri = fun_1D70()
    var_752 = 0;
    var_760 = 3;
    var_768 = 0;
    var_776 = 100;
    var_784 = -1;
    OP_PUSH2_C -3639083682571883701, -640719265393218035
    var_792 = 56;
    pri = fun_1B68(var_784, var_776, var_768, var_760, var_752, var_744, var_736)
    var_800 = 1;
    var_808 = 8;
    pri = fun_1CB0(var_800)
    var_816 = 0;
    pri = fun_1D70()
    var_824 = 0;
    var_832 = 0;
    var_840 = 0;
    var_848 = -640719265393218035;
    var_856 = 32;
    pri = fun_8148(var_848, var_840, var_832, var_824)
    var_864 = 3;
    var_872 = 8;
    pri = fun_0408(var_864)
    var_880 = 0;
    pri = fun_0440()
    var_888 = 34192;
    pri = SoundPostEvent(var_888)
    var_896 = 34392;
    pri = SoundPostEvent(var_896)
    var_904 = 1;
    var_912 = 0;
    var_920 = 34656;
    var_928 = 8;
    var_936 = 32;
    pri = fun_02E0(var_928, var_920, var_912, var_904)
    var_944 = 0;
    pri = fun_0350()
    var_952 = 3;
    var_960 = 1;
    pri = EvCameraEnd(var_960, var_952)
    var_968 = 0;
    pri = fun_B7D8()
    var_976 = 0;
    pri = fun_BA30()
    pri = 0;
    return pri;
}
// fun_C6C0
fun_C6C0() {
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C 5856865077965165692, 1200556321856585219
    var_48 = 56;
    pri = fun_1B68(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_1CB0(var_56)
    var_72 = 0;
    pri = fun_1D70()
    var_80 = 1;
    var_88 = 1;
    var_96 = -1;
    var_104 = -1;
    var_112 = 0;
    var_120 = 3;
    var_128 = 1200556321856585219;
    var_136 = 56;
    pri = fun_3DE0(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_144 = 1;
    var_152 = 8;
    pri = fun_0060(var_144)
    pri = 0;
    return pri;
}
// fun_C7E0
fun_C7E0() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 5856868376500050325;
    var_88 = 80;
    pri = fun_8600(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_C868
fun_C868() {
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C -3510538644151974242, 1200566217461239118
    var_48 = 56;
    pri = fun_1B68(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_1CB0(var_56)
    var_72 = 0;
    pri = fun_1D70()
    var_80 = 1;
    var_88 = 1;
    var_96 = -1;
    var_104 = -1;
    var_112 = 0;
    var_120 = 3;
    var_128 = 1200566217461239118;
    var_136 = 56;
    pri = fun_3DE0(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_144 = 1;
    var_152 = 8;
    pri = fun_0060(var_144)
    pri = 0;
    return pri;
}
// fun_C988
fun_C988() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -3510539743663602453;
    var_88 = 80;
    pri = fun_8600(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_CA10
fun_CA10() {
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C 2684351791962194483, 6022826561815351177
    var_48 = 56;
    pri = fun_1B68(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_1CB0(var_56)
    var_72 = 0;
    pri = fun_1D70()
    var_80 = 1;
    var_88 = 1;
    var_96 = -1;
    var_104 = -1;
    var_112 = 0;
    var_120 = 3;
    var_128 = 6022826561815351177;
    var_136 = 56;
    pri = fun_3DE0(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_144 = 1;
    var_152 = 8;
    pri = fun_0060(var_144)
    pri = 0;
    return pri;
}
// fun_CB30
fun_CB30() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 2684352891473822694;
    var_88 = 80;
    pri = fun_8600(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_CBB8
fun_CBB8() {
    var_8 = 0;
    var_16 = -1018736999534205329;
    pri = WorkSet(var_16, var_8)
    var_24 = 1;
    var_32 = -1018735900022577118;
    pri = WorkSet(var_32, var_24)
    var_40 = 1;
    var_48 = -1018734800510948907;
    pri = WorkSet(var_48, var_40)
    var_56 = 2148228232595585080;
    pri = VanishFlagSet(var_56)
    var_64 = -6037470456644495193;
    pri = VanishFlagReset(var_64)
    var_72 = 3693668348792309152;
    pri = VanishFlagReset(var_72)
    var_80 = 161;
    var_88 = 1323711712404005738;
    pri = WorkSet(var_88, var_80)
    var_96 = 0;
    var_104 = -1;
    var_112 = -8344858373682187686;
    var_120 = 24;
    pri = fun_1FB0(var_112, var_104, var_96)
    var_128 = 0;
    pri = fun_2070()
    OP_JZER lab_CD70
    var_136 = 0;
    pri = fun_2120()
// lab_CD70
    var_8 = 1;
    var_16 = -2925758277729978379;
    pri = WorkSet(var_16, var_8)
    var_24 = 32440;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0280(var_32, var_24)
    OP_PUSH2_C 1200566217461239118, 5505280047288130008
    pri = SetBamiriInfoToChara(var_40, var_32)
    OP_PUSH2_C 1200556321856585219, -5090497575025550433
    pri = SetBamiriInfoToChara(var_40, var_32)
    OP_PUSH2_C 6022826561815351177, -7586894728362472653
    pri = SetBamiriInfoToChara(var_40, var_32)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 1;
    var_64 = 1;
    var_72 = -1;
    var_80 = -1;
    var_88 = 0;
    var_96 = 3;
    var_104 = 1200566217461239118;
    var_112 = 56;
    pri = fun_3DE0(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_120 = 1;
    var_128 = 1;
    var_136 = -1;
    var_144 = -1;
    var_152 = 0;
    var_160 = 3;
    var_168 = 6022826561815351177;
    var_176 = 56;
    pri = fun_3DE0(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    pri = 0;
    return pri;
}
// fun_CF30
fun_CF30() {
    var_8 = 1;
    var_16 = -1018736999534205329;
    pri = WorkSet(var_16, var_8)
    var_24 = 0;
    var_32 = -1018735900022577118;
    pri = WorkSet(var_32, var_24)
    var_40 = 1;
    var_48 = -1018734800510948907;
    pri = WorkSet(var_48, var_40)
    var_56 = 2148228232595585080;
    pri = VanishFlagReset(var_56)
    var_64 = 3693668348792309152;
    pri = VanishFlagSet(var_64)
    var_72 = -6037470456644495193;
    pri = VanishFlagReset(var_72)
    var_80 = 162;
    var_88 = 1323711712404005738;
    pri = WorkSet(var_88, var_80)
    var_96 = 0;
    var_104 = -1;
    var_112 = 405195049412726364;
    var_120 = 24;
    pri = fun_1FB0(var_112, var_104, var_96)
    var_128 = 0;
    pri = fun_2070()
    OP_JZER lab_D0E8
    var_136 = 0;
    pri = fun_2120()
// lab_D0E8
    var_8 = 1;
    var_16 = -2925758277729978379;
    pri = WorkSet(var_16, var_8)
    var_24 = 32440;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0280(var_32, var_24)
    OP_PUSH2_C 1200566217461239118, 5505282246311386430
    pri = SetBamiriInfoToChara(var_40, var_32)
    OP_PUSH2_C 1200556321856585219, -5090495376002294011
    pri = SetBamiriInfoToChara(var_40, var_32)
    OP_PUSH2_C 6022826561815351177, -7586894728362472653
    pri = SetBamiriInfoToChara(var_40, var_32)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 1;
    var_64 = 1;
    var_72 = -1;
    var_80 = -1;
    var_88 = 0;
    var_96 = 3;
    var_104 = 1200556321856585219;
    var_112 = 56;
    pri = fun_3DE0(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_120 = 1;
    var_128 = 1;
    var_136 = -1;
    var_144 = -1;
    var_152 = 0;
    var_160 = 3;
    var_168 = 6022826561815351177;
    var_176 = 56;
    pri = fun_3DE0(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    pri = 0;
    return pri;
}
// fun_D2A8
fun_D2A8() {
    var_8 = 1;
    var_16 = -1018736999534205329;
    pri = WorkSet(var_16, var_8)
    var_24 = 1;
    var_32 = -1018735900022577118;
    pri = WorkSet(var_32, var_24)
    var_40 = 0;
    var_48 = -1018734800510948907;
    pri = WorkSet(var_48, var_40)
    var_56 = 2148228232595585080;
    pri = VanishFlagReset(var_56)
    var_64 = 3693668348792309152;
    pri = VanishFlagReset(var_64)
    var_72 = -6037470456644495193;
    pri = VanishFlagSet(var_72)
    var_80 = 163;
    var_88 = 1323711712404005738;
    pri = WorkSet(var_88, var_80)
    var_96 = 0;
    var_104 = -1;
    var_112 = 405196148924354575;
    var_120 = 24;
    pri = fun_1FB0(var_112, var_104, var_96)
    var_128 = 0;
    pri = fun_2070()
    OP_JZER lab_D460
    var_136 = 0;
    pri = fun_2120()
// lab_D460
    var_8 = 1;
    var_16 = -2925758277729978379;
    pri = WorkSet(var_16, var_8)
    var_24 = 32440;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0280(var_32, var_24)
    var_48 = 0;
    pri = fun_0350()
    OP_PUSH2_C 1200566217461239118, 5505280047288130008
    pri = SetBamiriInfoToChara(var_48, var_40)
    OP_PUSH2_C 1200556321856585219, -5090495376002294011
    pri = SetBamiriInfoToChara(var_48, var_40)
    OP_PUSH2_C 6022826561815351177, -7586892529339216231
    pri = SetBamiriInfoToChara(var_48, var_40)
    var_56 = 1;
    var_64 = 1;
    var_72 = -1;
    var_80 = -1;
    var_88 = 0;
    var_96 = 3;
    var_104 = 1200556321856585219;
    var_112 = 56;
    pri = fun_3DE0(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_120 = 1;
    var_128 = 1;
    var_136 = -1;
    var_144 = -1;
    var_152 = 0;
    var_160 = 3;
    var_168 = 1200566217461239118;
    var_176 = 56;
    pri = fun_3DE0(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    pri = 0;
    return pri;
}
