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
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0450
// lab_0450
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0490
    OP_JUMP lab_0500
// lab_0490
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_04D0
    OP_JUMP lab_0500
// lab_04D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0450
// lab_0500
    pri = 0;
    return pri;
}
// fun_0518
fun_0518() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0548
fun_0548() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0580
// lab_0580
    var_8 = 0;
    pri = fun_0698()
    OP_JNZ lab_05B8
    OP_JUMP lab_05E8
// lab_05B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0580
// lab_05E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0618
// lab_0618
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0658
    pri = 0;
    return pri;
// lab_0658
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0618
    pri = 0;
    return pri;
}
// fun_0698
fun_0698() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_06C0
fun_06C0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0718
fun_0718() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0758
fun_0758() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0790
fun_0790() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectActiveStaticCollision_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_07D0
fun_07D0() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
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
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1090(var_8)
    OP_JZER lab_08D0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_10C0(var_24)
    OP_JNZ lab_08D0
    pri = 0;
    return pri;
// lab_08D0
    OP_JUMP lab_08E0
// lab_08E0
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0940
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0940
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_08E0
    pri = 0;
    return pri;
}
// fun_0980
fun_0980() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_09B8
fun_09B8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_09F8
fun_09F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0A30
fun_0A30() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0A78
    pri = 0;
    return pri;
// lab_0A78
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0AB8
// lab_0AB8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1090(var_8)
    OP_JNZ lab_0B40
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0B30
    pri = 0;
    return pri;
// lab_0B40
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0B88
    pri = 0;
    return pri;
// lab_0B88
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0BE8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C30(var_8)
    pri = 0;
    return pri;
// lab_0BE8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0AB8
    pri = 0;
    return pri;
// lab_0B30
    OP_JUMP lab_0B88
}
// fun_0C30
fun_0C30() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0C68
fun_0C68() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0CB8
    pri = 0;
    return pri;
// lab_0CB8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1090(var_8)
    OP_JZER lab_0DE8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D10
    OP_ZERO_P_S 64
// lab_0DE8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E20
    OP_CONST_S 64, 1
// lab_0E20
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E58
    OP_CONST_S 72, 1
// lab_0E58
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
// lab_0D10
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D38
    OP_ZERO_P_S 72
// lab_0D38
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
    OP_JUMP lab_0EF8
