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
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0590
fun_0590() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DE8(var_8)
    OP_JZER lab_0608
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0E18(var_24)
    OP_JNZ lab_0608
    pri = 0;
    return pri;
// lab_0608
    OP_JUMP lab_0618
// lab_0618
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0678
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0678
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0618
    pri = 0;
    return pri;
}
// fun_06B8
fun_06B8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_06F0
fun_06F0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0730
fun_0730() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0768
fun_0768() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_07B0
    pri = 0;
    return pri;
// lab_07B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_07F0
// lab_07F0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DE8(var_8)
    OP_JNZ lab_0878
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0868
    pri = 0;
    return pri;
// lab_0878
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_08C0
    pri = 0;
    return pri;
// lab_08C0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0920
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0968(var_8)
    pri = 0;
    return pri;
// lab_0920
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_07F0
    pri = 0;
    return pri;
// lab_0868
    OP_JUMP lab_08C0
}
// fun_0968
fun_0968() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_09A0
fun_09A0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_09F0
    pri = 0;
    return pri;
// lab_09F0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DE8(var_8)
    OP_JZER lab_0B20
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A48
    OP_ZERO_P_S 64
// lab_0B20
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B58
    OP_CONST_S 64, 1
// lab_0B58
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B90
    OP_CONST_S 72, 1
// lab_0B90
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
// lab_0A48
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A70
    OP_ZERO_P_S 72
// lab_0A70
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
    OP_JUMP lab_0C30
