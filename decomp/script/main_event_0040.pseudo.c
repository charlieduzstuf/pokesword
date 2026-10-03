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
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0490
fun_0490() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_04C8
fun_04C8() {
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
// fun_0540
fun_0540() {
    var_8 = arg_4;
    var_16 = arg_5;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartPathMove_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0598
fun_0598() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05E8
fun_05E8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0640
fun_0640() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E08(var_8)
    OP_JZER lab_06B8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0E38(var_24)
    OP_JNZ lab_06B8
    pri = 0;
    return pri;
// lab_06B8
    OP_JUMP lab_06C8
// lab_06C8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0728
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0728
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_06C8
    pri = 0;
    return pri;
}
// fun_0768
fun_0768() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_07A0
fun_07A0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_07E0
fun_07E0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0818
fun_0818() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0860
    pri = 0;
    return pri;
// lab_0860
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_08A0
// lab_08A0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E08(var_8)
    OP_JNZ lab_0928
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0918
    pri = 0;
    return pri;
// lab_0928
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0970
    pri = 0;
    return pri;
// lab_0970
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_09D0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0A18(var_8)
    pri = 0;
    return pri;
// lab_09D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_08A0
    pri = 0;
    return pri;
// lab_0918
    OP_JUMP lab_0970
}
// fun_0A18
fun_0A18() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0A50
fun_0A50() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0AA0
    pri = 0;
    return pri;
// lab_0AA0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E08(var_8)
    OP_JZER lab_0BD0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0AF8
    OP_ZERO_P_S 64
// lab_0BD0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C08
    OP_CONST_S 64, 1
// lab_0C08
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C40
    OP_CONST_S 72, 1
// lab_0C40
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
// lab_0AF8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B20
    OP_ZERO_P_S 72
// lab_0B20
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
    OP_JUMP lab_0CE0
// lab_0CE0
    pri = 0;
    return pri;
}
// fun_0CF0
fun_0CF0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D30
fun_0D30() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D70
fun_0D70() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DC8
fun_0DC8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E08
fun_0E08() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0E38
fun_0E38() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0E68
fun_0E68() {
    OP_JUMP lab_0E80
// lab_0E80
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0F10
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0F00
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0818(var_8)
    pri = 0;
    return pri;
// lab_0F10
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0FA0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0F90
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0818(var_8)
    pri = 0;
    return pri;
// lab_0FA0
    pri = 0;
    return pri;
// lab_0F90
    OP_JUMP lab_0FB0
// lab_0FB0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0E80
    pri = 0;
    return pri;
// lab_0F00
    OP_JUMP lab_0FB0
}
// fun_0FF0
fun_0FF0() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0818(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0E68(var_40)
    pri = 0;
    return pri;
}
// fun_1078
fun_1078() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_10B0
fun_10B0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_10D8
fun_10D8() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1108
fun_1108() {
    var_8 = arg_20;
    var_16 = arg_19;
    var_24 = arg_18;
    var_32 = arg_17;
    var_40 = arg_16;
    var_48 = arg_15;
    var_56 = arg_14;
    var_64 = arg_13;
    var_72 = arg_12;
    var_80 = arg_11;
    var_88 = arg_10;
    var_96 = arg_9;
    var_104 = arg_8;
    var_112 = arg_7;
    var_120 = arg_6;
    var_128 = arg_5;
    var_136 = arg_4;
    var_144 = arg_3;
    var_152 = arg_2;
    var_160 = arg_1;
    var_168 = arg_0;
    pri = CreatePathObject_(var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_11D8
fun_11D8() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1210
fun_1210() {
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
// switch_1828
        case default:
        {
// switch_1828_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1870
// lab_1870
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
            OP_JNZ lab_1918
            var_88 = 0;
            pri = fun_1B90()
// lab_1918
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1828_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1410
                case default:
                {
// switch_1410_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1488
// lab_1488
                    OP_JUMP lab_1870
                }
                case 0x0:
                {
// switch_1410_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1488
                }
                case 0x1:
                {
// switch_1410_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1488
                }
                case 0x2:
                {
// switch_1410_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1488
                }
                case 0x3:
                {
// switch_1410_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1488
                }
                case 0x4:
                {
// switch_1410_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1488
                }
                case 0x5:
                {
// switch_1410_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1488
                }
            }
        }
        case 0x65:
        {
// switch_1828_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_15C8
                case default:
                {
// switch_15C8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1640
// lab_1640
                    OP_JUMP lab_1870
                }
                case 0x0:
                {
// switch_15C8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1640
                }
                case 0x1:
                {
// switch_15C8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1640
                }
                case 0x2:
                {
// switch_15C8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1640
                }
                case 0x3:
                {
// switch_15C8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1640
                }
                case 0x4:
                {
// switch_15C8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1640
                }
                case 0x5:
                {
// switch_15C8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1640
                }
            }
        }
        case 0x66:
        {
// switch_1828_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1780
                case default:
                {
// switch_1780_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_17F8
// lab_17F8
                    OP_JUMP lab_1870
                }
                case 0x0:
                {
// switch_1780_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_17F8
                }
                case 0x1:
                {
// switch_1780_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_17F8
                }
                case 0x2:
                {
// switch_1780_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_17F8
                }
                case 0x3:
                {
// switch_1780_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_17F8
                }
                case 0x4:
                {
// switch_1780_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_17F8
                }
                case 0x5:
                {
// switch_1780_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_17F8
                }
            }
        }
    }
}
// fun_1930
fun_1930() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_07E0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_19D8
    pri = 1;
    return pri;
