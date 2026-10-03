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
// fun_04C8
fun_04C8() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_04F8
fun_04F8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0550
fun_0550() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0588
fun_0588() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_05C0
fun_05C0() {
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
// fun_0638
fun_0638() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0688
fun_0688() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_06E0
fun_06E0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1000(var_8)
    OP_JZER lab_0758
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1030(var_24)
    OP_JNZ lab_0758
    pri = 0;
    return pri;
// lab_0758
    OP_JUMP lab_0768
// lab_0768
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_07C8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_07C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0768
    pri = 0;
    return pri;
}
// fun_0808
fun_0808() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0840
fun_0840() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0880
fun_0880() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_08B8
fun_08B8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0900
    pri = 0;
    return pri;
// lab_0900
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0940
// lab_0940
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1000(var_8)
    OP_JNZ lab_09C8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_09B8
    pri = 0;
    return pri;
// lab_09C8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0A10
    pri = 0;
    return pri;
// lab_0A10
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0A70
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0AB8(var_8)
    pri = 0;
    return pri;
// lab_0A70
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0940
    pri = 0;
    return pri;
// lab_09B8
    OP_JUMP lab_0A10
}
// fun_0AB8
fun_0AB8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0AF0
fun_0AF0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0B40
    pri = 0;
    return pri;
// lab_0B40
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1000(var_8)
    OP_JZER lab_0C70
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B98
    OP_ZERO_P_S 64
// lab_0C70
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0CA8
    OP_CONST_S 64, 1
// lab_0CA8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0CE0
    OP_CONST_S 72, 1
// lab_0CE0
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
// lab_0B98
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0BC0
    OP_ZERO_P_S 72
// lab_0BC0
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
    OP_JUMP lab_0D80
