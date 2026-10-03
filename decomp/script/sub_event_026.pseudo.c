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
// fun_0318
fun_0318() {
    OP_JUMP lab_0330
// lab_0330
    pri = FadeWait_()
    OP_JZER lab_0368
    pri = 0;
    return pri;
// lab_0368
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0330
    pri = 0;
    return pri;
}
// fun_03A8
fun_03A8() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_03D0
fun_03D0() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0418
// lab_0418
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0458
    OP_JUMP lab_04C8
// lab_0458
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0498
    OP_JUMP lab_04C8
// lab_0498
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0418
// lab_04C8
    pri = 0;
    return pri;
}
// fun_04E0
fun_04E0() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0518
fun_0518() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0568
fun_0568() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05C0
fun_05C0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E58(var_8)
    OP_JZER lab_0638
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0E88(var_24)
    OP_JNZ lab_0638
    pri = 0;
    return pri;
// lab_0638
    OP_JUMP lab_0648
// lab_0648
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_06A8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_06A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0648
    pri = 0;
    return pri;
}
// fun_06E8
fun_06E8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0720
fun_0720() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0760
fun_0760() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0798
fun_0798() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_07E0
    pri = 0;
    return pri;
// lab_07E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0820
// lab_0820
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E58(var_8)
    OP_JNZ lab_08A8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0898
    pri = 0;
    return pri;
// lab_08A8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_08F0
    pri = 0;
    return pri;
// lab_08F0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0950
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0AC0(var_8)
    pri = 0;
    return pri;
// lab_0950
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0820
    pri = 0;
    return pri;
// lab_0898
    OP_JUMP lab_08F0
}
// fun_0998
fun_0998() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_09E0
// lab_09E0
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0A38
    pri = 0;
    return pri;
// lab_0A38
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0A78
    pri = 0;
    return pri;
// lab_0A78
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_09E0
    pri = 0;
    return pri;
}
// fun_0AC0
fun_0AC0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0AF8
fun_0AF8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0B48
    pri = 0;
    return pri;
// lab_0B48
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E58(var_8)
    OP_JZER lab_0C78
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0BA0
    OP_ZERO_P_S 64
// lab_0C78
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0CB0
    OP_CONST_S 64, 1
// lab_0CB0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0CE8
    OP_CONST_S 72, 1
// lab_0CE8
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
// lab_0BA0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0BC8
    OP_ZERO_P_S 72
// lab_0BC8
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
    OP_JUMP lab_0D88
