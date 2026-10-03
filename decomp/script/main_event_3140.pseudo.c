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
    pri = DeleteFieldObject_(var_8)
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
    pri = CreateAttachModel_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0490
fun_0490() {
    var_8 = arg_0;
    pri = DeleteAttachModel_(var_8)
    return pri;
}
// fun_04C0
fun_04C0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_04F8
fun_04F8() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0530
fun_0530() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAttachModelPosAndRotationByFieldObject_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0570
fun_0570() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05C0
fun_05C0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0618
fun_0618() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1038(var_8)
    OP_JZER lab_0690
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1068(var_24)
    OP_JNZ lab_0690
    pri = 0;
    return pri;
// lab_0690
    OP_JUMP lab_06A0
// lab_06A0
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0700
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0700
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_06A0
    pri = 0;
    return pri;
}
// fun_0740
fun_0740() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0778
fun_0778() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_07B8
fun_07B8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_07F0
fun_07F0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0838
    pri = 0;
    return pri;
// lab_0838
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0878
// lab_0878
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1038(var_8)
    OP_JNZ lab_0900
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_08F0
    pri = 0;
    return pri;
// lab_0900
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0948
    pri = 0;
    return pri;
// lab_0948
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_09A8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B18(var_8)
    pri = 0;
    return pri;
// lab_09A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0878
    pri = 0;
    return pri;
// lab_08F0
    OP_JUMP lab_0948
}
// fun_09F0
fun_09F0() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0A38
// lab_0A38
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0A90
    pri = 0;
    return pri;
// lab_0A90
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0AD0
    pri = 0;
    return pri;
// lab_0AD0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A38
    pri = 0;
    return pri;
}
// fun_0B18
fun_0B18() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0B50
fun_0B50() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0BA0
    pri = 0;
    return pri;
// lab_0BA0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1038(var_8)
    OP_JZER lab_0CD0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0BF8
    OP_ZERO_P_S 64
// lab_0CD0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D08
    OP_CONST_S 64, 1
// lab_0D08
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D40
    OP_CONST_S 72, 1
// lab_0D40
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
// lab_0BF8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C20
    OP_ZERO_P_S 72
// lab_0C20
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
    OP_JUMP lab_0DE0
// lab_0DE0
    pri = 0;
    return pri;
}
// fun_0DF0
fun_0DF0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E30
fun_0E30() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E70
fun_0E70() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0EB8
// lab_0EB8
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = IsAttachModelAnimationStateName_(var_24, var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0F18
    pri = 0;
    return pri;
// lab_0F18
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0F58
    pri = 0;
    return pri;
// lab_0F58
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0EB8
    pri = 0;
    return pri;
}
// fun_0FA0
fun_0FA0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
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
    OP_JUMP lab_10B0
// lab_10B0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1140
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1130
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_07F0(var_8)
    pri = 0;
    return pri;
// lab_1140
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_11D0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_11C0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_07F0(var_8)
    pri = 0;
    return pri;
// lab_11D0
    pri = 0;
    return pri;
// lab_11C0
    OP_JUMP lab_11E0
// lab_11E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_10B0
    pri = 0;
    return pri;
