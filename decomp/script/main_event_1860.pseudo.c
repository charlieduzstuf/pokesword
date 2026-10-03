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
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_06B0
fun_06B0() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_06E8
fun_06E8() {
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
// fun_0760
fun_0760() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartForceMoveFrame_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07B8
fun_07B8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0808
fun_0808() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0860
fun_0860() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F98(var_8)
    OP_JZER lab_08D8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0FC8(var_24)
    OP_JNZ lab_08D8
    pri = 0;
    return pri;
// lab_08D8
    OP_JUMP lab_08E8
// lab_08E8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0948
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0948
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_08E8
    pri = 0;
    return pri;
}
// fun_0988
fun_0988() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_09C8
fun_09C8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0A00
fun_0A00() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0A48
    pri = 0;
    return pri;
// lab_0A48
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0A88
// lab_0A88
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F98(var_8)
    OP_JNZ lab_0B10
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0B00
    pri = 0;
    return pri;
// lab_0B10
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0B58
    pri = 0;
    return pri;
// lab_0B58
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0BB8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C00(var_8)
    pri = 0;
    return pri;
// lab_0BB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A88
    pri = 0;
    return pri;
// lab_0B00
    OP_JUMP lab_0B58
}
// fun_0C00
fun_0C00() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0C38
fun_0C38() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0C88
    pri = 0;
    return pri;
// lab_0C88
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F98(var_8)
    OP_JZER lab_0DB8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0CE0
    OP_ZERO_P_S 64
// lab_0DB8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DF0
    OP_CONST_S 64, 1
// lab_0DF0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E28
    OP_CONST_S 72, 1
// lab_0E28
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
// lab_0CE0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D08
    OP_ZERO_P_S 72
// lab_0D08
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
    OP_JUMP lab_0EC8
