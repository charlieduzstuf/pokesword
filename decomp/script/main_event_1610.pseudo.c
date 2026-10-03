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
// fun_04A8
fun_04A8() {
    pri = arg_8;
    OP_JZER lab_0518
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
// lab_0518
    var_8 = arg_9;
    var_16 = 0;
    var_24 = arg_7;
    var_32 = arg_6;
    var_40 = arg_5;
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = arg_1;
    var_72 = arg_0;
    var_80 = 72;
    pri = fun_0408(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_88 = 1;
    var_96 = arg_4;
    var_104 = 8802641224559852288;
    var_112 = 24;
    pri = fun_0958(var_104, var_96, var_88)
    pri = arg_8;
    OP_JZER lab_0608
    var_120 = 80;
    var_128 = 8;
    var_136 = 16;
    pri = fun_0280(var_128, var_120)
    var_144 = 0;
    pri = fun_0350()
// lab_0608
    pri = 0;
    return pri;
}
// fun_0618
fun_0618() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0660
// lab_0660
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_06A0
    OP_JUMP lab_0710
// lab_06A0
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_06E0
    OP_JUMP lab_0710
// lab_06E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0660
// lab_0710
    pri = 0;
    return pri;
}
// fun_0728
fun_0728() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0758
fun_0758() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0790
// lab_0790
    var_8 = 0;
    pri = fun_08D8()
    OP_JNZ lab_07C8
    OP_JUMP lab_07F8
// lab_07C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0790
// lab_07F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0828
// lab_0828
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0868
    pri = 0;
    return pri;
// lab_0868
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0828
    pri = 0;
    return pri;
}
// fun_08A8
fun_08A8() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_08D8
fun_08D8() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0900
fun_0900() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0958
fun_0958() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0998
fun_0998() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_09D0
fun_09D0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0A10
fun_0A10() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0A48
fun_0A48() {
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
// fun_0AC0
fun_0AC0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0B10
fun_0B10() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0B68
fun_0B68() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1508(var_8)
    OP_JZER lab_0BE0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1538(var_24)
    OP_JNZ lab_0BE0
    pri = 0;
    return pri;
// lab_0BE0
    OP_JUMP lab_0BF0
// lab_0BF0
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0C50
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0C50
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0BF0
    pri = 0;
    return pri;
}
// fun_0C90
fun_0C90() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0CC8
fun_0CC8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0D08
fun_0D08() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0D40
fun_0D40() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0D88
    pri = 0;
    return pri;
// lab_0D88
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0DC8
// lab_0DC8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1508(var_8)
    OP_JNZ lab_0E50
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0E40
    pri = 0;
    return pri;
// lab_0E50
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0E98
    pri = 0;
    return pri;
// lab_0E98
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0EF8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1068(var_8)
    pri = 0;
    return pri;
// lab_0EF8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0DC8
    pri = 0;
    return pri;
// lab_0E40
    OP_JUMP lab_0E98
}
// fun_0F40
fun_0F40() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0F88
// lab_0F88
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0FE0
    pri = 0;
    return pri;
// lab_0FE0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_1020
    pri = 0;
    return pri;
// lab_1020
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0F88
    pri = 0;
    return pri;
}
// fun_1068
fun_1068() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_10A0
fun_10A0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_10F0
    pri = 0;
    return pri;
// lab_10F0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1508(var_8)
    OP_JZER lab_1220
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1148
    OP_ZERO_P_S 64
// lab_1220
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1258
    OP_CONST_S 64, 1
// lab_1258
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1290
    OP_CONST_S 72, 1