// lab_19D8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1A20
fun_1A20() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1A70
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1930(var_8)
    arg_2 = pri;
// lab_1A70
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1210(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1AD0
fun_1AD0() {
    pri = arg_2;
    var_8 = pri;
    pri = PlayerGetSex()
    OP_JNZ lab_1B28
    pri = arg_1;
    var_8 = pri;
// lab_1B28
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_5;
    var_32 = arg_4;
    var_40 = arg_3;
    var_48 = var_8;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1A20(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
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
    OP_JUMP lab_1D30
// lab_1D30
    pri = EvCameraMoveWait_()
    OP_JZER lab_1D68
    pri = 0;
    return pri;
// lab_1D68
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1D30
    pri = 0;
    return pri;
}
// fun_1DA8
fun_1DA8() {
    pri = arg_6;
    OP_JNZ lab_1DE0
    var_8 = 0;
    pri = fun_0CF0()
// lab_1DE0
    pri = arg_1;
    switch (pri) {
// switch_3348
        case default:
        {
// switch_3348_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3698
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3698
            pri = 1;
            OP_JUMP lab_36A0
// lab_3698
            pri = 0;
// lab_36A0
            OP_JZER lab_37F8
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_07E0(var_24, var_16)
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
            OP_JUMP lab_3858
// lab_37F8
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
// lab_3858
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_38B8
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3918
// lab_38B8
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3918
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3918
            pri = arg_2;
            OP_JZER lab_3958
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3958
            var_8 = 0;
            pri = fun_0D30()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3348_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x1:
        {
// switch_3348_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x2:
        {
// switch_3348_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x3:
        {
// switch_3348_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x4:
        {
// switch_3348_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x5:
        {
// switch_3348_case_0x5
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3348_case_default
        }
        case 0x6:
        {
// switch_3348_case_0x6
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3348_case_default
        }
        case 0x7:
        {
// switch_3348_case_0x7
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3348_case_default
        }
        case 0x8:
        {
// switch_3348_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x9:
        {
// switch_3348_case_0x9
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3348_case_default
        }
        case 0xa:
        {
// switch_3348_case_0xa
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3348_case_default
        }
        case 0xb:
        {
// switch_3348_case_0xb
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3348_case_default
        }
        case 0xc:
        {
// switch_3348_case_0xc
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3348_case_default
        }
        case 0xd:
        {
// switch_3348_case_0xd
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3348_case_default
        }
        case 0xe:
        {
// switch_3348_case_0xe
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3348_case_default
        }
        case 0xf:
        {
// switch_3348_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x10:
        {
// switch_3348_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x11:
        {
// switch_3348_case_0x11
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3348_case_default
        }
        case 0x12:
        {
// switch_3348_case_0x12
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3348_case_default
        }
        case 0x13:
        {
// switch_3348_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x14:
        {
// switch_3348_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x15:
        {
// switch_3348_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x16:
        {
// switch_3348_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x17:
        {
// switch_3348_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x18:
        {
// switch_3348_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x19:
        {
// switch_3348_case_0x19
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3348_case_default
        }
        case 0x1a:
        {
// switch_3348_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_07A0(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0768(var_48, var_40)
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
            pri = fun_0A50(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3348_case_default
        }
        case 0x1b:
        {
// switch_3348_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_07A0(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0768(var_48, var_40)
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
            pri = fun_0A50(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3348_case_default
        }
        case 0x1c:
        {
// switch_3348_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_07A0(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0768(var_48, var_40)
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
            pri = fun_0A50(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3348_case_default
        }
        case 0x1d:
        {
// switch_3348_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x1e:
        {
// switch_3348_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x1f:
        {
// switch_3348_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x20:
        {
// switch_3348_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x21:
        {
// switch_3348_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x22:
        {
// switch_3348_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x23:
        {
// switch_3348_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x24:
        {
// switch_3348_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x25:
        {
// switch_3348_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x26:
        {
// switch_3348_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x27:
        {
// switch_3348_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x28:
        {
// switch_3348_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x29:
        {
// switch_3348_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
    }
}
// fun_3988
fun_3988() {
    pri = arg_5;
    OP_JNZ lab_39C0
    var_8 = 0;
    pri = fun_0CF0()
// lab_39C0
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3A10
    OP_CONST_S -8, -1
// lab_3A10
    pri = arg_1;
    switch (pri) {
// switch_54C8
        case default:
        {
// switch_54C8_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5970
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_07E0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5970
            pri = 1;
            OP_JUMP lab_5978
// lab_5970
            pri = 0;
// lab_5978
            OP_JZER lab_59C8
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5C20
// lab_59C8
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5A30
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5A30
            pri = 1;
            OP_JUMP lab_5A38
// lab_5A30
            pri = 0;
// lab_5A38
            OP_JZER lab_5BC0
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_07E0(var_24, var_16)
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
            OP_JUMP lab_5C20
// lab_5BC0
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
// lab_5C20
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_5C90
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_5C90
            var_8 = 0;
            pri = fun_0D30()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_54C8_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x1:
        {
// switch_54C8_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x2:
        {
// switch_54C8_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x3:
        {
// switch_54C8_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x4:
        {
// switch_54C8_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x5:
        {
// switch_54C8_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_07A0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0A18(var_40)
            OP_JUMP switch_54C8_case_default
        }
        case 0x6:
        {
// switch_54C8_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x7:
        {
// switch_54C8_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x8:
        {
// switch_54C8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x9:
        {
// switch_54C8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0xa:
        {
// switch_54C8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0xb:
        {
// switch_54C8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0xc:
        {
// switch_54C8_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0xd:
        {
// switch_54C8_case_0xd
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54C8_case_default
        }
        case 0xe:
        {
// switch_54C8_case_0xe
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54C8_case_default
        }
        case 0xf:
        {
// switch_54C8_case_0xf
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54C8_case_default
        }
        case 0x10:
        {
// switch_54C8_case_0x10
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54C8_case_default
        }
        case 0x11:
        {
// switch_54C8_case_0x11
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54C8_case_default
        }
        case 0x12:
        {
// switch_54C8_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x13:
        {
// switch_54C8_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x14:
        {
// switch_54C8_case_0x14
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54C8_case_default
        }
        case 0x15:
        {
// switch_54C8_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x16:
        {
// switch_54C8_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x17:
        {
// switch_54C8_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x18:
        {
// switch_54C8_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x19:
        {
// switch_54C8_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x1a:
        {
// switch_54C8_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x1b:
        {
// switch_54C8_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x1c:
        {
// switch_54C8_case_0x1c
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54C8_case_default
        }
        case 0x1d:
        {
// switch_54C8_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x1e:
        {
// switch_54C8_case_0x1e
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54C8_case_default
        }
        case 0x1f:
        {
// switch_54C8_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x20:
        {
// switch_54C8_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x21:
        {
// switch_54C8_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x22:
        {
// switch_54C8_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x23:
        {
// switch_54C8_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x24:
        {
// switch_54C8_case_0x24
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54C8_case_default
        }
        case 0x25:
        {
// switch_54C8_case_0x25
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54C8_case_default
        }
        case 0x26:
        {
// switch_54C8_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x27:
        {
// switch_54C8_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x28:
        {
// switch_54C8_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x29:
        {
// switch_54C8_case_0x29
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54C8_case_default
        }
        case 0x2a:
        {
// switch_54C8_case_0x2a
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54C8_case_default
        }
        case 0x2b:
        {
// switch_54C8_case_0x2b
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54C8_case_default
        }
        case 0x2c:
        {
// switch_54C8_case_0x2c
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54C8_case_default
        }
        case 0x2d:
        {
// switch_54C8_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x2e:
        {
// switch_54C8_case_0x2e
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54C8_case_default
        }
        case 0x2f:
        {
// switch_54C8_case_0x2f
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54C8_case_default
        }
        case 0x30:
        {
// switch_54C8_case_0x30
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54C8_case_default
        }
        case 0x31:
        {
// switch_54C8_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x32:
        {
// switch_54C8_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x33:
        {
// switch_54C8_case_0x33
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54C8_case_default
        }
        case 0x34:
        {
// switch_54C8_case_0x34
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54C8_case_default
        }
        case 0x35:
        {
// switch_54C8_case_0x35
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54C8_case_default
        }
        case 0x36:
        {
// switch_54C8_case_0x36
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54C8_case_default
        }
        case 0x37:
        {
// switch_54C8_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x38:
        {
// switch_54C8_case_0x38
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
            pri = fun_0A50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54C8_case_default
        }
        case 0x39:
        {
// switch_54C8_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x3a:
        {
// switch_54C8_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x3b:
        {
// switch_54C8_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x3c:
        {
// switch_54C8_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x3d:
        {
// switch_54C8_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
        case 0x3e:
        {
// switch_54C8_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_07A0(var_24, var_16, var_8)
            OP_JUMP switch_54C8_case_default
        }
    }
}
// fun_5CC0
fun_5CC0() {
    pri = arg_4;
    OP_JNZ lab_5CF8
    var_8 = 0;
    pri = fun_0CF0()
// lab_5CF8
    pri = arg_1;
    switch (pri) {
// switch_70D0
        case default:
        {
// switch_70D0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0E08(var_264)
            OP_JZER lab_7698
            pri = arg_3;
            switch (pri) {
// switch_7640
                case default:
                {
// switch_7640_case_default
                    OP_JUMP lab_7950
// lab_7950
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_79C0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_79C0
                    var_8 = 0;
                    pri = fun_0D30()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7640_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7640_case_default
                }
                case 0x2:
                {
// switch_7640_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7640_case_default
                }
                case 0x3:
                {
// switch_7640_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7640_case_default
                }
            }
// lab_7698
            pri = arg_1;
            OP_JZER lab_76E8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_76E8
            pri = 0;
            OP_JUMP lab_76F0
// lab_76E8
            pri = 1;
// lab_76F0
            OP_JZER lab_7758
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_07E0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7758
            pri = 1;
            OP_JUMP lab_7760
// lab_7758
            pri = 0;
// lab_7760
            OP_JZER lab_77B0
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7950
// lab_77B0
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7818
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7950
// lab_7818
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_07E0(var_24, var_16)
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
// switch_70D0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x1:
        {
// switch_70D0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x2:
        {
// switch_70D0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x3:
        {
// switch_70D0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x4:
        {
// switch_70D0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x5:
        {
// switch_70D0_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_07A0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0A18(var_40)
            OP_JUMP switch_70D0_case_default
        }
        case 0x6:
        {
// switch_70D0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x7:
        {
// switch_70D0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x8:
        {
// switch_70D0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x9:
        {
// switch_70D0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0xa:
        {
// switch_70D0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0xb:
        {
// switch_70D0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0xc:
        {
// switch_70D0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0xd:
        {
// switch_70D0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0xe:
        {
// switch_70D0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0xf:
        {
// switch_70D0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x10:
        {
// switch_70D0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x11:
        {
// switch_70D0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x12:
        {
// switch_70D0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x13:
        {
// switch_70D0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x14:
        {
// switch_70D0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x15:
        {
// switch_70D0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x16:
        {
// switch_70D0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x17:
        {
// switch_70D0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x18:
        {
// switch_70D0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x19:
        {
// switch_70D0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x1a:
        {
// switch_70D0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x1b:
        {
// switch_70D0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x1c:
        {
// switch_70D0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x1d:
        {
// switch_70D0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x1e:
        {
// switch_70D0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x1f:
        {
// switch_70D0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x20:
        {
// switch_70D0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x21:
        {
// switch_70D0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x22:
        {
// switch_70D0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x23:
        {
// switch_70D0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x24:
        {
// switch_70D0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x25:
        {
// switch_70D0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x26:
        {
// switch_70D0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x27:
        {
// switch_70D0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x28:
        {
// switch_70D0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x29:
        {
// switch_70D0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x2a:
        {
// switch_70D0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x2b:
        {
// switch_70D0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x2c:
        {
// switch_70D0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x2d:
        {
// switch_70D0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x2e:
        {
// switch_70D0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x2f:
        {
// switch_70D0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x30:
        {
// switch_70D0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x31:
        {
// switch_70D0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x32:
        {
// switch_70D0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x33:
        {
// switch_70D0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x34:
        {
// switch_70D0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x35:
        {
// switch_70D0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x36:
        {
// switch_70D0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x37:
        {
// switch_70D0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x38:
        {
// switch_70D0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x39:
        {
// switch_70D0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x3a:
        {
// switch_70D0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x3b:
        {
// switch_70D0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x3c:
        {
// switch_70D0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x3d:
        {
// switch_70D0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
        case 0x3e:
        {
// switch_70D0_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_07A0(var_24, var_16, var_8)
            OP_JUMP switch_70D0_case_default
        }
    }
}
// fun_79F0
fun_79F0() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_7AF0
        case default:
        {
// switch_7AF0_case_default
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
// switch_7AF0_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_7AF0_case_default
        }
        case 0x1:
        {
// switch_7AF0_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_7AF0_case_default
        }
        case 0x2:
        {
// switch_7AF0_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_7AF0_case_default
        }
        case 0x3:
        {
// switch_7AF0_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_7AF0_case_default
        }
    }
}
// fun_7BB0
fun_7BB0() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_7C00
// lab_7C00
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30048;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_7C78
    OP_JUMP lab_7CA8
// lab_7C78
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_7C00
// lab_7CA8
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_7D30
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_5CC0(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_10D8(var_56)
// lab_7D30
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_7D98
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0DC8(var_24, var_16)
// lab_7D98
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0DC8(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_7E58
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0818(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0598(var_88, var_80, var_72, var_64, var_56)
// lab_7E58
    pri = IsPlayerRideBicycle()
    OP_JZER lab_7E98
    pri = 0;
    return pri;
// lab_7E98
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_7FE0
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 30168;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0768(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_7FA8
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_7FE0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0640(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0640(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0818(var_40)
    pri = 0;
    return pri;
// lab_7FA8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0DC8(var_16, var_8)
}
// fun_8068
fun_8068() {
    pri = 30304;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_80F0
// lab_80F0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_8270
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_8260
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_81B0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_81B0
    pri = 0;
    OP_JUMP lab_81B8
// lab_8270
    pri = 0;
    return pri;
// lab_8260
    OP_JUMP lab_80E8
// lab_80E8
    OP_INC_P_S -936
// lab_81B0
    pri = 1;
// lab_81B8
    OP_JZER lab_8230
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8228
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_8230
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_8228
}
// fun_8290
fun_8290() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_8328
    var_8 = 1;
    var_16 = 0;
    var_24 = 31224;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_10B0()
// lab_8328
    pri = arg_4;
    OP_JZER lab_8360
    var_8 = 1;
    var_16 = 8;
    pri = fun_11D8(var_8)
// lab_8360
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_83B8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_83B8
    pri = 0;
    OP_JUMP lab_83C0
// lab_83B8
    pri = 1;
// lab_83C0
    OP_JZER lab_8488
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_8488
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_8460
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_0FF0(var_32, var_24)
    OP_JUMP lab_8488
// lab_8488
    pri = arg_2;
    OP_JZER lab_8560
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_8530
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0DC8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0490(var_40)
    OP_JUMP lab_8560
// lab_8560
    pri = arg_3;
    OP_JZER lab_8598
    var_8 = 1;
    var_16 = 8;
    pri = fun_1078(var_8)
// lab_8598
    pri = 0;
    return pri;
// lab_8530
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0DC8(var_16, var_8)
// lab_8460
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0FF0(var_16, var_8)
}
// fun_85A8
fun_85A8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_8068(var_24)
    pri = 0;
    return pri;
}
// fun_8610
fun_8610() {
    pri = g_mode;
    switch (pri) {
// switch_86F8
        case default:
        {
// switch_86F8_case_default
            pri = CommandNOP()
            OP_JUMP lab_8750
// lab_8750
            pri = 0;
            return pri;
        }
        case 0x94686322061e36ca:
        {
// switch_86F8_case_0x94686322061e36ca
            var_8 = 0;
            pri = fun_9CB0()
            OP_JUMP lab_8750
        }
        case 0x0:
        {
// switch_86F8_case_0x0
            var_8 = 0;
            pri = fun_8760()
            OP_JUMP lab_8750
        }
        case 0xdd4eeb290cea840:
        {
// switch_86F8_case_0xdd4eeb290cea840
            var_8 = 0;
            pri = fun_9DE8()
            OP_JUMP lab_8750
        }
        case 0x76b7691e7be41266:
        {
// switch_86F8_case_0x76b7691e7be41266
            var_8 = 0;
            pri = fun_9DA0()
            OP_JUMP lab_8750
        }
    }
}
// fun_8760
fun_8760() {
    pri = 0;
    return pri;
}
// fun_8778
fun_8778() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_8290(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_87D0
fun_87D0() {
    pri = 0;
    return pri;
}
// fun_87E8
fun_87E8() {
    pri = 0;
    return pri;
}
// fun_8800
fun_8800() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C -4587338432941916160, 4652095269771411456, 4650995758143635456, 51229971475200296
    var_24 = 48;
    pri = fun_0438(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 1;
    OP_PUSH4_C -4587338432941916160, 4648137027911417856, 4644776920376934400, -4200946985965466213
    var_48 = 48;
    pri = fun_0438(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 1;
    var_64 = 1;
    OP_PUSH4_C -4587338432941916160, 4652051289306300416, 4651743426050523136, 8802641224559852288
    var_72 = 48;
    pri = fun_0438(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 1;
    var_88 = 8;
    pri = fun_0060(var_80)
    var_96 = 0;
    var_104 = 4631952216750555136;
    var_112 = 0;
    OP_PUSH5_C 4651427822232886313, 4639293084143169044, 4647842094912383222, 4652854328618762895, 4641959004016339845
    var_120 = 4647842798599824998;
    var_128 = 1;
    pri = EvCameraMove(var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_136 = 0;
    pri = fun_1D18()
    var_144 = 0;
    var_152 = 4631952216750555136;
    var_160 = 2;
    OP_PUSH5_C 4652452523089508434, 4640310264340257178, 4647823711077966807, 4653483733054966989, 4642976184213427978
    var_168 = 4647824414765408584;
    var_176 = 180;
    pri = EvCameraMove(var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104)
    var_184 = 31272;
    var_192 = 8;
    var_200 = 16;
    pri = fun_0280(var_192, var_184)
    var_208 = 0;
    pri = fun_0350()
    var_216 = 45;
    var_224 = 8;
    pri = fun_0060(var_216)
    var_232 = 0;
    var_240 = 0;
    var_248 = 0;
    var_256 = 180;
    pri = float(var_256)
    var_264 = pri;
    var_272 = -4200946985965466213;
    var_280 = 40;
    pri = fun_0598(var_272, var_264, var_256, var_248, var_240)
    var_288 = 30;
    var_296 = 8;
    pri = fun_0060(var_288)
    var_304 = -4200946985965466213;
    var_312 = 8;
    pri = fun_0640(var_304)
    var_320 = 31320;
    pri = SoundPostEvent(var_320)
    var_328 = 15;
    var_336 = 8;
    pri = fun_0060(var_328)
    var_344 = 1;
    var_352 = 0;
    var_360 = 4641240890982006784;
    var_368 = 0;
    var_376 = 0;
    OP_PUSH4_C 4650951777678524416, 4649236539539193856, 4611686018427387904, 51229971475200296
    var_384 = 72;
    pri = fun_04C8(var_376, var_368, var_360, var_352, var_344, var_336, var_328, var_320, var_312)
    var_392 = 5;
    var_400 = 8;
    pri = fun_0060(var_392)
    var_416 = 31624;
    var_424 = 1;
    var_432 = 0;
    var_440 = 1;
    var_448 = -1;
    var_456 = 0;
    var_464 = 0;
    var_472 = 0;
    var_480 = 0;
    var_488 = 0;
    var_496 = 0;
    OP_PUSH5_C 4651576300283101184, 4611686018427387904, 4648365726329995264, 4652513084189966336, 4611686018427387904
    OP_PUSH4_C 4649625326850775450, 4651769814329589760, 4611686018427387904, 4651942217752825037
    var_504 = 3;
    var_512 = 168;
    pri = fun_1108(var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_8 = pri;
    var_520 = 1;
    var_528 = 4596373779694328218;
    var_536 = -1;
    var_544 = 4607182418800017408;
    var_552 = var_8;
    var_560 = 8802641224559852288;
    var_568 = 48;
    pri = fun_0540(var_560, var_552, var_544, var_536, var_528, var_520)
    var_576 = 1;
    var_584 = 1;
    var_592 = -1;
    OP_PUSH2_C -4200946985965466213, 8802641224559852288
    var_600 = 40;
    pri = fun_0D70(var_592, var_584, var_576, var_568, var_560)
    var_608 = 8802641224559852288;
    var_616 = 8;
    pri = fun_0640(var_608)
    var_624 = 15;
    var_632 = 8;
    pri = fun_0060(var_624)
    var_640 = 0;
    var_648 = 0;
    var_656 = 0;
    var_664 = 40;
    pri = float(var_664)
    var_672 = pri;
    var_680 = -4200946985965466213;
    var_688 = 40;
    pri = fun_0598(var_680, var_672, var_664, var_656, var_648)
    var_696 = 15;
    var_704 = 8;
    pri = fun_0060(var_696)
    var_712 = -4200946985965466213;
    var_720 = 8;
    pri = fun_0640(var_712)
    var_728 = 0;
    var_736 = 3;
    var_744 = 0;
    var_752 = 100;
    var_760 = -1;
    OP_PUSH2_C 3873563937830744051, 51229971475200296
    var_768 = 56;
    pri = fun_1A20(var_760, var_752, var_744, var_736, var_728, var_720, var_712)
    var_776 = 1;
    var_784 = 8;
    pri = fun_1C28(var_776)
    var_792 = 0;
    pri = fun_1CE8()
    var_800 = 51229971475200296;
    var_808 = 8;
    pri = fun_0640(var_800)
    var_816 = 1;
    var_824 = 0;
    var_832 = 4641240890982006784;
    var_840 = 0;
    var_848 = 0;
    OP_PUSH4_C 4648576832562528256, 4645656529679155200, 4607182418800017408, -4200946985965466213
    var_856 = 72;
    pri = fun_04C8(var_848, var_840, var_832, var_824, var_816, var_808, var_800, var_792, var_784)
    var_864 = 0;
    var_872 = 3;
    var_880 = 0;
    var_888 = 100;
    var_896 = -1;
    OP_PUSH2_C -1573872999995479665, -4200946985965466213
    var_904 = 56;
    pri = fun_1A20(var_896, var_888, var_880, var_872, var_864, var_856, var_848)
    var_912 = 1;
    var_920 = 8;
    pri = fun_1C28(var_912)
    var_928 = -4200946985965466213;
    var_936 = 8;
    pri = fun_0640(var_928)
    var_944 = 1;
    var_952 = 1;
    var_960 = -1;
    OP_PUSH2_C 8802641224559852288, -4200946985965466213
    var_968 = 40;
    pri = fun_0D70(var_960, var_952, var_944, var_936, var_928)
    var_976 = 1;
    var_984 = 1;
    var_992 = -1;
    var_1000 = -1;
    var_1008 = 0;
    var_1016 = 1;
    var_1024 = -4200946985965466213;
    var_1032 = 56;
    pri = fun_3988(var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976)
    var_1040 = 0;
    var_1048 = 3;
    var_1056 = 0;
    var_1064 = 100;
    var_1072 = -1;
    OP_PUSH3_C -1573870800972223243, -1573871900483851454, -4200946985965466213
    var_1080 = 64;
    pri = fun_1AD0(var_1072, var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016)
    var_1088 = 15;
    var_1096 = 8;
    pri = fun_0060(var_1088)
    var_1104 = 1;
    var_1112 = 8;
    pri = fun_1C28(var_1104)
    var_1120 = 0;
    pri = fun_1CE8()
    var_1128 = -1;
    var_1136 = -4200946985965466213;
    var_1144 = 16;
    pri = fun_0DC8(var_1136, var_1128)
    var_1152 = 1;
    var_1160 = 3;
    var_1168 = 0;
    var_1176 = 1;
    var_1184 = -4200946985965466213;
    var_1192 = 40;
    pri = fun_5CC0(var_1184, var_1176, var_1168, var_1160, var_1152)
    var_1200 = 1;
    var_1208 = 1;
    var_1216 = -1;
    var_1224 = -1;
    var_1232 = 0;
    var_1240 = 3;
    var_1248 = 51229971475200296;
    var_1256 = 56;
    pri = fun_3988(var_1248, var_1240, var_1232, var_1224, var_1216, var_1208, var_1200)
    var_1264 = 0;
    var_1272 = 3;
    var_1280 = 0;
    var_1288 = 100;
    var_1296 = -1;
    OP_PUSH2_C 3873565037342372262, 51229971475200296
    var_1304 = 56;
    pri = fun_1A20(var_1296, var_1288, var_1280, var_1272, var_1264, var_1256, var_1248)
    var_1312 = 1;
    var_1320 = 8;
    pri = fun_1C28(var_1312)
    var_1328 = 0;
    pri = fun_1CE8()
    var_1336 = 1;
    var_1344 = 3;
    var_1352 = 0;
    var_1360 = 3;
    var_1368 = 51229971475200296;
    var_1376 = 40;
    pri = fun_5CC0(var_1368, var_1360, var_1352, var_1344, var_1336)
    var_1384 = 0;
    var_1392 = 3;
    var_1400 = 0;
    var_1408 = 100;
    var_1416 = -1;
    OP_PUSH2_C -1573878497553620720, -4200946985965466213
    var_1424 = 56;
    pri = fun_1A20(var_1416, var_1408, var_1400, var_1392, var_1384, var_1376, var_1368)
    var_1432 = 1;
    var_1440 = 8;
    pri = fun_1C28(var_1432)
    var_1448 = 1;
    var_1456 = 1;
    var_1464 = -1;
    var_1472 = -1;
    var_1480 = 0;
    var_1488 = 1;
    var_1496 = -4200946985965466213;
    var_1504 = 56;
    pri = fun_3988(var_1496, var_1488, var_1480, var_1472, var_1464, var_1456, var_1448)
    var_1512 = 0;
    var_1520 = 3;
    var_1528 = 0;
    var_1536 = 100;
    var_1544 = -1;
    OP_PUSH2_C -1573877398041992509, -4200946985965466213
    var_1552 = 56;
    pri = fun_1A20(var_1544, var_1536, var_1528, var_1520, var_1512, var_1504, var_1496)
    var_1560 = 1;
    var_1568 = 8;
    pri = fun_1C28(var_1560)
    var_1576 = 0;
    pri = fun_1CE8()
    var_1584 = 51229971475200296;
    var_1592 = 8;
    pri = fun_0818(var_1584)
    var_1600 = 1;
    var_1608 = 3;
    var_1616 = 0;
    var_1624 = 1;
    var_1632 = -4200946985965466213;
    var_1640 = 40;
    pri = fun_5CC0(var_1632, var_1624, var_1616, var_1608, var_1600)
    var_1648 = 1;
    var_1656 = -1;
    var_1664 = -1;
    var_1672 = 3;
    var_1680 = 0;
    var_1688 = 0;
    var_1696 = 51229971475200296;
    var_1704 = 56;
    pri = fun_1DA8(var_1696, var_1688, var_1680, var_1672, var_1664, var_1656, var_1648)
    var_1712 = 0;
    var_1720 = 3;
    var_1728 = 0;
    var_1736 = 100;
    var_1744 = -1;
    OP_PUSH2_C 3873566136854000473, 51229971475200296
    var_1752 = 56;
    pri = fun_1A20(var_1744, var_1736, var_1728, var_1720, var_1712, var_1704, var_1696)
    var_1760 = 1;
    var_1768 = 8;
    pri = fun_1C28(var_1760)
    var_1776 = 0;
    pri = fun_1CE8()
    var_1784 = 1;
    var_1792 = -1;
    var_1800 = -1;
    var_1808 = 3;
    var_1816 = 0;
    var_1824 = 0;
    var_1832 = -4200946985965466213;
    var_1840 = 56;
    pri = fun_1DA8(var_1832, var_1824, var_1816, var_1808, var_1800, var_1792, var_1784)
    var_1848 = 0;
    var_1856 = 3;
    var_1864 = 0;
    var_1872 = 100;
    var_1880 = -1;
    OP_PUSH2_C -1573876298530364298, -4200946985965466213
    var_1888 = 56;
    pri = fun_1A20(var_1880, var_1872, var_1864, var_1856, var_1848, var_1840, var_1832)
    var_1896 = 1;
    var_1904 = 8;
    pri = fun_1C28(var_1896)
    var_1912 = 0;
    pri = fun_1CE8()
    var_1920 = 0;
    var_1928 = 0;
    var_1936 = 0;
    var_1944 = 0;
    OP_PUSH2_C 8802641224559852288, 51229971475200296
    var_1952 = 48;
    pri = fun_05E8(var_1944, var_1936, var_1928, var_1920, var_1912, var_1904)
    var_1960 = 51229971475200296;
    var_1968 = 8;
    pri = fun_0640(var_1960)
    var_1976 = 1;
    var_1984 = 1;
    var_1992 = -1;
    OP_PUSH2_C 51229971475200296, 8802641224559852288
    var_2000 = 40;
    pri = fun_0D70(var_1992, var_1984, var_1976, var_1968, var_1960)
    var_2008 = 0;
    var_2016 = 3;
    var_2024 = 0;
    var_2032 = 100;
    var_2040 = -1;
    OP_PUSH2_C 3873567236365628684, 51229971475200296
    var_2048 = 56;
    pri = fun_1A20(var_2040, var_2032, var_2024, var_2016, var_2008, var_2000, var_1992)
    var_2056 = 1;
    var_2064 = 8;
    pri = fun_1C28(var_2056)
    var_2072 = 1;
    var_2080 = 0;
    var_2088 = 100;
    pri = float(var_2088)
    var_2096 = pri;
    var_2104 = 0;
    var_2112 = 0;
    OP_PUSH4_C 4652095269771411456, 4650995758143635456, 4611686018427387904, 51229971475200296
    var_2120 = 72;
    pri = fun_04C8(var_2112, var_2104, var_2096, var_2088, var_2080, var_2072, var_2064, var_2056, var_2048)
    var_2128 = 15;
    var_2136 = 8;
    pri = fun_0060(var_2128)
    var_2144 = 0;
    var_2152 = 0;
    var_2160 = 0;
    var_2168 = 90;
    pri = float(var_2168)
    var_2176 = pri;
    var_2184 = 8802641224559852288;
    var_2192 = 40;
    pri = fun_0598(var_2184, var_2176, var_2168, var_2160, var_2152)
    var_2200 = -1;
    var_2208 = 8802641224559852288;
    var_2216 = 16;
    pri = fun_0DC8(var_2208, var_2200)
    var_2224 = 0;
    var_2232 = 3;
    var_2240 = 0;
    var_2248 = 100;
    var_2256 = -1;
    OP_PUSH2_C 3873568335877256895, 51229971475200296
    var_2264 = 56;
    pri = fun_1A20(var_2256, var_2248, var_2240, var_2232, var_2224, var_2216, var_2208)
    var_2272 = 1;
    var_2280 = 8;
    pri = fun_1C28(var_2272)
    var_2288 = 0;
    pri = fun_1CE8()
    var_2296 = 51229971475200296;
    var_2304 = 8;
    pri = fun_0640(var_2296)
    var_2312 = 8802641224559852288;
    var_2320 = 8;
    pri = fun_0640(var_2312)
    var_2328 = 31672;
    pri = SoundPostEvent(var_2328)
    var_2336 = 15;
    var_2344 = 8;
    pri = fun_0060(var_2336)
    var_2352 = 3;
    var_2360 = 60;
    pri = EvCameraEnd(var_2360, var_2352)
    var_2368 = 15;
    var_2376 = 8;
    pri = fun_0060(var_2368)
    var_2384 = 31968;
    pri = SoundPostEvent(var_2384)
    pri = 0;
    return pri;
}
// fun_9B28
fun_9B28() {
    pri = 0;
    return pri;
}
// fun_9B40
fun_9B40() {
    var_8 = 51229971475200296;
    var_16 = 8;
    pri = fun_0408(var_8)
    var_24 = 50;
    var_32 = 8;
    pri = fun_85A8(var_24)
    var_40 = 20;
    var_48 = -7486538135553164029;
    pri = WorkSet(var_48, var_40)
    var_56 = 7095484774853797935;
    pri = VanishFlagSet(var_56)
    var_64 = -1624929651410500742;
    pri = VanishFlagSet(var_64)
    var_72 = 5388265639592717085;
    pri = VanishFlagSet(var_72)
    var_80 = -1655053127185566619;
    pri = VanishFlagReset(var_80)
    var_88 = 7845089036434421356;
    pri = FlagReset(var_88)
    pri = 0;
    return pri;
}
// fun_9C98
fun_9C98() {
    pri = 0;
    return pri;
}
// fun_9CB0
fun_9CB0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_8778()
    var_16 = 0;
    pri = fun_87D0()
    var_24 = 0;
    pri = fun_87E8()
    var_32 = 0;
    pri = fun_8800()
    var_40 = 0;
    pri = fun_9B28()
    var_48 = 0;
    pri = fun_9B40()
    var_56 = 0;
    pri = fun_9C98()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_9DA0
fun_9DA0() {
    var_8 = 0;
    pri = fun_87D0()
    var_16 = 0;
    pri = fun_9B40()
    pri = 0;
    return pri;
}
// fun_9DE8
fun_9DE8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = -4200946985965466213;
    var_56 = 48;
    pri = fun_79F0(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 100;
    var_96 = -1;
    OP_PUSH3_C -1573865303414082188, -1573875199018736087, -4200946985965466213
    var_104 = 64;
    pri = fun_1AD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1C28(var_112)
    var_128 = 0;
    var_136 = 3;
    var_144 = 0;
    var_152 = 100;
    var_160 = -1;
    OP_PUSH2_C -1573864203902453977, -4200946985965466213
    var_168 = 56;
    pri = fun_1A20(var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_176 = 1;
    var_184 = 8;
    pri = fun_1C28(var_176)
    var_192 = 0;
    pri = fun_1CE8()
    var_200 = 0;
    var_208 = 0;
    var_216 = 0;
    var_224 = -4200946985965466213;
    var_232 = 32;
    pri = fun_7BB0(var_224, var_216, var_208, var_200)
    pri = 0;
    return pri;
}