// lab_0EC8
    pri = 0;
    return pri;
}
// fun_0ED8
fun_0ED8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F18
fun_0F18() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F58
fun_0F58() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F98
fun_0F98() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0FC8
fun_0FC8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0FF8
fun_0FF8() {
    OP_JUMP lab_1010
// lab_1010
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_10A0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1090
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A00(var_8)
    pri = 0;
    return pri;
// lab_10A0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1130
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1120
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A00(var_8)
    pri = 0;
    return pri;
// lab_1130
    pri = 0;
    return pri;
// lab_1120
    OP_JUMP lab_1140
// lab_1140
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1010
    pri = 0;
    return pri;
// lab_1090
    OP_JUMP lab_1140
}
// fun_1180
fun_1180() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A00(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0FF8(var_40)
    pri = 0;
    return pri;
}
// fun_1208
fun_1208() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1240
fun_1240() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1268
fun_1268() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_12A0
fun_12A0() {
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
// switch_18B8
        case default:
        {
// switch_18B8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1900
// lab_1900
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
            OP_JNZ lab_19A8
            var_88 = 0;
            pri = fun_1B60()
// lab_19A8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_18B8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_14A0
                case default:
                {
// switch_14A0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1518
// lab_1518
                    OP_JUMP lab_1900
                }
                case 0x0:
                {
// switch_14A0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1518
                }
                case 0x1:
                {
// switch_14A0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1518
                }
                case 0x2:
                {
// switch_14A0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1518
                }
                case 0x3:
                {
// switch_14A0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1518
                }
                case 0x4:
                {
// switch_14A0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1518
                }
                case 0x5:
                {
// switch_14A0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1518
                }
            }
        }
        case 0x65:
        {
// switch_18B8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1658
                case default:
                {
// switch_1658_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_16D0
// lab_16D0
                    OP_JUMP lab_1900
                }
                case 0x0:
                {
// switch_1658_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_16D0
                }
                case 0x1:
                {
// switch_1658_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_16D0
                }
                case 0x2:
                {
// switch_1658_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_16D0
                }
                case 0x3:
                {
// switch_1658_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_16D0
                }
                case 0x4:
                {
// switch_1658_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_16D0
                }
                case 0x5:
                {
// switch_1658_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_16D0
                }
            }
        }
        case 0x66:
        {
// switch_18B8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1810
                case default:
                {
// switch_1810_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1888
// lab_1888
                    OP_JUMP lab_1900
                }
                case 0x0:
                {
// switch_1810_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1888
                }
                case 0x1:
                {
// switch_1810_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1888
                }
                case 0x2:
                {
// switch_1810_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1888
                }
                case 0x3:
                {
// switch_1810_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1888
                }
                case 0x4:
                {
// switch_1810_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1888
                }
                case 0x5:
                {
// switch_1810_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1888
                }
            }
        }
    }
}
// fun_19C0
fun_19C0() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_09C8(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1A68
    pri = 1;
    return pri;
// lab_1A68
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1AB0
fun_1AB0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1B00
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_19C0(var_8)
    arg_2 = pri;
// lab_1B00
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_12A0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B60
fun_1B60() {
    OP_JUMP lab_1B78
// lab_1B78
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1BB8
    pri = 0;
    return pri;
// lab_1BB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1B78
    pri = 0;
    return pri;
}
// fun_1BF8
fun_1BF8() {
    var_8 = 0;
    pri = fun_1B60()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1CA8
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1CA8
    pri = 0;
    return pri;
}
// fun_1CB8
fun_1CB8() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1CE8
fun_1CE8() {
    OP_JUMP lab_1D00
// lab_1D00
    pri = EvCameraMoveWait_()
    OP_JZER lab_1D38
    pri = 0;
    return pri;
// lab_1D38
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1D00
    pri = 0;
    return pri;
}
// fun_1D78
fun_1D78() {
    pri = arg_5;
    OP_JNZ lab_1DB0
    var_8 = 0;
    pri = fun_0ED8()
// lab_1DB0
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_1E00
    OP_CONST_S -8, -1
// lab_1E00
    pri = arg_1;
    switch (pri) {
// switch_38B8
        case default:
        {
// switch_38B8_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_3D60
            var_520 = 20392;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_09C8(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_3D60
            pri = 1;
            OP_JUMP lab_3D68
// lab_3D60
            pri = 0;
// lab_3D68
            OP_JZER lab_3DB8
            var_8 = 64;
            var_16 = 20488;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_4010
// lab_3DB8
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3E20
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3E20
            pri = 1;
            OP_JUMP lab_3E28
// lab_3E20
            pri = 0;
// lab_3E28
            OP_JZER lab_3FB0
            var_16 = 20664;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_09C8(var_24, var_16)
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
            var_176 = 20768;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 20784;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_4010
// lab_3FB0
            var_8 = 64;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_4010
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_4080
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_4080
            var_8 = 0;
            pri = fun_0F18()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_38B8_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x1:
        {
// switch_38B8_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x2:
        {
// switch_38B8_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x3:
        {
// switch_38B8_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x4:
        {
// switch_38B8_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x5:
        {
// switch_38B8_case_0x5
            var_8 = 2;
            var_16 = 10648;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0988(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C00(var_40)
            OP_JUMP switch_38B8_case_default
        }
        case 0x6:
        {
// switch_38B8_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x7:
        {
// switch_38B8_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x8:
        {
// switch_38B8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x9:
        {
// switch_38B8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0xa:
        {
// switch_38B8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0xb:
        {
// switch_38B8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0xc:
        {
// switch_38B8_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0xd:
        {
// switch_38B8_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 11296;
            var_72 = 11120;
            var_80 = 10936;
            var_88 = 10744;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38B8_case_default
        }
        case 0xe:
        {
// switch_38B8_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 11952;
            var_72 = 11744;
            var_80 = 11528;
            var_88 = 11304;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38B8_case_default
        }
        case 0xf:
        {
// switch_38B8_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12344;
            var_72 = 12224;
            var_80 = 12096;
            var_88 = 11960;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38B8_case_default
        }
        case 0x10:
        {
// switch_38B8_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12688;
            var_72 = 12584;
            var_80 = 12472;
            var_88 = 12352;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38B8_case_default
        }
        case 0x11:
        {
// switch_38B8_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13032;
            var_72 = 12928;
            var_80 = 12816;
            var_88 = 12696;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38B8_case_default
        }
        case 0x12:
        {
// switch_38B8_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x13:
        {
// switch_38B8_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x14:
        {
// switch_38B8_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13592;
            var_72 = 13416;
            var_80 = 13232;
            var_88 = 13040;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38B8_case_default
        }
        case 0x15:
        {
// switch_38B8_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x16:
        {
// switch_38B8_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x17:
        {
// switch_38B8_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x18:
        {
// switch_38B8_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x19:
        {
// switch_38B8_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x1a:
        {
// switch_38B8_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x1b:
        {
// switch_38B8_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x1c:
        {
// switch_38B8_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 13984;
            var_72 = 13864;
            var_80 = 13736;
            var_88 = 13600;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38B8_case_default
        }
        case 0x1d:
        {
// switch_38B8_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x1e:
        {
// switch_38B8_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 14448;
            var_72 = 14304;
            var_80 = 14152;
            var_88 = 13992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38B8_case_default
        }
        case 0x1f:
        {
// switch_38B8_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x20:
        {
// switch_38B8_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x21:
        {
// switch_38B8_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x22:
        {
// switch_38B8_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x23:
        {
// switch_38B8_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x24:
        {
// switch_38B8_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 14816;
            var_72 = 14704;
            var_80 = 14584;
            var_88 = 14456;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38B8_case_default
        }
        case 0x25:
        {
// switch_38B8_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15184;
            var_72 = 15072;
            var_80 = 14952;
            var_88 = 14824;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38B8_case_default
        }
        case 0x26:
        {
// switch_38B8_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x27:
        {
// switch_38B8_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x28:
        {
// switch_38B8_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x29:
        {
// switch_38B8_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15624;
            var_72 = 15488;
            var_80 = 15344;
            var_88 = 15192;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38B8_case_default
        }
        case 0x2a:
        {
// switch_38B8_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16016;
            var_72 = 15896;
            var_80 = 15768;
            var_88 = 15632;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38B8_case_default
        }
        case 0x2b:
        {
// switch_38B8_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16432;
            var_72 = 16304;
            var_80 = 16168;
            var_88 = 16024;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38B8_case_default
        }
        case 0x2c:
        {
// switch_38B8_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16872;
            var_72 = 16736;
            var_80 = 16592;
            var_88 = 16440;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38B8_case_default
        }
        case 0x2d:
        {
// switch_38B8_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x2e:
        {
// switch_38B8_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17192;
            var_72 = 17096;
            var_80 = 16992;
            var_88 = 16880;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38B8_case_default
        }
        case 0x2f:
        {
// switch_38B8_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17584;
            var_72 = 17464;
            var_80 = 17336;
            var_88 = 17200;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38B8_case_default
        }
        case 0x30:
        {
// switch_38B8_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17976;
            var_72 = 17856;
            var_80 = 17728;
            var_88 = 17592;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38B8_case_default
        }
        case 0x31:
        {
// switch_38B8_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x32:
        {
// switch_38B8_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x33:
        {
// switch_38B8_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18368;
            var_72 = 18248;
            var_80 = 18120;
            var_88 = 17984;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38B8_case_default
        }
        case 0x34:
        {
// switch_38B8_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18736;
            var_72 = 18624;
            var_80 = 18504;
            var_88 = 18376;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38B8_case_default
        }
        case 0x35:
        {
// switch_38B8_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19224;
            var_72 = 19072;
            var_80 = 18912;
            var_88 = 18744;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38B8_case_default
        }
        case 0x36:
        {
// switch_38B8_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19592;
            var_72 = 19480;
            var_80 = 19360;
            var_88 = 19232;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38B8_case_default
        }
        case 0x37:
        {
// switch_38B8_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x38:
        {
// switch_38B8_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19960;
            var_72 = 19848;
            var_80 = 19728;
            var_88 = 19600;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38B8_case_default
        }
        case 0x39:
        {
// switch_38B8_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x3a:
        {
// switch_38B8_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x3b:
        {
// switch_38B8_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x3c:
        {
// switch_38B8_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19968;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x3d:
        {
// switch_38B8_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20144;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
        case 0x3e:
        {
// switch_38B8_case_0x3e
            var_8 = 4;
            var_16 = 20288;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0988(var_24, var_16, var_8)
            OP_JUMP switch_38B8_case_default
        }
    }
}
// fun_40B0
fun_40B0() {
    pri = arg_4;
    OP_JNZ lab_40E8
    var_8 = 0;
    pri = fun_0ED8()
// lab_40E8
    pri = arg_1;
    switch (pri) {
// switch_54C0
        case default:
        {
// switch_54C0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21360;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0F98(var_264)
            OP_JZER lab_5A88
            pri = arg_3;
            switch (pri) {
// switch_5A30
                case default:
                {
// switch_5A30_case_default
                    OP_JUMP lab_5D40
// lab_5D40
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_5DB0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_5DB0
                    var_8 = 0;
                    pri = fun_0F18()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_5A30_case_0x1
                    var_8 = 32;
                    var_16 = 21512;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5A30_case_default
                }
                case 0x2:
                {
// switch_5A30_case_0x2
                    var_8 = 32;
                    var_16 = 21616;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5A30_case_default
                }
                case 0x3:
                {
// switch_5A30_case_0x3
                    var_8 = 32;
                    var_16 = 21416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5A30_case_default
                }
            }
// lab_5A88
            pri = arg_1;
            OP_JZER lab_5AD8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_5AD8
            pri = 0;
            OP_JUMP lab_5AE0
// lab_5AD8
            pri = 1;
// lab_5AE0
            OP_JZER lab_5B48
            var_8 = 21712;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_09C8(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5B48
            pri = 1;
            OP_JUMP lab_5B50
// lab_5B48
            pri = 0;
// lab_5B50
            OP_JZER lab_5BA0
            var_8 = 32;
            var_16 = 21808;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5D40
// lab_5BA0
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_5C08
            var_8 = 32;
            var_16 = 21968;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5D40
// lab_5C08
            var_16 = 22088;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_09C8(var_24, var_16)
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
            var_176 = 22192;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 22208;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_54C0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x1:
        {
// switch_54C0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x2:
        {
// switch_54C0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x3:
        {
// switch_54C0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x4:
        {
// switch_54C0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x5:
        {
// switch_54C0_case_0x5
            var_8 = 1;
            var_16 = 20840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0988(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C00(var_40)
            OP_JUMP switch_54C0_case_default
        }
        case 0x6:
        {
// switch_54C0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x7:
        {
// switch_54C0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x8:
        {
// switch_54C0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x9:
        {
// switch_54C0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0xa:
        {
// switch_54C0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0xb:
        {
// switch_54C0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0xc:
        {
// switch_54C0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0xd:
        {
// switch_54C0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0xe:
        {
// switch_54C0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0xf:
        {
// switch_54C0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x10:
        {
// switch_54C0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x11:
        {
// switch_54C0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x12:
        {
// switch_54C0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x13:
        {
// switch_54C0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x14:
        {
// switch_54C0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x15:
        {
// switch_54C0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x16:
        {
// switch_54C0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x17:
        {
// switch_54C0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x18:
        {
// switch_54C0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x19:
        {
// switch_54C0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x1a:
        {
// switch_54C0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x1b:
        {
// switch_54C0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x1c:
        {
// switch_54C0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x1d:
        {
// switch_54C0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x1e:
        {
// switch_54C0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x1f:
        {
// switch_54C0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x20:
        {
// switch_54C0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x21:
        {
// switch_54C0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x22:
        {
// switch_54C0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x23:
        {
// switch_54C0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x24:
        {
// switch_54C0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x25:
        {
// switch_54C0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x26:
        {
// switch_54C0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x27:
        {
// switch_54C0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x28:
        {
// switch_54C0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x29:
        {
// switch_54C0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x2a:
        {
// switch_54C0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x2b:
        {
// switch_54C0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x2c:
        {
// switch_54C0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x2d:
        {
// switch_54C0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x2e:
        {
// switch_54C0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x2f:
        {
// switch_54C0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x30:
        {
// switch_54C0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x31:
        {
// switch_54C0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x32:
        {
// switch_54C0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x33:
        {
// switch_54C0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x34:
        {
// switch_54C0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x35:
        {
// switch_54C0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x36:
        {
// switch_54C0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x37:
        {
// switch_54C0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x38:
        {
// switch_54C0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x39:
        {
// switch_54C0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x3a:
        {
// switch_54C0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x3b:
        {
// switch_54C0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x3c:
        {
// switch_54C0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20936;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x3d:
        {
// switch_54C0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21112;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
        case 0x3e:
        {
// switch_54C0_case_0x3e
            var_8 = 3;
            var_16 = 21256;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0988(var_24, var_16, var_8)
            OP_JUMP switch_54C0_case_default
        }
    }
}
// fun_5DE0
fun_5DE0() {
    pri = 22256;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_5E68
// lab_5E68
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_5FE8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_5FD8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_5F28
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_5F28
    pri = 0;
    OP_JUMP lab_5F30
// lab_5FE8
    pri = 0;
    return pri;
// lab_5FD8
    OP_JUMP lab_5E60
// lab_5E60
    OP_INC_P_S -936
// lab_5F28
    pri = 1;
// lab_5F30
    OP_JZER lab_5FA8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_5FA0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_5FA8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_5FA0
}
// fun_6008
fun_6008() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_60A0
    var_8 = 1;
    var_16 = 0;
    var_24 = 23176;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1240()
// lab_60A0
    pri = arg_4;
    OP_JZER lab_60D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1268(var_8)
// lab_60D8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_6130
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_6130
    pri = 0;
    OP_JUMP lab_6138
// lab_6130
    pri = 1;
// lab_6138
    OP_JZER lab_6200
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_6200
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_61D8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1180(var_32, var_24)
    OP_JUMP lab_6200
// lab_6200
    pri = arg_2;
    OP_JZER lab_62D8
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_62A8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0F58(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_06B0(var_40)
    OP_JUMP lab_62D8
// lab_62D8
    pri = arg_3;
    OP_JZER lab_6310
    var_8 = 1;
    var_16 = 8;
    pri = fun_1208(var_8)
// lab_6310
    pri = 0;
    return pri;
// lab_62A8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0F58(var_16, var_8)
// lab_61D8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1180(var_16, var_8)
}
// fun_6320
fun_6320() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_5DE0(var_24)
    pri = 0;
    return pri;
}
// fun_6388
fun_6388() {
    pri = g_mode;
    switch (pri) {
// switch_6448
        case default:
        {
// switch_6448_case_default
            pri = CommandNOP()
            OP_JUMP lab_6490
// lab_6490
            pri = 0;
            return pri;
        }
        case 0xe6fbb1274830842d:
        {
// switch_6448_case_0xe6fbb1274830842d
            var_8 = 0;
            pri = fun_7C40()
            OP_JUMP lab_6490
        }
        case 0x0:
        {
// switch_6448_case_0x0
            var_8 = 0;
            pri = fun_64A0()
            OP_JUMP lab_6490
        }
        case 0x4ac8b2ad26a7231:
        {
// switch_6448_case_0x4ac8b2ad26a7231
            var_8 = 0;
            pri = fun_7B50()
            OP_JUMP lab_6490
        }
    }
}
// fun_64A0
fun_64A0() {
    pri = 0;
    return pri;
}
// fun_64B8
fun_64B8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_6008(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6510
fun_6510() {
    var_8 = 320142966542498375;
    var_16 = 8;
    pri = fun_0408(var_8)
    pri = 0;
    return pri;
}
// fun_6550
fun_6550() {
    var_8 = 0;
    pri = fun_0438()
    pri = 0;
    return pri;
}
// fun_6580
fun_6580() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0670(var_16, var_8)
    var_32 = 1;
    var_40 = -5661906939330003973;
    var_48 = 16;
    pri = fun_0670(var_40, var_32)
    var_56 = 1;
    var_64 = 1;
    OP_PUSH4_C 4639129828656676864, 4666117891316252672, 4661115663165685760, 320142966542498375
    var_72 = 48;
    pri = fun_05E0(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 0;
    var_88 = 320142966542498375;
    var_96 = 16;
    pri = fun_0638(var_88, var_80)
    var_104 = 1;
    var_112 = 8;
    pri = fun_0060(var_104)
    var_120 = 23224;
    var_128 = 8;
    var_136 = 16;
    pri = fun_0280(var_128, var_120)
    var_144 = 0;
    pri = fun_0350()
    OP_PUSH2_C -9223372036854775808, 4631952216750555136
    var_152 = 0;
    OP_PUSH5_C 4665837983143611597, 4648699801942978724, 4661468111617969357, 4666188661382174474, 4652212785574188155
    var_160 = 4661378336493561446;
    var_168 = 1;
    pri = EvCameraMove(var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_176 = 0;
    pri = fun_1CE8()
    OP_PUSH2_C -9223372036854775808, 4631952216750555136
    var_184 = 2;
    OP_PUSH5_C 4665829275011519611, 4648925861533649469, 4661470343626573742, 4666179953250082488, 4652328586138825523
    var_192 = 4661380557507049554;
    var_200 = 240;
    pri = EvCameraMove(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128)
    var_208 = 1;
    var_216 = 0;
    var_224 = 100;
    pri = float(var_224)
    var_232 = pri;
    var_240 = 0;
    pri = float(var_240)
    var_248 = pri;
    var_256 = 0;
    OP_PUSH4_C 4665882046072094720, 4661482900049362944, 4611686018427387904, -5661906939330003973
    var_264 = 72;
    pri = fun_06E8(var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_272 = 15;
    var_280 = 8;
    pri = fun_0060(var_272)
    var_288 = 0;
    var_296 = 3;
    var_304 = 2;
    var_312 = 100;
    var_320 = -1;
    OP_PUSH2_C -2914643043277985402, -5661906939330003973
    var_328 = 56;
    pri = fun_1AB0(var_320, var_312, var_304, var_296, var_288, var_280, var_272)
    var_336 = -5661906939330003973;
    var_344 = 8;
    pri = fun_0860(var_336)
    var_352 = 1;
    var_360 = 1;
    var_368 = -1;
    var_376 = -1;
    var_384 = 0;
    var_392 = 3;
    var_400 = -5661906939330003973;
    var_408 = 56;
    pri = fun_1D78(var_400, var_392, var_384, var_376, var_368, var_360, var_352)
    var_416 = 0;
    pri = fun_1B60()
    var_424 = 1;
    var_432 = 8;
    pri = fun_1BF8(var_424)
    var_440 = 0;
    pri = fun_1CB8()
    var_448 = 1;
    var_456 = 320142966542498375;
    var_464 = 16;
    pri = fun_0638(var_456, var_448)
    OP_PUSH2_C -9223372036854775808, 4629827080676389683
    var_472 = 0;
    OP_PUSH5_C 4665997566261267005, 4649137231648973128, 4661384548734258381, 4665633523458868511, 4651831123097954550
    var_480 = 4661809455002812416;
    var_488 = 1;
    pri = EvCameraMove(var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416)
    var_496 = 0;
    pri = fun_1CE8()
    var_504 = 0;
    var_512 = 3;
    var_520 = 2;
    var_528 = 100;
    var_536 = -1;
    OP_PUSH2_C -6748409198952743822, 320142966542498375
    var_544 = 56;
    pri = fun_1AB0(var_536, var_528, var_520, var_512, var_504, var_496, var_488)
    var_552 = 1;
    var_560 = 3;
    var_568 = 0;
    var_576 = 3;
    var_584 = -5661906939330003973;
    var_592 = 40;
    pri = fun_40B0(var_584, var_576, var_568, var_560, var_552)
    var_600 = 5;
    var_608 = 8;
    pri = fun_0060(var_600)
    var_616 = 0;
    var_624 = 0;
    var_632 = 0;
    var_640 = 0;
    OP_PUSH2_C 320142966542498375, 8802641224559852288
    var_648 = 48;
    pri = fun_0808(var_640, var_632, var_624, var_616, var_608, var_600)
    var_656 = 1;
    var_664 = 8;
    pri = fun_0060(var_656)
    var_672 = -5661906939330003973;
    var_680 = 8;
    pri = fun_0A00(var_672)
    var_688 = 0;
    var_696 = 0;
    var_704 = 0;
    var_712 = 0;
    OP_PUSH2_C 320142966542498375, -5661906939330003973
    var_720 = 48;
    pri = fun_0808(var_712, var_704, var_696, var_688, var_680, var_672)
    var_728 = 0;
    pri = fun_1B60()
    var_736 = 1;
    var_744 = 8;
    pri = fun_1BF8(var_736)
    var_752 = 0;
    pri = fun_1CB8()
    var_760 = 8802641224559852288;
    var_768 = 8;
    pri = fun_0860(var_760)
    var_776 = -5661906939330003973;
    var_784 = 8;
    pri = fun_0860(var_776)
    OP_PUSH2_C -9223372036854775808, 4629827080676389683
    var_792 = 0;
    OP_PUSH5_C 4665900930184301773, 4649174527083387290, 4661626232385159823, 4666162443527410156, 4649802656086103163
    var_800 = 4660739630188986368;
    var_808 = 1;
    pri = EvCameraMove(var_808, var_800, var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736)
    var_816 = 0;
    pri = fun_1CE8()
    OP_PUSH2_C -9223372036854775808, 4629827080676389683
    var_824 = 2;
    OP_PUSH5_C 4665890160467907707, 4649144180562460672, 4661652730615389225, 4666151673811016090, 4649772309565176545
    var_832 = 4660792648639677727;
    var_840 = 240;
    pri = EvCameraMove(var_840, var_832, var_824, var_816, var_808, var_800, var_792, var_784, var_776, var_768)
    var_848 = 0;
    var_856 = 3;
    var_864 = 0;
    var_872 = 100;
    var_880 = -1;
    OP_PUSH2_C -2914644142789613613, -5661906939330003973
    var_888 = 56;
    pri = fun_1AB0(var_880, var_872, var_864, var_856, var_848, var_840, var_832)
    var_896 = 1;
    var_904 = 8;
    pri = fun_1BF8(var_896)
    var_912 = 0;
    pri = fun_1CB8()
    OP_PUSH2_C -9223372036854775808, 4630333735634468864
    var_920 = 0;
    OP_PUSH5_C 4666002591029405942, 4649097297386652303, 4661344196657519002, 4665547684586088038, 4651441544138000957
    var_928 = 4660905502513152655;
    var_936 = 1;
    pri = EvCameraMove(var_936, var_928, var_920, var_912, var_904, var_896, var_888, var_880, var_872, var_864)
    var_944 = 0;
    pri = fun_1CE8()
    OP_PUSH2_C -9223372036854775808, 4630333735634468864
    var_952 = 2;
    OP_PUSH5_C 4665993025278244291, 4649097297386652303, 4661394246426815365, 4665528531093532180, 4651441544138000957
    var_960 = 4661005602051745382;
    var_968 = 240;
    pri = EvCameraMove(var_968, var_960, var_952, var_944, var_936, var_928, var_920, var_912, var_904, var_896)
    var_976 = 1;
    var_984 = 0;
    var_992 = 4641240890982006784;
    var_1000 = 0;
    var_1008 = 0;
    OP_PUSH4_C 4666035427944169472, 4661269594793574400, 4607182418800017408, 320142966542498375
    var_1016 = 72;
    pri = fun_06E8(var_1008, var_1000, var_992, var_984, var_976, var_968, var_960, var_952, var_944)
    var_1024 = 0;
    var_1032 = 3;
    var_1040 = 0;
    var_1048 = 100;
    var_1056 = -1;
    OP_PUSH2_C -6748410298464372033, 320142966542498375
    var_1064 = 56;
    pri = fun_1AB0(var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008)
    var_1072 = 1;
    var_1080 = 8;
    pri = fun_1BF8(var_1072)
    var_1088 = 0;
    pri = fun_1CB8()
    var_1096 = 1;
    var_1104 = 1;
    var_1112 = -1;
    var_1120 = -1;
    var_1128 = 0;
    var_1136 = 6;
    var_1144 = -5661906939330003973;
    var_1152 = 56;
    pri = fun_1D78(var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096)
    var_1160 = 0;
    var_1168 = 3;
    var_1176 = 0;
    var_1184 = 100;
    var_1192 = -1;
    OP_PUSH2_C -2914645242301241824, -5661906939330003973
    var_1200 = 56;
    pri = fun_1AB0(var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144)
    var_1208 = 1;
    var_1216 = 8;
    pri = fun_1BF8(var_1208)
    var_1224 = 0;
    pri = fun_1CB8()
    var_1232 = 1;
    var_1240 = 3;
    var_1248 = 0;
    var_1256 = 6;
    var_1264 = -5661906939330003973;
    var_1272 = 40;
    pri = fun_40B0(var_1264, var_1256, var_1248, var_1240, var_1232)
    OP_PUSH2_C -9223372036854775808, 4630967054332067840
    var_1280 = 0;
    OP_PUSH5_C 4666346309359364997, 4648898065879699292, 4661093343079641907, 4665942079406971290, 4649929495747483402
    var_1288 = 4661313036497987830;
    var_1296 = 1;
    pri = EvCameraMove(var_1296, var_1288, var_1280, var_1272, var_1264, var_1256, var_1248, var_1240, var_1232, var_1224)
    var_1304 = 0;
    pri = fun_1CE8()
    OP_PUSH2_C -9223372036854775808, 4630967054332067840
    var_1312 = 2;
    OP_PUSH5_C 4666356633773549814, 4648897362192257516, 4661085514556852142, 4665952403821156106, 4649928704099111404
    var_1320 = 4661309111241476669;
    var_1328 = 240;
    pri = EvCameraMove(var_1328, var_1320, var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256)
    var_1336 = 0;
    var_1344 = 3;
    var_1352 = 0;
    var_1360 = 100;
    var_1368 = -1;
    OP_PUSH2_C -6748411397976000244, 320142966542498375
    var_1376 = 56;
    pri = fun_1AB0(var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320)
    var_1384 = 1;
    var_1392 = 8;
    pri = fun_1BF8(var_1384)
    var_1400 = 0;
    pri = fun_1CB8()
    var_1408 = 0;
    var_1416 = 4630432251876317594;
    var_1424 = 0;
    OP_PUSH5_C 4665819181494776627, 4649122718095486484, 4661959384408375951, 4666017956704404111, 4649848395769818644
    var_1432 = 4661233091007532237;
    var_1440 = 1;
    pri = EvCameraMove(var_1440, var_1432, var_1424, var_1416, var_1408, var_1400, var_1392, var_1384, var_1376, var_1368)
    var_1448 = 0;
    pri = fun_1CE8()
    var_1456 = 0;
    var_1464 = 4630432251876317594;
    var_1472 = 2;
    OP_PUSH5_C 4665814195209544663, 4649122718095486484, 4661953930830702182, 4666012931936265175, 4649848395769818644
    var_1480 = 4661227604444509635;
    var_1488 = 240;
    pri = EvCameraMove(var_1488, var_1480, var_1472, var_1464, var_1456, var_1448, var_1440, var_1432, var_1424, var_1416)
    var_1496 = 0;
    var_1504 = 3;
    var_1512 = 0;
    var_1520 = 100;
    var_1528 = -1;
    OP_PUSH2_C -2914637545719844347, -5661906939330003973
    var_1536 = 56;
    pri = fun_1AB0(var_1528, var_1520, var_1512, var_1504, var_1496, var_1488, var_1480)
    var_1544 = 1;
    var_1552 = 8;
    pri = fun_1BF8(var_1544)
    var_1560 = 0;
    pri = fun_1CB8()
    var_1568 = 0;
    var_1576 = 0;
    var_1584 = 0;
    var_1592 = 0;
    OP_PUSH2_C 8802641224559852288, -5661906939330003973
    var_1600 = 48;
    pri = fun_0808(var_1592, var_1584, var_1576, var_1568, var_1560, var_1552)
    var_1608 = 0;
    var_1616 = 0;
    var_1624 = 0;
    var_1632 = 0;
    OP_PUSH2_C -5661906939330003973, 8802641224559852288
    var_1640 = 48;
    pri = fun_0808(var_1632, var_1624, var_1616, var_1608, var_1600, var_1592)
    var_1648 = -5661906939330003973;
    var_1656 = 8;
    pri = fun_0860(var_1648)
    var_1664 = 8802641224559852288;
    var_1672 = 8;
    pri = fun_0860(var_1664)
    var_1680 = 0;
    var_1688 = 3;
    var_1696 = 0;
    var_1704 = 100;
    var_1712 = -1;
    OP_PUSH2_C -2914638645231472558, -5661906939330003973
    var_1720 = 56;
    pri = fun_1AB0(var_1712, var_1704, var_1696, var_1688, var_1680, var_1672, var_1664)
    var_1728 = 1;
    var_1736 = 8;
    pri = fun_1BF8(var_1728)
    var_1744 = 0;
    pri = fun_1CB8()
    var_1752 = 0;
    var_1760 = 4631952216750555136;
    var_1768 = 0;
    OP_PUSH5_C 4665890556292093706, 4648943101875972997, 4661448760213320499, 4666275346878908334, 4651450955957534720
    var_1776 = 4661504538438197576;
    var_1784 = 1;
    pri = EvCameraMove(var_1784, var_1776, var_1768, var_1760, var_1752, var_1744, var_1736, var_1728, var_1720, var_1712)
    var_1792 = 0;
    var_1800 = 0;
    var_1808 = 0;
    var_1816 = -175;
    pri = float(var_1816)
    var_1824 = pri;
    var_1832 = -5661906939330003973;
    var_1840 = 40;
    pri = fun_07B8(var_1832, var_1824, var_1816, var_1808, var_1800)
    var_1848 = -5661906939330003973;
    var_1856 = 8;
    pri = fun_0860(var_1848)
    var_1864 = 1;
    var_1872 = 0;
    var_1880 = 0;
    var_1888 = 60;
    OP_PUSH2_C 4611686018427387904, -5661906939330003973
    var_1896 = 48;
    pri = fun_0760(var_1888, var_1880, var_1872, var_1864, var_1856, var_1848)
    var_1904 = 5;
    var_1912 = 8;
    pri = fun_0060(var_1904)
    var_1920 = 0;
    var_1928 = 0;
    var_1936 = 0;
    var_1944 = -175;
    pri = float(var_1944)
    var_1952 = pri;
    var_1960 = 8802641224559852288;
    var_1968 = 40;
    pri = fun_07B8(var_1960, var_1952, var_1944, var_1936, var_1928)
    var_1976 = 25;
    var_1984 = 8;
    pri = fun_0060(var_1976)
    var_1992 = 8802641224559852288;
    var_2000 = 8;
    pri = fun_0860(var_1992)
    var_2008 = 0;
    var_2016 = 8802641224559852288;
    var_2024 = 16;
    pri = fun_0670(var_2016, var_2008)
    var_2032 = 0;
    var_2040 = -5661906939330003973;
    var_2048 = 16;
    pri = fun_0670(var_2040, var_2032)
    var_2056 = 1;
    var_2064 = 0;
    var_2072 = 23176;
    var_2080 = 8;
    var_2088 = 32;
    pri = fun_02E0(var_2080, var_2072, var_2064, var_2056)
    var_2096 = 0;
    pri = fun_0350()
    var_2104 = -5661906939330003973;
    var_2112 = 8;
    pri = fun_0860(var_2104)
    var_2120 = 320142966542498375;
    var_2128 = 8;
    pri = fun_0860(var_2120)
    pri = FogEnd()
    var_2136 = 3;
    var_2144 = 1;
    pri = EvCameraEnd(var_2144, var_2136)
    pri = 0;
    return pri;
}
// fun_7A38
fun_7A38() {
    pri = 0;
    return pri;
}
// fun_7A50
fun_7A50() {
    var_8 = 1865;
    var_16 = 8;
    pri = fun_6320(var_8)
    var_24 = -5661906939330003973;
    var_32 = 8;
    pri = fun_0588(var_24)
    var_40 = -3181508942575245480;
    pri = VanishFlagReset(var_40)
    pri = 0;
    return pri;
}
// fun_7AD8
fun_7AD8() {
    var_8 = 5;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 23224;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0280(var_32, var_24)
    var_48 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_7B50
fun_7B50() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_64B8()
    var_16 = 0;
    pri = fun_6510()
    var_24 = 0;
    pri = fun_6550()
    var_32 = 0;
    pri = fun_6580()
    var_40 = 0;
    pri = fun_7A38()
    var_48 = 0;
    pri = fun_7A50()
    var_56 = 0;
    pri = fun_7AD8()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_7C40
fun_7C40() {
    var_8 = 0;
    pri = fun_6510()
    var_16 = 0;
    pri = fun_7A50()
    pri = 0;
    return pri;
}