// lab_1290
    var_8 = 1;
    var_16 = 0;
    var_24 = 352;
    var_32 = -1;
    var_40 = -1;
    var_48 = 344;
    var_56 = arg_6;
    var_64 = 0;
    var_72 = 296;
    var_80 = arg_5;
    var_88 = 0;
    var_96 = 256;
    var_104 = arg_4;
    var_112 = arg_3;
    var_120 = arg_2;
    var_128 = arg_1;
    var_136 = arg_0;
    pri = AddParallelCommandControlFacial_(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_1148
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1170
    OP_ZERO_P_S 72
// lab_1170
    var_8 = 0;
    var_16 = 0;
    var_24 = 248;
    var_32 = -1;
    var_40 = -1;
    var_48 = 240;
    var_56 = arg_6;
    var_64 = 0;
    var_72 = 176;
    var_80 = arg_5;
    var_88 = 0;
    var_96 = 128;
    var_104 = arg_4;
    var_112 = arg_3;
    var_120 = arg_2;
    var_128 = arg_1;
    var_136 = arg_0;
    pri = AddParallelCommandControlFacial_(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    OP_JUMP lab_1330
// lab_1330
    pri = 0;
    return pri;
}
// fun_1340
fun_1340() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1380
fun_1380() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13C0
fun_13C0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1400
fun_1400() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1440
fun_1440() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1478
fun_1478() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_14B0
fun_14B0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1440(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1478(var_24)
    pri = 0;
    return pri;
}
// fun_1508
fun_1508() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1538
fun_1538() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1568
fun_1568() {
    OP_JUMP lab_1580
// lab_1580
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1610
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1600
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D40(var_8)
    pri = 0;
    return pri;
// lab_1610
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_16A0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1690
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D40(var_8)
    pri = 0;
    return pri;
// lab_16A0
    pri = 0;
    return pri;
// lab_1690
    OP_JUMP lab_16B0
// lab_16B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1580
    pri = 0;
    return pri;
// lab_1600
    OP_JUMP lab_16B0
}
// fun_16F0
fun_16F0() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D40(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1568(var_40)
    pri = 0;
    return pri;
}
// fun_1778
fun_1778() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_17B0
fun_17B0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_17D8
fun_17D8() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1810
fun_1810() {
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
// switch_1E28
        case default:
        {
// switch_1E28_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1E70
// lab_1E70
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
            OP_JNZ lab_1F18
            var_88 = 0;
            pri = fun_20D0()
// lab_1F18
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1E28_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1A10
                case default:
                {
// switch_1A10_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1A88
// lab_1A88
                    OP_JUMP lab_1E70
                }
                case 0x0:
                {
// switch_1A10_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1A88
                }
                case 0x1:
                {
// switch_1A10_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1A88
                }
                case 0x2:
                {
// switch_1A10_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1A88
                }
                case 0x3:
                {
// switch_1A10_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1A88
                }
                case 0x4:
                {
// switch_1A10_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1A88
                }
                case 0x5:
                {
// switch_1A10_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1A88
                }
            }
        }
        case 0x65:
        {
// switch_1E28_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1BC8
                case default:
                {
// switch_1BC8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1C40
// lab_1C40
                    OP_JUMP lab_1E70
                }
                case 0x0:
                {
// switch_1BC8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1C40
                }
                case 0x1:
                {
// switch_1BC8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1C40
                }
                case 0x2:
                {
// switch_1BC8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1C40
                }
                case 0x3:
                {
// switch_1BC8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1C40
                }
                case 0x4:
                {
// switch_1BC8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1C40
                }
                case 0x5:
                {
// switch_1BC8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1C40
                }
            }
        }
        case 0x66:
        {
// switch_1E28_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1D80
                case default:
                {
// switch_1D80_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1DF8
// lab_1DF8
                    OP_JUMP lab_1E70
                }
                case 0x0:
                {
// switch_1D80_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1DF8
                }
                case 0x1:
                {
// switch_1D80_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1DF8
                }
                case 0x2:
                {
// switch_1D80_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1DF8
                }
                case 0x3:
                {
// switch_1D80_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1DF8
                }
                case 0x4:
                {
// switch_1D80_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1DF8
                }
                case 0x5:
                {
// switch_1D80_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1DF8
                }
            }
        }
    }
}
// fun_1F30
fun_1F30() {
    pri = 440;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 520;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0D08(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1FD8
    pri = 1;
    return pri;
// lab_1FD8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2020
fun_2020() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2070
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1F30(var_8)
    arg_2 = pri;
// lab_2070
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1810(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_20D0
fun_20D0() {
    OP_JUMP lab_20E8
// lab_20E8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2128
    pri = 0;
    return pri;
// lab_2128
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_20E8
    pri = 0;
    return pri;
}
// fun_2168
fun_2168() {
    var_8 = 0;
    pri = fun_20D0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2218
    var_32 = 568;
    pri = SoundPostEvent(var_32)
// lab_2218
    pri = 0;
    return pri;
}
// fun_2228
fun_2228() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2258
fun_2258() {
    pri = arg_3;
    OP_JNZ lab_22A0
    var_8 = 744;
    pri = GetFnvHash64(var_8)
    arg_3 = pri;
// lab_22A0
    pri = arg_6;
    OP_ADD_P_C -1
    var_8 = pri;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    pri = CallTrainerBattleCore(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_2308
fun_2308() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2380
fun_2380() {
    var_8 = 0;
    pri = fun_2308()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2400
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2400
    pri = 1;
    return pri;
// lab_2400
    var_8 = 0;
    pri = fun_2308()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2440
    pri = 1;
    return pri;
// lab_2440
    var_8 = 0;
    pri = fun_2308()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2470
fun_2470() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_24C0
fun_24C0() {
    OP_JUMP lab_24D8
// lab_24D8
    pri = EvCameraMoveWait_()
    OP_JZER lab_2510
    pri = 0;
    return pri;
// lab_2510
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_24D8
    pri = 0;
    return pri;
}
// fun_2550
fun_2550() {
    pri = 999;
    OP_ADDR_ALT -24
    OP_FILL 24
    pri = arg_1;
    OP_JZER lab_25C0
    OP_ADDR_P_ALT -24
    pri = 0;
    OP_STOR_I 
// lab_25C0
    pri = arg_2;
    OP_JZER lab_2600
    OP_ADDR_P_PRI -24
    OP_ADD_P_C 8
    OP_MOVE_ALT 
    pri = 1;
    OP_STOR_I 
// lab_2600
    pri = arg_3;
    OP_JZER lab_2640
    OP_ADDR_P_PRI -24
    OP_ADD_P_C 16
    OP_MOVE_ALT 
    pri = 2;
    OP_STOR_I 
// lab_2640
    OP_CONST_S -32, 3
    OP_ZERO_P_S -40
    OP_JUMP lab_2688
// lab_2688
    OP_LOAD_S_BOTH -40, -32
    OP_JSGEQ lab_2750
    OP_ADDR_P_ALT -24
    pri = var_40;
    OP_LIDX_P_B 3
    OP_EQ_P_C_PRI 999
    OP_JZER lab_26F0
    OP_JUMP lab_2680
// lab_2750
    arg_-3 = 1;
    var_8 = 8;
    pri = fun_0060(var_0)
    OP_ZERO_P_S -40
    pri = arg_4;
    OP_JZER lab_27D8
    var_24 = 752;
    pri = GetFnvHash64(var_24)
    var_40 = pri;
    OP_JUMP lab_2800
// lab_27D8
    var_8 = 824;
    pri = GetFnvHash64(var_8)
    var_40 = pri;
// lab_2800
    OP_ZERO_P_S -48
    OP_JUMP lab_2820
// lab_2820
    OP_CONST_S -56, 1
    OP_ZERO_P_S -64
    OP_JUMP lab_2868
// lab_2868
    OP_LOAD_S_BOTH -64, -32
    OP_JSGEQ lab_2998
    OP_ADDR_P_ALT -24
    pri = var_64;
    OP_LIDX_P_B 3
    OP_EQ_P_C_PRI 999
    OP_JZER lab_28D0
    OP_JUMP lab_2860
// lab_2998
    pri = var_56;
    OP_JNZ lab_29F0
    pri = var_48;
    alt = 100;
    OP_JSGRTR lab_29F0
    pri = 0;
    OP_JUMP lab_29F8
// lab_29F0
    pri = 1;
// lab_29F8
    OP_JZER lab_2A20
    OP_JUMP lab_2A60
// lab_2A20
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_INC_P_S -48
    OP_JUMP lab_2820
// lab_2A60
    pri = 0;
    return pri;
// lab_28D0
    OP_ADDR_P_ALT -24
    pri = var_64;
    OP_LIDX_P_B 3
    OP_ADD_P_C 1
    var_72 = pri;
    var_24 = var_72;
    var_32 = arg_0;
    pri = GetAnimationStateNameHash_(var_32, var_24)
    var_80 = pri;
    OP_LOAD_S_BOTH -40, -80
    OP_JEQ lab_2980
    OP_ZERO_P_S -56
    OP_JUMP lab_2998
// lab_2980
    OP_JUMP lab_2860
// lab_2860
    OP_INC_P_S -64
// lab_26F0
    var_8 = arg_5;
    var_16 = arg_4;
    OP_ADDR_P_ALT -24
    pri = var_40;
    OP_LIDX_P_B 3
    var_24 = pri;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2A78(var_32, var_24, var_16, var_8)
    OP_JUMP lab_2680
// lab_2680
    OP_INC_P_S -40
}
// fun_2A78
fun_2A78() {
    pri = arg_1;
    switch (pri) {
// switch_2CE0
        case default:
        {
// switch_2CE0_case_default
            pri = 0;
            return pri;
            OP_JUMP lab_2D28
// lab_2D28
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_2CE0_case_0x0
            var_8 = arg_2;
            var_16 = 904;
            var_24 = arg_0;
            pri = SetAnimationStateBoolParameter_(var_24, var_16, var_8)
            pri = arg_3;
            OP_JZER lab_2B18
            var_32 = 968;
            var_40 = arg_0;
            pri = SetAnimationStateTrigger_(var_40, var_32)
            OP_JUMP lab_2B40
// lab_2B18
            var_8 = 1104;
            var_16 = arg_0;
            pri = SetAnimationStateTrigger_(var_16, var_8)
// lab_2B40
            OP_JUMP lab_2D28
        }
        case 0x1:
        {
// switch_2CE0_case_0x1
            var_8 = arg_2;
            var_16 = 1168;
            var_24 = arg_0;
            pri = SetAnimationStateBoolParameter_(var_24, var_16, var_8)
            pri = arg_3;
            OP_JZER lab_2BD0
            var_32 = 1232;
            var_40 = arg_0;
            pri = SetAnimationStateTrigger_(var_40, var_32)
            OP_JUMP lab_2BF8
// lab_2BD0
            var_8 = 1368;
            var_16 = arg_0;
            pri = SetAnimationStateTrigger_(var_16, var_8)
// lab_2BF8
            OP_JUMP lab_2D28
        }
        case 0x2:
        {
// switch_2CE0_case_0x2
            var_8 = arg_2;
            var_16 = 1432;
            var_24 = arg_0;
            pri = SetAnimationStateBoolParameter_(var_24, var_16, var_8)
            pri = arg_3;
            OP_JZER lab_2C88
            var_32 = 1496;
            var_40 = arg_0;
            pri = SetAnimationStateTrigger_(var_40, var_32)
            OP_JUMP lab_2CB0
// lab_2C88
            var_8 = 1632;
            var_16 = arg_0;
            pri = SetAnimationStateTrigger_(var_16, var_8)
// lab_2CB0
            OP_JUMP lab_2D28
        }
    }
}
// fun_2D38
fun_2D38() {
    var_8 = 1696;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2D78
fun_2D78() {
    var_16 = 1720;
    pri = GetFnvHash64(var_16)
    var_8 = pri;
    var_24 = 1;
    var_32 = 8;
    pri = fun_0060(var_24)
    OP_ZERO_P_S -16
    OP_JUMP lab_2DF0
// lab_2DF0
    var_16 = 0;
    var_24 = arg_0;
    pri = GetAnimationStateNameHash_(var_24, var_16)
    var_24 = pri;
    OP_LOAD_S_BOTH -8, -24
    OP_JEQ lab_2E88
    pri = var_16;
    alt = 600;
    OP_JSGRTR lab_2E88
    pri = 0;
    OP_JUMP lab_2E90
// lab_2E88
    pri = 1;
// lab_2E90
    OP_JZER lab_2EB8
    OP_JUMP lab_2EF8
// lab_2EB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_INC_P_S -16
    OP_JUMP lab_2DF0
// lab_2EF8
    pri = 0;
    return pri;
}
// fun_2F10
fun_2F10() {
    pri = arg_6;
    OP_JNZ lab_2F48
    var_8 = 0;
    pri = fun_1340()
// lab_2F48
    pri = arg_1;
    switch (pri) {
// switch_44B0
        case default:
        {
// switch_44B0_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4800
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4800
            pri = 1;
            OP_JUMP lab_4808
// lab_4800
            pri = 0;
// lab_4808
            OP_JZER lab_4960
            var_16 = 9448;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0D08(var_24, var_16)
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
            var_64 = 9552;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 1776;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_49C0
// lab_4960
            var_8 = 64;
            alt = 1776;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_49C0
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4A20
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4A80
// lab_4A20
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4A80
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4A80
            pri = arg_2;
            OP_JZER lab_4AC0
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4AC0
            var_8 = 0;
            pri = fun_1380()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_44B0_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_44B0_case_default
        }
        case 0x1:
        {
// switch_44B0_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_44B0_case_default
        }
        case 0x2:
        {
// switch_44B0_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_44B0_case_default
        }
        case 0x3:
        {
// switch_44B0_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_44B0_case_default
        }
        case 0x4:
        {
// switch_44B0_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_44B0_case_default
        }
        case 0x5:
        {
// switch_44B0_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 6736;
            var_72 = 6728;
            var_80 = 6720;
            alt = 1776;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_44B0_case_default
        }
        case 0x6:
        {
// switch_44B0_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 6760;
            var_72 = 6752;
            var_80 = 6744;
            alt = 1776;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_44B0_case_default
        }
        case 0x7:
        {
// switch_44B0_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 6784;
            var_72 = 6776;
            var_80 = 6768;
            alt = 1776;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_44B0_case_default
        }
        case 0x8:
        {
// switch_44B0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_44B0_case_default
        }
        case 0x9:
        {
// switch_44B0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 6808;
            var_72 = 6800;
            var_80 = 6792;
            alt = 1776;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_44B0_case_default
        }
        case 0xa:
        {
// switch_44B0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 6832;
            var_72 = 6824;
            var_80 = 6816;
            alt = 1776;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_44B0_case_default
        }
        case 0xb:
        {
// switch_44B0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 6856;
            var_72 = 6848;
            var_80 = 6840;
            alt = 1776;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_44B0_case_default
        }
        case 0xc:
        {
// switch_44B0_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 6880;
            var_72 = 6872;
            var_80 = 6864;
            alt = 1776;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_44B0_case_default
        }
        case 0xd:
        {
// switch_44B0_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 6904;
            var_72 = 6896;
            var_80 = 6888;
            alt = 1776;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_44B0_case_default
        }
        case 0xe:
        {
// switch_44B0_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 6928;
            var_72 = 6920;
            var_80 = 6912;
            alt = 1776;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_44B0_case_default
        }
        case 0xf:
        {
// switch_44B0_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_44B0_case_default
        }
        case 0x10:
        {
// switch_44B0_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_44B0_case_default
        }
        case 0x11:
        {
// switch_44B0_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 6952;
            var_72 = 6944;
            var_80 = 6936;
            alt = 1776;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_44B0_case_default
        }
        case 0x12:
        {
// switch_44B0_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 6976;
            var_72 = 6968;
            var_80 = 6960;
            alt = 1776;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_44B0_case_default
        }
        case 0x13:
        {
// switch_44B0_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_44B0_case_default
        }
        case 0x14:
        {
// switch_44B0_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_44B0_case_default
        }
        case 0x15:
        {
// switch_44B0_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_44B0_case_default
        }
        case 0x16:
        {
// switch_44B0_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_44B0_case_default
        }
        case 0x17:
        {
// switch_44B0_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_44B0_case_default
        }
        case 0x18:
        {
// switch_44B0_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_44B0_case_default
        }
        case 0x19:
        {
// switch_44B0_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 7000;
            var_72 = 6992;
            var_80 = 6984;
            alt = 1776;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_44B0_case_default
        }
        case 0x1a:
        {
// switch_44B0_case_0x1a
            var_8 = 1;
            var_16 = 7008;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CC8(var_24, var_16, var_8)
            var_40 = 7144;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0C90(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 7224;
            var_88 = 7216;
            var_96 = 7208;
            alt = 1776;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_10A0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_44B0_case_default
        }
        case 0x1b:
        {
// switch_44B0_case_0x1b
            var_8 = 3;
            var_16 = 7232;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CC8(var_24, var_16, var_8)
            var_40 = 7368;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0C90(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 7448;
            var_88 = 7440;
            var_96 = 7432;
            alt = 1776;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_10A0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_44B0_case_default
        }
        case 0x1c:
        {
// switch_44B0_case_0x1c
            var_8 = 2;
            var_16 = 7456;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CC8(var_24, var_16, var_8)
            var_40 = 7592;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0C90(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 7672;
            var_88 = 7664;
            var_96 = 7656;
            alt = 1776;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_10A0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_44B0_case_default
        }
        case 0x1d:
        {
// switch_44B0_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7680;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_44B0_case_default
        }
        case 0x1e:
        {
// switch_44B0_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7816;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_44B0_case_default
        }
        case 0x1f:
        {
// switch_44B0_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7952;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_44B0_case_default
        }
        case 0x20:
        {
// switch_44B0_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8088;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_44B0_case_default
        }
        case 0x21:
        {
// switch_44B0_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8208;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_44B0_case_default
        }
        case 0x22:
        {
// switch_44B0_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8328;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_44B0_case_default
        }
        case 0x23:
        {
// switch_44B0_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8464;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_44B0_case_default
        }
        case 0x24:
        {
// switch_44B0_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8600;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_44B0_case_default
        }
        case 0x25:
        {
// switch_44B0_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8736;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_44B0_case_default
        }
        case 0x26:
        {
// switch_44B0_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8872;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_44B0_case_default
        }
        case 0x27:
        {
// switch_44B0_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9016;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_44B0_case_default
        }
        case 0x28:
        {
// switch_44B0_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9160;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_44B0_case_default
        }
        case 0x29:
        {
// switch_44B0_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9304;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_44B0_case_default
        }
    }
}
// fun_4AF0
fun_4AF0() {
    pri = arg_5;
    OP_JNZ lab_4B28
    var_8 = 0;
    pri = fun_1340()
// lab_4B28
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4B78
    OP_CONST_S -8, -1
// lab_4B78
    pri = arg_1;
    switch (pri) {
// switch_6630
        case default:
        {
// switch_6630_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6AD8
            var_520 = 29312;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0D08(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6AD8
            pri = 1;
            OP_JUMP lab_6AE0
// lab_6AD8
            pri = 0;
// lab_6AE0
            OP_JZER lab_6B30
            var_8 = 64;
            var_16 = 29408;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6D88
// lab_6B30
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6B98
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6B98
            pri = 1;
            OP_JUMP lab_6BA0
// lab_6B98
            pri = 0;
// lab_6BA0
            OP_JZER lab_6D28
            var_16 = 29584;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0D08(var_24, var_16)
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
            var_176 = 29688;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 29704;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 9568;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_6D88
// lab_6D28
            var_8 = 64;
            alt = 9568;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_6D88
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6DF8
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6DF8
            var_8 = 0;
            pri = fun_1380()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6630_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x1:
        {
// switch_6630_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x2:
        {
// switch_6630_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x3:
        {
// switch_6630_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x4:
        {
// switch_6630_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x5:
        {
// switch_6630_case_0x5
            var_8 = 2;
            var_16 = 19568;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CC8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_1068(var_40)
            OP_JUMP switch_6630_case_default
        }
        case 0x6:
        {
// switch_6630_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x7:
        {
// switch_6630_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x8:
        {
// switch_6630_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x9:
        {
// switch_6630_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0xa:
        {
// switch_6630_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0xb:
        {
// switch_6630_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0xc:
        {
// switch_6630_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0xd:
        {
// switch_6630_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20216;
            var_72 = 20040;
            var_80 = 19856;
            var_88 = 19664;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6630_case_default
        }
        case 0xe:
        {
// switch_6630_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20872;
            var_72 = 20664;
            var_80 = 20448;
            var_88 = 20224;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6630_case_default
        }
        case 0xf:
        {
// switch_6630_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21264;
            var_72 = 21144;
            var_80 = 21016;
            var_88 = 20880;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6630_case_default
        }
        case 0x10:
        {
// switch_6630_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21608;
            var_72 = 21504;
            var_80 = 21392;
            var_88 = 21272;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6630_case_default
        }
        case 0x11:
        {
// switch_6630_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21952;
            var_72 = 21848;
            var_80 = 21736;
            var_88 = 21616;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6630_case_default
        }
        case 0x12:
        {
// switch_6630_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x13:
        {
// switch_6630_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x14:
        {
// switch_6630_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22512;
            var_72 = 22336;
            var_80 = 22152;
            var_88 = 21960;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6630_case_default
        }
        case 0x15:
        {
// switch_6630_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x16:
        {
// switch_6630_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x17:
        {
// switch_6630_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x18:
        {
// switch_6630_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x19:
        {
// switch_6630_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x1a:
        {
// switch_6630_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x1b:
        {
// switch_6630_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x1c:
        {
// switch_6630_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 22904;
            var_72 = 22784;
            var_80 = 22656;
            var_88 = 22520;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6630_case_default
        }
        case 0x1d:
        {
// switch_6630_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x1e:
        {
// switch_6630_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 23368;
            var_72 = 23224;
            var_80 = 23072;
            var_88 = 22912;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6630_case_default
        }
        case 0x1f:
        {
// switch_6630_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x20:
        {
// switch_6630_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x21:
        {
// switch_6630_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x22:
        {
// switch_6630_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x23:
        {
// switch_6630_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x24:
        {
// switch_6630_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23736;
            var_72 = 23624;
            var_80 = 23504;
            var_88 = 23376;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6630_case_default
        }
        case 0x25:
        {
// switch_6630_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24104;
            var_72 = 23992;
            var_80 = 23872;
            var_88 = 23744;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6630_case_default
        }
        case 0x26:
        {
// switch_6630_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x27:
        {
// switch_6630_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x28:
        {
// switch_6630_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x29:
        {
// switch_6630_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24544;
            var_72 = 24408;
            var_80 = 24264;
            var_88 = 24112;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6630_case_default
        }
        case 0x2a:
        {
// switch_6630_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24936;
            var_72 = 24816;
            var_80 = 24688;
            var_88 = 24552;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6630_case_default
        }
        case 0x2b:
        {
// switch_6630_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25352;
            var_72 = 25224;
            var_80 = 25088;
            var_88 = 24944;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6630_case_default
        }
        case 0x2c:
        {
// switch_6630_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25792;
            var_72 = 25656;
            var_80 = 25512;
            var_88 = 25360;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6630_case_default
        }
        case 0x2d:
        {
// switch_6630_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x2e:
        {
// switch_6630_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26112;
            var_72 = 26016;
            var_80 = 25912;
            var_88 = 25800;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6630_case_default
        }
        case 0x2f:
        {
// switch_6630_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26504;
            var_72 = 26384;
            var_80 = 26256;
            var_88 = 26120;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6630_case_default
        }
        case 0x30:
        {
// switch_6630_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26896;
            var_72 = 26776;
            var_80 = 26648;
            var_88 = 26512;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6630_case_default
        }
        case 0x31:
        {
// switch_6630_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x32:
        {
// switch_6630_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x33:
        {
// switch_6630_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27288;
            var_72 = 27168;
            var_80 = 27040;
            var_88 = 26904;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6630_case_default
        }
        case 0x34:
        {
// switch_6630_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27656;
            var_72 = 27544;
            var_80 = 27424;
            var_88 = 27296;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6630_case_default
        }
        case 0x35:
        {
// switch_6630_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28144;
            var_72 = 27992;
            var_80 = 27832;
            var_88 = 27664;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6630_case_default
        }
        case 0x36:
        {
// switch_6630_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28512;
            var_72 = 28400;
            var_80 = 28280;
            var_88 = 28152;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6630_case_default
        }
        case 0x37:
        {
// switch_6630_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x38:
        {
// switch_6630_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28880;
            var_72 = 28768;
            var_80 = 28648;
            var_88 = 28520;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_10A0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6630_case_default
        }
        case 0x39:
        {
// switch_6630_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x3a:
        {
// switch_6630_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x3b:
        {
// switch_6630_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x3c:
        {
// switch_6630_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 28888;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x3d:
        {
// switch_6630_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 29064;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
        case 0x3e:
        {
// switch_6630_case_0x3e
            var_8 = 4;
            var_16 = 29208;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CC8(var_24, var_16, var_8)
            OP_JUMP switch_6630_case_default
        }
    }
}
// fun_6E28
fun_6E28() {
    pri = arg_4;
    OP_JNZ lab_6E60
    var_8 = 0;
    pri = fun_1340()
// lab_6E60
    pri = arg_1;
    switch (pri) {
// switch_8238
        case default:
        {
// switch_8238_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 30280;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1508(var_264)
            OP_JZER lab_8800
            pri = arg_3;
            switch (pri) {
// switch_87A8
                case default:
                {
// switch_87A8_case_default
                    OP_JUMP lab_8AB8
// lab_8AB8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8B28
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8B28
                    var_8 = 0;
                    pri = fun_1380()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_87A8_case_0x1
                    var_8 = 32;
                    var_16 = 30432;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_87A8_case_default
                }
                case 0x2:
                {
// switch_87A8_case_0x2
                    var_8 = 32;
                    var_16 = 30536;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_87A8_case_default
                }
                case 0x3:
                {
// switch_87A8_case_0x3
                    var_8 = 32;
                    var_16 = 30336;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_87A8_case_default
                }
            }
// lab_8800
            pri = arg_1;
            OP_JZER lab_8850
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_8850
            pri = 0;
            OP_JUMP lab_8858
// lab_8850
            pri = 1;
// lab_8858
            OP_JZER lab_88C0
            var_8 = 30632;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0D08(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_88C0
            pri = 1;
            OP_JUMP lab_88C8
// lab_88C0
            pri = 0;
// lab_88C8
            OP_JZER lab_8918
            var_8 = 32;
            var_16 = 30728;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_8AB8
// lab_8918
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8980
            var_8 = 32;
            var_16 = 30888;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_8AB8
// lab_8980
            var_16 = 31008;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0D08(var_24, var_16)
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
            var_176 = 31112;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 31128;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_8238_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x1:
        {
// switch_8238_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x2:
        {
// switch_8238_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x3:
        {
// switch_8238_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x4:
        {
// switch_8238_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x5:
        {
// switch_8238_case_0x5
            var_8 = 1;
            var_16 = 29760;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CC8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_1068(var_40)
            OP_JUMP switch_8238_case_default
        }
        case 0x6:
        {
// switch_8238_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x7:
        {
// switch_8238_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x8:
        {
// switch_8238_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x9:
        {
// switch_8238_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0xa:
        {
// switch_8238_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0xb:
        {
// switch_8238_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0xc:
        {
// switch_8238_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0xd:
        {
// switch_8238_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0xe:
        {
// switch_8238_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0xf:
        {
// switch_8238_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x10:
        {
// switch_8238_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x11:
        {
// switch_8238_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x12:
        {
// switch_8238_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x13:
        {
// switch_8238_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x14:
        {
// switch_8238_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x15:
        {
// switch_8238_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x16:
        {
// switch_8238_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x17:
        {
// switch_8238_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x18:
        {
// switch_8238_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x19:
        {
// switch_8238_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x1a:
        {
// switch_8238_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x1b:
        {
// switch_8238_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x1c:
        {
// switch_8238_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x1d:
        {
// switch_8238_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x1e:
        {
// switch_8238_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x1f:
        {
// switch_8238_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x20:
        {
// switch_8238_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x21:
        {
// switch_8238_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x22:
        {
// switch_8238_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x23:
        {
// switch_8238_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x24:
        {
// switch_8238_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x25:
        {
// switch_8238_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x26:
        {
// switch_8238_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x27:
        {
// switch_8238_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x28:
        {
// switch_8238_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x29:
        {
// switch_8238_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x2a:
        {
// switch_8238_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x2b:
        {
// switch_8238_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x2c:
        {
// switch_8238_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x2d:
        {
// switch_8238_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x2e:
        {
// switch_8238_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x2f:
        {
// switch_8238_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x30:
        {
// switch_8238_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x31:
        {
// switch_8238_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x32:
        {
// switch_8238_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x33:
        {
// switch_8238_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x34:
        {
// switch_8238_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x35:
        {
// switch_8238_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x36:
        {
// switch_8238_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x37:
        {
// switch_8238_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x38:
        {
// switch_8238_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x39:
        {
// switch_8238_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x3a:
        {
// switch_8238_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x3b:
        {
// switch_8238_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x3c:
        {
// switch_8238_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 29856;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x3d:
        {
// switch_8238_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 30032;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
        case 0x3e:
        {
// switch_8238_case_0x3e
            var_8 = 3;
            var_16 = 30176;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CC8(var_24, var_16, var_8)
            OP_JUMP switch_8238_case_default
        }
    }
}
// fun_8B58
fun_8B58() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8D68(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 31176;
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
    var_424 = 31232;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 31248;
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
    OP_JZER lab_8D50
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_8D50
    pri = 0;
    return pri;
}
// fun_8D68
fun_8D68() {
    var_8 = arg_1;
    var_16 = 31296;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0CC8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8DB0
fun_8DB0() {
    pri = 31400;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_8E38
// lab_8E38
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_8FB8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_8FA8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_8EF8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_8EF8
    pri = 0;
    OP_JUMP lab_8F00
// lab_8FB8
    pri = 0;
    return pri;
// lab_8FA8
    OP_JUMP lab_8E30
// lab_8E30
    OP_INC_P_S -936
// lab_8EF8
    pri = 1;
// lab_8F00
    OP_JZER lab_8F78
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8F70
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_8F78
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_8F70
}
// fun_8FD8
fun_8FD8() {
    var_8 = -4562270413023387603;
    pri = WorkGet(var_8)
    return pri;
}
// fun_9010
fun_9010() {
    var_8 = 0;
    pri = fun_8FD8()
    switch (pri) {
// switch_90C0
        case default:
        {
// switch_90C0_case_default
            pri = arg_1;
            return pri;
            OP_JUMP lab_9108
// lab_9108
            pri = arg_1;
            return pri;
        }
        case 0x0:
        {
// switch_90C0_case_0x0
            pri = arg_0;
            return pri;
            OP_JUMP lab_9108
        }
        case 0x1:
        {
// switch_90C0_case_0x1
            pri = arg_1;
            return pri;
            OP_JUMP lab_9108
        }
        case 0x2:
        {
// switch_90C0_case_0x2
            pri = arg_2;
            return pri;
            OP_JUMP lab_9108
        }
    }
}
// fun_9118
fun_9118() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_91B0
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_17B0()
// lab_91B0
    pri = arg_4;
    OP_JZER lab_91E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_17D8(var_8)
// lab_91E8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_9240
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_9240
    pri = 0;
    OP_JUMP lab_9248
// lab_9240
    pri = 1;
// lab_9248
    OP_JZER lab_9310
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_9310
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_92E8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_16F0(var_32, var_24)
    OP_JUMP lab_9310
// lab_9310
    pri = arg_2;
    OP_JZER lab_93E8
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_93B8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_13C0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0A10(var_40)
    OP_JUMP lab_93E8
// lab_93E8
    pri = arg_3;
    OP_JZER lab_9420
    var_8 = 1;
    var_16 = 8;
    pri = fun_1778(var_8)
// lab_9420
    pri = 0;
    return pri;
// lab_93B8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_13C0(var_16, var_8)
// lab_92E8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_16F0(var_16, var_8)
}
// fun_9430
fun_9430() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_95B0
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_94C8
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
// lab_95B0
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_94C8
    pri = arg_0;
    OP_JNZ lab_9510
    var_8 = 32320;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_9530
// lab_9510
    var_8 = 32496;
    pri = SoundPostEvent(var_8)
// lab_9530
    var_8 = 0;
    var_16 = 8;
    pri = fun_0618(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_95B0
    var_24 = 80;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0280(var_32, var_24)
    var_48 = 0;
    pri = fun_0350()
}
// fun_95F0
fun_95F0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_8DB0(var_24)
    pri = 0;
    return pri;
}
// fun_9658
fun_9658() {
    pri = g_mode;
    switch (pri) {
// switch_9718
        case default:
        {
// switch_9718_case_default
            pri = CommandNOP()
            OP_JUMP lab_9760
// lab_9760
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_9718_case_0x0
            var_8 = 0;
            pri = fun_9770()
            OP_JUMP lab_9760
        }
        case 0x38b66b2aefe8da00:
        {
// switch_9718_case_0x38b66b2aefe8da00
            var_8 = 0;
            pri = fun_E6D0()
            OP_JUMP lab_9760
        }
        case 0x603659278cd7fe6c:
        {
// switch_9718_case_0x603659278cd7fe6c
            var_8 = 0;
            pri = fun_E7C0()
            OP_JUMP lab_9760
        }
    }
}
// fun_9770
fun_9770() {
    pri = 0;
    return pri;
}
// fun_9788
fun_9788() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_9118(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_97E0
fun_97E0() {
    var_8 = -7963071361348574373;
    var_16 = 8;
    pri = fun_0728(var_8)
    var_24 = -7963079057929971850;
    var_32 = 8;
    pri = fun_0728(var_24)
    pri = 0;
    return pri;
}
// fun_9848
fun_9848() {
    var_8 = 0;
    pri = fun_0758()
    pri = 0;
    return pri;
}
// fun_9878
fun_9878() {
    pri = EvCameraStart()
    var_8 = 0;
    var_16 = 4631952216750555136;
    var_24 = 0;
    OP_PUSH5_C 4657180708961968456, 4640717347525324964, 4657537896309367767, 4659183095558008996, 4639021460790643261
    var_32 = 4657513157297742807;
    var_40 = 1;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 1;
    var_56 = 1;
    OP_PUSH4_C 4640537203540230144, 4658045826700935168, 4657276168561491968, 8802641224559852288
    var_64 = 48;
    pri = fun_0900(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 1;
    var_80 = 1;
    OP_PUSH4_C 4640537203540230144, 4658045826700935168, 4657797337073057792, -988081304844711546
    var_88 = 48;
    pri = fun_0900(var_80, var_72, var_64, var_56, var_48, var_40)
    var_96 = 0;
    pri = fun_0758()
    var_104 = 0;
    var_112 = -7963071361348574373;
    var_120 = 16;
    pri = fun_0998(var_112, var_104)
    var_128 = 0;
    var_136 = -7963079057929971850;
    var_144 = 16;
    pri = fun_0998(var_136, var_128)
    var_152 = 1;
    var_160 = 8;
    pri = fun_0060(var_152)
    var_168 = 1;
    var_176 = 0;
    var_184 = 4641240890982006784;
    var_192 = 0;
    var_200 = 0;
    OP_PUSH4_C 4657273969538236416, 4657276168561491968, 4607182418800017408, 8802641224559852288
    var_208 = 72;
    pri = fun_0A48(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_216 = 1;
    var_224 = 0;
    var_232 = 4641240890982006784;
    var_240 = 0;
    var_248 = 0;
    OP_PUSH4_C 4657175013491736576, 4657797337073057792, 4607182418800017408, -988081304844711546
    var_256 = 72;
    pri = fun_0A48(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_264 = 5;
    var_272 = 8;
    pri = fun_0060(var_264)
    var_280 = 32760;
    pri = SoundPostEvent(var_280)
    var_288 = 33064;
    var_296 = 8;
    var_304 = 16;
    pri = fun_0280(var_296, var_288)
    var_312 = 0;
    pri = fun_0350()
    var_320 = 8802641224559852288;
    var_328 = 8;
    pri = fun_0B68(var_320)
    var_336 = -988081304844711546;
    var_344 = 8;
    pri = fun_0B68(var_336)
    var_352 = 20;
    var_360 = 8;
    pri = fun_0060(var_352)
    var_368 = 95870857401176204;
    var_376 = 8;
    pri = fun_2D38(var_368)
    var_384 = 33128;
    pri = SoundPostEvent(var_384)
    var_392 = 1;
    var_400 = -1;
    var_408 = -1;
    var_416 = 3;
    var_424 = 0;
    var_432 = 4;
    var_440 = -988081304844711546;
    var_448 = 56;
    pri = fun_2F10(var_440, var_432, var_424, var_416, var_408, var_400, var_392)
    var_456 = 150;
    var_464 = 8;
    pri = fun_0060(var_456)
    var_472 = 0;
    var_480 = 3;
    var_488 = 0;
    var_496 = 100;
    var_504 = -1;
    OP_PUSH2_C -6052860303342805983, -988081304844711546
    var_512 = 56;
    pri = fun_2020(var_504, var_496, var_488, var_480, var_472, var_464, var_456)
    var_520 = 1;
    var_528 = 8;
    pri = fun_2168(var_520)
    var_536 = 0;
    pri = fun_2228()
    var_544 = 95870857401176204;
    var_552 = 8;
    pri = fun_2D78(var_544)
    var_560 = 33352;
    pri = SoundPostEvent(var_560)
    var_568 = 15;
    var_576 = 8;
    pri = fun_0060(var_568)
    var_584 = 1;
    var_592 = 1;
    var_600 = -1;
    var_608 = -1;
    var_616 = 0;
    var_624 = 3;
    var_632 = -988081304844711546;
    var_640 = 56;
    pri = fun_4AF0(var_632, var_624, var_616, var_608, var_600, var_592, var_584)
    var_648 = 0;
    var_656 = 3;
    var_664 = 0;
    var_672 = 100;
    var_680 = -1;
    OP_PUSH2_C -6052863601877690616, -988081304844711546
    var_688 = 56;
    pri = fun_2020(var_680, var_672, var_664, var_656, var_648, var_640, var_632)
    var_696 = 1;
    var_704 = 8;
    pri = fun_2168(var_696)
    var_712 = 0;
    pri = fun_2228()
    var_720 = 1;
    var_728 = 3;
    var_736 = 0;
    var_744 = 3;
    var_752 = -988081304844711546;
    var_760 = 40;
    pri = fun_6E28(var_752, var_744, var_736, var_728, var_720)
    var_768 = 1;
    var_776 = -7963071361348574373;
    var_784 = 16;
    pri = fun_0998(var_776, var_768)
    var_792 = 1;
    var_800 = -7963079057929971850;
    var_808 = 16;
    pri = fun_0998(var_800, var_792)
    var_816 = 1;
    var_824 = 1;
    var_832 = 0;
    OP_PUSH3_C 4647239826423152640, 4657427901166125056, -7963071361348574373
    var_840 = 48;
    pri = fun_0900(var_832, var_824, var_816, var_808, var_800, var_792)
    var_848 = 1;
    var_856 = 1;
    var_864 = 0;
    OP_PUSH3_C 4647239826423152640, 4657781943910268928, -7963079057929971850
    var_872 = 48;
    pri = fun_0900(var_864, var_856, var_848, var_840, var_832, var_824)
    var_880 = 1;
    var_888 = 0;
    var_896 = 4641240890982006784;
    var_904 = 0;
    var_912 = 0;
    OP_PUSH4_C 4652332764283011072, 4657427901166125056, 4611686018427387904, -7963071361348574373
    var_920 = 72;
    pri = fun_0A48(var_912, var_904, var_896, var_888, var_880, var_872, var_864, var_856, var_848)
    var_928 = 1;
    var_936 = 0;
    var_944 = 4641240890982006784;
    var_952 = 0;
    var_960 = 0;
    OP_PUSH4_C 4652332764283011072, 4657781943910268928, 4611686018427387904, -7963079057929971850
    var_968 = 72;
    pri = fun_0A48(var_960, var_952, var_944, var_936, var_928, var_920, var_912, var_904, var_896)
    var_976 = 33560;
    pri = SoundPostEvent(var_976)
    var_984 = 0;
    var_992 = 1;
    var_1000 = 0;
    var_1008 = 1;
    var_1016 = 0;
    var_1024 = 95870857401176204;
    var_1032 = 48;
    pri = fun_2550(var_1024, var_1016, var_1008, var_1000, var_992, var_984)
    var_1040 = 15;
    var_1048 = 8;
    pri = fun_0060(var_1040)
    var_1056 = -988081304844711546;
    var_1064 = 8;
    pri = fun_0D40(var_1056)
    var_1072 = 0;
    var_1080 = 4631952216750555136;
    var_1088 = 0;
    OP_PUSH5_C 4652936879951776317, 4640287746342120325, 4657579611780525588, 4653474980942409892, 4640240247439800402
    var_1096 = 4657576379216339927;
    var_1104 = 1;
    pri = EvCameraMove(var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032)
    var_1112 = 33712;
    pri = SoundPostEvent(var_1112)
    var_1120 = 0;
    var_1128 = 0;
    var_1136 = 0;
    var_1144 = 1;
    var_1152 = 0;
    var_1160 = 95870857401176204;
    var_1168 = 48;
    pri = fun_2550(var_1160, var_1152, var_1144, var_1136, var_1128, var_1120)
    var_1176 = -7963071361348574373;
    var_1184 = 8;
    pri = fun_0B68(var_1176)
    var_1192 = -7963079057929971850;
    var_1200 = 8;
    pri = fun_0B68(var_1192)
    var_1208 = 1;
    var_1216 = 1;
    var_1224 = -1;
    var_1232 = -1;
    var_1240 = 0;
    var_1248 = 1;
    var_1256 = -7963071361348574373;
    var_1264 = 56;
    pri = fun_4AF0(var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208)
    var_1272 = 0;
    var_1280 = 3;
    var_1288 = 0;
    var_1296 = 100;
    var_1304 = -1;
    OP_PUSH2_C 3432409608308594016, -7963071361348574373
    var_1312 = 56;
    pri = fun_2020(var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256)
    var_1320 = 1;
    var_1328 = 8;
    pri = fun_2168(var_1320)
    var_1336 = 0;
    pri = fun_2228()
    var_1344 = 1;
    var_1352 = 3;
    var_1360 = 0;
    var_1368 = 1;
    var_1376 = -7963071361348574373;
    var_1384 = 40;
    pri = fun_6E28(var_1376, var_1368, var_1360, var_1352, var_1344)
    var_1392 = 1;
    var_1400 = 1;
    var_1408 = -1;
    var_1416 = -1;
    var_1424 = 0;
    var_1432 = 2;
    var_1440 = -7963079057929971850;
    var_1448 = 56;
    pri = fun_4AF0(var_1440, var_1432, var_1424, var_1416, var_1408, var_1400, var_1392)
    var_1456 = 0;
    var_1464 = 3;
    var_1472 = 0;
    var_1480 = 100;
    var_1488 = -1;
    OP_PUSH2_C 6494320744769949303, -7963079057929971850
    var_1496 = 56;
    pri = fun_2020(var_1488, var_1480, var_1472, var_1464, var_1456, var_1448, var_1440)
    var_1504 = 1;
    var_1512 = 8;
    pri = fun_2168(var_1504)
    var_1520 = 0;
    pri = fun_2228()
    var_1528 = 1;
    var_1536 = 3;
    var_1544 = 0;
    var_1552 = 2;
    var_1560 = -7963079057929971850;
    var_1568 = 40;
    pri = fun_6E28(var_1560, var_1552, var_1544, var_1536, var_1528)
    var_1576 = 10;
    var_1584 = 8;
    pri = fun_0060(var_1576)
    var_1592 = -7963071361348574373;
    var_1600 = 8;
    pri = fun_0D40(var_1592)
    var_1608 = -7963079057929971850;
    var_1616 = 8;
    pri = fun_0D40(var_1608)
    var_1624 = 0;
    var_1632 = 2;
    var_1640 = -7963071361348574373;
    var_1648 = 24;
    pri = fun_8B58(var_1640, var_1632, var_1624)
    var_1656 = 0;
    var_1664 = 2;
    var_1672 = -7963079057929971850;
    var_1680 = 24;
    pri = fun_8B58(var_1672, var_1664, var_1656)
    var_1688 = 30;
    var_1696 = 8;
    pri = fun_0060(var_1688)
    var_1704 = -7963071361348574373;
    var_1712 = 8;
    pri = fun_0D40(var_1704)
    var_1720 = -7963079057929971850;
    var_1728 = 8;
    pri = fun_0D40(var_1720)
    var_1744 = 314;
    var_1752 = 313;
    var_1760 = 312;
    var_1768 = 24;
    pri = fun_9010(var_1760, var_1752, var_1744)
    var_8 = pri;
    var_1776 = -1;
    var_1784 = 0;
    var_1792 = 0;
    var_1800 = 6281329270072155947;
    var_1808 = 140;
    var_1816 = 309;
    var_1824 = var_8;
    var_1832 = 56;
    pri = fun_2258(var_1824, var_1816, var_1808, var_1800, var_1792, var_1784, var_1776)
    var_1840 = 0;
    pri = fun_2380()
    OP_JZER lab_A768
    var_1848 = 0;
    pri = fun_2470()
// lab_A768
    var_8 = 1;
    var_16 = -7963071361348574373;
    var_24 = 16;
    pri = fun_09D0(var_16, var_8)
    var_32 = 1;
    var_40 = -7963079057929971850;
    var_48 = 16;
    pri = fun_09D0(var_40, var_32)
    var_56 = 0;
    var_64 = 0;
    var_72 = -7963071361348574373;
    var_80 = 24;
    pri = fun_8B58(var_72, var_64, var_56)
    var_88 = 0;
    var_96 = 0;
    var_104 = -7963079057929971850;
    var_112 = 24;
    pri = fun_8B58(var_104, var_96, var_88)
    var_120 = -7963071361348574373;
    var_128 = 8;
    pri = fun_0D40(var_120)
    var_136 = -7963079057929971850;
    var_144 = 8;
    pri = fun_0D40(var_136)
    var_152 = 80;
    var_160 = 8;
    var_168 = 16;
    pri = fun_0280(var_160, var_152)
    var_176 = 0;
    pri = fun_0350()
    var_184 = 0;
    var_192 = 0;
    var_200 = 0;
    var_208 = 180;
    pri = float(var_208)
    var_216 = pri;
    var_224 = -7963071361348574373;
    var_232 = 40;
    pri = fun_0AC0(var_224, var_216, var_208, var_200, var_192)
    var_240 = 4;
    var_248 = 8;
    pri = fun_0060(var_240)
    var_256 = 0;
    var_264 = 3;
    var_272 = 0;
    var_280 = 100;
    var_288 = -1;
    OP_PUSH2_C 3432412906843478649, -7963071361348574373
    var_296 = 56;
    pri = fun_2020(var_288, var_280, var_272, var_264, var_256, var_248, var_240)
    var_304 = 1;
    var_312 = 8;
    pri = fun_2168(var_304)
    var_320 = 0;
    pri = fun_2228()
    var_328 = -7963071361348574373;
    var_336 = 8;
    pri = fun_0B68(var_328)
    var_344 = 1;
    var_352 = 1;
    var_360 = -1;
    var_368 = -1;
    var_376 = 0;
    var_384 = 1;
    var_392 = -7963079057929971850;
    var_400 = 56;
    pri = fun_4AF0(var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_408 = 0;
    var_416 = 3;
    var_424 = 0;
    var_432 = 100;
    var_440 = -1;
    OP_PUSH2_C 6494321844281577514, -7963079057929971850
    var_448 = 56;
    pri = fun_2020(var_440, var_432, var_424, var_416, var_408, var_400, var_392)
    var_456 = 1;
    var_464 = 8;
    pri = fun_2168(var_456)
    var_472 = 0;
    pri = fun_2228()
    var_480 = 1;
    var_488 = 3;
    var_496 = 0;
    var_504 = 1;
    var_512 = -7963079057929971850;
    var_520 = 40;
    pri = fun_6E28(var_512, var_504, var_496, var_488, var_480)
    var_528 = -7963079057929971850;
    var_536 = 8;
    pri = fun_0D40(var_528)
    var_544 = 1;
    var_552 = 0;
    var_560 = 4641240890982006784;
    var_568 = 0;
    var_576 = 0;
    OP_PUSH4_C 4647239826423152640, 4657427901166125056, 4611686018427387904, -7963071361348574373
    var_584 = 72;
    pri = fun_0A48(var_576, var_568, var_560, var_552, var_544, var_536, var_528, var_520, var_512)
    var_592 = 1;
    var_600 = 0;
    var_608 = 4641240890982006784;
    var_616 = 0;
    var_624 = 0;
    OP_PUSH4_C 4647239826423152640, 4657781943910268928, 4611686018427387904, -7963079057929971850
    var_632 = 72;
    pri = fun_0A48(var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560)
    var_640 = 33872;
    pri = SoundPostEvent(var_640)
    var_648 = 0;
    var_656 = 1;
    var_664 = 0;
    var_672 = 1;
    var_680 = 0;
    var_688 = 95870857401176204;
    var_696 = 48;
    pri = fun_2550(var_688, var_680, var_672, var_664, var_656, var_648)
    var_704 = 30;
    var_712 = 8;
    pri = fun_0060(var_704)
    var_720 = 0;
    var_728 = 4631952216750555136;
    var_736 = 0;
    OP_PUSH5_C 4654540011885538836, 4634566415596755354, 4658010026602334781, 4657904957271184507, 4639395470665947546
    var_744 = 4657174793589411021;
    var_752 = 1;
    pri = EvCameraMove(var_752, var_744, var_736, var_728, var_720, var_712, var_704, var_696, var_688, var_680)
    var_760 = -7963071361348574373;
    var_768 = 8;
    pri = fun_0B68(var_760)
    var_776 = -7963079057929971850;
    var_784 = 8;
    pri = fun_0B68(var_776)
    var_792 = 34024;
    pri = SoundPostEvent(var_792)
    var_800 = 0;
    var_808 = 0;
    var_816 = 1;
    var_824 = 95870857401176204;
    var_832 = 32;
    pri = fun_2A78(var_824, var_816, var_808, var_800)
    var_840 = 0;
    var_848 = 0;
    var_856 = 0;
    var_864 = 0;
    OP_PUSH2_C 8802641224559852288, -988081304844711546
    var_872 = 48;
    pri = fun_0B10(var_864, var_856, var_848, var_840, var_832, var_824)
    var_880 = 4;
    var_888 = 8;
    pri = fun_0060(var_880)
    var_896 = 0;
    var_904 = 0;
    var_912 = 0;
    var_920 = 0;
    OP_PUSH2_C -988081304844711546, 8802641224559852288
    var_928 = 48;
    pri = fun_0B10(var_920, var_912, var_904, var_896, var_888, var_880)
    var_936 = -988081304844711546;
    var_944 = 8;
    pri = fun_0B68(var_936)
    var_952 = 8802641224559852288;
    var_960 = 8;
    pri = fun_0B68(var_952)
    var_968 = 6;
    var_976 = -988081304844711546;
    var_984 = 16;
    pri = fun_1400(var_976, var_968)
    var_992 = 1;
    var_1000 = 1;
    var_1008 = -1;
    var_1016 = -1;
    var_1024 = 0;
    var_1032 = 0;
    var_1040 = -988081304844711546;
    var_1048 = 56;
    pri = fun_4AF0(var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992)
    var_1056 = 0;
    var_1064 = 3;
    var_1072 = 0;
    var_1080 = 100;
    var_1088 = -1;
    OP_PUSH2_C -6052862502366062405, -988081304844711546
    var_1096 = 56;
    pri = fun_2020(var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040)
    var_1104 = 1;
    var_1112 = 8;
    pri = fun_2168(var_1104)
    var_1120 = 0;
    pri = fun_2228()
    var_1128 = 1;
    var_1136 = 3;
    var_1144 = 0;
    var_1152 = 0;
    var_1160 = -988081304844711546;
    var_1168 = 40;
    pri = fun_6E28(var_1160, var_1152, var_1144, var_1136, var_1128)
    var_1176 = -988081304844711546;
    var_1184 = 8;
    pri = fun_0D40(var_1176)
    var_1192 = 0;
    var_1200 = -7963071361348574373;
    var_1208 = 16;
    pri = fun_09D0(var_1200, var_1192)
    var_1216 = 0;
    var_1224 = -7963079057929971850;
    var_1232 = 16;
    pri = fun_09D0(var_1224, var_1216)
    var_1240 = 0;
    var_1248 = 3;
    var_1256 = 0;
    var_1264 = 100;
    var_1272 = -1;
    OP_PUSH2_C -6052855905296293139, -988081304844711546
    var_1280 = 56;
    pri = fun_2020(var_1272, var_1264, var_1256, var_1248, var_1240, var_1232, var_1224)
    var_1288 = 1;
    var_1296 = 8;
    pri = fun_2168(var_1288)
    var_1304 = 0;
    pri = fun_2228()
    var_1312 = 5;
    var_1320 = -988081304844711546;
    var_1328 = 16;
    pri = fun_1400(var_1320, var_1312)
    var_1336 = 1;
    var_1344 = -1;
    var_1352 = -1;
    var_1360 = 3;
    var_1368 = 0;
    var_1376 = 2;
    var_1384 = -988081304844711546;
    var_1392 = 56;
    pri = fun_2F10(var_1384, var_1376, var_1368, var_1360, var_1352, var_1344, var_1336)
    var_1400 = 5;
    var_1408 = 8;
    pri = fun_0060(var_1400)
    var_1416 = 1;
    var_1424 = 1;
    var_1432 = 16;
    pri = fun_9430(var_1424, var_1416)
    var_1440 = -988081304844711546;
    var_1448 = 8;
    pri = fun_0D40(var_1440)
    var_1456 = -988081304844711546;
    var_1464 = 8;
    pri = fun_1440(var_1456)
    var_1472 = 0;
    var_1480 = 4631952216750555136;
    var_1488 = 0;
    OP_PUSH5_C 4657180708961968456, 4640717347525324964, 4657537896309367767, 4659183095558008996, 4639021460790643261
    var_1496 = 4657513157297742807;
    var_1504 = 1;
    pri = EvCameraMove(var_1504, var_1496, var_1488, var_1480, var_1472, var_1464, var_1456, var_1448, var_1440, var_1432)
    var_1512 = 95870857401176204;
    var_1520 = 8;
    pri = fun_2D38(var_1512)
    var_1528 = 34184;
    pri = SoundPostEvent(var_1528)
    var_1536 = 10;
    var_1544 = 8;
    pri = fun_0060(var_1536)
    var_1552 = 0;
    var_1560 = 0;
    var_1568 = 0;
    var_1576 = 180;
    pri = float(var_1576)
    var_1584 = pri;
    var_1592 = 8802641224559852288;
    var_1600 = 40;
    pri = fun_0AC0(var_1592, var_1584, var_1576, var_1568, var_1560)
    var_1608 = 0;
    var_1616 = 0;
    var_1624 = 0;
    var_1632 = 180;
    pri = float(var_1632)
    var_1640 = pri;
    var_1648 = -988081304844711546;
    var_1656 = 40;
    pri = fun_0AC0(var_1648, var_1640, var_1632, var_1624, var_1616)
    var_1664 = 8802641224559852288;
    var_1672 = 8;
    pri = fun_0B68(var_1664)
    var_1680 = -988081304844711546;
    var_1688 = 8;
    pri = fun_0B68(var_1680)
    var_1696 = 30;
    var_1704 = 8;
    pri = fun_0060(var_1696)
    var_1712 = 1;
    var_1720 = 1;
    var_1728 = -1;
    var_1736 = -1;
    var_1744 = 0;
    var_1752 = 1;
    var_1760 = -988081304844711546;
    var_1768 = 56;
    pri = fun_4AF0(var_1760, var_1752, var_1744, var_1736, var_1728, var_1720, var_1712)
    var_1776 = 70;
    var_1784 = 8;
    pri = fun_0060(var_1776)
    var_1792 = 1;
    var_1800 = 3;
    var_1808 = 0;
    var_1816 = 1;
    var_1824 = -988081304844711546;
    var_1832 = 40;
    pri = fun_6E28(var_1824, var_1816, var_1808, var_1800, var_1792)
    var_1840 = -988081304844711546;
    var_1848 = 8;
    pri = fun_0D40(var_1840)
    var_1856 = 1;
    var_1864 = 1;
    var_1872 = -1;
    var_1880 = -1;
    var_1888 = 0;
    var_1896 = 4;
    var_1904 = -988081304844711546;
    var_1912 = 56;
    pri = fun_4AF0(var_1904, var_1896, var_1888, var_1880, var_1872, var_1864, var_1856)
    var_1920 = 30;
    var_1928 = 8;
    pri = fun_0060(var_1920)
    var_1936 = 1;
    var_1944 = 3;
    var_1952 = 0;
    var_1960 = 4;
    var_1968 = -988081304844711546;
    var_1976 = 40;
    pri = fun_6E28(var_1968, var_1960, var_1952, var_1944, var_1936)
    var_1984 = -988081304844711546;
    var_1992 = 8;
    pri = fun_0D40(var_1984)
    var_2000 = 0;
    var_2008 = 0;
    var_2016 = 0;
    var_2024 = -90;
    pri = float(var_2024)
    var_2032 = pri;
    var_2040 = -988081304844711546;
    var_2048 = 40;
    pri = fun_0AC0(var_2040, var_2032, var_2024, var_2016, var_2008)
    var_2056 = -988081304844711546;
    var_2064 = 8;
    pri = fun_0B68(var_2056)
    var_2072 = 1;
    var_2080 = 1;
    var_2088 = -1;
    var_2096 = -1;
    var_2104 = 0;
    var_2112 = 0;
    var_2120 = -988081304844711546;
    var_2128 = 56;
    pri = fun_4AF0(var_2120, var_2112, var_2104, var_2096, var_2088, var_2080, var_2072)
    var_2136 = 95870857401176204;
    var_2144 = 8;
    pri = fun_2D78(var_2136)
    var_2152 = 34408;
    pri = SoundPostEvent(var_2152)
    var_2160 = 1;
    var_2168 = 3;
    var_2176 = 0;
    var_2184 = 0;
    var_2192 = -988081304844711546;
    var_2200 = 40;
    pri = fun_6E28(var_2192, var_2184, var_2176, var_2168, var_2160)
    var_2208 = -988081304844711546;
    var_2216 = 8;
    pri = fun_0D40(var_2208)
    var_2224 = 0;
    var_2232 = 4631952216750555136;
    var_2240 = 0;
    OP_PUSH5_C 4657180708961968456, 4640717347525324964, 4657537896309367767, 4659183095558008996, 4639021460790643261
    var_2248 = 4657513157297742807;
    var_2256 = 1;
    pri = EvCameraMove(var_2256, var_2248, var_2240, var_2232, var_2224, var_2216, var_2208, var_2200, var_2192, var_2184)
    var_2264 = 1;
    var_2272 = 1;
    OP_PUSH4_C 4634274385308418048, 4653172791166631936, 4652482297864388608, -7963071361348574373
    var_2280 = 48;
    pri = fun_0900(var_2272, var_2264, var_2256, var_2248, var_2240, var_2232)
    var_2288 = 1;
    var_2296 = 1;
    OP_PUSH4_C 4634274385308418048, 4653823702050275328, 4652420725213233152, -7963079057929971850
    var_2304 = 48;
    pri = fun_0900(var_2296, var_2288, var_2280, var_2272, var_2264, var_2256)
    var_2312 = 1;
    var_2320 = 0;
    var_2328 = 4641240890982006784;
    var_2336 = 0;
    var_2344 = 0;
    OP_PUSH4_C 4654175545771163648, 4654333875445563392, 4611686018427387904, -7963071361348574373
    var_2352 = 72;
    pri = fun_0A48(var_2344, var_2336, var_2328, var_2320, var_2312, var_2304, var_2296, var_2288, var_2280)
    var_2360 = 1;
    var_2368 = 0;
    var_2376 = 4641240890982006784;
    var_2384 = 0;
    var_2392 = 0;
    OP_PUSH4_C 4654690117212962816, 4653920459073519616, 4611686018427387904, -7963079057929971850
    var_2400 = 72;
    pri = fun_0A48(var_2392, var_2384, var_2376, var_2368, var_2360, var_2352, var_2344, var_2336, var_2328)
    var_2408 = 34616;
    pri = SoundPostEvent(var_2408)
    var_2416 = 0;
    var_2424 = 1;
    var_2432 = 0;
    var_2440 = 0;
    var_2448 = 1;
    var_2456 = 95870857401176204;
    var_2464 = 48;
    pri = fun_2550(var_2456, var_2448, var_2440, var_2432, var_2424, var_2416)
    var_2472 = 0;
    var_2480 = 0;
    var_2488 = 0;
    var_2496 = 0;
    OP_PUSH2_C -7963079057929971850, 8802641224559852288
    var_2504 = 48;
    pri = fun_0B10(var_2496, var_2488, var_2480, var_2472, var_2464, var_2456)
    var_2512 = 0;
    var_2520 = 0;
    var_2528 = 0;
    var_2536 = 0;
    OP_PUSH2_C -7963071361348574373, -988081304844711546
    var_2544 = 48;
    pri = fun_0B10(var_2536, var_2528, var_2520, var_2512, var_2504, var_2496)
    var_2552 = 15;
    var_2560 = 8;
    pri = fun_0060(var_2552)
    var_2568 = 8802641224559852288;
    var_2576 = 8;
    pri = fun_0B68(var_2568)
    var_2584 = -988081304844711546;
    var_2592 = 8;
    pri = fun_0B68(var_2584)
    var_2600 = 0;
    var_2608 = 4631952216750555136;
    var_2616 = 0;
    OP_PUSH5_C 4654987469137578557, 4639034830852037018, 4654368268169280225, 4655283545628706079, 4638676653944172708
    var_2624 = 4654532623167400182;
    var_2632 = 1;
    pri = EvCameraMove(var_2632, var_2624, var_2616, var_2608, var_2600, var_2592, var_2584, var_2576, var_2568, var_2560)
    var_2640 = 34768;
    pri = SoundPostEvent(var_2640)
    var_2648 = 0;
    var_2656 = 0;
    var_2664 = 0;
    var_2672 = 95870857401176204;
    var_2680 = 32;
    pri = fun_2A78(var_2672, var_2664, var_2656, var_2648)
    var_2688 = -7963071361348574373;
    var_2696 = 8;
    pri = fun_0B68(var_2688)
    var_2704 = -7963079057929971850;
    var_2712 = 8;
    pri = fun_0B68(var_2704)
    var_2720 = 1;
    var_2728 = 1;
    var_2736 = -1;
    var_2744 = -1;
    var_2752 = 0;
    var_2760 = 1;
    var_2768 = -7963079057929971850;
    var_2776 = 56;
    pri = fun_4AF0(var_2768, var_2760, var_2752, var_2744, var_2736, var_2728, var_2720)
    var_2784 = 0;
    var_2792 = 3;
    var_2800 = 0;
    var_2808 = 100;
    var_2816 = -1;
    OP_PUSH2_C 176953509390321666, -7963079057929971850
    var_2824 = 56;
    pri = fun_2020(var_2816, var_2808, var_2800, var_2792, var_2784, var_2776, var_2768)
    var_2832 = 1;
    var_2840 = 8;
    pri = fun_2168(var_2832)
    var_2848 = 0;
    pri = fun_2228()
    var_2856 = 1;
    var_2864 = 3;
    var_2872 = 0;
    var_2880 = 1;
    var_2888 = -7963079057929971850;
    var_2896 = 40;
    pri = fun_6E28(var_2888, var_2880, var_2872, var_2864, var_2856)
    var_2904 = 1;
    var_2912 = 1;
    var_2920 = -1;
    var_2928 = -1;
    var_2936 = 0;
    var_2944 = 2;
    var_2952 = -7963071361348574373;
    var_2960 = 56;
    pri = fun_4AF0(var_2952, var_2944, var_2936, var_2928, var_2920, var_2912, var_2904)
    var_2968 = 0;
    var_2976 = 3;
    var_2984 = 0;
    var_2992 = 100;
    var_3000 = -1;
    OP_PUSH2_C 7009697256758061585, -7963071361348574373
    var_3008 = 56;
    pri = fun_2020(var_3000, var_2992, var_2984, var_2976, var_2968, var_2960, var_2952)
    var_3016 = 1;
    var_3024 = 8;
    pri = fun_2168(var_3016)
    var_3032 = 0;
    pri = fun_2228()
    var_3040 = 1;
    var_3048 = 3;
    var_3056 = 0;
    var_3064 = 2;
    var_3072 = -7963071361348574373;
    var_3080 = 40;
    pri = fun_6E28(var_3072, var_3064, var_3056, var_3048, var_3040)
    var_3088 = 10;
    var_3096 = 8;
    pri = fun_0060(var_3088)
    var_3104 = -7963071361348574373;
    var_3112 = 8;
    pri = fun_0D40(var_3104)
    var_3120 = -7963079057929971850;
    var_3128 = 8;
    pri = fun_0D40(var_3120)
    var_3136 = 0;
    var_3144 = 2;
    var_3152 = -7963071361348574373;
    var_3160 = 24;
    pri = fun_8B58(var_3152, var_3144, var_3136)
    var_3168 = 0;
    var_3176 = 2;
    var_3184 = -7963079057929971850;
    var_3192 = 24;
    pri = fun_8B58(var_3184, var_3176, var_3168)
    var_3200 = 30;
    var_3208 = 8;
    pri = fun_0060(var_3200)
    var_3216 = -1;
    var_3224 = 0;
    var_3232 = 0;
    var_3240 = 6281329270072155947;
    var_3248 = 310;
    var_3256 = 141;
    var_3264 = var_8;
    var_3272 = 56;
    pri = fun_2258(var_3264, var_3256, var_3248, var_3240, var_3232, var_3224, var_3216)
    var_3280 = 0;
    pri = fun_2380()
    OP_JZER lab_C0E8
    var_3288 = 0;
    pri = fun_2470()
// lab_C0E8
    var_8 = 0;
    var_16 = 0;
    var_24 = -7963071361348574373;
    var_32 = 24;
    pri = fun_8B58(var_24, var_16, var_8)
    var_40 = 0;
    var_48 = 0;
    var_56 = -7963079057929971850;
    var_64 = 24;
    pri = fun_8B58(var_56, var_48, var_40)
    var_72 = -7963071361348574373;
    var_80 = 8;
    pri = fun_0D40(var_72)
    var_88 = -7963079057929971850;
    var_96 = 8;
    pri = fun_0D40(var_88)
    var_104 = 80;
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
    var_176 = 1;
    var_184 = -7963079057929971850;
    var_192 = 56;
    pri = fun_2F10(var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_200 = 0;
    var_208 = 3;
    var_216 = 0;
    var_224 = 100;
    var_232 = -1;
    OP_PUSH2_C 176952409878693455, -7963079057929971850
    var_240 = 56;
    pri = fun_2020(var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_248 = 1;
    var_256 = 8;
    pri = fun_2168(var_248)
    var_264 = 0;
    pri = fun_2228()
    var_272 = 1;
    var_280 = 1;
    var_288 = -1;
    var_296 = -1;
    var_304 = 0;
    var_312 = 1;
    var_320 = -7963071361348574373;
    var_328 = 56;
    pri = fun_4AF0(var_320, var_312, var_304, var_296, var_288, var_280, var_272)
    var_336 = 0;
    var_344 = 3;
    var_352 = 0;
    var_360 = 100;
    var_368 = -1;
    OP_PUSH2_C 7009693958223176952, -7963071361348574373
    var_376 = 56;
    pri = fun_2020(var_368, var_360, var_352, var_344, var_336, var_328, var_320)
    var_384 = 1;
    var_392 = 8;
    pri = fun_2168(var_384)
    var_400 = 0;
    pri = fun_2228()
    var_408 = 1;
    var_416 = 3;
    var_424 = 0;
    var_432 = 1;
    var_440 = -7963071361348574373;
    var_448 = 40;
    pri = fun_6E28(var_440, var_432, var_424, var_416, var_408)
    var_456 = -7963071361348574373;
    var_464 = 8;
    pri = fun_0D40(var_456)
    var_472 = -7963079057929971850;
    var_480 = 8;
    pri = fun_0D40(var_472)
    var_488 = 1;
    var_496 = 0;
    var_504 = 4641240890982006784;
    var_512 = 0;
    var_520 = 0;
    OP_PUSH4_C 4653212373585231872, 4652662617771343872, 4611686018427387904, -7963071361348574373
    var_528 = 72;
    pri = fun_0A48(var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464, var_456)
    var_536 = 1;
    var_544 = 0;
    var_552 = 4641240890982006784;
    var_560 = 0;
    var_568 = 0;
    OP_PUSH4_C 4654004021957230592, 4652557064655077376, 4611686018427387904, -7963079057929971850
    var_576 = 72;
    pri = fun_0A48(var_568, var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504)
    var_584 = 34928;
    pri = SoundPostEvent(var_584)
    var_592 = 0;
    var_600 = 1;
    var_608 = 0;
    var_616 = 0;
    var_624 = 1;
    var_632 = 95870857401176204;
    var_640 = 48;
    pri = fun_2550(var_632, var_624, var_616, var_608, var_600, var_592)
    var_648 = 30;
    var_656 = 8;
    pri = fun_0060(var_648)
    var_664 = -7963071361348574373;
    var_672 = 8;
    pri = fun_0B68(var_664)
    var_680 = -7963079057929971850;
    var_688 = 8;
    pri = fun_0B68(var_680)
    var_696 = 35080;
    pri = SoundPostEvent(var_696)
    var_704 = 0;
    var_712 = 0;
    var_720 = 0;
    var_728 = 0;
    var_736 = 1;
    var_744 = 95870857401176204;
    var_752 = 48;
    pri = fun_2550(var_744, var_736, var_728, var_720, var_712, var_704)
    var_760 = 0;
    var_768 = 4631952216750555136;
    var_776 = 0;
    OP_PUSH5_C 4657180708961968456, 4640717347525324964, 4657537896309367767, 4659183095558008996, 4639021460790643261
    var_784 = 4657513157297742807;
    var_792 = 1;
    pri = EvCameraMove(var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736, var_728, var_720)
    var_800 = 0;
    var_808 = 0;
    var_816 = 0;
    var_824 = 90;
    pri = float(var_824)
    var_832 = pri;
    var_840 = 8802641224559852288;
    var_848 = 40;
    pri = fun_0AC0(var_840, var_832, var_824, var_816, var_808)
    var_856 = 0;
    var_864 = 0;
    var_872 = 0;
    var_880 = -90;
    pri = float(var_880)
    var_888 = pri;
    var_896 = -988081304844711546;
    var_904 = 40;
    pri = fun_0AC0(var_896, var_888, var_880, var_872, var_864)
    var_912 = 8802641224559852288;
    var_920 = 8;
    pri = fun_0B68(var_912)
    var_928 = -988081304844711546;
    var_936 = 8;
    pri = fun_0B68(var_928)
    var_944 = 1;
    var_952 = -1;
    var_960 = -1;
    var_968 = 3;
    var_976 = 0;
    var_984 = 2;
    var_992 = -988081304844711546;
    var_1000 = 56;
    pri = fun_2F10(var_992, var_984, var_976, var_968, var_960, var_952, var_944)
    var_1008 = 5;
    var_1016 = 8;
    pri = fun_0060(var_1008)
    var_1024 = 1;
    var_1032 = 1;
    var_1040 = 16;
    pri = fun_9430(var_1032, var_1024)
    var_1048 = -988081304844711546;
    var_1056 = 8;
    pri = fun_0D40(var_1048)
    var_1064 = 95870857401176204;
    var_1072 = 8;
    pri = fun_2D38(var_1064)
    var_1080 = 35240;
    pri = SoundPostEvent(var_1080)
    var_1088 = 0;
    var_1096 = 0;
    var_1104 = 0;
    var_1112 = 180;
    pri = float(var_1112)
    var_1120 = pri;
    var_1128 = 8802641224559852288;
    var_1136 = 40;
    pri = fun_0AC0(var_1128, var_1120, var_1112, var_1104, var_1096)
    var_1144 = 0;
    var_1152 = 0;
    var_1160 = 0;
    var_1168 = 180;
    pri = float(var_1168)
    var_1176 = pri;
    var_1184 = -988081304844711546;
    var_1192 = 40;
    pri = fun_0AC0(var_1184, var_1176, var_1168, var_1160, var_1152)
    var_1200 = 8802641224559852288;
    var_1208 = 8;
    pri = fun_0B68(var_1200)
    var_1216 = -988081304844711546;
    var_1224 = 8;
    pri = fun_0B68(var_1216)
    var_1232 = 30;
    var_1240 = 8;
    pri = fun_0060(var_1232)
    var_1248 = 0;
    var_1256 = 0;
    var_1264 = 0;
    var_1272 = -90;
    pri = float(var_1272)
    var_1280 = pri;
    var_1288 = -988081304844711546;
    var_1296 = 40;
    pri = fun_0AC0(var_1288, var_1280, var_1272, var_1264, var_1256)
    var_1304 = -988081304844711546;
    var_1312 = 8;
    pri = fun_0B68(var_1304)
    var_1320 = 1;
    var_1328 = 1;
    var_1336 = -1;
    var_1344 = -1;
    var_1352 = 0;
    var_1360 = 0;
    var_1368 = -988081304844711546;
    var_1376 = 56;
    pri = fun_4AF0(var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320)
    var_1384 = 70;
    var_1392 = 8;
    pri = fun_0060(var_1384)
    var_1400 = 1;
    var_1408 = -1;
    var_1416 = -1;
    var_1424 = 3;
    var_1432 = 0;
    var_1440 = 18;
    var_1448 = 8802641224559852288;
    var_1456 = 56;
    pri = fun_2F10(var_1448, var_1440, var_1432, var_1424, var_1416, var_1408, var_1400)
    var_1464 = 40;
    var_1472 = 8;
    pri = fun_0060(var_1464)
    var_1480 = 1;
    var_1488 = 3;
    var_1496 = 0;
    var_1504 = 0;
    var_1512 = -988081304844711546;
    var_1520 = 40;
    pri = fun_6E28(var_1512, var_1504, var_1496, var_1488, var_1480)
    var_1528 = -988081304844711546;
    var_1536 = 8;
    pri = fun_0D40(var_1528)
    var_1544 = 1;
    var_1552 = 1;
    var_1560 = -1;
    var_1568 = -1;
    var_1576 = 0;
    var_1584 = 1;
    var_1592 = -988081304844711546;
    var_1600 = 56;
    pri = fun_4AF0(var_1592, var_1584, var_1576, var_1568, var_1560, var_1552, var_1544)
    var_1608 = 95870857401176204;
    var_1616 = 8;
    pri = fun_2D78(var_1608)
    var_1624 = 35464;
    pri = SoundPostEvent(var_1624)
    var_1632 = 1;
    var_1640 = 3;
    var_1648 = 0;
    var_1656 = 1;
    var_1664 = -988081304844711546;
    var_1672 = 40;
    pri = fun_6E28(var_1664, var_1656, var_1648, var_1640, var_1632)
    var_1680 = -988081304844711546;
    var_1688 = 8;
    pri = fun_0D40(var_1680)
    var_1696 = 8802641224559852288;
    var_1704 = 8;
    pri = fun_0D40(var_1696)
    var_1712 = 1;
    var_1720 = 1;
    OP_PUSH4_C 4633641066610819072, 4653238761864298496, 4660341606979731456, -7963071361348574373
    var_1728 = 48;
    pri = fun_0900(var_1720, var_1712, var_1704, var_1696, var_1688, var_1680)
    var_1736 = 1;
    var_1744 = 1;
    OP_PUSH4_C 4633641066610819072, 4653854488375853056, 4660541718095986688, -7963079057929971850
    var_1752 = 48;
    pri = fun_0900(var_1744, var_1736, var_1728, var_1720, var_1712, var_1704)
    var_1760 = 1;
    var_1768 = 0;
    var_1776 = 4641240890982006784;
    var_1784 = 0;
    var_1792 = 0;
    OP_PUSH4_C 4654184341864185856, 4659574147863543808, 4611686018427387904, -7963071361348574373
    var_1800 = 72;
    pri = fun_0A48(var_1792, var_1784, var_1776, var_1768, var_1760, var_1752, var_1744, var_1736, var_1728)
    var_1808 = 1;
    var_1816 = 0;
    var_1824 = 4641240890982006784;
    var_1832 = 0;
    var_1840 = 0;
    OP_PUSH4_C 4654786874236207104, 4659763263863521280, 4611686018427387904, -7963079057929971850
    var_1848 = 72;
    pri = fun_0A48(var_1840, var_1832, var_1824, var_1816, var_1808, var_1800, var_1792, var_1784, var_1776)
    var_1856 = 35672;
    pri = SoundPostEvent(var_1856)
    var_1864 = 0;
    var_1872 = 1;
    var_1880 = 1;
    var_1888 = 0;
    var_1896 = 0;
    var_1904 = 95870857401176204;
    var_1912 = 48;
    pri = fun_2550(var_1904, var_1896, var_1888, var_1880, var_1872, var_1864)
    var_1920 = 0;
    var_1928 = 4631952216750555136;
    var_1936 = 0;
    OP_PUSH5_C 4655102653975704371, 4639523541780350894, 4659541008583082639, 4655677390693775442, 4639472172597101199
    var_1944 = 4659449947030070231;
    var_1952 = 1;
    pri = EvCameraMove(var_1952, var_1944, var_1936, var_1928, var_1920, var_1912, var_1904, var_1896, var_1888, var_1880)
    var_1960 = 0;
    var_1968 = 0;
    var_1976 = 0;
    var_1984 = 0;
    OP_PUSH2_C -7963079057929971850, 8802641224559852288
    var_1992 = 48;
    pri = fun_0B10(var_1984, var_1976, var_1968, var_1960, var_1952, var_1944)
    var_2000 = 0;
    var_2008 = 0;
    var_2016 = 0;
    var_2024 = 0;
    OP_PUSH2_C -7963071361348574373, -988081304844711546
    var_2032 = 48;
    pri = fun_0B10(var_2024, var_2016, var_2008, var_2000, var_1992, var_1984)
    var_2040 = 10;
    var_2048 = 8;
    pri = fun_0060(var_2040)
    var_2056 = 8802641224559852288;
    var_2064 = 8;
    pri = fun_0B68(var_2056)
    var_2072 = -988081304844711546;
    var_2080 = 8;
    pri = fun_0B68(var_2072)
    var_2088 = 35824;
    pri = SoundPostEvent(var_2088)
    var_2096 = 0;
    var_2104 = 0;
    var_2112 = 2;
    var_2120 = 95870857401176204;
    var_2128 = 32;
    pri = fun_2A78(var_2120, var_2112, var_2104, var_2096)
    var_2136 = -7963071361348574373;
    var_2144 = 8;
    pri = fun_0B68(var_2136)
    var_2152 = -7963079057929971850;
    var_2160 = 8;
    pri = fun_0B68(var_2152)
    var_2168 = 1;
    var_2176 = 1;
    var_2184 = -1;
    var_2192 = -1;
    var_2200 = 0;
    var_2208 = 2;
    var_2216 = -7963079057929971850;
    var_2224 = 56;
    pri = fun_4AF0(var_2216, var_2208, var_2200, var_2192, var_2184, var_2176, var_2168)
    var_2232 = 0;
    var_2240 = 3;
    var_2248 = 0;
    var_2256 = 100;
    var_2264 = -1;
    OP_PUSH2_C -8497616877802106500, -7963079057929971850
    var_2272 = 56;
    pri = fun_2020(var_2264, var_2256, var_2248, var_2240, var_2232, var_2224, var_2216)
    var_2280 = 1;
    var_2288 = 8;
    pri = fun_2168(var_2280)
    var_2296 = 0;
    pri = fun_2228()
    var_2304 = 1;
    var_2312 = 3;
    var_2320 = 0;
    var_2328 = 2;
    var_2336 = -7963079057929971850;
    var_2344 = 40;
    pri = fun_6E28(var_2336, var_2328, var_2320, var_2312, var_2304)
    var_2352 = 1;
    var_2360 = 1;
    var_2368 = -1;
    var_2376 = -1;
    var_2384 = 0;
    var_2392 = 1;
    var_2400 = -7963071361348574373;
    var_2408 = 56;
    pri = fun_4AF0(var_2400, var_2392, var_2384, var_2376, var_2368, var_2360, var_2352)
    var_2416 = 0;
    var_2424 = 3;
    var_2432 = 0;
    var_2440 = 100;
    var_2448 = -1;
    OP_PUSH2_C 6776613909904473907, -7963071361348574373
    var_2456 = 56;
    pri = fun_2020(var_2448, var_2440, var_2432, var_2424, var_2416, var_2408, var_2400)
    var_2464 = 1;
    var_2472 = 8;
    pri = fun_2168(var_2464)
    var_2480 = 0;
    pri = fun_2228()
    var_2488 = 1;
    var_2496 = 3;
    var_2504 = 0;
    var_2512 = 1;
    var_2520 = -7963071361348574373;
    var_2528 = 40;
    pri = fun_6E28(var_2520, var_2512, var_2504, var_2496, var_2488)
    var_2536 = 10;
    var_2544 = 8;
    pri = fun_0060(var_2536)
    var_2552 = -7963071361348574373;
    var_2560 = 8;
    pri = fun_0D40(var_2552)
    var_2568 = -7963079057929971850;
    var_2576 = 8;
    pri = fun_0D40(var_2568)
    var_2584 = 0;
    var_2592 = 2;
    var_2600 = -7963071361348574373;
    var_2608 = 24;
    pri = fun_8B58(var_2600, var_2592, var_2584)
    var_2616 = 0;
    var_2624 = 2;
    var_2632 = -7963079057929971850;
    var_2640 = 24;
    pri = fun_8B58(var_2632, var_2624, var_2616)
    var_2648 = 30;
    var_2656 = 8;
    pri = fun_0060(var_2648)
    var_2664 = -1;
    var_2672 = 0;
    var_2680 = 0;
    var_2688 = 6281329270072155947;
    var_2696 = 311;
    var_2704 = 142;
    var_2712 = var_8;
    var_2720 = 56;
    pri = fun_2258(var_2712, var_2704, var_2696, var_2688, var_2680, var_2672, var_2664)
    var_2728 = 0;
    pri = fun_2380()
    OP_JZER lab_D5C0
    var_2736 = 0;
    pri = fun_2470()
// lab_D5C0
    var_8 = 0;
    var_16 = 0;
    var_24 = -7963071361348574373;
    var_32 = 24;
    pri = fun_8B58(var_24, var_16, var_8)
    var_40 = 0;
    var_48 = 0;
    var_56 = -7963079057929971850;
    var_64 = 24;
    pri = fun_8B58(var_56, var_48, var_40)
    var_72 = -7963071361348574373;
    var_80 = 8;
    pri = fun_0D40(var_72)
    var_88 = -7963079057929971850;
    var_96 = 8;
    pri = fun_0D40(var_88)
    var_104 = 80;
    var_112 = 8;
    var_120 = 16;
    pri = fun_0280(var_112, var_104)
    var_128 = 0;
    pri = fun_0350()
    var_136 = 1;
    var_144 = 1;
    var_152 = -1;
    var_160 = -1;
    var_168 = 0;
    var_176 = 1;
    var_184 = -7963079057929971850;
    var_192 = 56;
    pri = fun_4AF0(var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_200 = 0;
    var_208 = 3;
    var_216 = 0;
    var_224 = 100;
    var_232 = -1;
    OP_PUSH2_C -8497613579267221867, -7963079057929971850
    var_240 = 56;
    pri = fun_2020(var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_248 = 1;
    var_256 = 8;
    pri = fun_2168(var_248)
    var_264 = 0;
    pri = fun_2228()
    var_272 = 1;
    var_280 = 3;
    var_288 = 0;
    var_296 = 1;
    var_304 = -7963079057929971850;
    var_312 = 40;
    pri = fun_6E28(var_304, var_296, var_288, var_280, var_272)
    var_320 = 1;
    var_328 = 1;
    var_336 = -1;
    var_344 = -1;
    var_352 = 0;
    var_360 = 1;
    var_368 = -7963071361348574373;
    var_376 = 56;
    pri = fun_4AF0(var_368, var_360, var_352, var_344, var_336, var_328, var_320)
    var_384 = 0;
    var_392 = 3;
    var_400 = 0;
    var_408 = 100;
    var_416 = -1;
    OP_PUSH2_C 6776615009416102118, -7963071361348574373
    var_424 = 56;
    pri = fun_2020(var_416, var_408, var_400, var_392, var_384, var_376, var_368)
    var_432 = 1;
    var_440 = 8;
    pri = fun_2168(var_432)
    var_448 = 0;
    pri = fun_2228()
    var_456 = 1;
    var_464 = 3;
    var_472 = 0;
    var_480 = 1;
    var_488 = -7963071361348574373;
    var_496 = 40;
    pri = fun_6E28(var_488, var_480, var_472, var_464, var_456)
    var_504 = -7963071361348574373;
    var_512 = 8;
    pri = fun_0D40(var_504)
    var_520 = -7963079057929971850;
    var_528 = 8;
    pri = fun_0D40(var_520)
    var_536 = 1;
    var_544 = 0;
    var_552 = 4641240890982006784;
    var_560 = 0;
    var_568 = 0;
    OP_PUSH4_C 4653238761864298496, 4660341606979731456, 4611686018427387904, -7963071361348574373
    var_576 = 72;
    pri = fun_0A48(var_568, var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504)
    var_584 = 1;
    var_592 = 0;
    var_600 = 4641240890982006784;
    var_608 = 0;
    var_616 = 0;
    OP_PUSH4_C 4653854488375853056, 4660541718095986688, 4611686018427387904, -7963079057929971850
    var_624 = 72;
    pri = fun_0A48(var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552)
    var_632 = 35984;
    pri = SoundPostEvent(var_632)
    var_640 = 0;
    var_648 = 1;
    var_656 = 1;
    var_664 = 0;
    var_672 = 0;
    var_680 = 95870857401176204;
    var_688 = 48;
    pri = fun_2550(var_680, var_672, var_664, var_656, var_648, var_640)
    var_696 = 30;
    var_704 = 8;
    pri = fun_0060(var_696)
    var_712 = 0;
    var_720 = 4631952216750555136;
    var_728 = 0;
    OP_PUSH5_C 4657058465259192320, 4639330027733862318, 4657583635993083249, 4657624735737729516, 4639402155696644424
    var_736 = 4657228581698241823;
    var_744 = 1;
    pri = EvCameraMove(var_744, var_736, var_728, var_720, var_712, var_704, var_696, var_688, var_680, var_672)
    var_752 = 0;
    pri = fun_24C0()
    var_760 = -7963071361348574373;
    var_768 = 8;
    pri = fun_0B68(var_760)
    var_776 = -7963079057929971850;
    var_784 = 8;
    pri = fun_0B68(var_776)
    var_792 = 36136;
    pri = SoundPostEvent(var_792)
    var_800 = 0;
    var_808 = 0;
    var_816 = 2;
    var_824 = 95870857401176204;
    var_832 = 32;
    pri = fun_2A78(var_824, var_816, var_808, var_800)
    var_840 = 0;
    var_848 = 0;
    var_856 = 0;
    var_864 = 0;
    OP_PUSH2_C 8802641224559852288, -988081304844711546
    var_872 = 48;
    pri = fun_0B10(var_864, var_856, var_848, var_840, var_832, var_824)
    var_880 = 4;
    var_888 = 8;
    pri = fun_0060(var_880)
    var_896 = 0;
    var_904 = 0;
    var_912 = 0;
    var_920 = 0;
    OP_PUSH2_C -988081304844711546, 8802641224559852288
    var_928 = 48;
    pri = fun_0B10(var_920, var_912, var_904, var_896, var_888, var_880)
    var_936 = 8802641224559852288;
    var_944 = 8;
    pri = fun_0B68(var_936)
    var_952 = -988081304844711546;
    var_960 = 8;
    pri = fun_0B68(var_952)
    var_968 = 1;
    var_976 = -1;
    var_984 = -1;
    var_992 = 3;
    var_1000 = 0;
    var_1008 = 2;
    var_1016 = -988081304844711546;
    var_1024 = 56;
    pri = fun_2F10(var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968)
    var_1032 = 5;
    var_1040 = 8;
    pri = fun_0060(var_1032)
    var_1048 = 1;
    var_1056 = 1;
    var_1064 = 16;
    pri = fun_9430(var_1056, var_1048)
    var_1072 = -988081304844711546;
    var_1080 = 8;
    pri = fun_0D40(var_1072)
    var_1088 = 6;
    var_1096 = -988081304844711546;
    var_1104 = 16;
    pri = fun_1400(var_1096, var_1088)
    var_1112 = 1;
    var_1120 = 1;
    var_1128 = -1;
    var_1136 = -1;
    var_1144 = 0;
    var_1152 = 22;
    var_1160 = -988081304844711546;
    var_1168 = 56;
    pri = fun_4AF0(var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112)
    var_1176 = 0;
    var_1184 = 3;
    var_1192 = 0;
    var_1200 = 100;
    var_1208 = -1;
    OP_PUSH2_C -6052857004807921350, -988081304844711546
    var_1216 = 56;
    pri = fun_2020(var_1208, var_1200, var_1192, var_1184, var_1176, var_1168, var_1160)
    var_1224 = 1;
    var_1232 = 8;
    pri = fun_2168(var_1224)
    var_1240 = 0;
    pri = fun_2228()
    var_1248 = 36296;
    var_1256 = -988081304844711546;
    var_1264 = 16;
    pri = fun_0F40(var_1256, var_1248)
    var_1272 = 1;
    var_1280 = 3;
    var_1288 = 0;
    var_1296 = 22;
    var_1304 = -988081304844711546;
    var_1312 = 40;
    pri = fun_6E28(var_1304, var_1296, var_1288, var_1280, var_1272)
    var_1320 = 1;
    var_1328 = -1;
    var_1336 = -1;
    var_1344 = 3;
    var_1352 = 0;
    var_1360 = 19;
    var_1368 = 8802641224559852288;
    var_1376 = 56;
    pri = fun_2F10(var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320)
    var_1384 = 36472;
    pri = SoundPostEvent(var_1384)
    var_1392 = 95870857401176204;
    var_1400 = 8;
    pri = fun_2D38(var_1392)
    var_1408 = 36608;
    pri = SoundPostEvent(var_1408)
    var_1416 = -988081304844711546;
    var_1424 = 8;
    pri = fun_0D40(var_1416)
    var_1432 = 8802641224559852288;
    var_1440 = 8;
    pri = fun_0D40(var_1432)
    var_1448 = 0;
    var_1456 = 0;
    var_1464 = 0;
    var_1472 = 180;
    pri = float(var_1472)
    var_1480 = pri;
    var_1488 = 8802641224559852288;
    var_1496 = 40;
    pri = fun_0AC0(var_1488, var_1480, var_1472, var_1464, var_1456)
    var_1504 = 0;
    var_1512 = 0;
    var_1520 = 0;
    var_1528 = 180;
    pri = float(var_1528)
    var_1536 = pri;
    var_1544 = -988081304844711546;
    var_1552 = 40;
    pri = fun_0AC0(var_1544, var_1536, var_1528, var_1520, var_1512)
    var_1560 = 40;
    var_1568 = 8;
    pri = fun_0060(var_1560)
    var_1576 = 8802641224559852288;
    var_1584 = 8;
    pri = fun_0B68(var_1576)
    var_1592 = -988081304844711546;
    var_1600 = 8;
    pri = fun_0B68(var_1592)
    var_1608 = 0;
    var_1616 = 4631952216750555136;
    var_1624 = 3;
    OP_PUSH5_C 4657435949591240376, 4645190336748978176, 4657505460716348375, 4657848310432121487, 4638753355875326362
    var_1632 = 4657499149519604941;
    var_1640 = 140;
    pri = EvCameraMove(var_1640, var_1632, var_1624, var_1616, var_1608, var_1600, var_1592, var_1584, var_1576, var_1568)
    var_1648 = 1;
    var_1656 = 1;
    var_1664 = -1;
    var_1672 = -1;
    var_1680 = 0;
    var_1688 = 23;
    var_1696 = -988081304844711546;
    var_1704 = 56;
    pri = fun_4AF0(var_1696, var_1688, var_1680, var_1672, var_1664, var_1656, var_1648)
    var_1712 = 90;
    var_1720 = 8;
    pri = fun_0060(var_1712)
    var_1728 = 1;
    var_1736 = 3;
    var_1744 = 0;
    var_1752 = 23;
    var_1760 = -988081304844711546;
    var_1768 = 40;
    pri = fun_6E28(var_1760, var_1752, var_1744, var_1736, var_1728)
    var_1776 = 30;
    var_1784 = 8;
    pri = fun_0060(var_1776)
    var_1792 = -988081304844711546;
    var_1800 = 8;
    pri = fun_0D40(var_1792)
    var_1808 = -988081304844711546;
    var_1816 = 8;
    pri = fun_14B0(var_1808)
    var_1824 = 1;
    var_1832 = 0;
    var_1840 = 32;
    var_1848 = 8;
    var_1856 = 32;
    pri = fun_02E0(var_1848, var_1840, var_1832, var_1824)
    var_1864 = 0;
    pri = fun_0350()
    var_1872 = 36832;
    pri = SoundPostEvent(var_1872)
    var_1880 = 3;
    var_1888 = 0;
    pri = EvCameraEnd(var_1888, var_1880)
    pri = 0;
    return pri;
}
// fun_E440
fun_E440() {
    pri = 0;
    return pri;
}
// fun_E458
fun_E458() {
    var_8 = -988081304844711546;
    var_16 = 8;
    pri = fun_08A8(var_8)
    var_24 = -7856618442502275419;
    var_32 = 8;
    pri = fun_0728(var_24)
    var_40 = 8594007528122057589;
    var_48 = 8;
    pri = fun_0728(var_40)
    var_56 = -8328680712272566952;
    var_64 = 8;
    pri = fun_0728(var_56)
    var_72 = 3447269533191472208;
    var_80 = 8;
    pri = fun_0728(var_72)
    var_88 = -7963079057929971850;
    var_96 = 8;
    pri = fun_08A8(var_88)
    var_104 = -7963071361348574373;
    var_112 = 8;
    pri = fun_08A8(var_104)
    var_120 = 1640;
    var_128 = 8;
    pri = fun_95F0(var_120)
    pri = 0;
    return pri;
}
// fun_E5A8
fun_E5A8() {
    var_8 = 0;
    pri = fun_0758()
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 180;
    pri = float(var_56)
    var_64 = pri;
    var_72 = 19554;
    pri = float(var_72)
    var_80 = pri;
    var_88 = 19814;
    pri = float(var_88)
    var_96 = pri;
    OP_PUSH2_C 7241591816491295918, 1367339687519336843
    var_104 = 80;
    pri = fun_04A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    var_112 = -4456463511826658544;
    pri = ReserveScript(var_112)
    pri = 0;
    return pri;
}
// fun_E6D0
fun_E6D0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_9788()
    var_16 = 0;
    pri = fun_97E0()
    var_24 = 0;
    pri = fun_9848()
    var_32 = 0;
    pri = fun_9878()
    var_40 = 0;
    pri = fun_E440()
    var_48 = 0;
    pri = fun_E458()
    var_56 = 0;
    pri = fun_E5A8()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_E7C0
fun_E7C0() {
    var_8 = 0;
    pri = fun_97E0()
    var_16 = 0;
    pri = fun_E458()
    pri = 0;
    return pri;
}
