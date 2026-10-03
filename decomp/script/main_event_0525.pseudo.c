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
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0308
fun_0308() {
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
// fun_0378
fun_0378() {
    OP_JUMP lab_0390
// lab_0390
    pri = FadeWait_()
    OP_JZER lab_03C8
    pri = 0;
    return pri;
// lab_03C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0390
    pri = 0;
    return pri;
}
// fun_0408
fun_0408() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_0430
fun_0430() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0478
// lab_0478
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_04B8
    OP_JUMP lab_0528
// lab_04B8
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_04F8
    OP_JUMP lab_0528
// lab_04F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0478
// lab_0528
    pri = 0;
    return pri;
}
// fun_0540
fun_0540() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0570
fun_0570() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05C8
fun_05C8() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0600
fun_0600() {
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
// fun_0678
fun_0678() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_06D0
fun_06D0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E40(var_8)
    OP_JZER lab_0748
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0E70(var_24)
    OP_JNZ lab_0748
    pri = 0;
    return pri;
// lab_0748
    OP_JUMP lab_0758
// lab_0758
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_07B8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_07B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0758
    pri = 0;
    return pri;
}
// fun_07F8
fun_07F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0830
fun_0830() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0870
fun_0870() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_08A8
fun_08A8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_08F0
    pri = 0;
    return pri;
// lab_08F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0930
// lab_0930
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E40(var_8)
    OP_JNZ lab_09B8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_09A8
    pri = 0;
    return pri;
// lab_09B8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0A00
    pri = 0;
    return pri;
// lab_0A00
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0A60
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0AA8(var_8)
    pri = 0;
    return pri;
// lab_0A60
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0930
    pri = 0;
    return pri;
// lab_09A8
    OP_JUMP lab_0A00
}
// fun_0AA8
fun_0AA8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0AE0
fun_0AE0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0B30
    pri = 0;
    return pri;
// lab_0B30
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E40(var_8)
    OP_JZER lab_0C60
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B88
    OP_ZERO_P_S 64
// lab_0C60
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C98
    OP_CONST_S 64, 1
// lab_0C98
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0CD0
    OP_CONST_S 72, 1
// lab_0CD0
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
// lab_0B88
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0BB0
    OP_ZERO_P_S 72
// lab_0BB0
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
    OP_JUMP lab_0D70