// lab_1130
    OP_JUMP lab_11E0
}
// fun_1220
fun_1220() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_07F0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1098(var_40)
    pri = 0;
    return pri;
}
// fun_12A8
fun_12A8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_12E0
fun_12E0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1308
fun_1308() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1340
fun_1340() {
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
// switch_1958
        case default:
        {
// switch_1958_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_19A0
// lab_19A0
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
            OP_JNZ lab_1A48
            var_88 = 0;
            pri = fun_1CB8()
// lab_1A48
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1958_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1540
                case default:
                {
// switch_1540_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_15B8
// lab_15B8
                    OP_JUMP lab_19A0
                }
                case 0x0:
                {
// switch_1540_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_15B8
                }
                case 0x1:
                {
// switch_1540_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_15B8
                }
                case 0x2:
                {
// switch_1540_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_15B8
                }
                case 0x3:
                {
// switch_1540_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_15B8
                }
                case 0x4:
                {
// switch_1540_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_15B8
                }
                case 0x5:
                {
// switch_1540_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_15B8
                }
            }
        }
        case 0x65:
        {
// switch_1958_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_16F8
                case default:
                {
// switch_16F8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1770
// lab_1770
                    OP_JUMP lab_19A0
                }
                case 0x0:
                {
// switch_16F8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1770
                }
                case 0x1:
                {
// switch_16F8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1770
                }
                case 0x2:
                {
// switch_16F8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1770
                }
                case 0x3:
                {
// switch_16F8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1770
                }
                case 0x4:
                {
// switch_16F8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1770
                }
                case 0x5:
                {
// switch_16F8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1770
                }
            }
        }
        case 0x66:
        {
// switch_1958_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_18B0
                case default:
                {
// switch_18B0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1928
// lab_1928
                    OP_JUMP lab_19A0
                }
                case 0x0:
                {
// switch_18B0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1928
                }
                case 0x1:
                {
// switch_18B0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1928
                }
                case 0x2:
                {
// switch_18B0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1928
                }
                case 0x3:
                {
// switch_18B0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1928
                }
                case 0x4:
                {
// switch_18B0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1928
                }
                case 0x5:
                {
// switch_18B0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1928
                }
            }
        }
    }
}
// fun_1A60
fun_1A60() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1340(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1AC8
fun_1AC8() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_07B8(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1B70
    pri = 1;
    return pri;
// lab_1B70
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1BB8
fun_1BB8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1C08
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1AC8(var_8)
    arg_2 = pri;
// lab_1C08
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1340(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1C68
fun_1C68() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1A60(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1CB8
fun_1CB8() {
    OP_JUMP lab_1CD0
// lab_1CD0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1D10
    pri = 0;
    return pri;
// lab_1D10
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1CD0
    pri = 0;
    return pri;
}
// fun_1D50
fun_1D50() {
    var_8 = 0;
    pri = fun_1CB8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1E00
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1E00
    pri = 0;
    return pri;
}
// fun_1E10
fun_1E10() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1E40
fun_1E40() {
    var_8 = 0;
    var_16 = 8;
    pri = fun_1EA0(var_8)
    var_24 = 0;
    var_32 = 1;
    var_40 = 16;
    pri = fun_1EF0(var_32, var_24)
    pri = 0;
    return pri;
}
// fun_1EA0
fun_1EA0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1EF0
fun_1EF0() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 25;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F40
fun_1F40() {
    OP_JUMP lab_1F58
// lab_1F58
    pri = EvCameraMoveWait_()
    OP_JZER lab_1F90
    pri = 0;
    return pri;
// lab_1F90
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1F58
    pri = 0;
    return pri;
}
// fun_1FD0
fun_1FD0() {
    pri = arg_6;
    OP_JNZ lab_2008
    var_8 = 0;
    pri = fun_0DF0()
// lab_2008
    pri = arg_1;
    switch (pri) {
// switch_3570
        case default:
        {
// switch_3570_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_38C0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_38C0
            pri = 1;
            OP_JUMP lab_38C8
// lab_38C0
            pri = 0;
// lab_38C8
            OP_JZER lab_3A20
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_07B8(var_24, var_16)
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
            OP_JUMP lab_3A80
// lab_3A20
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
// lab_3A80
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3AE0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3B40
// lab_3AE0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3B40
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3B40
            pri = arg_2;
            OP_JZER lab_3B80
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3B80
            var_8 = 0;
            pri = fun_0E30()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3570_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3570_case_default
        }
        case 0x1:
        {
// switch_3570_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3570_case_default
        }
        case 0x2:
        {
// switch_3570_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3570_case_default
        }
        case 0x3:
        {
// switch_3570_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3570_case_default
        }
        case 0x4:
        {
// switch_3570_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3570_case_default
        }
        case 0x5:
        {
// switch_3570_case_0x5
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3570_case_default
        }
        case 0x6:
        {
// switch_3570_case_0x6
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3570_case_default
        }
        case 0x7:
        {
// switch_3570_case_0x7
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3570_case_default
        }
        case 0x8:
        {
// switch_3570_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3570_case_default
        }
        case 0x9:
        {
// switch_3570_case_0x9
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3570_case_default
        }
        case 0xa:
        {
// switch_3570_case_0xa
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3570_case_default
        }
        case 0xb:
        {
// switch_3570_case_0xb
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3570_case_default
        }
        case 0xc:
        {
// switch_3570_case_0xc
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3570_case_default
        }
        case 0xd:
        {
// switch_3570_case_0xd
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3570_case_default
        }
        case 0xe:
        {
// switch_3570_case_0xe
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3570_case_default
        }
        case 0xf:
        {
// switch_3570_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3570_case_default
        }
        case 0x10:
        {
// switch_3570_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3570_case_default
        }
        case 0x11:
        {
// switch_3570_case_0x11
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3570_case_default
        }
        case 0x12:
        {
// switch_3570_case_0x12
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3570_case_default
        }
        case 0x13:
        {
// switch_3570_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3570_case_default
        }
        case 0x14:
        {
// switch_3570_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3570_case_default
        }
        case 0x15:
        {
// switch_3570_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3570_case_default
        }
        case 0x16:
        {
// switch_3570_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3570_case_default
        }
        case 0x17:
        {
// switch_3570_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3570_case_default
        }
        case 0x18:
        {
// switch_3570_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3570_case_default
        }
        case 0x19:
        {
// switch_3570_case_0x19
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3570_case_default
        }
        case 0x1a:
        {
// switch_3570_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0778(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0740(var_48, var_40)
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
            pri = fun_0B50(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3570_case_default
        }
        case 0x1b:
        {
// switch_3570_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0778(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0740(var_48, var_40)
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
            pri = fun_0B50(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3570_case_default
        }
        case 0x1c:
        {
// switch_3570_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0778(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0740(var_48, var_40)
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
            pri = fun_0B50(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3570_case_default
        }
        case 0x1d:
        {
// switch_3570_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3570_case_default
        }
        case 0x1e:
        {
// switch_3570_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3570_case_default
        }
        case 0x1f:
        {
// switch_3570_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3570_case_default
        }
        case 0x20:
        {
// switch_3570_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3570_case_default
        }
        case 0x21:
        {
// switch_3570_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3570_case_default
        }
        case 0x22:
        {
// switch_3570_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3570_case_default
        }
        case 0x23:
        {
// switch_3570_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3570_case_default
        }
        case 0x24:
        {
// switch_3570_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3570_case_default
        }
        case 0x25:
        {
// switch_3570_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3570_case_default
        }
        case 0x26:
        {
// switch_3570_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3570_case_default
        }
        case 0x27:
        {
// switch_3570_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3570_case_default
        }
        case 0x28:
        {
// switch_3570_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3570_case_default
        }
        case 0x29:
        {
// switch_3570_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3570_case_default
        }
    }
}
// fun_3BB0
fun_3BB0() {
    pri = arg_5;
    OP_JNZ lab_3BE8
    var_8 = 0;
    pri = fun_0DF0()
// lab_3BE8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3C38
    OP_CONST_S -8, -1
// lab_3C38
    pri = arg_1;
    switch (pri) {
// switch_56F0
        case default:
        {
// switch_56F0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5B98
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_07B8(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5B98
            pri = 1;
            OP_JUMP lab_5BA0
// lab_5B98
            pri = 0;
// lab_5BA0
            OP_JZER lab_5BF0
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5E48
// lab_5BF0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5C58
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5C58
            pri = 1;
            OP_JUMP lab_5C60
// lab_5C58
            pri = 0;
// lab_5C60
            OP_JZER lab_5DE8
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_07B8(var_24, var_16)
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
            OP_JUMP lab_5E48
// lab_5DE8
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
// lab_5E48
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_5EB8
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_5EB8
            var_8 = 0;
            pri = fun_0E30()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_56F0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x1:
        {
// switch_56F0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x2:
        {
// switch_56F0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x3:
        {
// switch_56F0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x4:
        {
// switch_56F0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x5:
        {
// switch_56F0_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0778(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0B18(var_40)
            OP_JUMP switch_56F0_case_default
        }
        case 0x6:
        {
// switch_56F0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x7:
        {
// switch_56F0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x8:
        {
// switch_56F0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x9:
        {
// switch_56F0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0xa:
        {
// switch_56F0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0xb:
        {
// switch_56F0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0xc:
        {
// switch_56F0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0xd:
        {
// switch_56F0_case_0xd
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56F0_case_default
        }
        case 0xe:
        {
// switch_56F0_case_0xe
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56F0_case_default
        }
        case 0xf:
        {
// switch_56F0_case_0xf
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56F0_case_default
        }
        case 0x10:
        {
// switch_56F0_case_0x10
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56F0_case_default
        }
        case 0x11:
        {
// switch_56F0_case_0x11
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56F0_case_default
        }
        case 0x12:
        {
// switch_56F0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x13:
        {
// switch_56F0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x14:
        {
// switch_56F0_case_0x14
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56F0_case_default
        }
        case 0x15:
        {
// switch_56F0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x16:
        {
// switch_56F0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x17:
        {
// switch_56F0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x18:
        {
// switch_56F0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x19:
        {
// switch_56F0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x1a:
        {
// switch_56F0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x1b:
        {
// switch_56F0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x1c:
        {
// switch_56F0_case_0x1c
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56F0_case_default
        }
        case 0x1d:
        {
// switch_56F0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x1e:
        {
// switch_56F0_case_0x1e
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56F0_case_default
        }
        case 0x1f:
        {
// switch_56F0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x20:
        {
// switch_56F0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x21:
        {
// switch_56F0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x22:
        {
// switch_56F0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x23:
        {
// switch_56F0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x24:
        {
// switch_56F0_case_0x24
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56F0_case_default
        }
        case 0x25:
        {
// switch_56F0_case_0x25
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56F0_case_default
        }
        case 0x26:
        {
// switch_56F0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x27:
        {
// switch_56F0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x28:
        {
// switch_56F0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x29:
        {
// switch_56F0_case_0x29
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56F0_case_default
        }
        case 0x2a:
        {
// switch_56F0_case_0x2a
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56F0_case_default
        }
        case 0x2b:
        {
// switch_56F0_case_0x2b
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56F0_case_default
        }
        case 0x2c:
        {
// switch_56F0_case_0x2c
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56F0_case_default
        }
        case 0x2d:
        {
// switch_56F0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x2e:
        {
// switch_56F0_case_0x2e
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56F0_case_default
        }
        case 0x2f:
        {
// switch_56F0_case_0x2f
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56F0_case_default
        }
        case 0x30:
        {
// switch_56F0_case_0x30
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56F0_case_default
        }
        case 0x31:
        {
// switch_56F0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x32:
        {
// switch_56F0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x33:
        {
// switch_56F0_case_0x33
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56F0_case_default
        }
        case 0x34:
        {
// switch_56F0_case_0x34
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56F0_case_default
        }
        case 0x35:
        {
// switch_56F0_case_0x35
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56F0_case_default
        }
        case 0x36:
        {
// switch_56F0_case_0x36
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56F0_case_default
        }
        case 0x37:
        {
// switch_56F0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x38:
        {
// switch_56F0_case_0x38
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56F0_case_default
        }
        case 0x39:
        {
// switch_56F0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x3a:
        {
// switch_56F0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x3b:
        {
// switch_56F0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x3c:
        {
// switch_56F0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x3d:
        {
// switch_56F0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
        case 0x3e:
        {
// switch_56F0_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0778(var_24, var_16, var_8)
            OP_JUMP switch_56F0_case_default
        }
    }
}
// fun_5EE8
fun_5EE8() {
    pri = arg_4;
    OP_JNZ lab_5F20
    var_8 = 0;
    pri = fun_0DF0()
// lab_5F20
    pri = arg_1;
    switch (pri) {
// switch_72F8
        case default:
        {
// switch_72F8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1038(var_264)
            OP_JZER lab_78C0
            pri = arg_3;
            switch (pri) {
// switch_7868
                case default:
                {
// switch_7868_case_default
                    OP_JUMP lab_7B78
// lab_7B78
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7BE8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7BE8
                    var_8 = 0;
                    pri = fun_0E30()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7868_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7868_case_default
                }
                case 0x2:
                {
// switch_7868_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7868_case_default
                }
                case 0x3:
                {
// switch_7868_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7868_case_default
                }
            }
// lab_78C0
            pri = arg_1;
            OP_JZER lab_7910
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7910
            pri = 0;
            OP_JUMP lab_7918
// lab_7910
            pri = 1;
// lab_7918
            OP_JZER lab_7980
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_07B8(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7980
            pri = 1;
            OP_JUMP lab_7988
// lab_7980
            pri = 0;
// lab_7988
            OP_JZER lab_79D8
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7B78
// lab_79D8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7A40
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7B78
// lab_7A40
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_07B8(var_24, var_16)
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
// switch_72F8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x1:
        {
// switch_72F8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x2:
        {
// switch_72F8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x3:
        {
// switch_72F8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x4:
        {
// switch_72F8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x5:
        {
// switch_72F8_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0778(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0B18(var_40)
            OP_JUMP switch_72F8_case_default
        }
        case 0x6:
        {
// switch_72F8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x7:
        {
// switch_72F8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x8:
        {
// switch_72F8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x9:
        {
// switch_72F8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0xa:
        {
// switch_72F8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0xb:
        {
// switch_72F8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0xc:
        {
// switch_72F8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0xd:
        {
// switch_72F8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0xe:
        {
// switch_72F8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0xf:
        {
// switch_72F8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x10:
        {
// switch_72F8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x11:
        {
// switch_72F8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x12:
        {
// switch_72F8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x13:
        {
// switch_72F8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x14:
        {
// switch_72F8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x15:
        {
// switch_72F8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x16:
        {
// switch_72F8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x17:
        {
// switch_72F8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x18:
        {
// switch_72F8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x19:
        {
// switch_72F8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x1a:
        {
// switch_72F8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x1b:
        {
// switch_72F8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x1c:
        {
// switch_72F8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x1d:
        {
// switch_72F8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x1e:
        {
// switch_72F8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x1f:
        {
// switch_72F8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x20:
        {
// switch_72F8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x21:
        {
// switch_72F8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x22:
        {
// switch_72F8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x23:
        {
// switch_72F8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x24:
        {
// switch_72F8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x25:
        {
// switch_72F8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x26:
        {
// switch_72F8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x27:
        {
// switch_72F8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x28:
        {
// switch_72F8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x29:
        {
// switch_72F8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x2a:
        {
// switch_72F8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x2b:
        {
// switch_72F8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x2c:
        {
// switch_72F8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x2d:
        {
// switch_72F8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x2e:
        {
// switch_72F8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x2f:
        {
// switch_72F8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x30:
        {
// switch_72F8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x31:
        {
// switch_72F8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x32:
        {
// switch_72F8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x33:
        {
// switch_72F8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x34:
        {
// switch_72F8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x35:
        {
// switch_72F8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x36:
        {
// switch_72F8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x37:
        {
// switch_72F8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x38:
        {
// switch_72F8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x39:
        {
// switch_72F8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x3a:
        {
// switch_72F8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x3b:
        {
// switch_72F8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x3c:
        {
// switch_72F8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x3d:
        {
// switch_72F8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
        case 0x3e:
        {
// switch_72F8_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0778(var_24, var_16, var_8)
            OP_JUMP switch_72F8_case_default
        }
    }
}
// fun_7C18
fun_7C18() {
    pri = 30048;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_7CA0
// lab_7CA0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_7E20
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_7E10
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_7D60
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_7D60
    pri = 0;
    OP_JUMP lab_7D68
// lab_7E20
    pri = 0;
    return pri;
// lab_7E10
    OP_JUMP lab_7C98
// lab_7C98
    OP_INC_P_S -936
// lab_7D60
    pri = 1;
// lab_7D68
    OP_JZER lab_7DE0
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_7DD8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_7DE0
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_7DD8
}
// fun_7E40
fun_7E40() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_7ED8
    var_8 = 1;
    var_16 = 0;
    var_24 = 30968;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_12E0()
// lab_7ED8
    pri = arg_4;
    OP_JZER lab_7F10
    var_8 = 1;
    var_16 = 8;
    pri = fun_1308(var_8)
// lab_7F10
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_7F68
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_7F68
    pri = 0;
    OP_JUMP lab_7F70
// lab_7F68
    pri = 1;
// lab_7F70
    OP_JZER lab_8038
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_8038
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_8010
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1220(var_32, var_24)
    OP_JUMP lab_8038
// lab_8038
    pri = arg_2;
    OP_JZER lab_8110
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_80E0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0FF8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_04F8(var_40)
    OP_JUMP lab_8110
// lab_8110
    pri = arg_3;
    OP_JZER lab_8148
    var_8 = 1;
    var_16 = 8;
    pri = fun_12A8(var_8)
// lab_8148
    pri = 0;
    return pri;
// lab_80E0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0FF8(var_16, var_8)
// lab_8010
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1220(var_16, var_8)
}
// fun_8158
fun_8158() {
    var_8 = 31224;
    var_16 = 31216;
    var_24 = 8802641224559852288;
    var_32 = 31168;
    var_40 = 31064;
    var_48 = 31016;
    var_56 = 48;
    pri = fun_0438(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 8802641224559852288;
    var_72 = 31232;
    var_80 = 16;
    pri = fun_0530(var_72, var_64)
    pri = arg_0;
    OP_JZER lab_8210
    var_88 = 0;
    pri = fun_8220()
// lab_8210
    pri = 0;
    return pri;
}
// fun_8220
fun_8220() {
    var_8 = 1;
    var_16 = 31328;
    var_24 = 31280;
    pri = SetAttachModelAnimationStateIntParameter_(var_24, var_16, var_8)
    var_32 = 1;
    var_40 = 31456;
    var_48 = 31408;
    pri = SetAttachModelAnimationStateIntParameter_(var_48, var_40, var_32)
    pri = 0;
    return pri;
}
// fun_8298
fun_8298() {
    var_8 = 0;
    var_16 = 31632;
    var_24 = 31584;
    pri = SetAttachModelAnimationStateIntParameter_(var_24, var_16, var_8)
    var_32 = 0;
    var_40 = 31808;
    var_48 = 31760;
    var_56 = 24;
    pri = fun_0E70(var_48, var_40, var_32)
    pri = 0;
    return pri;
}
// fun_8310
fun_8310() {
    pri = arg_0;
    OP_JZER lab_8348
    var_8 = 0;
    pri = fun_8298()
// lab_8348
    var_8 = 31928;
    var_16 = 8;
    pri = fun_0490(var_8)
    pri = 0;
    return pri;
}
// fun_8378
fun_8378() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_7C18(var_24)
    pri = 0;
    return pri;
}
// fun_83E0
fun_83E0() {
    pri = g_mode;
    switch (pri) {
// switch_84A0
        case default:
        {
// switch_84A0_case_default
            pri = CommandNOP()
            OP_JUMP lab_84E8
// lab_84E8
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_84A0_case_0x0
            var_8 = 0;
            pri = fun_84F8()
            OP_JUMP lab_84E8
        }
        case 0xd865217f7aef462:
        {
// switch_84A0_case_0xd865217f7aef462
            var_8 = 0;
            pri = fun_B020()
            OP_JUMP lab_84E8
        }
        case 0x2cb42c1b832ce776:
        {
// switch_84A0_case_0x2cb42c1b832ce776
            var_8 = 0;
            pri = fun_AF30()
            OP_JUMP lab_84E8
        }
    }
}
// fun_84F8
fun_84F8() {
    pri = 0;
    return pri;
}
// fun_8510
fun_8510() {
    pri = PlayerGetZoneID()
    var_8 = pri;
    pri = var_8;
    OP_EQ_C_PRI -2908913071569379095
    OP_JZER lab_8588
    pri = -2669111732362968534;
    return pri;
// lab_8588
    pri = var_8;
    OP_EQ_C_PRI -5764577019012967920
    OP_JZER lab_85D0
    pri = 5416558514670626579;
    return pri;
// lab_85D0
    pri = var_8;
    OP_EQ_C_PRI -5232240767779674943
    OP_JZER lab_8618
    pri = -783341769600439278;
    return pri;
// lab_8618
    pri = var_8;
    OP_EQ_C_PRI 6748990845828786157
    OP_JZER lab_8660
    pri = 6149361526766711478;
    return pri;
// lab_8660
    pri = var_8;
    OP_EQ_C_PRI -5995480830238164870
    OP_JZER lab_86A8
    pri = -1388330654265746967;
    return pri;
// lab_86A8
    pri = var_8;
    OP_EQ_C_PRI -7806788798280494145
    OP_JZER lab_86F0
    pri = 8855976090230375108;
    return pri;
// lab_86F0
    pri = -1;
    return pri;
}
// fun_8708
fun_8708() {
    pri = PlayerGetZoneID()
    var_8 = pri;
    pri = var_8;
    OP_EQ_C_PRI -2908913071569379095
    OP_JZER lab_8780
    pri = -201298903742919217;
    return pri;
// lab_8780
    pri = var_8;
    OP_EQ_C_PRI -5764577019012967920
    OP_JZER lab_87C8
    pri = 643169185203737588;
    return pri;
// lab_87C8
    pri = var_8;
    OP_EQ_C_PRI -5232240767779674943
    OP_JZER lab_8810
    pri = -6635286479268925353;
    return pri;
// lab_8810
    pri = var_8;
    OP_EQ_C_PRI 6748990845828786157
    OP_JZER lab_8858
    pri = 2649506633853810915;
    return pri;
// lab_8858
    pri = var_8;
    OP_EQ_C_PRI -5995480830238164870
    OP_JZER lab_88A0
    pri = 6740051908999982722;
    return pri;
// lab_88A0
    pri = var_8;
    OP_EQ_C_PRI -7806788798280494145
    OP_JZER lab_88E8
    pri = -2965822370794371503;
    return pri;
// lab_88E8
    pri = -1;
    return pri;
}
// fun_8900
fun_8900() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_7E40(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8958
fun_8958() {
    pri = 0;
    return pri;
}
// fun_8970
fun_8970() {
    pri = 0;
    return pri;
}
// fun_8988
fun_8988() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = PlayerGetZoneID()
    OP_EQ_C_PRI -2908913071569379095
    OP_JZER lab_8AA8
    var_24 = 0;
    var_32 = 4631727036769186611;
    var_40 = 3;
    OP_PUSH5_C 4652056303079323075, -4584547256704109117, 4654056710554433618, 4655646340485407048, 4640262413594216366
    var_48 = 4654217591095809802;
    var_56 = 60;
    pri = EvCameraMove(var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16)
    var_64 = 0;
    pri = fun_1F40()
    OP_JUMP lab_8B40
// lab_8AA8
    var_8 = 0;
    var_16 = 4631727036769186611;
    var_24 = 3;
    OP_PUSH5_C 4655933400981186806, -4587533354363288289, 4657471419836352430, 4658079207873954447, 4641827414464727613
    var_32 = 4657597511829825782;
    var_40 = 60;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 0;
    pri = fun_1F40()
// lab_8B40
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 8802641224559852288;
    var_48 = 0;
    pri = fun_8510()
    var_56 = pri;
    var_64 = 48;
    pri = fun_05C0(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    var_96 = 0;
    var_104 = 8802641224559852288;
    var_112 = 0;
    pri = fun_8708()
    var_120 = pri;
    var_128 = 48;
    pri = fun_05C0(var_120, var_112, var_104, var_96, var_88, var_80)
    var_136 = 0;
    var_144 = 0;
    var_152 = 0;
    var_160 = 0;
    pri = float(var_160)
    var_168 = pri;
    var_176 = 8802641224559852288;
    var_184 = 40;
    pri = fun_0570(var_176, var_168, var_160, var_152, var_144)
    var_192 = 8802641224559852288;
    var_200 = 8;
    pri = fun_0618(var_192)
    var_208 = 0;
    pri = fun_8510()
    var_216 = pri;
    var_224 = 8;
    pri = fun_0618(var_216)
    var_232 = 0;
    pri = fun_8708()
    var_240 = pri;
    var_248 = 8;
    pri = fun_0618(var_240)
    var_264 = -4109595392289114602;
    pri = WorkGet(var_264)
    var_8 = pri;
    var_272 = 0;
    pri = fun_1E40()
    pri = var_8;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9078
    var_280 = 1;
    var_288 = 1;
    var_296 = -1;
    var_304 = -1;
    var_312 = 0;
    var_320 = 1;
    var_328 = 0;
    pri = fun_8510()
    var_336 = pri;
    var_344 = 56;
    pri = fun_3BB0(var_336, var_328, var_320, var_312, var_304, var_296, var_288)
    var_352 = 0;
    var_360 = 3;
    var_368 = 0;
    var_376 = 100;
    var_384 = -1;
    var_392 = -8507439939168341221;
    var_400 = 0;
    pri = fun_8510()
    var_408 = pri;
    var_416 = 56;
    pri = fun_1BB8(var_408, var_400, var_392, var_384, var_376, var_368, var_360)
    var_424 = 1;
    var_432 = 8;
    pri = fun_1D50(var_424)
    var_440 = 0;
    pri = fun_1E10()
    var_448 = 1;
    var_456 = 3;
    var_464 = 0;
    var_472 = 1;
    var_480 = 0;
    pri = fun_8510()
    var_488 = pri;
    var_496 = 40;
    pri = fun_5EE8(var_488, var_480, var_472, var_464, var_456)
    var_504 = 1;
    var_512 = -1;
    var_520 = -1;
    var_528 = 3;
    var_536 = 0;
    var_544 = 0;
    var_552 = 0;
    pri = fun_8708()
    var_560 = pri;
    var_568 = 56;
    pri = fun_1FD0(var_560, var_552, var_544, var_536, var_528, var_520, var_512)
    var_576 = 0;
    var_584 = 3;
    var_592 = 0;
    var_600 = 100;
    var_608 = -1;
    var_616 = 4317678320600762630;
    var_624 = 0;
    pri = fun_8708()
    var_632 = pri;
    var_640 = 56;
    pri = fun_1BB8(var_632, var_624, var_616, var_608, var_600, var_592, var_584)
    var_648 = 0;
    pri = fun_8510()
    var_656 = pri;
    var_664 = 8;
    pri = fun_07F0(var_656)
    var_672 = 0;
    pri = fun_8708()
    var_680 = pri;
    var_688 = 8;
    pri = fun_07F0(var_680)
    var_696 = 1;
    var_704 = 8;
    pri = fun_1D50(var_696)
    var_712 = 0;
    pri = fun_1E10()
    OP_JUMP lab_A930
// lab_9078
    pri = var_8;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_9390
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    var_32 = -1;
    var_40 = 0;
    var_48 = 1;
    var_56 = 0;
    pri = fun_8510()
    var_64 = pri;
    var_72 = 56;
    pri = fun_3BB0(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = 0;
    var_88 = 3;
    var_96 = 0;
    var_104 = 100;
    var_112 = -1;
    var_120 = -8507434441610200166;
    var_128 = 0;
    pri = fun_8510()
    var_136 = pri;
    var_144 = 56;
    pri = fun_1BB8(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 1;
    var_160 = 8;
    pri = fun_1D50(var_152)
    var_168 = 0;
    pri = fun_1E10()
    var_176 = 1;
    var_184 = 3;
    var_192 = 0;
    var_200 = 1;
    var_208 = 0;
    pri = fun_8510()
    var_216 = pri;
    var_224 = 40;
    pri = fun_5EE8(var_216, var_208, var_200, var_192, var_184)
    var_232 = 1;
    var_240 = -1;
    var_248 = -1;
    var_256 = 3;
    var_264 = 0;
    var_272 = 0;
    var_280 = 0;
    pri = fun_8708()
    var_288 = pri;
    var_296 = 56;
    pri = fun_1FD0(var_288, var_280, var_272, var_264, var_256, var_248, var_240)
    var_304 = 0;
    var_312 = 3;
    var_320 = 0;
    var_328 = 100;
    var_336 = -1;
    var_344 = 4317681619135647263;
    var_352 = 0;
    pri = fun_8708()
    var_360 = pri;
    var_368 = 56;
    pri = fun_1BB8(var_360, var_352, var_344, var_336, var_328, var_320, var_312)
    var_376 = 0;
    pri = fun_8510()
    var_384 = pri;
    var_392 = 8;
    pri = fun_07F0(var_384)
    var_400 = 0;
    pri = fun_8708()
    var_408 = pri;
    var_416 = 8;
    pri = fun_07F0(var_408)
    var_424 = 1;
    var_432 = 8;
    pri = fun_1D50(var_424)
    var_440 = 0;
    pri = fun_1E10()
    OP_JUMP lab_A930
// lab_9390
    pri = var_8;
    OP_EQ_P_C_PRI 3
    OP_JZER lab_96A8
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    var_32 = -1;
    var_40 = 0;
    var_48 = 1;
    var_56 = 0;
    pri = fun_8510()
    var_64 = pri;
    var_72 = 56;
    pri = fun_3BB0(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = 0;
    var_88 = 3;
    var_96 = 0;
    var_104 = 100;
    var_112 = -1;
    var_120 = -8507433342098571955;
    var_128 = 0;
    pri = fun_8510()
    var_136 = pri;
    var_144 = 56;
    pri = fun_1BB8(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 1;
    var_160 = 8;
    pri = fun_1D50(var_152)
    var_168 = 0;
    pri = fun_1E10()
    var_176 = 1;
    var_184 = 3;
    var_192 = 0;
    var_200 = 1;
    var_208 = 0;
    pri = fun_8510()
    var_216 = pri;
    var_224 = 40;
    pri = fun_5EE8(var_216, var_208, var_200, var_192, var_184)
    var_232 = 1;
    var_240 = -1;
    var_248 = -1;
    var_256 = 3;
    var_264 = 0;
    var_272 = 0;
    var_280 = 0;
    pri = fun_8708()
    var_288 = pri;
    var_296 = 56;
    pri = fun_1FD0(var_288, var_280, var_272, var_264, var_256, var_248, var_240)
    var_304 = 0;
    var_312 = 3;
    var_320 = 0;
    var_328 = 100;
    var_336 = -1;
    var_344 = 4317680519624019052;
    var_352 = 0;
    pri = fun_8708()
    var_360 = pri;
    var_368 = 56;
    pri = fun_1BB8(var_360, var_352, var_344, var_336, var_328, var_320, var_312)
    var_376 = 0;
    pri = fun_8510()
    var_384 = pri;
    var_392 = 8;
    pri = fun_07F0(var_384)
    var_400 = 0;
    pri = fun_8708()
    var_408 = pri;
    var_416 = 8;
    pri = fun_07F0(var_408)
    var_424 = 1;
    var_432 = 8;
    pri = fun_1D50(var_424)
    var_440 = 0;
    pri = fun_1E10()
    OP_JUMP lab_A930
// lab_96A8
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    var_32 = -1;
    var_40 = 0;
    var_48 = 1;
    var_56 = 0;
    pri = fun_8510()
    var_64 = pri;
    var_72 = 56;
    pri = fun_3BB0(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = 0;
    var_88 = 3;
    var_96 = 0;
    var_104 = 100;
    var_112 = -1;
    var_120 = -8507436640633456588;
    var_128 = 0;
    pri = fun_8510()
    var_136 = pri;
    var_144 = 56;
    pri = fun_1BB8(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 1;
    var_160 = 8;
    pri = fun_1D50(var_152)
    var_168 = 0;
    pri = fun_1E10()
    var_176 = 1;
    var_184 = 3;
    var_192 = 0;
    var_200 = 1;
    var_208 = 0;
    pri = fun_8510()
    var_216 = pri;
    var_224 = 40;
    pri = fun_5EE8(var_216, var_208, var_200, var_192, var_184)
    var_232 = 1;
    var_240 = -1;
    var_248 = -1;
    var_256 = 3;
    var_264 = 0;
    var_272 = 0;
    var_280 = 0;
    pri = fun_8708()
    var_288 = pri;
    var_296 = 56;
    pri = fun_1FD0(var_288, var_280, var_272, var_264, var_256, var_248, var_240)
    var_304 = 0;
    var_312 = 3;
    var_320 = 0;
    var_328 = 100;
    var_336 = -1;
    var_344 = 4317683818158903685;
    var_352 = 0;
    pri = fun_8708()
    var_360 = pri;
    var_368 = 56;
    pri = fun_1BB8(var_360, var_352, var_344, var_336, var_328, var_320, var_312)
    var_376 = 0;
    pri = fun_8510()
    var_384 = pri;
    var_392 = 8;
    pri = fun_07F0(var_384)
    var_400 = 0;
    pri = fun_8708()
    var_408 = pri;
    var_416 = 8;
    pri = fun_07F0(var_408)
    var_424 = 1;
    var_432 = 8;
    pri = fun_1D50(var_424)
    var_440 = 0;
    pri = fun_1E10()
    var_448 = 0;
    var_456 = 0;
    var_464 = 0;
    var_472 = 0;
    var_480 = 0;
    pri = fun_8708()
    var_488 = pri;
    var_496 = 0;
    pri = fun_8510()
    var_504 = pri;
    var_512 = 48;
    pri = fun_05C0(var_504, var_496, var_488, var_480, var_472, var_464)
    var_520 = 0;
    var_528 = 3;
    var_536 = 0;
    var_544 = 100;
    var_552 = -1;
    var_560 = -8507435541121828377;
    var_568 = 0;
    pri = fun_8510()
    var_576 = pri;
    var_584 = 56;
    pri = fun_1BB8(var_576, var_568, var_560, var_552, var_544, var_536, var_528)
    var_592 = 0;
    pri = fun_8510()
    var_600 = pri;
    var_608 = 8;
    pri = fun_0618(var_600)
    var_616 = 1;
    var_624 = 8;
    pri = fun_1D50(var_616)
    var_632 = 0;
    pri = fun_1E10()
    var_640 = 0;
    var_648 = 0;
    var_656 = 0;
    var_664 = 0;
    var_672 = 0;
    pri = fun_8510()
    var_680 = pri;
    var_688 = 0;
    pri = fun_8708()
    var_696 = pri;
    var_704 = 48;
    pri = fun_05C0(var_696, var_688, var_680, var_672, var_664, var_656)
    var_712 = 0;
    var_720 = 3;
    var_728 = 0;
    var_736 = 100;
    var_744 = -1;
    var_752 = 4317682718647275474;
    var_760 = 0;
    pri = fun_8708()
    var_768 = pri;
    var_776 = 56;
    pri = fun_1BB8(var_768, var_760, var_752, var_744, var_736, var_728, var_720)
    var_784 = 0;
    pri = fun_8708()
    var_792 = pri;
    var_800 = 8;
    pri = fun_0618(var_792)
    var_808 = 1;
    var_816 = 8;
    pri = fun_1D50(var_808)
    var_824 = 0;
    pri = fun_1E10()
    var_832 = 1;
    var_840 = 1;
    var_848 = -1;
    var_856 = -1;
    var_864 = 0;
    var_872 = 22;
    var_880 = 0;
    pri = fun_8510()
    var_888 = pri;
    var_896 = 56;
    pri = fun_3BB0(var_888, var_880, var_872, var_864, var_856, var_848, var_840)
    var_904 = 0;
    var_912 = 3;
    var_920 = 0;
    var_928 = 100;
    var_936 = -1;
    var_944 = -8507447635749738698;
    var_952 = 0;
    pri = fun_8510()
    var_960 = pri;
    var_968 = 56;
    pri = fun_1BB8(var_960, var_952, var_944, var_936, var_928, var_920, var_912)
    var_976 = 1;
    var_984 = 8;
    pri = fun_1D50(var_976)
    var_992 = 0;
    pri = fun_1E10()
    var_1000 = 31976;
    var_1008 = 0;
    pri = fun_8510()
    var_1016 = pri;
    var_1024 = 16;
    pri = fun_09F0(var_1016, var_1008)
    var_1032 = 32152;
    pri = SoundPostEvent(var_1032)
    var_1040 = 1;
    var_1048 = 3;
    var_1056 = 0;
    var_1064 = 22;
    var_1072 = 0;
    pri = fun_8510()
    var_1080 = pri;
    var_1088 = 40;
    pri = fun_5EE8(var_1080, var_1072, var_1064, var_1056, var_1048)
    var_1096 = 3;
    var_1104 = 0;
    var_1112 = 5656448327517457428;
    var_1120 = 24;
    pri = fun_1C68(var_1112, var_1104, var_1096)
    var_1128 = 0;
    pri = fun_8510()
    var_1136 = pri;
    var_1144 = 8;
    pri = fun_07F0(var_1136)
    var_1152 = 1;
    var_1160 = 8;
    pri = fun_1D50(var_1152)
    var_1168 = 0;
    pri = fun_1E10()
    var_1176 = 1;
    var_1184 = 1;
    var_1192 = 30;
    var_1200 = 8802641224559852288;
    var_1208 = 0;
    pri = fun_8708()
    var_1216 = pri;
    var_1224 = 40;
    pri = fun_0FA0(var_1216, var_1208, var_1200, var_1192, var_1184)
    var_1232 = 0;
    var_1240 = 0;
    var_1248 = 0;
    var_1256 = 0;
    var_1264 = 8802641224559852288;
    var_1272 = 0;
    pri = fun_8510()
    var_1280 = pri;
    var_1288 = 48;
    pri = fun_05C0(var_1280, var_1272, var_1264, var_1256, var_1248, var_1240)
    var_1296 = 0;
    var_1304 = 3;
    var_1312 = 0;
    var_1320 = 100;
    var_1328 = -1;
    var_1336 = -8507446536238110487;
    var_1344 = 0;
    pri = fun_8510()
    var_1352 = pri;
    var_1360 = 56;
    pri = fun_1BB8(var_1352, var_1344, var_1336, var_1328, var_1320, var_1312, var_1304)
    var_1368 = 0;
    pri = fun_8510()
    var_1376 = pri;
    var_1384 = 8;
    pri = fun_0618(var_1376)
    var_1392 = 1;
    var_1400 = 8;
    pri = fun_1D50(var_1392)
    var_1408 = 0;
    pri = fun_1E10()
    var_1416 = 32328;
    pri = SoundPostEvent(var_1416)
    var_1424 = 1;
    var_1432 = 8;
    pri = fun_8158(var_1424)
    var_1440 = 3;
    var_1448 = 0;
    var_1456 = 100;
    var_1464 = -1033124696672216222;
    var_1472 = 32;
    pri = fun_1A60(var_1464, var_1456, var_1448, var_1440)
    var_1480 = 1;
    var_1488 = 8;
    pri = fun_1D50(var_1480)
    var_1496 = 0;
    pri = fun_1E10()
    var_1504 = 1;
    var_1512 = 1;
    var_1520 = -1;
    var_1528 = -1;
    var_1536 = 0;
    var_1544 = 23;
    var_1552 = 0;
    pri = fun_8510()
    var_1560 = pri;
    var_1568 = 56;
    pri = fun_3BB0(var_1560, var_1552, var_1544, var_1536, var_1528, var_1520, var_1512)
    var_1576 = 0;
    var_1584 = 3;
    var_1592 = 0;
    var_1600 = 100;
    var_1608 = -1;
    var_1616 = -8506587817656666921;
    var_1624 = 0;
    pri = fun_8510()
    var_1632 = pri;
    var_1640 = 56;
    pri = fun_1BB8(var_1632, var_1624, var_1616, var_1608, var_1600, var_1592, var_1584)
    var_1648 = 1;
    var_1656 = 8;
    pri = fun_1D50(var_1648)
    var_1664 = 0;
    pri = fun_1E10()
    var_1672 = 3;
    var_1680 = 0;
    var_1688 = 100;
    var_1696 = -1033125796183844433;
    var_1704 = 32;
    pri = fun_1A60(var_1696, var_1688, var_1680, var_1672)
    var_1712 = 1;
    var_1720 = 8;
    pri = fun_1D50(var_1712)
    var_1728 = 0;
    pri = fun_1E10()
    var_1736 = 3;
    var_1744 = 0;
    var_1752 = 100;
    var_1760 = -1033126895695472644;
    var_1768 = 32;
    pri = fun_1A60(var_1760, var_1752, var_1744, var_1736)
    var_1776 = 1;
    var_1784 = 8;
    pri = fun_1D50(var_1776)
    var_1792 = 0;
    pri = fun_1E10()
    var_1800 = 3;
    var_1808 = 0;
    var_1816 = 100;
    var_1824 = -1033127995207100855;
    var_1832 = 32;
    pri = fun_1A60(var_1824, var_1816, var_1808, var_1800)
    var_1840 = 1;
    var_1848 = 8;
    pri = fun_1D50(var_1840)
    var_1856 = 0;
    pri = fun_1E10()
    var_1864 = 32528;
    pri = SoundPostEvent(var_1864)
    var_1872 = 1;
    var_1880 = 8;
    pri = fun_8310(var_1872)
    var_1888 = 1;
    var_1896 = 3;
    var_1904 = 0;
    var_1912 = 23;
    var_1920 = 0;
    pri = fun_8510()
    var_1928 = pri;
    var_1936 = 40;
    pri = fun_5EE8(var_1928, var_1920, var_1912, var_1904, var_1896)
    var_1944 = 0;
    var_1952 = 3;
    var_1960 = 0;
    var_1968 = 100;
    var_1976 = -1;
    var_1984 = -8506588917168295132;
    var_1992 = 0;
    pri = fun_8510()
    var_2000 = pri;
    var_2008 = 56;
    pri = fun_1BB8(var_2000, var_1992, var_1984, var_1976, var_1968, var_1960, var_1952)
    var_2016 = 0;
    pri = fun_8510()
    var_2024 = pri;
    var_2032 = 8;
    pri = fun_07F0(var_2024)
    var_2040 = 1;
    var_2048 = 8;
    pri = fun_1D50(var_2040)
    var_2056 = 0;
    pri = fun_1E10()
    var_2064 = -1;
    var_2072 = 0;
    pri = fun_8708()
    var_2080 = pri;
    var_2088 = 16;
    pri = fun_0FF8(var_2080, var_2072)
    var_2096 = 1;
    var_2104 = 1;
    var_2112 = 30;
    var_2120 = 0;
    pri = fun_8708()
    var_2128 = pri;
    var_2136 = 8802641224559852288;
    var_2144 = 40;
    pri = fun_0FA0(var_2136, var_2128, var_2120, var_2112, var_2104)
    var_2152 = 1;
    var_2160 = 1;
    var_2168 = 30;
    var_2176 = 0;
    pri = fun_8708()
    var_2184 = pri;
    var_2192 = 0;
    pri = fun_8510()
    var_2200 = pri;
    var_2208 = 40;
    pri = fun_0FA0(var_2200, var_2192, var_2184, var_2176, var_2168)
    var_2216 = 0;
    var_2224 = 0;
    var_2232 = 0;
    var_2240 = 0;
    pri = float(var_2240)
    var_2248 = pri;
    var_2256 = 0;
    pri = fun_8708()
    var_2264 = pri;
    var_2272 = 40;
    pri = fun_0570(var_2264, var_2256, var_2248, var_2240, var_2232)
    pri = PlayerGetZoneID()
    OP_EQ_C_PRI -2908913071569379095
    OP_JZER lab_A7E0
    var_2280 = 0;
    var_2288 = 3;
    var_2296 = 0;
    var_2304 = 100;
    var_2312 = -1;
    var_2320 = 4317684917670531896;
    var_2328 = 0;
    pri = fun_8708()
    var_2336 = pri;
    var_2344 = 56;
    pri = fun_1BB8(var_2336, var_2328, var_2320, var_2312, var_2304, var_2296, var_2288)
    var_2352 = 0;
    pri = fun_8708()
    var_2360 = pri;
    var_2368 = 8;
    pri = fun_0618(var_2360)
    var_2376 = 1;
    var_2384 = 8;
    pri = fun_1D50(var_2376)
    var_2392 = 0;
    pri = fun_1E10()
    OP_PUSH2_C -4341115018897366444, 6266976215598597068
    pri = SetBamiriInfoToChara(var_2392, var_2384)
    OP_JUMP lab_A8C0
// lab_A7E0
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 4317686017182160107;
    var_56 = 0;
    pri = fun_8708()
    var_64 = pri;
    var_72 = 56;
    pri = fun_1BB8(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = 0;
    pri = fun_8708()
    var_88 = pri;
    var_96 = 8;
    pri = fun_0618(var_88)
    var_104 = 1;
    var_112 = 8;
    pri = fun_1D50(var_104)
    var_120 = 0;
    pri = fun_1E10()
// lab_A8C0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0FF8(var_16, var_8)
    var_32 = -1;
    var_40 = 0;
    pri = fun_8510()
    var_48 = pri;
    var_56 = 16;
    pri = fun_0FF8(var_48, var_40)
// lab_A930
    var_8 = 1;
    var_16 = 0;
    var_24 = 30968;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    pri = PlayerGetZoneID()
    var_16 = pri;
    pri = var_16;
    OP_EQ_C_PRI -5764577019012967920
    OP_JZER lab_AB90
    var_64 = 1;
    var_72 = 4467989009975189014;
    var_80 = 16;
    pri = fun_04C0(var_72, var_64)
    var_88 = 1;
    var_96 = -859442629318187455;
    var_104 = 16;
    pri = fun_04C0(var_96, var_88)
    var_112 = 1;
    var_120 = 4415606294098691622;
    var_128 = 16;
    pri = fun_04C0(var_120, var_112)
    var_136 = 1;
    var_144 = 8988264144358404956;
    var_152 = 16;
    pri = fun_04C0(var_144, var_136)
    var_160 = 1;
    var_168 = 8988276238986315277;
    var_176 = 16;
    pri = fun_04C0(var_168, var_160)
    var_184 = 1;
    var_192 = -8309174203624311491;
    var_200 = 16;
    pri = fun_04C0(var_192, var_184)
    var_208 = 1;
    var_216 = 6164296788199418986;
    var_224 = 16;
    pri = fun_04C0(var_216, var_208)
    var_232 = 1;
    var_240 = 9079075346306917645;
    var_248 = 16;
    pri = fun_04C0(var_240, var_232)
    var_256 = 1;
    var_264 = 8885309625560601597;
    var_272 = 16;
    pri = fun_04C0(var_264, var_256)
    OP_JUMP lab_AD78
// lab_AB90
    pri = var_16;
    OP_EQ_C_PRI -5232240767779674943
    OP_JZER lab_AD78
    var_8 = 1;
    var_16 = 8179156693783107887;
    var_24 = 16;
    pri = fun_04C0(var_16, var_8)
    var_32 = 1;
    var_40 = -8432151180894290400;
    var_48 = 16;
    pri = fun_04C0(var_40, var_32)
    var_56 = 1;
    var_64 = -146328789253612487;
    var_72 = 16;
    pri = fun_04C0(var_64, var_56)
    var_80 = 1;
    var_88 = 4783835900312457763;
    var_96 = 16;
    pri = fun_04C0(var_88, var_80)
    var_104 = 1;
    var_112 = 4783845795917111662;
    var_120 = 16;
    pri = fun_04C0(var_112, var_104)
    var_128 = 1;
    var_136 = 1510685755535804562;
    var_144 = 16;
    pri = fun_04C0(var_136, var_128)
    var_152 = 1;
    var_160 = -5573069934334758455;
    var_168 = 16;
    pri = fun_04C0(var_160, var_152)
    var_176 = 1;
    var_184 = 7270287811182647254;
    var_192 = 16;
    pri = fun_04C0(var_184, var_176)
    var_200 = 1;
    var_208 = 8496777380071952424;
    var_216 = 16;
    pri = fun_04C0(var_208, var_200)
    OP_JUMP lab_AD78
// lab_AD78
    var_8 = 3;
    var_16 = 0;
    pri = EvCameraEnd(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_ADB8
fun_ADB8() {
    pri = 0;
    return pri;
}
// fun_ADD0
fun_ADD0() {
    var_8 = 0;
    pri = fun_8510()
    var_16 = pri;
    var_24 = 8;
    pri = fun_0408(var_16)
    var_32 = 0;
    pri = fun_8708()
    var_40 = pri;
    var_48 = 8;
    pri = fun_0408(var_40)
    var_56 = -4109595392289114602;
    pri = WorkGet(var_56)
    OP_EQ_P_C_PRI 4
    OP_JZER lab_AEA8
    var_64 = 3150;
    var_72 = 8;
    pri = fun_8378(var_64)
// lab_AEA8
    pri = 0;
    return pri;
}
// fun_AEB8
fun_AEB8() {
    var_8 = 30;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 32712;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0280(var_32, var_24)
    var_48 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_AF30
fun_AF30() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_8900()
    var_16 = 0;
    pri = fun_8958()
    var_24 = 0;
    pri = fun_8970()
    var_32 = 0;
    pri = fun_8988()
    var_40 = 0;
    pri = fun_ADB8()
    var_48 = 0;
    pri = fun_ADD0()
    var_56 = 0;
    pri = fun_AEB8()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_B020
fun_B020() {
    var_8 = 0;
    pri = fun_8958()
    var_16 = 0;
    pri = fun_ADD0()
    pri = 0;
    return pri;
}
