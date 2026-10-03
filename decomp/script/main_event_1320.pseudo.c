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
    pri = fun_0ED0(var_8)
    OP_JZER lab_07D8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0F00(var_24)
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
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0900
fun_0900() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0938
fun_0938() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0980
    pri = 0;
    return pri;
// lab_0980
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_09C0
// lab_09C0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0ED0(var_8)
    OP_JNZ lab_0A48
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0A38
    pri = 0;
    return pri;
// lab_0A48
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0A90
    pri = 0;
    return pri;
// lab_0A90
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0AF0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B38(var_8)
    pri = 0;
    return pri;
// lab_0AF0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_09C0
    pri = 0;
    return pri;
// lab_0A38
    OP_JUMP lab_0A90
}
// fun_0B38
fun_0B38() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0B70
fun_0B70() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0BC0
    pri = 0;
    return pri;
// lab_0BC0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0ED0(var_8)
    OP_JZER lab_0CF0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C18
    OP_ZERO_P_S 64
// lab_0CF0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D28
    OP_CONST_S 64, 1
// lab_0D28
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D60
    OP_CONST_S 72, 1
// lab_0D60
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
// lab_0C18
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C40
    OP_ZERO_P_S 72
// lab_0C40
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
    OP_JUMP lab_0E00
// lab_0E00
    pri = 0;
    return pri;
}
// fun_0E10
fun_0E10() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E50
fun_0E50() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E90
fun_0E90() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0ED0
fun_0ED0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0F00
fun_0F00() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0F30
fun_0F30() {
    OP_JUMP lab_0F48
// lab_0F48
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0FD8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0FC8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0938(var_8)
    pri = 0;
    return pri;
// lab_0FD8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1068
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1058
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0938(var_8)
    pri = 0;
    return pri;
// lab_1068
    pri = 0;
    return pri;
// lab_1058
    OP_JUMP lab_1078
// lab_1078
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0F48
    pri = 0;
    return pri;
// lab_0FC8
    OP_JUMP lab_1078
}
// fun_10B8
fun_10B8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0938(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0F30(var_40)
    pri = 0;
    return pri;
}
// fun_1140
fun_1140() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1178
fun_1178() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_11A0
fun_11A0() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_11D0
fun_11D0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1208
fun_1208() {
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
// switch_1820
        case default:
        {
// switch_1820_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1868
// lab_1868
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
            OP_JNZ lab_1910
            var_88 = 0;
            pri = fun_1B90()
// lab_1910
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1820_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1408
                case default:
                {
// switch_1408_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1480
// lab_1480
                    OP_JUMP lab_1868
                }
                case 0x0:
                {
// switch_1408_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1480
                }
                case 0x1:
                {
// switch_1408_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1480
                }
                case 0x2:
                {
// switch_1408_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1480
                }
                case 0x3:
                {
// switch_1408_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1480
                }
                case 0x4:
                {
// switch_1408_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1480
                }
                case 0x5:
                {
// switch_1408_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1480
                }
            }
        }
        case 0x65:
        {
// switch_1820_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_15C0
                case default:
                {
// switch_15C0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1638
// lab_1638
                    OP_JUMP lab_1868
                }
                case 0x0:
                {
// switch_15C0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1638
                }
                case 0x1:
                {
// switch_15C0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1638
                }
                case 0x2:
                {
// switch_15C0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1638
                }
                case 0x3:
                {
// switch_15C0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1638
                }
                case 0x4:
                {
// switch_15C0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1638
                }
                case 0x5:
                {
// switch_15C0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1638
                }
            }
        }
        case 0x66:
        {
// switch_1820_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1778
                case default:
                {
// switch_1778_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_17F0
// lab_17F0
                    OP_JUMP lab_1868
                }
                case 0x0:
                {
// switch_1778_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_17F0
                }
                case 0x1:
                {
// switch_1778_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_17F0
                }
                case 0x2:
                {
// switch_1778_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_17F0
                }
                case 0x3:
                {
// switch_1778_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_17F0
                }
                case 0x4:
                {
// switch_1778_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_17F0
                }
                case 0x5:
                {
// switch_1778_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_17F0
                }
            }
        }
    }
}
// fun_1928
fun_1928() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0900(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_19D0
    pri = 1;
    return pri;
// lab_19D0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1A18
fun_1A18() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1A68
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1928(var_8)
    arg_2 = pri;
// lab_1A68
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1208(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1AC8
fun_1AC8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1B18
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1928(var_8)
    arg_2 = pri;
// lab_1B18
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
    pri = fun_1A18(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B90
fun_1B90() {
    OP_JUMP lab_1BA8
// lab_1BA8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1BE8
    pri = 0;
    return pri;
// lab_1BE8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1BA8
    pri = 0;
    return pri;
}
// fun_1C28
fun_1C28() {
    var_8 = 0;
    pri = fun_1B90()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1CD8
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1CD8
    pri = 0;
    return pri;
}
// fun_1CE8
fun_1CE8() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1D18
fun_1D18() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1D50
fun_1D50() {
    OP_JUMP lab_1D68
// lab_1D68
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1DB0
    OP_JUMP lab_1DE0
    OP_JUMP lab_1DD0
// lab_1DB0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_1DE0
    pri = 0;
    return pri;
// lab_1DD0
    OP_JUMP lab_1D68
}
// fun_1DF0
fun_1DF0() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_1E20
fun_1E20() {
    OP_JUMP lab_1E38
// lab_1E38
    pri = EvCameraMoveWait_()
    OP_JZER lab_1E70
    pri = 0;
    return pri;
// lab_1E70
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1E38
    pri = 0;
    return pri;
}
// fun_1EB0
fun_1EB0() {
    pri = arg_6;
    OP_JNZ lab_1EE8
    var_8 = 0;
    pri = fun_0E10()
// lab_1EE8
    pri = arg_1;
    switch (pri) {
// switch_3450
        case default:
        {
// switch_3450_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_37A0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_37A0
            pri = 1;
            OP_JUMP lab_37A8
// lab_37A0
            pri = 0;
// lab_37A8
            OP_JZER lab_3900
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0900(var_24, var_16)
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
            OP_JUMP lab_3960
// lab_3900
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
// lab_3960
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_39C0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3A20
// lab_39C0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3A20
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3A20
            pri = arg_2;
            OP_JZER lab_3A60
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3A60
            var_8 = 0;
            pri = fun_0E50()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3450_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x1:
        {
// switch_3450_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x2:
        {
// switch_3450_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x3:
        {
// switch_3450_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x4:
        {
// switch_3450_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x5:
        {
// switch_3450_case_0x5
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3450_case_default
        }
        case 0x6:
        {
// switch_3450_case_0x6
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3450_case_default
        }
        case 0x7:
        {
// switch_3450_case_0x7
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3450_case_default
        }
        case 0x8:
        {
// switch_3450_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x9:
        {
// switch_3450_case_0x9
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3450_case_default
        }
        case 0xa:
        {
// switch_3450_case_0xa
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3450_case_default
        }
        case 0xb:
        {
// switch_3450_case_0xb
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3450_case_default
        }
        case 0xc:
        {
// switch_3450_case_0xc
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3450_case_default
        }
        case 0xd:
        {
// switch_3450_case_0xd
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3450_case_default
        }
        case 0xe:
        {
// switch_3450_case_0xe
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3450_case_default
        }
        case 0xf:
        {
// switch_3450_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x10:
        {
// switch_3450_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x11:
        {
// switch_3450_case_0x11
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3450_case_default
        }
        case 0x12:
        {
// switch_3450_case_0x12
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3450_case_default
        }
        case 0x13:
        {
// switch_3450_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x14:
        {
// switch_3450_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x15:
        {
// switch_3450_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x16:
        {
// switch_3450_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x17:
        {
// switch_3450_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x18:
        {
// switch_3450_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x19:
        {
// switch_3450_case_0x19
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3450_case_default
        }
        case 0x1a:
        {
// switch_3450_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08C0(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0888(var_48, var_40)
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
            pri = fun_0B70(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3450_case_default
        }
        case 0x1b:
        {
// switch_3450_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08C0(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0888(var_48, var_40)
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
            pri = fun_0B70(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3450_case_default
        }
        case 0x1c:
        {
// switch_3450_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08C0(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0888(var_48, var_40)
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
            pri = fun_0B70(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3450_case_default
        }
        case 0x1d:
        {
// switch_3450_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x1e:
        {
// switch_3450_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x1f:
        {
// switch_3450_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x20:
        {
// switch_3450_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x21:
        {
// switch_3450_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x22:
        {
// switch_3450_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x23:
        {
// switch_3450_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x24:
        {
// switch_3450_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x25:
        {
// switch_3450_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x26:
        {
// switch_3450_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x27:
        {
// switch_3450_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x28:
        {
// switch_3450_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x29:
        {
// switch_3450_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
    }
}
// fun_3A90
fun_3A90() {
    pri = arg_5;
    OP_JNZ lab_3AC8
    var_8 = 0;
    pri = fun_0E10()
// lab_3AC8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3B18
    OP_CONST_S -8, -1
// lab_3B18
    pri = arg_1;
    switch (pri) {
// switch_55D0
        case default:
        {
// switch_55D0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5A78
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0900(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5A78
            pri = 1;
            OP_JUMP lab_5A80
// lab_5A78
            pri = 0;
// lab_5A80
            OP_JZER lab_5AD0
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5D28
// lab_5AD0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5B38
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5B38
            pri = 1;
            OP_JUMP lab_5B40
// lab_5B38
            pri = 0;
// lab_5B40
            OP_JZER lab_5CC8
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0900(var_24, var_16)
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
            OP_JUMP lab_5D28
// lab_5CC8
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
// lab_5D28
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_5D98
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_5D98
            var_8 = 0;
            pri = fun_0E50()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_55D0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x1:
        {
// switch_55D0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x2:
        {
// switch_55D0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x3:
        {
// switch_55D0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x4:
        {
// switch_55D0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x5:
        {
// switch_55D0_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08C0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0B38(var_40)
            OP_JUMP switch_55D0_case_default
        }
        case 0x6:
        {
// switch_55D0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x7:
        {
// switch_55D0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x8:
        {
// switch_55D0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x9:
        {
// switch_55D0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0xa:
        {
// switch_55D0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0xb:
        {
// switch_55D0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0xc:
        {
// switch_55D0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0xd:
        {
// switch_55D0_case_0xd
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55D0_case_default
        }
        case 0xe:
        {
// switch_55D0_case_0xe
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55D0_case_default
        }
        case 0xf:
        {
// switch_55D0_case_0xf
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55D0_case_default
        }
        case 0x10:
        {
// switch_55D0_case_0x10
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55D0_case_default
        }
        case 0x11:
        {
// switch_55D0_case_0x11
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55D0_case_default
        }
        case 0x12:
        {
// switch_55D0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x13:
        {
// switch_55D0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x14:
        {
// switch_55D0_case_0x14
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55D0_case_default
        }
        case 0x15:
        {
// switch_55D0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x16:
        {
// switch_55D0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x17:
        {
// switch_55D0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x18:
        {
// switch_55D0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x19:
        {
// switch_55D0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x1a:
        {
// switch_55D0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x1b:
        {
// switch_55D0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x1c:
        {
// switch_55D0_case_0x1c
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55D0_case_default
        }
        case 0x1d:
        {
// switch_55D0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x1e:
        {
// switch_55D0_case_0x1e
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55D0_case_default
        }
        case 0x1f:
        {
// switch_55D0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x20:
        {
// switch_55D0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x21:
        {
// switch_55D0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x22:
        {
// switch_55D0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x23:
        {
// switch_55D0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x24:
        {
// switch_55D0_case_0x24
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55D0_case_default
        }
        case 0x25:
        {
// switch_55D0_case_0x25
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55D0_case_default
        }
        case 0x26:
        {
// switch_55D0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x27:
        {
// switch_55D0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x28:
        {
// switch_55D0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x29:
        {
// switch_55D0_case_0x29
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55D0_case_default
        }
        case 0x2a:
        {
// switch_55D0_case_0x2a
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55D0_case_default
        }
        case 0x2b:
        {
// switch_55D0_case_0x2b
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55D0_case_default
        }
        case 0x2c:
        {
// switch_55D0_case_0x2c
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55D0_case_default
        }
        case 0x2d:
        {
// switch_55D0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x2e:
        {
// switch_55D0_case_0x2e
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55D0_case_default
        }
        case 0x2f:
        {
// switch_55D0_case_0x2f
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55D0_case_default
        }
        case 0x30:
        {
// switch_55D0_case_0x30
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55D0_case_default
        }
        case 0x31:
        {
// switch_55D0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x32:
        {
// switch_55D0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x33:
        {
// switch_55D0_case_0x33
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55D0_case_default
        }
        case 0x34:
        {
// switch_55D0_case_0x34
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55D0_case_default
        }
        case 0x35:
        {
// switch_55D0_case_0x35
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55D0_case_default
        }
        case 0x36:
        {
// switch_55D0_case_0x36
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55D0_case_default
        }
        case 0x37:
        {
// switch_55D0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x38:
        {
// switch_55D0_case_0x38
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
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55D0_case_default
        }
        case 0x39:
        {
// switch_55D0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x3a:
        {
// switch_55D0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x3b:
        {
// switch_55D0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x3c:
        {
// switch_55D0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x3d:
        {
// switch_55D0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
        case 0x3e:
        {
// switch_55D0_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08C0(var_24, var_16, var_8)
            OP_JUMP switch_55D0_case_default
        }
    }
}
// fun_5DC8
fun_5DC8() {
    pri = arg_4;
    OP_JNZ lab_5E00
    var_8 = 0;
    pri = fun_0E10()
// lab_5E00
    pri = arg_1;
    switch (pri) {
// switch_71D8
        case default:
        {
// switch_71D8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0ED0(var_264)
            OP_JZER lab_77A0
            pri = arg_3;
            switch (pri) {
// switch_7748
                case default:
                {
// switch_7748_case_default
                    OP_JUMP lab_7A58
// lab_7A58
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7AC8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7AC8
                    var_8 = 0;
                    pri = fun_0E50()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7748_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7748_case_default
                }
                case 0x2:
                {
// switch_7748_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7748_case_default
                }
                case 0x3:
                {
// switch_7748_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7748_case_default
                }
            }
// lab_77A0
            pri = arg_1;
            OP_JZER lab_77F0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_77F0
            pri = 0;
            OP_JUMP lab_77F8
// lab_77F0
            pri = 1;
// lab_77F8
            OP_JZER lab_7860
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0900(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7860
            pri = 1;
            OP_JUMP lab_7868
// lab_7860
            pri = 0;
// lab_7868
            OP_JZER lab_78B8
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7A58
// lab_78B8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7920
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7A58
// lab_7920
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0900(var_24, var_16)
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
// switch_71D8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x1:
        {
// switch_71D8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x2:
        {
// switch_71D8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x3:
        {
// switch_71D8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x4:
        {
// switch_71D8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x5:
        {
// switch_71D8_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08C0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0B38(var_40)
            OP_JUMP switch_71D8_case_default
        }
        case 0x6:
        {
// switch_71D8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x7:
        {
// switch_71D8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x8:
        {
// switch_71D8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x9:
        {
// switch_71D8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0xa:
        {
// switch_71D8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0xb:
        {
// switch_71D8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0xc:
        {
// switch_71D8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0xd:
        {
// switch_71D8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0xe:
        {
// switch_71D8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0xf:
        {
// switch_71D8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x10:
        {
// switch_71D8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x11:
        {
// switch_71D8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x12:
        {
// switch_71D8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x13:
        {
// switch_71D8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x14:
        {
// switch_71D8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x15:
        {
// switch_71D8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x16:
        {
// switch_71D8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x17:
        {
// switch_71D8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x18:
        {
// switch_71D8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x19:
        {
// switch_71D8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x1a:
        {
// switch_71D8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x1b:
        {
// switch_71D8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x1c:
        {
// switch_71D8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x1d:
        {
// switch_71D8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x1e:
        {
// switch_71D8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x1f:
        {
// switch_71D8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x20:
        {
// switch_71D8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x21:
        {
// switch_71D8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x22:
        {
// switch_71D8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x23:
        {
// switch_71D8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x24:
        {
// switch_71D8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x25:
        {
// switch_71D8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x26:
        {
// switch_71D8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x27:
        {
// switch_71D8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x28:
        {
// switch_71D8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x29:
        {
// switch_71D8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x2a:
        {
// switch_71D8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x2b:
        {
// switch_71D8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x2c:
        {
// switch_71D8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x2d:
        {
// switch_71D8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x2e:
        {
// switch_71D8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x2f:
        {
// switch_71D8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x30:
        {
// switch_71D8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x31:
        {
// switch_71D8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x32:
        {
// switch_71D8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x33:
        {
// switch_71D8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x34:
        {
// switch_71D8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x35:
        {
// switch_71D8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x36:
        {
// switch_71D8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x37:
        {
// switch_71D8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x38:
        {
// switch_71D8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x39:
        {
// switch_71D8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x3a:
        {
// switch_71D8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x3b:
        {
// switch_71D8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x3c:
        {
// switch_71D8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x3d:
        {
// switch_71D8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
        case 0x3e:
        {
// switch_71D8_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08C0(var_24, var_16, var_8)
            OP_JUMP switch_71D8_case_default
        }
    }
}
// fun_7AF8
fun_7AF8() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_7BF8
        case default:
        {
// switch_7BF8_case_default
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
// switch_7BF8_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_7BF8_case_default
        }
        case 0x1:
        {
// switch_7BF8_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_7BF8_case_default
        }
        case 0x2:
        {
// switch_7BF8_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_7BF8_case_default
        }
        case 0x3:
        {
// switch_7BF8_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_7BF8_case_default
        }
    }
}
// fun_7CB8
fun_7CB8() {
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
    pri = fun_1A18(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_1B90()
    pri = 0;
    return pri;
}
// fun_7D50
fun_7D50() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_7AF8(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_7CB8(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_7DF8
fun_7DF8() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_7E48
// lab_7E48
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30048;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_7EC0
    OP_JUMP lab_7EF0
// lab_7EC0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_7E48
// lab_7EF0
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_7F78
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_5DC8(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_11A0(var_56)
// lab_7F78
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_7FE0
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0E90(var_24, var_16)
// lab_7FE0
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0E90(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_80A0
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0938(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_06B8(var_88, var_80, var_72, var_64, var_56)
// lab_80A0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_80E0
    pri = 0;
    return pri;
// lab_80E0
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8228
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 30168;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0888(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_81F0
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_8228
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0760(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0760(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0938(var_40)
    pri = 0;
    return pri;
// lab_81F0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0E90(var_16, var_8)
}
// fun_82B0
fun_82B0() {
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
    pri = fun_7D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1C28(var_112)
    var_128 = 0;
    pri = fun_1CE8()
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
    pri = fun_7DF8(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_8428
fun_8428() {
    pri = 30304;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_84B0
// lab_84B0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_8630
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_8620
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_8570
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_8570
    pri = 0;
    OP_JUMP lab_8578
// lab_8630
    pri = 0;
    return pri;
// lab_8620
    OP_JUMP lab_84A8
// lab_84A8
    OP_INC_P_S -936
// lab_8570
    pri = 1;
// lab_8578
    OP_JZER lab_85F0
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_85E8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_85F0
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_85E8
}
// fun_8650
fun_8650() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_86E8
    var_8 = 1;
    var_16 = 0;
    var_24 = 31224;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1178()
// lab_86E8
    pri = arg_4;
    OP_JZER lab_8720
    var_8 = 1;
    var_16 = 8;
    pri = fun_11D0(var_8)
// lab_8720
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_8778
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_8778
    pri = 0;
    OP_JUMP lab_8780
// lab_8778
    pri = 1;
// lab_8780
    OP_JZER lab_8848
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_8848
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_8820
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_10B8(var_32, var_24)
    OP_JUMP lab_8848
// lab_8848
    pri = arg_2;
    OP_JZER lab_8920
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_88F0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0E90(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0608(var_40)
    OP_JUMP lab_8920
// lab_8920
    pri = arg_3;
    OP_JZER lab_8958
    var_8 = 1;
    var_16 = 8;
    pri = fun_1140(var_8)
// lab_8958
    pri = 0;
    return pri;
// lab_88F0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0E90(var_16, var_8)
// lab_8820
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_10B8(var_16, var_8)
}
// fun_8968
fun_8968() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_8428(var_24)
    pri = 0;
    return pri;
}
// fun_89D0
fun_89D0() {
    pri = g_mode;
    switch (pri) {
// switch_8B30
        case default:
        {
// switch_8B30_case_default
            pri = CommandNOP()
            OP_JUMP lab_8BB8
// lab_8BB8
            pri = 0;
            return pri;
        }
        case 0x948c517337a29b1c:
        {
// switch_8B30_case_0x948c517337a29b1c
            var_8 = 0;
            pri = fun_9B98()
            OP_JUMP lab_8BB8
        }
        case 0xdad1d04dbc9baa39:
        {
// switch_8B30_case_0xdad1d04dbc9baa39
            var_8 = 0;
            pri = fun_9B10()
            OP_JUMP lab_8BB8
        }
        case 0xfcef9fc081067323:
        {
// switch_8B30_case_0xfcef9fc081067323
            var_8 = 0;
            pri = fun_9C20()
            OP_JUMP lab_8BB8
        }
        case 0x0:
        {
// switch_8B30_case_0x0
            var_8 = 0;
            pri = fun_8BC8()
            OP_JUMP lab_8BB8
        }
        case 0x1a2db7fbf61c7742:
        {
// switch_8B30_case_0x1a2db7fbf61c7742
            var_8 = 0;
            pri = fun_9A88()
            OP_JUMP lab_8BB8
        }
        case 0x34e38c27744d21ec:
        {
// switch_8B30_case_0x34e38c27744d21ec
            var_8 = 0;
            pri = fun_9A40()
            OP_JUMP lab_8BB8
        }
        case 0x5242f62afe41fa78:
        {
// switch_8B30_case_0x5242f62afe41fa78
            var_8 = 0;
            pri = fun_9938()
            OP_JUMP lab_8BB8
        }
    }
}
// fun_8BC8
fun_8BC8() {
    pri = 0;
    return pri;
}
// fun_8BE0
fun_8BE0() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 31224;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_8C48
fun_8C48() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_8650(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8CA0
fun_8CA0() {
    var_8 = 1372741294210509627;
    var_16 = 8;
    pri = fun_0408(var_8)
    pri = 0;
    return pri;
}
// fun_8CE0
fun_8CE0() {
    var_8 = 0;
    pri = fun_0438()
    pri = 0;
    return pri;
}
// fun_8D10
fun_8D10() {
    pri = EvCameraStart()
    var_8 = 0;
    var_16 = -4616189618054758400;
    var_24 = -1;
    OP_PUSH5_C 4675741421813943501, 4645125245660613837, 4667624607075375514, 4675787546326728704, 4644365263223495066
    var_32 = 4667345551024245965;
    var_40 = 1;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 1;
    var_56 = 1;
    var_64 = 90;
    pri = float(var_64)
    var_72 = pri;
    OP_PUSH3_C 4675709893318017024, 4667406518944006144, 8802641224559852288
    var_80 = 48;
    pri = fun_05B0(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 1;
    var_96 = 8;
    pri = fun_0060(var_88)
    var_104 = 31272;
    var_112 = 8;
    var_120 = 16;
    pri = fun_0280(var_112, var_104)
    var_128 = 0;
    pri = fun_0350()
    var_136 = 30;
    var_144 = 8;
    pri = fun_0060(var_136)
    var_152 = 0;
    var_160 = -4616189618054758400;
    var_168 = 3;
    OP_PUSH5_C 4675739071607839130, -4588457295974341018, 4667638900726536602, 4675785182376728986, -4585417366225865933
    var_176 = 4667359844675407053;
    var_184 = 80;
    pri = EvCameraMove(var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_192 = 1;
    var_200 = 0;
    var_208 = 4641240890982006784;
    var_216 = 0;
    var_224 = 0;
    var_232 = 39852;
    pri = float(var_232)
    var_240 = pri;
    var_248 = 11453;
    pri = float(var_248)
    var_256 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_264 = 72;
    pri = fun_0640(var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_272 = 30;
    var_280 = 8;
    pri = fun_0060(var_272)
    var_288 = 1;
    var_296 = -1;
    var_304 = -1;
    var_312 = 3;
    var_320 = 0;
    var_328 = 1;
    var_336 = 5642674740608937869;
    var_344 = 56;
    pri = fun_1EB0(var_336, var_328, var_320, var_312, var_304, var_296, var_288)
    var_352 = 8802641224559852288;
    var_360 = 8;
    pri = fun_0760(var_352)
    var_368 = 0;
    var_376 = 0;
    var_384 = 0;
    var_392 = 0;
    OP_PUSH2_C -2724302863974222557, 8802641224559852288
    var_400 = 48;
    pri = fun_0708(var_392, var_384, var_376, var_368, var_360, var_352)
    var_408 = 20;
    var_416 = 8;
    pri = fun_0060(var_408)
    var_424 = 8802641224559852288;
    var_432 = 8;
    pri = fun_0760(var_424)
    var_440 = 5642674740608937869;
    var_448 = 8;
    pri = fun_0938(var_440)
    var_456 = 0;
    var_464 = 0;
    var_472 = 0;
    var_480 = 0;
    OP_PUSH2_C 8802641224559852288, -2724302863974222557
    var_488 = 48;
    pri = fun_0708(var_480, var_472, var_464, var_456, var_448, var_440)
    var_496 = -2724302863974222557;
    var_504 = 8;
    pri = fun_0760(var_496)
    var_512 = 0;
    var_520 = 3;
    var_528 = 0;
    var_536 = 100;
    var_544 = -1;
    OP_PUSH2_C -2425494841926472324, -2724302863974222557
    var_552 = 56;
    pri = fun_1A18(var_544, var_536, var_528, var_520, var_512, var_504, var_496)
    var_560 = 1;
    var_568 = 8;
    pri = fun_1C28(var_560)
    var_576 = 0;
    pri = fun_1CE8()
    var_584 = 0;
    var_592 = 0;
    var_600 = 0;
    var_608 = 0;
    OP_PUSH2_C 8802641224559852288, -1668178174224212191
    var_616 = 48;
    pri = fun_0708(var_608, var_600, var_592, var_584, var_576, var_568)
    var_624 = -1668178174224212191;
    var_632 = 8;
    pri = fun_0760(var_624)
    var_640 = 0;
    var_648 = 3;
    var_656 = 0;
    var_664 = 100;
    var_672 = -1;
    OP_PUSH2_C -2425491543391587691, -1668178174224212191
    var_680 = 56;
    pri = fun_1A18(var_672, var_664, var_656, var_648, var_640, var_632, var_624)
    var_688 = 1;
    var_696 = 8;
    pri = fun_1C28(var_688)
    var_704 = 0;
    pri = fun_1CE8()
    var_712 = 1;
    var_720 = 1;
    var_728 = -1;
    var_736 = -1;
    var_744 = 0;
    var_752 = 11;
    var_760 = -3814344741079757246;
    var_768 = 56;
    pri = fun_3A90(var_760, var_752, var_744, var_736, var_728, var_720, var_712)
    var_776 = 0;
    var_784 = 3;
    var_792 = 0;
    var_800 = 101;
    var_808 = -1;
    OP_PUSH2_C -2425492642903215902, -3814344741079757246
    var_816 = 56;
    pri = fun_1A18(var_808, var_800, var_792, var_784, var_776, var_768, var_760)
    var_824 = 1;
    var_832 = 8;
    pri = fun_1C28(var_824)
    var_840 = 0;
    pri = fun_1CE8()
    var_848 = 0;
    var_856 = 0;
    var_864 = 0;
    var_872 = 90;
    pri = float(var_872)
    var_880 = pri;
    var_888 = -2724302863974222557;
    var_896 = 40;
    pri = fun_06B8(var_888, var_880, var_872, var_864, var_856)
    var_904 = 45;
    var_912 = 8;
    pri = fun_0060(var_904)
    var_920 = -2724302863974222557;
    var_928 = 8;
    pri = fun_0760(var_920)
    var_936 = 0;
    var_944 = 4631952216750555136;
    var_952 = 3;
    OP_PUSH5_C 4675757804537197363, -4581253999476594442, 4667698532739669033, 4675883965250147451, 4626162276479616942
    var_960 = 4667468624858301071;
    var_968 = 50;
    pri = EvCameraMove(var_968, var_960, var_952, var_944, var_936, var_928, var_920, var_912, var_904, var_896)
    var_976 = 31320;
    var_984 = 8;
    pri = fun_1D18(var_976)
    var_992 = 0;
    pri = fun_1D50()
    var_1000 = 20;
    var_1008 = 8;
    pri = fun_0060(var_1000)
    var_1016 = 0;
    pri = fun_1E20()
    var_1024 = 0;
    var_1032 = 0;
    var_1040 = 0;
    var_1048 = 0;
    OP_PUSH2_C 1372741294210509627, 8802641224559852288
    var_1056 = 48;
    pri = fun_0708(var_1048, var_1040, var_1032, var_1024, var_1016, var_1008)
    var_1064 = 1;
    var_1072 = 1;
    var_1080 = -1;
    var_1088 = -1;
    var_1096 = 0;
    var_1104 = 1;
    var_1112 = 1372741294210509627;
    var_1120 = 56;
    pri = fun_3A90(var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064)
    var_1128 = 0;
    var_1136 = 3;
    var_1144 = 0;
    var_1152 = 100;
    var_1160 = -1;
    OP_PUSH2_C -6160244707505077076, 1372741294210509627
    var_1168 = 56;
    pri = fun_1AC8(var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112)
    var_1176 = 1;
    var_1184 = 8;
    pri = fun_1C28(var_1176)
    var_1192 = 0;
    pri = fun_1CE8()
    var_1200 = 1;
    var_1208 = 3;
    var_1216 = 0;
    var_1224 = 1;
    var_1232 = 1372741294210509627;
    var_1240 = 40;
    pri = fun_5DC8(var_1232, var_1224, var_1216, var_1208, var_1200)
    var_1248 = 1372741294210509627;
    var_1256 = 8;
    pri = fun_0938(var_1248)
    var_1264 = 8802641224559852288;
    var_1272 = 8;
    pri = fun_0760(var_1264)
    var_1280 = 0;
    pri = fun_1DF0()
    var_1288 = 1;
    var_1296 = 3;
    var_1304 = 0;
    var_1312 = 11;
    var_1320 = -3814344741079757246;
    var_1328 = 40;
    pri = fun_5DC8(var_1320, var_1312, var_1304, var_1296, var_1288)
    var_1336 = 3;
    var_1344 = 30;
    pri = EvCameraEnd(var_1344, var_1336)
    var_1352 = 30;
    var_1360 = 8;
    pri = fun_0060(var_1352)
    var_1368 = -3814344741079757246;
    var_1376 = 8;
    pri = fun_0938(var_1368)
    pri = 0;
    return pri;
}
// fun_9878
fun_9878() {
    pri = 0;
    return pri;
}
// fun_9890
fun_9890() {
    var_8 = 1325;
    var_16 = 8;
    pri = fun_8968(var_8)
    var_24 = 1070072138534217243;
    pri = FlagSet(var_24)
    pri = 0;
    return pri;
}
// fun_98F0
fun_98F0() {
    OP_PUSH2_C 1372741294210509627, -8330320304422435564
    pri = SetBamiriInfoToChara(var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_9938
fun_9938() {
    var_8 = 0;
    pri = fun_8BE0()
    pri = CommandNOP()
    var_16 = 0;
    pri = fun_8C48()
    var_24 = 0;
    pri = fun_8CA0()
    var_32 = 0;
    pri = fun_8CE0()
    var_40 = 0;
    pri = fun_8D10()
    var_48 = 0;
    pri = fun_9878()
    var_56 = 0;
    pri = fun_9890()
    var_64 = 0;
    pri = fun_98F0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_9A40
fun_9A40() {
    var_8 = 0;
    pri = fun_8CA0()
    var_16 = 0;
    pri = fun_9890()
    pri = 0;
    return pri;
}
// fun_9A88
fun_9A88() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -2425494841926472324;
    var_88 = 80;
    pri = fun_82B0(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9B10
fun_9B10() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -2425491543391587691;
    var_88 = 80;
    pri = fun_82B0(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9B98
fun_9B98() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -2425492642903215902;
    var_88 = 80;
    pri = fun_82B0(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9C20
fun_9C20() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 1429373640416866432;
    var_88 = 80;
    pri = fun_82B0(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