// lab_0D70
    pri = 0;
    return pri;
}
// fun_0D80
fun_0D80() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DC0
fun_0DC0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E00
fun_0E00() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E40
fun_0E40() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0E70
fun_0E70() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0EA0
fun_0EA0() {
    OP_JUMP lab_0EB8
// lab_0EB8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0F48
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0F38
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_08A8(var_8)
    pri = 0;
    return pri;
// lab_0F48
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0FD8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0FC8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_08A8(var_8)
    pri = 0;
    return pri;
// lab_0FD8
    pri = 0;
    return pri;
// lab_0FC8
    OP_JUMP lab_0FE8
// lab_0FE8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0EB8
    pri = 0;
    return pri;
// lab_0F38
    OP_JUMP lab_0FE8
}
// fun_1028
fun_1028() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_08A8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0EA0(var_40)
    pri = 0;
    return pri;
}
// fun_10B0
fun_10B0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_10E8
fun_10E8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1110
fun_1110() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1148
fun_1148() {
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
// switch_1760
        case default:
        {
// switch_1760_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_17A8
// lab_17A8
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
            OP_JNZ lab_1850
            var_88 = 0;
            pri = fun_1B20()
// lab_1850
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1760_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1348
                case default:
                {
// switch_1348_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_13C0
// lab_13C0
                    OP_JUMP lab_17A8
                }
                case 0x0:
                {
// switch_1348_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_13C0
                }
                case 0x1:
                {
// switch_1348_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_13C0
                }
                case 0x2:
                {
// switch_1348_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_13C0
                }
                case 0x3:
                {
// switch_1348_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_13C0
                }
                case 0x4:
                {
// switch_1348_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_13C0
                }
                case 0x5:
                {
// switch_1348_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_13C0
                }
            }
        }
        case 0x65:
        {
// switch_1760_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1500
                case default:
                {
// switch_1500_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1578
// lab_1578
                    OP_JUMP lab_17A8
                }
                case 0x0:
                {
// switch_1500_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1578
                }
                case 0x1:
                {
// switch_1500_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1578
                }
                case 0x2:
                {
// switch_1500_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1578
                }
                case 0x3:
                {
// switch_1500_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1578
                }
                case 0x4:
                {
// switch_1500_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1578
                }
                case 0x5:
                {
// switch_1500_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1578
                }
            }
        }
        case 0x66:
        {
// switch_1760_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_16B8
                case default:
                {
// switch_16B8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1730
// lab_1730
                    OP_JUMP lab_17A8
                }
                case 0x0:
                {
// switch_16B8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1730
                }
                case 0x1:
                {
// switch_16B8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1730
                }
                case 0x2:
                {
// switch_16B8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1730
                }
                case 0x3:
                {
// switch_16B8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1730
                }
                case 0x4:
                {
// switch_16B8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1730
                }
                case 0x5:
                {
// switch_16B8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1730
                }
            }
        }
    }
}
// fun_1868
fun_1868() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1148(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_18D0
fun_18D0() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0870(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1978
    pri = 1;
    return pri;
// lab_1978
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_19C0
fun_19C0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1A10
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_18D0(var_8)
    arg_2 = pri;
// lab_1A10
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1148(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1A70
fun_1A70() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1868(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1AC0
fun_1AC0() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1A70(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B20
fun_1B20() {
    OP_JUMP lab_1B38
// lab_1B38
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1B78
    pri = 0;
    return pri;
// lab_1B78
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1B38
    pri = 0;
    return pri;
}
// fun_1BB8
fun_1BB8() {
    var_8 = 0;
    pri = fun_1B20()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1C68
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1C68
    pri = 0;
    return pri;
}
// fun_1C78
fun_1C78() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1CA8
fun_1CA8() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1CD8
// lab_1CD8
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1D18
    OP_JUMP lab_1D48
// lab_1D18
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1CD8
// lab_1D48
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1D90
fun_1D90() {
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
// fun_1E00
fun_1E00() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1E38
fun_1E38() {
    OP_JUMP lab_1E50
// lab_1E50
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1E98
    OP_JUMP lab_1EC8
    OP_JUMP lab_1EB8
// lab_1E98
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_1EC8
    pri = 0;
    return pri;
// lab_1EB8
    OP_JUMP lab_1E50
}
// fun_1ED8
fun_1ED8() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_1F08
fun_1F08() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F58
fun_1F58() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1FA8
fun_1FA8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1FF8
fun_1FF8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2048
fun_2048() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2098
fun_2098() {
    pri = arg_1;
    OP_JNZ lab_20E0
    var_8 = 648;
    pri = GetFnvHash64(var_8)
    arg_1 = pri;
// lab_20E0
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
// fun_2138
fun_2138() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_21B0
fun_21B0() {
    var_8 = 0;
    pri = fun_2138()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2230
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2230
    pri = 1;
    return pri;
// lab_2230
    var_8 = 0;
    pri = fun_2138()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2270
    pri = 1;
    return pri;
// lab_2270
    var_8 = 0;
    pri = fun_2138()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_22A0
fun_22A0() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_22F0
fun_22F0() {
    OP_JUMP lab_2308
// lab_2308
    pri = EvCameraMoveWait_()
    OP_JZER lab_2340
    pri = 0;
    return pri;
// lab_2340
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2308
    pri = 0;
    return pri;
}
// fun_2380
fun_2380() {
    var_8 = arg_0;
    pri = SetNpcLicenseCardFlag(var_8)
    pri = 0;
    return pri;
}
// fun_23B8
fun_23B8() {
    pri = arg_6;
    OP_JNZ lab_23F0
    var_8 = 0;
    pri = fun_0D80()
// lab_23F0
    pri = arg_1;
    switch (pri) {
// switch_3958
        case default:
        {
// switch_3958_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3CA8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3CA8
            pri = 1;
            OP_JUMP lab_3CB0
// lab_3CA8
            pri = 0;
// lab_3CB0
            OP_JZER lab_3E08
            var_16 = 8328;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0870(var_24, var_16)
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
            OP_JUMP lab_3E68
// lab_3E08
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
            pri = fun_0160(var_16, var_8, var_0)
// lab_3E68
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3EC8
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3F28
// lab_3EC8
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3F28
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3F28
            pri = arg_2;
            OP_JZER lab_3F68
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3F68
            var_8 = 0;
            pri = fun_0DC0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3958_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x1:
        {
// switch_3958_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x2:
        {
// switch_3958_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x3:
        {
// switch_3958_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x4:
        {
// switch_3958_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x5:
        {
// switch_3958_case_0x5
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0x6:
        {
// switch_3958_case_0x6
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0x7:
        {
// switch_3958_case_0x7
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0x8:
        {
// switch_3958_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x9:
        {
// switch_3958_case_0x9
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0xa:
        {
// switch_3958_case_0xa
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0xb:
        {
// switch_3958_case_0xb
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0xc:
        {
// switch_3958_case_0xc
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0xd:
        {
// switch_3958_case_0xd
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0xe:
        {
// switch_3958_case_0xe
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0xf:
        {
// switch_3958_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x10:
        {
// switch_3958_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x11:
        {
// switch_3958_case_0x11
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0x12:
        {
// switch_3958_case_0x12
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0x13:
        {
// switch_3958_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x14:
        {
// switch_3958_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x15:
        {
// switch_3958_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x16:
        {
// switch_3958_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x17:
        {
// switch_3958_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x18:
        {
// switch_3958_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x19:
        {
// switch_3958_case_0x19
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0x1a:
        {
// switch_3958_case_0x1a
            var_8 = 1;
            var_16 = 5888;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0830(var_24, var_16, var_8)
            var_40 = 6024;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_07F8(var_48, var_40)
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
            pri = fun_0AE0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3958_case_default
        }
        case 0x1b:
        {
// switch_3958_case_0x1b
            var_8 = 3;
            var_16 = 6112;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0830(var_24, var_16, var_8)
            var_40 = 6248;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_07F8(var_48, var_40)
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
            pri = fun_0AE0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3958_case_default
        }
        case 0x1c:
        {
// switch_3958_case_0x1c
            var_8 = 2;
            var_16 = 6336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0830(var_24, var_16, var_8)
            var_40 = 6472;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_07F8(var_48, var_40)
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
            pri = fun_0AE0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3958_case_default
        }
        case 0x1d:
        {
// switch_3958_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6560;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x1e:
        {
// switch_3958_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6696;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x1f:
        {
// switch_3958_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6832;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x20:
        {
// switch_3958_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6968;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x21:
        {
// switch_3958_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7088;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x22:
        {
// switch_3958_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7208;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x23:
        {
// switch_3958_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7344;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x24:
        {
// switch_3958_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7480;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x25:
        {
// switch_3958_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7616;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x26:
        {
// switch_3958_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7752;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x27:
        {
// switch_3958_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7896;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x28:
        {
// switch_3958_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8040;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x29:
        {
// switch_3958_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8184;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
    }
}
// fun_3F98
fun_3F98() {
    pri = arg_5;
    OP_JNZ lab_3FD0
    var_8 = 0;
    pri = fun_0D80()
// lab_3FD0
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4020
    OP_CONST_S -8, -1
// lab_4020
    pri = arg_1;
    switch (pri) {
// switch_5AD8
        case default:
        {
// switch_5AD8_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5F80
            var_520 = 28192;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0870(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5F80
            pri = 1;
            OP_JUMP lab_5F88
// lab_5F80
            pri = 0;
// lab_5F88
            OP_JZER lab_5FD8
            var_8 = 64;
            var_16 = 28288;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_6230
// lab_5FD8
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6040
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6040
            pri = 1;
            OP_JUMP lab_6048
// lab_6040
            pri = 0;
// lab_6048
            OP_JZER lab_61D0
            var_16 = 28464;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0870(var_24, var_16)
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
            OP_JUMP lab_6230
// lab_61D0
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
            pri = fun_0160(var_16, var_8, var_0)
// lab_6230
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_62A0
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_62A0
            var_8 = 0;
            pri = fun_0DC0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5AD8_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x1:
        {
// switch_5AD8_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x2:
        {
// switch_5AD8_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x3:
        {
// switch_5AD8_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x4:
        {
// switch_5AD8_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x5:
        {
// switch_5AD8_case_0x5
            var_8 = 2;
            var_16 = 18448;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0830(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0AA8(var_40)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x6:
        {
// switch_5AD8_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x7:
        {
// switch_5AD8_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x8:
        {
// switch_5AD8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x9:
        {
// switch_5AD8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0xa:
        {
// switch_5AD8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0xb:
        {
// switch_5AD8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0xc:
        {
// switch_5AD8_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0xd:
        {
// switch_5AD8_case_0xd
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0xe:
        {
// switch_5AD8_case_0xe
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0xf:
        {
// switch_5AD8_case_0xf
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x10:
        {
// switch_5AD8_case_0x10
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x11:
        {
// switch_5AD8_case_0x11
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x12:
        {
// switch_5AD8_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x13:
        {
// switch_5AD8_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x14:
        {
// switch_5AD8_case_0x14
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x15:
        {
// switch_5AD8_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x16:
        {
// switch_5AD8_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x17:
        {
// switch_5AD8_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x18:
        {
// switch_5AD8_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x19:
        {
// switch_5AD8_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x1a:
        {
// switch_5AD8_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x1b:
        {
// switch_5AD8_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x1c:
        {
// switch_5AD8_case_0x1c
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x1d:
        {
// switch_5AD8_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x1e:
        {
// switch_5AD8_case_0x1e
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x1f:
        {
// switch_5AD8_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x20:
        {
// switch_5AD8_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x21:
        {
// switch_5AD8_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x22:
        {
// switch_5AD8_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x23:
        {
// switch_5AD8_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x24:
        {
// switch_5AD8_case_0x24
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x25:
        {
// switch_5AD8_case_0x25
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x26:
        {
// switch_5AD8_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x27:
        {
// switch_5AD8_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x28:
        {
// switch_5AD8_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x29:
        {
// switch_5AD8_case_0x29
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x2a:
        {
// switch_5AD8_case_0x2a
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x2b:
        {
// switch_5AD8_case_0x2b
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x2c:
        {
// switch_5AD8_case_0x2c
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x2d:
        {
// switch_5AD8_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x2e:
        {
// switch_5AD8_case_0x2e
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x2f:
        {
// switch_5AD8_case_0x2f
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x30:
        {
// switch_5AD8_case_0x30
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x31:
        {
// switch_5AD8_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x32:
        {
// switch_5AD8_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x33:
        {
// switch_5AD8_case_0x33
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x34:
        {
// switch_5AD8_case_0x34
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x35:
        {
// switch_5AD8_case_0x35
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x36:
        {
// switch_5AD8_case_0x36
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x37:
        {
// switch_5AD8_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x38:
        {
// switch_5AD8_case_0x38
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x39:
        {
// switch_5AD8_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x3a:
        {
// switch_5AD8_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x3b:
        {
// switch_5AD8_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x3c:
        {
// switch_5AD8_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27768;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x3d:
        {
// switch_5AD8_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27944;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x3e:
        {
// switch_5AD8_case_0x3e
            var_8 = 4;
            var_16 = 28088;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0830(var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
    }
}
// fun_62D0
fun_62D0() {
    pri = arg_4;
    OP_JNZ lab_6308
    var_8 = 0;
    pri = fun_0D80()
// lab_6308
    pri = arg_1;
    switch (pri) {
// switch_76E0
        case default:
        {
// switch_76E0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29160;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0E40(var_264)
            OP_JZER lab_7CA8
            pri = arg_3;
            switch (pri) {
// switch_7C50
                case default:
                {
// switch_7C50_case_default
                    OP_JUMP lab_7F60
// lab_7F60
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7FD0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7FD0
                    var_8 = 0;
                    pri = fun_0DC0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7C50_case_0x1
                    var_8 = 32;
                    var_16 = 29312;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7C50_case_default
                }
                case 0x2:
                {
// switch_7C50_case_0x2
                    var_8 = 32;
                    var_16 = 29416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7C50_case_default
                }
                case 0x3:
                {
// switch_7C50_case_0x3
                    var_8 = 32;
                    var_16 = 29216;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7C50_case_default
                }
            }
// lab_7CA8
            pri = arg_1;
            OP_JZER lab_7CF8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7CF8
            pri = 0;
            OP_JUMP lab_7D00
// lab_7CF8
            pri = 1;
// lab_7D00
            OP_JZER lab_7D68
            var_8 = 29512;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0870(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7D68
            pri = 1;
            OP_JUMP lab_7D70
// lab_7D68
            pri = 0;
// lab_7D70
            OP_JZER lab_7DC0
            var_8 = 32;
            var_16 = 29608;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_7F60
// lab_7DC0
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7E28
            var_8 = 32;
            var_16 = 29768;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_7F60
// lab_7E28
            var_16 = 29888;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0870(var_24, var_16)
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
// switch_76E0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x1:
        {
// switch_76E0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x2:
        {
// switch_76E0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x3:
        {
// switch_76E0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x4:
        {
// switch_76E0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x5:
        {
// switch_76E0_case_0x5
            var_8 = 1;
            var_16 = 28640;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0830(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0AA8(var_40)
            OP_JUMP switch_76E0_case_default
        }
        case 0x6:
        {
// switch_76E0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x7:
        {
// switch_76E0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x8:
        {
// switch_76E0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x9:
        {
// switch_76E0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0xa:
        {
// switch_76E0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0xb:
        {
// switch_76E0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0xc:
        {
// switch_76E0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0xd:
        {
// switch_76E0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0xe:
        {
// switch_76E0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0xf:
        {
// switch_76E0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x10:
        {
// switch_76E0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x11:
        {
// switch_76E0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x12:
        {
// switch_76E0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x13:
        {
// switch_76E0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x14:
        {
// switch_76E0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x15:
        {
// switch_76E0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x16:
        {
// switch_76E0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x17:
        {
// switch_76E0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x18:
        {
// switch_76E0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x19:
        {
// switch_76E0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x1a:
        {
// switch_76E0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x1b:
        {
// switch_76E0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x1c:
        {
// switch_76E0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x1d:
        {
// switch_76E0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x1e:
        {
// switch_76E0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x1f:
        {
// switch_76E0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x20:
        {
// switch_76E0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x21:
        {
// switch_76E0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x22:
        {
// switch_76E0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x23:
        {
// switch_76E0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x24:
        {
// switch_76E0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x25:
        {
// switch_76E0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x26:
        {
// switch_76E0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x27:
        {
// switch_76E0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x28:
        {
// switch_76E0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x29:
        {
// switch_76E0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x2a:
        {
// switch_76E0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x2b:
        {
// switch_76E0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x2c:
        {
// switch_76E0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x2d:
        {
// switch_76E0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x2e:
        {
// switch_76E0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x2f:
        {
// switch_76E0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x30:
        {
// switch_76E0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x31:
        {
// switch_76E0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x32:
        {
// switch_76E0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x33:
        {
// switch_76E0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x34:
        {
// switch_76E0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x35:
        {
// switch_76E0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x36:
        {
// switch_76E0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x37:
        {
// switch_76E0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x38:
        {
// switch_76E0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x39:
        {
// switch_76E0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x3a:
        {
// switch_76E0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x3b:
        {
// switch_76E0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x3c:
        {
// switch_76E0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28736;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x3d:
        {
// switch_76E0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28912;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x3e:
        {
// switch_76E0_case_0x3e
            var_8 = 3;
            var_16 = 29056;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0830(var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
    }
}
// fun_8000
fun_8000() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8210(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 30056;
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
    var_424 = 30112;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 30128;
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
    OP_JZER lab_81F8
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_81F8
    pri = 0;
    return pri;
}
// fun_8210
fun_8210() {
    var_8 = arg_1;
    var_16 = 30176;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0830(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8258
fun_8258() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_82F0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_08A8(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_23B8(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_82F0
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_8448
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_83B0
    var_24 = 30280;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_83B0
    pri = 1;
    OP_JUMP lab_83B8
// lab_8448
    pri = 0;
    return pri;
// lab_83B0
    pri = 0;
// lab_83B8
    OP_JZER lab_8448
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_08A8(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_23B8(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_8458
fun_8458() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_87D8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_84C0
fun_84C0() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_8530
    OP_CONST_S -8, 1
// lab_8530
    pri = arg_0;
    OP_JNZ lab_8550
    OP_ZERO_P_S -8
// lab_8550
    pri = var_8;
    OP_JZER lab_85D8
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_85D8
    pri = 0;
    return pri;
}
// fun_85F0
fun_85F0() {
    var_8 = 30384;
    var_16 = 8;
    pri = fun_1E00(var_8)
    var_24 = 0;
    pri = fun_1E38()
    var_32 = 0;
    var_40 = 8;
    pri = fun_1F08(var_32)
    var_48 = 1;
    var_56 = arg_1;
    var_64 = 1;
    var_72 = 24;
    pri = fun_2048(var_64, var_56, var_48)
    OP_CONST_S -8, 6088246355923164688
    OP_CONST_S -16, -3980990967343358874
    pri = arg_3;
    OP_JZER lab_8708
    OP_CONST_S -8, 6088249654458049321
    OP_CONST_S -16, -3980992066854987085
// lab_8708
    var_8 = 6;
    var_16 = 4;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_8258(var_24, var_16, var_8)
    var_40 = 2;
    var_48 = 1;
    var_56 = 9;
    var_64 = var_16;
    var_72 = var_8;
    var_80 = 0;
    var_88 = 0;
    var_96 = 56;
    pri = fun_8458(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 0;
    pri = fun_1ED8()
    var_112 = arg_2;
    var_120 = 8;
    pri = fun_2380(var_112)
    pri = 0;
    return pri;
}
// fun_87D8
fun_87D8() {
    var_8 = 30544;
    var_16 = 8;
    pri = fun_1E00(var_8)
    var_24 = 0;
    pri = fun_1E38()
    pri = arg_3;
    OP_JNZ lab_88F8
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_88C0
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_8968(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_88E8
// lab_88F8
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8B08(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_88C0
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8A30(var_16, var_8)
// lab_88E8
    OP_JUMP lab_8940
// lab_8940
    var_8 = 0;
    pri = fun_1ED8()
    pri = 0;
    return pri;
}
// fun_8968
fun_8968() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8B08(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_8A18
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_8A18
    pri = 0;
    return pri;
}
// fun_8A30
fun_8A30() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_1F58(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_1AC0(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1BB8(var_72)
    var_88 = 0;
    pri = fun_1C78()
    var_96 = 0;
    var_104 = 8;
    pri = fun_1F08(var_96)
    pri = 0;
    return pri;
}
// fun_8B08
fun_8B08() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8B50
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_8E10(var_8)
// lab_8B50
    pri = arg_4;
    OP_JNZ lab_8BB8
    var_8 = 0;
    var_16 = 8;
    pri = fun_1F08(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1F58(var_40, var_32, var_24)
// lab_8BB8
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_8C58
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_1FA8(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1AC0(var_56, var_48, var_40)
    OP_JUMP lab_8D48
// lab_8C58
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_8D10
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_8D10
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_8D10
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1AC0(var_24, var_16, var_8)
// lab_8D48
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8D88
    var_8 = 0;
    var_16 = 8;
    pri = fun_0430(var_8)
// lab_8D88
    var_8 = 1;
    var_16 = 8;
    pri = fun_1BB8(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_9018(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_84C0(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_8E10
fun_8E10() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_8E70
    var_16 = 30704;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_8E70
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_8FB0
        case default:
        {
// switch_8FB0_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_8FA0
            var_16 = 31248;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_8FA0
            OP_JUMP lab_8FE8
// lab_8FE8
            var_8 = 31464;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_8FB0_case_0x1
            var_8 = 30920;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8FE8
        }
        case 0x2:
        {
// switch_8FB0_case_0x2
            var_8 = 31048;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8FE8
        }
    }
}
// fun_9018
fun_9018() {
    pri = arg_2;
    OP_JNZ lab_9100
    var_8 = 0;
    var_16 = 8;
    pri = fun_1F08(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1F58(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_1FF8(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_9100
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_1AC0(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1BB8(var_40)
    var_56 = 0;
    pri = fun_1C78()
    pri = 0;
    return pri;
}
// fun_9178
fun_9178() {
    pri = 31648;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_9200
// lab_9200
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_9380
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_9370
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_92C0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_92C0
    pri = 0;
    OP_JUMP lab_92C8
// lab_9380
    pri = 0;
    return pri;
// lab_9370
    OP_JUMP lab_91F8
// lab_91F8
    OP_INC_P_S -936
// lab_92C0
    pri = 1;
// lab_92C8
    OP_JZER lab_9340
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_9338
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_9340
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_9338
}
// fun_93A0
fun_93A0() {
    var_8 = -4562270413023387603;
    pri = WorkGet(var_8)
    return pri;
}
// fun_93D8
fun_93D8() {
    var_8 = 0;
    pri = fun_93A0()
    switch (pri) {
// switch_9488
        case default:
        {
// switch_9488_case_default
            pri = arg_1;
            return pri;
            OP_JUMP lab_94D0
// lab_94D0
            pri = arg_1;
            return pri;
        }
        case 0x0:
        {
// switch_9488_case_0x0
            pri = arg_0;
            return pri;
            OP_JUMP lab_94D0
        }
        case 0x1:
        {
// switch_9488_case_0x1
            pri = arg_1;
            return pri;
            OP_JUMP lab_94D0
        }
        case 0x2:
        {
// switch_9488_case_0x2
            pri = arg_2;
            return pri;
            OP_JUMP lab_94D0
        }
    }
}
// fun_94E0
fun_94E0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_9578
    var_8 = 1;
    var_16 = 0;
    var_24 = 32568;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    pri = fun_10E8()
// lab_9578
    pri = arg_4;
    OP_JZER lab_95B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1110(var_8)
// lab_95B0
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_9608
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_9608
    pri = 0;
    OP_JUMP lab_9610
// lab_9608
    pri = 1;
// lab_9610
    OP_JZER lab_96D8
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_96D8
    var_16 = 0;
    pri = fun_0408()
    OP_JZER lab_96B0
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1028(var_32, var_24)
    OP_JUMP lab_96D8
// lab_96D8
    pri = arg_2;
    OP_JZER lab_97B0
    var_8 = 0;
    pri = fun_0408()
    OP_JZER lab_9780
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0E00(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_05C8(var_40)
    OP_JUMP lab_97B0
// lab_97B0
    pri = arg_3;
    OP_JZER lab_97E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_10B0(var_8)
// lab_97E8
    pri = 0;
    return pri;
// lab_9780
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0E00(var_16, var_8)
// lab_96B0
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1028(var_16, var_8)
}
// fun_97F8
fun_97F8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_9178(var_24)
    pri = 0;
    return pri;
}
// fun_9860
fun_9860() {
    pri = g_mode;
    switch (pri) {
// switch_9920
        case default:
        {
// switch_9920_case_default
            pri = CommandNOP()
            OP_JUMP lab_9968
// lab_9968
            pri = 0;
            return pri;
        }
        case 0xbfcc29221eb77a98:
        {
// switch_9920_case_0xbfcc29221eb77a98
            var_8 = 0;
            pri = fun_AA38()
            OP_JUMP lab_9968
        }
        case 0x0:
        {
// switch_9920_case_0x0
            var_8 = 0;
            pri = fun_9978()
            OP_JUMP lab_9968
        }
        case 0x5d8def1e6ddf8c2c:
        {
// switch_9920_case_0x5d8def1e6ddf8c2c
            var_8 = 0;
            pri = fun_AB80()
            OP_JUMP lab_9968
        }
    }
}
// fun_9978
fun_9978() {
    pri = 0;
    return pri;
}
// fun_9990
fun_9990() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_94E0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_99E8
fun_99E8() {
    pri = 0;
    return pri;
}
// fun_9A00
fun_9A00() {
    pri = 0;
    return pri;
}
// fun_9A18
fun_9A18() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C -4587451022932600422, 4665906400254649958, 4671766714767323955, 8802641224559852288
    var_24 = 48;
    pri = fun_0570(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 0;
    var_40 = 4631952216750555136;
    var_48 = 0;
    OP_PUSH5_C 4665909396423835648, 4657012681595011727, 4671686983681635779, 4666006389842079908, 4657055364636401992
    var_56 = 4671719259845469143;
    var_64 = 1;
    pri = EvCameraMove(var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_72 = 0;
    pri = fun_22F0()
    var_80 = 1;
    var_88 = 8;
    pri = fun_0060(var_80)
    var_96 = 1;
    var_104 = 0;
    var_112 = 30;
    pri = float(var_112)
    var_120 = pri;
    var_128 = 0;
    pri = float(var_128)
    var_136 = pri;
    var_144 = 0;
    OP_PUSH4_C 4665906400254649958, 4671702118459192115, 4607182418800017408, 8802641224559852288
    var_152 = 72;
    pri = fun_0600(var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_160 = 8802641224559852288;
    var_168 = 8;
    pri = fun_06D0(var_160)
    var_176 = 0;
    var_184 = 0;
    var_192 = 0;
    var_200 = 0;
    OP_PUSH2_C 3275595920700649692, 8802641224559852288
    var_208 = 48;
    pri = fun_0678(var_200, var_192, var_184, var_176, var_168, var_160)
    var_216 = 0;
    var_224 = 0;
    var_232 = 0;
    var_240 = 0;
    OP_PUSH2_C 8802641224559852288, 3275595920700649692
    var_248 = 48;
    pri = fun_0678(var_240, var_232, var_224, var_216, var_208, var_200)
    var_256 = 8802641224559852288;
    var_264 = 8;
    pri = fun_06D0(var_256)
    var_272 = 3275595920700649692;
    var_280 = 8;
    pri = fun_06D0(var_272)
    var_288 = 32616;
    pri = SoundPostEvent(var_288)
    var_296 = 1;
    var_304 = 1;
    var_312 = -1;
    var_320 = -1;
    var_328 = 0;
    var_336 = 8;
    var_344 = 3275595920700649692;
    var_352 = 56;
    pri = fun_3F98(var_344, var_336, var_328, var_320, var_312, var_304, var_296)
    var_360 = 0;
    var_368 = 3;
    var_376 = 0;
    var_384 = 100;
    var_392 = -1;
    OP_PUSH2_C 8399240053870566137, 3275595920700649692
    var_400 = 56;
    pri = fun_19C0(var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_408 = 1;
    var_416 = 8;
    pri = fun_1BB8(var_408)
    var_424 = 0;
    var_432 = -8463624611763113553;
    var_440 = 0;
    var_448 = 24;
    pri = fun_1CA8(var_440, var_432, var_424)
    var_456 = 0;
    var_464 = -8463623512251485342;
    var_472 = 1;
    var_480 = 24;
    pri = fun_1CA8(var_472, var_464, var_456)
    var_496 = 0;
    var_504 = 0;
    var_512 = 0;
    var_520 = 1;
    var_528 = 32;
    pri = fun_1D90(var_520, var_512, var_504, var_496)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_A7D0
        case default:
        {
// switch_A7D0_case_default
            pri = 1;
            return pri;
        }
        case 0x0:
        {
// switch_A7D0_case_0x0
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C 8399236755335681504, 3275595920700649692
            var_48 = 56;
            pri = fun_19C0(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
            var_56 = 1;
            var_64 = 8;
            pri = fun_1BB8(var_56)
            var_72 = 0;
            pri = fun_1C78()
            var_88 = 193;
            var_96 = 192;
            var_104 = 191;
            var_112 = 24;
            pri = fun_93D8(var_104, var_96, var_88)
            var_16 = pri;
            var_120 = 3;
            var_128 = 0;
            var_136 = 0;
            var_144 = 0;
            var_152 = var_16;
            var_160 = 40;
            pri = fun_2098(var_152, var_144, var_136, var_128, var_120)
            var_168 = 0;
            pri = fun_21B0()
            OP_JZER lab_A010
            var_176 = 0;
            pri = fun_22A0()
// lab_A010
            var_8 = 0;
            var_16 = 1;
            var_24 = 3275595920700649692;
            var_32 = 24;
            pri = fun_8000(var_24, var_16, var_8)
            var_40 = 1;
            var_48 = 8;
            pri = fun_0060(var_40)
            var_56 = 3275595920700649692;
            var_64 = 8;
            pri = fun_08A8(var_56)
            var_72 = 0;
            var_80 = 4631952216750555136;
            var_88 = 0;
            OP_PUSH5_C 4665909396423835648, 4657012681595011727, 4671686983681635779, 4666006389842079908, 4657055364636401992
            var_96 = 4671719259845469143;
            var_104 = 1;
            pri = EvCameraMove(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
            var_112 = 0;
            pri = fun_22F0()
            var_120 = 15;
            var_128 = 8;
            pri = fun_0060(var_120)
            var_136 = 32776;
            var_144 = 8;
            var_152 = 16;
            pri = fun_02A8(var_144, var_136)
            var_160 = 0;
            pri = fun_0378()
            var_168 = 0;
            var_176 = 3;
            var_184 = 0;
            var_192 = 100;
            var_200 = -1;
            OP_PUSH2_C 8399243352405450770, 3275595920700649692
            var_208 = 56;
            pri = fun_19C0(var_200, var_192, var_184, var_176, var_168, var_160, var_152)
            var_216 = 1;
            var_224 = 8;
            pri = fun_1BB8(var_216)
            var_232 = 0;
            pri = fun_1C78()
            var_240 = 0;
            var_248 = 0;
            OP_PUSH2_C -3251299048254230129, 3275595920700649692
            var_256 = 32;
            pri = fun_85F0(var_248, var_240, var_232, var_224)
            var_264 = 1;
            var_272 = 1;
            var_280 = -1;
            var_288 = -1;
            var_296 = 0;
            var_304 = 23;
            var_312 = 3275595920700649692;
            var_320 = 56;
            pri = fun_3F98(var_312, var_304, var_296, var_288, var_280, var_272, var_264)
            var_328 = 0;
            var_336 = 3;
            var_344 = 0;
            var_352 = 100;
            var_360 = -1;
            OP_PUSH2_C 8399244451917078981, 3275595920700649692
            var_368 = 56;
            pri = fun_19C0(var_360, var_352, var_344, var_336, var_328, var_320, var_312)
            var_376 = 1;
            var_384 = 8;
            pri = fun_1BB8(var_376)
            var_392 = 0;
            pri = fun_1C78()
            var_400 = 1;
            var_408 = 3;
            var_416 = 0;
            var_424 = 23;
            var_432 = 3275595920700649692;
            var_440 = 40;
            pri = fun_62D0(var_432, var_424, var_416, var_408, var_400)
            var_448 = 3275595920700649692;
            var_456 = 8;
            pri = fun_08A8(var_448)
            var_464 = 1;
            var_472 = 0;
            var_480 = 30;
            pri = float(var_480)
            var_488 = pri;
            var_496 = 0;
            pri = float(var_496)
            var_504 = pri;
            var_512 = 0;
            OP_PUSH4_C 4665909533862789120, 4671455195635384320, 4611686018427387904, 3275595920700649692
            var_520 = 72;
            pri = fun_0600(var_512, var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448)
            var_528 = 0;
            var_536 = 3;
            var_544 = 0;
            var_552 = 100;
            var_560 = -1;
            OP_PUSH2_C 8399241153382194348, 3275595920700649692
            var_568 = 56;
            pri = fun_19C0(var_560, var_552, var_544, var_536, var_528, var_520, var_512)
            var_576 = 1;
            var_584 = 8;
            pri = fun_1BB8(var_576)
            var_592 = 0;
            pri = fun_1C78()
            var_600 = 3275595920700649692;
            var_608 = 8;
            pri = fun_06D0(var_600)
            var_616 = 1;
            var_624 = 0;
            var_632 = 32568;
            var_640 = 8;
            var_648 = 32;
            pri = fun_0308(var_640, var_632, var_624, var_616)
            var_656 = 0;
            pri = fun_0378()
            var_664 = 32824;
            pri = SoundPostEvent(var_664)
            var_672 = 3;
            var_680 = 1;
            pri = EvCameraEnd(var_680, var_672)
            var_688 = 30;
            var_696 = 8;
            pri = fun_0060(var_688)
            pri = 1;
            return pri;
            OP_JUMP switch_A7D0_case_default
        }
        case 0x1:
        {
// switch_A7D0_case_0x1
            var_8 = 1;
            var_16 = 3;
            var_24 = 0;
            var_32 = 8;
            var_40 = 3275595920700649692;
            var_48 = 40;
            pri = fun_62D0(var_40, var_32, var_24, var_16, var_8)
            var_56 = 3275595920700649692;
            var_64 = 8;
            pri = fun_08A8(var_56)
            var_72 = 0;
            var_80 = 3;
            var_88 = 0;
            var_96 = 100;
            var_104 = -1;
            OP_PUSH2_C 8399237854847309715, 3275595920700649692
            var_112 = 56;
            pri = fun_19C0(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
            var_120 = 1;
            var_128 = 8;
            pri = fun_1BB8(var_120)
            var_136 = 0;
            pri = fun_1C78()
            var_144 = 1;
            var_152 = 0;
            var_160 = 32568;
            var_168 = 8;
            var_176 = 32;
            pri = fun_0308(var_168, var_160, var_152, var_144)
            var_184 = 0;
            pri = fun_0378()
            var_192 = 32984;
            pri = SoundPostEvent(var_192)
            var_200 = 3;
            var_208 = 1;
            pri = EvCameraEnd(var_208, var_200)
            var_216 = 30;
            var_224 = 8;
            pri = fun_0060(var_216)
            pri = 0;
            return pri;
            OP_JUMP switch_A7D0_case_default
        }
    }
}
// fun_A820
fun_A820() {
    pri = 0;
    return pri;
}
// fun_A838
fun_A838() {
    var_8 = 3275595920700649692;
    var_16 = 8;
    pri = fun_0540(var_8)
    var_24 = 530;
    var_32 = 8;
    pri = fun_97F8(var_24)
    var_40 = -2609511271441633747;
    pri = VanishFlagReset(var_40)
    pri = 0;
    return pri;
}
// fun_A8C0
fun_A8C0() {
    var_8 = 32776;
    var_16 = 8;
    var_24 = 16;
    pri = fun_02A8(var_16, var_8)
    var_32 = 0;
    pri = fun_0378()
    pri = 0;
    return pri;
}
// fun_A918
fun_A918() {
    var_8 = 526;
    var_16 = 8;
    pri = fun_97F8(var_8)
    pri = 0;
    return pri;
}
// fun_A950
fun_A950() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 90;
    pri = float(var_24)
    var_32 = pri;
    OP_PUSH3_C 4665888643141861376, 4671735571100467200, 8802641224559852288
    var_40 = 48;
    pri = fun_0570(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = 1;
    var_56 = 8;
    pri = fun_0060(var_48)
    var_64 = 32776;
    var_72 = 8;
    var_80 = 16;
    pri = fun_02A8(var_72, var_64)
    var_88 = 0;
    pri = fun_0378()
    pri = 0;
    return pri;
}
// fun_AA38
fun_AA38() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_9990()
    var_16 = 0;
    pri = fun_99E8()
    var_24 = 0;
    pri = fun_9A00()
    var_32 = 0;
    pri = fun_9A18()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_AB28
    var_40 = 0;
    pri = fun_A820()
    var_48 = 0;
    pri = fun_A838()
    var_56 = 0;
    pri = fun_A8C0()
    OP_JUMP lab_AB58
// lab_AB28
    var_8 = 0;
    pri = fun_A918()
    var_16 = 0;
    pri = fun_A950()
// lab_AB58
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_AB80
fun_AB80() {
    var_8 = 0;
    pri = fun_99E8()
    var_16 = 0;
    pri = fun_A838()
    var_24 = 0;
    pri = SetNpcLicenseCardFlag(var_24)
    pri = 0;
    return pri;
}