// lab_0D80
    pri = 0;
    return pri;
}
// fun_0D90
fun_0D90() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DD0
fun_0DD0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E10
fun_0E10() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E50
fun_0E50() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E90
fun_0E90() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_0EC8
fun_0EC8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F08
fun_0F08() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_0F40
fun_0F40() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0E50(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_0EC8(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_0FA8
fun_0FA8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E90(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0F08(var_24)
    pri = 0;
    return pri;
}
// fun_1000
fun_1000() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1030
fun_1030() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1060
fun_1060() {
    OP_JUMP lab_1078
// lab_1078
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1108
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_10F8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_08B8(var_8)
    pri = 0;
    return pri;
// lab_1108
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1198
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1188
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_08B8(var_8)
    pri = 0;
    return pri;
// lab_1198
    pri = 0;
    return pri;
// lab_1188
    OP_JUMP lab_11A8
// lab_11A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1078
    pri = 0;
    return pri;
// lab_10F8
    OP_JUMP lab_11A8
}
// fun_11E8
fun_11E8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_08B8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1060(var_40)
    pri = 0;
    return pri;
}
// fun_1270
fun_1270() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_12A8
fun_12A8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_12D0
fun_12D0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1308
fun_1308() {
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
// switch_1920
        case default:
        {
// switch_1920_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1968
// lab_1968
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
            OP_JNZ lab_1A10
            var_88 = 0;
            pri = fun_1BC8()
// lab_1A10
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1920_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1508
                case default:
                {
// switch_1508_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1580
// lab_1580
                    OP_JUMP lab_1968
                }
                case 0x0:
                {
// switch_1508_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1580
                }
                case 0x1:
                {
// switch_1508_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1580
                }
                case 0x2:
                {
// switch_1508_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1580
                }
                case 0x3:
                {
// switch_1508_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1580
                }
                case 0x4:
                {
// switch_1508_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1580
                }
                case 0x5:
                {
// switch_1508_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1580
                }
            }
        }
        case 0x65:
        {
// switch_1920_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_16C0
                case default:
                {
// switch_16C0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1738
// lab_1738
                    OP_JUMP lab_1968
                }
                case 0x0:
                {
// switch_16C0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1738
                }
                case 0x1:
                {
// switch_16C0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1738
                }
                case 0x2:
                {
// switch_16C0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1738
                }
                case 0x3:
                {
// switch_16C0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1738
                }
                case 0x4:
                {
// switch_16C0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1738
                }
                case 0x5:
                {
// switch_16C0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1738
                }
            }
        }
        case 0x66:
        {
// switch_1920_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1878
                case default:
                {
// switch_1878_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_18F0
// lab_18F0
                    OP_JUMP lab_1968
                }
                case 0x0:
                {
// switch_1878_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_18F0
                }
                case 0x1:
                {
// switch_1878_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_18F0
                }
                case 0x2:
                {
// switch_1878_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_18F0
                }
                case 0x3:
                {
// switch_1878_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_18F0
                }
                case 0x4:
                {
// switch_1878_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_18F0
                }
                case 0x5:
                {
// switch_1878_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_18F0
                }
            }
        }
    }
}
// fun_1A28
fun_1A28() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0880(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1AD0
    pri = 1;
    return pri;
// lab_1AD0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1B18
fun_1B18() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1B68
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1A28(var_8)
    arg_2 = pri;
// lab_1B68
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1308(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1BC8
fun_1BC8() {
    OP_JUMP lab_1BE0
// lab_1BE0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1C20
    pri = 0;
    return pri;
// lab_1C20
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1BE0
    pri = 0;
    return pri;
}
// fun_1C60
fun_1C60() {
    var_8 = 0;
    pri = fun_1BC8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1D10
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1D10
    pri = 0;
    return pri;
}
// fun_1D20
fun_1D20() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1D50
fun_1D50() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1D80
// lab_1D80
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1DC0
    OP_JUMP lab_1DF0
// lab_1DC0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1D80
// lab_1DF0
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E38
fun_1E38() {
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
// fun_1EA8
fun_1EA8() {
    OP_JUMP lab_1EC0
// lab_1EC0
    pri = EvCameraMoveWait_()
    OP_JZER lab_1EF8
    pri = 0;
    return pri;
// lab_1EF8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1EC0
    pri = 0;
    return pri;
}
// fun_1F38
fun_1F38() {
    pri = arg_6;
    OP_JNZ lab_1F70
    var_8 = 0;
    pri = fun_0D90()
// lab_1F70
    pri = arg_1;
    switch (pri) {
// switch_34D8
        case default:
        {
// switch_34D8_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3828
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3828
            pri = 1;
            OP_JUMP lab_3830
// lab_3828
            pri = 0;
// lab_3830
            OP_JZER lab_3988
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0880(var_24, var_16)
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
            OP_JUMP lab_39E8
// lab_3988
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
// lab_39E8
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3A48
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3AA8
// lab_3A48
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3AA8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3AA8
            pri = arg_2;
            OP_JZER lab_3AE8
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3AE8
            var_8 = 0;
            pri = fun_0DD0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_34D8_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34D8_case_default
        }
        case 0x1:
        {
// switch_34D8_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34D8_case_default
        }
        case 0x2:
        {
// switch_34D8_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34D8_case_default
        }
        case 0x3:
        {
// switch_34D8_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34D8_case_default
        }
        case 0x4:
        {
// switch_34D8_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34D8_case_default
        }
        case 0x5:
        {
// switch_34D8_case_0x5
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
            pri = fun_0AF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34D8_case_default
        }
        case 0x6:
        {
// switch_34D8_case_0x6
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
            pri = fun_0AF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34D8_case_default
        }
        case 0x7:
        {
// switch_34D8_case_0x7
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
            pri = fun_0AF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34D8_case_default
        }
        case 0x8:
        {
// switch_34D8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34D8_case_default
        }
        case 0x9:
        {
// switch_34D8_case_0x9
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
            pri = fun_0AF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34D8_case_default
        }
        case 0xa:
        {
// switch_34D8_case_0xa
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
            pri = fun_0AF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34D8_case_default
        }
        case 0xb:
        {
// switch_34D8_case_0xb
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
            pri = fun_0AF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34D8_case_default
        }
        case 0xc:
        {
// switch_34D8_case_0xc
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
            pri = fun_0AF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34D8_case_default
        }
        case 0xd:
        {
// switch_34D8_case_0xd
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
            pri = fun_0AF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34D8_case_default
        }
        case 0xe:
        {
// switch_34D8_case_0xe
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
            pri = fun_0AF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34D8_case_default
        }
        case 0xf:
        {
// switch_34D8_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34D8_case_default
        }
        case 0x10:
        {
// switch_34D8_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34D8_case_default
        }
        case 0x11:
        {
// switch_34D8_case_0x11
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
            pri = fun_0AF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34D8_case_default
        }
        case 0x12:
        {
// switch_34D8_case_0x12
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
            pri = fun_0AF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34D8_case_default
        }
        case 0x13:
        {
// switch_34D8_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34D8_case_default
        }
        case 0x14:
        {
// switch_34D8_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34D8_case_default
        }
        case 0x15:
        {
// switch_34D8_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34D8_case_default
        }
        case 0x16:
        {
// switch_34D8_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34D8_case_default
        }
        case 0x17:
        {
// switch_34D8_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34D8_case_default
        }
        case 0x18:
        {
// switch_34D8_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34D8_case_default
        }
        case 0x19:
        {
// switch_34D8_case_0x19
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
            pri = fun_0AF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34D8_case_default
        }
        case 0x1a:
        {
// switch_34D8_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0840(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0808(var_48, var_40)
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
            pri = fun_0AF0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_34D8_case_default
        }
        case 0x1b:
        {
// switch_34D8_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0840(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0808(var_48, var_40)
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
            pri = fun_0AF0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_34D8_case_default
        }
        case 0x1c:
        {
// switch_34D8_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0840(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0808(var_48, var_40)
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
            pri = fun_0AF0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_34D8_case_default
        }
        case 0x1d:
        {
// switch_34D8_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34D8_case_default
        }
        case 0x1e:
        {
// switch_34D8_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34D8_case_default
        }
        case 0x1f:
        {
// switch_34D8_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34D8_case_default
        }
        case 0x20:
        {
// switch_34D8_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34D8_case_default
        }
        case 0x21:
        {
// switch_34D8_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34D8_case_default
        }
        case 0x22:
        {
// switch_34D8_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34D8_case_default
        }
        case 0x23:
        {
// switch_34D8_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34D8_case_default
        }
        case 0x24:
        {
// switch_34D8_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34D8_case_default
        }
        case 0x25:
        {
// switch_34D8_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34D8_case_default
        }
        case 0x26:
        {
// switch_34D8_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34D8_case_default
        }
        case 0x27:
        {
// switch_34D8_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34D8_case_default
        }
        case 0x28:
        {
// switch_34D8_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34D8_case_default
        }
        case 0x29:
        {
// switch_34D8_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34D8_case_default
        }
    }
}
// fun_3B18
fun_3B18() {
    pri = 8440;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_3BA0
// lab_3BA0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_3D20
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_3D10
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_3C60
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_3C60
    pri = 0;
    OP_JUMP lab_3C68
// lab_3D20
    pri = 0;
    return pri;
// lab_3D10
    OP_JUMP lab_3B98
// lab_3B98
    OP_INC_P_S -936
// lab_3C60
    pri = 1;
// lab_3C68
    OP_JZER lab_3CE0
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_3CD8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_3CE0
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_3CD8
}
// fun_3D40
fun_3D40() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_3DD8
    var_8 = 1;
    var_16 = 0;
    var_24 = 9360;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_12A8()
// lab_3DD8
    pri = arg_4;
    OP_JZER lab_3E10
    var_8 = 1;
    var_16 = 8;
    pri = fun_12D0(var_8)
// lab_3E10
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_3E68
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_3E68
    pri = 0;
    OP_JUMP lab_3E70
// lab_3E68
    pri = 1;
// lab_3E70
    OP_JZER lab_3F38
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_3F38
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_3F10
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_11E8(var_32, var_24)
    OP_JUMP lab_3F38
// lab_3F38
    pri = arg_2;
    OP_JZER lab_4010
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_3FE0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0E10(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0588(var_40)
    OP_JUMP lab_4010
// lab_4010
    pri = arg_3;
    OP_JZER lab_4048
    var_8 = 1;
    var_16 = 8;
    pri = fun_1270(var_8)
// lab_4048
    pri = 0;
    return pri;
// lab_3FE0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0E10(var_16, var_8)
// lab_3F10
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_11E8(var_16, var_8)
}
// fun_4058
fun_4058() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_3B18(var_24)
    pri = 0;
    return pri;
}
// fun_40C0
fun_40C0() {
    pri = g_mode;
    switch (pri) {
// switch_4180
        case default:
        {
// switch_4180_case_default
            pri = CommandNOP()
            OP_JUMP lab_41C8
// lab_41C8
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4180_case_0x0
            var_8 = 0;
            pri = fun_41D8()
            OP_JUMP lab_41C8
        }
        case 0x2481c0276b49ee95:
        {
// switch_4180_case_0x2481c0276b49ee95
            var_8 = 0;
            pri = fun_5A50()
            OP_JUMP lab_41C8
        }
        case 0x41c61a2af527e439:
        {
// switch_4180_case_0x41c61a2af527e439
            var_8 = 0;
            pri = fun_5908()
            OP_JUMP lab_41C8
        }
    }
}
// fun_41D8
fun_41D8() {
    pri = 0;
    return pri;
}
// fun_41F0
fun_41F0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_3D40(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4248
fun_4248() {
    pri = 0;
    return pri;
}
// fun_4260
fun_4260() {
    pri = 0;
    return pri;
}
// fun_4278
fun_4278() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 1;
    var_32 = 0;
    var_40 = 4641240890982006784;
    var_48 = 0;
    var_56 = 0;
    OP_PUSH4_C 4662177241642303488, 4661047273542438093, 4607182418800017408, 8802641224559852288
    var_64 = 72;
    pri = fun_05C0(var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_72 = 0;
    var_80 = 4631952216750555136;
    var_88 = 0;
    OP_PUSH5_C 4662375912398326333, 4646179721292116132, 4661284768054037709, 4662621367374111048, 4645565050311724237
    var_96 = 4661396731323094139;
    var_104 = 1;
    pri = EvCameraMove(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
    var_112 = 0;
    pri = fun_1EA8()
    var_120 = 9408;
    var_128 = 8;
    var_136 = 16;
    pri = fun_0280(var_128, var_120)
    var_144 = 0;
    pri = fun_0350()
    var_152 = 0;
    var_160 = 4631952216750555136;
    var_168 = 3;
    OP_PUSH5_C 4662249512541597204, 4641519903052671222, 4661071924593132831, 4662518848909937213, 4642444548351165727
    var_176 = 4661131232250335068;
    var_184 = 70;
    pri = EvCameraMove(var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_192 = 70;
    var_200 = 8;
    pri = fun_0060(var_192)
    var_208 = 1;
    var_216 = 1;
    OP_PUSH4_C -4599132234466092646, 4661814952560951296, 4661142051444752384, -7417824923732940501
    var_224 = 48;
    pri = fun_04F8(var_216, var_208, var_200, var_192, var_184, var_176)
    OP_PUSH2_C 4622438362537734963, 4627110847151131853
    var_232 = 0;
    OP_PUSH5_C 4661923562319543009, 4642466010818139914, 4661320084367521874, 4661733588700495872, 4642820669288795341
    var_240 = 4661515038774242836;
    var_248 = 1;
    pri = EvCameraMove(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176)
    var_256 = 0;
    pri = fun_1EA8()
    OP_PUSH2_C 4622438362537734963, 4627110847151131853
    var_264 = 3;
    OP_PUSH5_C 4661841692683738808, 4642466010818139914, 4661231232832881295, 4661624011371671716, 4642822428507399782
    var_272 = 4661394686231466476;
    var_280 = 20;
    pri = EvCameraMove(var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208)
    var_288 = 9456;
    pri = SoundPostEvent(var_288)
    var_296 = 10;
    var_304 = 8;
    pri = fun_0060(var_296)
    var_312 = 0;
    var_320 = 3;
    var_328 = 0;
    var_336 = 100;
    var_344 = -1;
    OP_PUSH2_C -1105002610377223847, -7417824923732940501
    var_352 = 56;
    pri = fun_1B18(var_344, var_336, var_328, var_320, var_312, var_304, var_296)
    var_360 = 1;
    var_368 = 8;
    pri = fun_1C60(var_360)
    var_376 = 0;
    pri = fun_1D20()
    var_384 = 0;
    pri = fun_1EA8()
    var_392 = 8802641224559852288;
    var_400 = 8;
    pri = fun_06E0(var_392)
    var_408 = 0;
    var_416 = 0;
    var_424 = 0;
    var_432 = 0;
    OP_PUSH2_C -7417824923732940501, 8802641224559852288
    var_440 = 48;
    pri = fun_0688(var_432, var_424, var_416, var_408, var_400, var_392)
    var_448 = 1;
    var_456 = 0;
    var_464 = 4641240890982006784;
    var_472 = 0;
    var_480 = 0;
    OP_PUSH4_C 4661991973933023232, 4661142051444752384, 4607182418800017408, -7417824923732940501
    var_488 = 72;
    pri = fun_05C0(var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416)
    var_496 = 0;
    var_504 = 4628743402016053658;
    var_512 = 0;
    OP_PUSH5_C 4662299562310893568, 4643034590271095439, 4661266285263574794, 4662523730741564539, 4643698167528690811
    var_520 = 4661353839374494597;
    var_528 = 1;
    pri = EvCameraMove(var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464, var_456)
    var_536 = 0;
    pri = fun_1EA8()
    var_544 = 0;
    var_552 = 4628743402016053658;
    var_560 = 3;
    OP_PUSH5_C 4662238473444854333, 4642652839833931612, 4661180776244282655, 4662462630880409027, 4643507292310108897
    var_568 = 4661290749397292810;
    var_576 = 120;
    pri = EvCameraMove(var_576, var_568, var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504)
    var_584 = 9608;
    pri = SoundPostEvent(var_584)
    var_592 = 8802641224559852288;
    var_600 = 8;
    pri = fun_06E0(var_592)
    var_608 = -7417824923732940501;
    var_616 = 8;
    pri = fun_06E0(var_608)
    var_624 = 0;
    var_632 = 0;
    var_640 = 0;
    var_648 = 0;
    OP_PUSH2_C 8802641224559852288, -7417824923732940501
    var_656 = 48;
    pri = fun_0688(var_648, var_640, var_632, var_624, var_616, var_608)
    var_664 = 0;
    var_672 = 3;
    var_680 = 0;
    var_688 = 100;
    var_696 = -1;
    OP_PUSH2_C -1105005908912108480, -7417824923732940501
    var_704 = 56;
    pri = fun_1B18(var_696, var_688, var_680, var_672, var_664, var_656, var_648)
    var_712 = 1;
    var_720 = 8;
    pri = fun_1C60(var_712)
    var_728 = 8802641224559852288;
    var_736 = 8;
    pri = fun_06E0(var_728)
    var_744 = -7417824923732940501;
    var_752 = 8;
    pri = fun_06E0(var_744)
    var_760 = 0;
    var_768 = 8799221602354613894;
    var_776 = 0;
    var_784 = 24;
    pri = fun_1D50(var_776, var_768, var_760)
    var_792 = 0;
    var_800 = 8799220502842985683;
    var_808 = 1;
    var_816 = 24;
    pri = fun_1D50(var_808, var_800, var_792)
    var_832 = 0;
    var_840 = 1;
    var_848 = 0;
    var_856 = 1;
    var_864 = 32;
    pri = fun_1E38(var_856, var_848, var_840, var_832)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_5210
        case default:
        {
// switch_5210_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5210_case_0x0
            var_8 = 5;
            var_16 = 5;
            var_24 = -7417824923732940501;
            var_32 = 24;
            pri = fun_0F40(var_24, var_16, var_8)
            var_40 = 1;
            var_48 = -1;
            var_56 = -1;
            var_64 = 3;
            var_72 = 0;
            var_80 = 0;
            var_88 = -7417824923732940501;
            var_96 = 56;
            pri = fun_1F38(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
            var_104 = 0;
            var_112 = 3;
            var_120 = 0;
            var_128 = 100;
            var_136 = -1;
            OP_PUSH2_C -1105004809400480269, -7417824923732940501
            var_144 = 56;
            pri = fun_1B18(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
            var_152 = -7417824923732940501;
            var_160 = 8;
            pri = fun_08B8(var_152)
            var_168 = 1;
            var_176 = 8;
            pri = fun_1C60(var_168)
            var_184 = 0;
            pri = fun_1D20()
            var_192 = 1;
            var_200 = 0;
            var_208 = 9360;
            var_216 = 8;
            var_224 = 32;
            pri = fun_02E0(var_216, var_208, var_200, var_192)
            var_232 = 0;
            pri = fun_0350()
            pri = 1;
            return pri;
            OP_JUMP switch_5210_case_default
        }
        case 0x1:
        {
// switch_5210_case_0x1
            var_8 = 5;
            var_16 = 5;
            var_24 = -7417824923732940501;
            var_32 = 24;
            pri = fun_0F40(var_24, var_16, var_8)
            var_40 = 1;
            var_48 = -1;
            var_56 = -1;
            var_64 = 3;
            var_72 = 0;
            var_80 = 0;
            var_88 = -7417824923732940501;
            var_96 = 56;
            pri = fun_1F38(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
            var_104 = 0;
            var_112 = 3;
            var_120 = 0;
            var_128 = 100;
            var_136 = -1;
            OP_PUSH2_C -1104999311842339214, -7417824923732940501
            var_144 = 56;
            pri = fun_1B18(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
            var_152 = -7417824923732940501;
            var_160 = 8;
            pri = fun_08B8(var_152)
            var_168 = 1;
            var_176 = 8;
            pri = fun_1C60(var_168)
            var_184 = 0;
            pri = fun_1D20()
            var_192 = -7417824923732940501;
            var_200 = 8;
            pri = fun_0FA8(var_192)
            var_208 = 1;
            var_216 = 0;
            var_224 = 4641240890982006784;
            var_232 = 0;
            var_240 = 0;
            OP_PUSH4_C 4662216274305089536, 4661262997723807744, 4607182418800017408, -7417824923732940501
            var_248 = 72;
            pri = fun_05C0(var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176)
            var_256 = 40;
            var_264 = 8;
            pri = fun_0060(var_256)
            var_272 = 0;
            var_280 = 0;
            var_288 = 0;
            var_296 = 105;
            pri = float(var_296)
            var_304 = pri;
            var_312 = 8802641224559852288;
            var_320 = 40;
            pri = fun_0638(var_312, var_304, var_296, var_288, var_280)
            var_328 = 8802641224559852288;
            var_336 = 8;
            pri = fun_06E0(var_328)
            var_344 = 75;
            var_352 = 8;
            pri = fun_0060(var_344)
            var_360 = 0;
            var_368 = 0;
            var_376 = 0;
            var_384 = 40;
            pri = float(var_384)
            var_392 = pri;
            var_400 = 8802641224559852288;
            var_408 = 40;
            pri = fun_0638(var_400, var_392, var_384, var_376, var_368)
            var_416 = 8802641224559852288;
            var_424 = 8;
            pri = fun_06E0(var_416)
            var_432 = 1;
            var_440 = 0;
            var_448 = 9360;
            var_456 = 8;
            var_464 = 32;
            pri = fun_02E0(var_456, var_448, var_440, var_432)
            var_472 = 0;
            pri = fun_0350()
            var_480 = -7417824923732940501;
            var_488 = 8;
            pri = fun_06E0(var_480)
            var_496 = 0;
            var_504 = -7417824923732940501;
            var_512 = 16;
            pri = fun_0550(var_504, var_496)
            var_520 = 3;
            var_528 = 1;
            pri = EvCameraEnd(var_528, var_520)
            var_536 = 1;
            var_544 = 1;
            var_552 = 0;
            pri = float(var_552)
            var_560 = pri;
            var_568 = 5200;
            pri = float(var_568)
            var_576 = pri;
            var_584 = 4015;
            pri = float(var_584)
            var_592 = pri;
            var_600 = 8802641224559852288;
            var_608 = 48;
            pri = fun_04F8(var_600, var_592, var_584, var_576, var_568, var_560)
            var_616 = 15;
            var_624 = 8;
            pri = fun_0060(var_616)
            pri = 0;
            return pri;
            OP_JUMP switch_5210_case_default
        }
    }
}
// fun_5260
fun_5260() {
    pri = 0;
    return pri;
}
// fun_5278
fun_5278() {
    var_8 = -7417824923732940501;
    var_16 = 8;
    pri = fun_04C8(var_8)
    var_24 = 1160;
    var_32 = 8;
    pri = fun_4058(var_24)
    var_40 = -7748209240823921678;
    pri = VanishFlagReset(var_40)
    var_48 = 2074058171736852688;
    pri = VanishFlagSet(var_48)
    var_56 = -117042616516943265;
    pri = VanishFlagSet(var_56)
    var_64 = -8720581381320787084;
    pri = VanishFlagSet(var_64)
    var_72 = 916765916278606341;
    pri = VanishFlagSet(var_72)
    var_80 = 3728213071223358512;
    pri = VanishFlagSet(var_80)
    var_88 = 7116314638901664256;
    pri = VanishFlagSet(var_88)
    var_96 = 279354136510782265;
    pri = VanishFlagSet(var_96)
    var_104 = 577590369271743373;
    pri = VanishFlagSet(var_104)
    var_112 = 7469020547458231139;
    pri = VanishFlagSet(var_112)
    var_120 = -2125369913008984214;
    pri = VanishFlagSet(var_120)
    var_128 = 6172501094173624636;
    pri = VanishFlagSet(var_128)
    var_136 = 3007037875693876706;
    pri = VanishFlagSet(var_136)
    var_144 = 7506713967005848083;
    pri = FlagSet(var_144)
    var_152 = 5501743159805903958;
    pri = FlagReset(var_152)
    pri = 0;
    return pri;
}
// fun_5530
fun_5530() {
    var_8 = -7417824923732940501;
    var_16 = 8;
    pri = fun_04C8(var_8)
    var_24 = 1160;
    var_32 = 8;
    pri = fun_4058(var_24)
    var_40 = -7748209240823921678;
    pri = VanishFlagReset(var_40)
    var_48 = 2074058171736852688;
    pri = VanishFlagSet(var_48)
    var_56 = -117042616516943265;
    pri = VanishFlagSet(var_56)
    var_64 = -8720581381320787084;
    pri = VanishFlagSet(var_64)
    var_72 = 916765916278606341;
    pri = VanishFlagSet(var_72)
    var_80 = 3728213071223358512;
    pri = VanishFlagSet(var_80)
    var_88 = 7116314638901664256;
    pri = VanishFlagSet(var_88)
    var_96 = 279354136510782265;
    pri = VanishFlagSet(var_96)
    var_104 = 577590369271743373;
    pri = VanishFlagSet(var_104)
    var_112 = 7469020547458231139;
    pri = VanishFlagSet(var_112)
    var_120 = -2125369913008984214;
    pri = VanishFlagSet(var_120)
    var_128 = 6172501094173624636;
    pri = VanishFlagSet(var_128)
    var_136 = 3007037875693876706;
    pri = VanishFlagSet(var_136)
    var_144 = 7506713967005848083;
    pri = FlagSet(var_144)
    var_152 = 5501743159805903958;
    pri = FlagReset(var_152)
    pri = 0;
    return pri;
}
// fun_57E8
fun_57E8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 9250;
    pri = float(var_48)
    var_56 = pri;
    var_64 = 9400;
    pri = float(var_64)
    var_72 = pri;
    OP_PUSH3_C -281100147996315678, -4743939865879759539, 5142993791291183158
    var_80 = 80;
    pri = fun_0408(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0)
    pri = 0;
    return pri;
}
// fun_58B0
fun_58B0() {
    var_8 = 9408;
    var_16 = 8;
    var_24 = 16;
    pri = fun_0280(var_16, var_8)
    var_32 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_5908
fun_5908() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_41F0()
    var_16 = 0;
    pri = fun_4248()
    var_24 = 0;
    pri = fun_4260()
    var_32 = 0;
    pri = fun_4278()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_59F8
    var_40 = 0;
    pri = fun_5260()
    var_48 = 0;
    pri = fun_5278()
    var_56 = 0;
    pri = fun_57E8()
    OP_JUMP lab_5A28
// lab_59F8
    var_8 = 0;
    pri = fun_5530()
    var_16 = 0;
    pri = fun_58B0()
// lab_5A28
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_5A50
fun_5A50() {
    var_8 = 0;
    pri = fun_4248()
    var_16 = 0;
    pri = fun_5278()
    var_24 = 0;
    pri = fun_5530()
    pri = 0;
    return pri;
}