// lab_0EF8
    pri = 0;
    return pri;
}
// fun_0F08
fun_0F08() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F48
fun_0F48() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F88
fun_0F88() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FC8
fun_0FC8() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1000
fun_1000() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1038
fun_1038() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0FC8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1000(var_24)
    pri = 0;
    return pri;
}
// fun_1090
fun_1090() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_10C0
fun_10C0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_10F0
fun_10F0() {
    OP_JUMP lab_1108
// lab_1108
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1198
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1188
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A30(var_8)
    pri = 0;
    return pri;
// lab_1198
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1228
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1218
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A30(var_8)
    pri = 0;
    return pri;
// lab_1228
    pri = 0;
    return pri;
// lab_1218
    OP_JUMP lab_1238
// lab_1238
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1108
    pri = 0;
    return pri;
// lab_1188
    OP_JUMP lab_1238
}
// fun_1278
fun_1278() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A30(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_10F0(var_40)
    pri = 0;
    return pri;
}
// fun_1300
fun_1300() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1338
fun_1338() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1360
fun_1360() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1390
fun_1390() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_13C8
fun_13C8() {
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
// switch_19E0
        case default:
        {
// switch_19E0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1A28
// lab_1A28
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
            OP_JNZ lab_1AD0
            var_88 = 0;
            pri = fun_1D40()
// lab_1AD0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_19E0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_15C8
                case default:
                {
// switch_15C8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1640
// lab_1640
                    OP_JUMP lab_1A28
                }
                case 0x0:
                {
// switch_15C8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1640
                }
                case 0x1:
                {
// switch_15C8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1640
                }
                case 0x2:
                {
// switch_15C8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1640
                }
                case 0x3:
                {
// switch_15C8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1640
                }
                case 0x4:
                {
// switch_15C8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1640
                }
                case 0x5:
                {
// switch_15C8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1640
                }
            }
        }
        case 0x65:
        {
// switch_19E0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1780
                case default:
                {
// switch_1780_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_17F8
// lab_17F8
                    OP_JUMP lab_1A28
                }
                case 0x0:
                {
// switch_1780_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_17F8
                }
                case 0x1:
                {
// switch_1780_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_17F8
                }
                case 0x2:
                {
// switch_1780_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_17F8
                }
                case 0x3:
                {
// switch_1780_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_17F8
                }
                case 0x4:
                {
// switch_1780_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_17F8
                }
                case 0x5:
                {
// switch_1780_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_17F8
                }
            }
        }
        case 0x66:
        {
// switch_19E0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1938
                case default:
                {
// switch_1938_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_19B0
// lab_19B0
                    OP_JUMP lab_1A28
                }
                case 0x0:
                {
// switch_1938_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_19B0
                }
                case 0x1:
                {
// switch_1938_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_19B0
                }
                case 0x2:
                {
// switch_1938_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_19B0
                }
                case 0x3:
                {
// switch_1938_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_19B0
                }
                case 0x4:
                {
// switch_1938_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_19B0
                }
                case 0x5:
                {
// switch_1938_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_19B0
                }
            }
        }
    }
}
// fun_1AE8
fun_1AE8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_13C8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B50
fun_1B50() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_09F8(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1BF8
    pri = 1;
    return pri;
// lab_1BF8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1C40
fun_1C40() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1C90
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1B50(var_8)
    arg_2 = pri;
// lab_1C90
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_13C8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1CF0
fun_1CF0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1AE8(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1D40
fun_1D40() {
    OP_JUMP lab_1D58
// lab_1D58
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1D98
    pri = 0;
    return pri;
// lab_1D98
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1D58
    pri = 0;
    return pri;
}
// fun_1DD8
fun_1DD8() {
    var_8 = 0;
    pri = fun_1D40()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1E88
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1E88
    pri = 0;
    return pri;
}
// fun_1E98
fun_1E98() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1EC8
fun_1EC8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_1F40()
    return pri;
}
// fun_1F40
fun_1F40() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_1F80
fun_1F80() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 3;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1FD0
fun_1FD0() {
    OP_JUMP lab_1FE8
// lab_1FE8
    pri = EvCameraMoveWait_()
    OP_JZER lab_2020
    pri = 0;
    return pri;
// lab_2020
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1FE8
    pri = 0;
    return pri;
}
// fun_2060
fun_2060() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_20C8(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_21A0()
    pri = 0;
    return pri;
}
// fun_20C8
fun_20C8() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2120
fun_2120() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_20C8(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_21A0()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_21A0
fun_21A0() {
    OP_JUMP lab_21B8
// lab_21B8
    pri = IsEasingRunningDof_()
    OP_JZER lab_2210
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2220
// lab_2210
    pri = 0;
    return pri;
// lab_2220
    OP_JUMP lab_21B8
    pri = 0;
    return pri;
}
// fun_2240
fun_2240() {
    pri = arg_6;
    OP_JNZ lab_2278
    var_8 = 0;
    pri = fun_0F08()
// lab_2278
    pri = arg_1;
    switch (pri) {
// switch_37E0
        case default:
        {
// switch_37E0_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3B30
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3B30
            pri = 1;
            OP_JUMP lab_3B38
// lab_3B30
            pri = 0;
// lab_3B38
            OP_JZER lab_3C90
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_09F8(var_24, var_16)
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
            OP_JUMP lab_3CF0
// lab_3C90
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
// lab_3CF0
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3D50
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3DB0
// lab_3D50
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3DB0
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3DB0
            pri = arg_2;
            OP_JZER lab_3DF0
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3DF0
            var_8 = 0;
            pri = fun_0F48()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_37E0_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x1:
        {
// switch_37E0_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x2:
        {
// switch_37E0_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x3:
        {
// switch_37E0_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x4:
        {
// switch_37E0_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x5:
        {
// switch_37E0_case_0x5
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
            pri = fun_0C68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E0_case_default
        }
        case 0x6:
        {
// switch_37E0_case_0x6
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
            pri = fun_0C68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E0_case_default
        }
        case 0x7:
        {
// switch_37E0_case_0x7
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
            pri = fun_0C68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E0_case_default
        }
        case 0x8:
        {
// switch_37E0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x9:
        {
// switch_37E0_case_0x9
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
            pri = fun_0C68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E0_case_default
        }
        case 0xa:
        {
// switch_37E0_case_0xa
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
            pri = fun_0C68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E0_case_default
        }
        case 0xb:
        {
// switch_37E0_case_0xb
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
            pri = fun_0C68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E0_case_default
        }
        case 0xc:
        {
// switch_37E0_case_0xc
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
            pri = fun_0C68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E0_case_default
        }
        case 0xd:
        {
// switch_37E0_case_0xd
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
            pri = fun_0C68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E0_case_default
        }
        case 0xe:
        {
// switch_37E0_case_0xe
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
            pri = fun_0C68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E0_case_default
        }
        case 0xf:
        {
// switch_37E0_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x10:
        {
// switch_37E0_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x11:
        {
// switch_37E0_case_0x11
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
            pri = fun_0C68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E0_case_default
        }
        case 0x12:
        {
// switch_37E0_case_0x12
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
            pri = fun_0C68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E0_case_default
        }
        case 0x13:
        {
// switch_37E0_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x14:
        {
// switch_37E0_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x15:
        {
// switch_37E0_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x16:
        {
// switch_37E0_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x17:
        {
// switch_37E0_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x18:
        {
// switch_37E0_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x19:
        {
// switch_37E0_case_0x19
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
            pri = fun_0C68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E0_case_default
        }
        case 0x1a:
        {
// switch_37E0_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09B8(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0980(var_48, var_40)
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
            pri = fun_0C68(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_37E0_case_default
        }
        case 0x1b:
        {
// switch_37E0_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09B8(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0980(var_48, var_40)
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
            pri = fun_0C68(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_37E0_case_default
        }
        case 0x1c:
        {
// switch_37E0_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09B8(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0980(var_48, var_40)
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
            pri = fun_0C68(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_37E0_case_default
        }
        case 0x1d:
        {
// switch_37E0_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x1e:
        {
// switch_37E0_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x1f:
        {
// switch_37E0_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x20:
        {
// switch_37E0_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x21:
        {
// switch_37E0_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x22:
        {
// switch_37E0_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x23:
        {
// switch_37E0_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x24:
        {
// switch_37E0_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x25:
        {
// switch_37E0_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x26:
        {
// switch_37E0_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x27:
        {
// switch_37E0_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x28:
        {
// switch_37E0_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x29:
        {
// switch_37E0_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
    }
}
// fun_3E20
fun_3E20() {
    pri = arg_4;
    OP_JNZ lab_3E58
    var_8 = 0;
    pri = fun_0F08()
// lab_3E58
    pri = arg_1;
    switch (pri) {
// switch_5230
        case default:
        {
// switch_5230_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 8960;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1090(var_264)
            OP_JZER lab_57F8
            pri = arg_3;
            switch (pri) {
// switch_57A0
                case default:
                {
// switch_57A0_case_default
                    OP_JUMP lab_5AB0
// lab_5AB0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_5B20
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_5B20
                    var_8 = 0;
                    pri = fun_0F48()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_57A0_case_0x1
                    var_8 = 32;
                    var_16 = 9112;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_57A0_case_default
                }
                case 0x2:
                {
// switch_57A0_case_0x2
                    var_8 = 32;
                    var_16 = 9216;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_57A0_case_default
                }
                case 0x3:
                {
// switch_57A0_case_0x3
                    var_8 = 32;
                    var_16 = 9016;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_57A0_case_default
                }
            }
// lab_57F8
            pri = arg_1;
            OP_JZER lab_5848
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_5848
            pri = 0;
            OP_JUMP lab_5850
// lab_5848
            pri = 1;
// lab_5850
            OP_JZER lab_58B8
            var_8 = 9312;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_09F8(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_58B8
            pri = 1;
            OP_JUMP lab_58C0
// lab_58B8
            pri = 0;
// lab_58C0
            OP_JZER lab_5910
            var_8 = 32;
            var_16 = 9408;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5AB0
// lab_5910
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_5978
            var_8 = 32;
            var_16 = 9568;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5AB0
// lab_5978
            var_16 = 9688;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_09F8(var_24, var_16)
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
            var_176 = 9792;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 9808;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_5230_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x1:
        {
// switch_5230_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x2:
        {
// switch_5230_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x3:
        {
// switch_5230_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x4:
        {
// switch_5230_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x5:
        {
// switch_5230_case_0x5
            var_8 = 1;
            var_16 = 8440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09B8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C30(var_40)
            OP_JUMP switch_5230_case_default
        }
        case 0x6:
        {
// switch_5230_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x7:
        {
// switch_5230_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x8:
        {
// switch_5230_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x9:
        {
// switch_5230_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0xa:
        {
// switch_5230_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0xb:
        {
// switch_5230_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0xc:
        {
// switch_5230_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0xd:
        {
// switch_5230_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0xe:
        {
// switch_5230_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0xf:
        {
// switch_5230_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x10:
        {
// switch_5230_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x11:
        {
// switch_5230_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x12:
        {
// switch_5230_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x13:
        {
// switch_5230_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x14:
        {
// switch_5230_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x15:
        {
// switch_5230_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x16:
        {
// switch_5230_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x17:
        {
// switch_5230_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x18:
        {
// switch_5230_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x19:
        {
// switch_5230_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x1a:
        {
// switch_5230_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x1b:
        {
// switch_5230_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x1c:
        {
// switch_5230_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x1d:
        {
// switch_5230_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x1e:
        {
// switch_5230_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x1f:
        {
// switch_5230_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x20:
        {
// switch_5230_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x21:
        {
// switch_5230_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x22:
        {
// switch_5230_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x23:
        {
// switch_5230_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x24:
        {
// switch_5230_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x25:
        {
// switch_5230_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x26:
        {
// switch_5230_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x27:
        {
// switch_5230_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x28:
        {
// switch_5230_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x29:
        {
// switch_5230_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x2a:
        {
// switch_5230_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x2b:
        {
// switch_5230_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x2c:
        {
// switch_5230_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x2d:
        {
// switch_5230_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x2e:
        {
// switch_5230_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x2f:
        {
// switch_5230_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x30:
        {
// switch_5230_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x31:
        {
// switch_5230_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x32:
        {
// switch_5230_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x33:
        {
// switch_5230_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x34:
        {
// switch_5230_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x35:
        {
// switch_5230_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x36:
        {
// switch_5230_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x37:
        {
// switch_5230_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x38:
        {
// switch_5230_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x39:
        {
// switch_5230_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x3a:
        {
// switch_5230_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x3b:
        {
// switch_5230_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x3c:
        {
// switch_5230_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8536;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x3d:
        {
// switch_5230_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8712;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
        case 0x3e:
        {
// switch_5230_case_0x3e
            var_8 = 3;
            var_16 = 8856;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09B8(var_24, var_16, var_8)
            OP_JUMP switch_5230_case_default
        }
    }
}
// fun_5B50
fun_5B50() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_5C50
        case default:
        {
// switch_5C50_case_default
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
// switch_5C50_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_5C50_case_default
        }
        case 0x1:
        {
// switch_5C50_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_5C50_case_default
        }
        case 0x2:
        {
// switch_5C50_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_5C50_case_default
        }
        case 0x3:
        {
// switch_5C50_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_5C50_case_default
        }
    }
}
// fun_5D10
fun_5D10() {
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
    pri = fun_1C40(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_1D40()
    pri = 0;
    return pri;
}
// fun_5DA8
fun_5DA8() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_5B50(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_5D10(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_5E50
fun_5E50() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_5EA0
// lab_5EA0
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 9856;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_5F18
    OP_JUMP lab_5F48
// lab_5F18
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_5EA0
// lab_5F48
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_5FD0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_3E20(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1360(var_56)
// lab_5FD0
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_6038
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0F88(var_24, var_16)
// lab_6038
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0F88(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_60F8
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0A30(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0808(var_88, var_80, var_72, var_64, var_56)
// lab_60F8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_6138
    pri = 0;
    return pri;
// lab_6138
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6280
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 9976;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0980(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_6248
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_6280
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0858(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0858(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0A30(var_40)
    pri = 0;
    return pri;
// lab_6248
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0F88(var_16, var_8)
}
// fun_6308
fun_6308() {
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
    pri = fun_5DA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1DD8(var_112)
    var_128 = 0;
    pri = fun_1E98()
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
    pri = fun_5E50(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_6480
fun_6480() {
    pri = 10112;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_6508
// lab_6508
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_6688
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_6678
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_65C8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_65C8
    pri = 0;
    OP_JUMP lab_65D0
// lab_6688
    pri = 0;
    return pri;
// lab_6678
    OP_JUMP lab_6500
// lab_6500
    OP_INC_P_S -936
// lab_65C8
    pri = 1;
// lab_65D0
    OP_JZER lab_6648
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_6640
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_6648
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_6640
}
// fun_66A8
fun_66A8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_6740
    var_8 = 1;
    var_16 = 0;
    var_24 = 11032;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1338()
// lab_6740
    pri = arg_4;
    OP_JZER lab_6778
    var_8 = 1;
    var_16 = 8;
    pri = fun_1390(var_8)
// lab_6778
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_67D0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_67D0
    pri = 0;
    OP_JUMP lab_67D8
// lab_67D0
    pri = 1;
// lab_67D8
    OP_JZER lab_68A0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_68A0
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_6878
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1278(var_32, var_24)
    OP_JUMP lab_68A0
// lab_68A0
    pri = arg_2;
    OP_JZER lab_6978
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_6948
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0F88(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_07D0(var_40)
    OP_JUMP lab_6978
// lab_6978
    pri = arg_3;
    OP_JZER lab_69B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1300(var_8)
// lab_69B0
    pri = 0;
    return pri;
// lab_6948
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0F88(var_16, var_8)
// lab_6878
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1278(var_16, var_8)
}
// fun_69C0
fun_69C0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_6480(var_24)
    pri = 0;
    return pri;
}
// fun_6A28
fun_6A28() {
    pri = g_mode;
    switch (pri) {
// switch_6B88
        case default:
        {
// switch_6B88_case_default
            pri = CommandNOP()
            OP_JUMP lab_6C10
// lab_6C10
            pri = 0;
            return pri;
        }
        case 0xe62517fb76134ef3:
        {
// switch_6B88_case_0xe62517fb76134ef3
            var_8 = 0;
            pri = fun_8F80()
            OP_JUMP lab_6C10
        }
        case 0x0:
        {
// switch_6B88_case_0x0
            var_8 = 0;
            pri = fun_6C20()
            OP_JUMP lab_6C10
        }
        case 0x38e8aa3dce5956be:
        {
// switch_6B88_case_0x38e8aa3dce5956be
            var_8 = 0;
            pri = fun_8EF8()
            OP_JUMP lab_6C10
        }
        case 0x4a4533fadb1901bb:
        {
// switch_6B88_case_0x4a4533fadb1901bb
            var_8 = 0;
            pri = fun_7ED8()
            OP_JUMP lab_6C10
        }
        case 0x4a4534fadb19036e:
        {
// switch_6B88_case_0x4a4534fadb19036e
            var_8 = 0;
            pri = fun_7DE8()
            OP_JUMP lab_6C10
        }
        case 0x76c5011e7bef9f0a:
        {
// switch_6B88_case_0x76c5011e7bef9f0a
            var_8 = 0;
            pri = fun_8060()
            OP_JUMP lab_6C10
        }
        case 0x7b8c21babf1489dd:
        {
// switch_6B88_case_0x7b8c21babf1489dd
            var_8 = 0;
            pri = fun_8E70()
            OP_JUMP lab_6C10
        }
    }
}
// fun_6C20
fun_6C20() {
    pri = 0;
    return pri;
}
// fun_6C38
fun_6C38() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_66A8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6C90
fun_6C90() {
    var_8 = 3480884744796360697;
    var_16 = 8;
    pri = fun_0518(var_8)
    var_24 = 7149317435715846772;
    var_32 = 8;
    pri = fun_0518(var_24)
    var_40 = -7766450811062851545;
    var_48 = 8;
    pri = fun_0518(var_40)
    pri = 0;
    return pri;
}
// fun_6D20
fun_6D20() {
    var_8 = 0;
    pri = fun_0548()
    pri = 0;
    return pri;
}
// fun_6D50
fun_6D50() {
    var_8 = 1;
    var_16 = 1;
    var_24 = -150;
    pri = float(var_24)
    var_32 = pri;
    OP_PUSH3_C 4677463476925366272, 4672260587902730240, 8802641224559852288
    var_40 = 48;
    pri = fun_06C0(var_32, var_24, var_16, var_8, var_0, var_-8)
    OP_PUSH2_C -1655053127185566619, 1820667822877153674
    pri = SetBamiriInfoToChara(var_40, var_32)
    OP_PUSH2_C -2409953949732425464, 7896308398472262455
    pri = SetBamiriInfoToChara(var_40, var_32)
    var_48 = 1;
    var_56 = 8;
    pri = fun_0060(var_48)
    var_64 = 11080;
    var_72 = 8;
    var_80 = 16;
    pri = fun_0280(var_72, var_64)
    var_88 = 0;
    pri = fun_0350()
    var_96 = 0;
    var_104 = 3;
    var_112 = 0;
    var_120 = 100;
    var_128 = -1;
    OP_PUSH2_C -8562769687247943441, -1655053127185566619
    var_136 = 56;
    pri = fun_1C40(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_144 = 1;
    var_152 = 8;
    pri = fun_1DD8(var_144)
    var_160 = 0;
    pri = fun_1E98()
    pri = 0;
    return pri;
}
// fun_6F28
fun_6F28() {
    pri = 0;
    return pri;
}
// fun_6F40
fun_6F40() {
    var_8 = 81;
    var_16 = 8;
    pri = fun_69C0(var_8)
    pri = 0;
    return pri;
}
// fun_6F78
fun_6F78() {
    pri = 0;
    return pri;
}
// fun_6F90
fun_6F90() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 8;
    var_48 = 40;
    pri = fun_66A8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6FE8
fun_6FE8() {
    pri = 0;
    return pri;
}
// fun_7000
fun_7000() {
    pri = 0;
    return pri;
}
// fun_7018
fun_7018() {
    pri = EvCameraStart()
    var_8 = 0;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0758(var_16, var_8)
    var_32 = 1;
    var_40 = 0;
    pri = float(var_40)
    var_48 = pri;
    var_56 = -7766450811062851545;
    var_64 = 24;
    pri = fun_0718(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 0;
    pri = float(var_80)
    var_88 = pri;
    var_96 = 7149317435715846772;
    var_104 = 24;
    pri = fun_0718(var_96, var_88, var_80)
    var_112 = 1;
    var_120 = 0;
    pri = float(var_120)
    var_128 = pri;
    var_136 = 3480884744796360697;
    var_144 = 24;
    pri = fun_0718(var_136, var_128, var_120)
    var_152 = 1;
    var_160 = 8;
    pri = fun_0060(var_152)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_168 = 16;
    pri = fun_2060(var_160, var_152)
    var_176 = 0;
    var_184 = 1;
    var_192 = 250;
    pri = float(var_192)
    var_200 = pri;
    var_208 = 4611686018427387904;
    var_216 = 32;
    pri = fun_20C8(var_208, var_200, var_192, var_184)
    pri = arg_0;
    switch (pri) {
// switch_73E8
        case default:
        {
// switch_73E8_case_default
            var_8 = 11080;
            var_16 = 8;
            var_24 = 16;
            pri = fun_0280(var_16, var_8)
            var_32 = 0;
            pri = fun_0350()
            OP_ZERO_P_S -8
            OP_ZERO_P_S -16
            OP_ZERO_P_S -24
            OP_ZERO_P_S -32
            OP_ZERO_P_S -40
            pri = arg_0;
            switch (pri) {
// switch_7670
                case default:
                {
// switch_7670_case_default
                    var_8 = 0;
                    var_16 = 0;
                    var_24 = 0;
                    var_32 = var_32;
                    pri = SoundPlayPokeVoice(var_32, var_24, var_16, var_8)
                    var_40 = 1;
                    var_48 = -1;
                    var_56 = -1;
                    var_64 = 3;
                    var_72 = 0;
                    var_80 = 29;
                    var_88 = var_24;
                    var_96 = 56;
                    pri = fun_2240(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
                    var_104 = 0;
                    var_112 = 8;
                    pri = fun_0408(var_104)
                    var_120 = var_24;
                    var_128 = 8;
                    pri = fun_0A30(var_120)
                    var_136 = 0;
                    var_144 = 3;
                    var_152 = 0;
                    var_160 = 100;
                    var_168 = -1;
                    var_176 = var_8;
                    var_184 = -2409953949732425464;
                    var_192 = 56;
                    pri = fun_1C40(var_184, var_176, var_168, var_160, var_152, var_144, var_136)
                    var_200 = 1;
                    var_208 = 8;
                    pri = fun_1DD8(var_200)
                    var_216 = 0;
                    pri = fun_1E98()
                    var_224 = 0;
                    var_232 = 3;
                    var_240 = 0;
                    var_248 = 100;
                    var_256 = -1;
                    var_264 = var_16;
                    var_272 = -2409953949732425464;
                    var_280 = 56;
                    pri = fun_1C40(var_272, var_264, var_256, var_248, var_240, var_232, var_224)
                    var_288 = 1;
                    var_296 = 8;
                    pri = fun_1DD8(var_288)
                    var_304 = 0;
                    var_312 = 0;
                    var_320 = 1;
                    var_328 = 0;
                    var_336 = 0;
                    var_344 = 0;
                    var_352 = 48;
                    pri = fun_1EC8(var_344, var_336, var_328, var_320, var_312, var_304)
                    OP_JZER lab_7B50
                    var_360 = 0;
                    pri = fun_1E98()
                    var_368 = 0;
                    var_376 = 0;
                    var_384 = 0;
                    var_392 = var_32;
                    pri = SoundPlayPokeVoice(var_392, var_384, var_376, var_368)
                    var_400 = 1;
                    var_408 = -1;
                    var_416 = -1;
                    var_424 = 3;
                    var_432 = 0;
                    var_440 = 30;
                    var_448 = var_24;
                    var_456 = 56;
                    pri = fun_2240(var_448, var_440, var_432, var_424, var_416, var_408, var_400)
                    var_464 = 30;
                    var_472 = 8;
                    pri = fun_0060(var_464)
                    var_480 = var_32;
                    var_488 = 1;
                    var_496 = 16;
                    pri = fun_1F80(var_488, var_480)
                    var_504 = 3;
                    var_512 = 0;
                    var_520 = -102476197518040159;
                    var_528 = 24;
                    pri = fun_1CF0(var_520, var_512, var_504)
                    var_536 = 1;
                    var_544 = 8;
                    pri = fun_1DD8(var_536)
                    var_552 = 0;
                    pri = fun_1E98()
                    var_560 = var_40;
                    pri = PokePartyAddMember(var_560)
                    var_568 = 1;
                    var_576 = 0;
                    var_584 = 11032;
                    var_592 = 8;
                    var_600 = 32;
                    pri = fun_02E0(var_592, var_584, var_576, var_568)
                    var_608 = 0;
                    pri = fun_0350()
                    OP_PUSH2_C 4652007308841189376, 4620693217682128896
                    var_616 = 3;
                    var_624 = 1;
                    var_632 = 32;
                    pri = fun_2120(var_624, var_616, var_608, var_600)
                    var_640 = 1;
                    var_648 = 8802641224559852288;
                    var_656 = 16;
                    pri = fun_0758(var_648, var_640)
                    var_664 = var_32;
                    var_672 = 8;
                    pri = fun_80D8(var_664)
                    pri = 1;
                    return pri;
// lab_7B50
                    var_8 = 0;
                    var_16 = 3;
                    var_24 = 0;
                    var_32 = 100;
                    var_40 = -1;
                    OP_PUSH2_C -5531072836745441581, -2409953949732425464
                    var_48 = 56;
                    pri = fun_1C40(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
                    var_56 = 1;
                    var_64 = 8;
                    pri = fun_1DD8(var_56)
                    var_72 = 0;
                    pri = fun_1E98()
                    var_80 = 1;
                    var_88 = 0;
                    var_96 = 11032;
                    var_104 = 8;
                    var_112 = 32;
                    pri = fun_02E0(var_104, var_96, var_88, var_80)
                    var_120 = 0;
                    pri = fun_0350()
                    OP_PUSH2_C 4652007308841189376, 4620693217682128896
                    var_128 = 3;
                    var_136 = 1;
                    var_144 = 32;
                    pri = fun_2120(var_136, var_128, var_120, var_112)
                    var_152 = 1;
                    var_160 = 8802641224559852288;
                    var_168 = 16;
                    pri = fun_0758(var_160, var_152)
                    pri = 0;
                    return pri;
                }
                case 0x94380622c10de827:
                {
// switch_7670_case_0x94380622c10de827
                    OP_CONST_S -8, 7313932208019963519
                    OP_CONST_S -16, -5531073936257069792
                    OP_CONST_S -24, -7766450811062851545
                    OP_CONST_S -32, 810
                    OP_CONST_S -40, -3389361034168352474
                    OP_JUMP switch_7670_case_default
                }
                case 0x304e963b9da9cff9:
                {
// switch_7670_case_0x304e963b9da9cff9
                    OP_CONST_S -8, 7313930008996707097
                    OP_CONST_S -16, -5531067339187300526
                    OP_CONST_S -24, 3480884744796360697
                    OP_CONST_S -32, 813
                    OP_CONST_S -40, -1868534108329574560
                    OP_JUMP switch_7670_case_default
                }
                case 0x63377a543e598274:
                {
// switch_7670_case_0x63377a543e598274
                    OP_CONST_S -8, 7313928909485078886
                    OP_CONST_S -16, -5531066239675672315
                    OP_CONST_S -24, 7149317435715846772
                    OP_CONST_S -32, 816
                    OP_CONST_S -40, 2926511046552020493
                    OP_JUMP switch_7670_case_default
                }
            }
        }
        case 0x94380622c10de827:
        {
// switch_73E8_case_0x94380622c10de827
            var_8 = 0;
            var_16 = 4629869301922896282;
            var_24 = 0;
            OP_PUSH5_C 4677430861287317832, 4651633211004954870, 4672136601474024079, 4677446625535281070, 4651884691304459796
            var_32 = 4672136601474024079;
            var_40 = 1;
            pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
            OP_JUMP switch_73E8_case_default
        }
        case 0x304e963b9da9cff9:
        {
// switch_73E8_case_0x304e963b9da9cff9
            var_8 = 0;
            var_16 = 4629869301922896282;
            var_24 = 0;
            OP_PUSH5_C 4677430861287317832, 4651633211004954870, 4672177899130763346, 4677446625535281070, 4651884691304459796
            var_32 = 4672177899130763346;
            var_40 = 1;
            pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
            OP_JUMP switch_73E8_case_default
        }
        case 0x63377a543e598274:
        {
// switch_73E8_case_0x63377a543e598274
            var_8 = 0;
            var_16 = 4629869301922896282;
            var_24 = 0;
            OP_PUSH5_C 4677430861287317832, 4651633211004954870, 4672218009314944614, 4677446625535281070, 4651884691304459796
            var_32 = 4672218009314944614;
            var_40 = 1;
            pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
            OP_JUMP switch_73E8_case_default
        }
    }
}
// fun_7CB8
fun_7CB8() {
    pri = 0;
    return pri;
}
// fun_7CD0
fun_7CD0() {
    var_8 = 82;
    var_16 = 8;
    pri = fun_69C0(var_8)
    pri = 0;
    return pri;
}
// fun_7D08
fun_7D08() {
    var_8 = -7756666260224301376;
    pri = ReserveScript(var_8)
    pri = 0;
    return pri;
}
// fun_7D48
fun_7D48() {
    var_8 = 3;
    var_16 = 0;
    pri = EvCameraEnd(var_16, var_8)
    var_24 = 5;
    var_32 = 8;
    pri = fun_0060(var_24)
    var_40 = 11080;
    var_48 = 8;
    var_56 = 16;
    pri = fun_0280(var_48, var_40)
    var_64 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_7DE8
fun_7DE8() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_6C38()
    var_16 = 0;
    pri = fun_6C90()
    var_24 = 0;
    pri = fun_6D20()
    var_32 = 0;
    pri = fun_6D50()
    var_40 = 0;
    pri = fun_6F28()
    var_48 = 0;
    pri = fun_6F40()
    var_56 = 0;
    pri = fun_6F78()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_7ED8
fun_7ED8() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    pri = CommandNOP()
    var_16 = 0;
    pri = fun_6F90()
    var_24 = 0;
    pri = fun_6FE8()
    var_32 = 0;
    pri = fun_7000()
    var_40 = var_8;
    var_48 = 8;
    pri = fun_7018(var_40)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8018
    var_56 = var_8;
    var_64 = 8;
    pri = fun_8250(var_56)
    var_72 = 0;
    pri = fun_7CB8()
    var_80 = 0;
    pri = fun_7CD0()
    var_88 = 0;
    pri = fun_7D08()
    OP_JUMP lab_8030
// lab_8018
    var_8 = 0;
    pri = fun_7D48()
// lab_8030
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_8060
fun_8060() {
    var_8 = 0;
    pri = fun_6C90()
    var_16 = 0;
    pri = fun_6F40()
    var_24 = 0;
    pri = fun_6FE8()
    var_32 = 0;
    pri = fun_7CD0()
    pri = 0;
    return pri;
}
// fun_80D8
fun_80D8() {
    pri = arg_0;
    switch (pri) {
// switch_81F8
        case default:
        {
// switch_81F8_case_default
            var_8 = 0;
            var_16 = -4562270413023387603;
            pri = WorkSet(var_16, var_8)
            OP_JUMP lab_8240
// lab_8240
            pri = 0;
            return pri;
        }
        case 0x32a:
        {
// switch_81F8_case_0x32a
            var_8 = 0;
            var_16 = -4562270413023387603;
            pri = WorkSet(var_16, var_8)
            OP_JUMP lab_8240
        }
        case 0x32d:
        {
// switch_81F8_case_0x32d
            var_8 = 1;
            var_16 = -4562270413023387603;
            pri = WorkSet(var_16, var_8)
            OP_JUMP lab_8240
        }
        case 0x330:
        {
// switch_81F8_case_0x330
            var_8 = 2;
            var_16 = -4562270413023387603;
            pri = WorkSet(var_16, var_8)
            OP_JUMP lab_8240
        }
    }
}
// fun_8250
fun_8250() {
    var_8 = 0;
    var_16 = -1655053127185566619;
    var_24 = 16;
    pri = fun_0758(var_16, var_8)
    var_32 = 0;
    var_40 = -2409953949732425464;
    var_48 = 16;
    pri = fun_0758(var_40, var_32)
    OP_ZERO_P_S -8
    OP_ZERO_P_S -16
    OP_ZERO_P_S -24
    pri = arg_0;
    switch (pri) {
// switch_8800
        case default:
        {
// switch_8800_case_default
            OP_CONST_S -8, 3480884744796360697
            OP_CONST_S -24, 27
            var_8 = 0;
            var_16 = 7149317435715846772;
            var_24 = 16;
            pri = fun_0758(var_16, var_8)
            var_32 = 0;
            var_40 = -7766450811062851545;
            var_48 = 16;
            pri = fun_0758(var_40, var_32)
            var_56 = 1;
            var_64 = 1;
            var_72 = 0;
            var_80 = 4634462832805325832;
            var_88 = 4677482718378852352;
            pri = floatsub(var_88, var_80)
            var_96 = pri;
            var_104 = 4620433134803648250;
            var_112 = 4672153110641115136;
            pri = floatadd(var_112, var_104)
            var_120 = pri;
            var_128 = var_8;
            var_136 = 48;
            pri = fun_06C0(var_128, var_120, var_112, var_104, var_96, var_88)
            OP_JUMP lab_8848
// lab_8848
            var_8 = 0;
            var_16 = var_8;
            var_24 = 16;
            pri = fun_0790(var_16, var_8)
            var_32 = 1;
            var_40 = 1;
            OP_PUSH4_C 4640537203540230144, 4677482718378852352, 4672153110641115136, 8802641224559852288
            var_48 = 48;
            pri = fun_06C0(var_40, var_32, var_24, var_16, var_8, var_0)
            OP_PUSH2_C 4652007308841189376, 4620693217682128896
            var_56 = 16;
            pri = fun_2060(var_48, var_40)
            var_64 = 0;
            var_72 = 1;
            var_80 = 200;
            pri = float(var_80)
            var_88 = pri;
            var_96 = 4613937818241073152;
            var_104 = 32;
            pri = fun_20C8(var_96, var_88, var_80, var_72)
            var_112 = 0;
            var_120 = 4627167142146473984;
            var_128 = 0;
            OP_PUSH5_C 4677475458853329961, 4651640599723093524, 4672139688352919060, 4677473553949434839, 4651494320696134205
            var_136 = 4672103267030248980;
            var_144 = 1;
            pri = EvCameraMove(var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72)
            var_152 = 0;
            pri = fun_1FD0()
            var_160 = 1;
            var_168 = -1;
            var_176 = -1;
            var_184 = 3;
            var_192 = 0;
            var_200 = var_24;
            var_208 = 8802641224559852288;
            var_216 = 56;
            pri = fun_2240(var_208, var_200, var_192, var_184, var_176, var_168, var_160)
            var_224 = 1;
            var_232 = 11128;
            var_240 = var_8;
            var_248 = 24;
            pri = fun_09B8(var_240, var_232, var_224)
            var_256 = 1;
            var_264 = 8;
            pri = fun_0060(var_256)
            var_272 = 11080;
            var_280 = 8;
            var_288 = 16;
            pri = fun_0280(var_280, var_272)
            var_296 = 11272;
            pri = SoundPostEvent(var_296)
            var_304 = 35;
            var_312 = 8;
            pri = fun_0060(var_304)
            var_320 = 0;
            var_328 = 4627167142146473984;
            var_336 = 2;
            OP_PUSH5_C 4677475465725277635, 4651640599723093524, 4672139685604139991, 4677473871433417359, 4651517982186363945
            var_344 = 4672109152166236652;
            var_352 = 7;
            pri = EvCameraMove(var_352, var_344, var_336, var_328, var_320, var_312, var_304, var_296, var_288, var_280)
            var_360 = 5;
            var_368 = 8;
            pri = fun_0060(var_360)
            var_376 = 0;
            var_384 = 4627167142146473984;
            var_392 = 0;
            OP_PUSH5_C 4677475465725277635, 4651640599723093524, 4672139685604139991, 4677473905793155727, 4651520621014270607
            var_400 = 4672109806375655178;
            var_408 = 60;
            pri = EvCameraMove(var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336)
            var_416 = 40;
            var_424 = 8;
            pri = fun_0060(var_416)
            var_432 = 1;
            var_440 = 0;
            var_448 = 11032;
            var_456 = 8;
            var_464 = 32;
            pri = fun_02E0(var_456, var_448, var_440, var_432)
            var_472 = 0;
            pri = fun_0350()
            var_480 = 0;
            var_488 = 11456;
            var_496 = var_8;
            var_504 = 24;
            pri = fun_09B8(var_496, var_488, var_480)
            var_512 = var_8;
            var_520 = 8;
            pri = fun_1038(var_512)
            var_528 = 1;
            var_536 = var_8;
            var_544 = 16;
            pri = fun_0790(var_536, var_528)
            var_552 = 3;
            var_560 = 1;
            pri = EvCameraEnd(var_560, var_552)
            OP_PUSH2_C 4652007308841189376, 4620693217682128896
            var_568 = 3;
            var_576 = 1;
            var_584 = 32;
            pri = fun_2120(var_576, var_568, var_560, var_552)
            var_592 = 1;
            var_600 = -1655053127185566619;
            var_608 = 16;
            pri = fun_0758(var_600, var_592)
            var_616 = 1;
            var_624 = -2409953949732425464;
            var_632 = 16;
            pri = fun_0758(var_624, var_616)
            var_640 = 1;
            var_648 = 3480884744796360697;
            var_656 = 16;
            pri = fun_0758(var_648, var_640)
            var_664 = 1;
            var_672 = 7149317435715846772;
            var_680 = 16;
            pri = fun_0758(var_672, var_664)
            var_688 = 1;
            var_696 = -7766450811062851545;
            var_704 = 16;
            pri = fun_0758(var_696, var_688)
            pri = 0;
            return pri;
        }
        case 0x94380622c10de827:
        {
// switch_8800_case_0x94380622c10de827
            OP_CONST_S -8, -7766450811062851545
            OP_CONST_S -24, 26
            var_8 = 0;
            var_16 = 3480884744796360697;
            var_24 = 16;
            pri = fun_0758(var_16, var_8)
            var_32 = 0;
            var_40 = 7149317435715846772;
            var_48 = 16;
            pri = fun_0758(var_40, var_32)
            var_56 = 1;
            var_64 = 1;
            var_72 = 0;
            var_80 = 4634477047291649720;
            var_88 = 4677482718378852352;
            pri = floatsub(var_88, var_80)
            var_96 = pri;
            var_104 = 4672153110641115136;
            var_112 = var_8;
            var_120 = 48;
            pri = fun_06C0(var_112, var_104, var_96, var_88, var_80, var_72)
            OP_JUMP lab_8848
        }
        case 0x304e963b9da9cff9:
        {
// switch_8800_case_0x304e963b9da9cff9
            OP_CONST_S -8, 3480884744796360697
            OP_CONST_S -24, 27
            var_8 = 0;
            var_16 = 7149317435715846772;
            var_24 = 16;
            pri = fun_0758(var_16, var_8)
            var_32 = 0;
            var_40 = -7766450811062851545;
            var_48 = 16;
            pri = fun_0758(var_40, var_32)
            var_56 = 1;
            var_64 = 1;
            var_72 = 0;
            var_80 = 4634462832805325832;
            var_88 = 4677482718378852352;
            pri = floatsub(var_88, var_80)
            var_96 = pri;
            var_104 = 4620433134803648250;
            var_112 = 4672153110641115136;
            pri = floatadd(var_112, var_104)
            var_120 = pri;
            var_128 = var_8;
            var_136 = 48;
            pri = fun_06C0(var_128, var_120, var_112, var_104, var_96, var_88)
            OP_JUMP lab_8848
        }
        case 0x63377a543e598274:
        {
// switch_8800_case_0x63377a543e598274
            OP_CONST_S -8, 7149317435715846772
            OP_CONST_S -24, 28
            var_8 = 0;
            var_16 = 3480884744796360697;
            var_24 = 16;
            pri = fun_0758(var_16, var_8)
            var_32 = 0;
            var_40 = -7766450811062851545;
            var_48 = 16;
            pri = fun_0758(var_40, var_32)
            var_56 = 1;
            var_64 = 1;
            var_72 = 0;
            var_80 = 4634302532806089114;
            var_88 = 4677482718378852352;
            pri = floatsub(var_88, var_80)
            var_96 = pri;
            var_104 = 4672153110641115136;
            var_112 = var_8;
            var_120 = 48;
            pri = fun_06C0(var_112, var_104, var_96, var_88, var_80, var_72)
            OP_JUMP lab_8848
        }
    }
}
// fun_8E70
fun_8E70() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -8562769687247943441;
    var_88 = 80;
    pri = fun_6308(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8EF8
fun_8EF8() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 7313926710461822464;
    var_88 = 80;
    pri = fun_6308(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8F80
fun_8F80() {
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C -8562768587736315230, -1655053127185566619
    var_48 = 56;
    pri = fun_1C40(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_1DD8(var_56)
    var_72 = 0;
    pri = fun_1E98()
    pri = 0;
    return pri;
}