// lab_0D88
    pri = 0;
    return pri;
}
// fun_0D98
fun_0D98() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DD8
fun_0DD8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E18
fun_0E18() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E58
fun_0E58() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0E88
fun_0E88() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0EB8
fun_0EB8() {
    OP_JUMP lab_0ED0
// lab_0ED0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0F60
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0F50
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0798(var_8)
    pri = 0;
    return pri;
// lab_0F60
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0FF0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0FE0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0798(var_8)
    pri = 0;
    return pri;
// lab_0FF0
    pri = 0;
    return pri;
// lab_0FE0
    OP_JUMP lab_1000
// lab_1000
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0ED0
    pri = 0;
    return pri;
// lab_0F50
    OP_JUMP lab_1000
}
// fun_1040
fun_1040() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0798(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0EB8(var_40)
    pri = 0;
    return pri;
}
// fun_10C8
fun_10C8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1100
fun_1100() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1128
fun_1128() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1158
fun_1158() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1190
fun_1190() {
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
// switch_17A8
        case default:
        {
// switch_17A8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_17F0
// lab_17F0
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
            OP_JNZ lab_1898
            var_88 = 0;
            pri = fun_1B68()
// lab_1898
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_17A8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1390
                case default:
                {
// switch_1390_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1408
// lab_1408
                    OP_JUMP lab_17F0
                }
                case 0x0:
                {
// switch_1390_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1408
                }
                case 0x1:
                {
// switch_1390_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1408
                }
                case 0x2:
                {
// switch_1390_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1408
                }
                case 0x3:
                {
// switch_1390_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1408
                }
                case 0x4:
                {
// switch_1390_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1408
                }
                case 0x5:
                {
// switch_1390_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1408
                }
            }
        }
        case 0x65:
        {
// switch_17A8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1548
                case default:
                {
// switch_1548_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_15C0
// lab_15C0
                    OP_JUMP lab_17F0
                }
                case 0x0:
                {
// switch_1548_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_15C0
                }
                case 0x1:
                {
// switch_1548_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_15C0
                }
                case 0x2:
                {
// switch_1548_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_15C0
                }
                case 0x3:
                {
// switch_1548_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_15C0
                }
                case 0x4:
                {
// switch_1548_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_15C0
                }
                case 0x5:
                {
// switch_1548_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_15C0
                }
            }
        }
        case 0x66:
        {
// switch_17A8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1700
                case default:
                {
// switch_1700_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1778
// lab_1778
                    OP_JUMP lab_17F0
                }
                case 0x0:
                {
// switch_1700_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1778
                }
                case 0x1:
                {
// switch_1700_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1778
                }
                case 0x2:
                {
// switch_1700_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1778
                }
                case 0x3:
                {
// switch_1700_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1778
                }
                case 0x4:
                {
// switch_1700_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1778
                }
                case 0x5:
                {
// switch_1700_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1778
                }
            }
        }
    }
}
// fun_18B0
fun_18B0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1190(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1918
fun_1918() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0760(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_19C0
    pri = 1;
    return pri;
// lab_19C0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1A08
fun_1A08() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1A58
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1918(var_8)
    arg_2 = pri;
// lab_1A58
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1190(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1AB8
fun_1AB8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_18B0(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B08
fun_1B08() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1AB8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B68
fun_1B68() {
    OP_JUMP lab_1B80
// lab_1B80
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1BC0
    pri = 0;
    return pri;
// lab_1BC0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1B80
    pri = 0;
    return pri;
}
// fun_1C00
fun_1C00() {
    var_8 = 0;
    pri = fun_1B68()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1CB0
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1CB0
    pri = 0;
    return pri;
}
// fun_1CC0
fun_1CC0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1CF0
fun_1CF0() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1D28
fun_1D28() {
    OP_JUMP lab_1D40
// lab_1D40
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1D88
    OP_JUMP lab_1DB8
    OP_JUMP lab_1DA8
// lab_1D88
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_1DB8
    pri = 0;
    return pri;
// lab_1DA8
    OP_JUMP lab_1D40
}
// fun_1DC8
fun_1DC8() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_1DF8
fun_1DF8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E48
fun_1E48() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E98
fun_1E98() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1EE8
fun_1EE8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F38
fun_1F38() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F88
fun_1F88() {
    var_8 = arg_0;
    pri = SetNpcLicenseCardFlag(var_8)
    pri = 0;
    return pri;
}
// fun_1FC0
fun_1FC0() {
    pri = arg_6;
    OP_JNZ lab_1FF8
    var_8 = 0;
    pri = fun_0D98()
// lab_1FF8
    pri = arg_1;
    switch (pri) {
// switch_3560
        case default:
        {
// switch_3560_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_38B0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_38B0
            pri = 1;
            OP_JUMP lab_38B8
// lab_38B0
            pri = 0;
// lab_38B8
            OP_JZER lab_3A10
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0760(var_24, var_16)
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
            OP_JUMP lab_3A70
// lab_3A10
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
            pri = fun_0160(var_16, var_8, var_0)
// lab_3A70
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3AD0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3B30
// lab_3AD0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3B30
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3B30
            pri = arg_2;
            OP_JZER lab_3B70
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3B70
            var_8 = 0;
            pri = fun_0DD8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3560_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3560_case_default
        }
        case 0x1:
        {
// switch_3560_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3560_case_default
        }
        case 0x2:
        {
// switch_3560_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3560_case_default
        }
        case 0x3:
        {
// switch_3560_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3560_case_default
        }
        case 0x4:
        {
// switch_3560_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3560_case_default
        }
        case 0x5:
        {
// switch_3560_case_0x5
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3560_case_default
        }
        case 0x6:
        {
// switch_3560_case_0x6
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3560_case_default
        }
        case 0x7:
        {
// switch_3560_case_0x7
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3560_case_default
        }
        case 0x8:
        {
// switch_3560_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3560_case_default
        }
        case 0x9:
        {
// switch_3560_case_0x9
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3560_case_default
        }
        case 0xa:
        {
// switch_3560_case_0xa
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3560_case_default
        }
        case 0xb:
        {
// switch_3560_case_0xb
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3560_case_default
        }
        case 0xc:
        {
// switch_3560_case_0xc
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3560_case_default
        }
        case 0xd:
        {
// switch_3560_case_0xd
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3560_case_default
        }
        case 0xe:
        {
// switch_3560_case_0xe
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3560_case_default
        }
        case 0xf:
        {
// switch_3560_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3560_case_default
        }
        case 0x10:
        {
// switch_3560_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3560_case_default
        }
        case 0x11:
        {
// switch_3560_case_0x11
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3560_case_default
        }
        case 0x12:
        {
// switch_3560_case_0x12
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3560_case_default
        }
        case 0x13:
        {
// switch_3560_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3560_case_default
        }
        case 0x14:
        {
// switch_3560_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3560_case_default
        }
        case 0x15:
        {
// switch_3560_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3560_case_default
        }
        case 0x16:
        {
// switch_3560_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3560_case_default
        }
        case 0x17:
        {
// switch_3560_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3560_case_default
        }
        case 0x18:
        {
// switch_3560_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3560_case_default
        }
        case 0x19:
        {
// switch_3560_case_0x19
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3560_case_default
        }
        case 0x1a:
        {
// switch_3560_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0720(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_06E8(var_48, var_40)
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
            pri = fun_0AF8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3560_case_default
        }
        case 0x1b:
        {
// switch_3560_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0720(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_06E8(var_48, var_40)
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
            pri = fun_0AF8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3560_case_default
        }
        case 0x1c:
        {
// switch_3560_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0720(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_06E8(var_48, var_40)
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
            pri = fun_0AF8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3560_case_default
        }
        case 0x1d:
        {
// switch_3560_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3560_case_default
        }
        case 0x1e:
        {
// switch_3560_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3560_case_default
        }
        case 0x1f:
        {
// switch_3560_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3560_case_default
        }
        case 0x20:
        {
// switch_3560_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3560_case_default
        }
        case 0x21:
        {
// switch_3560_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3560_case_default
        }
        case 0x22:
        {
// switch_3560_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3560_case_default
        }
        case 0x23:
        {
// switch_3560_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3560_case_default
        }
        case 0x24:
        {
// switch_3560_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3560_case_default
        }
        case 0x25:
        {
// switch_3560_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3560_case_default
        }
        case 0x26:
        {
// switch_3560_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3560_case_default
        }
        case 0x27:
        {
// switch_3560_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3560_case_default
        }
        case 0x28:
        {
// switch_3560_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3560_case_default
        }
        case 0x29:
        {
// switch_3560_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3560_case_default
        }
    }
}
// fun_3BA0
fun_3BA0() {
    pri = arg_5;
    OP_JNZ lab_3BD8
    var_8 = 0;
    pri = fun_0D98()
// lab_3BD8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3C28
    OP_CONST_S -8, -1
// lab_3C28
    pri = arg_1;
    switch (pri) {
// switch_56E0
        case default:
        {
// switch_56E0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5B88
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0760(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5B88
            pri = 1;
            OP_JUMP lab_5B90
// lab_5B88
            pri = 0;
// lab_5B90
            OP_JZER lab_5BE0
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_5E38
// lab_5BE0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5C48
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5C48
            pri = 1;
            OP_JUMP lab_5C50
// lab_5C48
            pri = 0;
// lab_5C50
            OP_JZER lab_5DD8
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0760(var_24, var_16)
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
            OP_JUMP lab_5E38
// lab_5DD8
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
            pri = fun_0160(var_16, var_8, var_0)
// lab_5E38
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_5EA8
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_5EA8
            var_8 = 0;
            pri = fun_0DD8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_56E0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x1:
        {
// switch_56E0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x2:
        {
// switch_56E0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x3:
        {
// switch_56E0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x4:
        {
// switch_56E0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x5:
        {
// switch_56E0_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0720(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0AC0(var_40)
            OP_JUMP switch_56E0_case_default
        }
        case 0x6:
        {
// switch_56E0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x7:
        {
// switch_56E0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x8:
        {
// switch_56E0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x9:
        {
// switch_56E0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0xa:
        {
// switch_56E0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0xb:
        {
// switch_56E0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0xc:
        {
// switch_56E0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0xd:
        {
// switch_56E0_case_0xd
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56E0_case_default
        }
        case 0xe:
        {
// switch_56E0_case_0xe
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56E0_case_default
        }
        case 0xf:
        {
// switch_56E0_case_0xf
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56E0_case_default
        }
        case 0x10:
        {
// switch_56E0_case_0x10
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56E0_case_default
        }
        case 0x11:
        {
// switch_56E0_case_0x11
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56E0_case_default
        }
        case 0x12:
        {
// switch_56E0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x13:
        {
// switch_56E0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x14:
        {
// switch_56E0_case_0x14
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56E0_case_default
        }
        case 0x15:
        {
// switch_56E0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x16:
        {
// switch_56E0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x17:
        {
// switch_56E0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x18:
        {
// switch_56E0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x19:
        {
// switch_56E0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x1a:
        {
// switch_56E0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x1b:
        {
// switch_56E0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x1c:
        {
// switch_56E0_case_0x1c
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56E0_case_default
        }
        case 0x1d:
        {
// switch_56E0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x1e:
        {
// switch_56E0_case_0x1e
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56E0_case_default
        }
        case 0x1f:
        {
// switch_56E0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x20:
        {
// switch_56E0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x21:
        {
// switch_56E0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x22:
        {
// switch_56E0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x23:
        {
// switch_56E0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x24:
        {
// switch_56E0_case_0x24
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56E0_case_default
        }
        case 0x25:
        {
// switch_56E0_case_0x25
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56E0_case_default
        }
        case 0x26:
        {
// switch_56E0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x27:
        {
// switch_56E0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x28:
        {
// switch_56E0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x29:
        {
// switch_56E0_case_0x29
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56E0_case_default
        }
        case 0x2a:
        {
// switch_56E0_case_0x2a
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56E0_case_default
        }
        case 0x2b:
        {
// switch_56E0_case_0x2b
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56E0_case_default
        }
        case 0x2c:
        {
// switch_56E0_case_0x2c
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56E0_case_default
        }
        case 0x2d:
        {
// switch_56E0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x2e:
        {
// switch_56E0_case_0x2e
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56E0_case_default
        }
        case 0x2f:
        {
// switch_56E0_case_0x2f
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56E0_case_default
        }
        case 0x30:
        {
// switch_56E0_case_0x30
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56E0_case_default
        }
        case 0x31:
        {
// switch_56E0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x32:
        {
// switch_56E0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x33:
        {
// switch_56E0_case_0x33
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56E0_case_default
        }
        case 0x34:
        {
// switch_56E0_case_0x34
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56E0_case_default
        }
        case 0x35:
        {
// switch_56E0_case_0x35
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56E0_case_default
        }
        case 0x36:
        {
// switch_56E0_case_0x36
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56E0_case_default
        }
        case 0x37:
        {
// switch_56E0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x38:
        {
// switch_56E0_case_0x38
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_56E0_case_default
        }
        case 0x39:
        {
// switch_56E0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x3a:
        {
// switch_56E0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x3b:
        {
// switch_56E0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x3c:
        {
// switch_56E0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x3d:
        {
// switch_56E0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
        case 0x3e:
        {
// switch_56E0_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0720(var_24, var_16, var_8)
            OP_JUMP switch_56E0_case_default
        }
    }
}
// fun_5ED8
fun_5ED8() {
    pri = arg_4;
    OP_JNZ lab_5F10
    var_8 = 0;
    pri = fun_0D98()
// lab_5F10
    pri = arg_1;
    switch (pri) {
// switch_72E8
        case default:
        {
// switch_72E8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0E58(var_264)
            OP_JZER lab_78B0
            pri = arg_3;
            switch (pri) {
// switch_7858
                case default:
                {
// switch_7858_case_default
                    OP_JUMP lab_7B68
// lab_7B68
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7BD8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7BD8
                    var_8 = 0;
                    pri = fun_0DD8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7858_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7858_case_default
                }
                case 0x2:
                {
// switch_7858_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7858_case_default
                }
                case 0x3:
                {
// switch_7858_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7858_case_default
                }
            }
// lab_78B0
            pri = arg_1;
            OP_JZER lab_7900
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7900
            pri = 0;
            OP_JUMP lab_7908
// lab_7900
            pri = 1;
// lab_7908
            OP_JZER lab_7970
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0760(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7970
            pri = 1;
            OP_JUMP lab_7978
// lab_7970
            pri = 0;
// lab_7978
            OP_JZER lab_79C8
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_7B68
// lab_79C8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7A30
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_7B68
// lab_7A30
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0760(var_24, var_16)
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
// switch_72E8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x1:
        {
// switch_72E8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x2:
        {
// switch_72E8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x3:
        {
// switch_72E8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x4:
        {
// switch_72E8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x5:
        {
// switch_72E8_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0720(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0AC0(var_40)
            OP_JUMP switch_72E8_case_default
        }
        case 0x6:
        {
// switch_72E8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x7:
        {
// switch_72E8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x8:
        {
// switch_72E8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x9:
        {
// switch_72E8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0xa:
        {
// switch_72E8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0xb:
        {
// switch_72E8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0xc:
        {
// switch_72E8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0xd:
        {
// switch_72E8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0xe:
        {
// switch_72E8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0xf:
        {
// switch_72E8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x10:
        {
// switch_72E8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x11:
        {
// switch_72E8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x12:
        {
// switch_72E8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x13:
        {
// switch_72E8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x14:
        {
// switch_72E8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x15:
        {
// switch_72E8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x16:
        {
// switch_72E8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x17:
        {
// switch_72E8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x18:
        {
// switch_72E8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x19:
        {
// switch_72E8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x1a:
        {
// switch_72E8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x1b:
        {
// switch_72E8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x1c:
        {
// switch_72E8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x1d:
        {
// switch_72E8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x1e:
        {
// switch_72E8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x1f:
        {
// switch_72E8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x20:
        {
// switch_72E8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x21:
        {
// switch_72E8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x22:
        {
// switch_72E8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x23:
        {
// switch_72E8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x24:
        {
// switch_72E8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x25:
        {
// switch_72E8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x26:
        {
// switch_72E8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x27:
        {
// switch_72E8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x28:
        {
// switch_72E8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x29:
        {
// switch_72E8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x2a:
        {
// switch_72E8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x2b:
        {
// switch_72E8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x2c:
        {
// switch_72E8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x2d:
        {
// switch_72E8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x2e:
        {
// switch_72E8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x2f:
        {
// switch_72E8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x30:
        {
// switch_72E8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x31:
        {
// switch_72E8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x32:
        {
// switch_72E8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x33:
        {
// switch_72E8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x34:
        {
// switch_72E8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x35:
        {
// switch_72E8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x36:
        {
// switch_72E8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x37:
        {
// switch_72E8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x38:
        {
// switch_72E8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x39:
        {
// switch_72E8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x3a:
        {
// switch_72E8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x3b:
        {
// switch_72E8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x3c:
        {
// switch_72E8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x3d:
        {
// switch_72E8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
        case 0x3e:
        {
// switch_72E8_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0720(var_24, var_16, var_8)
            OP_JUMP switch_72E8_case_default
        }
    }
}
// fun_7C08
fun_7C08() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_7D08
        case default:
        {
// switch_7D08_case_default
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
// switch_7D08_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_7D08_case_default
        }
        case 0x1:
        {
// switch_7D08_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_7D08_case_default
        }
        case 0x2:
        {
// switch_7D08_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_7D08_case_default
        }
        case 0x3:
        {
// switch_7D08_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_7D08_case_default
        }
    }
}
// fun_7DC8
fun_7DC8() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_7E18
// lab_7E18
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30048;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_7E90
    OP_JUMP lab_7EC0
// lab_7E90
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_7E18
// lab_7EC0
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_7F48
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_5ED8(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1128(var_56)
// lab_7F48
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_7FB0
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0E18(var_24, var_16)
// lab_7FB0
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0E18(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_8070
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0798(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0518(var_88, var_80, var_72, var_64, var_56)
// lab_8070
    pri = IsPlayerRideBicycle()
    OP_JZER lab_80B0
    pri = 0;
    return pri;
// lab_80B0
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_81F8
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 30168;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_06E8(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_81C0
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_81F8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_05C0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_05C0(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0798(var_40)
    pri = 0;
    return pri;
// lab_81C0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0E18(var_16, var_8)
}
// fun_8280
fun_8280() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_8318
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0798(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_1FC0(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_8318
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_8470
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_83D8
    var_24 = 30304;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_83D8
    pri = 1;
    OP_JUMP lab_83E0
// lab_8470
    pri = 0;
    return pri;
// lab_83D8
    pri = 0;
// lab_83E0
    OP_JZER lab_8470
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0798(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_1FC0(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_8480
fun_8480() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_8280(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_8508(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_8508
fun_8508() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_88F0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8570
fun_8570() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_88F0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_85D8
fun_85D8() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_8648
    OP_CONST_S -8, 1
// lab_8648
    pri = arg_0;
    OP_JNZ lab_8668
    OP_ZERO_P_S -8
// lab_8668
    pri = var_8;
    OP_JZER lab_86F0
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_86F0
    pri = 0;
    return pri;
}
// fun_8708
fun_8708() {
    var_8 = 30408;
    var_16 = 8;
    pri = fun_1CF0(var_8)
    var_24 = 0;
    pri = fun_1D28()
    var_32 = 0;
    var_40 = 8;
    pri = fun_1DF8(var_32)
    var_48 = 1;
    var_56 = arg_1;
    var_64 = 1;
    var_72 = 24;
    pri = fun_1F38(var_64, var_56, var_48)
    OP_CONST_S -8, 6088246355923164688
    OP_CONST_S -16, -3980990967343358874
    pri = arg_3;
    OP_JZER lab_8820
    OP_CONST_S -8, 6088249654458049321
    OP_CONST_S -16, -3980992066854987085
// lab_8820
    var_8 = 6;
    var_16 = 4;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_8280(var_24, var_16, var_8)
    var_40 = 2;
    var_48 = 1;
    var_56 = 9;
    var_64 = var_16;
    var_72 = var_8;
    var_80 = 0;
    var_88 = 0;
    var_96 = 56;
    pri = fun_8570(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 0;
    pri = fun_1DC8()
    var_112 = arg_2;
    var_120 = 8;
    pri = fun_1F88(var_112)
    pri = 0;
    return pri;
}
// fun_88F0
fun_88F0() {
    var_8 = 30568;
    var_16 = 8;
    pri = fun_1CF0(var_8)
    var_24 = 0;
    pri = fun_1D28()
    pri = arg_3;
    OP_JNZ lab_8A10
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_89D8
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_8A80(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_8A00
// lab_8A10
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8C20(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_89D8
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8B48(var_16, var_8)
// lab_8A00
    OP_JUMP lab_8A58
// lab_8A58
    var_8 = 0;
    pri = fun_1DC8()
    pri = 0;
    return pri;
}
// fun_8A80
fun_8A80() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8C20(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_8B30
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_8B30
    pri = 0;
    return pri;
}
// fun_8B48
fun_8B48() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_1E48(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_1B08(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1C00(var_72)
    var_88 = 0;
    pri = fun_1CC0()
    var_96 = 0;
    var_104 = 8;
    pri = fun_1DF8(var_96)
    pri = 0;
    return pri;
}
// fun_8C20
fun_8C20() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8C68
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_8F28(var_8)
// lab_8C68
    pri = arg_4;
    OP_JNZ lab_8CD0
    var_8 = 0;
    var_16 = 8;
    pri = fun_1DF8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1E48(var_40, var_32, var_24)
// lab_8CD0
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_8D70
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_1E98(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1B08(var_56, var_48, var_40)
    OP_JUMP lab_8E60
// lab_8D70
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_8E28
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_8E28
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_8E28
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1B08(var_24, var_16, var_8)
// lab_8E60
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8EA0
    var_8 = 0;
    var_16 = 8;
    pri = fun_03D0(var_8)
// lab_8EA0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1C00(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_9130(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_85D8(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_8F28
fun_8F28() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_8F88
    var_16 = 30728;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_8F88
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_90C8
        case default:
        {
// switch_90C8_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_90B8
            var_16 = 31272;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_90B8
            OP_JUMP lab_9100
// lab_9100
            var_8 = 31488;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_90C8_case_0x1
            var_8 = 30944;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9100
        }
        case 0x2:
        {
// switch_90C8_case_0x2
            var_8 = 31072;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9100
        }
    }
}
// fun_9130
fun_9130() {
    pri = arg_2;
    OP_JNZ lab_9218
    var_8 = 0;
    var_16 = 8;
    pri = fun_1DF8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1E48(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_1EE8(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_9218
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_1B08(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1C00(var_40)
    var_56 = 0;
    pri = fun_1CC0()
    pri = 0;
    return pri;
}
// fun_9290
fun_9290() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_9328
    var_8 = 1;
    var_16 = 0;
    var_24 = 31672;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02A8(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0318()
    var_56 = 0;
    pri = fun_1100()
// lab_9328
    pri = arg_4;
    OP_JZER lab_9360
    var_8 = 1;
    var_16 = 8;
    pri = fun_1158(var_8)
// lab_9360
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_93B8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_93B8
    pri = 0;
    OP_JUMP lab_93C0
// lab_93B8
    pri = 1;
// lab_93C0
    OP_JZER lab_9488
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_9488
    var_16 = 0;
    pri = fun_03A8()
    OP_JZER lab_9460
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1040(var_32, var_24)
    OP_JUMP lab_9488
// lab_9488
    pri = arg_2;
    OP_JZER lab_9560
    var_8 = 0;
    pri = fun_03A8()
    OP_JZER lab_9530
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0E18(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_04E0(var_40)
    OP_JUMP lab_9560
// lab_9560
    pri = arg_3;
    OP_JZER lab_9598
    var_8 = 1;
    var_16 = 8;
    pri = fun_10C8(var_8)
// lab_9598
    pri = 0;
    return pri;
// lab_9530
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0E18(var_16, var_8)
// lab_9460
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1040(var_16, var_8)
}
// fun_95A8
fun_95A8() {
    pri = g_mode;
    switch (pri) {
// switch_9640
        case default:
        {
// switch_9640_case_default
            pri = CommandNOP()
            OP_JUMP lab_9678
// lab_9678
            pri = 0;
            return pri;
        }
        case 0xbeedbdb89014fffb:
        {
// switch_9640_case_0xbeedbdb89014fffb
            var_8 = 0;
            pri = fun_96A0()
            OP_JUMP lab_9678
        }
        case 0x0:
        {
// switch_9640_case_0x0
            var_8 = 0;
            pri = fun_9688()
            OP_JUMP lab_9678
        }
    }
}
// fun_9688
fun_9688() {
    pri = 0;
    return pri;
}
// fun_96A0
fun_96A0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_9290(var_40, var_32, var_24, var_16, var_8)
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_64 = -5770252121945297143;
    pri = WorkGet(var_64)
    OP_EQ_P_C_PRI 2
    OP_JZER lab_9780
    var_72 = var_8;
    var_80 = 8;
    pri = fun_9938(var_72)
    OP_JUMP lab_9920
// lab_9780
    var_8 = 9010327285021969031;
    pri = FlagGet(var_8)
    OP_JZER lab_9810
    var_16 = -5770252121945297143;
    pri = WorkGet(var_16)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9810
    pri = 1;
    OP_JUMP lab_9818
// lab_9810
    pri = 0;
// lab_9818
    OP_JZER lab_9858
    var_8 = var_8;
    var_16 = 8;
    pri = fun_9BA0(var_8)
    OP_JUMP lab_9920
// lab_9858
    var_8 = -5770252121945297143;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_98C8
    var_16 = var_8;
    var_24 = 8;
    pri = fun_A038(var_16)
    OP_JUMP lab_9920
// lab_98C8
    var_8 = -5770252121945297143;
    pri = WorkGet(var_8)
    OP_JNZ lab_9920
    var_16 = var_8;
    var_24 = 8;
    pri = fun_A160(var_16)
// lab_9920
    pri = 0;
    return pri;
}
// fun_9938
fun_9938() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 8802641224559852288;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_0568(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    var_96 = arg_0;
    var_104 = 8802641224559852288;
    var_112 = 48;
    pri = fun_0568(var_104, var_96, var_88, var_80, var_72, var_64)
    var_120 = 0;
    var_128 = 3;
    var_136 = 0;
    var_144 = 100;
    var_152 = -1;
    var_160 = -1002045804300102279;
    var_168 = arg_0;
    var_176 = 56;
    pri = fun_1A08(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    var_184 = arg_0;
    var_192 = 8;
    pri = fun_05C0(var_184)
    var_200 = 8802641224559852288;
    var_208 = 8;
    pri = fun_05C0(var_200)
    var_216 = 1;
    var_224 = 1;
    var_232 = -1;
    var_240 = -1;
    var_248 = 0;
    var_256 = 7;
    var_264 = arg_0;
    var_272 = 56;
    pri = fun_3BA0(var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_280 = 31720;
    var_288 = arg_0;
    var_296 = 16;
    pri = fun_0998(var_288, var_280)
    var_304 = 1;
    var_312 = 8;
    pri = fun_1C00(var_304)
    var_320 = 0;
    pri = fun_1CC0()
    var_328 = 1;
    var_336 = 3;
    var_344 = 0;
    var_352 = 7;
    var_360 = arg_0;
    var_368 = 40;
    pri = fun_5ED8(var_360, var_352, var_344, var_336, var_328)
    var_376 = arg_0;
    var_384 = 8;
    pri = fun_0798(var_376)
    pri = 0;
    return pri;
}
// fun_9BA0
fun_9BA0() {
    var_8 = 0;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_7C08(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 100;
    var_96 = -1;
    var_104 = -1002033709672191958;
    var_112 = arg_0;
    var_120 = 56;
    pri = fun_1A08(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_128 = 1;
    var_136 = 8;
    pri = fun_1C00(var_128)
    var_144 = 0;
    var_152 = 3;
    var_160 = 0;
    var_168 = 100;
    var_176 = -1;
    var_184 = -1002032610160563747;
    var_192 = arg_0;
    var_200 = 56;
    pri = fun_1A08(var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_208 = 1;
    var_216 = 8;
    pri = fun_1C00(var_208)
    var_224 = 0;
    pri = fun_1CC0()
    var_232 = 0;
    var_240 = 3;
    var_248 = 0;
    var_256 = 100;
    var_264 = -1;
    var_272 = -1002035908695448380;
    var_280 = arg_0;
    var_288 = 56;
    pri = fun_1A08(var_280, var_272, var_264, var_256, var_248, var_240, var_232)
    var_296 = 1;
    var_304 = 8;
    pri = fun_1C00(var_296)
    var_312 = 0;
    pri = fun_1CC0()
    var_320 = 0;
    var_328 = 3;
    var_336 = 0;
    var_344 = 100;
    var_352 = -1;
    var_360 = -1002034809183820169;
    var_368 = arg_0;
    var_376 = 56;
    pri = fun_1A08(var_368, var_360, var_352, var_344, var_336, var_328, var_320)
    var_384 = 1;
    var_392 = 8;
    pri = fun_1C00(var_384)
    var_400 = 0;
    pri = fun_1CC0()
    var_408 = 0;
    var_416 = 3;
    var_424 = 0;
    var_432 = 100;
    var_440 = -1;
    var_448 = -1002046903811730490;
    var_456 = arg_0;
    var_464 = 56;
    pri = fun_1A08(var_456, var_448, var_440, var_432, var_424, var_416, var_408)
    var_472 = 1;
    var_480 = 8;
    pri = fun_1C00(var_472)
    var_488 = 0;
    pri = fun_1CC0()
    var_496 = 1;
    var_504 = 3;
    var_512 = 0;
    var_520 = 0;
    var_528 = arg_0;
    var_536 = 40;
    pri = fun_5ED8(var_528, var_520, var_512, var_504, var_496)
    var_544 = arg_0;
    var_552 = 8;
    pri = fun_0798(var_544)
    var_560 = 0;
    var_568 = 30;
    var_576 = -481919401938193798;
    var_584 = arg_0;
    var_592 = 32;
    pri = fun_8708(var_584, var_576, var_568, var_560)
    var_600 = -1667870061395674276;
    pri = FlagSet(var_600)
    var_608 = 1;
    var_616 = 1;
    var_624 = -1;
    var_632 = -1;
    var_640 = 0;
    var_648 = 0;
    var_656 = arg_0;
    var_664 = 56;
    pri = fun_3BA0(var_656, var_648, var_640, var_632, var_624, var_616, var_608)
    var_672 = 0;
    var_680 = 0;
    var_688 = 0;
    var_696 = arg_0;
    var_704 = 32;
    pri = fun_7DC8(var_696, var_688, var_680, var_672)
    var_712 = 2;
    var_720 = -5770252121945297143;
    pri = WorkSet(var_720, var_712)
    pri = 0;
    return pri;
}
// fun_A038
fun_A038() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_7C08(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 100;
    var_96 = -1;
    var_104 = -1002039207230333013;
    var_112 = arg_0;
    var_120 = 56;
    pri = fun_1A08(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_128 = 1;
    var_136 = 8;
    pri = fun_1C00(var_128)
    var_144 = 0;
    pri = fun_1CC0()
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = arg_0;
    var_184 = 32;
    pri = fun_7DC8(var_176, var_168, var_160, var_152)
    pri = 0;
    return pri;
}
// fun_A160
fun_A160() {
    var_8 = 0;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_7C08(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 100;
    var_96 = -1;
    var_104 = -1002037008207076591;
    var_112 = arg_0;
    var_120 = 56;
    pri = fun_1A08(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_128 = 1;
    var_136 = 8;
    pri = fun_1C00(var_128)
    var_144 = 0;
    pri = fun_1CC0()
    var_152 = 1;
    var_160 = 3;
    var_168 = 0;
    var_176 = 0;
    var_184 = arg_0;
    var_192 = 40;
    pri = fun_5ED8(var_184, var_176, var_168, var_160, var_152)
    var_200 = arg_0;
    var_208 = 8;
    pri = fun_0798(var_200)
    var_216 = 6;
    var_224 = 4;
    var_232 = 2;
    var_240 = 0;
    var_248 = 9;
    var_256 = 1;
    var_264 = 4;
    var_272 = arg_0;
    var_280 = 64;
    pri = fun_8480(var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_288 = 1;
    var_296 = 1;
    var_304 = -1;
    var_312 = -1;
    var_320 = 0;
    var_328 = 0;
    var_336 = arg_0;
    var_344 = 56;
    pri = fun_3BA0(var_336, var_328, var_320, var_312, var_304, var_296, var_288)
    var_352 = 0;
    var_360 = 3;
    var_368 = 0;
    var_376 = 100;
    var_384 = -1;
    var_392 = -1002040306741961224;
    var_400 = arg_0;
    var_408 = 56;
    pri = fun_1A08(var_400, var_392, var_384, var_376, var_368, var_360, var_352)
    var_416 = 1;
    var_424 = 8;
    pri = fun_1C00(var_416)
    var_432 = 0;
    pri = fun_1CC0()
    var_440 = 0;
    var_448 = 0;
    var_456 = 0;
    var_464 = arg_0;
    var_472 = 32;
    pri = fun_7DC8(var_464, var_456, var_448, var_440)
    var_480 = 1;
    var_488 = -5770252121945297143;
    pri = WorkSet(var_488, var_480)
    pri = 0;
    return pri;
}