// lab_0C30
    pri = 0;
    return pri;
}
// fun_0C40
fun_0C40() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C80
fun_0C80() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0CC0
fun_0CC0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D00
fun_0D00() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D40
fun_0D40() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D80
fun_0D80() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0D00(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_0D40(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_0DE8
fun_0DE8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0E18
fun_0E18() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0E48
fun_0E48() {
    OP_JUMP lab_0E60
// lab_0E60
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0EF0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0EE0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0768(var_8)
    pri = 0;
    return pri;
// lab_0EF0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0F80
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0F70
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0768(var_8)
    pri = 0;
    return pri;
// lab_0F80
    pri = 0;
    return pri;
// lab_0F70
    OP_JUMP lab_0F90
// lab_0F90
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0E60
    pri = 0;
    return pri;
// lab_0EE0
    OP_JUMP lab_0F90
}
// fun_0FD0
fun_0FD0() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0768(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0E48(var_40)
    pri = 0;
    return pri;
}
// fun_1058
fun_1058() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1090
fun_1090() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_10B8
fun_10B8() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_10F0
fun_10F0() {
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
// switch_1708
        case default:
        {
// switch_1708_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1750
// lab_1750
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
            OP_JNZ lab_17F8
            var_88 = 0;
            pri = fun_19B0()
// lab_17F8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1708_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_12F0
                case default:
                {
// switch_12F0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1368
// lab_1368
                    OP_JUMP lab_1750
                }
                case 0x0:
                {
// switch_12F0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1368
                }
                case 0x1:
                {
// switch_12F0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1368
                }
                case 0x2:
                {
// switch_12F0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1368
                }
                case 0x3:
                {
// switch_12F0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1368
                }
                case 0x4:
                {
// switch_12F0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1368
                }
                case 0x5:
                {
// switch_12F0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1368
                }
            }
        }
        case 0x65:
        {
// switch_1708_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_14A8
                case default:
                {
// switch_14A8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1520
// lab_1520
                    OP_JUMP lab_1750
                }
                case 0x0:
                {
// switch_14A8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1520
                }
                case 0x1:
                {
// switch_14A8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1520
                }
                case 0x2:
                {
// switch_14A8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1520
                }
                case 0x3:
                {
// switch_14A8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1520
                }
                case 0x4:
                {
// switch_14A8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1520
                }
                case 0x5:
                {
// switch_14A8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1520
                }
            }
        }
        case 0x66:
        {
// switch_1708_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1660
                case default:
                {
// switch_1660_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_16D8
// lab_16D8
                    OP_JUMP lab_1750
                }
                case 0x0:
                {
// switch_1660_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_16D8
                }
                case 0x1:
                {
// switch_1660_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_16D8
                }
                case 0x2:
                {
// switch_1660_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_16D8
                }
                case 0x3:
                {
// switch_1660_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_16D8
                }
                case 0x4:
                {
// switch_1660_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_16D8
                }
                case 0x5:
                {
// switch_1660_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_16D8
                }
            }
        }
    }
}
// fun_1810
fun_1810() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0730(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_18B8
    pri = 1;
    return pri;
// lab_18B8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1900
fun_1900() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1950
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1810(var_8)
    arg_2 = pri;
// lab_1950
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_10F0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_19B0
fun_19B0() {
    OP_JUMP lab_19C8
// lab_19C8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1A08
    pri = 0;
    return pri;
// lab_1A08
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_19C8
    pri = 0;
    return pri;
}
// fun_1A48
fun_1A48() {
    var_8 = 0;
    pri = fun_19B0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1AF8
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1AF8
    pri = 0;
    return pri;
}
// fun_1B08
fun_1B08() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1B38
fun_1B38() {
    pri = arg_1;
    OP_JNZ lab_1B80
    var_8 = 648;
    pri = GetFnvHash64(var_8)
    arg_1 = pri;
// lab_1B80
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
// fun_1BD8
fun_1BD8() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_1C50
fun_1C50() {
    var_8 = 0;
    pri = fun_1BD8()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1CD0
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_1CD0
    pri = 1;
    return pri;
// lab_1CD0
    var_8 = 0;
    pri = fun_1BD8()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_1D10
    pri = 1;
    return pri;
// lab_1D10
    var_8 = 0;
    pri = fun_1BD8()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_1D40
fun_1D40() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_1D90
fun_1D90() {
    OP_JUMP lab_1DA8
// lab_1DA8
    pri = EvCameraMoveWait_()
    OP_JZER lab_1DE0
    pri = 0;
    return pri;
// lab_1DE0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1DA8
    pri = 0;
    return pri;
}
// fun_1E20
fun_1E20() {
    pri = arg_6;
    OP_JNZ lab_1E58
    var_8 = 0;
    pri = fun_0C40()
// lab_1E58
    pri = arg_1;
    switch (pri) {
// switch_33C0
        case default:
        {
// switch_33C0_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3710
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3710
            pri = 1;
            OP_JUMP lab_3718
// lab_3710
            pri = 0;
// lab_3718
            OP_JZER lab_3870
            var_16 = 8328;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0730(var_24, var_16)
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
            OP_JUMP lab_38D0
// lab_3870
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
// lab_38D0
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3930
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3990
// lab_3930
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3990
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3990
            pri = arg_2;
            OP_JZER lab_39D0
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_39D0
            var_8 = 0;
            pri = fun_0C80()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_33C0_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33C0_case_default
        }
        case 0x1:
        {
// switch_33C0_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33C0_case_default
        }
        case 0x2:
        {
// switch_33C0_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33C0_case_default
        }
        case 0x3:
        {
// switch_33C0_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33C0_case_default
        }
        case 0x4:
        {
// switch_33C0_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33C0_case_default
        }
        case 0x5:
        {
// switch_33C0_case_0x5
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
            pri = fun_09A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33C0_case_default
        }
        case 0x6:
        {
// switch_33C0_case_0x6
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
            pri = fun_09A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33C0_case_default
        }
        case 0x7:
        {
// switch_33C0_case_0x7
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
            pri = fun_09A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33C0_case_default
        }
        case 0x8:
        {
// switch_33C0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33C0_case_default
        }
        case 0x9:
        {
// switch_33C0_case_0x9
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
            pri = fun_09A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33C0_case_default
        }
        case 0xa:
        {
// switch_33C0_case_0xa
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
            pri = fun_09A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33C0_case_default
        }
        case 0xb:
        {
// switch_33C0_case_0xb
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
            pri = fun_09A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33C0_case_default
        }
        case 0xc:
        {
// switch_33C0_case_0xc
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
            pri = fun_09A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33C0_case_default
        }
        case 0xd:
        {
// switch_33C0_case_0xd
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
            pri = fun_09A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33C0_case_default
        }
        case 0xe:
        {
// switch_33C0_case_0xe
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
            pri = fun_09A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33C0_case_default
        }
        case 0xf:
        {
// switch_33C0_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33C0_case_default
        }
        case 0x10:
        {
// switch_33C0_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33C0_case_default
        }
        case 0x11:
        {
// switch_33C0_case_0x11
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
            pri = fun_09A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33C0_case_default
        }
        case 0x12:
        {
// switch_33C0_case_0x12
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
            pri = fun_09A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33C0_case_default
        }
        case 0x13:
        {
// switch_33C0_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33C0_case_default
        }
        case 0x14:
        {
// switch_33C0_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33C0_case_default
        }
        case 0x15:
        {
// switch_33C0_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33C0_case_default
        }
        case 0x16:
        {
// switch_33C0_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33C0_case_default
        }
        case 0x17:
        {
// switch_33C0_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33C0_case_default
        }
        case 0x18:
        {
// switch_33C0_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33C0_case_default
        }
        case 0x19:
        {
// switch_33C0_case_0x19
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
            pri = fun_09A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33C0_case_default
        }
        case 0x1a:
        {
// switch_33C0_case_0x1a
            var_8 = 1;
            var_16 = 5888;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06F0(var_24, var_16, var_8)
            var_40 = 6024;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_06B8(var_48, var_40)
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
            pri = fun_09A0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_33C0_case_default
        }
        case 0x1b:
        {
// switch_33C0_case_0x1b
            var_8 = 3;
            var_16 = 6112;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06F0(var_24, var_16, var_8)
            var_40 = 6248;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_06B8(var_48, var_40)
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
            pri = fun_09A0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_33C0_case_default
        }
        case 0x1c:
        {
// switch_33C0_case_0x1c
            var_8 = 2;
            var_16 = 6336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06F0(var_24, var_16, var_8)
            var_40 = 6472;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_06B8(var_48, var_40)
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
            pri = fun_09A0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_33C0_case_default
        }
        case 0x1d:
        {
// switch_33C0_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6560;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33C0_case_default
        }
        case 0x1e:
        {
// switch_33C0_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6696;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33C0_case_default
        }
        case 0x1f:
        {
// switch_33C0_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6832;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33C0_case_default
        }
        case 0x20:
        {
// switch_33C0_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6968;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33C0_case_default
        }
        case 0x21:
        {
// switch_33C0_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7088;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33C0_case_default
        }
        case 0x22:
        {
// switch_33C0_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7208;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33C0_case_default
        }
        case 0x23:
        {
// switch_33C0_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7344;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33C0_case_default
        }
        case 0x24:
        {
// switch_33C0_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7480;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33C0_case_default
        }
        case 0x25:
        {
// switch_33C0_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7616;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33C0_case_default
        }
        case 0x26:
        {
// switch_33C0_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7752;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33C0_case_default
        }
        case 0x27:
        {
// switch_33C0_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7896;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33C0_case_default
        }
        case 0x28:
        {
// switch_33C0_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8040;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33C0_case_default
        }
        case 0x29:
        {
// switch_33C0_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8184;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33C0_case_default
        }
    }
}
// fun_3A00
fun_3A00() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_3C10(var_16, var_8)
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
    OP_JZER lab_3BF8
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_3BF8
    pri = 0;
    return pri;
}
// fun_3C10
fun_3C10() {
    var_8 = arg_1;
    var_16 = 8568;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_06F0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_3C58
fun_3C58() {
    pri = 8672;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_3CE0
// lab_3CE0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_3E60
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_3E50
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_3DA0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_3DA0
    pri = 0;
    OP_JUMP lab_3DA8
// lab_3E60
    pri = 0;
    return pri;
// lab_3E50
    OP_JUMP lab_3CD8
// lab_3CD8
    OP_INC_P_S -936
// lab_3DA0
    pri = 1;
// lab_3DA8
    OP_JZER lab_3E20
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_3E18
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_3E20
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_3E18
}
// fun_3E80
fun_3E80() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_3F18
    var_8 = 1;
    var_16 = 0;
    var_24 = 9592;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1090()
// lab_3F18
    pri = arg_4;
    OP_JZER lab_3F50
    var_8 = 1;
    var_16 = 8;
    pri = fun_10B8(var_8)
// lab_3F50
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_3FA8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_3FA8
    pri = 0;
    OP_JUMP lab_3FB0
// lab_3FA8
    pri = 1;
// lab_3FB0
    OP_JZER lab_4078
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_4078
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_4050
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_0FD0(var_32, var_24)
    OP_JUMP lab_4078
// lab_4078
    pri = arg_2;
    OP_JZER lab_4150
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_4120
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0CC0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0490(var_40)
    OP_JUMP lab_4150
// lab_4150
    pri = arg_3;
    OP_JZER lab_4188
    var_8 = 1;
    var_16 = 8;
    pri = fun_1058(var_8)
// lab_4188
    pri = 0;
    return pri;
// lab_4120
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0CC0(var_16, var_8)
// lab_4050
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0FD0(var_16, var_8)
}
// fun_4198
fun_4198() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_3C58(var_24)
    pri = 0;
    return pri;
}
// fun_4200
fun_4200() {
    pri = g_mode;
    switch (pri) {
// switch_42E8
        case default:
        {
// switch_42E8_case_default
            pri = CommandNOP()
            OP_JUMP lab_4340
// lab_4340
            pri = 0;
            return pri;
        }
        case 0xbfb82a221ea6d341:
        {
// switch_42E8_case_0xbfb82a221ea6d341
            var_8 = 0;
            pri = fun_5218()
            OP_JUMP lab_4340
        }
        case 0xc007fc829733916e:
        {
// switch_42E8_case_0xc007fc829733916e
            var_8 = 0;
            pri = fun_5350()
            OP_JUMP lab_4340
        }
        case 0x0:
        {
// switch_42E8_case_0x0
            var_8 = 0;
            pri = fun_4350()
            OP_JUMP lab_4340
        }
        case 0x5d94781e6de4e0a5:
        {
// switch_42E8_case_0x5d94781e6de4e0a5
            var_8 = 0;
            pri = fun_5308()
            OP_JUMP lab_4340
        }
    }
}
// fun_4350
fun_4350() {
    pri = 0;
    return pri;
}
// fun_4368
fun_4368() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_3E80(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_43C0
fun_43C0() {
    pri = 0;
    return pri;
}
// fun_43D8
fun_43D8() {
    pri = 0;
    return pri;
}
// fun_43F0
fun_43F0() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 9640;
    pri = SoundPostEvent(var_24)
    var_32 = 0;
    var_40 = 4630938906834396774;
    var_48 = 0;
    OP_PUSH5_C 4658101659901393633, 4635813349743583560, 4661319138787521987, 4659167944287778243, 4638761448280906793
    var_56 = 4661403856158442127;
    var_64 = 1;
    pri = EvCameraMove(var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_72 = 0;
    pri = fun_1D90()
    var_80 = 0;
    var_88 = 4630938906834396774;
    var_96 = 3;
    OP_PUSH5_C 4658089477312557875, 4639531282342210437, 4661318171217289544, 4659155761698942484, 4641031895811799122
    var_104 = 4661402888588209684;
    var_112 = 100;
    pri = EvCameraMove(var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_120 = 1;
    var_128 = 1;
    OP_PUSH4_C -4583320377649371546, 4659539843100757197, 4661492245898199040, 8802641224559852288
    var_136 = 48;
    pri = fun_0438(var_128, var_120, var_112, var_104, var_96, var_88)
    var_144 = 70;
    var_152 = 8;
    pri = fun_0060(var_144)
    var_160 = 7578286301365252433;
    var_168 = 8;
    pri = fun_0590(var_160)
    var_176 = 1;
    var_184 = -1;
    var_192 = -1;
    var_200 = 3;
    var_208 = 0;
    var_216 = 10;
    var_224 = 7578286301365252433;
    var_232 = 56;
    pri = fun_1E20(var_224, var_216, var_208, var_200, var_192, var_184, var_176)
    var_240 = 7578286301365252433;
    var_248 = 8;
    pri = fun_0768(var_240)
    var_256 = 0;
    var_264 = 3;
    var_272 = 0;
    var_280 = 100;
    var_288 = -1;
    OP_PUSH2_C -7757368412480300514, 7578286301365252433
    var_296 = 56;
    pri = fun_1900(var_288, var_280, var_272, var_264, var_256, var_248, var_240)
    var_304 = 1;
    var_312 = 8;
    pri = fun_1A48(var_304)
    var_320 = 0;
    pri = fun_1B08()
    var_328 = 0;
    var_336 = 4631952216750555136;
    var_344 = 0;
    OP_PUSH5_C 4658916947773389537, 4639001053854831739, 4661404131036349071, 4659943737702104433, 4638615433136738140
    var_352 = 4661282569030782157;
    var_360 = 1;
    pri = EvCameraMove(var_360, var_352, var_344, var_336, var_328, var_320, var_312, var_304, var_296, var_288)
    var_368 = 0;
    pri = fun_1D90()
    var_376 = 0;
    var_384 = 4631952216750555136;
    var_392 = 0;
    OP_PUSH5_C 4658961082170128466, 4639001053854831739, 4661497336637035643, 4659987894089075917, 4638615433136738140
    var_400 = 4661375774631468728;
    var_408 = 250;
    pri = EvCameraMove(var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336)
    var_416 = 0;
    var_424 = 3;
    var_432 = 0;
    var_440 = 100;
    var_448 = -1;
    OP_PUSH2_C -7757369511991928725, 7578286301365252433
    var_456 = 56;
    pri = fun_1900(var_448, var_440, var_432, var_424, var_416, var_408, var_400)
    var_464 = 1;
    var_472 = 8;
    pri = fun_1A48(var_464)
    var_480 = 0;
    pri = fun_1B08()
    var_488 = 30;
    var_496 = 8;
    pri = fun_0060(var_488)
    var_504 = 0;
    var_512 = 4631952216750555136;
    var_520 = 0;
    OP_PUSH5_C 4658913121472924877, 4640728606524393390, 4661391354711234314, 4659219731285446492, 4640626923689056666
    var_528 = 4661355059832401428;
    var_536 = 1;
    pri = EvCameraMove(var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    var_544 = 0;
    pri = fun_1D90()
    var_552 = 2;
    var_560 = 6;
    var_568 = 7578286301365252433;
    var_576 = 24;
    pri = fun_0D80(var_568, var_560, var_552)
    OP_PUSH2_C -4599357414447461171, 4631952216750555136
    var_584 = 3;
    OP_PUSH5_C 4658913121472924877, 4640728606524393390, 4661391354711234314, 4659107383187320340, 4640664219123470828
    var_592 = 4661368363923097518;
    var_600 = 7;
    pri = EvCameraMove(var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544, var_536, var_528)
    var_608 = 0;
    pri = fun_1D90()
    var_616 = 0;
    var_624 = 3;
    var_632 = 0;
    var_640 = 100;
    var_648 = -1;
    OP_PUSH2_C -7757370611503556936, 7578286301365252433
    var_656 = 56;
    pri = fun_1900(var_648, var_640, var_632, var_624, var_616, var_608, var_600)
    var_664 = 1;
    var_672 = 8;
    pri = fun_1A48(var_664)
    var_680 = 0;
    pri = fun_1B08()
    var_688 = 29;
    var_696 = 0;
    var_704 = 0;
    var_712 = 0;
    var_720 = 195;
    var_728 = 40;
    pri = fun_1B38(var_720, var_712, var_704, var_696, var_688)
    var_736 = 0;
    pri = fun_1C50()
    OP_JZER lab_4B50
    var_744 = 0;
    pri = fun_1D40()
// lab_4B50
    var_8 = 0;
    var_16 = 4631952216750555136;
    var_24 = 0;
    OP_PUSH5_C 4658789470395265188, 4637978596001930281, 4661511421380987453, 4659821823852816630, 4640209285192362230
    var_32 = 4661418457672858993;
    var_40 = 1;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 0;
    pri = fun_1D90()
    var_56 = 3;
    var_64 = 1;
    var_72 = 7578286301365252433;
    var_80 = 24;
    pri = fun_0D80(var_72, var_64, var_56)
    var_88 = 15;
    var_96 = 8;
    pri = fun_0060(var_88)
    var_104 = 9800;
    var_112 = 8;
    var_120 = 16;
    pri = fun_0280(var_112, var_104)
    var_128 = 0;
    pri = fun_0350()
    var_136 = 1;
    var_144 = -1;
    var_152 = -1;
    var_160 = 3;
    var_168 = 0;
    var_176 = 10;
    var_184 = 7578286301365252433;
    var_192 = 56;
    pri = fun_1E20(var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_200 = 0;
    var_208 = 3;
    var_216 = 0;
    var_224 = 100;
    var_232 = -1;
    OP_PUSH2_C -7757362914922159459, 7578286301365252433
    var_240 = 56;
    pri = fun_1900(var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_248 = 1;
    var_256 = 8;
    pri = fun_1A48(var_248)
    var_264 = 0;
    pri = fun_1B08()
    var_272 = 7578286301365252433;
    var_280 = 8;
    pri = fun_0768(var_272)
    var_288 = 0;
    var_296 = 3;
    var_304 = 0;
    var_312 = 100;
    var_320 = -1;
    OP_PUSH2_C -7757364014433787670, 7578286301365252433
    var_328 = 56;
    pri = fun_1900(var_320, var_312, var_304, var_296, var_288, var_280, var_272)
    var_336 = 1;
    var_344 = 8;
    pri = fun_1A48(var_336)
    var_352 = 0;
    pri = fun_1B08()
    var_360 = 0;
    var_368 = 3;
    var_376 = 0;
    var_384 = 100;
    var_392 = -1;
    OP_PUSH2_C -7757365113945415881, 7578286301365252433
    var_400 = 56;
    pri = fun_1900(var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_408 = 1;
    var_416 = 8;
    pri = fun_1A48(var_408)
    var_424 = 0;
    pri = fun_1B08()
    var_432 = 1;
    var_440 = 0;
    var_448 = 4641240890982006784;
    var_456 = 0;
    var_464 = 0;
    OP_PUSH4_C 4657931477491646464, 4661144690272659046, 4607182418800017408, 7578286301365252433
    var_472 = 72;
    pri = fun_04C8(var_464, var_456, var_448, var_440, var_432, var_424, var_416, var_408, var_400)
    var_480 = 80;
    var_488 = 8;
    pri = fun_0060(var_480)
    var_496 = 1;
    var_504 = 0;
    var_512 = 9592;
    var_520 = 8;
    var_528 = 32;
    pri = fun_02E0(var_520, var_512, var_504, var_496)
    var_536 = 0;
    pri = fun_0350()
    var_544 = 9848;
    pri = SoundPostEvent(var_544)
    var_552 = 7578286301365252433;
    var_560 = 8;
    pri = fun_0590(var_552)
    var_568 = 3;
    var_576 = 1;
    pri = EvCameraEnd(var_576, var_568)
    pri = 0;
    return pri;
}
// fun_5010
fun_5010() {
    pri = 0;
    return pri;
}
// fun_5028
fun_5028() {
    var_8 = 7578286301365252433;
    var_16 = 8;
    pri = fun_0408(var_8)
    var_24 = 550;
    var_32 = 8;
    pri = fun_4198(var_24)
    var_40 = -3179587887033667580;
    pri = VanishFlagReset(var_40)
    var_48 = -250553440047947672;
    pri = VanishFlagReset(var_48)
    var_56 = -6122690397587844693;
    pri = VanishFlagSet(var_56)
    var_64 = -8841775824226766142;
    pri = VanishFlagSet(var_64)
    var_72 = 6881706800470684488;
    pri = VanishFlagSet(var_72)
    var_80 = 2644627691611413877;
    pri = VanishFlagSet(var_80)
    var_88 = -6557259471282967436;
    pri = FlagSet(var_88)
    pri = 0;
    return pri;
}
// fun_51A0
fun_51A0() {
    var_8 = 15;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 9800;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0280(var_32, var_24)
    var_48 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_5218
fun_5218() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_4368()
    var_16 = 0;
    pri = fun_43C0()
    var_24 = 0;
    pri = fun_43D8()
    var_32 = 0;
    pri = fun_43F0()
    var_40 = 0;
    pri = fun_5010()
    var_48 = 0;
    pri = fun_5028()
    var_56 = 0;
    pri = fun_51A0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_5308
fun_5308() {
    var_8 = 0;
    pri = fun_43C0()
    var_16 = 0;
    pri = fun_5028()
    pri = 0;
    return pri;
}
// fun_5350
fun_5350() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_3E80(var_40, var_32, var_24, var_16, var_8)
    pri = EvCameraStart()
    var_56 = 0;
    var_64 = 4631952216750555136;
    var_72 = 0;
    OP_PUSH5_C 4658816188527820145, 4637467718919200440, 4661378886249375334, 4659666682762137436, 4639670612455682212
    var_80 = 4661403746207279350;
    var_88 = 1;
    pri = EvCameraMove(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_96 = 0;
    pri = fun_1D90()
    var_104 = 0;
    var_112 = 4631952216750555136;
    var_120 = 0;
    OP_PUSH5_C 4658528314393435832, 4638689320318124687, 4661370463990306570, 4659378808627753124, 4640281413155144335
    var_128 = 4661395334943326863;
    var_136 = 200;
    pri = EvCameraMove(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_144 = 0;
    var_152 = 0;
    var_160 = 0;
    var_168 = 20;
    pri = float(var_168)
    var_176 = pri;
    var_184 = 7578286301365252433;
    var_192 = 40;
    pri = fun_0540(var_184, var_176, var_168, var_160, var_152)
    var_200 = 7578286301365252433;
    var_208 = 8;
    pri = fun_0590(var_200)
    var_216 = 30;
    var_224 = 8;
    pri = fun_0060(var_216)
    var_232 = 0;
    var_240 = 1;
    var_248 = 7578286301365252433;
    var_256 = 24;
    pri = fun_3A00(var_248, var_240, var_232)
    var_264 = 1;
    var_272 = 8;
    pri = fun_0060(var_264)
    var_280 = 7578286301365252433;
    var_288 = 8;
    pri = fun_0768(var_280)
    var_296 = 50;
    var_304 = 8;
    pri = fun_0060(var_296)
    var_312 = 1;
    var_320 = 1;
    OP_PUSH4_C -4583320377649371546, 4661503350965639578, 4661844309521412915, 8802641224559852288
    var_328 = 48;
    pri = fun_0438(var_320, var_312, var_304, var_296, var_288, var_280)
    var_336 = 0;
    var_344 = 4631952216750555136;
    var_352 = 0;
    OP_PUSH5_C 4660987833943840522, 4636338300575148933, 4661661647654690488, 4661520679268893327, 4640366911179320197
    var_360 = 4661729872351193989;
    var_368 = 1;
    pri = EvCameraMove(var_368, var_360, var_352, var_344, var_336, var_328, var_320, var_312, var_304, var_296)
    var_376 = 0;
    pri = fun_1D90()
    var_384 = 0;
    var_392 = 4631952216750555136;
    var_400 = 0;
    OP_PUSH5_C 4660959664455936901, 4636338300575148933, 4661747112693517517, 4661506594524941517, 4640366911179320197
    var_408 = 4661815337390021018;
    var_416 = 200;
    pri = EvCameraMove(var_416, var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_424 = 1;
    var_432 = 0;
    var_440 = 4641240890982006784;
    var_448 = 0;
    var_456 = 0;
    OP_PUSH4_C 4661302140337756570, 4661801428567929651, 4607182418800017408, 8802641224559852288
    var_464 = 72;
    pri = fun_04C8(var_456, var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392)
    var_472 = 0;
    var_480 = 3;
    var_488 = 0;
    var_496 = 100;
    var_504 = -1;
    OP_PUSH2_C -8387177450258112349, 7578286301365252433
    var_512 = 56;
    pri = fun_1900(var_504, var_496, var_488, var_480, var_472, var_464, var_456)
    var_520 = 1;
    var_528 = 8;
    pri = fun_1A48(var_520)
    var_536 = 0;
    pri = fun_1B08()
    var_544 = 8802641224559852288;
    var_552 = 8;
    pri = fun_0590(var_544)
    var_560 = 3;
    var_568 = 30;
    pri = EvCameraEnd(var_568, var_560)
    var_576 = 545;
    var_584 = 8;
    pri = fun_4198(var_576)
    pri = 0;
    return pri;
}
